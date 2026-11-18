// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 78

// <lambda_3> @ 14733db50

<lambda_3> * __thiscall
`FActiveSound::UpdateWaveInstances'::__l121::<lambda_3>::<lambda_3>(void *this,<lambda_3> *param_1)

{
  undefined8 *puVar1;
  TMap<unsigned_int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,float,0>_>
  *pTVar2;
  undefined1 *_Src;
  
  puVar1 = (undefined8 *)((longlong)this + 8);
  *(ulong64 *)this = param_1->AudioComponentIDCopy;
  *puVar1 = 0;
  pTVar2 = &param_1->WaveInstancePlaybackTimes;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x34) = 0x80;
  *(undefined4 *)((longlong)this + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if ((TMap<unsigned_int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,float,0>_>
       *)puVar1 != pTVar2) {
    *puVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    *(undefined4 *)((longlong)this + 0x10) =
         *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0x8;
    _Src = &(param_1->WaveInstancePlaybackTimes).field_0x10;
    *(undefined4 *)((longlong)this + 0x14) =
         *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0xc;
    *(undefined8 *)&(param_1->WaveInstancePlaybackTimes).field_0x8 = 0;
    if ((undefined1 *)((longlong)this + 0x18) != _Src) {
      if (*(longlong *)&(param_1->WaveInstancePlaybackTimes).field_0x20 == 0) {
        memmove((undefined1 *)((longlong)this + 0x18),_Src,0x10);
      }
      if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)this + 0x28));
      }
      *(undefined8 *)((longlong)this + 0x28) =
           *(undefined8 *)&(param_1->WaveInstancePlaybackTimes).field_0x20;
      *(undefined8 *)&(param_1->WaveInstancePlaybackTimes).field_0x20 = 0;
      *(undefined4 *)((longlong)this + 0x30) =
           *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0x28;
      *(undefined4 *)((longlong)this + 0x34) =
           *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0x2c;
      *(undefined8 *)&(param_1->WaveInstancePlaybackTimes).field_0x28 = 0;
    }
    *(undefined4 *)((longlong)this + 0x38) =
         *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0x30;
    *(undefined4 *)((longlong)this + 0x3c) =
         *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0x34;
    *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->WaveInstancePlaybackTimes).field_0x40 == 0) {
    *(undefined4 *)((longlong)this + 0x40) =
         *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0x38;
  }
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  *(undefined8 *)((longlong)this + 0x48) =
       *(undefined8 *)&(param_1->WaveInstancePlaybackTimes).field_0x40;
  *(undefined8 *)&(param_1->WaveInstancePlaybackTimes).field_0x40 = 0;
  *(undefined4 *)((longlong)this + 0x50) =
       *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0x48;
  *(undefined4 *)&(param_1->WaveInstancePlaybackTimes).field_0x48 = 0;
  return this;
}

// FActiveSound @ 14733e2d0

FActiveSound * __thiscall FActiveSound::FActiveSound(FActiveSound *this,FActiveSound *param_1)

{
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
  *pTVar3;
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TTuple<EBusSendType,FSoundSourceBusSendInfo>,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong *plVar7;
  int iVar8;
  USoundBase *pUVar9;
  USoundEffectSourcePresetChain *pUVar10;
  USoundAttenuation *pUVar11;
  USoundClass *pUVar12;
  FSoundSubmixSendInfo *pFVar13;
  FSoundSourceBusSendInfo *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  FAudioVolumeSubmixSendSettings *pFVar17;
  TTuple<EBusSendType,FSoundSourceBusSendInfo> *pTVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  EFaderCurve EVar23;
  undefined3 uVar24;
  bool bVar25;
  longlong lVar26;
  byte bVar27;
  int *piVar28;
  
  *(undefined ***)this = &___7FActiveSound__6B_;
  (this->World).WeakPtr = (param_1->World).WeakPtr;
  this->WorldID = param_1->WorldID;
  pUVar9 = (param_1->Sound).field0_0x0.DebugPtr;
  (this->Sound).field0_0x0.DebugPtr = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (USoundBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pUVar10 = (param_1->SourceEffectChain).field0_0x0.DebugPtr;
  (this->SourceEffectChain).field0_0x0.DebugPtr = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (USoundEffectSourcePresetChain *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pUVar11 = (param_1->SoundAttenuation).field0_0x0.DebugPtr;
  (this->SoundAttenuation).field0_0x0.DebugPtr = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (USoundAttenuation *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  this->AudioComponentID = param_1->AudioComponentID;
  this->AudioComponentUserID = param_1->AudioComponentUserID;
  this->OwnerID = param_1->OwnerID;
  this->AudioComponentName = param_1->AudioComponentName;
  this->OwnerName = param_1->OwnerName;
  this->OwnerKey = param_1->OwnerKey;
  this->PlayOrder = param_1->PlayOrder;
  this->AudioDevice = param_1->AudioDevice;
  *(undefined8 *)&(this->ConcurrencyGroupData).field_0x0 = 0;
  *(undefined8 *)&(this->ConcurrencyGroupData).field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencyGroupData).field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x34 = 0;
  *(undefined8 *)&(this->ConcurrencyGroupData).field_0x40 = 0;
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x48 = 0;
  TSet<TTuple<unsigned_int,FConcurrencySoundData>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,FConcurrencySoundData>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>,FDefaultSetAllocator>
               *)&this->ConcurrencyGroupData,
              (TSet<TTuple<unsigned_int,FConcurrencySoundData>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>,FDefaultSetAllocator>
               *)&param_1->ConcurrencyGroupData);
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  ::operator=(&this->ConcurrencySet,&param_1->ConcurrencySet);
  pUVar12 = (param_1->SoundClassOverride).field0_0x0.DebugPtr;
  (this->SoundClassOverride).field0_0x0.DebugPtr = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (USoundClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  pTVar1 = &this->SoundSubmixSendsOverride;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar28 = &(this->SoundSubmixSendsOverride).ArrayMax;
  iVar8 = (param_1->SoundSubmixSendsOverride).ArrayNum;
  pFVar13 = (FSoundSubmixSendInfo *)(param_1->SoundSubmixSendsOverride).AllocatorInstance.Data;
  (this->SoundSubmixSendsOverride).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar8,0,&pTVar1->AllocatorInstance,iVar8,piVar28);
    ConstructItems<FSoundSubmixSendInfo,FSoundSubmixSendInfo,int>
              ((pTVar1->AllocatorInstance).Data,pFVar13,iVar8);
  }
  pTVar2 = this->BusSendsOverride;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar28 = &this->BusSendsOverride[0].ArrayMax;
  iVar8 = param_1->BusSendsOverride[0].ArrayNum;
  pFVar14 = (FSoundSourceBusSendInfo *)param_1->BusSendsOverride[0].AllocatorInstance.Data;
  this->BusSendsOverride[0].ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar8,0,&pTVar2->AllocatorInstance,iVar8,piVar28);
    ConstructItems<FSoundSourceBusSendInfo,FSoundSourceBusSendInfo,int>
              ((pTVar2->AllocatorInstance).Data,pFVar14,iVar8);
  }
  this->BusSendsOverride[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar8 = param_1->BusSendsOverride[1].ArrayNum;
  pFVar14 = (FSoundSourceBusSendInfo *)param_1->BusSendsOverride[1].AllocatorInstance.Data;
  this->BusSendsOverride[1].ArrayNum = iVar8;
  piVar28 = &this->BusSendsOverride[1].ArrayMax;
  if (iVar8 == 0) {
    *piVar28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar8,0,&this->BusSendsOverride[1].AllocatorInstance,iVar8,piVar28);
    ConstructItems<FSoundSourceBusSendInfo,FSoundSourceBusSendInfo,int>
              (this->BusSendsOverride[1].AllocatorInstance.Data,pFVar14,iVar8);
  }
  *(undefined8 *)&(this->WaveInstances).field_0x0 = 0;
  *(undefined8 *)&(this->WaveInstances).field_0x8 = 0;
  *(undefined8 *)&(this->WaveInstances).field_0x20 = 0;
  *(undefined4 *)&(this->WaveInstances).field_0x28 = 0;
  *(undefined4 *)&(this->WaveInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->WaveInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WaveInstances).field_0x34 = 0;
  *(undefined8 *)&(this->WaveInstances).field_0x40 = 0;
  *(undefined4 *)&(this->WaveInstances).field_0x48 = 0;
  TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
               *)&this->WaveInstances,
              (TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
               *)&param_1->WaveInstances);
  (this->InstanceTransmitter).Object = (param_1->InstanceTransmitter).Object;
  pTVar15 = (param_1->InstanceTransmitter).SharedReferenceCount.ReferenceController;
  (this->InstanceTransmitter).SharedReferenceCount.ReferenceController = pTVar15;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->VirtualizationModeOverride = param_1->VirtualizationModeOverride;
  bVar27 = (this->bEnableVirtualizationModeOverride ^ param_1->bEnableVirtualizationModeOverride) &
           1 ^ this->field_0x1a1;
  this->field_0x1a1 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a1) & 2 ^ bVar27;
  this->field_0x1a1 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a1) & 4 ^ bVar27;
  this->field_0x1a1 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a1) & 8 ^ bVar27;
  this->field_0x1a1 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a1) & 0x10 ^ bVar27;
  this->field_0x1a1 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a1) & 0x20 ^ bVar27;
  this->field_0x1a1 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a1) & 0x40 ^ bVar27;
  this->field_0x1a1 = bVar27;
  this->field_0x1a1 = (bVar27 ^ param_1->field_0x1a1) & 0x7f ^ param_1->field_0x1a1;
  bVar27 = (this->bHasVirtualized ^ param_1->bHasVirtualized) & 1 ^ this->field_0x1a2;
  this->field_0x1a2 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a2) & 2 ^ bVar27;
  this->field_0x1a2 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a2) & 4 ^ bVar27;
  this->field_0x1a2 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a2) & 8 ^ bVar27;
  this->field_0x1a2 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a2) & 0x10 ^ bVar27;
  this->field_0x1a2 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a2) & 0x20 ^ bVar27;
  this->field_0x1a2 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a2) & 0x40 ^ bVar27;
  this->field_0x1a2 = bVar27;
  this->field_0x1a2 = (bVar27 ^ param_1->field_0x1a2) & 0x7f ^ param_1->field_0x1a2;
  bVar27 = (this->bIsUISound ^ param_1->bIsUISound) & 1 ^ this->field_0x1a3;
  this->field_0x1a3 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a3) & 2 ^ bVar27;
  this->field_0x1a3 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a3) & 4 ^ bVar27;
  this->field_0x1a3 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a3) & 8 ^ bVar27;
  this->field_0x1a3 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a3) & 0x10 ^ bVar27;
  this->field_0x1a3 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a3) & 0x20 ^ bVar27;
  this->field_0x1a3 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a3) & 0x40 ^ bVar27;
  this->field_0x1a3 = bVar27;
  this->field_0x1a3 = (bVar27 ^ param_1->field_0x1a3) & 0x7f ^ param_1->field_0x1a3;
  bVar27 = (this->bEnableLowPassFilter ^ param_1->bEnableLowPassFilter) & 1 ^ this->field_0x1a4;
  this->field_0x1a4 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a4) & 2 ^ bVar27;
  this->field_0x1a4 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a4) & 4 ^ bVar27;
  this->field_0x1a4 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a4) & 8 ^ bVar27;
  this->field_0x1a4 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a4) & 0x10 ^ bVar27;
  this->field_0x1a4 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a4) & 0x20 ^ bVar27;
  this->field_0x1a4 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a4) & 0x40 ^ bVar27;
  this->field_0x1a4 = bVar27;
  pTVar3 = &this->SeekRestartTimes;
  this->field_0x1a4 = (bVar27 ^ param_1->field_0x1a4) & 0x7f ^ param_1->field_0x1a4;
  bVar27 = (this->bHasActiveBusSendRoutingOverride ^ param_1->bHasActiveBusSendRoutingOverride) & 1
           ^ this->field_0x1a5;
  this->field_0x1a5 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a5) & 2 ^ bVar27;
  this->field_0x1a5 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a5) & 4 ^ bVar27;
  this->field_0x1a5 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a5) & 8 ^ bVar27;
  this->field_0x1a5 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a5) & 0x10 ^ bVar27;
  this->field_0x1a5 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a5) & 0x20 ^ bVar27;
  this->field_0x1a5 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x1a5) & 0x40 ^ bVar27;
  this->field_0x1a5 = bVar27;
  this->field_0x1a5 = (bVar27 ^ param_1->field_0x1a5) & 0x7f ^ param_1->field_0x1a5;
  bVar27 = (this->bModulationRoutingUpdated ^ param_1->bModulationRoutingUpdated) & 1 ^
           this->field_0x1a6;
  this->field_0x1a6 = bVar27;
  this->field_0x1a6 = (bVar27 ^ param_1->field_0x1a6) & 2 ^ bVar27;
  this->UserIndex = param_1->UserIndex;
  this->FadeOut = param_1->FadeOut;
  this->bIsOccluded = param_1->bIsOccluded;
  this->bAsyncOcclusionPending = param_1->bAsyncOcclusionPending;
  this->PlaybackTime = param_1->PlaybackTime;
  this->PlaybackTimeUnscaled = param_1->PlaybackTimeUnscaled;
  this->PlaybackTimeNonVirtualized = param_1->PlaybackTimeNonVirtualized;
  this->MinCurrentPitch = param_1->MinCurrentPitch;
  this->RequestedStartTime = param_1->RequestedStartTime;
  (pTVar3->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->SeekRestartTimes).Pairs.ArrayNum;
  pFVar16 = (param_1->SeekRestartTimes).Pairs.AllocatorInstance.Data;
  (this->SeekRestartTimes).Pairs.ArrayNum = iVar8;
  piVar28 = &(this->SeekRestartTimes).Pairs.ArrayMax;
  if (iVar8 == 0) {
    *piVar28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar8,0,(ForAnyElementType *)pTVar3,iVar8,piVar28);
    memcpy((pTVar3->Pairs).AllocatorInstance.Data,pFVar16,(longlong)iVar8 << 4);
  }
  this->VolumeMultiplier = param_1->VolumeMultiplier;
  this->PitchMultiplier = param_1->PitchMultiplier;
  this->LowPassFilterFrequency = param_1->LowPassFilterFrequency;
  this->HighPassFilterFrequency = param_1->HighPassFilterFrequency;
  fVar20 = (param_1->ComponentVolumeFader).Target;
  fVar21 = (param_1->ComponentVolumeFader).ActiveDuration;
  fVar22 = (param_1->ComponentVolumeFader).FadeDuration;
  (this->ComponentVolumeFader).Alpha = (param_1->ComponentVolumeFader).Alpha;
  (this->ComponentVolumeFader).Target = fVar20;
  (this->ComponentVolumeFader).ActiveDuration = fVar21;
  (this->ComponentVolumeFader).FadeDuration = fVar22;
  EVar23 = (param_1->ComponentVolumeFader).FadeCurve;
  uVar24 = *(undefined3 *)&(param_1->ComponentVolumeFader).field_0x15;
  (this->ComponentVolumeFader).Elapsed = (param_1->ComponentVolumeFader).Elapsed;
  (this->ComponentVolumeFader).FadeCurve = EVar23;
  *(undefined3 *)&(this->ComponentVolumeFader).field_0x15 = uVar24;
  (this->ComponentVolumeFader).StartingValue = (param_1->ComponentVolumeFader).StartingValue;
  fVar20 = (param_1->CurrentOcclusionFilterFrequency).StartValue;
  fVar21 = (param_1->CurrentOcclusionFilterFrequency).DeltaValue;
  fVar22 = (param_1->CurrentOcclusionFilterFrequency).CurrTimeSec;
  (this->CurrentOcclusionFilterFrequency).CurrValue =
       (param_1->CurrentOcclusionFilterFrequency).CurrValue;
  (this->CurrentOcclusionFilterFrequency).StartValue = fVar20;
  (this->CurrentOcclusionFilterFrequency).DeltaValue = fVar21;
  (this->CurrentOcclusionFilterFrequency).CurrTimeSec = fVar22;
  fVar20 = (param_1->CurrentOcclusionFilterFrequency).LastTime;
  (this->CurrentOcclusionFilterFrequency).DurationSec =
       (param_1->CurrentOcclusionFilterFrequency).DurationSec;
  (this->CurrentOcclusionFilterFrequency).LastTime = fVar20;
  (this->CurrentOcclusionFilterFrequency).TargetValue =
       (param_1->CurrentOcclusionFilterFrequency).TargetValue;
  fVar20 = (param_1->CurrentOcclusionVolumeAttenuation).StartValue;
  fVar21 = (param_1->CurrentOcclusionVolumeAttenuation).DeltaValue;
  fVar22 = (param_1->CurrentOcclusionVolumeAttenuation).CurrTimeSec;
  (this->CurrentOcclusionVolumeAttenuation).CurrValue =
       (param_1->CurrentOcclusionVolumeAttenuation).CurrValue;
  (this->CurrentOcclusionVolumeAttenuation).StartValue = fVar20;
  (this->CurrentOcclusionVolumeAttenuation).DeltaValue = fVar21;
  (this->CurrentOcclusionVolumeAttenuation).CurrTimeSec = fVar22;
  fVar20 = (param_1->CurrentOcclusionVolumeAttenuation).LastTime;
  (this->CurrentOcclusionVolumeAttenuation).DurationSec =
       (param_1->CurrentOcclusionVolumeAttenuation).DurationSec;
  (this->CurrentOcclusionVolumeAttenuation).LastTime = fVar20;
  (this->CurrentOcclusionVolumeAttenuation).TargetValue =
       (param_1->CurrentOcclusionVolumeAttenuation).TargetValue;
  this->SubtitlePriority = param_1->SubtitlePriority;
  this->Priority = param_1->Priority;
  this->VolumeConcurrency = param_1->VolumeConcurrency;
  this->MaxSourceModulationValue = param_1->MaxSourceModulationValue;
  this->OcclusionCheckInterval = param_1->OcclusionCheckInterval;
  this->LastOcclusionCheckTime = param_1->LastOcclusionCheckTime;
  this->MaxDistance = param_1->MaxDistance;
  dVar19 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar19;
  dVar19 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar19;
  dVar19 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar19;
  dVar19 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar19;
  dVar19 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar19;
  dVar19 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar19;
  fVar20 = (param_1->FocusData).AbsoluteAzimuth;
  fVar21 = (param_1->FocusData).FocusFactor;
  fVar22 = (param_1->FocusData).DistanceScale;
  (this->FocusData).Azimuth = (param_1->FocusData).Azimuth;
  (this->FocusData).AbsoluteAzimuth = fVar20;
  (this->FocusData).FocusFactor = fVar21;
  (this->FocusData).DistanceScale = fVar22;
  fVar20 = (param_1->FocusData).PriorityHighest;
  fVar21 = (param_1->FocusData).VolumeScale;
  bVar25 = (param_1->FocusData).bFirstFocusUpdate;
  uVar24 = *(undefined3 *)&(param_1->FocusData).field_0x1d;
  (this->FocusData).PriorityScale = (param_1->FocusData).PriorityScale;
  (this->FocusData).PriorityHighest = fVar20;
  (this->FocusData).VolumeScale = fVar21;
  (this->FocusData).bFirstFocusUpdate = bVar25;
  *(undefined3 *)&(this->FocusData).field_0x1d = uVar24;
  dVar19 = (param_1->LastLocation).field0_0x0._s_0.Y;
  (this->LastLocation).field0_0x0._s_0.X = (param_1->LastLocation).field0_0x0._s_0.X;
  (this->LastLocation).field0_0x0._s_0.Y = dVar19;
  (this->LastLocation).field0_0x0._s_0.Z = (param_1->LastLocation).field0_0x0._s_0.Z;
  FSoundAttenuationSettings::FSoundAttenuationSettings
            (&this->AttenuationSettings,&param_1->AttenuationSettings);
  Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData
            (&this->QuantizedRequestData,&param_1->QuantizedRequestData);
  (this->SourceBufferListener).Object = (param_1->SourceBufferListener).Object;
  pTVar15 = (param_1->SourceBufferListener).SharedReferenceCount.ReferenceController;
  (this->SourceBufferListener).SharedReferenceCount.ReferenceController = pTVar15;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = &this->AudioVolumeSubmixSendSettings;
  this->bShouldSourceBufferListenerZeroBuffer = param_1->bShouldSourceBufferListenerZeroBuffer;
  uVar24 = *(undefined3 *)&(param_1->InteriorSettings).field_0x1;
  fVar20 = (param_1->InteriorSettings).ExteriorVolume;
  fVar21 = (param_1->InteriorSettings).ExteriorTime;
  fVar22 = (param_1->InteriorSettings).ExteriorLPF;
  (this->InteriorSettings).bIsWorldSettings = (param_1->InteriorSettings).bIsWorldSettings;
  *(undefined3 *)&(this->InteriorSettings).field_0x1 = uVar24;
  (this->InteriorSettings).ExteriorVolume = fVar20;
  (this->InteriorSettings).ExteriorTime = fVar21;
  (this->InteriorSettings).ExteriorLPF = fVar22;
  fVar20 = (param_1->InteriorSettings).InteriorVolume;
  fVar21 = (param_1->InteriorSettings).InteriorTime;
  fVar22 = (param_1->InteriorSettings).InteriorLPF;
  (this->InteriorSettings).ExteriorLPFTime = (param_1->InteriorSettings).ExteriorLPFTime;
  (this->InteriorSettings).InteriorVolume = fVar20;
  (this->InteriorSettings).InteriorTime = fVar21;
  (this->InteriorSettings).InteriorLPF = fVar22;
  (this->InteriorSettings).InteriorLPFTime = (param_1->InteriorSettings).InteriorLPFTime;
  piVar28 = &(this->AudioVolumeSubmixSendSettings).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->AudioVolumeSubmixSendSettings).ArrayNum;
  pFVar17 = (FAudioVolumeSubmixSendSettings *)
            (param_1->AudioVolumeSubmixSendSettings).AllocatorInstance.Data;
  (this->AudioVolumeSubmixSendSettings).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar28);
    ConstructItems<FAudioVolumeSubmixSendSettings,FAudioVolumeSubmixSendSettings,int>
              ((pTVar4->AllocatorInstance).Data,pFVar17,iVar8);
  }
  pTVar4 = &this->PreviousAudioVolumeSubmixSendSettings;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar28 = &(this->PreviousAudioVolumeSubmixSendSettings).ArrayMax;
  iVar8 = (param_1->PreviousAudioVolumeSubmixSendSettings).ArrayNum;
  pFVar17 = (FAudioVolumeSubmixSendSettings *)
            (param_1->PreviousAudioVolumeSubmixSendSettings).AllocatorInstance.Data;
  (this->PreviousAudioVolumeSubmixSendSettings).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar28);
    ConstructItems<FAudioVolumeSubmixSendSettings,FAudioVolumeSubmixSendSettings,int>
              ((pTVar4->AllocatorInstance).Data,pFVar17,iVar8);
  }
  this->AudioVolumeID = param_1->AudioVolumeID;
  this->LastUpdateTime = param_1->LastUpdateTime;
  this->SourceInteriorVolume = param_1->SourceInteriorVolume;
  this->SourceInteriorLPF = param_1->SourceInteriorLPF;
  this->CurrentInteriorVolume = param_1->CurrentInteriorVolume;
  this->CurrentInteriorLPF = param_1->CurrentInteriorLPF;
  this->EnvelopeFollowerAttackTime = param_1->EnvelopeFollowerAttackTime;
  this->EnvelopeFollowerReleaseTime = param_1->EnvelopeFollowerReleaseTime;
  *(undefined8 *)&(this->SoundNodeOffsetMap).field_0x0 = 0;
  *(undefined8 *)&(this->SoundNodeOffsetMap).field_0x8 = 0;
  *(undefined8 *)&(this->SoundNodeOffsetMap).field_0x20 = 0;
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x28 = 0;
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x34 = 0;
  *(undefined8 *)&(this->SoundNodeOffsetMap).field_0x40 = 0;
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x48 = 0;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
               *)&this->SoundNodeOffsetMap,
              (TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
               *)&param_1->SoundNodeOffsetMap);
  pTVar5 = &this->SoundNodeData;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar28 = &(this->SoundNodeData).ArrayMax;
  iVar8 = (param_1->SoundNodeData).ArrayNum;
  pFVar16 = (param_1->SoundNodeData).AllocatorInstance.Data;
  (this->SoundNodeData).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar8,0,&pTVar5->AllocatorInstance,iVar8,piVar28);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar16,(longlong)iVar8);
  }
  pTVar6 = &this->NewBusSends;
  this->bHasNewBusSends = param_1->bHasNewBusSends;
  piVar28 = &(this->NewBusSends).ArrayMax;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->NewBusSends).ArrayNum;
  pTVar18 = (TTuple<EBusSendType,FSoundSourceBusSendInfo> *)
            (param_1->NewBusSends).AllocatorInstance.Data;
  (this->NewBusSends).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,iVar8,0,&pTVar6->AllocatorInstance,iVar8,piVar28);
    ConstructItems<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int>
              ((pTVar6->AllocatorInstance).Data,pTVar18,iVar8);
  }
  lVar26 = (param_1->ModulationRouting)._padding_;
  plVar7 = &(this->ModulationRouting)._padding_;
  *plVar7 = 0;
  (this->ModulationRouting)._padding_ = 0;
  (this->ModulationRouting)._padding_ = 0;
  *(int *)&(this->ModulationRouting)._padding_ = (int)lVar26;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ModulationRouting)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ModulationRouting)._padding_ + 4) = 0;
  (this->ModulationRouting)._padding_ = 0;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)plVar7,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(param_1->ModulationRouting)._padding_);
  lVar26 = (param_1->ModulationRouting)._padding_;
  plVar7 = &(this->ModulationRouting)._padding_;
  *plVar7 = 0;
  (this->ModulationRouting)._padding_ = 0;
  (this->ModulationRouting)._padding_ = 0;
  *(int *)&(this->ModulationRouting)._padding_ = (int)lVar26;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ModulationRouting)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ModulationRouting)._padding_ + 4) = 0;
  (this->ModulationRouting)._padding_ = 0;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)plVar7,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(param_1->ModulationRouting)._padding_);
  lVar26 = (param_1->ModulationRouting)._padding_;
  plVar7 = &(this->ModulationRouting)._padding_;
  *plVar7 = 0;
  (this->ModulationRouting)._padding_ = 0;
  (this->ModulationRouting)._padding_ = 0;
  *(int *)&(this->ModulationRouting)._padding_ = (int)lVar26;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ModulationRouting)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ModulationRouting)._padding_ + 4) = 0;
  (this->ModulationRouting)._padding_ = 0;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)plVar7,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(param_1->ModulationRouting)._padding_);
  lVar26 = (param_1->ModulationRouting)._padding_;
  plVar7 = &(this->ModulationRouting)._padding_;
  *plVar7 = 0;
  (this->ModulationRouting)._padding_ = 0;
  (this->ModulationRouting)._padding_ = 0;
  *(int *)&(this->ModulationRouting)._padding_ = (int)lVar26;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ModulationRouting)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ModulationRouting)._padding_ + 4) = 0;
  (this->ModulationRouting)._padding_ = 0;
  *(undefined4 *)&(this->ModulationRouting)._padding_ = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)plVar7,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(param_1->ModulationRouting)._padding_);
  (this->ModulationRouting).VolumeRouting = (param_1->ModulationRouting).VolumeRouting;
  (this->ModulationRouting).PitchRouting = (param_1->ModulationRouting).PitchRouting;
  (this->ModulationRouting).HighpassRouting = (param_1->ModulationRouting).HighpassRouting;
  (this->ModulationRouting).LowpassRouting = (param_1->ModulationRouting).LowpassRouting;
  (this->DebugColor).field0_0x0 = (param_1->DebugColor).field0_0x0;
  this->ClosestListenerIndex = param_1->ClosestListenerIndex;
  return this;
}

// FActiveSound @ 14733ef90

FActiveSound * __thiscall FActiveSound::FActiveSound(FActiveSound *this)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  code *pcVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  UClass *this_00;
  FActiveSound *pFVar16;
  float fVar17;
  undefined8 local_res8;
  FReadAccessScope local_48;
  FDestructionSentinel local_30;
  undefined8 local_18;
  
  *(undefined ***)this = &___7FActiveSound__6B_;
  bVar13 = false;
  local_res8 = 0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  (this->Sound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  (this->SourceEffectChain).field0_0x0.DebugPtr = (USoundEffectSourcePresetChain *)0x0;
  (this->SoundAttenuation).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  (this->AudioComponentUserID).ComparisonIndex = 0;
  (this->AudioComponentUserID).Number = 0;
  *(undefined8 *)&(this->AudioComponentName).Number = 0;
  *(undefined8 *)&(this->OwnerName).Number = 0;
  (this->OwnerKey).ObjectSerialNumber = 0;
  this->PlayOrder = 0xffffffff;
  *(undefined8 *)&this->ConcurrencyGroupData = 0;
  *(undefined8 *)&(this->ConcurrencyGroupData).field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencyGroupData).field_0x20 = 0;
  this->WorldID = 0;
  this->AudioComponentID = 0;
  this->OwnerID = 0;
  (this->AudioComponentName).ComparisonIndex = 0;
  this->AudioDevice = (FAudioDevice *)0x0;
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x34 = 0;
  *(undefined8 *)&(this->ConcurrencyGroupData).field_0x40 = 0;
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x48 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  (this->SoundClassOverride).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->SoundSubmixSendsOverride).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundSubmixSendsOverride).ArrayNum = 0;
  (this->SoundSubmixSendsOverride).ArrayMax = 0;
  this->BusSendsOverride[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSendsOverride[0].ArrayNum = 0;
  this->BusSendsOverride[0].ArrayMax = 0;
  this->BusSendsOverride[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSendsOverride[1].ArrayNum = 0;
  this->BusSendsOverride[1].ArrayMax = 0;
  *(undefined8 *)&this->WaveInstances = 0;
  *(undefined8 *)&(this->WaveInstances).field_0x8 = 0;
  *(undefined8 *)&(this->WaveInstances).field_0x20 = 0;
  *(undefined4 *)&(this->WaveInstances).field_0x28 = 0;
  *(undefined4 *)&(this->WaveInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->WaveInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WaveInstances).field_0x34 = 0;
  *(undefined8 *)&(this->WaveInstances).field_0x40 = 0;
  *(undefined4 *)&(this->WaveInstances).field_0x48 = 0;
  this->bModulationRoutingUpdated = '\0';
  this->bIsAttenuationSettingsOverridden = '\0';
  (this->InstanceTransmitter).Object = (IParameterTransmitter *)0x0;
  (this->InstanceTransmitter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)&this->VirtualizationModeOverride = 0x80402;
  puVar1 = &this->field_0x1a4;
  this->bEnableLowPassFilter = '\0';
  this->bStartedWithinNonBinauralRadius = '\0';
  this->bIsFirstAttenuationUpdate = '\x01';
  this->bEnableSubmixSendRoutingOverride = '\0';
  this->bEnableMainSubmixOutputOverride = '\0';
  this->bEnableBusSendRoutingOverride = '\0';
  this->bHasActiveSubmixSendRoutingOverride = '\0';
  this->bHasActiveMainSubmixOutputOverride = '\0';
  this->bHasActiveBusSendRoutingOverride = '\0';
  this->bIsStopping = '\0';
  this->bIsPlayingAudio = '\0';
  this->bUpdatePlaybackTime = '\0';
  this->bUpdateMultiEnvelopeValue = '\0';
  this->bUpdateSingleEnvelopeValue = '\0';
  this->bUpdatePlayPercentage = '\0';
  this->bEnableHighPassFilter = '\0';
  this->UserIndex = '\0';
  this->FadeOut = None;
  this->bIsOccluded = (FThreadSafeBool)0x0;
  this->bAsyncOcclusionPending = (FThreadSafeBool)0x0;
  this->PlaybackTime = 0.0;
  this->PlaybackTimeUnscaled = 0.0;
  this->PlaybackTimeNonVirtualized = 0.0;
  this->MinCurrentPitch = 1.0;
  this->RequestedStartTime = 0.0;
  (this->SeekRestartTimes).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SeekRestartTimes).Pairs.ArrayNum = 0;
  (this->SeekRestartTimes).Pairs.ArrayMax = 0;
  this->VolumeMultiplier = 1.0;
  this->PitchMultiplier = 1.0;
  this->LowPassFilterFrequency = 20000.0;
  this->HighPassFilterFrequency = 20.0;
  Audio::FVolumeFader::FVolumeFader(&this->ComponentVolumeFader);
  FDynamicParameter::FDynamicParameter(&this->CurrentOcclusionFilterFrequency,__real_469c4000);
  FDynamicParameter::FDynamicParameter(&this->CurrentOcclusionVolumeAttenuation,__real_3f800000);
  this->SubtitlePriority = 10000.0;
  this->Priority = 1.0;
  this->VolumeConcurrency = 0.0;
  this->MaxSourceModulationValue = -1.0;
  this->LastOcclusionCheckTime = -3.4028235e+38;
  fVar17 = FAudioDevice::GetMaxWorldDistance();
  this->MaxDistance = fVar17;
  fVar17 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar17;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar6;
  fVar17 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar17;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar8;
  fVar17 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar17;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar10;
  (this->FocusData).Azimuth = 0.0;
  (this->FocusData).AbsoluteAzimuth = 0.0;
  (this->FocusData).FocusFactor = 1.0;
  (this->FocusData).DistanceScale = 1.0;
  (this->FocusData).PriorityScale = 1.0;
  (this->FocusData).PriorityHighest = 1.0;
  (this->FocusData).VolumeScale = 1.0;
  (this->FocusData).bFirstFocusUpdate = true;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastLocation).field0_0x0._s_0.Y = (double)uVar11;
  (this->LastLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationSettings);
  (this->QuantizedRequestData).ClockName.ComparisonIndex = 0;
  (this->QuantizedRequestData).ClockName.Number = 0;
  (this->QuantizedRequestData).OtherClockName.ComparisonIndex = 0;
  (this->QuantizedRequestData).OtherClockName.Number = 0;
  (this->QuantizedRequestData).QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
  (this->QuantizedRequestData).QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->QuantizedRequestData).QuantizationBoundary.Quantization = Tick;
  (this->QuantizedRequestData).QuantizationBoundary.Multiplier = 1.0;
  (this->QuantizedRequestData).QuantizationBoundary.CountingReferencePoint = BarRelative;
  (this->QuantizedRequestData).QuantizationBoundary.bFireOnClockStart = true;
  (this->QuantizedRequestData).QuantizationBoundary.bCancelCommandIfClockIsNotRunning = false;
  (this->QuantizedRequestData).QuantizationBoundary.bResetClockOnQueued = false;
  (this->QuantizedRequestData).QuantizationBoundary.bResumeClockOnQueued = false;
  (this->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
  (this->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
  (this->QuantizedRequestData).GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->QuantizedRequestData).GameThreadSubscribers.ArrayNum = 0;
  (this->QuantizedRequestData).GameThreadSubscribers.ArrayMax = 0;
  (this->QuantizedRequestData).GameThreadDelegateID = -1;
  (this->SourceBufferListener).Object = (ISourceBufferListener *)0x0;
  (this->SourceBufferListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bShouldSourceBufferListenerZeroBuffer = false;
  FInteriorSettings::FInteriorSettings(&this->InteriorSettings);
  (this->AudioVolumeSubmixSendSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioVolumeSubmixSendSettings).ArrayNum = 0;
  (this->AudioVolumeSubmixSendSettings).ArrayMax = 0;
  (this->PreviousAudioVolumeSubmixSendSettings).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreviousAudioVolumeSubmixSendSettings).ArrayNum = 0;
  (this->PreviousAudioVolumeSubmixSendSettings).ArrayMax = 0;
  *(undefined8 *)&this->SoundNodeOffsetMap = 0;
  *(undefined8 *)&(this->SoundNodeOffsetMap).field_0x8 = 0;
  *(undefined8 *)&(this->SoundNodeOffsetMap).field_0x20 = 0;
  this->AudioVolumeID = 0;
  this->LastUpdateTime = 0.0;
  this->SourceInteriorVolume = 1.0;
  this->SourceInteriorLPF = 20000.0;
  this->CurrentInteriorVolume = 1.0;
  this->CurrentInteriorLPF = 20000.0;
  this->EnvelopeFollowerAttackTime = 10;
  this->EnvelopeFollowerReleaseTime = 100;
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x28 = 0;
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x34 = 0;
  *(undefined8 *)&(this->SoundNodeOffsetMap).field_0x40 = 0;
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x48 = 0;
  (this->SoundNodeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundNodeData).ArrayNum = 0;
  (this->SoundNodeData).ArrayMax = 0;
  this->bHasNewBusSends = false;
  (this->NewBusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewBusSends).ArrayNum = 0;
  (this->NewBusSends).ArrayMax = 0;
  FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
            (&this->ModulationRouting);
  (this->DebugColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  this->PlayOrder = TotalPlayOrder;
  TotalPlayOrder = TotalPlayOrder + 1;
  this->ClosestListenerIndex = -1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&ActiveSoundTraceDelegate,
             &local_48);
  if ((ActiveSoundTraceDelegate._16_4_ != 0) && (ActiveSoundTraceDelegate._8_8_ != 0)) {
    cVar12 = (**(code **)(*(longlong *)ActiveSoundTraceDelegate._8_8_ + 0x38))();
    if (cVar12 != '\0') {
      bVar13 = true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (!bVar13) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&ActiveSoundTraceDelegate,
               (FWriteAccessScope *)&local_30);
    local_18 = 0x1551e7d58;
    puVar14 = UE::Core::Private::DelegateAllocate
                        (0x20,(FDelegateAllocation *)&ActiveSoundTraceDelegate.field_0x8);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar14[3] = OcclusionTraceDone;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
  }
  this_00 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 == (UObject *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("AudioSettings",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                        ,0xc2,L"");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      pFVar16 = (FActiveSound *)(*pcVar3)();
      return pFVar16;
    }
  }
  this->OcclusionCheckInterval = *(float *)&pUVar2[8].field_0x20;
  return this;
}

// ~FActiveSound @ 147341740

void __thiscall FActiveSound::~FActiveSound(FActiveSound *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  ForElementType<FSetElementId> *pFVar5;
  bool bVar6;
  longlong lVar7;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *this_00;
  undefined1 local_res8 [8];
  
  this_00 = &this->WaveInstances;
  *(undefined ***)this = &___7FActiveSound__6B_;
  if (*(int *)&(this->WaveInstances).field_0x8 != *(int *)&(this->WaveInstances).field_0x34) {
    local_res8[0] = 0;
    `FActiveSound::~FActiveSound'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (this->bAsyncOcclusionPending != (FThreadSafeBool)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanDelete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                       ,0xcb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FSoundModulationDefaultSettings::~FSoundModulationDefaultSettings
            ((FSoundModulationDefaultSettings *)&this->ModulationRouting);
  DestructItems<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int>
            ((TTuple<EBusSendType,FSoundSourceBusSendInfo> *)
             (this->NewBusSends).AllocatorInstance.Data,(this->NewBusSends).ArrayNum);
  pFVar1 = (this->NewBusSends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SoundNodeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SoundNodeOffsetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SoundNodeOffsetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SoundNodeOffsetMap);
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)
             (this->PreviousAudioVolumeSubmixSendSettings).AllocatorInstance.Data,
             (this->PreviousAudioVolumeSubmixSendSettings).ArrayNum);
  pFVar1 = (this->PreviousAudioVolumeSubmixSendSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)
             (this->AudioVolumeSubmixSendSettings).AllocatorInstance.Data,
             (this->AudioVolumeSubmixSendSettings).ArrayNum);
  pFVar1 = (this->AudioVolumeSubmixSendSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceBufferListener).SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             (this->QuantizedRequestData).GameThreadSubscribers.AllocatorInstance.Data,
             (this->QuantizedRequestData).GameThreadSubscribers.ArrayNum);
  pFVar1 = (this->QuantizedRequestData).GameThreadSubscribers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             (this->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers.
             AllocatorInstance.Data,
             (this->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  pFVar1 = (this->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers.AllocatorInstance
           .Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QuantizedRequestData).QuantizedCommandPtr.SharedReferenceCount.
             ReferenceController);
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->AttenuationSettings);
  pFVar1 = (this->SeekRestartTimes).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstanceTransmitter).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->WaveInstances).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WaveInstances).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  lVar7 = 2;
  do {
    pFVar5 = (ForElementType<FSetElementId> *)(this_00 + -1);
    this_00 = (TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
               *)((ForElementType<FSetElementId> *)(this_00 + -1) + 4);
    lVar7 = lVar7 + -1;
    DestructItems<FSoundSourceBusSendInfo,int>
              (*(FSoundSourceBusSendInfo **)this_00,*(int *)((longlong)(pFVar5 + 4) + 8));
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
  } while (lVar7 != 0);
  DestructItems<FSoundSubmixSendInfo,int>
            ((FSoundSubmixSendInfo *)(this->SoundSubmixSendsOverride).AllocatorInstance.Data,
             (this->SoundSubmixSendsOverride).ArrayNum);
  pFVar1 = (this->SoundSubmixSendsOverride).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ConcurrencySet).HashSize = 0;
  FVar3 = (this->ConcurrencySet).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ConcurrencySet).Elements);
  *(undefined4 *)&(this->ConcurrencyGroupData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ConcurrencyGroupData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencySoundData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencySoundData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencySoundData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConcurrencyGroupData);
  return;
}

// operator() @ 147343230

void __thiscall `FActiveSound::UpdateWaveInstances'::__l114::<lambda_2>::operator()(void *this)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(UAudioComponent_const_*,float,float,int),FDefaultDelegateUserPolicy>
  *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  UAudioComponent *pUVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  FDestructionSentinel local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68 [2];
  
  pUVar12 = UAudioComponent::GetAudioComponentFromID(*(ulong64 *)this);
  if (pUVar12 != (UAudioComponent *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar12->OnAudioMultiEnvelopeValue,local_68);
    iVar4 = *(int *)&(pUVar12->OnAudioMultiEnvelopeValue).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_68);
    if (0 < iVar4) {
      FOnAudioMultiEnvelopeValue_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &pUVar12->OnAudioMultiEnvelopeValue,*(float *)((longlong)this + 8),
                 *(float *)((longlong)this + 0xc),*(int *)((longlong)this + 0x10));
    }
    this_00 = &pUVar12->OnAudioMultiEnvelopeValueNative;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_80);
    iVar4 = *(int *)&(pUVar12->OnAudioMultiEnvelopeValueNative).field_0x10;
    plVar14 = *(longlong **)&(pUVar12->OnAudioMultiEnvelopeValueNative).field_0x8;
    plVar15 = plVar14 + (longlong)iVar4 * 2;
    while( true ) {
      if (*(int *)&(pUVar12->OnAudioMultiEnvelopeValueNative).field_0x10 != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (plVar14 == plVar15) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
        return;
      }
      if (((int)plVar14[1] != 0) && (*plVar14 != 0)) break;
      plVar14 = plVar14 + 2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    uVar5 = *(undefined4 *)((longlong)this + 0x10);
    uVar2 = *(undefined4 *)((longlong)this + 0xc);
    uVar3 = *(undefined4 *)((longlong)this + 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_98);
    puVar1 = &(pUVar12->OnAudioMultiEnvelopeValueNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar8 = false;
    uVar13 = *(int *)&(pUVar12->OnAudioMultiEnvelopeValueNative).field_0x10 - 1;
    if (-1 < (int)uVar13) {
      lVar16 = (longlong)(int)uVar13 << 4;
      bVar8 = false;
      do {
        uVar11 = 0;
        if ((int)uVar13 < *(int *)&(pUVar12->OnAudioMultiEnvelopeValueNative).field_0x10) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)&(pUVar12->OnAudioMultiEnvelopeValueNative).field_0x8;
        if (((*(int *)(lVar6 + 8 + lVar16) == 0) ||
            (plVar14 = *(longlong **)(lVar6 + lVar16), plVar14 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar14 + 0x68))(plVar14,pUVar12,uVar3,uVar2,uVar5),
           cVar10 == '\0')) {
          bVar8 = true;
        }
        lVar16 = lVar16 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    puVar1 = &(pUVar12->OnAudioMultiEnvelopeValueNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar8) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
  }
  return;
}

// operator() @ 147343480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall `FActiveSound::CheckOcclusion'::__l35::<lambda_3>::operator()(void *this)

{
  bool bVar1;
  UWorld *this_00;
  FName *pFVar2;
  int *piVar3;
  undefined1 auStackY_158 [32];
  TPairInitializer<FTraceHandle_const_&,FActiveSound::FAsyncTraceDetails_const_&> local_f8;
  longlong local_e8;
  FAsyncTraceDetails local_e0;
  FCollisionQueryParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this_00 = (UWorld *)FWeakObjectPtr::Get(this);
  if (this_00 != (UWorld *)0x0) {
    bVar1 = *(bool *)((longlong)this + 0x40);
    piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_SoundOcclusion =
           (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl__private:_void___cdecl_FActiveSound::CheckOcclusion(UE::Math::TVector<double>,UE::Math::TVector<double>,FSoundAttenuationSettings_const_*)_::_35_::<lambda_3>::operator()(void)const_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_SoundOcclusion>
            )0x0;
      pFVar2 = ::FName::FName((FName *)&local_f8.Value,"SoundOcclusion");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SoundOcclusion,*pFVar2,L"SoundOcclusion",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_f8.Key = (FTraceHandle *)StatPtr_SoundOcclusion;
    if (StatPtr_SoundOcclusion ==
        (FThreadSafeStaticStat<_public:___cdecl__public:___cdecl__private:_void___cdecl_FActiveSound::CheckOcclusion(UE::Math::TVector<double>,UE::Math::TVector<double>,FSoundAttenuationSettings_const_*)_::_35_::<lambda_3>::operator()(void)const_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_SoundOcclusion>
         )0x0) {
      pFVar2 = ::FName::FName((FName *)&local_f8.Value,"SoundOcclusion");
      local_f8.Key = (FTraceHandle *)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_SoundOcclusion,*pFVar2,
                                L"SoundOcclusion","STATGROUP_CollisionTags","STATCAT_Advanced",
                                L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"SoundOcclusion");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_c8,::StaticName,(TStatId *)&local_f8,bVar1,(AActor *)0x0);
    if (*(uint *)((longlong)this + 0x3c) != 0) {
      FCollisionQueryParams::AddIgnoredActor(&local_c8,*(uint *)((longlong)this + 0x3c));
    }
    UWorld::AsyncLineTraceByChannel
              (this_00,(FTraceHandle *)&local_e0,Test,(TVector<double> *)((longlong)this + 8),
               (TVector<double> *)((longlong)this + 0x20),
               *(ECollisionChannel *)((longlong)this + 0x38),&local_c8,
               &FCollisionResponseParams::DefaultResponseParam,
               &FActiveSound::ActiveSoundTraceDelegate,0);
    local_f8.Value = &local_e0;
    local_e8 = (longlong)this + 0x48;
    TSet<TTuple<FTraceHandle,FActiveSound::FAsyncTraceDetails>,TDefaultMapHashableKeyFuncs<FTraceHandle,FActiveSound::FAsyncTraceDetails,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FTraceHandle_const_&,FActiveSound::FAsyncTraceDetails_const_&>_>
              ((TSet<TTuple<FTraceHandle,FActiveSound::FAsyncTraceDetails>,TDefaultMapHashableKeyFuncs<FTraceHandle,FActiveSound::FAsyncTraceDetails,0>,FDefaultSetAllocator>
                *)&FActiveSound::TraceToActiveSoundMap,&local_f8,(bool *)&local_f8.Value);
    if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_c8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// AddModulationRouting @ 147345370

void __thiscall
FActiveSound::AddModulationRouting
          (FActiveSound *this,
          TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
          *param_1,EModulationDestination param_2)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  
  if (param_2 == Volume) {
    (this->ModulationRouting).VolumeRouting = Union;
    lVar1 = 0x820;
  }
  else if (param_2 == Pitch) {
    (this->ModulationRouting).PitchRouting = Union;
    lVar1 = 0x878;
  }
  else if (param_2 == Lowpass) {
    (this->ModulationRouting).LowpassRouting = Union;
    lVar1 = 0x928;
  }
  else {
    if (param_2 != Highpass) {
      `FActiveSound::AddModulationRouting'::__l5::<lambda_1>::operator()(local_res18);
      return;
    }
    (this->ModulationRouting).HighpassRouting = Union;
    lVar1 = 0x8d0;
  }
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::Append<FDefaultSetAllocator>
            ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              *)(&this->field_0x0 + lVar1),param_1);
  this->bModulationRoutingUpdated = '\x01';
  return;
}

// AddReferencedObjects @ 1473456c0

void __thiscall FActiveSound::AddReferencedObjects(FActiveSound *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  FWaveInstance *this_00;
  USoundEffectSourcePresetChain *pUVar4;
  USoundBase *pUVar5;
  IParameterTransmitter *pIVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  undefined1 *puVar16;
  uint *puVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong local_res8;
  FScriptContainerElement *local_res10;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  undefined1 local_108;
  undefined1 local_107 [7];
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_100 = (TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
               *)&this->WaveInstances;
  iVar2 = *(int *)&(this->WaveInstances).field_0x28;
  local_f0 = &(this->WaveInstances).field_0x10;
  iStack_f8 = 0;
  local_res8 = 1;
  local_e0 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&(this->WaveInstances).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_f0;
    }
    uStack_f4 = *puVar17;
    while (uStack_f4 == 0) {
      lVar11 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      uStack_f4 = 1;
      iStack_e4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14734576e;
      uStack_f4 = puVar17[lVar11 + 1];
    }
    uStack_f4 = -uStack_f4 & uStack_f4;
    uVar12 = (ulonglong)uStack_f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    iStack_e4 = local_e0 + -1 + local_d0;
    if (iVar2 < iStack_e4) {
      iStack_e4 = iVar2;
    }
  }
LAB_14734576e:
  TStack_c0._padding_ = CONCAT44(uStack_f4,iStack_f8);
  uStack_e8 = 0xffffffff;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._28_4_ = local_54;
  TStack_c0.BaseBitIndex = local_e0;
  local_c8 = (TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
              *)local_100;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
  TStack_c0.CurrentBitIndex = iStack_e4;
  if (iStack_e4 < *(int *)&(this->WaveInstances).field_0x28) {
    do {
      this_00 = *(FWaveInstance **)
                 (*(longlong *)local_c8 + 8 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
      if (this_00 != (FWaveInstance *)0x0) {
        FWaveInstance::AddReferencedObjects(this_00,param_1);
      }
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    } while (TStack_c0.CurrentBitIndex < (TStack_c0.Array)->NumBits);
  }
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SoundClassOverride);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SourceEffectChain);
  pUVar4 = (this->SourceEffectChain).field0_0x0.DebugPtr;
  if (pUVar4 != (USoundEffectSourcePresetChain *)0x0) {
    USoundEffectSourcePresetChain::AddReferencedEffects(pUVar4,param_1);
  }
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Sound);
  pUVar5 = (this->Sound).field0_0x0.DebugPtr;
  if ((pUVar5 != (USoundBase *)0x0) &&
     (pUVar4 = (pUVar5->SourceEffectChain).field0_0x0.DebugPtr,
     pUVar4 != (USoundEffectSourcePresetChain *)0x0)) {
    USoundEffectSourcePresetChain::AddReferencedEffects(pUVar4,param_1);
  }
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SoundAttenuation);
  puVar1 = &(this->ConcurrencySet).Elements.field_0x10;
  iStack_f8 = 0;
  iVar2 = *(int *)&(this->ConcurrencySet).Elements.field_0x28;
  local_100 = &this->ConcurrencySet;
  local_e0 = 0;
  iStack_e4 = 0;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&(this->ConcurrencySet).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_147345911;
      uVar13 = puVar17[lVar11 + 1];
    }
    local_res8 = (ulonglong)(-uVar13 & uVar13);
    uVar12 = local_res8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    iStack_e4 = local_e0 + -1 + local_cc;
    if (iVar2 < iStack_e4) {
      iStack_e4 = iVar2;
    }
  }
LAB_147345911:
  uStack_f4 = (uint)local_res8;
  uVar13 = *(uint *)&(this->ConcurrencySet).Elements.field_0x28;
  uVar20 = uVar13 & 0xffffffe0;
  iStack_d8 = *(int *)&(this->ConcurrencySet).Elements.field_0x8 -
              *(int *)&(this->ConcurrencySet).Elements.field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_98._28_4_ = iStack_e4;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_f0 = puVar1;
  iStack_dc = iStack_e4;
  local_a0 = local_100;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(uint *)&(this->ConcurrencySet).Elements.field_0x28;
  if (uVar13 != uVar3) {
    puVar16 = *(undefined1 **)&(this->ConcurrencySet).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147345a1c;
      uVar13 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar20;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_147345a1c:
  while( true ) {
    pTVar9 = local_a0;
    if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
        (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar13) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar9 == &this->ConcurrencySet)) break;
    if (*(longlong *)((longlong)TStack_98.CurrentBitIndex * 0x10 + *(longlong *)&pTVar9->Elements)
        != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  pIVar6 = (this->InstanceTransmitter).Object;
  if (pIVar6 != (IParameterTransmitter *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,param_1);
  }
  (**(code **)(param_1->_padding_ + 0x88))
            (param_1,&(this->AttenuationSettings).AudioLinkSettingsOverride,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->AttenuationSettings).PluginSettings.OcclusionPluginSettingsArray.
                     AllocatorInstance.Data,
             (this->AttenuationSettings).PluginSettings.OcclusionPluginSettingsArray.ArrayNum,0,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->AttenuationSettings).PluginSettings.ReverbPluginSettingsArray.
                     AllocatorInstance.Data,
             (this->AttenuationSettings).PluginSettings.ReverbPluginSettingsArray.ArrayNum,0,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->AttenuationSettings).PluginSettings.
                     SourceDataOverridePluginSettingsArray.AllocatorInstance.Data,
             (this->AttenuationSettings).PluginSettings.SourceDataOverridePluginSettingsArray.
             ArrayNum,0,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->AttenuationSettings).PluginSettings.SpatializationPluginSettingsArray.
                     AllocatorInstance.Data,
             (this->AttenuationSettings).PluginSettings.SpatializationPluginSettingsArray.ArrayNum,0
             ,0);
  iVar2 = (this->AudioVolumeSubmixSendSettings).ArrayNum;
  uVar12 = (ulonglong)iVar2;
  pFVar18 = (this->AudioVolumeSubmixSendSettings).AllocatorInstance.Data;
  local_res8 = CONCAT44(local_res8._4_4_,iVar2);
  local_res20 = pFVar18 + uVar12 * 0x18;
  pFVar15 = pFVar18 + 0x10;
  while( true ) {
    pFVar8 = local_res20;
    if ((this->AudioVolumeSubmixSendSettings).ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<FAudioVolumeSubmixSendSettings,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res10);
    }
    if (pFVar18 == pFVar8) break;
    iVar2 = *(int *)pFVar15;
    lVar11 = *(longlong *)(pFVar15 + -8);
    lVar19 = (longlong)iVar2 * 0xb8 + lVar11;
    while( true ) {
      if (*(int *)pFVar15 != iVar2) {
        `TCheckedPointerIterator<FSoundSubmixSendInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (lVar11 == lVar19) break;
      (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar11 + 8);
      lVar11 = lVar11 + 0xb8;
    }
    uVar12 = local_res8 & 0xffffffff;
    pFVar18 = pFVar18 + 0x18;
    pFVar15 = pFVar15 + 0x18;
  }
  iVar2 = (this->PreviousAudioVolumeSubmixSendSettings).ArrayNum;
  uVar12 = (ulonglong)iVar2;
  pFVar18 = (this->PreviousAudioVolumeSubmixSendSettings).AllocatorInstance.Data;
  local_res8 = CONCAT44(local_res8._4_4_,iVar2);
  local_res10 = pFVar18 + uVar12 * 0x18;
  pFVar15 = pFVar18 + 0x10;
  while( true ) {
    pFVar8 = local_res10;
    if ((this->PreviousAudioVolumeSubmixSendSettings).ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<FAudioVolumeSubmixSendSettings,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res20);
    }
    if (pFVar18 == pFVar8) break;
    iVar2 = *(int *)pFVar15;
    lVar11 = *(longlong *)(pFVar15 + -8);
    lVar19 = (longlong)iVar2 * 0xb8 + lVar11;
    while( true ) {
      if (*(int *)pFVar15 != iVar2) {
        `TCheckedPointerIterator<FSoundSubmixSendInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_108);
      }
      if (lVar11 == lVar19) break;
      (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar11 + 8);
      lVar11 = lVar11 + 0xb8;
    }
    uVar12 = local_res8 & 0xffffffff;
    pFVar18 = pFVar18 + 0x18;
    pFVar15 = pFVar15 + 0x18;
  }
  iVar2 = (this->NewBusSends).ArrayNum;
  pFVar15 = (this->NewBusSends).AllocatorInstance.Data;
  pFVar18 = pFVar15 + (longlong)iVar2 * 0xc0;
  while( true ) {
    if ((this->NewBusSends).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_107);
    }
    if (pFVar15 == pFVar18) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar15 + 0x18);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar15 + 0x10);
    pFVar15 = pFVar15 + 0xc0;
  }
  FReferenceCollector::AddReferencedObjects<USoundModulatorBase>
            (param_1,(TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                      *)&(this->ModulationRouting)._padding_,(UObject *)0x0,(FProperty *)0x0);
  FReferenceCollector::AddReferencedObjects<USoundModulatorBase>
            (param_1,(TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                      *)&(this->ModulationRouting)._padding_,(UObject *)0x0,(FProperty *)0x0);
  FReferenceCollector::AddReferencedObjects<USoundModulatorBase>
            (param_1,(TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                      *)&(this->ModulationRouting)._padding_,(UObject *)0x0,(FProperty *)0x0);
  FReferenceCollector::AddReferencedObjects<USoundModulatorBase>
            (param_1,(TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                      *)&(this->ModulationRouting)._padding_,(UObject *)0x0,(FProperty *)0x0);
  return;
}

// AddVolumeSubmixSends @ 147346010

void __thiscall
FActiveSound::AddVolumeSubmixSends
          (FActiveSound *this,FSoundParseParameters *param_1,EAudioVolumeLocationState param_2)

{
  int *piVar1;
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FSoundSubmixSendInfoBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FSoundSubmixSendInfoBase *this_00;
  FSoundSubmixSendInfoBase *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FSoundSubmixSendInfoBase *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res20 [8];
  undefined1 local_48;
  undefined1 local_47 [7];
  FScriptContainerElement *local_40;
  
  bVar7 = IsInAudioThread();
  if ((bVar7) ||
     (local_res20[0] = bVar7,
     bVar7 = `FActiveSound::AddVolumeSubmixSends'::__l3::<lambda_1>::operator()(local_res20), bVar7)
     ) {
    iVar3 = (this->AudioVolumeSubmixSendSettings).ArrayNum;
    if (0 < iVar3) {
      pFVar13 = (this->AudioVolumeSubmixSendSettings).AllocatorInstance.Data;
      pFVar10 = pFVar13 + (longlong)iVar3 * 0x18;
      pFVar11 = pFVar13 + 0x10;
      local_40 = pFVar10;
      while( true ) {
        if ((this->AudioVolumeSubmixSendSettings).ArrayNum != iVar3) {
          local_48 = 0;
          `TCheckedPointerIterator<FAudioVolumeSubmixSendSettings,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_48);
        }
        if (pFVar13 == pFVar10) break;
        if (*pFVar13 == (FScriptContainerElement)param_2) {
          iVar4 = *(int *)pFVar11;
          pFVar12 = *(FSoundSubmixSendInfoBase **)(pFVar11 + -8);
          pFVar9 = (FSoundSubmixSendInfoBase *)((longlong)iVar4 * 0xb8 + (longlong)pFVar12);
          while( true ) {
            if (*(int *)pFVar11 != iVar4) {
              local_47[0] = 0;
              `TCheckedPointerIterator<FSoundSubmixSendInfo_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_47);
            }
            pFVar10 = local_40;
            if (pFVar12 == pFVar9) break;
            pTVar2 = &param_1->SoundSubmixSends;
            pFVar5 = (FSoundSubmixSendInfoBase *)(pTVar2->AllocatorInstance).Data;
            if (((pFVar5 <= pFVar12) &&
                (pFVar12 < (FSoundSubmixSendInfoBase *)
                           ((longlong)pFVar5 + (longlong)(param_1->SoundSubmixSends).ArrayMax * 0xb8
                           ))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = (param_1->SoundSubmixSends).ArrayNum;
            piVar1 = &(param_1->SoundSubmixSends).ArrayMax;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8b8,&pTVar2->AllocatorInstance,piVar1);
            }
            (param_1->SoundSubmixSends).ArrayNum = iVar8 + 1;
            this_00 = (FSoundSubmixSendInfoBase *)
                      ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0xb8);
            FSoundSubmixSendInfoBase::FSoundSubmixSendInfoBase(this_00,pFVar12);
            pFVar5 = pFVar12 + 1;
            pFVar12 = (FSoundSubmixSendInfoBase *)&pFVar12[1].SoundSubmix;
            this_00[1].SendLevelControlMethod = pFVar5->SendLevelControlMethod;
          }
        }
        pFVar13 = pFVar13 + 0x18;
        pFVar11 = pFVar11 + 0x18;
      }
    }
  }
  return;
}

// AddWaveInstance @ 147346210

FWaveInstance * __thiscall FActiveSound::AddWaveInstance(FActiveSound *this,ulong64 param_1)

{
  FWaveInstance *this_00;
  TPairInitializer<unsigned___int64_const_&,FWaveInstance_*_const_&> local_res8;
  FWaveInstance *local_res18 [2];
  FWaveInstance ***local_18;
  FWaveInstance **local_10;
  
  local_res8.Value = (FWaveInstance **)param_1;
  this_00 = ::operator_new(400);
  local_res18[0] = (FWaveInstance *)0x0;
  if (this_00 != (FWaveInstance *)0x0) {
    local_res18[0] = FWaveInstance::FWaveInstance(this_00,(ulong64)local_res8.Value,this);
  }
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,FWaveInstance_*_const_&>_>
            ((TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
              *)&this->WaveInstances,&local_res8,(bool *)&local_18);
  return local_res18[0];
}

// ApplyRadioFilter @ 147346440

void __thiscall FActiveSound::ApplyRadioFilter(FActiveSound *this,FSoundParseParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  
  if (this->AudioDevice == (FAudioDevice *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                       ,0x684,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->AudioDevice->DebugState).Value == '\b') {
    this->bApplyRadioFilter = '\0';
  }
  else if ((param_1->SoundClass != (USoundClass *)0x0) &&
          (fVar4 = (param_1->SoundClass->Properties).RadioFilterVolumeThreshold *
                   param_1->VolumeMultiplier, __real_38d1b717 < fVar4)) {
    bVar3 = 0;
    if (param_1->Volume <= fVar4 && fVar4 != param_1->Volume) {
      bVar3 = 4;
    }
    this->bApplyRadioFilter = bVar3 >> 2;
    this->bRadioFilterSelected = '\x01';
    return;
  }
  this->bRadioFilterSelected = '\x01';
  return;
}

// CacheClosestListener @ 147346500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FActiveSound::CacheClosestListener(FActiveSound *this)

{
  int *piVar1;
  USoundBase *pUVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_AudioFindNearestLocation> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  bool bVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (((this->AudioDevice != (FAudioDevice *)0x0) &&
      (pUVar2 = (this->Sound).field0_0x0.DebugPtr, pUVar2 != (USoundBase *)0x0)) &&
     (cVar5 = (**(code **)(pUVar2->_padding_ + 0x2b0))(), cVar5 != '\0')) {
    FVar12.Value = 0;
    FVar8 = StatPtr_STAT_AudioFindNearestLocation;
    if (StatPtr_STAT_AudioFindNearestLocation ==
        (FThreadSafeStaticStat<FStat_STAT_AudioFindNearestLocation>)0x0) {
      pFVar7 = ::FName::FName(&local_res10,"STAT_AudioFindNearestLocation");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_AudioFindNearestLocation>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioFindNearestLocation,*pFVar7
                         ,L"Finding Nearest Location","STATGROUP_Audio","STATCAT_Advanced",L"Audio",
                         true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar11 = *(FName *)FVar8;
    bVar3 = false;
    bVar4 = false;
    FVar10 = FVar11.ComparisonIndex.Value;
    uVar9 = FVar11.Number;
    if ((FVar10.Value == 0) && (uVar9 == 0)) {
      iVar6 = FAudioDevice::FindClosestListenerIndex(this->AudioDevice,&this->Transform);
      this->ClosestListenerIndex = iVar6;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res8.s.LowPart = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
        bVar3 = false;
        bVar4 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res8.s.LowPart = FVar10.Value;
          local_res8.s.HighPart = uVar9;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                     ,0x3c1);
          bVar3 = true;
          bVar4 = true;
        }
      }
      bVar13 = FThreadStats::bPrimaryEnable == false;
      if (bVar13) {
        FVar11.ComparisonIndex.Value = 0;
        FVar11.Number = 0;
      }
      else {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FThreadStats::AddMessage(FVar11,CycleScopeStart);
        FVar12.Value = FVar10.Value;
      }
      iVar6 = FAudioDevice::FindClosestListenerIndex(this->AudioDevice,&this->Transform);
      this->ClosestListenerIndex = iVar6;
      if (bVar4) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((!bVar13) && (FVar11 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
          local_28.NameAndInfo.Index.Value = FVar12.Value;
          QueryPerformanceCounter(&local_res8);
          local_28.StatData.Pad[4] = '\0';
          local_28.StatData.Pad[5] = '\0';
          local_28.StatData.Pad[6] = '\0';
          local_28.StatData.Pad[7] = '\0';
          local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
          local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
          local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
          local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_28);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
    }
  }
  return;
}

// CheckOcclusion @ 1473476a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FActiveSound::CheckOcclusion
          (FActiveSound *this,TVector<double> *param_1,TVector<double> *param_2,
          FSoundAttenuationSettings *param_3)

{
  FDynamicParameter *this_00;
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  FThreadSafeBool FVar9;
  FName *pFVar10;
  UWorld *this_01;
  ECollisionChannel EVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_248 [32];
  TStatId local_1e8;
  TVector<double> *local_1e0;
  TVector<double> *local_1d8;
  FWeakObjectPtr local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ECollisionChannel EStack_198;
  uint uStack_194;
  undefined1 local_190;
  undefined7 uStack_18f;
  uint uStack_188;
  uint uStack_184;
  FActiveSound *local_180;
  FName local_178;
  FName local_170 [3];
  code *local_158 [5];
  undefined8 *local_130;
  FCollisionQueryParams local_128;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1e0 = param_1;
  local_1d8 = param_2;
  if ((param_3 == (FSoundAttenuationSettings *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttenuationSettingsPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                         ,0x5ca,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_3->bEnableOcclusion == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttenuationSettingsPtr->bEnableOcclusion",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                         ,0x5cb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar13 = 0.0;
  if (AudioOcclusionDisabledCvar == 1) {
    LOCK();
    this->bIsOccluded = (FThreadSafeBool)0x0;
    UNLOCK();
  }
  else {
    if ((this->OcclusionCheckInterval < 0.0) ||
       (this->PlaybackTime - this->LastOcclusionCheckTime <= this->OcclusionCheckInterval)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((this->bAsyncOcclusionPending == (FThreadSafeBool)0x0) &&
       ((this->LastOcclusionCheckTime < 0.0 || (bVar8)))) {
      this->LastOcclusionCheckTime = this->PlaybackTime;
      EVar11 = (ECollisionChannel)(param_3->OcclusionTraceChannel).Value;
      bVar8 = param_3->bUseComplexCollisionForOcclusion;
      if ((this->bHasCheckedOcclusion == '\0') || (bUseAsyncOcclusionTracesCVar == false)) {
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          StatPtr_SoundOcclusion =
               (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_FActiveSound::CheckOcclusion(UE::Math::TVector<double>,UE::Math::TVector<double>,FSoundAttenuationSettings_const_*)_::_27_::<lambda_2>::operator()(void)const_::_2_::FStat_SoundOcclusion>
                )0x0;
          pFVar10 = ::FName::FName(&local_178,"SoundOcclusion");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_SoundOcclusion,*pFVar10,L"SoundOcclusion"
                     ,"STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                     ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS0);
        }
        local_1e8.StatIdPtr = (TStatIdData *)StatPtr_SoundOcclusion;
        if (StatPtr_SoundOcclusion ==
            (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_FActiveSound::CheckOcclusion(UE::Math::TVector<double>,UE::Math::TVector<double>,FSoundAttenuationSettings_const_*)_::_27_::<lambda_2>::operator()(void)const_::_2_::FStat_SoundOcclusion>
             )0x0) {
          pFVar10 = ::FName::FName(local_170,"SoundOcclusion");
          local_1e8.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_SoundOcclusion,*pFVar10,
                          L"SoundOcclusion","STATGROUP_CollisionTags","STATCAT_Advanced",
                          L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
        }
        if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          ::FName::FName(&::StaticName,"SoundOcclusion");
          _Init_thread_footer(&::_TSS0);
        }
        FCollisionQueryParams::FCollisionQueryParams
                  (&local_128,::StaticName,&local_1e8,bVar8,(AActor *)0x0);
        if (this->OwnerID != 0) {
          FCollisionQueryParams::AddIgnoredActor(&local_128,this->OwnerID);
        }
        this_01 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
        if (this_01 != (UWorld *)0x0) {
          FVar9._0_1_ = UWorld::LineTraceTestByChannel
                                  (this_01,local_1d8,local_1e0,EVar11,&local_128,
                                   &FCollisionResponseParams::DefaultResponseParam);
          LOCK();
          FVar9._1_3_ = 0;
          this->bIsOccluded = FVar9;
          UNLOCK();
        }
        if (local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
        }
        if (local_128.IgnoreComponents.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_128.IgnoreComponents.AllocatorInstance.SecondaryData);
        }
      }
      else {
        LOCK();
        this->bAsyncOcclusionPending = (FThreadSafeBool)0x1;
        UNLOCK();
        local_1d0 = (this->World).WeakPtr;
        uStack_1c8 = *(undefined8 *)&param_2->field0_0x0;
        uStack_1c0 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
        uStack_194 = this->OwnerID;
        dVar6 = (param_1->field0_0x0)._s_0.X;
        dVar7 = (param_1->field0_0x0)._s_0.Y;
        uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
        uVar4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
        uVar5 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
        uStack_188 = this->AudioDevice->DeviceID;
        uStack_184 = local_170[0].Number;
        local_158[0] = (code *)0x0;
        EStack_198 = EVar11;
        local_190 = bVar8;
        local_180 = this;
        local_130 = FMemory::Malloc(0x60,8);
        *local_130 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FActiveSound::CheckOcclusion'::`35'::<lambda_3>,1,1>::
                      _vftable_;
        *(FWeakObjectPtr *)(local_130 + 1) = local_1d0;
        *(undefined4 *)(local_130 + 2) = (undefined4)uStack_1c8;
        *(undefined4 *)((longlong)local_130 + 0x14) = uStack_1c8._4_4_;
        *(undefined4 *)(local_130 + 3) = (undefined4)uStack_1c0;
        *(undefined4 *)((longlong)local_130 + 0x1c) = uStack_1c0._4_4_;
        *(int *)(local_130 + 4) = (int)uVar1;
        *(int *)((longlong)local_130 + 0x24) = (int)((ulonglong)uVar1 >> 0x20);
        local_130[5] = dVar6;
        local_130[6] = dVar7;
        *(undefined4 *)(local_130 + 7) = uVar4;
        *(undefined4 *)((longlong)local_130 + 0x3c) = uVar5;
        *(ECollisionChannel *)(local_130 + 8) = EStack_198;
        *(uint *)((longlong)local_130 + 0x44) = uStack_194;
        local_130[9] = CONCAT71(uStack_18f,local_190);
        local_130[10] = CONCAT44(uStack_184,uStack_188);
        local_130[0xb] = local_180;
        if ((FWeakObjectPtr *)(local_130 + 1) != (FWeakObjectPtr *)0x0) {
          local_158[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FActiveSound::CheckOcclusion'::__l35::<lambda_3>,void>
                         ::Call;
        }
        FAudioThread::RunCommandOnGameThread
                  ((TUniqueFunction<void___cdecl(void)> *)local_158,(TStatId)0x154f11430);
      }
    }
    if (this->bHasCheckedOcclusion != '\0') {
      fVar13 = param_3->OcclusionInterpolationTime;
    }
    this->field_0x1a1 = this->field_0x1a1 | 2;
  }
  this_00 = &this->CurrentOcclusionFilterFrequency;
  if (this->bIsOccluded == (FThreadSafeBool)0x0) {
    FDynamicParameter::Set(this_00,__real_469c4000,fVar13);
    fVar12 = __real_3f800000;
  }
  else {
    if (param_3->OcclusionLowPassFilterFrequency <
        (this->CurrentOcclusionFilterFrequency).TargetValue) {
      FDynamicParameter::Set(this_00,param_3->OcclusionLowPassFilterFrequency,fVar13);
    }
    fVar12 = param_3->OcclusionVolumeAttenuation;
    if ((this->CurrentOcclusionVolumeAttenuation).TargetValue <= fVar12) goto LAB_147347bce;
  }
  FDynamicParameter::Set(&this->CurrentOcclusionVolumeAttenuation,fVar12,fVar13);
LAB_147347bce:
  fVar13 = (float)(double)FApp::DeltaTime;
  FDynamicParameter::Update(this_00,fVar13);
  FDynamicParameter::Update(&this->CurrentOcclusionVolumeAttenuation,fVar13);
  return;
}

// ClearAudioComponent @ 147347c30

void __thiscall FActiveSound::ClearAudioComponent(FActiveSound *this)

{
  this->AudioComponentID = 0;
  (this->AudioComponentUserID).ComparisonIndex = 0;
  (this->AudioComponentUserID).Number = 0;
  (this->AudioComponentName).ComparisonIndex = 0;
  (this->AudioComponentName).Number = 0;
  this->OwnerID = 0;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  (this->OwnerKey).ObjectIndex = 0;
  (this->OwnerKey).ObjectSerialNumber = 0;
  return;
}

// ClearVirtualizationModeOverride @ 147347da0

void __thiscall FActiveSound::ClearVirtualizationModeOverride(FActiveSound *this)

{
  this->bEnableVirtualizationModeOverride = '\0';
  return;
}

// CollectAttenuationShapesForVisualization @ 1473482e0

void __thiscall
FActiveSound::CollectAttenuationShapesForVisualization
          (FActiveSound *this,
          TMultiMap<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,1>_>
          *param_1)

{
  USoundAttenuation *pUVar1;
  USoundCue *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  FSoundAttenuationSettings *pFVar6;
  uint uVar7;
  longlong lVar8;
  TArray<USoundNodeAttenuation_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bHasAttenuationSettings != '\0') {
    if (this->bIsAttenuationSettingsOverridden == '\0') {
      pUVar1 = (this->SoundAttenuation).field0_0x0.DebugPtr;
      if (pUVar1 == (USoundAttenuation *)0x0) goto LAB_14734831e;
      pFVar6 = &pUVar1->Attenuation;
    }
    else {
      pFVar6 = &this->AttenuationSettings;
    }
    (**(code **)(pFVar6->_padding_ + 8))();
  }
LAB_14734831e:
  if ((this->Sound).field0_0x0.DebugPtr != (USoundBase *)0x0) {
    pUVar5 = Z_Construct_UClass_USoundCue_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->Sound,pUVar5);
    if ((bVar3) &&
       (this_00 = (USoundCue *)(this->Sound).field0_0x0.DebugPtr, this_00 != (USoundCue *)0x0)) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      USoundCue::RecursiveFindAttenuation
                (this_00,(this_00->FirstNode).field0_0x0.DebugPtr,&local_18);
      uVar7 = 0;
      if (0 < local_18.ArrayNum) {
        lVar8 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < local_18.ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar6 = USoundNodeAttenuation::GetAttenuationSettingsToApply
                             (*(USoundNodeAttenuation **)(local_18.AllocatorInstance.Data + lVar8));
          if (pFVar6 != (FSoundAttenuationSettings *)0x0) {
            (**(code **)(pFVar6->_padding_ + 8))(pFVar6,param_1);
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 8;
        } while ((int)uVar7 < local_18.ArrayNum);
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CreateVirtualCopy @ 147349c60

FActiveSound * __cdecl FActiveSound::CreateVirtualCopy(FActiveSound *param_1,FAudioDevice *param_2)

{
  USoundBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  EVirtualizationMode EVar4;
  FActiveSound *pFVar5;
  code *local_38 [2];
  undefined **local_28;
  ulong64 local_20;
  undefined8 local_10;
  
  if (((bool)param_1->bIsStopping) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InActiveSoundToCopy.bIsStopping",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                         ,0xd0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FActiveSound *)(*pcVar2)();
    return pFVar5;
  }
  pFVar5 = ::operator_new(0x990);
  if (pFVar5 == (FActiveSound *)0x0) {
    pFVar5 = (FActiveSound *)0x0;
  }
  else {
    pFVar5 = FActiveSound(pFVar5,param_1);
  }
  LOCK();
  pFVar5->bAsyncOcclusionPending = (FThreadSafeBool)0x0;
  UNLOCK();
  pFVar5->bHasVirtualized = '\x01';
  pFVar5->bIsPlayingAudio = '\0';
  pFVar5->bShouldStopDueToMaxConcurrency = '\0';
  pFVar5->AudioDevice = param_2;
  pFVar5->PlaybackTimeNonVirtualized = 0.0;
  if (((param_1->Sound).field0_0x0.DebugPtr == (USoundBase *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                         ,0xdd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FActiveSound *)(*pcVar2)();
    return pFVar5;
  }
  pUVar1 = (param_1->Sound).field0_0x0.DebugPtr;
  EVar4 = Disabled;
  if (pUVar1 != (USoundBase *)0x0) {
    EVar4 = pUVar1->VirtualizationMode;
  }
  if (param_1->bEnableVirtualizationModeOverride != 0) {
    EVar4 = param_1->VirtualizationModeOverride;
  }
  if (EVar4 == SeekRestart) {
    if (((OverrideSeekStartTimeCVar == 1) || (OverrideSeekStartTimeCVar == 2)) ||
       (OverrideSeekStartTimeCVar != 3)) goto LAB_147349d67;
  }
  else if (EVar4 != Restart) goto LAB_147349d67;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
           *)&pFVar5->SoundNodeOffsetMap);
LAB_147349d67:
  if (0.0 < param_1->VolumeConcurrency || param_1->VolumeConcurrency == 0.0) {
    pFVar5->VolumeConcurrency = 1.0;
  }
  TSet<TTuple<unsigned_int,FConcurrencySoundData>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,FConcurrencySoundData>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>,FDefaultSetAllocator>
           *)&pFVar5->ConcurrencyGroupData);
  TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
           *)&pFVar5->WaveInstances);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FActiveSound::CreateVirtualCopy'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_20 = pFVar5->AudioComponentID;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FActiveSound::CreateVirtualCopy'::__l2::<lambda_1>,void>::Call;
  FAudioThread::RunCommandOnGameThread
            ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
  return pFVar5;
}

// FindClosestListener @ 14734d250

int __thiscall
FActiveSound::FindClosestListener
          (FActiveSound *this,TArray<FListener,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  
  if (this->AudioDevice != (FAudioDevice *)0x0) {
    iVar1 = FAudioDevice::FindClosestListenerIndex(&this->Transform,param_1);
    return iVar1;
  }
  return -1;
}

// FindClosestListener @ 14734d270

int __thiscall FActiveSound::FindClosestListener(FActiveSound *this)

{
  int iVar1;
  
  if (this->AudioDevice != (FAudioDevice *)0x0) {
    iVar1 = FAudioDevice::FindClosestListenerIndex(this->AudioDevice,&this->Transform);
    return iVar1;
  }
  return -1;
}

// FindWaveInstance @ 14734d620

FWaveInstance * __thiscall FActiveSound::FindWaveInstance(FActiveSound *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)&(this->WaveInstances).field_0x8 != *(int *)&(this->WaveInstances).field_0x34) {
    puVar3 = *(undefined1 **)&(this->WaveInstances).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->WaveInstances).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->WaveInstances).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->WaveInstances + (longlong)iVar2 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->WaveInstances + (longlong)iVar2 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (FWaveInstance *)0x0;
          }
          return *(FWaveInstance **)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FWaveInstance *)0x0;
}

// GatherInteriorData @ 14734da60

void __thiscall FActiveSound::GatherInteriorData(FActiveSound *this,FSoundParseParameters *param_1)

{
  int *piVar1;
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FAudioVolumeSettings local_b8;
  TVector<double>_u_0 local_38;
  
  local_b8.AudioVolumeID = 0xffffffff;
  local_b8.Priority = 0.0;
  local_b8.ReverbSettings.bApplyReverb = true;
  local_b8.ReverbSettings.ReverbEffect.field0_0x0.DebugPtr = (TObjectPtr<UReverbEffect>_u_0)0x0;
  local_b8.ReverbSettings.ReverbPluginEffect.field0_0x0.DebugPtr =
       (TObjectPtr<USoundEffectSubmixPreset>_u_0)0x0;
  local_b8.ReverbSettings.Volume = 0.5;
  local_b8.ReverbSettings.FadeTime = 2.0;
  FInteriorSettings::FInteriorSettings(&local_b8.InteriorSettings);
  local_38._s_0.X = (param_1->Transform).Translation.XY.m128d_f64[0];
  local_38._s_0.Y = (param_1->Transform).Translation.XY.m128d_f64[1];
  local_38._s_0.Z = (param_1->Transform).Translation.ZW.m128d_f64[0];
  local_b8.SubmixSendSettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.SubmixSendSettings.ArrayNum = 0;
  local_b8.SubmixSendSettings.ArrayMax = 0;
  local_b8.SubmixOverrideSettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.SubmixOverrideSettings.ArrayNum = 0;
  local_b8.SubmixOverrideSettings.ArrayMax = 0;
  local_b8.bChanged = false;
  FAudioDevice::GetAudioVolumeSettings
            (this->AudioDevice,this->WorldID,(TVector<double> *)&local_38._s_0,&local_b8);
  pTVar2 = &this->AudioVolumeSubmixSendSettings;
  (this->InteriorSettings).bIsWorldSettings = local_b8.InteriorSettings.bIsWorldSettings;
  *(undefined3 *)&(this->InteriorSettings).field_0x1 = local_b8.InteriorSettings._1_3_;
  (this->InteriorSettings).ExteriorVolume = local_b8.InteriorSettings.ExteriorVolume;
  (this->InteriorSettings).ExteriorTime = local_b8.InteriorSettings.ExteriorTime;
  (this->InteriorSettings).ExteriorLPF = local_b8.InteriorSettings.ExteriorLPF;
  (this->InteriorSettings).ExteriorLPFTime = local_b8.InteriorSettings.ExteriorLPFTime;
  (this->InteriorSettings).InteriorVolume = local_b8.InteriorSettings.InteriorVolume;
  (this->InteriorSettings).InteriorTime = local_b8.InteriorSettings.InteriorTime;
  (this->InteriorSettings).InteriorLPF = local_b8.InteriorSettings.InteriorLPF;
  (this->InteriorSettings).InteriorLPFTime = local_b8.InteriorSettings.InteriorLPFTime;
  if (pTVar2 != &local_b8.SubmixSendSettings) {
    DestructItems<FAudioVolumeSubmixSendSettings,int>
              ((FAudioVolumeSubmixSendSettings *)(pTVar2->AllocatorInstance).Data,
               (this->AudioVolumeSubmixSendSettings).ArrayNum);
    FVar3.Data = local_b8.SubmixSendSettings.AllocatorInstance.Data;
    iVar4 = local_b8.SubmixSendSettings.ArrayNum;
    piVar1 = &(this->AudioVolumeSubmixSendSettings).ArrayMax;
    (this->AudioVolumeSubmixSendSettings).ArrayNum = local_b8.SubmixSendSettings.ArrayNum;
    if ((local_b8.SubmixSendSettings.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_b8.SubmixSendSettings.ArrayNum,*piVar1,&pTVar2->AllocatorInstance,
                 local_b8.SubmixSendSettings.ArrayNum,piVar1);
      ConstructItems<FAudioVolumeSubmixSendSettings,FAudioVolumeSubmixSendSettings,int>
                ((pTVar2->AllocatorInstance).Data,(FAudioVolumeSubmixSendSettings *)FVar3.Data,iVar4
                );
    }
  }
  this->AudioVolumeID = local_b8.AudioVolumeID;
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            ((FAudioVolumeSubmixOverrideSettings *)
             local_b8.SubmixOverrideSettings.AllocatorInstance.Data,
             local_b8.SubmixOverrideSettings.ArrayNum);
  if ((FAudioVolumeSubmixOverrideSettings *)local_b8.SubmixOverrideSettings.AllocatorInstance.Data
      != (FAudioVolumeSubmixOverrideSettings *)0x0) {
    FMemory::Free(local_b8.SubmixOverrideSettings.AllocatorInstance.Data);
  }
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)local_b8.SubmixSendSettings.AllocatorInstance.Data,
             local_b8.SubmixSendSettings.ArrayNum);
  if ((FAudioVolumeSubmixSendSettings *)local_b8.SubmixSendSettings.AllocatorInstance.Data !=
      (FAudioVolumeSubmixSendSettings *)0x0) {
    FMemory::Free(local_b8.SubmixSendSettings.AllocatorInstance.Data);
  }
  return;
}

// GetAlwaysPlay @ 14734de10

bool __thiscall FActiveSound::GetAlwaysPlay(FActiveSound *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  USoundClass *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FSoundClassProperties *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((bool)this->bAlwaysPlay) {
    return true;
  }
  iVar14 = 0;
  puVar1 = &(this->WaveInstances).field_0x10;
  iVar3 = *(int *)&(this->WaveInstances).field_0x28;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->WaveInstances).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14734decd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar9 = local_res10 + -1 + iVar16;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14734decd:
  uVar13 = *(uint *)&(this->WaveInstances).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar14);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->WaveInstances).field_0x8 -
                       *(int *)&(this->WaveInstances).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(this->WaveInstances).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->WaveInstances).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14734dfe0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar13 = local_res18 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_14734dfe0:
  while( true ) {
    if (*(int *)&(this->WaveInstances).field_0x8 - *(int *)&(this->WaveInstances).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar11 = *(longlong *)
              (*(longlong *)&this->WaveInstances + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((lVar11 != 0) && (pUVar4 = *(USoundClass **)(lVar11 + 8), pUVar4 != (USoundClass *)0x0)) {
      pFVar10 = FAudioDevice::GetSoundClassCurrentProperties(this->AudioDevice,pUVar4);
      if ((pFVar10 == (FSoundClassProperties *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SoundClassProperties",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                             ,0x71f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (pFVar10->bAlwaysPlay != '\0') {
        return true;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// GetAttenuationFrequency @ 14734e290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FActiveSound::GetAttenuationFrequency
          (FActiveSound *this,FSoundAttenuationSettings *param_1,FAttenuationListenerData *param_2,
          TVector2<double> *param_3,FRuntimeFloatCurve *param_4)

{
  float fVar1;
  double dVar2;
  FRichCurve *this_00;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58 [5];
  
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (dVar2 == dVar5) {
    fVar4 = (float)dVar2;
  }
  else {
    fVar4 = param_1->LPFRadiusMin;
    fVar1 = param_1->LPFRadiusMax;
    local_68._s_0.X = (double)fVar4;
    if (fVar4 == fVar1) {
      if (param_2->AttenuationDistance <= local_68._s_0.X) {
        dVar5 = dVar2;
      }
      fVar4 = (float)dVar5;
    }
    else {
      dVar3 = param_2->AttenuationDistance;
      if (param_1->AbsorptionMethod == Linear) {
        local_68._s_0.Y = (double)fVar1;
        if (param_1->bEnableLogFrequencyScaling == '\0') {
          dVar6 = local_68._s_0.Y - local_68._s_0.X;
          if (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
            dVar6 = (dVar3 - local_68._s_0.X) / dVar6;
          }
          else {
            dVar6 = __real_3ff0000000000000;
            if (dVar3 < local_68._s_0.Y) {
              dVar6 = 0.0;
            }
          }
          if (__real_3ff0000000000000 <= dVar6) {
            dVar6 = __real_3ff0000000000000;
          }
          if (dVar6 <= 0.0) {
            dVar6 = 0.0;
          }
          fVar4 = (float)(dVar6 * (dVar5 - dVar2) + dVar2);
        }
        else {
          fVar4 = Audio::GetLogFrequencyClamped
                            ((float)dVar3,(TVector2<double> *)&local_68._s_0,param_3);
        }
      }
      else {
        dVar3 = dVar3 - local_68._s_0.X;
        uVar10 = (undefined4)((ulonglong)dVar5 >> 0x20);
        uVar9 = SUB84(dVar2,0);
        uVar11 = uVar8;
        if (dVar5 <= dVar2) {
          uVar9 = SUB84(dVar5,0);
          uVar11 = uVar10;
        }
        uVar7 = SUB84(dVar2,0);
        if (dVar2 <= dVar5) {
          uVar7 = SUB84(dVar5,0);
          uVar8 = uVar10;
        }
        local_68._s_0.X = (double)CONCAT44(uVar11,uVar9);
        local_68._s_0.Y = (double)CONCAT44(uVar8,uVar7);
        fVar4 = (float)(dVar3 / (double)(fVar1 - fVar4));
        if (__real_3f800000 <= fVar4) {
          fVar4 = __real_3f800000;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        this_00 = FRuntimeFloatCurve::GetRichCurveConst(param_4);
        fVar4 = FRichCurve::Eval(this_00,fVar4,0.0);
        if (__real_3f800000 <= fVar4) {
          fVar4 = __real_3f800000;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        if (param_1->bEnableLogFrequencyScaling == '\0') {
          if (__real_3f800000 <= fVar4) {
            fVar4 = __real_3f800000;
          }
          if (fVar4 <= 0.0) {
            fVar4 = 0.0;
          }
          fVar4 = fVar4 * ((float)(double)CONCAT44(uVar8,uVar7) -
                          (float)(double)CONCAT44(uVar11,uVar9)) +
                  (float)(double)CONCAT44(uVar11,uVar9);
        }
        else {
          local_58[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
          local_58[0]._s_0.Y = _UNK_15061cbc8;
          fVar4 = Audio::GetLogFrequencyClamped
                            (fVar4,(TVector2<double> *)&local_58[0]._s_0,
                             (TVector2<double> *)&local_68._s_0);
        }
      }
    }
  }
  if (__real_469c4000 <= fVar4) {
    fVar4 = __real_469c4000;
  }
  if (fVar4 <= __real_41a00000) {
    fVar4 = __real_41a00000;
  }
  return fVar4;
}

// GetAudioComponentName @ 14734e490

FString * __thiscall
FActiveSound::GetAudioComponentName(FActiveSound *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  bVar1 = this->AudioComponentID == 0;
  if (bVar1) {
    pFVar2 = ::FString::FString(&local_28,L"NO COMPONENT");
  }
  else {
    pFVar2 = ::FName::ToString(&this->AudioComponentName,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar1) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetBusSends @ 14734e550

void __thiscall
FActiveSound::GetBusSends
          (FActiveSound *this,EBusSendType param_1,
          TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  uint uVar2;
  USoundBase *this_00;
  FSoundSourceBusSendInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FSoundSourceBusSendInfo *pFVar11;
  FSoundSourceBusSendInfo *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  this_00 = (this->Sound).field0_0x0.DebugPtr;
  if (this_00 == (USoundBase *)0x0) {
    return;
  }
  USoundBase::GetSoundSourceBusSends(this_00,param_1,param_2);
  uVar2 = this->BusSendsOverride[param_1].ArrayNum;
  uVar8 = (ulonglong)(int)uVar2;
  pFVar11 = (FSoundSourceBusSendInfo *)this->BusSendsOverride[param_1].AllocatorInstance.Data;
  pFVar12 = pFVar11 + uVar8;
LAB_14734e5b0:
  do {
    if (this->BusSendsOverride[param_1].ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSoundSourceBusSendInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) {
      return;
    }
    iVar7 = param_2->ArrayNum;
    pFVar9 = (param_2->AllocatorInstance).Data;
    pFVar10 = pFVar9 + (longlong)iVar7 * 0xb8;
    while( true ) {
      if (param_2->ArrayNum != iVar7) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FSoundSourceBusSendInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar9 == pFVar10) {
        pFVar3 = (FSoundSourceBusSendInfo *)(param_2->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + param_2->ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8b8,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar7 + 1;
        FSoundSourceBusSendInfo::FSoundSourceBusSendInfo
                  ((FSoundSourceBusSendInfo *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0xb8),pFVar11);
        uVar8 = (ulonglong)uVar2;
        pFVar11 = pFVar11 + 1;
        goto LAB_14734e5b0;
      }
      if ((*(USoundSourceBus **)(pFVar9 + 8) == (USoundSourceBus *)0x0) ||
         (*(USoundSourceBus **)(pFVar9 + 8) != (pFVar11->SoundSourceBus).field0_0x0.DebugPtr)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((*(UAudioBus **)(pFVar9 + 0x10) == (UAudioBus *)0x0) ||
         (*(UAudioBus **)(pFVar9 + 0x10) != (pFVar11->AudioBus).field0_0x0.DebugPtr)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar6) || (bVar5)) break;
      pFVar9 = pFVar9 + 0xb8;
    }
    pfVar1 = &pFVar11->SendLevel;
    pFVar11 = pFVar11 + 1;
    uVar8 = (ulonglong)uVar2;
    *(float *)(pFVar9 + 0x18) = *pfVar1;
  } while( true );
}

// GetClosestListenerIndex @ 14734e730

int __thiscall FActiveSound::GetClosestListenerIndex(FActiveSound *this)

{
  if ((this->ClosestListenerIndex == -1) && (this->AudioDevice != (FAudioDevice *)0x0)) {
    CacheClosestListener(this);
    return this->ClosestListenerIndex;
  }
  return this->ClosestListenerIndex;
}

// GetConcurrencyFadeDuration @ 14734e770

bool __thiscall FActiveSound::GetConcurrencyFadeDuration(FActiveSound *this,float *param_1)

{
  float fVar1;
  float fVar2;
  USoundBase *pUVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  undefined1 local_res10 [8];
  TArray<FConcurrencyHandle,TSizedDefaultAllocator<32>_> local_58 [4];
  
  *param_1 = -1.0;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  GetConcurrencyHandles(this,local_58);
  fVar5 = __real_3dcccccd;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar6 = local_58[0].ArrayNum;
  uVar9 = (ulonglong)local_58[0].ArrayNum;
  pFVar11 = local_58[0].AllocatorInstance.Data + uVar9 * 0x10;
  FVar10.Data = local_58[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar6) {
      `TCheckedPointerIterator<FConcurrencyHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar10.Data == pFVar11) break;
    bVar7 = FSoundConcurrencySettings::IsEvictionSupported
                      (*(FSoundConcurrencySettings **)FVar10.Data);
    if ((((!bVar7) && (pUVar3 = (this->Sound).field0_0x0.DebugPtr, pUVar3 != (USoundBase *)0x0)) &&
        (cVar8 = (**(code **)(pUVar3->_padding_ + 0x310))(), cVar8 != '\0')) &&
       ((float)((uint)this->PlaybackTimeNonVirtualized & uVar4) <= fVar5)) goto LAB_14734e855;
    fVar1 = *param_1;
    fVar2 = *(float *)(*(longlong *)FVar10.Data + 0x20);
    fVar12 = fVar2;
    if ((0.0 <= fVar1) && (fVar12 = fVar1, fVar2 <= fVar1)) {
      fVar12 = fVar2;
    }
    uVar9 = local_58[0]._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 0x10;
    *param_1 = fVar12;
  }
  if (0.0 < *param_1) {
    bVar7 = true;
    goto LAB_14734e85e;
  }
LAB_14734e855:
  *param_1 = 0.0;
  bVar7 = false;
LAB_14734e85e:
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return bVar7;
}

// GetConcurrencyHandles @ 14734e8a0

void __thiscall
FActiveSound::GetConcurrencyHandles
          (FActiveSound *this,TArray<FConcurrencyHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  UAudioSettings *this_00;
  USoundBase *this_01;
  code *pcVar7;
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  int iVar10;
  UClass *this_02;
  USoundConcurrency *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  ulonglong local_res18;
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  *local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  piVar1 = &param_1->ArrayMax;
  iVar13 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  this_02 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((this_02->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_02);
  }
  this_00 = (UAudioSettings *)(this_02->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((this_00 == (UAudioSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                         ,0x30c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar18 = *(int *)&(this->ConcurrencySet).Elements.field_0x8 -
           *(int *)&(this->ConcurrencySet).Elements.field_0x34;
  if (iVar18 < 1) {
    this_01 = (this->Sound).field0_0x0.DebugPtr;
    if (this_01 != (USoundBase *)0x0) {
      USoundBase::GetConcurrencyHandles(this_01,param_1);
      return;
    }
    pUVar11 = UAudioSettings::GetDefaultSoundConcurrency(this_00);
    if (pUVar11 != (USoundConcurrency *)0x0) {
      iVar13 = param_1->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar13 + 1;
      FConcurrencyHandle::FConcurrencyHandle
                ((FConcurrencyHandle *)((param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x10)
                 ,pUVar11);
      return;
    }
  }
  else {
    pTVar2 = &this->ConcurrencySet;
    puVar3 = &(this->ConcurrencySet).Elements.field_0x10;
    iVar5 = *(int *)&(this->ConcurrencySet).Elements.field_0x28;
    iVar15 = 0;
    local_res18 = CONCAT44(local_res18._4_4_,1);
    iVar10 = iVar13;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(this->ConcurrencySet).Elements.field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar3;
      }
      uVar14 = *puVar17;
      iVar15 = 0;
      iVar13 = 0;
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14734e9ef;
        uVar14 = puVar17[lVar12 + 1];
      }
      local_res18 = (ulonglong)(-uVar14 & uVar14);
      uVar4 = local_res18 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iVar10 = iVar15 + -1 + local_res10;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14734e9ef:
    TStack_70._padding_ = CONCAT44((int)local_res18,iVar13);
    uVar14 = *(uint *)&(this->ConcurrencySet).Elements.field_0x28;
    TStack_70.CurrentBitIndex = iVar10;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    uVar19 = uVar14 & 0xffffffe0;
    TStack_70._28_4_ = local_ac;
    TStack_70.BaseBitIndex = iVar15;
    uStack_50 = CONCAT44(uStack_7c,iVar18);
    iVar13 = (int)uVar14 >> 5;
    local_res20 = pTVar2;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar14 < 0) || (iVar5 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar8 = local_res20;
    uVar6 = *(uint *)&(this->ConcurrencySet).Elements.field_0x28;
    if (uVar14 != uVar6) {
      puVar16 = *(undefined1 **)&(this->ConcurrencySet).Elements.field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar3;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar13;
        uVar19 = uVar19 + 0x20;
        iVar13 = iVar13 + 1;
        uVar14 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14734eaf0;
        uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar14 = (int)lVar12 + -1 + uVar19;
      if ((int)uVar6 < (int)uVar14) {
        uVar14 = uVar6;
      }
    }
LAB_14734eaf0:
    while( true ) {
      if (*(int *)&(this->ConcurrencySet).Elements.field_0x8 -
          *(int *)&(this->ConcurrencySet).Elements.field_0x34 != (int)uStack_50) {
        `TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_70.CurrentBitIndex == uVar14) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar2 == pTVar8)
         ) break;
      pUVar11 = *(USoundConcurrency **)
                 (*(longlong *)&pTVar2->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
      if (pUVar11 != (USoundConcurrency *)0x0) {
        iVar13 = param_1->ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar13 + 1;
        FConcurrencyHandle::FConcurrencyHandle
                  ((FConcurrencyHandle *)
                   ((param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x10),pUVar11);
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
  }
  return;
}

// GetConcurrencyPriority @ 14734ec10

float __thiscall FActiveSound::GetConcurrencyPriority(FActiveSound *this)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = GetAlwaysPlay(this);
  if (bVar1) {
    fVar2 = (this->FocusData).PriorityHighest * (this->FocusData).PriorityScale;
    if (__real_42c80000 <= fVar2) {
      fVar2 = __real_42c80000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    return fVar2 * this->Priority + __real_42ca0000;
  }
  bVar1 = GetAlwaysPlay(this);
  if (bVar1) {
    return __real_7f7fffff * this->Priority;
  }
  fVar2 = (this->FocusData).PriorityHighest * (this->FocusData).PriorityScale;
  if (__real_42c80000 <= fVar2) {
    fVar2 = __real_42c80000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2 * this->Priority;
}

// GetEffectiveVolumeModulators @ 14734eee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
* __thiscall
FActiveSound::GetEffectiveVolumeModulators
          (FActiveSound *this,
          TArray<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FWaveInstance *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar6;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  TArray<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  *pTVar11;
  FSoundModulationDestinationSettings *pFVar12;
  undefined1 *puVar13;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *this_01;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [8];
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_128;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  FSoundModulationDestinationSettings local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  puVar1 = &(this->WaveInstances).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_160 = &this->WaveInstances;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar9 = *(int *)&(this->WaveInstances).field_0x28;
  iStack_158 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  local_140 = iStack_158;
  if (iVar9 != 0) {
    puVar17 = *(uint **)&(this->WaveInstances).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar16 = *puVar17;
    local_140 = 0;
    iStack_158 = 0;
    while (uVar16 == 0) {
      lVar10 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      iStack_144 = iVar9;
      if ((int)((iVar9 + -1 >> 0x1f & 0x1fU) + iVar9 + -1) >> 5 < iStack_158) goto LAB_14734efad;
      uVar16 = puVar17[lVar10 + 1];
    }
    uStack_154 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_154 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_130 = (int)lVar10;
    iStack_144 = local_130 + -1 + local_140;
    if (iVar9 < iStack_144) {
      iStack_144 = iVar9;
    }
  }
LAB_14734efad:
  iStack_138 = *(int *)&(this->WaveInstances).field_0x8 - *(int *)&(this->WaveInstances).field_0x34;
  uVar16 = *(uint *)&(this->WaveInstances).field_0x28;
  uStack_148 = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_154,iStack_158);
  uVar15 = uVar16 & 0xffffffe0;
  TStack_118.CurrentBitIndex = iStack_144;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_118._28_4_ = iStack_144;
  TStack_118.BaseBitIndex = local_140;
  uStack_f8 = CONCAT44(uStack_134,iStack_138);
  local_150 = puVar1;
  iStack_13c = iStack_144;
  local_128 = local_160;
  local_120 = local_160;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
               *)(*pcVar5)();
    return pTVar11;
  }
  pTVar6 = local_128;
  uVar3 = *(uint *)&(this->WaveInstances).field_0x28;
  if (uVar16 != uVar3) {
    puVar13 = *(undefined1 **)&(this->WaveInstances).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar14) goto LAB_14734f0c0;
      uVar16 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_12c = (int)lVar10;
    uVar16 = local_12c + -1 + uVar15;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
    }
  }
LAB_14734f0c0:
  while( true ) {
    pTVar7 = local_120;
    if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
      local_168[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (((TStack_118.CurrentBitIndex == uVar16) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar6))
    break;
    this_00 = *(FWaveInstance **)
               (*(longlong *)pTVar7 + 8 + (longlong)TStack_118.CurrentBitIndex * 0x18);
    if (this_00 != (FWaveInstance *)0x0) {
      pFVar12 = FWaveInstance::GetEffectiveModulationSettings(this_00,&local_98,Volume);
      local_bc = 0x80;
      local_e8._0_8_ = (FScriptContainerElement *)0x0;
      local_e8._8_8_ = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)local_e8,&pFVar12->Modulators);
      local_98.Modulators.HashSize = 0;
      if (local_98.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Modulators.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Modulators.Elements);
      if (local_e8._8_4_ != local_b4) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_e8) &&
            ((FScriptContainerElement *)local_e8 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 0x50)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar5)();
          return pTVar11;
        }
        iVar9 = __return_storage_ptr__->ArrayNum;
        if (iVar9 == __return_storage_ptr__->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        this_01 = (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x50);
        *(undefined8 *)&this_01->Elements = 0;
        *(undefined8 *)&(this_01->Elements).field_0x8 = 0;
        *(undefined8 *)&(this_01->Elements).field_0x20 = 0;
        *(undefined4 *)&(this_01->Elements).field_0x28 = 0;
        *(undefined4 *)&(this_01->Elements).field_0x2c = 0x80;
        *(undefined4 *)&(this_01->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this_01->Elements).field_0x34 = 0;
        (this_01->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
        this_01->HashSize = 0;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::operator=(this_01,(TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                             *)local_e8);
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      iVar9 = SUB84(local_e8._8_8_,4);
      local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
      if (iVar9 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
      }
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_c0 = 0;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
    }
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  return __return_storage_ptr__;
}

// GetHighestPriority @ 14734f540

float __thiscall FActiveSound::GetHighestPriority(FActiveSound *this,bool param_1)

{
  bool bVar1;
  float fVar2;
  
  if (!param_1) {
    bVar1 = GetAlwaysPlay(this);
    if (bVar1) {
      return __real_7f7fffff;
    }
  }
  fVar2 = (this->FocusData).PriorityHighest * (this->FocusData).PriorityScale;
  if (__real_42c80000 <= fVar2) {
    fVar2 = __real_42c80000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}

// GetNewBusSends @ 14734f890

TArray<TTuple<EBusSendType,FSoundSourceBusSendInfo>,TSizedDefaultAllocator<32>_> * __thiscall
FActiveSound::GetNewBusSends(FActiveSound *this)

{
  return &this->NewBusSends;
}

// GetObjectId @ 14734f930

uint __thiscall FActiveSound::GetObjectId(FActiveSound *this)

{
  USoundBase *pUVar1;
  
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundBase *)0x0) {
    return *(uint *)((longlong)&pUVar1->_padding_ + 4);
  }
  return 0xffffffff;
}

// GetOwnerName @ 14734fa80

FString * __thiscall FActiveSound::GetOwnerName(FActiveSound *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  bVar1 = this->OwnerID == 0;
  if (bVar1) {
    pFVar2 = ::FString::FString(&local_28,L"None");
  }
  else {
    pFVar2 = ::FName::ToString(&this->OwnerName,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar1) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPlayCount @ 14734fb70

int __thiscall FActiveSound::GetPlayCount(FActiveSound *this)

{
  USoundBase *pUVar1;
  int *piVar2;
  
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  if ((pUVar1 != (USoundBase *)0x0) && (this->AudioDevice != (FAudioDevice *)0x0)) {
    piVar2 = TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
             ::Find((TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                     *)&pUVar1->CurrentPlayCount,this->AudioDevice->DeviceID);
    if (piVar2 != (int *)0x0) {
      return *piVar2;
    }
  }
  return 0;
}

// GetSoundClass @ 147350940

USoundClass * __thiscall FActiveSound::GetSoundClass(FActiveSound *this)

{
  USoundBase *pUVar1;
  USoundClass *pUVar2;
  
  pUVar2 = (this->SoundClassOverride).field0_0x0.DebugPtr;
  if (pUVar2 == (USoundClass *)0x0) {
    pUVar1 = (this->Sound).field0_0x0.DebugPtr;
    if (pUVar1 != (USoundBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147350958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar2 = (USoundClass *)(**(code **)(pUVar1->_padding_ + 0x330))();
      return pUVar2;
    }
    pUVar2 = (USoundClass *)0x0;
  }
  return pUVar2;
}

// GetSoundSubmix @ 147350970

USoundSubmixBase * __thiscall FActiveSound::GetSoundSubmix(FActiveSound *this)

{
  USoundBase *pUVar1;
  USoundSubmixBase *pUVar2;
  
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014735097c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (USoundSubmixBase *)(**(code **)(pUVar1->_padding_ + 0x338))();
    return pUVar2;
  }
  return (USoundSubmixBase *)0x0;
}

// GetSoundSubmixSends @ 147350990

void __thiscall
FActiveSound::GetSoundSubmixSends
          (FActiveSound *this,TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  float *pfVar1;
  int iVar2;
  USoundBase *this_00;
  FSoundSubmixSendInfoBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FSoundSubmixSendInfoBase *this_01;
  FScriptContainerElement *pFVar8;
  FSoundSubmixSendInfoBase *pFVar9;
  FSoundSubmixSendInfoBase *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  this_00 = (this->Sound).field0_0x0.DebugPtr;
  if (this_00 == (USoundBase *)0x0) {
    return;
  }
  USoundBase::GetSoundSubmixSends(this_00,param_1);
  iVar2 = (this->SoundSubmixSendsOverride).ArrayNum;
  pFVar9 = (FSoundSubmixSendInfoBase *)(this->SoundSubmixSendsOverride).AllocatorInstance.Data;
  pFVar10 = (FSoundSubmixSendInfoBase *)((longlong)pFVar9 + (longlong)iVar2 * 0xb8);
LAB_1473509e2:
  do {
    if ((this->SoundSubmixSendsOverride).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSoundSubmixSendInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      return;
    }
    iVar6 = param_1->ArrayNum;
    pFVar7 = (param_1->AllocatorInstance).Data;
    pFVar8 = pFVar7 + (longlong)iVar6 * 0xb8;
    while( true ) {
      if (param_1->ArrayNum != iVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FSoundSubmixSendInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar7 == pFVar8) {
        pFVar3 = (FSoundSubmixSendInfoBase *)(param_1->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar9) &&
            (pFVar9 < (FSoundSubmixSendInfoBase *)
                      ((longlong)pFVar3 + (longlong)param_1->ArrayMax * 0xb8))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8b8,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        this_01 = (FSoundSubmixSendInfoBase *)
                  ((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0xb8);
        FSoundSubmixSendInfoBase::FSoundSubmixSendInfoBase(this_01,pFVar9);
        pFVar3 = pFVar9 + 1;
        pFVar9 = (FSoundSubmixSendInfoBase *)&pFVar9[1].SoundSubmix;
        this_01[1].SendLevelControlMethod = pFVar3->SendLevelControlMethod;
        goto LAB_1473509e2;
      }
      if (*(USoundSubmixBase **)(pFVar7 + 8) == (pFVar9->SoundSubmix).field0_0x0.DebugPtr) break;
      pFVar7 = pFVar7 + 0xb8;
    }
    pfVar1 = &pFVar9->SendLevel;
    pFVar9 = (FSoundSubmixSendInfoBase *)&pFVar9[1].SoundSubmix;
    *(float *)(pFVar7 + 0x10) = *pfVar1;
  } while( true );
}

// GetTotalConcurrencyVolumeScale @ 147350cf0

float __thiscall FActiveSound::GetTotalConcurrencyVolumeScale(FActiveSound *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  fVar15 = __real_3f800000;
  iVar11 = 0;
  puVar1 = &(this->ConcurrencyGroupData).field_0x10;
  iVar3 = *(int *)&(this->ConcurrencyGroupData).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ConcurrencyGroupData).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147350d9d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_147350d9d:
  uVar10 = *(uint *)&(this->ConcurrencyGroupData).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ConcurrencyGroupData).field_0x8 -
                       *(int *)&(this->ConcurrencyGroupData).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar15 = (float)(*pcVar4)();
    return fVar15;
  }
  uVar6 = *(uint *)&(this->ConcurrencyGroupData).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ConcurrencyGroupData).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147350ea0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_147350ea0:
  while( true ) {
    if (*(int *)&(this->ConcurrencyGroupData).field_0x8 -
        *(int *)&(this->ConcurrencyGroupData).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencySoundData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    fVar16 = FConcurrencySoundData::GetVolume
                       ((FConcurrencySoundData *)
                        ((longlong)TStack_60.CurrentBitIndex * 0x20 +
                        *(longlong *)&this->ConcurrencyGroupData + 4),false);
    fVar15 = fVar15 * fVar16;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return fVar15;
}

// GetVirtualizationMode @ 1473511c0

EVirtualizationMode __thiscall FActiveSound::GetVirtualizationMode(FActiveSound *this)

{
  USoundBase *pUVar1;
  EVirtualizationMode EVar2;
  
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  EVar2 = Disabled;
  if (pUVar1 != (USoundBase *)0x0) {
    EVar2 = pUVar1->VirtualizationMode;
  }
  if (this->bEnableVirtualizationModeOverride != 0) {
    EVar2 = this->VirtualizationModeOverride;
  }
  if (EVar2 == SeekRestart) {
    if (OverrideSeekStartTimeCVar == 1) {
      return Disabled;
    }
    if (OverrideSeekStartTimeCVar == 2) {
      return PlayWhenSilent;
    }
    if (OverrideSeekStartTimeCVar == 3) {
      return Restart;
    }
  }
  return EVar2;
}

// GetVolume @ 147351210

float __thiscall FActiveSound::GetVolume(FActiveSound *this)

{
  USoundBase *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = this->VolumeMultiplier;
  fVar2 = Audio::FVolumeFader::GetVolume(&this->ComponentVolumeFader);
  fVar3 = GetTotalConcurrencyVolumeScale(this);
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  fVar3 = fVar3 * fVar2 * fVar4;
  if (pUVar1 != (USoundBase *)0x0) {
    fVar4 = (float)(**(code **)(pUVar1->_padding_ + 0x2e8))();
    return fVar4 * fVar3;
  }
  return fVar3;
}

// HandleInteriorVolumes @ 147351290

void __thiscall
FActiveSound::HandleInteriorVolumes(FActiveSound *this,FSoundParseParameters *param_1)

{
  uint uVar1;
  FAudioDevice *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSoundParseParameters *pFVar7;
  longlong lVar8;
  FSoundParseParameters *pFVar9;
  EAudioVolumeLocationState EVar10;
  float fVar11;
  float fVar12;
  
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                         ,0x637,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = this->AudioDevice;
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                         ,0x2b4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((pFVar2->Listeners).ArrayNum <= this->ClosestListenerIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClosestListenerIndex < Listeners.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                         ,0x639,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = this->ClosestListenerIndex;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar2->Listeners).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pFVar2->Listeners).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar1 * 0x110;
  if (this->LastUpdateTime <= *(double *)(pFVar3 + lVar8 + 200) &&
      *(double *)(pFVar3 + lVar8 + 200) != this->LastUpdateTime) {
    this->SourceInteriorVolume = this->CurrentInteriorVolume;
    this->SourceInteriorLPF = this->CurrentInteriorLPF;
    this->LastUpdateTime = (double)FApp::CurrentTime;
  }
  fVar11 = __real_469c4000;
  if ((*(uint *)(pFVar3 + lVar8 + 0xb8) == this->AudioVolumeID) ||
     (this->bAllowSpatialization == '\0')) {
    fVar12 = (__real_3f800000 - this->SourceInteriorVolume) * *(float *)(pFVar3 + lVar8 + 0xf0) +
             this->SourceInteriorVolume;
    this->CurrentInteriorVolume = fVar12;
    param_1->InteriorVolumeMultiplier = fVar12;
    fVar12 = this->SourceInteriorLPF;
    fVar11 = (fVar11 - fVar12) * *(float *)(pFVar3 + lVar8 + 0xf4);
  }
  else {
    fVar11 = this->SourceInteriorVolume;
    if ((this->InteriorSettings).bIsWorldSettings == false) {
      EVar10 = OutsideTheVolume;
      fVar12 = ((this->InteriorSettings).InteriorVolume - fVar11) *
               *(float *)(pFVar3 + lVar8 + 0xf0) + fVar11;
      this->CurrentInteriorVolume = fVar12;
      fVar12 = ((*(float *)(pFVar3 + lVar8 + 0x98) - fVar11) * *(float *)(pFVar3 + lVar8 + 0xf8) +
               fVar11) * fVar12;
      this->CurrentInteriorVolume = fVar12;
      param_1->InteriorVolumeMultiplier = fVar12;
      fVar11 = this->SourceInteriorLPF;
      pFVar9 = (FSoundParseParameters *)0x234;
      fVar12 = (*(float *)(pFVar3 + lVar8 + 0xa0) - fVar11) * *(float *)(pFVar3 + lVar8 + 0xfc) +
               fVar11;
      fVar11 = ((this->InteriorSettings).InteriorLPF - fVar11) * *(float *)(pFVar3 + lVar8 + 0xf4) +
               fVar11;
      pFVar7 = param_1;
      if (fVar12 <= fVar11) {
        fVar11 = fVar12;
      }
      goto LAB_14735154d;
    }
    fVar11 = (*(float *)(pFVar3 + lVar8 + 0x98) - fVar11) * *(float *)(pFVar3 + lVar8 + 0xf8) +
             fVar11;
    this->CurrentInteriorVolume = fVar11;
    param_1->InteriorVolumeMultiplier = fVar11;
    fVar12 = this->SourceInteriorLPF;
    fVar11 = (*(float *)(pFVar3 + lVar8 + 0xa0) - fVar12) * *(float *)(pFVar3 + lVar8 + 0xfc);
  }
  EVar10 = InsideTheVolume;
  pFVar7 = (FSoundParseParameters *)0x234;
  pFVar9 = param_1;
  fVar11 = fVar11 + fVar12;
LAB_14735154d:
  this->CurrentInteriorLPF = fVar11;
  *(float *)((longlong)(&(pFVar9->Transform).Rotation)[1].XY.m128d_f64 +
            (longlong)(&pFVar7->Transform + -1)) = fVar11;
  AddVolumeSubmixSends(this,param_1,EVar10);
  return;
}

// HasNewBusSends @ 1473515a0

bool __thiscall FActiveSound::HasNewBusSends(FActiveSound *this)

{
  return this->bHasNewBusSends;
}

// IsPlayWhenSilent @ 1473517d0

bool __thiscall FActiveSound::IsPlayWhenSilent(FActiveSound *this)

{
  USoundBase *pUVar1;
  EVirtualizationMode EVar2;
  
  if ((this->AudioDevice == (FAudioDevice *)0x0) ||
     (this->AudioDevice->bAllowPlayWhenSilent == '\0')) {
    return false;
  }
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  EVar2 = Disabled;
  if (pUVar1 != (USoundBase *)0x0) {
    EVar2 = pUVar1->VirtualizationMode;
  }
  if (this->bEnableVirtualizationModeOverride != 0) {
    EVar2 = this->VirtualizationModeOverride;
  }
  if (EVar2 == SeekRestart) {
    if (OverrideSeekStartTimeCVar == 1) {
      EVar2 = Disabled;
    }
    else {
      if (OverrideSeekStartTimeCVar == 2) {
        return true;
      }
      if (OverrideSeekStartTimeCVar == 3) {
        return false;
      }
    }
  }
  return EVar2 == PlayWhenSilent;
}

// IsPreviewSound @ 147351840

bool __thiscall FActiveSound::IsPreviewSound(FActiveSound *this)

{
  return this->bIsPreviewSound;
}

// MarkPendingDestroy @ 147351c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FActiveSound::MarkPendingDestroy(FActiveSound *this,bool param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  USoundBase *pUVar5;
  code *pcVar6;
  undefined1 uVar7;
  FWaveInstance *pFVar8;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar9;
  bool bVar10;
  char cVar11;
  int *piVar12;
  FSoundSource *pFVar13;
  FName *pFVar14;
  TStatId TVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_128;
  undefined8 local_120;
  FWaveInstance *local_118;
  int local_110;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FName local_a8;
  FName local_a0;
  code *local_98 [2];
  undefined **local_88;
  FWaveInstance *local_80;
  undefined8 local_70;
  undefined4 local_4c;
  
  if ((this->AudioDevice == (FAudioDevice *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("AudioDevice",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                          ,0x4fe,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar5 = (this->Sound).field0_0x0.DebugPtr;
  iVar21 = 0;
  if ((((pUVar5 != (USoundBase *)0x0) && (!(bool)this->bIsStopping)) &&
      (this->AudioDevice != (FAudioDevice *)0x0)) &&
     (piVar12 = TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                ::Find((TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                        *)&pUVar5->CurrentPlayCount,this->AudioDevice->DeviceID),
     piVar12 != (int *)0x0)) {
    iVar17 = 0;
    if (0 < *piVar12 + -1) {
      iVar17 = *piVar12 + -1;
    }
    *piVar12 = iVar17;
    if (iVar17 == 0) {
      TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                *)&((this->Sound).field0_0x0.DebugPtr)->CurrentPlayCount,this->AudioDevice->DeviceID
              );
    }
  }
  puVar1 = &(this->WaveInstances).field_0x10;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  local_108 = &this->WaveInstances;
  iVar17 = *(int *)&(this->WaveInstances).field_0x28;
  uStack_fc = 1;
  iStack_ec = iVar21;
  local_e8 = iVar21;
  if (iVar17 != 0) {
    puVar23 = *(uint **)&(this->WaveInstances).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar20 = *puVar23;
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar21;
      local_e8 = local_e8 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_ec = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_147351d82;
      uVar20 = puVar23[lVar16 + 1];
    }
    uStack_fc = ~(uVar20 - 1) & uVar20;
    uVar3 = (ulonglong)uStack_fc * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res20 = (int)lVar16;
    iStack_ec = local_e8 + -1 + local_res20;
    if (iVar17 < iStack_ec) {
      iStack_ec = iVar17;
    }
  }
LAB_147351d82:
  uVar20 = *(uint *)&(this->WaveInstances).field_0x28;
  uStack_e4 = local_4c;
  iStack_e0 = *(int *)&(this->WaveInstances).field_0x8 - *(int *)&(this->WaveInstances).field_0x34;
  uVar24 = uVar20 & 0xffffffe0;
  uStack_f0 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_fc,iVar21);
  TStack_d0.CurrentBitIndex = iStack_ec;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar20 >> 5;
  TStack_d0._28_4_ = local_4c;
  TStack_d0.BaseBitIndex = local_e8;
  uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
  iStack_100 = iVar21;
  local_f8 = puVar1;
  local_d8 = local_108;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar17 < (int)uVar20)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->WaveInstances).field_0x28;
  if (uVar20 != uVar4) {
    puVar22 = *(undefined1 **)&(this->WaveInstances).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar18 * 4);
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar18;
      uVar24 = uVar24 + 0x20;
      iVar18 = iVar18 + 1;
      uVar20 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_147351e91;
      uVar20 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar3 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_110 = (int)lVar16;
    uVar20 = local_110 + -1 + uVar24;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_147351e91:
  do {
    pTVar9 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_d0.CurrentBitIndex == uVar20) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar9 == &this->WaveInstances)) {
      iVar21 = (int)local_120;
      pFVar2 = local_128.Data + (longlong)(int)local_120 * 8;
      FVar19.Data = local_128.Data;
      while( true ) {
        if ((int)local_120 != iVar21) {
          `TCheckedPointerIterator<FWaveInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar19.Data == pFVar2) break;
        RemoveWaveInstance(this,(*(FWaveInstance **)FVar19.Data)->WaveInstanceHash);
        FVar19.Data = FVar19.Data + 8;
      }
      if (param_1) {
        this->bIsStopping = '\0';
      }
      if (!(bool)this->bIsStopping) {
        FAudioDevice::RemoveActiveSound(this->AudioDevice,this);
      }
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      return;
    }
    local_118 = *(FWaveInstance **)
                 (*(longlong *)pTVar9 + 8 + (longlong)TStack_d0.CurrentBitIndex * 0x18);
    pFVar13 = FAudioDevice::GetSoundSource(this->AudioDevice,local_118);
    if (pFVar13 != (FSoundSource *)0x0) {
      if ((this->AudioDevice->bIsStoppingVoicesEnabled == '\0') ||
         ((!param_1 && ((this->AudioDevice->Sources).ArrayNum != 0)))) {
        (**(code **)(pFVar13->_padding_ + 0x38))(pFVar13);
      }
      else {
        (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13);
      }
    }
    if (!(bool)this->bIsStopping) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        if (StatPtr_STAT_AudioKillSubtitles ==
            (FThreadSafeStaticStat<_private:_void___cdecl_FActiveSound::MarkPendingDestroy(bool)_::_37_::FStat_STAT_AudioKillSubtitles>
             )0x0) {
          pFVar14 = ::FName::FName(&local_a8,"STAT_AudioKillSubtitles");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioKillSubtitles,*pFVar14,
                     L"FGameThreadAudioTask.KillSubtitles","STATGROUP_TaskGraphTasks",
                     "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS1);
      }
      pFVar8 = local_118;
      TVar15.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioKillSubtitles;
      if (StatPtr_STAT_AudioKillSubtitles ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FActiveSound::MarkPendingDestroy(bool)_::_37_::FStat_STAT_AudioKillSubtitles>
           )0x0) {
        pFVar14 = ::FName::FName(&local_a0,"STAT_AudioKillSubtitles");
        TVar15.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioKillSubtitles,*pFVar14,
                        L"FGameThreadAudioTask.KillSubtitles","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      local_70 = 0;
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FActiveSound::MarkPendingDestroy'::`37'::<lambda_1>,1,0>::
                  _vftable_;
      local_80 = pFVar8;
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FActiveSound::MarkPendingDestroy'::__l37::<lambda_1>,void>::
                    Call;
      FAudioThread::RunCommandOnGameThread((TUniqueFunction<void___cdecl(void)> *)local_98,TVar15);
    }
    if (pFVar13 == (FSoundSource *)0x0) {
LAB_14735202d:
      if (((local_128.Data <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < local_128.Data + (longlong)local_120._4_4_ * 8))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar21 = (int)local_120;
      if ((int)local_120 == local_120._4_4_) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_128,(int *)((longlong)&local_120 + 4));
      }
      local_120 = CONCAT44(local_120._4_4_,iVar21 + 1);
      *(FWaveInstance **)(local_128.Data + (longlong)iVar21 * 8) = local_118;
    }
    else {
      cVar11 = (**(code **)(pFVar13->_padding_ + 0x48))(pFVar13);
      if (cVar11 == '\0') {
        (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13);
        goto LAB_14735202d;
      }
      this->bIsStopping = '\x01';
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  } while( true );
}

// OcclusionTraceDone @ 147352220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FActiveSound::OcclusionTraceDone(FTraceHandle *param_1,FTraceDatum *param_2)

{
  int iVar1;
  bool bVar2;
  FAudioDeviceManager *this;
  FAudioDevice *pFVar3;
  FName *pFVar4;
  TStatId TVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 uVar8;
  FName local_res10;
  FAsyncTraceDetails local_78;
  FAudioDevice *local_68;
  FActiveSound *pFStack_60;
  undefined1 local_58;
  undefined7 uStack_57;
  code *local_48 [5];
  undefined8 *local_20;
  
  iVar1 = (param_2->OutHits).ArrayNum;
  uVar8 = 0;
  pFVar6 = (param_2->OutHits).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x100;
  while( true ) {
    if ((param_2->OutHits).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar6 == pFVar7) goto LAB_14735228f;
    if (((byte)pFVar6[0xad] & 1) != 0) break;
    pFVar6 = pFVar6 + 0x100;
  }
  uVar8 = 1;
LAB_14735228f:
  bVar2 = TMap<FTraceHandle,FActiveSound::FAsyncTraceDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTraceHandle,FActiveSound::FAsyncTraceDetails,0>_>
          ::RemoveAndCopyValue(&TraceToActiveSoundMap,param_1,&local_78);
  if (bVar2) {
    this = UEngine::GetAudioDeviceManager(GEngine);
    if (this != (FAudioDeviceManager *)0x0) {
      pFVar3 = FAudioDeviceManager::GetAudioDeviceRaw(this,local_78.AudioDeviceID);
      if (pFVar3 != (FAudioDevice *)0x0) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS1) {
          _Init_thread_header(&::_TSS1);
          if (::_TSS1 == -1) {
            if (StatPtr_STAT_OcclusionTraceDone ==
                (FThreadSafeStaticStat<_public:_static_void___cdecl_FActiveSound::OcclusionTraceDone(FTraceHandle_const_&,FTraceDatum_&)_::_18_::FStat_STAT_OcclusionTraceDone>
                 )0x0) {
              pFVar4 = ::FName::FName(&local_res10,"STAT_OcclusionTraceDone");
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OcclusionTraceDone,*pFVar4,
                         L"FAudioThreadTask.OcclusionTraceDone","STATGROUP_AudioThreadCommands",
                         "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                         MCR_Invalid);
            }
            _Init_thread_footer(&::_TSS1);
          }
        }
        TVar5.StatIdPtr = (TStatIdData *)StatPtr_STAT_OcclusionTraceDone;
        if (StatPtr_STAT_OcclusionTraceDone ==
            (FThreadSafeStaticStat<_public:_static_void___cdecl_FActiveSound::OcclusionTraceDone(FTraceHandle_const_&,FTraceDatum_&)_::_18_::FStat_STAT_OcclusionTraceDone>
             )0x0) {
          pFVar4 = ::FName::FName(&local_res10,"STAT_OcclusionTraceDone");
          TVar5.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OcclusionTraceDone,*pFVar4,
                          L"FAudioThreadTask.OcclusionTraceDone","STATGROUP_AudioThreadCommands",
                          "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                          MCR_Invalid);
        }
        pFStack_60 = local_78.ActiveSound;
        local_48[0] = (code *)0x0;
        local_68 = pFVar3;
        local_58 = uVar8;
        local_20 = FMemory::Malloc(0x20,8);
        *local_20 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FActiveSound::OcclusionTraceDone'::`18'::<lambda_1>,1,1>
                     ::_vftable_;
        local_20[1] = local_68;
        local_20[2] = pFStack_60;
        local_20[3] = CONCAT71(uStack_57,local_58);
        if (local_20 + 1 != (undefined8 *)0x0) {
          local_48[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FActiveSound::OcclusionTraceDone'::__l18::<lambda_1>,void>
                        ::Call;
        }
        FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_48,TVar5)
        ;
      }
    }
  }
  return;
}

// OverrideVirtualizationMode @ 1473530d0

void __thiscall
FActiveSound::OverrideVirtualizationMode(FActiveSound *this,EVirtualizationMode param_1)

{
  this->bEnableVirtualizationModeOverride = '\x01';
  this->VirtualizationModeOverride = param_1;
  return;
}

// ParseAttenuation @ 1473530f0

void __thiscall
FActiveSound::ParseAttenuation
          (FActiveSound *this,FSoundParseParameters *param_1,int param_2,
          FSoundAttenuationSettings *param_3)

{
  UpdateAttenuation(this,0.0,param_1,param_2,param_3);
  return;
}

// RemoveModulationRouting @ 1473550a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FActiveSound::RemoveModulationRouting
          (FActiveSound *this,
          TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
          *param_1,EModulationDestination param_2)

{
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar1;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_2 == Volume) {
    this_00 = (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_;
  }
  else if (param_2 == Pitch) {
    this_00 = (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_;
  }
  else if (param_2 == Lowpass) {
    this_00 = (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_;
  }
  else {
    if (param_2 != Highpass) {
      `FActiveSound::RemoveModulationRouting'::__l5::<lambda_1>::operator()(local_78);
      return;
    }
    this_00 = (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_;
  }
  pTVar1 = TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
           ::Difference(this_00,&local_68,param_1);
  if (this_00 != pTVar1) {
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              (this_00,pTVar1);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  this->bModulationRoutingUpdated = '\x01';
  return;
}

// RemoveWaveInstance @ 147355990

void __thiscall FActiveSound::RemoveWaveInstance(FActiveSound *this,ulong64 param_1)

{
  int *piVar1;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  ulong64 local_res8;
  
  uVar9 = (int)(param_1 >> 0x20) * 0x17 + (int)param_1;
  if (*(int *)&(this->WaveInstances).field_0x8 != *(int *)&(this->WaveInstances).field_0x34) {
    puVar6 = *(undefined1 **)&(this->WaveInstances).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->WaveInstances).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->WaveInstances).field_0x48 - 1U & uVar9) *
                              4);
    if (iVar5 != -1) {
      lVar8 = *(longlong *)&(this->WaveInstances).field_0x0;
      while (lVar2 = lVar8 + (longlong)iVar5 * 0x18,
            *(ulong64 *)(lVar8 + (longlong)iVar5 * 0x18) != param_1) {
        iVar5 = *(int *)(lVar2 + 0x10);
        if (iVar5 == -1) {
          return;
        }
      }
      if ((lVar2 != 0) && (pvVar3 = *(void **)(lVar2 + 8), pvVar3 != (void *)0x0)) {
        local_res8 = param_1;
        TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned___int64>
                  ((TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
                    *)&this->WaveInstances,uVar9,&local_res8);
        DestructItems<FAttenuationSubmixSendSettings,int>
                  (*(FAttenuationSubmixSendSettings **)((longlong)pvVar3 + 0x168),
                   *(int *)((longlong)pvVar3 + 0x170));
        if (*(void **)((longlong)pvVar3 + 0x168) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar3 + 0x168));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)pvVar3 + 0x78));
        pvVar4 = *(void **)((longlong)pvVar3 + 0x68);
        if (pvVar4 != (void *)0x0) {
          DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                    (*(FQuartzGameThreadSubscriber **)((longlong)pvVar4 + 0x40),
                     *(int *)((longlong)pvVar4 + 0x48));
          if (*(void **)((longlong)pvVar4 + 0x40) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0x40));
          }
          DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                    (*(FQuartzGameThreadSubscriber **)((longlong)pvVar4 + 0x30),
                     *(int *)((longlong)pvVar4 + 0x38));
          if (*(void **)((longlong)pvVar4 + 0x30) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0x30));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18));
          ::operator_delete(pvVar4,0x58);
        }
        if (*(void **)((longlong)pvVar3 + 0x50) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar3 + 0x50));
        }
        puVar7 = (undefined8 *)((longlong)pvVar3 + 0x48);
        lVar8 = 2;
        do {
          piVar1 = (int *)(puVar7 + -1);
          puVar7 = puVar7 + -2;
          lVar8 = lVar8 + -1;
          DestructItems<FSoundSourceBusSendInfo,int>((FSoundSourceBusSendInfo *)*puVar7,*piVar1);
          if ((void *)*puVar7 != (void *)0x0) {
            FMemory::Free((void *)*puVar7);
          }
        } while (lVar8 != 0);
        DestructItems<FSoundSubmixSendInfo,int>
                  (*(FSoundSubmixSendInfo **)((longlong)pvVar3 + 0x18),
                   *(int *)((longlong)pvVar3 + 0x20));
        if (*(void **)((longlong)pvVar3 + 0x18) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar3 + 0x18));
        }
        ::operator_delete(pvVar3,400);
        return;
      }
    }
  }
  return;
}

// ResetNewBusSends @ 147356020

void __thiscall FActiveSound::ResetNewBusSends(FActiveSound *this)

{
  int *piVar1;
  
  DestructItems<TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>,int>
            ((TTuple<EBusSendType,FSoundSourceBusSendInfo> *)
             (this->NewBusSends).AllocatorInstance.Data,(this->NewBusSends).ArrayNum);
  piVar1 = &(this->NewBusSends).ArrayMax;
  (this->NewBusSends).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,0,&(this->NewBusSends).AllocatorInstance,0,piVar1);
    this->bHasNewBusSends = false;
    return;
  }
  this->bHasNewBusSends = false;
  return;
}

// SetAttenuationSettingsAsset @ 147356f00

void __thiscall
FActiveSound::SetAttenuationSettingsAsset(FActiveSound *this,TObjectPtr<USoundAttenuation> param_1)

{
  if (!UE::GC::GIsIncrementalReachabilityPending) {
                    /* WARNING: Load size is inaccurate */
    (this->SoundAttenuation).field0_0x0 = *param_1.field0_0x0;
    return;
  }
  if (*(UObject **)param_1.field0_0x0 != (UObject *)0x0) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
                    /* WARNING: Load size is inaccurate */
    (this->SoundAttenuation).field0_0x0 = *param_1.field0_0x0;
    return;
  }
  (this->SoundAttenuation).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  return;
}

// SetAttenuationSettingsOverride @ 147356f60

void __thiscall FActiveSound::SetAttenuationSettingsOverride(FActiveSound *this,bool param_1)

{
  this->bIsAttenuationSettingsOverridden = '\0';
  this->field_0x1a6 = this->field_0x1a6 | param_1 * '\x02';
  return;
}

// SetAudioComponent @ 147356f80

void __thiscall FActiveSound::SetAudioComponent(FActiveSound *this,FActiveSound *param_1)

{
  this->AudioComponentID = param_1->AudioComponentID;
  this->AudioComponentUserID = param_1->AudioComponentUserID;
  this->AudioComponentName = param_1->AudioComponentName;
  this->OwnerID = param_1->OwnerID;
  this->OwnerName = param_1->OwnerName;
  this->OwnerKey = param_1->OwnerKey;
  return;
}

// SetAudioComponent @ 147356fc0

void __thiscall FActiveSound::SetAudioComponent(FActiveSound *this,UAudioComponent *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  FWeakObjectPtr local_res8 [3];
  UObject *local_res20;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                       ,500,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = *(UObject **)&param_1->field_0xa8;
  this->AudioComponentID = param_1->AudioComponentID;
  this->AudioComponentUserID = param_1->AudioComponentUserID;
  uVar3 = *(undefined4 *)&param_1->field_0x1c;
  (this->AudioComponentName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
  (this->AudioComponentName).Number = uVar3;
  if (pUVar1 != (UObject *)0x0) {
    this->OwnerID = *(uint *)&pUVar1->field_0xc;
    uVar3 = *(undefined4 *)&pUVar1->field_0x1c;
    (this->OwnerName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar1->field_0x18;
    (this->OwnerName).Number = uVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    local_res20 = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res20);
    (this->OwnerKey).ObjectIndex = local_res8[0].ObjectIndex;
    (this->OwnerKey).ObjectSerialNumber = local_res8[0].ObjectSerialNumber;
    return;
  }
  this->OwnerID = 0;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  (this->OwnerKey).ObjectIndex = 0;
  (this->OwnerKey).ObjectSerialNumber = 0;
  return;
}

// SetNewModulationRouting @ 147357b20

void __thiscall
FActiveSound::SetNewModulationRouting
          (FActiveSound *this,FSoundModulationDefaultRoutingSettings *param_1)

{
  *(int *)&(this->ModulationRouting)._padding_ = (int)param_1->_padding_;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&param_1->_padding_);
  *(int *)&(this->ModulationRouting)._padding_ = (int)param_1->_padding_;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&param_1->_padding_);
  *(int *)&(this->ModulationRouting)._padding_ = (int)param_1->_padding_;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&param_1->_padding_);
  *(int *)&(this->ModulationRouting)._padding_ = (int)param_1->_padding_;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&param_1->_padding_);
  (this->ModulationRouting).VolumeRouting = param_1->VolumeRouting;
  (this->ModulationRouting).PitchRouting = param_1->PitchRouting;
  (this->ModulationRouting).HighpassRouting = param_1->HighpassRouting;
  (this->ModulationRouting).LowpassRouting = param_1->LowpassRouting;
  this->bModulationRoutingUpdated = '\x01';
  return;
}

// SetOwner @ 147357cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FActiveSound::SetOwner(FActiveSound *this,AActor *param_1)

{
  undefined4 uVar1;
  FWeakObjectPtr local_res10;
  AActor *local_res18 [2];
  
  if (param_1 != (AActor *)0x0) {
    this->OwnerID = *(uint *)((longlong)&param_1->_padding_ + 4);
    uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->OwnerName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->OwnerName).Number = uVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    (this->OwnerKey).ObjectIndex = local_res10.ObjectIndex;
    (this->OwnerKey).ObjectSerialNumber = local_res10.ObjectSerialNumber;
    return;
  }
  this->OwnerID = 0;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  (this->OwnerKey).ObjectIndex = 0;
  (this->OwnerKey).ObjectSerialNumber = 0;
  return;
}

// SetPitch @ 147357d60

void __thiscall FActiveSound::SetPitch(FActiveSound *this,float param_1)

{
  this->PitchMultiplier = param_1;
  return;
}

// SetSound @ 147358090

void __thiscall FActiveSound::SetSound(FActiveSound *this,USoundBase *param_1)

{
  USoundClass *pUVar1;
  char cVar2;
  byte bVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Sound).field0_0x0.DebugPtr = param_1;
  pUVar1 = (this->SoundClassOverride).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundClass *)0x0) {
    this->field_0x1a3 =
         ((pUVar1->Properties).field_0x20 * '\x02' ^ this->field_0x1a3) & 0x40U ^ this->field_0x1a3;
    return;
  }
  if (param_1 != (USoundBase *)0x0) {
    cVar2 = (**(code **)(param_1->_padding_ + 0x300))();
    if (cVar2 != '\0') {
      bVar3 = 0x40;
      goto LAB_147358106;
    }
  }
  bVar3 = 0;
LAB_147358106:
  this->bApplyInteriorVolumes = bVar3 >> 6;
  return;
}

// SetSoundClass @ 147358130

void __thiscall FActiveSound::SetSoundClass(FActiveSound *this,USoundClass *param_1)

{
  USoundBase *pUVar1;
  char cVar2;
  byte bVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->SoundClassOverride).field0_0x0.DebugPtr = param_1;
LAB_14735816b:
    this->field_0x1a3 =
         ((param_1->Properties).field_0x20 * '\x02' ^ this->field_0x1a3) & 0x40U ^ this->field_0x1a3
    ;
    return;
  }
  (this->SoundClassOverride).field0_0x0.DebugPtr = param_1;
  if (param_1 != (USoundClass *)0x0) goto LAB_14735816b;
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundBase *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x300))();
    if (cVar2 != '\0') {
      bVar3 = 0x40;
      goto LAB_1473581ac;
    }
  }
  bVar3 = 0;
LAB_1473581ac:
  this->bApplyInteriorVolumes = bVar3 >> 6;
  return;
}

// SetSourceBusSend @ 1473581d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FActiveSound::SetSourceBusSend
          (FActiveSound *this,EBusSendType param_1,FSoundSourceBusSendInfo *param_2)

{
  int *piVar1;
  TArray<TTuple<EBusSendType,FSoundSourceBusSendInfo>,TSizedDefaultAllocator<32>_> *pTVar2;
  FSoundSourceBusSendInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_228 [32];
  FSoundSourceBusSendInfo *local_208;
  FSoundSourceBusSendInfo *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [56];
  undefined **local_190;
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_188;
  void *local_148;
  undefined4 local_140;
  void *local_138;
  void *local_120;
  undefined1 local_108 [56];
  undefined **local_d0;
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c8;
  void *local_88;
  undefined4 local_80;
  void *local_78;
  void *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  pTVar9 = this->BusSendsOverride + param_1;
  iVar6 = pTVar9->ArrayNum;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  pFVar10 = pFVar8 + (longlong)iVar6 * 0xb8;
  while( true ) {
    if (pTVar9->ArrayNum != iVar6) {
      local_1d8[0] = 0;
      `TCheckedPointerIterator<FSoundSourceBusSendInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1d8);
    }
    if (pFVar8 == pFVar10) break;
    if ((*(USoundSourceBus **)(pFVar8 + 8) == (param_2->SoundSourceBus).field0_0x0.DebugPtr) ||
       (*(UAudioBus **)(pFVar8 + 0x10) == (param_2->AudioBus).field0_0x0.DebugPtr)) {
      *(float *)(pFVar8 + 0x18) = param_2->SendLevel;
      this->bHasNewBusSends = true;
      pTVar2 = &this->NewBusSends;
      local_1c8[0] = (FScriptContainerElement)param_1;
      FSoundSourceBusSendInfo::FSoundSourceBusSendInfo
                ((FSoundSourceBusSendInfo *)(local_1c8 + 8),param_2);
      pFVar3 = (FSoundSourceBusSendInfo *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= (FSoundSourceBusSendInfo *)local_1c8) &&
         (lVar7 = (longlong)(this->NewBusSends).ArrayMax,
         (FScriptContainerElement *)local_1c8 <
         (FScriptContainerElement *)((longlong)pFVar3 + lVar7 * 0xc0))) {
        local_1f0 = (longlong)(this->NewBusSends).ArrayNum;
        local_1e8 = 0xc0;
        local_208 = (FSoundSourceBusSendInfo *)local_1c8;
        local_200 = pFVar3;
        local_1f8 = lVar7;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (this->NewBusSends).ArrayNum;
      piVar1 = &(this->NewBusSends).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8c0,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->NewBusSends).ArrayNum = iVar6 + 1;
      TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>::
      TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>
                ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0xc0,
                 (TTuple<EBusSendType,FSoundSourceBusSendInfo> *)local_1c8);
      if (local_120 != (void *)0x0) {
        FMemory::Free(local_120);
      }
      local_190 = &___7FIndexedCurve__6B_;
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      local_140 = 0;
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      this_00 = &local_188;
LAB_14735851a:
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
      return;
    }
    pFVar8 = pFVar8 + 0xb8;
  }
  pFVar3 = (FSoundSourceBusSendInfo *)(pTVar9->AllocatorInstance).Data;
  if ((pFVar3 <= param_2) && (param_2 < pFVar3 + pTVar9->ArrayMax)) {
    local_1f0 = (longlong)pTVar9->ArrayNum;
    local_1e8 = 0xb8;
    local_208 = param_2;
    local_200 = pFVar3;
    local_1f8 = (longlong)pTVar9->ArrayMax;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = pTVar9->ArrayNum;
  if (iVar6 == pTVar9->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b8,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
  }
  pTVar9->ArrayNum = iVar6 + 1;
  FSoundSourceBusSendInfo::FSoundSourceBusSendInfo
            ((FSoundSourceBusSendInfo *)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 0xb8),
             param_2);
  this->bHasNewBusSends = true;
  pTVar2 = &this->NewBusSends;
  local_108[0] = (FScriptContainerElement)param_1;
  FSoundSourceBusSendInfo::FSoundSourceBusSendInfo
            ((FSoundSourceBusSendInfo *)(local_108 + 8),param_2);
  pFVar3 = (FSoundSourceBusSendInfo *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FSoundSourceBusSendInfo *)local_108) &&
     (lVar7 = (longlong)(this->NewBusSends).ArrayMax,
     (FScriptContainerElement *)local_108 <
     (FScriptContainerElement *)((longlong)pFVar3 + lVar7 * 0xc0))) {
    local_1f0 = (longlong)(this->NewBusSends).ArrayNum;
    local_1e8 = 0xc0;
    local_208 = (FSoundSourceBusSendInfo *)local_108;
    local_200 = pFVar3;
    local_1f8 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewBusSends).ArrayNum;
  piVar1 = &(this->NewBusSends).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c0,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NewBusSends).ArrayNum = iVar6 + 1;
  TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>::
  TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0xc0,
             (TTuple<EBusSendType,FSoundSourceBusSendInfo> *)local_108);
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  local_d0 = &___7FIndexedCurve__6B_;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  this_00 = &local_c8;
  goto LAB_14735851a;
}

// SetSourceEffectChain @ 147358550

void __thiscall
FActiveSound::SetSourceEffectChain(FActiveSound *this,USoundEffectSourcePresetChain *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (USoundEffectSourcePresetChain *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->SourceEffectChain).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->SourceEffectChain).field0_0x0.DebugPtr = param_1;
  return;
}

// SetSubmixSend @ 1473585a0

void __thiscall FActiveSound::SetSubmixSend(FActiveSound *this,FSoundSubmixSendInfo *param_1)

{
  int *piVar1;
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FSoundSubmixSendInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FSoundSubmixSendInfoBase *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->SoundSubmixSendsOverride;
  iVar6 = (this->SoundSubmixSendsOverride).ArrayNum;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar6 * 0xb8;
  while( true ) {
    if ((this->SoundSubmixSendsOverride).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSoundSubmixSendInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (*(longlong *)(pFVar7 + 8) == param_1->_padding_) {
      *(int *)(pFVar7 + 0x10) = (int)param_1->_padding_;
      return;
    }
    pFVar7 = pFVar7 + 0xb8;
  }
  pFVar3 = (FSoundSubmixSendInfo *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->SoundSubmixSendsOverride).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->SoundSubmixSendsOverride).ArrayNum;
  piVar1 = &(this->SoundSubmixSendsOverride).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SoundSubmixSendsOverride).ArrayNum = iVar6 + 1;
  this_00 = (FSoundSubmixSendInfoBase *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0xb8);
  FSoundSubmixSendInfoBase::FSoundSubmixSendInfoBase(this_00,(FSoundSubmixSendInfoBase *)param_1);
  this_00[1].SendLevelControlMethod = param_1->SendStage;
  return;
}

// SetVolume @ 147358750

void __thiscall FActiveSound::SetVolume(FActiveSound *this,float param_1)

{
  this->VolumeMultiplier = param_1;
  return;
}

// SetWorld @ 147358760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FActiveSound::SetWorld(FActiveSound *this,UWorld *param_1)

{
  UWorld *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
    this->WorldID = *(uint *)((longlong)&param_1->_padding_ + 4);
    return;
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  if (param_1 != (UWorld *)0x0) {
    this->WorldID = *(uint *)((longlong)&param_1->_padding_ + 4);
    return;
  }
  this->WorldID = 0;
  return;
}

// Stop @ 1473589f0

void __thiscall FActiveSound::Stop(FActiveSound *this)

{
  if (this->AudioDevice != (FAudioDevice *)0x0) {
    Audio::Trace::EventLog::SendActiveSoundEvent
              (this,&Audio::Trace::EventLog::ID::StopRequestActiveSound);
    FAudioDevice::AddSoundToStop(this->AudioDevice,this);
    return;
  }
  return;
}

// UpdateAttenuation @ 14735b2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FActiveSound::UpdateAttenuation
          (FActiveSound *this,float param_1,FSoundParseParameters *param_2,int param_3,
          FSoundAttenuationSettings *param_4)

{
  int *piVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FAttenuationSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  int iVar14;
  FThreadSafeBool FVar15;
  USoundAttenuation *pUVar16;
  FScriptContainerElement *pFVar17;
  UCurveFloat *pUVar18;
  FAttenuationSubmixSendSettings *pFVar19;
  FSoundSubmixSendInfoBase *pFVar20;
  UOcclusionPluginSourceSettingsBase *pUVar21;
  USpatializationPluginSourceSettingsBase *pUVar22;
  UReverbPluginSourceSettingsBase *pUVar23;
  USourceDataOverridePluginSourceSettingsBase *pUVar24;
  UAudioLinkSettingsAbstract *pUVar25;
  code *pcVar26;
  TVector2<double>_u_0 TVar27;
  TVector2<double>_u_0 TVar28;
  bool bVar29;
  byte bVar30;
  int iVar31;
  FRichCurve *this_00;
  FSoundClassDynamicProperties *pFVar32;
  UClass *pUVar33;
  FAudioSpatializationInterfaceInfo *pFVar34;
  uint uVar35;
  ESoundSpatializationAlgorithm EVar36;
  byte bVar37;
  FSoundAttenuationSettings *this_01;
  ESoundSpatializationAlgorithm EVar38;
  FSoundSubmixSendInfoBase *pFVar39;
  FScriptContainerElement *pFVar40;
  FSoundSubmixSendInfoBase *pFVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8;
  undefined1 local_2c7;
  undefined1 local_2c6;
  undefined1 local_2c5;
  undefined1 local_2c4 [4];
  FAttenuationFocusData local_2c0;
  int local_2a0;
  FActiveSound *local_298;
  FSoundAttenuationSettings *local_290;
  double local_278;
  TVector2<double>_u_0 local_270;
  TVector2<double>_u_0 local_260;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  FAudioSpatializationInterfaceInfo local_1b0;
  FAttenuationListenerData local_188;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_290 = param_4;
  this_01 = &this->AttenuationSettings;
  if (((this->bIsAttenuationSettingsOverridden == '\0') &&
      (this_01 = param_4, param_4 == (FSoundAttenuationSettings *)0x0)) &&
     (pUVar16 = (this->SoundAttenuation).field0_0x0.DebugPtr, this_01 = &this->AttenuationSettings,
     pUVar16 != (USoundAttenuation *)0x0)) {
    this_01 = &pUVar16->Attenuation;
  }
  local_2c0._0_8_ = ___xmm_3f8000003f8000000000000000000000;
  local_2c0._8_8_ = _UNK_15076b1e8;
  local_2c0.PriorityScale = 1.0;
  local_2c0.PriorityHighest = (this->FocusData).PriorityHighest;
  local_2c0.VolumeScale = 1.0;
  local_2c0.bFirstFocusUpdate = true;
  local_2a0 = param_3;
  local_298 = this;
  if ((bool)this_01->bEnableReverbSend) {
    pTVar2 = &(this_01->CustomReverbSendCurve).EditorCurveData.Keys;
    param_2->ReverbSendMethod = this_01->ReverbSendMethod;
    pTVar3 = &(param_2->CustomReverbSendCurve).EditorCurveData.Keys;
    param_2->ManualReverbSendLevel = this_01->ManualReverbSendLevel;
    *(int *)&(param_2->CustomReverbSendCurve).EditorCurveData._padding_ =
         (int)(this_01->CustomReverbSendCurve).EditorCurveData._padding_;
    *(undefined1 *)((longlong)&(param_2->CustomReverbSendCurve).EditorCurveData._padding_ + 4) =
         *(undefined1 *)((longlong)&(this_01->CustomReverbSendCurve).EditorCurveData._padding_ + 4);
    *(undefined1 *)((longlong)&(param_2->CustomReverbSendCurve).EditorCurveData._padding_ + 5) =
         *(undefined1 *)((longlong)&(this_01->CustomReverbSendCurve).EditorCurveData._padding_ + 5);
    if (pTVar3 != pTVar2) {
      iVar14 = (this_01->CustomReverbSendCurve).EditorCurveData.Keys.ArrayNum;
      piVar1 = &(param_2->CustomReverbSendCurve).EditorCurveData.Keys.ArrayMax;
      pFVar17 = (pTVar2->AllocatorInstance).Data;
      iVar31 = *piVar1;
      (param_2->CustomReverbSendCurve).EditorCurveData.Keys.ArrayNum = iVar14;
      if ((iVar14 == 0) && (iVar31 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar14,iVar31,&pTVar3->AllocatorInstance,iVar14,piVar1);
        if (iVar14 != 0) {
          memcpy((pTVar3->AllocatorInstance).Data,pFVar17,(longlong)iVar14 * 0x1c);
        }
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar18 = (this_01->CustomReverbSendCurve).ExternalCurve.field0_0x0.DebugPtr,
       pUVar18 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    (param_2->CustomReverbSendCurve).ExternalCurve.field0_0x0 =
         (this_01->CustomReverbSendCurve).ExternalCurve.field0_0x0;
    uVar5 = this_01->ReverbWetLevelMin;
    uVar9 = this_01->ReverbWetLevelMax;
    TVar27._8_4_ = SUB84((double)(float)uVar9,0);
    TVar27._s_0.X = (double)(float)uVar5;
    TVar27._12_4_ = (int)((ulonglong)(double)(float)uVar9 >> 0x20);
    (param_2->ReverbSendLevelRange).field0_0x0 = TVar27;
    uVar6 = this_01->ReverbDistanceMin;
    uVar10 = this_01->ReverbDistanceMax;
    TVar28._8_4_ = SUB84((double)(float)uVar10,0);
    TVar28._s_0.X = (double)(float)uVar6;
    TVar28._12_4_ = (int)((ulonglong)(double)(float)uVar10 >> 0x20);
    (param_2->ReverbSendLevelDistanceRange).field0_0x0 = TVar28;
  }
  if (this_01->bEnableSubmixSends != '\0') {
    pTVar4 = &param_2->AttenuationSubmixSends;
    piVar1 = &(param_2->AttenuationSubmixSends).ArrayMax;
    pFVar19 = (FAttenuationSubmixSendSettings *)(pTVar4->AllocatorInstance).Data;
    iVar14 = (param_2->AttenuationSubmixSends).ArrayNum;
    if ((param_2->AttenuationSubmixSends).ArrayMax < 0) {
      DestructItems<FAttenuationSubmixSendSettings,int>(pFVar19,iVar14);
      (param_2->AttenuationSubmixSends).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb0,8,0,&pTVar4->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FAttenuationSubmixSendSettings,int>(pFVar19,iVar14);
      (param_2->AttenuationSubmixSends).ArrayNum = 0;
    }
    iVar14 = (this_01->SubmixSendSettings).ArrayNum;
    pFVar39 = (FSoundSubmixSendInfoBase *)(this_01->SubmixSendSettings).AllocatorInstance.Data;
    pFVar41 = pFVar39 + iVar14;
    while( true ) {
      if ((this_01->SubmixSendSettings).ArrayNum != iVar14) {
        local_2c8 = 0;
        `TCheckedPointerIterator<FAttenuationSubmixSendSettings_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_2c8);
      }
      this = local_298;
      param_3 = local_2a0;
      if (pFVar39 == pFVar41) break;
      if ((pFVar39->SoundSubmix).field0_0x0.DebugPtr != (USoundSubmixBase *)0x0) {
        pFVar20 = (FSoundSubmixSendInfoBase *)(pTVar4->AllocatorInstance).Data;
        if (((pFVar20 <= pFVar39) && (pFVar39 < pFVar20 + *piVar1)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar29)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        iVar31 = (param_2->AttenuationSubmixSends).ArrayNum;
        if (iVar31 == *piVar1) {
          iVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8b0,&pTVar4->AllocatorInstance,piVar1);
        }
        (param_2->AttenuationSubmixSends).ArrayNum = iVar31 + 1;
        FSoundSubmixSendInfoBase::FSoundSubmixSendInfoBase
                  ((FSoundSubmixSendInfoBase *)
                   ((pTVar4->AllocatorInstance).Data + (longlong)iVar31 * 0xb0),pFVar39);
      }
      pFVar39 = pFVar39 + 1;
    }
  }
  if ((this->AudioDevice == (FAudioDevice *)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("AudioDevice",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                          ,0x7bb,L""), bVar29)) {
    pcVar26 = (code *)swi(3);
    (*pcVar26)();
    return;
  }
  FAttenuationListenerData::Create(&local_188,this->AudioDevice,param_3,&param_2->Transform,this_01)
  ;
  if (this_01->bEnablePriorityAttenuation != 0) {
    if (this_01->PriorityAttenuationMethod == Manual) {
      fVar43 = this_01->ManualPriorityAttenuation;
    }
    else {
      fVar43 = this_01->PriorityAttenuationDistanceMax - this_01->PriorityAttenuationDistanceMin;
      if (fVar43 <= __real_322bcc77) {
        fVar43 = __real_322bcc77;
      }
      dVar44 = (local_188.ListenerToSoundDistance - (double)this_01->PriorityAttenuationDistanceMin)
               / (double)fVar43;
      if (__real_3ff0000000000000 <= dVar44) {
        dVar44 = __real_3ff0000000000000;
      }
      if (dVar44 <= 0.0) {
        dVar44 = 0.0;
      }
      if (this_01->PriorityAttenuationMethod == Linear) {
        fVar43 = (this_01->PriorityAttenuationMax - this_01->PriorityAttenuationMin) * (float)dVar44
                 + this_01->PriorityAttenuationMin;
      }
      else {
        this_00 = FRuntimeFloatCurve::GetRichCurveConst(&this_01->CustomPriorityAttenuationCurve);
        fVar43 = FRichCurve::Eval(this_00,(float)dVar44,0.0);
      }
      if (fVar43 <= 0.0) {
        fVar43 = 0.0;
      }
    }
    if (fVar43 <= 0.0) {
      fVar43 = 0.0;
    }
    param_2->Priority = fVar43 * param_2->Priority;
  }
  if (this_01->bSpatialize != '\0' || this_01->bEnableListenerFocus != '\0') {
    local_2c0.FocusFactor = (this->FocusData).FocusFactor;
    local_2c0.bFirstFocusUpdate = (this->FocusData).bFirstFocusUpdate;
    UpdateFocusData(this,param_1,&local_188,&local_2c0);
    fVar43 = param_2->Priority;
    fVar42 = fVar43;
    if (fVar43 <= local_2c0.PriorityHighest) {
      fVar42 = local_2c0.PriorityHighest;
    }
    param_2->Volume = local_2c0.VolumeScale * param_2->Volume;
    param_2->Priority = fVar43 * local_2c0.PriorityScale;
    local_2c0.PriorityHighest = fVar42;
    if (this_01->bSpatialize != '\0') {
      param_2->AttenuationDistance = (float)local_188.AttenuationDistance;
      param_2->ListenerToSoundDistance = (float)local_188.ListenerToSoundDistance;
      param_2->ListenerToSoundDistanceForPanning =
           (float)local_188.ListenerToSoundDistanceForPanning;
      param_2->AbsoluteAzimuth = local_2c0.AbsoluteAzimuth;
    }
  }
  if (this_01->bAttenuate != 0) {
    if (param_2->SoundClass == (USoundClass *)0x0) {
      fVar43 = local_2c0.DistanceScale;
    }
    else {
      pFVar32 = FAudioDevice::GetSoundClassDynamicProperties(this->AudioDevice,param_2->SoundClass);
      fVar43 = local_2c0.DistanceScale;
      if (pFVar32 != (FSoundClassDynamicProperties *)0x0) {
        fVar43 = (pFVar32->AttenuationScaleParam).CurrValue;
        if (fVar43 <= 0.0) {
          fVar43 = 0.0;
        }
        fVar43 = local_2c0.DistanceScale * fVar43;
        local_2c0.DistanceScale = fVar43;
      }
    }
    if (*(char *)((longlong)&this_01->_padding_ + 1) == '\0') {
      fVar43 = FBaseAttenuationSettings::AttenuationEval
                         ((FBaseAttenuationSettings *)this_01,(float)local_188.AttenuationDistance,
                          *(float *)((longlong)&this_01->_padding_ + 4),fVar43);
    }
    else {
      local_1c8 = local_188.ListenerTransform.Translation.XY.m128d_f64[0];
      dStack_1c0 = local_188.ListenerTransform.Translation.XY.m128d_f64[1];
      local_1b8 = local_188.ListenerTransform.Translation.ZW.m128d_f64[0];
      local_248._s_0.X = local_188.ListenerTransform.Translation.XY.m128d_f64[0];
      local_248._s_0.Y = local_188.ListenerTransform.Translation.XY.m128d_f64[1];
      local_248._s_0.Z = local_188.ListenerTransform.Translation.ZW.m128d_f64[0];
      fVar43 = FBaseAttenuationSettings::Evaluate
                         ((FBaseAttenuationSettings *)this_01,&param_2->Transform,
                          (TVector<double> *)&local_248._s_0,fVar43);
    }
    param_2->DistanceAttenuation = fVar43 * param_2->DistanceAttenuation;
  }
  if (this_01->bEnableOcclusion != '\0') {
    if ((this_01->PluginSettings).OcclusionPluginSettingsArray.ArrayNum == 0) {
      if ((0.0 < param_2->Volume) &&
         (bVar29 = FAudioDevice::IsAudioDeviceMuted(this->AudioDevice), !bVar29)) {
        if ((this->ClosestListenerIndex == -1) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("ClosestListenerIndex != INDEX_NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                                ,0x823,L""), bVar29)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        FAudioDevice::GetListenerPosition
                  (this->AudioDevice,this->ClosestListenerIndex,(TVector<double> *)&local_228._s_0,
                   false);
        local_278 = (param_2->Transform).Translation.ZW.m128d_f64[0];
        local_208._s_0.X = (param_2->Transform).Translation.XY.m128d_f64[0];
        local_208._s_0.Y = (param_2->Transform).Translation.XY.m128d_f64[1];
        local_1e8._s_0.Z = local_228._s_0.Z;
        local_1e8._s_0.X = local_228._s_0.X;
        local_1e8._s_0.Y = local_228._s_0.Y;
        local_208._s_0.Z = local_278;
        CheckOcclusion(this,(TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_208._s_0,
                       this_01);
        param_2->OcclusionAttenuation = (this->CurrentOcclusionVolumeAttenuation).CurrValue;
        FVar15 = this->bIsOccluded;
        param_2->bIsOccluded = '\0';
        param_2->field_0x23c = param_2->field_0x23c | -(FVar15 != (FThreadSafeBool)0x0) & 0x10U;
        param_2->OcclusionFilterFrequency = (this->CurrentOcclusionFilterFrequency).CurrValue;
      }
    }
    else {
      pUVar33 = GetAudioPluginCustomSettingsClass(OCCLUSION);
      if (pUVar33 != (UClass *)0x0) {
        pFVar40 = (this_01->PluginSettings).OcclusionPluginSettingsArray.AllocatorInstance.Data;
        iVar14 = (this_01->PluginSettings).OcclusionPluginSettingsArray.ArrayNum;
        pFVar17 = pFVar40 + (longlong)iVar14 * 8;
        do {
          if ((this_01->PluginSettings).OcclusionPluginSettingsArray.ArrayNum != iVar14) {
            `TCheckedPointerIterator<TObjectPtr<UOcclusionPluginSourceSettingsBase>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_2c7);
          }
          if (pFVar40 == pFVar17) break;
          pUVar21 = *(UOcclusionPluginSourceSettingsBase **)pFVar40;
          if (pUVar21 != (UOcclusionPluginSourceSettingsBase *)0x0) {
            iVar31 = (int)pUVar33->_padding_;
            if ((iVar31 <= *(int *)(*(longlong *)&pUVar21->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar21->field_0x10 + 0x30) + (longlong)iVar31 * 8) ==
                &pUVar33->_padding_)) goto LAB_14735b915;
          }
          pFVar40 = pFVar40 + 8;
        } while( true );
      }
    }
  }
LAB_14735ba03:
  if ((0 < (this_01->PluginSettings).SpatializationPluginSettingsArray.ArrayNum) &&
     (pUVar33 = GetAudioPluginCustomSettingsClass(SPATIALIZATION), pUVar33 != (UClass *)0x0)) {
    pFVar40 = (this_01->PluginSettings).SpatializationPluginSettingsArray.AllocatorInstance.Data;
    iVar14 = (this_01->PluginSettings).SpatializationPluginSettingsArray.ArrayNum;
    pFVar17 = pFVar40 + (longlong)iVar14 * 8;
    do {
      if ((this_01->PluginSettings).SpatializationPluginSettingsArray.ArrayNum != iVar14) {
        `TCheckedPointerIterator<TObjectPtr<USpatializationPluginSourceSettingsBase>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_2c6);
      }
      if (pFVar40 == pFVar17) break;
      pUVar22 = *(USpatializationPluginSourceSettingsBase **)pFVar40;
      if (pUVar22 != (USpatializationPluginSourceSettingsBase *)0x0) {
        iVar31 = (int)pUVar33->_padding_;
        if ((iVar31 <= *(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) + (longlong)iVar31 * 8) ==
            &pUVar33->_padding_)) goto LAB_14735ba71;
      }
      pFVar40 = pFVar40 + 8;
    } while( true );
  }
LAB_14735ba78:
  if ((0 < (this_01->PluginSettings).ReverbPluginSettingsArray.ArrayNum) &&
     (pUVar33 = GetAudioPluginCustomSettingsClass(REVERB), pUVar33 != (UClass *)0x0)) {
    pFVar40 = (this_01->PluginSettings).ReverbPluginSettingsArray.AllocatorInstance.Data;
    iVar14 = (this_01->PluginSettings).ReverbPluginSettingsArray.ArrayNum;
    pFVar17 = pFVar40 + (longlong)iVar14 * 8;
    do {
      if ((this_01->PluginSettings).ReverbPluginSettingsArray.ArrayNum != iVar14) {
        `TCheckedPointerIterator<TObjectPtr<UReverbPluginSourceSettingsBase>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_2c5);
      }
      if (pFVar40 == pFVar17) break;
      pUVar23 = *(UReverbPluginSourceSettingsBase **)pFVar40;
      if (pUVar23 != (UReverbPluginSourceSettingsBase *)0x0) {
        iVar31 = (int)pUVar33->_padding_;
        if ((iVar31 <= *(int *)(*(longlong *)&pUVar23->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar23->field_0x10 + 0x30) + (longlong)iVar31 * 8) ==
            &pUVar33->_padding_)) goto LAB_14735bae3;
      }
      pFVar40 = pFVar40 + 8;
    } while( true );
  }
LAB_14735baea:
  if ((0 < (this_01->PluginSettings).SourceDataOverridePluginSettingsArray.ArrayNum) &&
     (pUVar33 = GetAudioPluginCustomSettingsClass(SOURCEDATAOVERRIDE), pUVar33 != (UClass *)0x0)) {
    pFVar40 = (this_01->PluginSettings).SourceDataOverridePluginSettingsArray.AllocatorInstance.Data
    ;
    iVar14 = (this_01->PluginSettings).SourceDataOverridePluginSettingsArray.ArrayNum;
    pFVar17 = pFVar40 + (longlong)iVar14 * 8;
    do {
      if ((this_01->PluginSettings).SourceDataOverridePluginSettingsArray.ArrayNum != iVar14) {
        `TCheckedPointerIterator<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_2c4);
      }
      if (pFVar40 == pFVar17) break;
      pUVar24 = *(USourceDataOverridePluginSourceSettingsBase **)pFVar40;
      if (pUVar24 != (USourceDataOverridePluginSourceSettingsBase *)0x0) {
        iVar31 = (int)pUVar33->_padding_;
        if ((iVar31 <= *(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar31 * 8) ==
            &pUVar33->_padding_)) goto LAB_14735bb55;
      }
      pFVar40 = pFVar40 + 8;
    } while( true );
  }
LAB_14735bb5c:
  pUVar25 = (this_01->AudioLinkSettingsOverride).field0_0x0.DebugPtr;
  if (pUVar25 != (UAudioLinkSettingsAbstract *)0x0) {
    param_2->AudioLinkSettingsOverride = pUVar25;
  }
  if (this_01->bAttenuateWithLPF != '\0') {
    uVar7 = this_01->LPFFrequencyAtMin;
    uVar11 = this_01->LPFFrequencyAtMax;
    local_270._s_0.X = (double)(float)uVar7;
    local_270._s_0.Y = (double)(float)uVar11;
    uVar8 = this_01->HPFFrequencyAtMin;
    uVar12 = this_01->HPFFrequencyAtMax;
    local_260._s_0.X = (double)(float)uVar8;
    local_260._s_0.Y = (double)(float)uVar12;
    fVar43 = GetAttenuationFrequency
                       (this,this_01,&local_188,(TVector2<double> *)&local_270._s_0,
                        &this_01->CustomLowpassAirAbsorptionCurve);
    fVar42 = GetAttenuationFrequency
                       (this,this_01,&local_188,(TVector2<double> *)&local_260._s_0,
                        &this_01->CustomHighpassAirAbsorptionCurve);
    if (fVar43 < param_2->AttenuationLowpassFilterFrequency) {
      param_2->AttenuationLowpassFilterFrequency = fVar43;
    }
    if (param_2->AttenuationHighpassFilterFrequency <= fVar42 &&
        fVar42 != param_2->AttenuationHighpassFilterFrequency) {
      param_2->AttenuationHighpassFilterFrequency = fVar42;
    }
  }
  param_2->NonSpatializedRadiusStart = this_01->NonSpatializedRadiusStart;
  param_2->NonSpatializedRadiusEnd = this_01->NonSpatializedRadiusEnd;
  param_2->NonSpatializedRadiusMode = this_01->NonSpatializedRadiusMode;
  param_2->StereoSpread = this_01->StereoSpread;
  uVar13 = this_01->field_0xc1;
  bVar37 = param_2->field_0x23c;
  param_2->bApplyNormalizationToStereoSounds = this_01->bApplyNormalizationToStereoSounds;
  if ((this_01->bSpatialize == '\0') && (bAudioLinkSpatializeAllSoundsCVar == 0)) {
    bVar30 = 0;
  }
  else {
    bVar30 = 1;
  }
  EVar38 = SPATIALIZATION_Default;
  param_2->field_0x23c = bVar30 | (uVar13 & 0xfe) << 6 | bVar37 & 0x7f;
  uVar35 = ((uint)((byte)this_01->field_0xc1 >> 1) | *(uint *)&param_2->field_0x238) & 8 ^
           *(uint *)&param_2->field_0x238 & 0xfffffff7;
  *(uint *)&param_2->field_0x238 = uVar35;
  *(uint *)&param_2->field_0x238 =
       ((byte)this_01->field_0xc1 >> 1 | uVar35) & 0x10 ^ uVar35 & 0xffffffef;
  bVar37 = this->field_0x1a5;
  if (this->bIsFirstAttenuationUpdate != '\0') {
    EVar36 = EVar38;
    if (local_188.ListenerToSoundDistance < (double)this_01->BinauralRadius) {
      EVar36 = 0x80;
    }
    bVar37 = (byte)EVar36 | bVar37 & 0x7f;
    this->field_0x1a5 = bVar37;
  }
  if ((char)bVar37 < '\0') {
    param_2->SpatializationMethod = SPATIALIZATION_Default;
  }
  else {
    if (((this_01->SpatializationAlgorithm).Value == '\0') &&
       (bVar29 = FAudioDevice::IsHRTFEnabledForAll(this->AudioDevice), bVar29)) {
      EVar38 = SPATIALIZATION_HRTF;
    }
    else if (((this_01->SpatializationAlgorithm).Value != '\x01') ||
            (bVar29 = FAudioDevice::IsHRTFDisabled(this->AudioDevice), !bVar29)) {
      EVar38 = (ESoundSpatializationAlgorithm)(this_01->SpatializationAlgorithm).Value;
    }
    param_2->SpatializationMethod = EVar38;
    pFVar34 = FAudioDevice::GetCurrentSpatializationPluginInterfaceInfo
                        (this->AudioDevice,&local_1b0);
    param_2->bSpatializationIsExternalSend = pFVar34->bSpatializationIsExternalSend;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.SpatializationPlugin.SharedReferenceCount.ReferenceController);
  }
  if (local_290 == (FSoundAttenuationSettings *)0x0) {
    (this->FocusData).Azimuth = local_2c0.Azimuth;
    (this->FocusData).AbsoluteAzimuth = local_2c0.AbsoluteAzimuth;
    (this->FocusData).FocusFactor = local_2c0.FocusFactor;
    (this->FocusData).DistanceScale = local_2c0.DistanceScale;
    (this->FocusData).PriorityScale = local_2c0.PriorityScale;
    (this->FocusData).PriorityHighest = local_2c0.PriorityHighest;
    (this->FocusData).VolumeScale = local_2c0.VolumeScale;
    (this->FocusData).bFirstFocusUpdate = (bool)local_2c0.bFirstFocusUpdate;
    *(int3 *)&(this->FocusData).field_0x1d = local_2c0._29_3_;
  }
  else {
    (this->FocusData).PriorityHighest = local_2c0.PriorityHighest;
  }
  this->bIsFirstAttenuationUpdate = '\0';
  return;
LAB_14735b915:
  param_2->OcclusionPluginSettings = pUVar21;
  goto LAB_14735ba03;
LAB_14735ba71:
  param_2->SpatializationPluginSettings = pUVar22;
  goto LAB_14735ba78;
LAB_14735bae3:
  param_2->ReverbPluginSettings = pUVar23;
  goto LAB_14735baea;
LAB_14735bb55:
  param_2->SourceDataOverridePluginSettings = pUVar24;
  goto LAB_14735bb5c;
}

// UpdateConcurrencyVolumeScalars @ 14735bdf0

void __thiscall FActiveSound::UpdateConcurrencyVolumeScalars(FActiveSound *this,float param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->ConcurrencyGroupData).field_0x10;
  iVar3 = *(int *)&(this->ConcurrencyGroupData).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ConcurrencyGroupData).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14735be9d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14735be9d:
  uVar10 = *(uint *)&(this->ConcurrencyGroupData).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ConcurrencyGroupData).field_0x8 -
                       *(int *)&(this->ConcurrencyGroupData).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ConcurrencyGroupData).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ConcurrencyGroupData).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14735bfa0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14735bfa0:
  while( true ) {
    if (*(int *)&(this->ConcurrencyGroupData).field_0x8 -
        *(int *)&(this->ConcurrencyGroupData).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FConcurrencySoundData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FConcurrencySoundData::Update
              ((FConcurrencySoundData *)
               ((longlong)TStack_60.CurrentBitIndex * 0x20 +
               *(longlong *)&this->ConcurrencyGroupData + 4),param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// UpdateFocusData @ 14735c020

void __thiscall
FActiveSound::UpdateFocusData
          (FActiveSound *this,float param_1,FAttenuationListenerData *param_2,
          FAttenuationFocusData *param_3)

{
  undefined1 *puVar1;
  float fVar2;
  bool bVar3;
  FGlobalFocusSettings *pFVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 == (FAttenuationFocusData *)0x0) {
    param_3 = &this->FocusData;
  }
  FAudioDevice::GetAzimuth(this->AudioDevice,param_2,&param_3->Azimuth,&param_3->AbsoluteAzimuth);
  param_3->DistanceScale = 1.0;
  param_3->PriorityScale = 1.0;
  if ((param_2->AttenuationSettings->bEnableListenerFocus != '\0') &&
     ((FocusDependsOnSpatializationCVar != 1 || (param_2->AttenuationSettings->bSpatialize != '\0'))
     )) {
    pFVar4 = FAudioDevice::GetGlobalFocusSettings(this->AudioDevice);
    fVar6 = FAudioDevice::GetFocusFactor
                      (this->AudioDevice,param_3->Azimuth,param_2->AttenuationSettings);
    if ((param_3->bFirstFocusUpdate == false) || (InitializeFocusFactorOnFirstUpdateCVar == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((param_2->AttenuationSettings->bEnableFocusInterpolation != '\0') && (bVar3)) {
      fVar2 = param_3->FocusFactor;
      lVar5 = 0x238;
      if (fVar6 <= fVar2) {
        lVar5 = 0x234;
      }
      fVar8 = *(float *)((longlong)&param_2->AttenuationSettings->_padding_ + lVar5);
      if ((0.0 < fVar8) && (fVar7 = fVar6 - fVar2, __real_322bcc77 <= fVar7 * fVar7)) {
        fVar8 = fVar8 * param_1;
        if (__real_3f800000 <= fVar8) {
          fVar8 = __real_3f800000;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        fVar6 = fVar8 * fVar7 + fVar2;
      }
    }
    param_3->FocusFactor = fVar6;
    param_3->bFirstFocusUpdate = false;
    fVar6 = FSoundAttenuationSettings::GetFocusPriorityScale
                      (param_2->AttenuationSettings,pFVar4,fVar6);
    param_3->PriorityScale = fVar6;
    fVar6 = FSoundAttenuationSettings::GetFocusDistanceScale
                      (param_2->AttenuationSettings,pFVar4,param_3->FocusFactor);
    param_3->DistanceScale = fVar6;
    fVar6 = FSoundAttenuationSettings::GetFocusAttenuation
                      (param_2->AttenuationSettings,pFVar4,param_3->FocusFactor);
    param_3->VolumeScale = fVar6;
  }
  return;
}

// UpdateInterfaceParameters @ 14735c1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FActiveSound::UpdateInterfaceParameters
          (FActiveSound *this,TArray<FListener,TSizedDefaultAllocator<32>_> *param_1)

{
  USoundBase *pUVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  double dVar12;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar13;
  char cVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  IParameterTransmitter *pIVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined4 uVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  undefined4 uVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  undefined1 local_res18 [8];
  ForAnyElementType local_7f8;
  uint local_7f0 [2];
  double local_7e8;
  double local_7e0;
  double local_7d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7d0;
  FAudioParameter local_7b0;
  FAudioParameter local_708;
  FName local_668;
  float local_660;
  undefined1 local_65c;
  undefined4 local_658;
  undefined8 local_650;
  void *local_648;
  undefined8 local_640;
  void *local_638;
  undefined8 local_630;
  void *local_628;
  undefined8 local_620;
  void *local_618;
  undefined8 local_610;
  void *local_608;
  undefined8 local_600;
  FString *local_5f8;
  undefined8 local_5f0;
  undefined1 local_5e8;
  undefined8 local_5e4;
  TSharedPtr<Audio::IProxyData,1> *local_5d8;
  undefined8 local_5d0;
  FAudioParameter local_5c8;
  FName local_528;
  float local_520;
  undefined1 local_51c;
  undefined4 local_518;
  undefined8 local_510;
  void *local_508;
  undefined8 local_500;
  void *local_4f8;
  undefined8 local_4f0;
  void *local_4e8;
  undefined8 local_4e0;
  void *local_4d8;
  undefined8 local_4d0;
  void *local_4c8;
  undefined8 local_4c0;
  FString *local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8;
  undefined8 local_4a4;
  TSharedPtr<Audio::IProxyData,1> *local_498;
  undefined8 local_490;
  FAudioParameter local_488;
  FName local_3e8;
  float local_3e0;
  undefined1 local_3dc;
  undefined4 local_3d8;
  undefined8 local_3d0;
  void *local_3c8;
  undefined8 local_3c0;
  void *local_3b8;
  undefined8 local_3b0;
  void *local_3a8;
  undefined8 local_3a0;
  void *local_398;
  undefined8 local_390;
  void *local_388;
  undefined8 local_380;
  FString *local_378;
  undefined8 local_370;
  undefined1 local_368;
  undefined8 local_364;
  TSharedPtr<Audio::IProxyData,1> *local_358;
  undefined8 local_350;
  TSharedPtr<Audio::FParameterInterface,1> local_348;
  TSharedPtr<Audio::FParameterInterface,1> local_338;
  TSharedPtr<Audio::FParameterInterface,1> local_328;
  TSharedPtr<Audio::FParameterInterface,1> local_318;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_300;
  undefined8 uStack_2e0;
  TVector2<double>_u_0 local_2d8;
  TVector2<double>_u_0 local_2c8;
  TVector2<double>_u_0 local_2b8;
  undefined1 local_2a8 [40];
  int local_280;
  undefined4 uStack_27c;
  TQuat<double> local_278;
  undefined8 uStack_258;
  FParameterInterface *local_248;
  TReferenceControllerBase<1> *pTStack_240;
  FParameterInterface *local_238;
  TReferenceControllerBase<1> *pTStack_230;
  FParameterInterface *local_228;
  TReferenceControllerBase<1> *pTStack_220;
  FParameterInterface *local_218;
  TReferenceControllerBase<1> *pTStack_210;
  FParameterInterface *local_208;
  TReferenceControllerBase<1> *pTStack_200;
  FParameterInterface *local_1f8;
  TReferenceControllerBase<1> *pTStack_1f0;
  FParameterInterface *local_1e8;
  TReferenceControllerBase<1> *pTStack_1e0;
  FParameterInterface *local_1d8;
  TReferenceControllerBase<1> *pTStack_1d0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  TVector<double> local_140;
  TVector<double> local_128;
  TVector<double> local_110 [9];
  
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId837,"FActiveSound::UpdateInterfaceParameters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
               ,0x345);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId837);
  }
  if (((((this->InstanceTransmitter).Object != (IParameterTransmitter *)0x0) &&
       ((this->Sound).field0_0x0.DebugPtr != (USoundBase *)0x0)) &&
      (cVar14 = (**(code **)(*(longlong *)this + 0x18))(this), cVar14 == '\0')) &&
     ((-1 < this->ClosestListenerIndex && (this->ClosestListenerIndex < param_1->ArrayNum)))) {
    Audio::AttenuationInterface::GetInterface(&local_318);
    Audio::SpatializationInterface::GetInterface(&local_328);
    Audio::SourceOrientationInterface::GetInterface(&local_338);
    Audio::ListenerOrientationInterface::GetInterface(&local_348);
    pUVar1 = (this->Sound).field0_0x0.DebugPtr;
    local_248 = local_318.Object;
    pTStack_240 = local_318.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x368);
    if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar15 = (*pcVar2)(pUVar1,&local_248);
    pUVar1 = (this->Sound).field0_0x0.DebugPtr;
    local_238 = local_328.Object;
    pTStack_230 = local_328.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x368);
    if (local_328.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar16 = (*pcVar2)(pUVar1,&local_238);
    pUVar1 = (this->Sound).field0_0x0.DebugPtr;
    local_228 = local_338.Object;
    pTStack_220 = local_338.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x368);
    if (local_338.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar17 = (*pcVar2)(pUVar1,&local_228);
    pUVar1 = (this->Sound).field0_0x0.DebugPtr;
    local_218 = local_348.Object;
    pTStack_210 = local_348.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x368);
    if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar18 = (*pcVar2)(pUVar1,&local_218);
    local_7d0._padding_._4_4_ = 1;
    local_308 = &this->WaveInstances;
    local_7d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WaveInstances).field_0x10;
    local_7d0._padding_._0_4_ = 0;
    local_7d0.UnvisitedBitMask = 0xffffffff;
    local_7d0.CurrentBitIndex = 0;
    local_7d0.BaseBitIndex = 0;
    if (*(int *)&(this->WaveInstances).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7d0);
    }
    TStack_300._padding_ = CONCAT44(local_7d0._padding_._4_4_,(undefined4)local_7d0._padding_);
    TStack_300.CurrentBitIndex = local_7d0.CurrentBitIndex;
    TStack_300.UnvisitedBitMask = local_7d0.UnvisitedBitMask;
    TStack_300._28_4_ = local_7d0._28_4_;
    TStack_300.BaseBitIndex = local_7d0.BaseBitIndex;
    local_280 = *(int *)&(this->WaveInstances).field_0x8 - *(int *)&(this->WaveInstances).field_0x34
    ;
    local_2a8._16_8_ = local_7d0.Array;
    uStack_2e0 = CONCAT44(uStack_27c,local_280);
    TStack_300.Array = local_7d0.Array;
    local_2a8._0_8_ = local_308;
    local_2a8._8_8_ = TStack_300._padding_;
    local_2a8._24_8_ = TStack_300._16_8_;
    local_2a8._32_8_ = TStack_300._24_8_;
    pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_2a8,
                         (TBitArray<FDefaultBitArrayAllocator> *)&(this->WaveInstances).field_0x10,
                         *(int *)&(this->WaveInstances).field_0x28);
    local_278.Y = (double)pTVar23->_padding_;
    local_278.Z = (double)pTVar23->Array;
    local_278.W = *(double *)&pTVar23->UnvisitedBitMask;
    uStack_258 = *(undefined8 *)&pTVar23->BaseBitIndex;
    while( true ) {
      pTVar13 = local_308;
      if (*(int *)&local_308->field_0x8 - *(int *)&local_308->field_0x34 != (int)uStack_2e0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_300.CurrentBitIndex == local_278.W._4_4_) &&
          (TStack_300.Array == (TBitArray<FDefaultBitArrayAllocator> *)local_278.Z)) &&
         (pTVar13 == &this->WaveInstances)) break;
      plVar3 = *(longlong **)
                (*(longlong *)pTVar13 + 8 + (longlong)TStack_300.CurrentBitIndex * 0x18);
      if (((plVar3 != (longlong *)0x0) &&
          (pUVar1 = (USoundBase *)*plVar3, pUVar1 != (this->Sound).field0_0x0.DebugPtr)) &&
         (pUVar1 != (USoundBase *)0x0)) {
        local_208 = local_318.Object;
        pTStack_200 = local_318.SharedReferenceCount.ReferenceController;
        pcVar2 = *(code **)(pUVar1->_padding_ + 0x368);
        if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        bVar19 = (*pcVar2)(pUVar1,&local_208);
        bVar15 = bVar15 | bVar19;
        local_1f8 = local_328.Object;
        pTStack_1f0 = local_328.SharedReferenceCount.ReferenceController;
        pcVar2 = *(code **)(pUVar1->_padding_ + 0x368);
        if (local_328.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        bVar19 = (*pcVar2)(pUVar1,&local_1f8);
        bVar16 = bVar16 | bVar19;
        local_1d8 = local_338.Object;
        pTStack_1d0 = local_338.SharedReferenceCount.ReferenceController;
        pcVar2 = *(code **)(pUVar1->_padding_ + 0x368);
        if (local_338.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        bVar19 = (*pcVar2)(pUVar1,&local_1d8);
        bVar17 = bVar17 | bVar19;
        local_1e8 = local_348.Object;
        pTStack_1e0 = local_348.SharedReferenceCount.ReferenceController;
        pcVar2 = *(code **)(pUVar1->_padding_ + 0x368);
        if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        bVar19 = (*pcVar2)(pUVar1,&local_1e8);
        bVar18 = bVar18 | bVar19;
      }
      TStack_300.UnvisitedBitMask = TStack_300.UnvisitedBitMask & ~TStack_300._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_300);
    }
    if ((((bVar15 != 0) || (bVar16 != 0)) || (bVar17 != 0)) || (bVar18 != 0)) {
      uVar65 = this->ClosestListenerIndex;
      local_7f8.Data = (FScriptContainerElement *)0x0;
      local_7f0[0] = 0;
      local_7f0[1] = 0;
      uVar66 = 0;
      if ((int)uVar65 < param_1->ArrayNum) {
        uVar66 = ~uVar65 >> 0x1f;
      }
      uVar21 = 0;
      if (uVar66 == 0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar21 = local_7f0[0];
      }
      local_170 = (this->Transform).Translation.XY.m128d_f64[0];
      dStack_168 = (this->Transform).Translation.XY.m128d_f64[1];
      local_160 = (this->Transform).Translation.ZW.m128d_f64[0];
      lVar25 = (longlong)(int)uVar65 * 0x110;
      pFVar4 = (param_1->AllocatorInstance).Data;
      local_158 = *(double *)(pFVar4 + lVar25 + 0x20);
      dStack_150 = *(double *)(pFVar4 + lVar25 + 0x20 + 8);
      local_148 = *(double *)(pFVar4 + lVar25 + 0x30);
      dVar10 = local_170 - local_158;
      local_7d8 = local_160 - local_148;
      uVar67 = SUB84(local_7d8,0);
      uVar11 = (ulonglong)local_7d8 >> 0x20;
      dVar9 = dStack_168 - dStack_150;
      uVar65 = SUB84(dVar9,0);
      uVar66 = (uint)((ulonglong)dVar9 >> 0x20);
      local_7e8 = dVar10;
      local_7e0 = dVar9;
      if (bVar15 != 0) {
        local_7b0.ParamName = Audio::AttenuationInterface::Inputs::Distance;
        local_7b0.BoolParam = false;
        local_7b0.IntParam = 0;
        local_7b0.StringParam.Data.ArrayNum = 0;
        local_7b0.StringParam.Data.ArrayMax = 0;
        local_7b0.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7b0.ArrayFloatParam.ArrayNum = 0;
        local_7b0.ArrayFloatParam.ArrayMax = 0;
        local_7b0.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7b0.ArrayBoolParam.ArrayNum = 0;
        local_7b0.ArrayBoolParam.ArrayMax = 0;
        local_7b0.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7b0.ArrayIntParam.ArrayNum = 0;
        local_7b0.ArrayIntParam.ArrayMax = 0;
        local_7b0.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7b0.ArrayObjectParam.ArrayNum = 0;
        local_7b0.ArrayObjectParam.ArrayMax = 0;
        local_7b0.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7b0.ArrayStringParam.ArrayNum = 0;
        local_7b0.ArrayStringParam.ArrayMax = 0;
        local_7b0.ParamType = Float;
        local_7b0.TypeName.ComparisonIndex.Value = 0;
        local_7b0.TypeName.Number = 0;
        local_7b0.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7b0.ObjectProxies.ArrayNum = 0;
        local_7b0.ObjectProxies.ArrayMax = 0;
        local_7b0.FloatParam = (float)SQRT(dVar10 * dVar10 + dVar9 * dVar9 + local_7d8 * local_7d8);
        local_7b0.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
        local_7b0.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if ((local_7f8.Data <= &local_7b0) &&
           (&local_7b0 < (FAudioParameter *)(local_7f8.Data + (longlong)(int)local_7f0[1] * 0xa0)))
        {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar20) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar21 = local_7f0[0];
        }
        if (uVar21 == local_7f0[1]) {
          uVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8a0,&local_7f8,(int *)(local_7f0 + 1));
        }
        local_7f0[0] = uVar21 + 1;
        FAudioParameter::FAudioParameter
                  ((FAudioParameter *)(local_7f8.Data + (longlong)(int)uVar21 * 0xa0),&local_7b0);
        DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                  ((TSharedPtr<Audio::IProxyData,1> *)local_7b0.ObjectProxies.AllocatorInstance.Data
                   ,local_7b0.ObjectProxies.ArrayNum);
        if ((TSharedPtr<Audio::IProxyData,1> *)local_7b0.ObjectProxies.AllocatorInstance.Data !=
            (TSharedPtr<Audio::IProxyData,1> *)0x0) {
          FMemory::Free(local_7b0.ObjectProxies.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_7b0.ArrayStringParam.AllocatorInstance.Data,
                   local_7b0.ArrayStringParam.ArrayNum);
        if (local_7b0.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.ArrayStringParam.AllocatorInstance.Data);
        }
        if (local_7b0.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.ArrayObjectParam.AllocatorInstance.Data);
        }
        if (local_7b0.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.ArrayIntParam.AllocatorInstance.Data);
        }
        if (local_7b0.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.ArrayBoolParam.AllocatorInstance.Data);
        }
        if (local_7b0.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.ArrayFloatParam.AllocatorInstance.Data);
        }
        if (local_7b0.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.StringParam.Data.AllocatorInstance.Data);
        }
      }
      dVar12 = __real_404ca5dc1a63c1f8;
      if (bVar16 != 0) {
        dVar5 = *(double *)(pFVar4 + lVar25) *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar6 = *(double *)(pFVar4 + lVar25 + 8) *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar43 = *(double *)(pFVar4 + lVar25 + 0x10) *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar48 = *(double *)(pFVar4 + lVar25 + 0x10 + 8) *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar58._8_4_ = uVar65;
        auVar58._0_8_ = dVar10;
        auVar58._12_4_ = uVar66;
        auVar56._8_4_ = uVar65;
        auVar56._0_8_ = dVar10;
        auVar56._12_4_ = uVar66;
        auVar55._8_4_ = SUB84(dVar6,0);
        auVar55._0_8_ = dVar5;
        auVar55._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar34._8_4_ = uVar65;
        auVar34._0_8_ = dVar10;
        auVar34._12_4_ = uVar66;
        auVar59._0_8_ = auVar58._8_8_ * dVar5 - dVar10 * dVar6;
        auVar59._8_8_ = local_7d8 * dVar6 - auVar56._8_8_ * dVar43;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = local_7d8;
        auVar35 = blendpd(auVar34,auVar35,2);
        auVar51._8_4_ = SUB84(auVar59._8_8_,0);
        auVar51._0_8_ = auVar59._0_8_;
        auVar51._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
        auVar60._8_4_ = SUB84(dVar48,0);
        auVar60._0_8_ = dVar43;
        auVar60._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        auVar56 = blendpd(auVar55,auVar60,2);
        auVar36._0_8_ = auVar35._0_8_ * dVar43 - local_7d8 * auVar56._0_8_;
        auVar36._8_8_ = auVar35._8_8_ * dVar48 - auVar56._8_8_ * 0.0;
        auVar60 = blendpd(auVar59,auVar36,2);
        dVar50 = auVar51._8_8_ + auVar51._8_8_;
        dVar54 = auVar36._0_8_ + auVar36._0_8_;
        auVar61._0_8_ = auVar60._0_8_ + auVar60._0_8_;
        auVar61._8_8_ = auVar60._8_8_ + auVar60._8_8_;
        uVar47 = SUB84(dVar54,0);
        auVar44._8_4_ = uVar47;
        auVar44._0_8_ = dVar50;
        uVar49 = (undefined4)((ulonglong)dVar54 >> 0x20);
        auVar44._12_4_ = uVar49;
        auVar27._8_4_ = uVar47;
        auVar27._0_8_ = dVar50;
        auVar27._12_4_ = uVar49;
        auVar37._8_4_ = uVar47;
        auVar37._0_8_ = dVar50;
        auVar37._12_4_ = uVar49;
        auVar60 = blendpd(auVar37,auVar61,2);
        auVar45._0_8_ = auVar44._8_8_ * dVar5 - dVar50 * dVar6;
        auVar45._8_8_ = auVar61._0_8_ * dVar6 - auVar27._8_8_ * dVar43;
        auVar28._8_4_ = SUB84(auVar61._8_8_,0);
        auVar28._0_8_ = auVar61._0_8_;
        auVar28._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
        auVar38._0_8_ = auVar60._0_8_ * dVar43 - auVar61._0_8_ * auVar56._0_8_;
        auVar38._8_8_ = auVar60._8_8_ * dVar48 - auVar28._8_8_ * auVar56._8_8_;
        auVar29._8_4_ = SUB84(auVar45._8_8_,0);
        auVar29._0_8_ = auVar45._0_8_;
        auVar29._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
        auVar60 = blendpd(auVar45,auVar38,2);
        local_188._s_0.Z = auVar61._0_8_ * dVar48 + local_7d8 + auVar60._0_8_;
        local_188._s_0.X = dVar50 * dVar48 + dVar10 + auVar29._8_8_;
        local_188._s_0.Y = dVar54 * dVar48 + dVar9 + auVar38._0_8_;
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)&local_188._s_0,&local_140,__real_3e45798ee0000000,
                   &UE::Math::TVector<double>::ZeroVector);
        FMath::GetAzimuthAndElevation
                  ((TVector2<double> *)&local_2d8._s_0,&local_140,
                   &UE::Math::TVector<double>::ForwardVector,&UE::Math::TVector<double>::RightVector
                   ,&UE::Math::TVector<double>::UpVector);
        local_488.ParamName = Audio::SpatializationInterface::Inputs::Azimuth;
        local_488.BoolParam = false;
        local_488.IntParam = 0;
        local_488.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
        local_488.FloatParam = (float)(local_2d8._s_0.X * dVar12);
        local_488.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_488.StringParam.Data.ArrayNum = 0;
        local_488.StringParam.Data.ArrayMax = 0;
        local_488.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_488.ArrayFloatParam.ArrayNum = 0;
        local_488.ArrayFloatParam.ArrayMax = 0;
        local_488.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_488.ArrayBoolParam.ArrayNum = 0;
        local_488.ArrayBoolParam.ArrayMax = 0;
        local_488.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3e8 = Audio::SpatializationInterface::Inputs::Elevation;
        local_488.ArrayIntParam.ArrayNum = 0;
        local_488.ArrayIntParam.ArrayMax = 0;
        local_488.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_488.ArrayObjectParam.ArrayNum = 0;
        local_488.ArrayObjectParam.ArrayMax = 0;
        local_3e0 = (float)(local_2d8._s_0.Y * dVar12);
        local_488.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_488.ArrayStringParam.ArrayNum = 0;
        local_488.ArrayStringParam.ArrayMax = 0;
        local_488.ParamType = Float;
        local_488.TypeName.ComparisonIndex.Value = 0;
        local_488.TypeName.Number = 0;
        local_488.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_488.ObjectProxies.ArrayNum = 0;
        local_488.ObjectProxies.ArrayMax = 0;
        local_3dc = 0;
        local_3d8 = 0;
        local_3d0 = 0;
        local_3c8 = (void *)0x0;
        local_3c0 = 0;
        local_3b8 = (void *)0x0;
        local_3b0 = 0;
        local_3a8 = (void *)0x0;
        local_3a0 = 0;
        local_398 = (void *)0x0;
        local_390 = 0;
        local_388 = (void *)0x0;
        local_380 = 0;
        local_378 = (FString *)0x0;
        local_370 = 0;
        local_368 = 3;
        local_364 = 0;
        local_358 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
        local_350 = 0;
        iVar22 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xa0,8,2,&local_7f8,(int *)local_7f0,(int *)(local_7f0 + 1));
        ConstructItems<FAudioParameter,FAudioParameter,int>
                  (local_7f8.Data + (longlong)iVar22 * 0xa0,&local_488,2);
        DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_358,(int)local_350);
        if (local_358 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
          FMemory::Free(local_358);
        }
        DestructItems<FString,int>(local_378,(int)local_370);
        if (local_378 != (FString *)0x0) {
          FMemory::Free(local_378);
        }
        if (local_388 != (void *)0x0) {
          FMemory::Free(local_388);
        }
        if (local_398 != (void *)0x0) {
          FMemory::Free(local_398);
        }
        if (local_3a8 != (void *)0x0) {
          FMemory::Free(local_3a8);
        }
        if (local_3b8 != (void *)0x0) {
          FMemory::Free(local_3b8);
        }
        if (local_3c8 != (void *)0x0) {
          FMemory::Free(local_3c8);
        }
        DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                  ((TSharedPtr<Audio::IProxyData,1> *)local_488.ObjectProxies.AllocatorInstance.Data
                   ,local_488.ObjectProxies.ArrayNum);
        if ((TSharedPtr<Audio::IProxyData,1> *)local_488.ObjectProxies.AllocatorInstance.Data !=
            (TSharedPtr<Audio::IProxyData,1> *)0x0) {
          FMemory::Free(local_488.ObjectProxies.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_488.ArrayStringParam.AllocatorInstance.Data,
                   local_488.ArrayStringParam.ArrayNum);
        if (local_488.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.ArrayStringParam.AllocatorInstance.Data);
        }
        if (local_488.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.ArrayObjectParam.AllocatorInstance.Data);
        }
        if (local_488.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.ArrayIntParam.AllocatorInstance.Data);
        }
        if (local_488.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.ArrayBoolParam.AllocatorInstance.Data);
        }
        if (local_488.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.ArrayFloatParam.AllocatorInstance.Data);
        }
        if (local_488.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.StringParam.Data.AllocatorInstance.Data);
        }
      }
      if (bVar17 != 0) {
        dVar9 = (this->Transform).Rotation.XY.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar5 = (this->Transform).Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar21 = (uint)__xmm_80000000000000008000000000000000;
        uVar69 = SUB84(dVar10,0) ^ uVar21;
        uVar68 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        uVar70 = (uint)((ulonglong)dVar10 >> 0x20) ^ uVar68;
        dVar10 = (this->Transform).Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar6 = (this->Transform).Rotation.ZW.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar65 = uVar65 ^ uVar21;
        uVar66 = uVar66 ^ uVar68;
        uVar67 = uVar67 ^ uVar21;
        uVar68 = (uint)uVar11 ^ uVar68;
        auVar62._4_4_ = uVar70;
        auVar62._0_4_ = uVar69;
        auVar62._8_4_ = uVar65;
        auVar62._12_4_ = uVar66;
        auVar30._8_4_ = SUB84(dVar10,0);
        auVar30._0_8_ = dVar5;
        auVar30._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar57._8_4_ = SUB84(dVar5,0);
        auVar57._0_8_ = dVar9;
        auVar57._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar7._8_4_ = SUB84(dVar6,0);
        auVar7._0_8_ = dVar10;
        auVar7._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar35 = blendpd(auVar57,auVar7,2);
        auVar63._0_8_ = auVar62._8_8_ * dVar9 - dVar5 * (double)CONCAT44(uVar70,uVar69);
        auVar63._8_8_ =
             (double)CONCAT44(uVar68,uVar67) * dVar5 -
             auVar30._8_8_ * (double)CONCAT44(uVar66,uVar65);
        auVar39._4_4_ = uVar70;
        auVar39._0_4_ = uVar69;
        auVar39._8_4_ = uVar65;
        auVar39._12_4_ = uVar66;
        auVar8._4_4_ = uVar68;
        auVar8._0_4_ = uVar67;
        auVar8._8_8_ = 0;
        auVar60 = blendpd(auVar39,auVar8,2);
        auVar46._8_4_ = SUB84(auVar63._8_8_,0);
        auVar46._0_8_ = auVar63._0_8_;
        auVar46._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
        auVar40._0_8_ = auVar60._0_8_ * dVar10 - (double)CONCAT44(uVar68,uVar67) * auVar35._0_8_;
        auVar40._8_8_ = auVar60._8_8_ * dVar6 - auVar35._8_8_ * 0.0;
        auVar60 = blendpd(auVar63,auVar40,2);
        dVar43 = auVar46._8_8_ + auVar46._8_8_;
        dVar48 = auVar40._0_8_ + auVar40._0_8_;
        auVar64._0_8_ = auVar60._0_8_ + auVar60._0_8_;
        auVar64._8_8_ = auVar60._8_8_ + auVar60._8_8_;
        uVar47 = SUB84(dVar48,0);
        auVar52._8_4_ = uVar47;
        auVar52._0_8_ = dVar43;
        uVar49 = (undefined4)((ulonglong)dVar48 >> 0x20);
        auVar52._12_4_ = uVar49;
        auVar31._8_4_ = uVar47;
        auVar31._0_8_ = dVar43;
        auVar31._12_4_ = uVar49;
        auVar41._8_4_ = uVar47;
        auVar41._0_8_ = dVar43;
        auVar41._12_4_ = uVar49;
        auVar60 = blendpd(auVar41,auVar64,2);
        auVar53._0_8_ = auVar52._8_8_ * dVar9 - dVar43 * dVar5;
        auVar53._8_8_ = auVar64._0_8_ * dVar5 - auVar31._8_8_ * dVar10;
        auVar32._8_4_ = SUB84(auVar64._8_8_,0);
        auVar32._0_8_ = auVar64._0_8_;
        auVar32._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
        auVar42._0_8_ = auVar60._0_8_ * dVar10 - auVar64._0_8_ * auVar35._0_8_;
        auVar42._8_8_ = auVar60._8_8_ * dVar6 - auVar32._8_8_ * auVar35._8_8_;
        auVar33._8_4_ = SUB84(auVar53._8_8_,0);
        auVar33._0_8_ = auVar53._0_8_;
        auVar33._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
        local_1c8._s_0.X = dVar43 * dVar6 + (double)CONCAT44(uVar70,uVar69) + auVar33._8_8_;
        local_1c8._s_0.Y = dVar48 * dVar6 + (double)CONCAT44(uVar66,uVar65) + auVar42._0_8_;
        auVar60 = blendpd(auVar53,auVar42,2);
        local_1c8._s_0.Z = auVar64._0_8_ * dVar6 + (double)CONCAT44(uVar68,uVar67) + auVar60._0_8_;
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)&local_1c8._s_0,&local_128,__real_3e45798ee0000000,
                   &UE::Math::TVector<double>::ZeroVector);
        FMath::GetAzimuthAndElevation
                  ((TVector2<double> *)&local_2c8._s_0,&local_128,
                   &UE::Math::TVector<double>::ForwardVector,&UE::Math::TVector<double>::RightVector
                   ,&UE::Math::TVector<double>::UpVector);
        local_708.ParamName = Audio::SourceOrientationInterface::Inputs::Azimuth;
        local_708.BoolParam = false;
        local_708.IntParam = 0;
        local_708.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
        local_708.FloatParam = (float)(local_2c8._s_0.X * dVar12);
        local_708.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_708.StringParam.Data.ArrayNum = 0;
        local_708.StringParam.Data.ArrayMax = 0;
        local_708.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_668 = Audio::SourceOrientationInterface::Inputs::Elevation;
        local_708.ArrayFloatParam.ArrayNum = 0;
        local_708.ArrayFloatParam.ArrayMax = 0;
        local_708.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_708.ArrayBoolParam.ArrayNum = 0;
        local_708.ArrayBoolParam.ArrayMax = 0;
        local_660 = (float)(local_2c8._s_0.Y * dVar12);
        local_708.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_708.ArrayIntParam.ArrayNum = 0;
        local_708.ArrayIntParam.ArrayMax = 0;
        local_708.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_708.ArrayObjectParam.ArrayNum = 0;
        local_708.ArrayObjectParam.ArrayMax = 0;
        local_708.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_708.ArrayStringParam.ArrayNum = 0;
        local_708.ArrayStringParam.ArrayMax = 0;
        local_708.ParamType = Float;
        local_708.TypeName.ComparisonIndex.Value = 0;
        local_708.TypeName.Number = 0;
        local_708.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_708.ObjectProxies.ArrayNum = 0;
        local_708.ObjectProxies.ArrayMax = 0;
        local_65c = 0;
        local_658 = 0;
        local_650 = 0;
        local_648 = (void *)0x0;
        local_640 = 0;
        local_638 = (void *)0x0;
        local_630 = 0;
        local_628 = (void *)0x0;
        local_620 = 0;
        local_618 = (void *)0x0;
        local_610 = 0;
        local_608 = (void *)0x0;
        local_600 = 0;
        local_5f8 = (FString *)0x0;
        local_5f0 = 0;
        local_5e8 = 3;
        local_5e4 = 0;
        local_5d8 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
        local_5d0 = 0;
        iVar22 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xa0,8,2,&local_7f8,(int *)local_7f0,(int *)(local_7f0 + 1));
        ConstructItems<FAudioParameter,FAudioParameter,int>
                  (local_7f8.Data + (longlong)iVar22 * 0xa0,&local_708,2);
        DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_5d8,(int)local_5d0);
        if (local_5d8 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
          FMemory::Free(local_5d8);
        }
        DestructItems<FString,int>(local_5f8,(int)local_5f0);
        if (local_5f8 != (FString *)0x0) {
          FMemory::Free(local_5f8);
        }
        if (local_608 != (void *)0x0) {
          FMemory::Free(local_608);
        }
        if (local_618 != (void *)0x0) {
          FMemory::Free(local_618);
        }
        if (local_628 != (void *)0x0) {
          FMemory::Free(local_628);
        }
        if (local_638 != (void *)0x0) {
          FMemory::Free(local_638);
        }
        if (local_648 != (void *)0x0) {
          FMemory::Free(local_648);
        }
        DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                  ((TSharedPtr<Audio::IProxyData,1> *)local_708.ObjectProxies.AllocatorInstance.Data
                   ,local_708.ObjectProxies.ArrayNum);
        if ((TSharedPtr<Audio::IProxyData,1> *)local_708.ObjectProxies.AllocatorInstance.Data !=
            (TSharedPtr<Audio::IProxyData,1> *)0x0) {
          FMemory::Free(local_708.ObjectProxies.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_708.ArrayStringParam.AllocatorInstance.Data,
                   local_708.ArrayStringParam.ArrayNum);
        if (local_708.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.ArrayStringParam.AllocatorInstance.Data);
        }
        if (local_708.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.ArrayObjectParam.AllocatorInstance.Data);
        }
        if (local_708.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.ArrayIntParam.AllocatorInstance.Data);
        }
        if (local_708.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.ArrayBoolParam.AllocatorInstance.Data);
        }
        if (local_708.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.ArrayFloatParam.AllocatorInstance.Data);
        }
        if (local_708.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.StringParam.Data.AllocatorInstance.Data);
        }
      }
      if (bVar18 != 0) {
        local_278.Z = *(double *)(pFVar4 + lVar25 + 0x10);
        local_278.W = *(double *)(pFVar4 + lVar25 + 0x10 + 8);
        local_278.X = *(double *)(pFVar4 + lVar25);
        local_278.Y = *(double *)(pFVar4 + lVar25 + 8);
        local_1a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_1a8._s_0.Y = _UNK_150689518;
        local_1a8._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_278,local_110,(TVector<double> *)&local_1a8._s_0);
        FMath::GetAzimuthAndElevation
                  ((TVector2<double> *)&local_2b8._s_0,local_110,
                   &UE::Math::TVector<double>::ForwardVector,&UE::Math::TVector<double>::RightVector
                   ,&UE::Math::TVector<double>::UpVector);
        local_5c8.ParamName = Audio::ListenerOrientationInterface::Inputs::Azimuth;
        local_528 = Audio::ListenerOrientationInterface::Inputs::Elevation;
        local_5c8.FloatParam = (float)(local_2b8._s_0.X * dVar12);
        local_5c8.BoolParam = false;
        local_5c8.IntParam = 0;
        local_5c8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
        local_5c8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c8.StringParam.Data.ArrayNum = 0;
        local_5c8.StringParam.Data.ArrayMax = 0;
        local_5c8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c8.ArrayFloatParam.ArrayNum = 0;
        local_5c8.ArrayFloatParam.ArrayMax = 0;
        local_5c8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c8.ArrayBoolParam.ArrayNum = 0;
        local_5c8.ArrayBoolParam.ArrayMax = 0;
        local_5c8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_520 = (float)(local_2b8._s_0.Y * dVar12);
        local_5c8.ArrayIntParam.ArrayNum = 0;
        local_5c8.ArrayIntParam.ArrayMax = 0;
        local_5c8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c8.ArrayObjectParam.ArrayNum = 0;
        local_5c8.ArrayObjectParam.ArrayMax = 0;
        local_5c8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c8.ArrayStringParam.ArrayNum = 0;
        local_5c8.ArrayStringParam.ArrayMax = 0;
        local_5c8.ParamType = Float;
        local_5c8.TypeName.ComparisonIndex.Value = 0;
        local_5c8.TypeName.Number = 0;
        local_5c8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c8.ObjectProxies.ArrayNum = 0;
        local_5c8.ObjectProxies.ArrayMax = 0;
        local_51c = 0;
        local_518 = 0;
        local_510 = 0;
        local_508 = (void *)0x0;
        local_500 = 0;
        local_4f8 = (void *)0x0;
        local_4f0 = 0;
        local_4e8 = (void *)0x0;
        local_4e0 = 0;
        local_4d8 = (void *)0x0;
        local_4d0 = 0;
        local_4c8 = (void *)0x0;
        local_4c0 = 0;
        local_4b8 = (FString *)0x0;
        local_4b0 = 0;
        local_4a8 = 3;
        local_4a4 = 0;
        local_498 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
        local_490 = 0;
        iVar22 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xa0,8,2,&local_7f8,(int *)local_7f0,(int *)(local_7f0 + 1));
        ConstructItems<FAudioParameter,FAudioParameter,int>
                  (local_7f8.Data + (longlong)iVar22 * 0xa0,&local_5c8,2);
        DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_498,(int)local_490);
        if (local_498 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
          FMemory::Free(local_498);
        }
        DestructItems<FString,int>(local_4b8,(int)local_4b0);
        if (local_4b8 != (FString *)0x0) {
          FMemory::Free(local_4b8);
        }
        if (local_4c8 != (void *)0x0) {
          FMemory::Free(local_4c8);
        }
        if (local_4d8 != (void *)0x0) {
          FMemory::Free(local_4d8);
        }
        if (local_4e8 != (void *)0x0) {
          FMemory::Free(local_4e8);
        }
        if (local_4f8 != (void *)0x0) {
          FMemory::Free(local_4f8);
        }
        if (local_508 != (void *)0x0) {
          FMemory::Free(local_508);
        }
        DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                  ((TSharedPtr<Audio::IProxyData,1> *)local_5c8.ObjectProxies.AllocatorInstance.Data
                   ,local_5c8.ObjectProxies.ArrayNum);
        if ((TSharedPtr<Audio::IProxyData,1> *)local_5c8.ObjectProxies.AllocatorInstance.Data !=
            (TSharedPtr<Audio::IProxyData,1> *)0x0) {
          FMemory::Free(local_5c8.ObjectProxies.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_5c8.ArrayStringParam.AllocatorInstance.Data,
                   local_5c8.ArrayStringParam.ArrayNum);
        if (local_5c8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.ArrayStringParam.AllocatorInstance.Data);
        }
        if (local_5c8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.ArrayObjectParam.AllocatorInstance.Data);
        }
        if (local_5c8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.ArrayIntParam.AllocatorInstance.Data);
        }
        if (local_5c8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.ArrayBoolParam.AllocatorInstance.Data);
        }
        if (local_5c8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.ArrayFloatParam.AllocatorInstance.Data);
        }
        if (local_5c8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.StringParam.Data.AllocatorInstance.Data);
        }
      }
      pIVar24 = TSharedPtr<Audio::IParameterTransmitter,1>::operator->(&this->InstanceTransmitter);
      (**(code **)((longlong)*pIVar24 + 0x40))(pIVar24,&local_7f8);
      DestructItems<FAudioParameter,int>((FAudioParameter *)local_7f8.Data,local_7f0[0]);
      if ((FAudioParameter *)local_7f8.Data != (FAudioParameter *)0x0) {
        FMemory::Free(local_7f8.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_348.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_338.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_328.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_318.SharedReferenceCount.ReferenceController);
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateStoppingSources @ 14735d8d0

bool __thiscall FActiveSound::UpdateStoppingSources(FActiveSound *this,ulong64 param_1,bool param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  FSoundSource *pFVar11;
  longlong lVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FWaveInstance *local_a8;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  int local_6c;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (!(bool)this->bIsStopping) {
    return true;
  }
  uStack_94 = 1;
  puVar1 = &(this->WaveInstances).field_0x10;
  this->field_0x1a4 = this->field_0x1a4 & 0x7f;
  local_a0 = &this->WaveInstances;
  local_b8.Data = (FScriptContainerElement *)0x0;
  iStack_98 = 0;
  local_b0 = 0;
  local_80 = 0;
  iVar10 = *(int *)&(this->WaveInstances).field_0x28;
  iStack_84 = iStack_98;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->WaveInstances).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    local_80 = 0;
    iStack_98 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14735d9cd;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_94 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_70 = (int)lVar12;
    iStack_84 = local_80 + -1 + local_70;
    if (iVar10 < iStack_84) {
      iStack_84 = iVar10;
    }
  }
LAB_14735d9cd:
  uVar15 = *(uint *)&(this->WaveInstances).field_0x28;
  iStack_78 = *(int *)&(this->WaveInstances).field_0x8 - *(int *)&(this->WaveInstances).field_0x34;
  uVar18 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  uStack_88 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_68 = local_a0;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar4 = *(uint *)&(this->WaveInstances).field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(this->WaveInstances).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14735dacf;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_6c = (int)lVar12;
    uVar15 = local_6c + -1 + uVar18;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14735dacf:
  do {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == &this->WaveInstances)) {
      iVar10 = (int)local_b0;
      pFVar2 = local_b8.Data + (longlong)(int)local_b0 * 8;
      FVar14.Data = local_b8.Data;
      while( true ) {
        if ((int)local_b0 != iVar10) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FWaveInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar14.Data == pFVar2) break;
        RemoveWaveInstance(this,(*(FWaveInstance **)FVar14.Data)->WaveInstanceHash);
        FVar14.Data = FVar14.Data + 8;
      }
      if ((bool)this->bIsStopping) {
        bVar7 = false;
      }
      else {
        if ((*(int *)&(this->WaveInstances).field_0x8 != *(int *)&(this->WaveInstances).field_0x34)
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("WaveInstances.Num() == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                                  ,0x591,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        bVar7 = true;
      }
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      return bVar7;
    }
    local_a8 = *(FWaveInstance **)
                (*(longlong *)pTVar6 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (local_a8 != (FWaveInstance *)0x0) {
      pFVar11 = FAudioDevice::GetSoundSource(this->AudioDevice,local_a8);
      if (pFVar11 != (FSoundSource *)0x0) {
        cVar9 = (**(code **)(pFVar11->_padding_ + 0x50))(pFVar11);
        if ((cVar9 == '\0') && (!param_2)) {
          pFVar11->LastUpdate = (int)param_1;
          pFVar11->LastHeardUpdate = (int)param_1;
          this->bIsStopping = '\x01';
          goto LAB_14735dc0c;
        }
        (**(code **)(pFVar11->_padding_ + 0x40))(pFVar11);
      }
      if (((local_b8.Data <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < local_b8.Data + (longlong)local_b0._4_4_ * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar10 = (int)local_b0;
      if ((int)local_b0 == local_b0._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_b8,(int *)((longlong)&local_b0 + 4));
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar10 + 1);
      *(FWaveInstance **)(local_b8.Data + (longlong)iVar10 * 8) = local_a8;
    }
LAB_14735dc0c:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// UpdateWaveInstances @ 14735dcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FActiveSound::UpdateWaveInstances
          (FActiveSound *this,TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_1,
          float param_2)

{
  longlong *plVar1;
  int *piVar2;
  FVolumeFader *this_00;
  TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar3;
  USoundBase *pUVar4;
  FQuartzQuantizedRequestData *pFVar5;
  IQuartzQuantizedCommand *pIVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  ISourceBufferListener *pIVar9;
  FWaveInstance *this_01;
  code *pcVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  FColor FVar19;
  int iVar20;
  FQuartzQuantizedRequestData *pFVar21;
  undefined8 *puVar22;
  undefined4 extraout_var;
  uint uVar23;
  ForAnyElementType FVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *pTVar28;
  undefined8 *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  undefined1 auStackY_5a8 [32];
  undefined1 local_568;
  undefined1 local_567;
  undefined1 local_566;
  undefined1 local_565;
  undefined1 local_564 [4];
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> local_560;
  undefined4 local_550 [2];
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_548;
  FScriptContainerElement *local_540;
  TPairInitializer<unsigned_int_&&,float_const_&> local_538;
  float fStack_528;
  float fStack_524;
  int local_520;
  undefined4 uStack_51c;
  FAudioVolumeSettings local_518;
  undefined4 *local_498;
  float *local_490;
  longlong local_488;
  undefined1 local_480 [8];
  TReferenceControllerBase<1> *local_478;
  undefined8 local_470;
  TReferenceControllerBase<1> *pTStack_468;
  TVector<double>_u_0 local_460;
  code *local_448 [2];
  undefined **local_438;
  ulong64 local_430;
  undefined8 local_420;
  double local_418;
  double dStack_410;
  double local_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  code *local_3c8 [5];
  undefined8 *local_3a0;
  code *local_398 [5];
  undefined8 *local_370;
  undefined1 local_368 [416];
  void *local_1c8;
  undefined4 local_1c0;
  void *local_1b8;
  ForAnyElementType local_1a0;
  TObjectPtr<USoundEffectSourcePresetChain>_u_0 local_150;
  float local_148;
  float local_144;
  uint local_130;
  byte local_12c;
  TSet<TTuple<unsigned_int,float>,TDefaultMapHashableKeyFuncs<unsigned_int,float,0>,FDefaultSetAllocator>
  local_128;
  undefined1 local_d8 [8];
  TSet<TTuple<unsigned_int,float>,TDefaultMapHashableKeyFuncs<unsigned_int,float,0>,FDefaultSetAllocator>
  local_d0;
  ulonglong local_78;
  USoundClass *pUVar24;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  this->bIsPlayingAudio = '\0';
  this->MinCurrentPitch = 1.0;
  if (this->AudioDevice == (FAudioDevice *)0x0) {
    return;
  }
  pUVar4 = (this->Sound).field0_0x0.DebugPtr;
  if (pUVar4 == (USoundBase *)0x0) {
    return;
  }
  local_548 = param_1;
  cVar15 = (**(code **)(pUVar4->_padding_ + 0x2b0))();
  if (cVar15 == '\0') {
    return;
  }
  (this->FocusData).PriorityHighest = 1.0;
  FSoundParseParameters::FSoundParseParameters((FSoundParseParameters *)local_368);
  local_368._32_8_ = (this->Transform).Rotation.XY.m128d_f64[0];
  local_368._40_8_ = (this->Transform).Rotation.XY.m128d_f64[1];
  this_00 = &this->ComponentVolumeFader;
  local_368._48_8_ = (this->Transform).Rotation.ZW.m128d_f64[0];
  local_368._56_8_ = (this->Transform).Rotation.ZW.m128d_f64[1];
  local_368._64_8_ = (this->Transform).Translation.XY.m128d_f64[0];
  local_368._72_8_ = (this->Transform).Translation.XY.m128d_f64[1];
  local_368._80_8_ = (this->Transform).Translation.ZW.m128d_f64[0];
  local_368._88_8_ = (this->Transform).Translation.ZW.m128d_f64[1];
  local_368._96_8_ = (this->Transform).Scale3D.XY.m128d_f64[0];
  local_368._104_8_ = (this->Transform).Scale3D.XY.m128d_f64[1];
  local_368._112_8_ = (this->Transform).Scale3D.ZW.m128d_f64[0];
  local_368._120_8_ = (this->Transform).Scale3D.ZW.m128d_f64[1];
  local_368._188_4_ = this->RequestedStartTime;
  fVar30 = Audio::FVolumeFader::GetFadeDuration(this_00);
  pUVar24 = (USoundClass *)0x0;
  if (fVar30 < this->PlaybackTimeNonVirtualized || fVar30 == this->PlaybackTimeNonVirtualized) {
    Audio::FVolumeFader::Update(this_00,param_2);
  }
  else {
    bVar16 = Audio::FVolumeFader::IsFadingIn(this_00);
    Audio::FVolumeFader::Update(this_00,param_2);
    bVar17 = Audio::FVolumeFader::IsFading(this_00);
    if ((bVar16) && (!bVar17)) {
      local_420 = 0;
      local_438 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::`11'::<lambda_1>,1,0>
                   ::_vftable_;
      local_430 = this->AudioComponentID;
      local_448[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FActiveSound::UpdateWaveInstances'::__l11::<lambda_1>,void>
                     ::Call;
      FAudioThread::RunCommandOnGameThread
                ((TUniqueFunction<void___cdecl(void)> *)local_448,(TStatId)0x154f11430);
    }
  }
  fVar30 = this->VolumeMultiplier;
  fVar31 = Audio::FVolumeFader::GetVolume(this_00);
  local_368._164_4_ = GetTotalConcurrencyVolumeScale(this);
  pUVar4 = (this->Sound).field0_0x0.DebugPtr;
  local_368._164_4_ = (float)local_368._164_4_ * fVar31 * fVar30;
  if (pUVar4 != (USoundBase *)0x0) {
    fVar30 = (float)(**(code **)(pUVar4->_padding_ + 0x2e8))();
    local_368._164_4_ = fVar30 * (float)local_368._164_4_;
  }
  fVar30 = this->PitchMultiplier;
  local_368._180_4_ = this->Priority;
  fVar31 = (float)(**(code **)(((this->Sound).field0_0x0.DebugPtr)->_padding_ + 0x2f0))();
  local_12c = this->bEnableLowPassFilter << 2 | local_12c & 0xfb;
  local_368._16_8_ = (this->SoundClassOverride).field0_0x0.DebugPtr;
  local_368._184_4_ = (float)local_368._184_4_ * fVar31 * fVar30;
  local_12c = (this->field_0x1a4 << 2 ^ local_12c) & 8 ^ local_12c;
  local_148 = this->LowPassFilterFrequency;
  local_144 = this->HighPassFilterFrequency;
  if (((USoundClass *)local_368._16_8_ == (USoundClass *)0x0) &&
     (pUVar4 = (this->Sound).field0_0x0.DebugPtr, local_368._16_8_ = pUVar24,
     pUVar4 != (USoundBase *)0x0)) {
    local_368._16_8_ = (**(code **)(pUVar4->_padding_ + 0x330))();
  }
  pUVar4 = (this->Sound).field0_0x0.DebugPtr;
  local_12c = (byte)this->field_0x1a1 >> 1 & 0x20 | local_12c & 0xdf;
  local_368._224_8_ = pUVar24;
  if (pUVar4 != (USoundBase *)0x0) {
    local_368._224_8_ = (**(code **)(pUVar4->_padding_ + 0x338))();
  }
  GetSoundSubmixSends(this,(TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *)
                           (local_368 + 0xe8));
  pTVar28 = (TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *)(local_368 + 0x108);
  pUVar4 = (this->Sound).field0_0x0.DebugPtr;
  local_130 = pUVar4->bEnableBusSends | local_130 & 0xfffffffe;
  local_130 = ((byte)pUVar4->field_0x40 >> 2 ^ local_130) & 2 ^ local_130;
  local_130 = ((byte)pUVar4->field_0x40 >> 2 ^ local_130) & 4 ^ local_130;
  do {
    GetBusSends(this,(EBusSendType)pUVar24,pTVar28);
    iVar13 = GatherInteriorDataFromIActiveSoundUpdateCVar;
    iVar20 = GatherInteriorDataFromAudioVolumesCVar;
    uVar23 = (int)pUVar24 + 1;
    pUVar24 = (USoundClass *)(ulonglong)uVar23;
    pTVar28 = pTVar28 + 1;
  } while ((int)uVar23 < 2);
  local_150 = (TObjectPtr<USoundEffectSourcePresetChain>_u_0)
              (this->SourceEffectChain).field0_0x0.DebugPtr;
  if (local_150.DebugPtr == (USoundEffectSourcePresetChain *)0x0) {
    local_150 = (((this->Sound).field0_0x0.DebugPtr)->SourceEffectChain).field0_0x0;
  }
  fVar30 = 0.0;
  local_368._168_4_ = this->EnvelopeFollowerAttackTime;
  local_368._172_4_ = this->EnvelopeFollowerReleaseTime;
  if (this->bApplyInteriorVolumes != '\0') {
    if (this->bGotInteriorSettings == '\0') {
LAB_14735e117:
      bVar16 = GatherInteriorDataFromIActiveSoundUpdateCVar != 0;
      if (GatherInteriorDataFromAudioVolumesCVar != 0) {
        local_518.AudioVolumeID = 0xffffffff;
        local_518.ReverbSettings.ReverbEffect.field0_0x0.DebugPtr =
             (TObjectPtr<UReverbEffect>_u_0)0x0;
        local_518.ReverbSettings.ReverbPluginEffect.field0_0x0.DebugPtr =
             (TObjectPtr<USoundEffectSubmixPreset>_u_0)0x0;
        local_518.Priority = 0.0;
        local_518.ReverbSettings.bApplyReverb = true;
        local_518.ReverbSettings.Volume = 0.5;
        local_518.ReverbSettings.FadeTime = 2.0;
        FInteriorSettings::FInteriorSettings(&local_518.InteriorSettings);
        local_460._s_0.X = (double)local_368._64_8_;
        local_460._s_0.Y = (double)local_368._72_8_;
        local_518.SubmixSendSettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_460._s_0.Z = (double)local_368._80_8_;
        local_518.SubmixSendSettings.ArrayNum = 0;
        local_518.SubmixSendSettings.ArrayMax = 0;
        local_518.SubmixOverrideSettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_518.SubmixOverrideSettings.ArrayNum = 0;
        local_518.SubmixOverrideSettings.ArrayMax = 0;
        local_518.bChanged = false;
        FAudioDevice::GetAudioVolumeSettings
                  (this->AudioDevice,this->WorldID,(TVector<double> *)&local_460._s_0,&local_518);
        pTVar3 = &this->AudioVolumeSubmixSendSettings;
        (this->InteriorSettings).bIsWorldSettings = local_518.InteriorSettings.bIsWorldSettings;
        *(undefined3 *)&(this->InteriorSettings).field_0x1 = local_518.InteriorSettings._1_3_;
        (this->InteriorSettings).ExteriorVolume = local_518.InteriorSettings.ExteriorVolume;
        (this->InteriorSettings).ExteriorTime = local_518.InteriorSettings.ExteriorTime;
        (this->InteriorSettings).ExteriorLPF = local_518.InteriorSettings.ExteriorLPF;
        (this->InteriorSettings).ExteriorLPFTime = local_518.InteriorSettings.ExteriorLPFTime;
        (this->InteriorSettings).InteriorVolume = local_518.InteriorSettings.InteriorVolume;
        (this->InteriorSettings).InteriorTime = local_518.InteriorSettings.InteriorTime;
        (this->InteriorSettings).InteriorLPF = local_518.InteriorSettings.InteriorLPF;
        (this->InteriorSettings).InteriorLPFTime = local_518.InteriorSettings.InteriorLPFTime;
        if (pTVar3 != &local_518.SubmixSendSettings) {
          DestructItems<FAudioVolumeSubmixSendSettings,int>
                    ((FAudioVolumeSubmixSendSettings *)(pTVar3->AllocatorInstance).Data,
                     (this->AudioVolumeSubmixSendSettings).ArrayNum);
          FVar25.Data = local_518.SubmixSendSettings.AllocatorInstance.Data;
          iVar14 = local_518.SubmixSendSettings.ArrayNum;
          piVar2 = &(this->AudioVolumeSubmixSendSettings).ArrayMax;
          (this->AudioVolumeSubmixSendSettings).ArrayNum = local_518.SubmixSendSettings.ArrayNum;
          if ((local_518.SubmixSendSettings.ArrayNum == 0) && (*piVar2 == 0)) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,local_518.SubmixSendSettings.ArrayNum,*piVar2,
                       &pTVar3->AllocatorInstance,local_518.SubmixSendSettings.ArrayNum,piVar2);
            ConstructItems<FAudioVolumeSubmixSendSettings,FAudioVolumeSubmixSendSettings,int>
                      ((pTVar3->AllocatorInstance).Data,
                       (FAudioVolumeSubmixSendSettings *)FVar25.Data,iVar14);
          }
        }
        this->AudioVolumeID = local_518.AudioVolumeID;
        DestructItems<FAudioVolumeSubmixOverrideSettings,int>
                  ((FAudioVolumeSubmixOverrideSettings *)
                   local_518.SubmixOverrideSettings.AllocatorInstance.Data,
                   local_518.SubmixOverrideSettings.ArrayNum);
        if ((FAudioVolumeSubmixOverrideSettings *)
            local_518.SubmixOverrideSettings.AllocatorInstance.Data !=
            (FAudioVolumeSubmixOverrideSettings *)0x0) {
          FMemory::Free(local_518.SubmixOverrideSettings.AllocatorInstance.Data);
        }
        DestructItems<FAudioVolumeSubmixSendSettings,int>
                  ((FAudioVolumeSubmixSendSettings *)
                   local_518.SubmixSendSettings.AllocatorInstance.Data,
                   local_518.SubmixSendSettings.ArrayNum);
        if ((FAudioVolumeSubmixSendSettings *)local_518.SubmixSendSettings.AllocatorInstance.Data !=
            (FAudioVolumeSubmixSendSettings *)0x0) {
          FMemory::Free(local_518.SubmixSendSettings.AllocatorInstance.Data);
        }
      }
      if (bVar16) {
        FAudioDevice::GatherInteriorData(this->AudioDevice,this,(FSoundParseParameters *)local_368);
      }
      this->bGotInteriorSettings = '\x01';
    }
    else {
      dVar33 = (double)local_368._64_8_ - (this->LastLocation).field0_0x0._s_0.X;
      local_418 = (double)local_368._64_8_;
      dStack_410 = (double)local_368._72_8_;
      dVar12 = (double)local_368._72_8_ - (this->LastLocation).field0_0x0._s_0.Y;
      local_408 = (double)local_368._80_8_;
      dVar11 = (double)local_368._80_8_ - (this->LastLocation).field0_0x0._s_0.Z;
      if (__real_3f1a36e2e0000000 < dVar12 * dVar12 + dVar33 * dVar33 + dVar11 * dVar11)
      goto LAB_14735e117;
    }
    if (iVar20 != 0) {
      HandleInteriorVolumes(this,(FSoundParseParameters *)local_368);
    }
    if (iVar13 != 0) {
      FAudioDevice::ApplyInteriorSettings(this->AudioDevice,this,(FSoundParseParameters *)local_368)
      ;
    }
  }
  if (0.0 < param_2) {
    local_368._144_8_ = __real_3ff0000000000000 / (double)param_2;
    local_3f0 = (double)local_368._80_8_;
    local_368._136_8_ =
         ((double)local_368._72_8_ - (this->LastLocation).field0_0x0._s_0.Y) *
         (double)local_368._144_8_;
    local_400 = (double)local_368._64_8_;
    dStack_3f8 = (double)local_368._72_8_;
    local_368._128_8_ =
         ((double)local_368._64_8_ - (this->LastLocation).field0_0x0._s_0.X) *
         (double)local_368._144_8_;
    local_3e8 = (double)local_368._64_8_;
    dStack_3e0 = (double)local_368._72_8_;
    dVar11 = (this->LastLocation).field0_0x0._s_0.Z;
    (this->LastLocation).field0_0x0._s_0.X = (double)local_368._64_8_;
    (this->LastLocation).field0_0x0._s_0.Y = (double)local_368._72_8_;
    local_3d8 = (double)local_368._80_8_;
    (this->LastLocation).field0_0x0._s_0.Z = (double)local_368._80_8_;
    local_368._144_8_ = ((double)local_368._80_8_ - dVar11) * (double)local_368._144_8_;
  }
  bVar18 = this->field_0x1a1 | 0x20;
  local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_560.ArrayNum = 0;
  local_560.ArrayMax = 0;
  this->bFinished = '\x01';
  if (this->FadeOut != None) {
    bVar16 = Audio::FVolumeFader::IsActive(&this->ComponentVolumeFader);
    if (!bVar16) goto LAB_14735e445;
    bVar18 = this->field_0x1a1;
  }
  if (((bVar18 & 8) == 0) && (bAudioLinkSpatializeAllSoundsCVar == 0)) {
    local_368[0x128] = Manual;
    if ((USoundClass *)local_368._16_8_ == (USoundClass *)0x0) {
      local_368._336_4_ = this->AudioDevice->DefaultReverbSendLevel;
    }
    else {
      local_368._336_4_ =
           ((FSoundClassProperties *)(local_368._16_8_ + 0x30))->Default2DReverbSendAmount;
    }
  }
  else {
    UpdateAttenuation(this,param_2,(FSoundParseParameters *)local_368,this->ClosestListenerIndex,
                      (FSoundAttenuationSettings *)0x0);
  }
  pUVar4 = (this->Sound).field0_0x0.DebugPtr;
  (**(code **)(pUVar4->_padding_ + 0x328))(pUVar4,this->AudioDevice,0,this);
  if ((float)local_368._184_4_ < this->MinCurrentPitch) {
    this->MinCurrentPitch = (float)local_368._184_4_;
  }
LAB_14735e445:
  if (this->bFinished == '\0') {
    iVar20 = local_560.ArrayNum;
    if (0 < local_560.ArrayNum) {
      if ((bool)this->bIsStopping) {
        pFVar26 = local_560.AllocatorInstance.Data + (longlong)local_560.ArrayNum * 8;
        FVar25.Data = local_560.AllocatorInstance.Data;
        while( true ) {
          if (local_560.ArrayNum != iVar20) {
            local_568 = 0;
            `TCheckedPointerIterator<FWaveInstance_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_568);
          }
          if (FVar25.Data == pFVar26) break;
          *(uint *)(*(longlong *)FVar25.Data + 0xcc) =
               *(uint *)(*(longlong *)FVar25.Data + 0xcc) | 0x100000;
          FVar25.Data = FVar25.Data + 8;
        }
      }
      iVar20 = local_560.ArrayNum;
      pFVar26 = local_560.AllocatorInstance.Data + (longlong)local_560.ArrayNum * 8;
      FVar25.Data = local_560.AllocatorInstance.Data;
      local_540 = pFVar26;
      do {
        if (local_560.ArrayNum != iVar20) {
          local_567 = 0;
          `TCheckedPointerIterator<FWaveInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_567);
        }
        if (FVar25.Data == pFVar26) {
          if (0.0 < this->VolumeConcurrency || this->VolumeConcurrency == 0.0) {
            iVar20 = local_560.ArrayNum;
            this->VolumeConcurrency = 0.0;
            pFVar26 = local_560.AllocatorInstance.Data + (longlong)local_560.ArrayNum * 8;
            FVar25.Data = local_560.AllocatorInstance.Data;
            while( true ) {
              if (local_560.ArrayNum != iVar20) {
                local_566 = 0;
                `TCheckedPointerIterator<FWaveInstance_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_566);
              }
              if (FVar25.Data == pFVar26) break;
              this_01 = *(FWaveInstance **)FVar25.Data;
              if ((this_01 == (FWaveInstance *)0x0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("WaveInstance",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                                      ,0x486,L""), bVar16)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              fVar31 = FWaveInstance::GetVolumeWithDistanceAndOcclusionAttenuation(this_01);
              fVar32 = FWaveInstance::GetDynamicVolume(this_01);
              fVar31 = fVar31 * fVar32;
              if (this->VolumeConcurrency <= fVar31 && fVar31 != this->VolumeConcurrency) {
                this->VolumeConcurrency = fVar31;
              }
              FVar25.Data = FVar25.Data + 8;
            }
            if ((IncludeModulationInConcurrencyEvaluationCVar == 2) ||
               ((IncludeModulationInConcurrencyEvaluationCVar == 1 &&
                ((pUVar4 = (this->Sound).field0_0x0.DebugPtr, pUVar4 == (USoundBase *)0x0 ||
                 (cVar15 = (**(code **)(pUVar4->_padding_ + 0x310))(), cVar15 == '\0')))))) {
              fVar31 = this->MaxSourceModulationValue;
              this->VolumeConcurrency =
                   (float)((uint)fVar31 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                   this->VolumeConcurrency;
              if (0.0 <= fVar31) {
                this->MaxSourceModulationValue =
                     (float)((uint)fVar31 ^ __xmm_80000000800000008000000080000000);
              }
            }
            fVar31 = GetTotalConcurrencyVolumeScale(this);
            if (fVar31 <= __real_322bcc77) {
              this->VolumeConcurrency = 0.0;
            }
            else {
              this->VolumeConcurrency = this->VolumeConcurrency / fVar31;
            }
          }
          param_1 = local_548;
          if (this->AudioComponentID != 0) {
            if (this->bUpdateMultiEnvelopeValue != '\0') {
              iVar20 = local_560.ArrayNum;
              pFVar26 = local_560.AllocatorInstance.Data + (longlong)local_560.ArrayNum * 8;
              FVar25.Data = local_560.AllocatorInstance.Data;
              fVar31 = 0.0;
              while( true ) {
                if (local_560.ArrayNum != iVar20) {
                  local_565 = 0;
                  `TCheckedPointerIterator<FWaveInstance_*,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_565);
                }
                if (FVar25.Data == pFVar26) break;
                lVar27 = *(longlong *)FVar25.Data;
                FVar25.Data = FVar25.Data + 8;
                fVar32 = *(float *)(lVar27 + 0xa0);
                fVar30 = fVar30 + fVar32;
                if (fVar31 <= fVar32) {
                  fVar31 = fVar32;
                }
              }
              local_538.Value = (float *)this->AudioComponentID;
              local_520 = iVar20;
              local_3c8[0] = (code *)0x0;
              local_3a0 = FMemory::Malloc(0x20,8);
              *local_3a0 = &UE::Core::Private::Function::
                            TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::`114'::<lambda_2>,1,1>
                            ::_vftable_;
              *(undefined4 *)(local_3a0 + 1) = local_538.Value._0_4_;
              *(undefined4 *)((longlong)local_3a0 + 0xc) = local_538.Value._4_4_;
              *(float *)(local_3a0 + 2) = fVar30 / (float)iVar20;
              *(float *)((longlong)local_3a0 + 0x14) = fVar31;
              local_3a0[3] = CONCAT44(uStack_51c,local_520);
              if (local_3a0 + 1 != (undefined8 *)0x0) {
                local_3c8[0] = UE::Core::Private::Function::
                               TFunctionRefCaller<`FActiveSound::UpdateWaveInstances'::__l114::<lambda_2>,void>
                               ::Call;
              }
              fStack_528 = fVar30 / (float)iVar20;
              fStack_524 = fVar31;
              FAudioThread::RunCommandOnGameThread
                        ((TUniqueFunction<void___cdecl(void)> *)local_3c8,(TStatId)0x154f11430);
            }
            param_1 = local_548;
            if (this->bUpdatePlaybackTime != '\0') {
              iVar20 = local_560.ArrayNum;
              local_128.Elements._0_8_ = 0;
              local_128.Elements._8_8_ = 0;
              local_128.Elements._32_8_ = 0;
              pFVar26 = local_560.AllocatorInstance.Data + (longlong)local_560.ArrayNum * 8;
              local_128.Elements._40_4_ = 0;
              local_128.Elements._44_4_ = 0x80;
              local_128.Elements._48_4_ = 0xffffffff;
              local_128.Elements._52_4_ = 0;
              local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
              local_128.HashSize = 0;
              FVar25.Data = local_560.AllocatorInstance.Data;
              while( true ) {
                if (local_560.ArrayNum != iVar20) {
                  local_564[0] = 0;
                  `TCheckedPointerIterator<FWaveInstance_*,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_564);
                }
                if (FVar25.Data == pFVar26) break;
                plVar1 = *(longlong **)FVar25.Data;
                local_490 = (float *)(plVar1 + 0x2b);
                fVar30 = param_2 * *(float *)(plVar1 + 0x23) + *local_490;
                *local_490 = fVar30;
                if ((*(int *)((longlong)plVar1 + 0xc4) != 0) &&
                   (*(float *)(*plVar1 + 0x10c) <= fVar30 && fVar30 != *(float *)(*plVar1 + 0x10c)))
                {
                  *local_490 = 0.0;
                }
                local_550[0] = *(undefined4 *)(*plVar1 + 0xc);
                local_498 = local_550;
                TSet<TTuple<unsigned_int,float>,TDefaultMapHashableKeyFuncs<unsigned_int,float,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<unsigned_int_&&,float_const_&>_>
                          (&local_128,&local_538,(bool *)&local_498);
                FVar25.Data = FVar25.Data + 8;
              }
              local_d8 = (undefined1  [8])this->AudioComponentID;
              local_d0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
              local_d0.Elements._48_8_ = _UNK_150631d98;
              local_d0.Elements._0_8_ = 0;
              local_d0.Elements._8_8_ = 0;
              local_d0.Elements._32_8_ = 0;
              local_d0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
              local_d0.HashSize = 0;
              TSet<TTuple<unsigned_int,float>,TDefaultMapHashableKeyFuncs<unsigned_int,float,0>,FDefaultSetAllocator>
              ::operator=((TSet<TTuple<unsigned_int,float>,TDefaultMapHashableKeyFuncs<unsigned_int,float,0>,FDefaultSetAllocator>
                           *)(local_d8 + 8),&local_128);
              local_398[0] = (code *)0x0;
              local_370 = FMemory::Malloc(0x60,8);
              puVar22 = local_370 + 1;
              *local_370 = &UE::Core::Private::Function::
                            TFunction_OwnedObject<`FActiveSound::UpdateWaveInstances'::`121'::<lambda_3>,1,1>
                            ::_vftable_;
              `FActiveSound::UpdateWaveInstances'::__l121::<lambda_3>::<lambda_3>
                        (puVar22,(<lambda_3> *)local_d8);
              if (puVar22 != (undefined8 *)0x0) {
                local_398[0] = UE::Core::Private::Function::
                               TFunctionRefCaller<`FActiveSound::UpdateWaveInstances'::__l121::<lambda_3>,void>
                               ::Call;
              }
              FAudioThread::RunCommandOnGameThread
                        ((TUniqueFunction<void___cdecl(void)> *)local_398,(TStatId)0x154f11430);
              local_d0.HashSize = 0;
              if (local_d0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_d0.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)(local_d8 + 8));
              local_128.HashSize = 0;
              if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_128.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_128.Elements);
              param_1 = local_548;
            }
          }
          break;
        }
        lVar27 = *(longlong *)FVar25.Data;
        if ((lVar27 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("WaveInstance",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActiveSound.cpp"
                                ,0x46e,L""), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        plVar1 = (longlong *)(lVar27 + 0x68);
        if ((*(longlong *)(lVar27 + 0x68) == 0) &&
           (pFVar26 = local_540,
           (this->QuantizedRequestData).QuantizedCommandPtr.Object != (IQuartzQuantizedCommand *)0x0
           )) {
          pFVar21 = ::operator_new(0x58);
          if (pFVar21 == (FQuartzQuantizedRequestData *)0x0) {
            pFVar21 = (FQuartzQuantizedRequestData *)0x0;
          }
          else {
            pFVar21 = Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData
                                (pFVar21,&this->QuantizedRequestData);
          }
          if (plVar1 == &local_488) {
            if (pFVar21 != (FQuartzQuantizedRequestData *)0x0) {
              DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                        ((FQuartzGameThreadSubscriber *)
                         (pFVar21->GameThreadSubscribers).AllocatorInstance.Data,
                         (pFVar21->GameThreadSubscribers).ArrayNum);
              pFVar26 = (pFVar21->GameThreadSubscribers).AllocatorInstance.Data;
              if (pFVar26 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar26);
              }
              DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                        ((FQuartzGameThreadSubscriber *)
                         (pFVar21->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.
                         Data,(pFVar21->QuantizationBoundary).GameThreadSubscribers.ArrayNum);
              pFVar26 = (pFVar21->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data
              ;
              if (pFVar26 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar26);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pFVar21->QuantizedCommandPtr).SharedReferenceCount.ReferenceController);
              goto LAB_14735e5ef;
            }
          }
          else {
            pFVar5 = (FQuartzQuantizedRequestData *)*plVar1;
            *plVar1 = (longlong)pFVar21;
            if (pFVar5 != (FQuartzQuantizedRequestData *)0x0) {
              DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                        ((FQuartzGameThreadSubscriber *)
                         (pFVar5->GameThreadSubscribers).AllocatorInstance.Data,
                         (pFVar5->GameThreadSubscribers).ArrayNum);
              pFVar26 = (pFVar5->GameThreadSubscribers).AllocatorInstance.Data;
              if (pFVar26 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar26);
              }
              DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                        ((FQuartzGameThreadSubscriber *)
                         (pFVar5->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data
                         ,(pFVar5->QuantizationBoundary).GameThreadSubscribers.ArrayNum);
              pFVar26 = (pFVar5->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data;
              if (pFVar26 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar26);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pFVar5->QuantizedCommandPtr).SharedReferenceCount.ReferenceController);
              pFVar21 = pFVar5;
LAB_14735e5ef:
              ::operator_delete(pFVar21,0x58);
            }
          }
          if (((this->QuantizedRequestData).QuantizedCommandPtr.Object ==
               (IQuartzQuantizedCommand *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pIVar6 = (this->QuantizedRequestData).QuantizedCommandPtr.Object;
          puVar22 = (undefined8 *)(**(code **)(pIVar6->_padding_ + 8))(pIVar6,local_480);
          lVar7 = *(longlong *)(lVar27 + 0x68);
          puVar29 = (undefined8 *)(lVar7 + 0x10);
          if (puVar29 != puVar22) {
            *puVar29 = *puVar22;
            *puVar22 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(lVar7 + 0x18),(FSharedReferencer<1> *)(puVar22 + 1))
            ;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_478);
          pFVar26 = local_540;
        }
        pTVar8 = (this->SourceBufferListener).SharedReferenceCount.ReferenceController;
        pIVar9 = (this->SourceBufferListener).Object;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_470 = *(undefined8 *)(lVar27 + 0x70);
        pTStack_468 = *(TReferenceControllerBase<1> **)(lVar27 + 0x78);
        *(ISourceBufferListener **)(lVar27 + 0x70) = pIVar9;
        *(TReferenceControllerBase<1> **)(lVar27 + 0x78) = pTVar8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_468);
        FVar25.Data = FVar25.Data + 8;
        *(bool *)(lVar27 + 0x80) = this->bShouldSourceBufferListenerZeroBuffer;
      } while( true );
    }
  }
  else {
    FAudioDevice::AddSoundToStop(this->AudioDevice,this);
  }
  if ((FColor_u_0)(this->DebugColor).field0_0x0.Bits == FColor::Black.field0_0x0) {
    FVar19 = FColor::MakeRandomColor();
    (this->DebugColor).field0_0x0 = *(FColor_u_0 *)CONCAT44(extraout_var,FVar19.field0_0x0);
  }
  Audio::FAudioDebugger::DrawDebugInfo(this,&local_560,param_2);
  if ((param_1 == &local_560) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar27 = (longlong)local_560.ArrayNum;
  if (local_560.ArrayNum != 0) {
    iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,local_560.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                        &param_1->ArrayMax);
    memcpy((param_1->AllocatorInstance).Data + (longlong)iVar20 * 8,local_560.AllocatorInstance.Data
           ,lVar27 << 3);
  }
  if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.AllocatorInstance.Data);
  }
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  local_368._344_8_ = &___7FIndexedCurve__6B_;
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  local_1c0 = 0;
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_368 + 0x160));
  puVar22 = (undefined8 *)(local_368 + 0x128);
  lVar27 = 2;
  do {
    piVar2 = (int *)(puVar22 + -1);
    puVar22 = puVar22 + -2;
    lVar27 = lVar27 + -1;
    DestructItems<FSoundSourceBusSendInfo,int>((FSoundSourceBusSendInfo *)*puVar22,*piVar2);
    if ((void *)*puVar22 != (void *)0x0) {
      FMemory::Free((void *)*puVar22);
    }
  } while (lVar27 != 0);
  DestructItems<FAttenuationSubmixSendSettings,int>
            ((FAttenuationSubmixSendSettings *)local_368._248_8_,local_368._256_4_);
  if ((FAttenuationSubmixSendSettings *)local_368._248_8_ != (FAttenuationSubmixSendSettings *)0x0)
  {
    FMemory::Free((void *)local_368._248_8_);
  }
  DestructItems<FSoundSubmixSendInfo,int>
            ((FSoundSubmixSendInfo *)local_368._232_8_,local_368._240_4_);
  if ((FSoundSubmixSendInfo *)local_368._232_8_ != (FSoundSubmixSendInfo *)0x0) {
    FMemory::Free((void *)local_368._232_8_);
  }
  if ((FScriptContainerElement *)local_368._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_368._0_8_);
  }
  return;
}

// IsOneShot @ 147648e60

bool __thiscall FActiveSound::IsOneShot(FActiveSound *this)

{
  USoundBase *pUVar1;
  char cVar2;
  
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundBase *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x310))();
    if (cVar2 != '\0') {
      return false;
    }
  }
  return true;
}

// operator() @ 150505cc0

bool __thiscall `FActiveSound::~FActiveSound'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4381037478539165898>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4381037478539165898>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150506390

bool __thiscall `FActiveSound::AddVolumeSubmixSends'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4381037478539167607>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4381037478539167607>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150506410

bool __thiscall `FActiveSound::AddModulationRouting'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4381037478539166335>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4381037478539166335>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150506450

bool __thiscall `FActiveSound::RemoveModulationRouting'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4381037478539166362>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4381037478539166362>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

