// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 17

// FEpicSynth1Voice @ 14f0b6950

FEpicSynth1Voice * __thiscall Audio::FEpicSynth1Voice::FEpicSynth1Voice(FEpicSynth1Voice *this)

{
  FPatch *pFVar1;
  longlong lVar2;
  
  FOsc::FOsc(this->Oscil);
  FOsc::FOsc(this->Oscil + 1);
  FAmp::FAmp(this->OscilPan);
  FAmp::FAmp(this->OscilPan + 1);
  FAmp::FAmp(&this->Amp);
  FOnePoleFilter::FOnePoleFilter(&this->OnePoleFilter);
  FStateVariableFilter::FStateVariableFilter(&this->StateVarFilter);
  FLadderFilter::FLadderFilter(&this->LadderFilter);
  this->CurrentFilter = (IFilter *)0x0;
  FEnvelope::FEnvelope(&this->GainEnv);
  FEnvelope::FEnvelope(&this->ModEnv);
  FLFO::FLFO(this->LFO);
  FLFO::FLFO(this->LFO + 1);
  pFVar1 = this->LFOPatches[0];
  (this->PortamentoFrequency).StartValue = 0.0;
  (this->PortamentoFrequency).CurrentValue = 0.0;
  lVar2 = 0x12;
  (this->PortamentoFrequency).DeltaValue = 0.0;
  (this->PortamentoFrequency).SampleRate = 44100.0;
  (this->PortamentoFrequency).DurationTicks = 0;
  (this->PortamentoFrequency).DefaultDurationTicks = 0;
  (this->PortamentoFrequency).CurrentTick = 0;
  (this->PortamentoFrequency).bIsInit = true;
  do {
    (((FPatch *)&pFVar1->Source)->Source).Id = 0xffffffff;
    (((FPatch *)&pFVar1->Source)->Source).Name.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (((FPatch *)&pFVar1->Source)->Source).Name.Data.ArrayNum = 0;
    (((FPatch *)&pFVar1->Source)->Source).Name.Data.ArrayMax = 0;
    (pFVar1->Destinations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Destinations).ArrayNum = 0;
    (pFVar1->Destinations).ArrayMax = 0;
    (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Name).Data.ArrayNum = 0;
    (pFVar1->Name).Data.ArrayMax = 0;
    pFVar1->bEnabled = true;
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  this->ModEnvPatches[0].Source.Id = 0xffffffff;
  this->ModEnvPatches[0].Source.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[0].Source.Name.Data.ArrayNum = 0;
  this->ModEnvPatches[0].Source.Name.Data.ArrayMax = 0;
  this->ModEnvPatches[0].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[0].Destinations.ArrayNum = 0;
  this->ModEnvPatches[0].Destinations.ArrayMax = 0;
  this->ModEnvPatches[0].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[0].Name.Data.ArrayNum = 0;
  this->ModEnvPatches[0].Name.Data.ArrayMax = 0;
  this->ModEnvPatches[0].bEnabled = true;
  this->ModEnvPatches[1].Source.Id = 0xffffffff;
  this->ModEnvPatches[1].Source.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[1].Source.Name.Data.ArrayNum = 0;
  this->ModEnvPatches[1].Source.Name.Data.ArrayMax = 0;
  this->ModEnvPatches[1].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[1].Destinations.ArrayNum = 0;
  this->ModEnvPatches[1].Destinations.ArrayMax = 0;
  this->ModEnvPatches[1].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[1].Name.Data.ArrayNum = 0;
  this->ModEnvPatches[1].Name.Data.ArrayMax = 0;
  this->ModEnvPatches[1].bEnabled = true;
  this->ModEnvPatches[2].Source.Id = 0xffffffff;
  this->ModEnvPatches[2].Source.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[2].Source.Name.Data.ArrayNum = 0;
  this->ModEnvPatches[2].Source.Name.Data.ArrayMax = 0;
  this->ModEnvPatches[2].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[2].Destinations.ArrayNum = 0;
  this->ModEnvPatches[2].Destinations.ArrayMax = 0;
  this->ModEnvPatches[2].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[2].Name.Data.ArrayNum = 0;
  this->ModEnvPatches[2].Name.Data.ArrayMax = 0;
  this->ModEnvPatches[2].bEnabled = true;
  this->ModEnvPatches[3].Source.Id = 0xffffffff;
  this->ModEnvPatches[3].Source.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[3].Source.Name.Data.ArrayNum = 0;
  this->ModEnvPatches[3].Source.Name.Data.ArrayMax = 0;
  this->ModEnvPatches[3].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[3].Destinations.ArrayNum = 0;
  this->ModEnvPatches[3].Destinations.ArrayMax = 0;
  this->ModEnvPatches[3].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[3].Name.Data.ArrayNum = 0;
  this->ModEnvPatches[3].Name.Data.ArrayMax = 0;
  this->ModEnvPatches[3].bEnabled = true;
  this->ModEnvPatches[4].Source.Id = 0xffffffff;
  this->ModEnvPatches[4].Source.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[4].Source.Name.Data.ArrayNum = 0;
  this->ModEnvPatches[4].Source.Name.Data.ArrayMax = 0;
  this->ModEnvPatches[4].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[4].Destinations.ArrayNum = 0;
  this->ModEnvPatches[4].Destinations.ArrayMax = 0;
  this->ModEnvPatches[4].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[4].Name.Data.ArrayNum = 0;
  this->ModEnvPatches[4].Name.Data.ArrayMax = 0;
  this->ModEnvPatches[4].bEnabled = true;
  this->ModEnvPatches[5].Source.Id = 0xffffffff;
  this->ModEnvPatches[5].Source.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[5].Source.Name.Data.ArrayNum = 0;
  this->ModEnvPatches[5].Source.Name.Data.ArrayMax = 0;
  this->ModEnvPatches[5].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[5].Destinations.ArrayNum = 0;
  this->ModEnvPatches[5].Destinations.ArrayMax = 0;
  this->ModEnvPatches[5].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[5].Name.Data.ArrayNum = 0;
  this->ModEnvPatches[5].Name.Data.ArrayMax = 0;
  this->ModEnvPatches[5].bEnabled = true;
  this->ModEnvPatches[6].Source.Id = 0xffffffff;
  this->ModEnvPatches[6].Source.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[6].Source.Name.Data.ArrayNum = 0;
  this->ModEnvPatches[6].Source.Name.Data.ArrayMax = 0;
  this->ModEnvPatches[6].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[6].Destinations.ArrayNum = 0;
  this->ModEnvPatches[6].Destinations.ArrayMax = 0;
  this->ModEnvPatches[6].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[6].Name.Data.ArrayNum = 0;
  this->ModEnvPatches[6].Name.Data.ArrayMax = 0;
  this->ModEnvPatches[6].bEnabled = true;
  this->ModEnvPatches[7].Source.Id = 0xffffffff;
  this->ModEnvPatches[7].Source.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[7].Source.Name.Data.ArrayNum = 0;
  this->ModEnvPatches[7].Source.Name.Data.ArrayMax = 0;
  this->ModEnvPatches[7].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[7].Destinations.ArrayNum = 0;
  this->ModEnvPatches[7].Destinations.ArrayMax = 0;
  this->ModEnvPatches[7].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvPatches[7].Name.Data.ArrayNum = 0;
  this->ModEnvPatches[7].Name.Data.ArrayMax = 0;
  this->ModEnvPatches[7].bEnabled = true;
  this->ModEnvBiasPatches[0].Source.Id = 0xffffffff;
  this->ModEnvBiasPatches[0].Source.Name.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[0].Source.Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[0].Source.Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[0].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[0].Destinations.ArrayNum = 0;
  this->ModEnvBiasPatches[0].Destinations.ArrayMax = 0;
  this->ModEnvBiasPatches[0].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[0].Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[0].Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[0].bEnabled = true;
  this->ModEnvBiasPatches[1].Source.Id = 0xffffffff;
  this->ModEnvBiasPatches[1].Source.Name.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[1].Source.Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[1].Source.Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[1].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[1].Destinations.ArrayNum = 0;
  this->ModEnvBiasPatches[1].Destinations.ArrayMax = 0;
  this->ModEnvBiasPatches[1].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[1].Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[1].Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[1].bEnabled = true;
  this->ModEnvBiasPatches[2].Source.Id = 0xffffffff;
  this->ModEnvBiasPatches[2].Source.Name.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[2].Source.Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[2].Source.Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[2].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[2].Destinations.ArrayNum = 0;
  this->ModEnvBiasPatches[2].Destinations.ArrayMax = 0;
  this->ModEnvBiasPatches[2].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[2].Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[2].Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[2].bEnabled = true;
  this->ModEnvBiasPatches[3].Source.Id = 0xffffffff;
  this->ModEnvBiasPatches[3].Source.Name.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[3].Source.Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[3].Source.Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[3].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[3].Destinations.ArrayNum = 0;
  this->ModEnvBiasPatches[3].Destinations.ArrayMax = 0;
  this->ModEnvBiasPatches[3].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[3].Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[3].Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[3].bEnabled = true;
  this->ModEnvBiasPatches[4].Source.Id = 0xffffffff;
  this->ModEnvBiasPatches[4].Source.Name.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[4].Source.Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[4].Source.Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[4].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[4].Destinations.ArrayNum = 0;
  this->ModEnvBiasPatches[4].Destinations.ArrayMax = 0;
  this->ModEnvBiasPatches[4].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[4].Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[4].Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[4].bEnabled = true;
  this->ModEnvBiasPatches[5].Source.Id = 0xffffffff;
  this->ModEnvBiasPatches[5].Source.Name.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[5].Source.Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[5].Source.Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[5].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[5].Destinations.ArrayNum = 0;
  this->ModEnvBiasPatches[5].Destinations.ArrayMax = 0;
  this->ModEnvBiasPatches[5].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[5].Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[5].Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[5].bEnabled = true;
  this->ModEnvBiasPatches[6].Source.Id = 0xffffffff;
  this->ModEnvBiasPatches[6].Source.Name.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[6].Source.Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[6].Source.Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[6].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[6].Destinations.ArrayNum = 0;
  this->ModEnvBiasPatches[6].Destinations.ArrayMax = 0;
  this->ModEnvBiasPatches[6].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[6].Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[6].Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[6].bEnabled = true;
  this->ModEnvBiasPatches[7].Source.Id = 0xffffffff;
  this->ModEnvBiasPatches[7].Source.Name.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[7].Source.Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[7].Source.Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[7].Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[7].Destinations.ArrayNum = 0;
  this->ModEnvBiasPatches[7].Destinations.ArrayMax = 0;
  this->ModEnvBiasPatches[7].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ModEnvBiasPatches[7].Name.Data.ArrayNum = 0;
  this->ModEnvBiasPatches[7].Name.Data.ArrayMax = 0;
  this->ModEnvBiasPatches[7].bEnabled = true;
  *(undefined8 *)&this->DynamicPatches = 0;
  *(undefined8 *)&(this->DynamicPatches).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicPatches).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicPatches).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicPatches).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicPatches).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicPatches).field_0x34 = 0;
  *(undefined8 *)&(this->DynamicPatches).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicPatches).field_0x48 = 0;
  (this->Env_To_Amp).Source.Id = 0xffffffff;
  (this->Env_To_Amp).Source.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Env_To_Amp).Source.Name.Data.ArrayNum = 0;
  (this->Env_To_Amp).Source.Name.Data.ArrayMax = 0;
  (this->Env_To_Amp).Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Env_To_Amp).Destinations.ArrayNum = 0;
  (this->Env_To_Amp).Destinations.ArrayMax = 0;
  (this->Env_To_Amp).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Env_To_Amp).Name.Data.ArrayNum = 0;
  (this->Env_To_Amp).Name.Data.ArrayMax = 0;
  (this->Env_To_Amp).bEnabled = true;
  (this->Env_To_Filter).Source.Id = 0xffffffff;
  (this->Env_To_Filter).Source.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Env_To_Filter).Source.Name.Data.ArrayNum = 0;
  (this->Env_To_Filter).Source.Name.Data.ArrayMax = 0;
  (this->Env_To_Filter).Destinations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Env_To_Filter).Destinations.ArrayNum = 0;
  (this->Env_To_Filter).Destinations.ArrayMax = 0;
  (this->Env_To_Filter).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Env_To_Filter).Name.Data.ArrayNum = 0;
  (this->Env_To_Filter).Name.Data.ArrayMax = 0;
  (this->Env_To_Filter).bEnabled = true;
  this->MidiNote = -1;
  this->VoiceId = -1;
  this->ControlSampleCount = 0;
  this->DurationSampleCount = -1;
  this->CurrentSampleCount = 0;
  this->VoiceGeneration = 0xffffffff;
  this->ParentSynth = (FEpicSynth1 *)0x0;
  this->bIsFinished = true;
  this->bIsActive = false;
  this->CurrentPatchType[0] = PatchToNone;
  this->CurrentPatchType[1] = PatchToNone;
  this->CurrentModPatchType = PatchToNone;
  this->CurrentModBiasPatchType = PatchToNone;
  return this;
}

// ~FEpicSynth1Voice @ 14f0be810

void __thiscall Audio::FEpicSynth1Voice::~FEpicSynth1Voice(FEpicSynth1Voice *this)

{
  TArray<Audio::FPatchDestination,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  longlong lVar4;
  TArray<Audio::FPatchDestination,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pFVar2 = (this->Env_To_Filter).Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)(this->Env_To_Filter).Destinations.AllocatorInstance.Data,
             (this->Env_To_Filter).Destinations.ArrayNum);
  pFVar2 = (this->Env_To_Filter).Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Env_To_Filter).Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Env_To_Amp).Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)(this->Env_To_Amp).Destinations.AllocatorInstance.Data,
             (this->Env_To_Amp).Destinations.ArrayNum);
  pFVar2 = (this->Env_To_Amp).Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Env_To_Amp).Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DynamicPatches).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DynamicPatches).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FPatch,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FPatch,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FPatch,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicPatches);
  pFVar2 = this->ModEnvBiasPatches[7].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvBiasPatches[7].Destinations.AllocatorInstance.Data,
             this->ModEnvBiasPatches[7].Destinations.ArrayNum);
  pFVar2 = this->ModEnvBiasPatches[7].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[7].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[6].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvBiasPatches[6].Destinations.AllocatorInstance.Data,
             this->ModEnvBiasPatches[6].Destinations.ArrayNum);
  pFVar2 = this->ModEnvBiasPatches[6].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[6].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[5].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvBiasPatches[5].Destinations.AllocatorInstance.Data,
             this->ModEnvBiasPatches[5].Destinations.ArrayNum);
  pFVar2 = this->ModEnvBiasPatches[5].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[5].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[4].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvBiasPatches[4].Destinations.AllocatorInstance.Data,
             this->ModEnvBiasPatches[4].Destinations.ArrayNum);
  pFVar2 = this->ModEnvBiasPatches[4].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[4].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[3].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvBiasPatches[3].Destinations.AllocatorInstance.Data,
             this->ModEnvBiasPatches[3].Destinations.ArrayNum);
  pFVar2 = this->ModEnvBiasPatches[3].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[3].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[2].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvBiasPatches[2].Destinations.AllocatorInstance.Data,
             this->ModEnvBiasPatches[2].Destinations.ArrayNum);
  pFVar2 = this->ModEnvBiasPatches[2].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[2].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[1].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvBiasPatches[1].Destinations.AllocatorInstance.Data,
             this->ModEnvBiasPatches[1].Destinations.ArrayNum);
  pFVar2 = this->ModEnvBiasPatches[1].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[1].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[0].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvBiasPatches[0].Destinations.AllocatorInstance.Data,
             this->ModEnvBiasPatches[0].Destinations.ArrayNum);
  pFVar2 = this->ModEnvBiasPatches[0].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvBiasPatches[0].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[7].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvPatches[7].Destinations.AllocatorInstance.Data,
             this->ModEnvPatches[7].Destinations.ArrayNum);
  pFVar2 = this->ModEnvPatches[7].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[7].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[6].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvPatches[6].Destinations.AllocatorInstance.Data,
             this->ModEnvPatches[6].Destinations.ArrayNum);
  pFVar2 = this->ModEnvPatches[6].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[6].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[5].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvPatches[5].Destinations.AllocatorInstance.Data,
             this->ModEnvPatches[5].Destinations.ArrayNum);
  pFVar2 = this->ModEnvPatches[5].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[5].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[4].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvPatches[4].Destinations.AllocatorInstance.Data,
             this->ModEnvPatches[4].Destinations.ArrayNum);
  pFVar2 = this->ModEnvPatches[4].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[4].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[3].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvPatches[3].Destinations.AllocatorInstance.Data,
             this->ModEnvPatches[3].Destinations.ArrayNum);
  pFVar2 = this->ModEnvPatches[3].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[3].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[2].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvPatches[2].Destinations.AllocatorInstance.Data,
             this->ModEnvPatches[2].Destinations.ArrayNum);
  pFVar2 = this->ModEnvPatches[2].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[2].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[1].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvPatches[1].Destinations.AllocatorInstance.Data,
             this->ModEnvPatches[1].Destinations.ArrayNum);
  pFVar2 = this->ModEnvPatches[1].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[1].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[0].Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Audio::FPatchDestination,int>
            ((FPatchDestination *)this->ModEnvPatches[0].Destinations.AllocatorInstance.Data,
             this->ModEnvPatches[0].Destinations.ArrayNum);
  pFVar2 = this->ModEnvPatches[0].Destinations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->ModEnvPatches[0].Source.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  lVar4 = 0x12;
  pTVar5 = &this->ModEnvPatches[0].Destinations;
  do {
    pTVar1 = pTVar5 + -4;
    lVar4 = lVar4 + -1;
    if (*(void **)(pTVar5 + -3) != (void *)0x0) {
      FMemory::Free(*(void **)(pTVar5 + -3));
    }
    DestructItems<Audio::FPatchDestination,int>
              ((FPatchDestination *)(pTVar1->AllocatorInstance).Data,
               *(int *)((longlong)(pTVar5 + -4) + 8));
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (*(void **)(pTVar5 + -5) != (void *)0x0) {
      FMemory::Free(*(void **)(pTVar5 + -5));
    }
    pTVar5 = pTVar1;
  } while (lVar4 != 0);
  FLFO::~FLFO(this->LFO + 1);
  FLFO::~FLFO(this->LFO);
  FEnvelope::~FEnvelope(&this->ModEnv);
  FEnvelope::~FEnvelope(&this->GainEnv);
  FLadderFilter::~FLadderFilter(&this->LadderFilter);
  FStateVariableFilter::~FStateVariableFilter(&this->StateVarFilter);
  FOnePoleFilter::~FOnePoleFilter(&this->OnePoleFilter);
  FAmp::~FAmp(&this->Amp);
  FAmp::~FAmp(this->OscilPan + 1);
  FAmp::~FAmp(this->OscilPan);
  FOsc::~FOsc(this->Oscil + 1);
  FOsc::~FOsc(this->Oscil);
  return;
}

// ClearPatches @ 14f0cbdb0

void __thiscall Audio::FEpicSynth1Voice::ClearPatches(FEpicSynth1Voice *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  FPatch *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  FModulationMatrix *this_00;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  FModulationMatrix *local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->DynamicPatches).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->DynamicPatches).field_0x10;
  iVar13 = 0;
  local_res18 = &this->ParentSynth->ModMatrix;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->DynamicPatches).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_60.Array;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14f0cbe5e;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14f0cbe5e:
  uVar12 = *(uint *)&(this->DynamicPatches).field_0x28;
  puVar2 = &(this->DynamicPatches).field_0x10;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->DynamicPatches).field_0x8 -
                       *(int *)&(this->DynamicPatches).field_0x34);
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = local_res18;
  uVar8 = *(uint *)&(this->DynamicPatches).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->DynamicPatches).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14f0cbf60;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14f0cbf60:
  while( true ) {
    if (*(int *)&(this->DynamicPatches).field_0x8 - *(int *)&(this->DynamicPatches).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FPatch,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    lVar10 = *(longlong *)&(this->DynamicPatches).field_0x0;
    pFVar4 = *(FPatch **)((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + lVar10);
    pTVar5 = *(TReferenceControllerBase<1> **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + lVar10);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    FModulationMatrix::RemovePatch(this_00,this->VoiceId,pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<int,TSharedPtr<Audio::FPatch,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FPatch,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TSharedPtr<Audio::FPatch,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FPatch,1>,0>,FDefaultSetAllocator>
           *)&this->DynamicPatches);
  return;
}

// CreatePatch @ 14f0d2c70

bool __thiscall
Audio::FEpicSynth1Voice::CreatePatch
          (FEpicSynth1Voice *this,FPatchId param_1,ESynth1PatchSource param_2,
          TArray<FSynth1PatchCable,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  FString *pFVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FPatch *pFVar10;
  FLFO *this_00;
  uint uVar11;
  FPatch *pFVar12;
  FPatch *pFVar13;
  TArray<Audio::FPatchDestination,TSizedDefaultAllocator<32>_> *pTVar14;
  FPatch *pFVar15;
  undefined1 *puVar16;
  uint uVar17;
  int local_res10 [2];
  TPairInitializer<int_const_&,TSharedPtr<Audio::FPatch,1>_const_&> local_a8;
  FModulationMatrix *local_98;
  TArray<Audio::FPatchDestination,TSizedDefaultAllocator<32>_> local_90;
  FPatch *local_80;
  FPatch *local_78;
  int *local_70;
  FPatch **local_68;
  FPatchSource local_60;
  
  local_98 = &this->ParentSynth->ModMatrix;
  local_a8.Value = (TSharedPtr<Audio::FPatch,1> *)&this->DynamicPatches;
  if (*(int *)&(this->DynamicPatches).field_0x8 != *(int *)&(this->DynamicPatches).field_0x34) {
    puVar16 = *(undefined1 **)&(this->DynamicPatches).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->DynamicPatches).field_0x38;
    }
    iVar7 = *(int *)(puVar16 +
                    (ulonglong)(*(int *)&(this->DynamicPatches).field_0x48 - 1U & param_1.Id) * 4);
    if (iVar7 != -1) {
      do {
        if (*(int *)((longlong)iVar7 * 0x20 +
                    *(longlong *)
                     &((TMap<int,TSharedPtr<Audio::FPatch,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FPatch,1>,0>_>
                        *)local_a8.Value)->field_0x0) == param_1.Id) {
          return false;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 +
                        *(longlong *)
                         &((TMap<int,TSharedPtr<Audio::FPatch,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FPatch,1>,0>_>
                            *)local_a8.Value)->field_0x0);
      } while (iVar7 != -1);
    }
  }
  local_res10[0] = param_1.Id;
  pFVar10 = ::operator_new(0x40);
  pFVar15 = (FPatch *)0x0;
  pFVar12 = pFVar15;
  if (pFVar10 != (FPatch *)0x0) {
    (pFVar10->Source).Id = 0xffffffff;
    (pFVar10->Source).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar10->Source).Name.Data.ArrayNum = 0;
    (pFVar10->Source).Name.Data.ArrayMax = 0;
    (pFVar10->Destinations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar10->Destinations).ArrayNum = 0;
    (pFVar10->Destinations).ArrayMax = 0;
    (pFVar10->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar10->Name).Data.ArrayNum = 0;
    (pFVar10->Name).Data.ArrayMax = 0;
    pFVar10->bEnabled = true;
    pFVar12 = pFVar10;
  }
  local_80 = pFVar12;
  pFVar10 = ::operator_new(0x18);
  local_78 = pFVar15;
  if (pFVar10 != (FPatch *)0x0) {
    *(undefined4 *)&(pFVar10->Source).Name.Data.AllocatorInstance.Data = 1;
    *(undefined ***)&pFVar10->Source =
         &
         ___7__TReferenceControllerWithDeleter_UFPatch_Audio__U__DefaultDeleter_UFPatch_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&(pFVar10->Source).Name.Data.AllocatorInstance.Data + 4) = 1;
    *(FPatch **)&(pFVar10->Source).Name.Data.ArrayNum = pFVar12;
    local_78 = pFVar10;
  }
  if ((local_80 == (FPatch *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_80->bEnabled = param_4;
  if (param_2 == LFO1) {
    this_00 = this->LFO;
  }
  else {
    if (param_2 != LFO2) {
      if (param_2 == Envelope) {
        local_60.Id = (this->ModEnv).EnvSource.Id;
        ::FString::FString(&local_60.Name,&(this->ModEnv).EnvSource.Name);
      }
      else if (param_2 == BiasEnvelope) {
        local_60.Id = (this->ModEnv).BiasedEnvSource.Id;
        ::FString::FString(&local_60.Name,&(this->ModEnv).BiasedEnvSource.Name);
      }
      else {
        local_60.Id = 0xffffffff;
        local_60.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.Name.Data.ArrayNum = 0;
        local_60.Name.Data.ArrayMax = 0;
      }
      goto LAB_14f0d2e3b;
    }
    this_00 = this->LFO + 1;
  }
  FLFO::GetModSourceNormalPhase(this_00,&local_60);
LAB_14f0d2e3b:
  if ((local_80 == (FPatch *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar12 = local_80;
  pFVar1 = &(local_80->Source).Name;
  (local_80->Source).Id = local_60.Id;
  if (pFVar1 != &local_60.Name) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_60.Name.Data.AllocatorInstance.Data;
    local_60.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->Source).Name.Data.ArrayNum = local_60.Name.Data.ArrayNum;
    (pFVar12->Source).Name.Data.ArrayMax = local_60.Name.Data.ArrayMax;
    local_60.Name.Data.ArrayNum = 0;
    local_60.Name.Data.ArrayMax = 0;
  }
  if (local_60.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Name.Data.AllocatorInstance.Data);
  }
  iVar7 = param_3->ArrayNum;
  pFVar12 = pFVar15;
  pFVar10 = pFVar15;
  if (0 < iVar7) {
    do {
      uVar17 = (uint)pFVar10;
      local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.ArrayNum = 0;
      local_90.ArrayMax = 0;
      uVar8 = 0;
      if ((int)uVar17 < iVar7) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      GetPatchDestinations
                (this,(ESynth1PatchDestination)
                      ((param_3->AllocatorInstance).Data + 4)[(longlong)&(pFVar12->Source).Id],
                 &local_90);
      pFVar10 = pFVar15;
      pFVar13 = pFVar15;
      if (0 < local_90.ArrayNum) {
        do {
          uVar8 = 0;
          if ((int)uVar17 < param_3->ArrayNum) {
            uVar8 = ~uVar17 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar11 = (uint)pFVar10;
          uVar2 = *(undefined4 *)
                   ((param_3->AllocatorInstance).Data + (longlong)&(pFVar12->Source).Id);
          uVar8 = 0;
          if ((int)uVar11 < local_90.ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          *(undefined4 *)(local_90.AllocatorInstance.Data + (longlong)&(pFVar13->Source).Name.Data)
               = uVar2;
          pFVar10 = (FPatch *)(ulonglong)(uVar11 + 1);
          pFVar13 = (FPatch *)&(pFVar13->Destinations).ArrayNum;
        } while ((int)(uVar11 + 1) < local_90.ArrayNum);
      }
      if ((local_80 == (FPatch *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar10 = local_80;
      pTVar14 = &local_80->Destinations;
      if ((pTVar14 == &local_90) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar7 = local_90.ArrayNum;
      if (local_90.ArrayNum != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,local_90.ArrayNum,&pTVar14->AllocatorInstance,
                           &(pFVar10->Destinations).ArrayNum,&(pFVar10->Destinations).ArrayMax);
        ConstructItems<Audio::FPatchDestination,Audio::FPatchDestination,int>
                  ((pTVar14->AllocatorInstance).Data + (longlong)iVar9 * 0x20,
                   (FPatchDestination *)local_90.AllocatorInstance.Data,iVar7);
      }
      DestructItems<Audio::FPatchDestination,int>
                ((FPatchDestination *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
      if ((FPatchDestination *)local_90.AllocatorInstance.Data != (FPatchDestination *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      iVar7 = param_3->ArrayNum;
      pFVar12 = (FPatch *)&(pFVar12->Source).Name;
      pFVar10 = (FPatch *)(ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) < iVar7);
  }
  local_70 = local_res10;
  local_68 = &local_80;
  TSet<TTuple<int,TSharedPtr<Audio::FPatch,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FPatch,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TSharedPtr<Audio::FPatch,1>_const_&>_>
            ((TSet<TTuple<int,TSharedPtr<Audio::FPatch,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<Audio::FPatch,1>,0>,FDefaultSetAllocator>
              *)local_a8.Value,&local_a8,(bool *)&local_70);
  FModulationMatrix::AddPatch(local_98,this->VoiceId,local_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_78);
  return true;
}

// Generate @ 14f0d7260

void __thiscall Audio::FEpicSynth1Voice::Generate(FEpicSynth1Voice *this,float *param_1)

{
  FModulationMatrix *this_00;
  FEnvelope *pFVar1;
  IOscBase *this_01;
  FEnvelope *pFVar2;
  FLFO *pFVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  FEpicSynth1Voice *pFVar8;
  longlong lVar9;
  FAmp *this_02;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_78 [16];
  
  pFVar1 = &this->GainEnv;
  cVar7 = (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1);
  if (cVar7 == '\0') {
    iVar5 = (this->PortamentoFrequency).DurationTicks;
    iVar6 = (this->PortamentoFrequency).CurrentTick;
    if (iVar6 < iVar5) {
      (this->PortamentoFrequency).CurrentTick = iVar6 + 1;
      fVar11 = ((float)iVar6 * (this->PortamentoFrequency).DeltaValue) / (float)iVar5 +
               (this->PortamentoFrequency).StartValue;
      (this->PortamentoFrequency).CurrentValue = fVar11;
    }
    else {
      fVar11 = (this->PortamentoFrequency).CurrentValue;
    }
    IOscBase::SetFrequency((IOscBase *)this,fVar11);
    iVar5 = (this->PortamentoFrequency).DurationTicks;
    this_01 = (IOscBase *)(this->Oscil + 1);
    iVar6 = (this->PortamentoFrequency).CurrentTick;
    if (iVar6 < iVar5) {
      fVar11 = ((float)iVar6 * (this->PortamentoFrequency).DeltaValue) / (float)iVar5 +
               (this->PortamentoFrequency).StartValue;
      (this->PortamentoFrequency).CurrentValue = fVar11;
      (this->PortamentoFrequency).CurrentTick = iVar6 + 1;
    }
    else {
      fVar11 = (this->PortamentoFrequency).CurrentValue;
    }
    IOscBase::SetFrequency(this_01,fVar11);
    pFVar2 = &this->ModEnv;
    pFVar3 = this->LFO;
    this_00 = &this->ParentSynth->ModMatrix;
    piVar4 = &this->ControlSampleCount;
    *piVar4 = *piVar4 & this->ParentSynth->ControlSamplePeriod - 1U;
    if (*piVar4 == 0) {
      (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,0);
      (**(code **)(pFVar2->_padding_ + 0x50))(pFVar2,0);
      FModulationMatrix::Update(this_00,this->VoiceId,0);
      (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3);
      (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,0);
      (**(code **)(this->LFO[1]._padding_ + 0x28))(this->LFO + 1);
      (**(code **)(this->LFO[1]._padding_ + 0x20))(this->LFO + 1,0);
      FModulationMatrix::Update(this_00,this->VoiceId,1);
      (**(code **)(this->Oscil[0]._padding_ + 0x28))(this);
      (**(code **)(this_01->_padding_ + 0x28))(this_01);
      FAmp::Update(this->OscilPan);
      FAmp::Update(this->OscilPan + 1);
      FAmp::Update(&this->Amp);
    }
    this_02 = &this->Amp;
    this->ControlSampleCount = this->ControlSampleCount + 1;
    (**(code **)(this->CurrentFilter->_padding_ + 0x58))();
    fVar11 = __real_3f000000;
    if (this->ParentSynth->bIsUnison) {
      fVar12 = 0.0;
      lVar9 = 2;
      pFVar8 = this;
      do {
        fVar10 = (float)(**(code **)(pFVar8->Oscil[0]._padding_ + 0x20))(pFVar8,0);
        pFVar8 = (FEpicSynth1Voice *)(pFVar8->Oscil + 1);
        fVar12 = fVar12 + fVar10 * fVar11;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      FAmp::ProcessAudio(this_02,fVar12,param_1,param_1 + 1);
    }
    else {
      fVar11 = (float)(**(code **)(this->Oscil[0]._padding_ + 0x20))(this,0);
      fVar11 = fVar11 * __real_3f000000;
      fVar12 = (float)(**(code **)(this_01->_padding_ + 0x20))(this_01,0);
      local_78[0] = 0.0;
      local_res18[0] = 0.0;
      fVar12 = fVar12 * __real_3f000000;
      FAmp::ProcessAudio(this->OscilPan,fVar11,local_78,local_res18);
      local_res20[0] = 0.0;
      local_res8[0] = 0.0;
      FAmp::ProcessAudio(this->OscilPan + 1,fVar12,local_res20,local_res8);
      FAmp::ProcessAudio(this_02,local_res20[0] + local_78[0],local_res8[0] + local_res18[0],param_1
                         ,param_1 + 1);
    }
    (**(code **)(this->CurrentFilter->_padding_ + 0x60))(this->CurrentFilter,param_1,param_1);
    cVar7 = (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1);
    if (cVar7 != '\0') {
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
      (**(code **)(this->Oscil[0]._padding_ + 0x18))(this);
      (**(code **)(this_01->_padding_ + 0x18))(this_01);
      (**(code **)(this->LFO[0]._padding_ + 0x18))();
      (**(code **)(this->LFO[1]._padding_ + 0x18))(this->LFO + 1);
      this->bIsFinished = true;
    }
    if ((0 < this->DurationSampleCount) &&
       (this->CurrentSampleCount = this->CurrentSampleCount + 1,
       this->DurationSampleCount < this->CurrentSampleCount)) {
      this->DurationSampleCount = -1;
      if (this->bIsFinished == false) {
        (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
        (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
        cVar7 = (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1);
        if (cVar7 != '\0') {
          this->bIsFinished = true;
          FAmp::Reset(this_02);
        }
      }
      this->DurationSampleCount = -1;
    }
    return;
  }
  (**(code **)((this->ModEnv)._padding_ + 0x30))();
  this->bIsFinished = true;
  return;
}

// GetPatchDestinations @ 14f0da670

/* WARNING: Removing unreachable block (ram,0x00014f0db161) */
/* WARNING: Removing unreachable block (ram,0x00014f0dae1f) */
/* WARNING: Removing unreachable block (ram,0x00014f0daf2f) */
/* WARNING: Removing unreachable block (ram,0x00014f0db2a1) */

void __thiscall
Audio::FEpicSynth1Voice::GetPatchDestinations
          (FEpicSynth1Voice *this,ESynth1PatchDestination param_1,
          TArray<Audio::FPatchDestination,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  FString local_238;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  FString local_218;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  FString local_1f8;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  FString local_1d8;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  FString local_1b8;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  FString local_198;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  FString local_178;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  FString local_158;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  FString local_138;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  FString local_118;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  FString local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  FString local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  FString local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  FString local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  FString local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  FString local_58;
  uint local_48;
  int local_44;
  float local_40;
  FString local_38;
  uint local_28;
  int local_24;
  float local_20;
  FString local_18;
  
  if (param_1 < Count) {
    switch(param_1) {
    case Osc1Gain:
      local_248 = (undefined4)this->Oscil[0]._padding_;
      local_240 = (undefined4)this->Oscil[0]._padding_;
      local_244 = *(undefined4 *)((longlong)&this->Oscil[0]._padding_ + 4);
      ::FString::FString(&local_238,(FString *)&this->Oscil[0]._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_248) &&
          ((FScriptContainerElement *)&local_248 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_248;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_244;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_240;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_238.Data.AllocatorInstance.Data;
      local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_238.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_238.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.Data.ArrayNum = 0;
      local_238.Data.ArrayMax = 0;
      break;
    case Osc1Frequency:
      local_228 = (undefined4)this->Oscil[0]._padding_;
      local_220 = (undefined4)this->Oscil[0]._padding_;
      local_224 = *(undefined4 *)((longlong)&this->Oscil[0]._padding_ + 4);
      ::FString::FString(&local_218,(FString *)&this->Oscil[0]._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_228) &&
          ((FScriptContainerElement *)&local_228 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_228;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_224;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_220;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_218.Data.AllocatorInstance.Data;
      local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_218.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_218.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.Data.ArrayNum = 0;
      local_218.Data.ArrayMax = 0;
      break;
    case Osc1Pulsewidth:
      local_208 = (undefined4)this->Oscil[0]._padding_;
      local_200 = (undefined4)this->Oscil[0]._padding_;
      local_204 = *(undefined4 *)((longlong)&this->Oscil[0]._padding_ + 4);
      ::FString::FString(&local_1f8,(FString *)&this->Oscil[0]._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_208) &&
          ((FScriptContainerElement *)&local_208 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_208;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_204;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_200;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_1f8.Data.AllocatorInstance.Data;
      local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_1f8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_1f8.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Data.ArrayNum = 0;
      local_1f8.Data.ArrayMax = 0;
      break;
    case Osc2Gain:
      local_1e8 = (undefined4)this->Oscil[1]._padding_;
      local_1e0 = (undefined4)this->Oscil[1]._padding_;
      local_1e4 = *(undefined4 *)((longlong)&this->Oscil[1]._padding_ + 4);
      ::FString::FString(&local_1d8,(FString *)&this->Oscil[1]._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_1e8) &&
          ((FScriptContainerElement *)&local_1e8 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_1e8;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_1e4;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_1e0;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_1d8.Data.AllocatorInstance.Data;
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_1d8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_1d8.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.ArrayNum = 0;
      local_1d8.Data.ArrayMax = 0;
      break;
    case Osc2Frequency:
      local_1c8 = (undefined4)this->Oscil[1]._padding_;
      local_1c0 = (undefined4)this->Oscil[1]._padding_;
      local_1c4 = *(undefined4 *)((longlong)&this->Oscil[1]._padding_ + 4);
      ::FString::FString(&local_1b8,(FString *)&this->Oscil[1]._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_1c8) &&
          ((FScriptContainerElement *)&local_1c8 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_1c8;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_1c4;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_1c0;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_1b8.Data.AllocatorInstance.Data;
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_1b8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_1b8.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.Data.ArrayNum = 0;
      local_1b8.Data.ArrayMax = 0;
      break;
    case Osc2Pulsewidth:
      local_1a8 = (undefined4)this->Oscil[1]._padding_;
      local_1a0 = (undefined4)this->Oscil[1]._padding_;
      local_1a4 = *(undefined4 *)((longlong)&this->Oscil[1]._padding_ + 4);
      ::FString::FString(&local_198,(FString *)&this->Oscil[1]._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_1a8) &&
          ((FScriptContainerElement *)&local_1a8 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_1a8;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_1a4;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_1a0;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_198.Data.AllocatorInstance.Data;
      local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_198.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_198.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Data.ArrayNum = 0;
      local_198.Data.ArrayMax = 0;
      break;
    case FilterFrequency:
      local_188 = (undefined4)(this->OnePoleFilter)._padding_;
      local_180 = (undefined4)(this->OnePoleFilter)._padding_;
      local_184 = *(undefined4 *)((longlong)&(this->OnePoleFilter)._padding_ + 4);
      ::FString::FString(&local_178,(FString *)&(this->OnePoleFilter)._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_188) &&
          ((FScriptContainerElement *)&local_188 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_188;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_184;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_180;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_178.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_178.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_178.Data.ArrayMax;
      local_178.Data.ArrayNum = 0;
      local_178.Data.ArrayMax = 0;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168 = (undefined4)(this->StateVarFilter)._padding_;
      local_160 = (undefined4)(this->StateVarFilter)._padding_;
      local_164 = *(undefined4 *)((longlong)&(this->StateVarFilter)._padding_ + 4);
      ::FString::FString(&local_158,(FString *)&(this->StateVarFilter)._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_168;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_164;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_160;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_158.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_158.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_158.Data.ArrayMax;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148 = (undefined4)(this->LadderFilter)._padding_;
      local_140 = (undefined4)(this->LadderFilter)._padding_;
      local_144 = *(undefined4 *)((longlong)&(this->LadderFilter)._padding_ + 4);
      ::FString::FString(&local_138,(FString *)&(this->LadderFilter)._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_148;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_144;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_140;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_138.Data.AllocatorInstance.Data;
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_138.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_138.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Data.ArrayNum = 0;
      local_138.Data.ArrayMax = 0;
      break;
    case FilterQ:
      local_128 = (undefined4)(this->OnePoleFilter)._padding_;
      local_120 = (undefined4)(this->OnePoleFilter)._padding_;
      local_124 = *(undefined4 *)((longlong)&(this->OnePoleFilter)._padding_ + 4);
      ::FString::FString(&local_118,(FString *)&(this->OnePoleFilter)._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_128;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_124;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_120;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_118.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_118.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_118.Data.ArrayMax;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108 = (undefined4)(this->StateVarFilter)._padding_;
      local_100 = (undefined4)(this->StateVarFilter)._padding_;
      local_104 = *(undefined4 *)((longlong)&(this->StateVarFilter)._padding_ + 4);
      ::FString::FString(&local_f8,(FString *)&(this->StateVarFilter)._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_108;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_104;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_100;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_f8.Data.AllocatorInstance.Data;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_f8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_f8.Data.ArrayMax;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8 = (undefined4)(this->LadderFilter)._padding_;
      local_e0 = (undefined4)(this->LadderFilter)._padding_;
      local_e4 = *(undefined4 *)((longlong)&(this->LadderFilter)._padding_ + 4);
      ::FString::FString(&local_d8,(FString *)&(this->LadderFilter)._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_e8;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_e4;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_e0;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_d8.Data.AllocatorInstance.Data;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_d8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_d8.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      break;
    case Gain:
      local_48 = (this->Amp).GainScaleDest.Id;
      local_40 = (this->Amp).GainScaleDest.Depth;
      local_44 = (this->Amp).GainScaleDest.Stage;
      ::FString::FString(&local_38,&(this->Amp).GainScaleDest.Name);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(uint *)(pFVar1 + lVar5) = local_48;
      *(int *)(pFVar1 + lVar5 + 4) = local_44;
      *(float *)(pFVar1 + lVar5 + 8) = local_40;
      ::FString::FString((FString *)(pFVar1 + lVar5 + 0x10),&local_38);
      local_18.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      break;
    case Pan:
      local_28 = (this->Amp).GainPanDest.Id;
      local_20 = (this->Amp).GainPanDest.Depth;
      local_24 = (this->Amp).GainPanDest.Stage;
      ::FString::FString(&local_18,&(this->Amp).GainPanDest.Name);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(uint *)(pFVar1 + lVar5) = local_28;
      *(int *)(pFVar1 + lVar5 + 4) = local_24;
      *(float *)(pFVar1 + lVar5 + 8) = local_20;
      ::FString::FString((FString *)(pFVar1 + lVar5 + 0x10),&local_18);
      break;
    case LFO1Frequency:
      local_c8 = (undefined4)this->LFO[0]._padding_;
      local_c0 = (undefined4)this->LFO[0]._padding_;
      local_c4 = *(undefined4 *)((longlong)&this->LFO[0]._padding_ + 4);
      ::FString::FString(&local_b8,(FString *)&this->LFO[0]._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_c8;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_c4;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_c0;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_b8.Data.AllocatorInstance.Data;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_b8.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_b8.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      break;
    case LFO1Gain:
      local_a8 = (undefined4)this->LFO[0]._padding_;
      local_a0 = (undefined4)this->LFO[0]._padding_;
      local_a4 = *(undefined4 *)((longlong)&this->LFO[0]._padding_ + 4);
      ::FString::FString(&local_98,(FString *)&this->LFO[0]._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_a8;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_a4;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_a0;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_98.Data.AllocatorInstance.Data;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_98.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_98.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      break;
    case LFO2Frequency:
      local_88 = (undefined4)this->LFO[1]._padding_;
      local_80 = (undefined4)this->LFO[1]._padding_;
      local_84 = *(undefined4 *)((longlong)&this->LFO[1]._padding_ + 4);
      ::FString::FString(&local_78,(FString *)&this->LFO[1]._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_88;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_84;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_80;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_78.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_78.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      break;
    case LFO2Gain:
      local_68 = (undefined4)this->LFO[1]._padding_;
      local_60 = (undefined4)this->LFO[1]._padding_;
      local_64 = *(undefined4 *)((longlong)&this->LFO[1]._padding_ + 4);
      ::FString::FString(&local_58,(FString *)&this->LFO[1]._padding_);
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_2->ArrayMax * 0x20)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data;
      lVar5 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(pFVar1 + lVar5) = local_68;
      *(undefined4 *)(pFVar1 + lVar5 + 4) = local_64;
      *(undefined4 *)(pFVar1 + lVar5 + 8) = local_60;
      *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar1 + lVar5 + 0x10) = local_58.Data.AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar1 + lVar5 + 0x18) = local_58.Data.ArrayNum;
      *(int *)(pFVar1 + lVar5 + 0x1c) = local_58.Data.ArrayMax;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPatchSource @ 14f0dbb80

FPatchSource * __thiscall
Audio::FEpicSynth1Voice::GetPatchSource
          (FEpicSynth1Voice *this,FPatchSource *__return_storage_ptr__,ESynth1PatchSource param_1)

{
  if (param_1 == LFO1) {
    FLFO::GetModSourceNormalPhase(this->LFO,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if (param_1 == LFO2) {
    FLFO::GetModSourceNormalPhase(this->LFO + 1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if (param_1 == Envelope) {
    __return_storage_ptr__->Id = (this->ModEnv).EnvSource.Id;
    ::FString::FString(&__return_storage_ptr__->Name,&(this->ModEnv).EnvSource.Name);
    return __return_storage_ptr__;
  }
  if (param_1 != BiasEnvelope) {
    __return_storage_ptr__->Id = 0xffffffff;
    (__return_storage_ptr__->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Name).Data.ArrayNum = 0;
    (__return_storage_ptr__->Name).Data.ArrayMax = 0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Id = (this->ModEnv).BiasedEnvSource.Id;
  ::FString::FString(&__return_storage_ptr__->Name,&(this->ModEnv).BiasedEnvSource.Name);
  return __return_storage_ptr__;
}

// Init @ 14f0dfc50

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Audio::FEpicSynth1Voice::Init(FEpicSynth1Voice *this,FEpicSynth1 *param_1,int param_2)

{
  FModulationMatrix *this_00;
  FString *pFVar1;
  int *piVar2;
  FString *pFVar3;
  FOnePoleFilter *pFVar4;
  FStateVariableFilter *pFVar5;
  FLadderFilter *pFVar6;
  TArray<Audio::FPatchDestination,TSizedDefaultAllocator<32>_> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Type TVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  int iVar16;
  ulonglong uVar17;
  FPatchSource *pFVar18;
  int iVar19;
  FLFO *this_01;
  FEpicSynth1Voice *pFVar20;
  FPatch *pFVar21;
  longlong lVar22;
  FAmp *this_02;
  longlong local_res8;
  longlong local_res10;
  uint local_res18;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  FString local_4a8;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  FString local_488;
  undefined8 local_478;
  undefined4 local_470;
  FString local_468;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  FString local_448;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  FString local_428;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  FString local_408;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  FString local_3e8;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  FString local_3c8;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  FString local_3a8;
  uint local_398;
  FString local_390;
  uint local_380;
  FString local_378;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  FString local_358;
  FPatchSource local_348;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  FString local_320;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  FString local_300;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  FString local_2d8;
  undefined8 local_2c8;
  undefined4 local_2c0;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  uint local_208;
  int local_204;
  float local_200;
  FString local_1f8;
  uint local_1e8;
  int local_1e4;
  float local_1e0;
  FString local_1d8;
  uint local_1c8;
  int local_1c4;
  float local_1c0;
  FString local_1b8;
  FString local_1a8;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  FString local_188;
  uint local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FPatchSource local_a0;
  FPatchSource local_88 [3];
  
  this->VoiceId = param_2;
  this_00 = &param_1->ModMatrix;
  this->ParentSynth = param_1;
  this_01 = this->LFO;
  uVar17 = 0;
  this->ControlSampleCount = 0;
  lVar22 = 2;
  (this->PortamentoFrequency).SampleRate = param_1->SampleRate;
  (this->PortamentoFrequency).bIsInit = true;
  fVar8 = param_1->SampleRate;
  fVar9 = param_1->ControlSampleRate;
  TVar11 = param_1->FilterType;
  fVar10 = param_1->BaseFilterFreq;
  do {
    (**(code **)(this_01->_padding_ + 8))(this_01,fVar9,this->VoiceId,this_00,1);
    FLFO::SetBipolar(this_01,false);
    this_01 = this_01 + 1;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  FEnvelope::Init(&this->GainEnv,fVar9,this->VoiceId,this_00,true);
  FEnvelope::Init(&this->ModEnv,fVar9,this->VoiceId,this_00,true);
  this_02 = this->OscilPan;
  lVar22 = 2;
  pFVar20 = this;
  do {
    (**(code **)(pFVar20->Oscil[0]._padding_ + 8))(pFVar20,fVar8,this->VoiceId,this_00,1);
    FAmp::Init(this_02,this->VoiceId,this_00);
    pFVar20 = (FEpicSynth1Voice *)(pFVar20->Oscil + 1);
    this_02 = this_02 + 1;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  IOscBase::SetFollowerOsc((IOscBase *)this,(IOscBase *)(this->Oscil + 1));
  FAmp::Init(&this->Amp,this->VoiceId,this_00);
  pFVar4 = &this->OnePoleFilter;
  (**(code **)(pFVar4->_padding_ + 8))(pFVar4,fVar8,2,this->VoiceId,this_00);
  (**(code **)(pFVar4->_padding_ + 0x48))(pFVar4,TVar11);
  (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,fVar10);
  pFVar5 = &this->StateVarFilter;
  (**(code **)(pFVar5->_padding_ + 8))(pFVar5,fVar8,2,this->VoiceId,this_00);
  (**(code **)(pFVar5->_padding_ + 0x48))(pFVar5,TVar11);
  (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,fVar10);
  pFVar6 = &this->LadderFilter;
  (**(code **)(pFVar6->_padding_ + 8))(pFVar6,fVar8,2,this->VoiceId,this_00);
  (**(code **)(pFVar6->_padding_ + 0x48))(pFVar6,TVar11);
  (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6,fVar10);
  this->CurrentFilter = (IFilter *)pFVar4;
  local_330 = (undefined4)this->Oscil[0]._padding_;
  local_328 = (undefined4)this->Oscil[0]._padding_;
  local_32c = *(undefined4 *)((longlong)&this->Oscil[0]._padding_ + 4);
  local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.Data.ArrayNum = 0;
  local_488.Data.ArrayMax = 0;
  local_478 = 0xffffffffffffffff;
  local_470 = 0;
  local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_468.Data.ArrayNum = 0;
  local_468.Data.ArrayMax = 0;
  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Data.ArrayNum = 0;
  local_2d8.Data.ArrayMax = 0;
  local_2c8 = 0xffffffffffffffff;
  local_2c0 = 0;
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.ArrayMax = 0;
  ::FString::FString(&local_320,(FString *)&this->Oscil[0]._padding_);
  local_498 = local_330;
  local_494 = local_32c;
  local_490 = local_328;
  ::FString::operator=(&local_488,&local_320);
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  local_310 = (undefined4)this->Oscil[0]._padding_;
  local_308 = (undefined4)this->Oscil[0]._padding_;
  local_30c = *(undefined4 *)((longlong)&this->Oscil[0]._padding_ + 4);
  ::FString::FString(&local_300,(FString *)&this->Oscil[0]._padding_);
  local_2e8 = local_310;
  local_2e4 = local_30c;
  local_2e0 = local_308;
  ::FString::operator=(&local_2d8,&local_300);
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  local_330 = (undefined4)this->Oscil[1]._padding_;
  local_328 = (undefined4)this->Oscil[1]._padding_;
  local_32c = *(undefined4 *)((longlong)&this->Oscil[1]._padding_ + 4);
  ::FString::FString(&local_320,(FString *)&this->Oscil[1]._padding_);
  local_478 = CONCAT44(local_32c,local_330);
  local_470 = local_328;
  ::FString::operator=(&local_468,&local_320);
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  local_310 = (undefined4)this->Oscil[1]._padding_;
  local_308 = (undefined4)this->Oscil[1]._padding_;
  local_30c = *(undefined4 *)((longlong)&this->Oscil[1]._padding_ + 4);
  ::FString::FString(&local_300,(FString *)&this->Oscil[1]._padding_);
  local_2c8 = CONCAT44(local_30c,local_310);
  local_2c0 = local_308;
  ::FString::operator=(&local_2b8,&local_300);
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  local_458 = (undefined4)(this->OnePoleFilter)._padding_;
  local_450 = (undefined4)(this->OnePoleFilter)._padding_;
  local_454 = *(undefined4 *)((longlong)&(this->OnePoleFilter)._padding_ + 4);
  ::FString::FString(&local_448,(FString *)&(this->OnePoleFilter)._padding_);
  local_438 = (undefined4)(this->StateVarFilter)._padding_;
  local_430 = (undefined4)(this->StateVarFilter)._padding_;
  local_434 = *(undefined4 *)((longlong)&(this->StateVarFilter)._padding_ + 4);
  ::FString::FString(&local_428,(FString *)&(this->StateVarFilter)._padding_);
  local_418 = (undefined4)(this->LadderFilter)._padding_;
  local_410 = (undefined4)(this->LadderFilter)._padding_;
  local_414 = *(undefined4 *)((longlong)&(this->LadderFilter)._padding_ + 4);
  ::FString::FString(&local_408,(FString *)&(this->LadderFilter)._padding_);
  local_3f8 = (undefined4)(this->StateVarFilter)._padding_;
  local_3f0 = (undefined4)(this->StateVarFilter)._padding_;
  local_3f4 = *(undefined4 *)((longlong)&(this->StateVarFilter)._padding_ + 4);
  ::FString::FString(&local_3e8,(FString *)&(this->StateVarFilter)._padding_);
  local_3d8 = (undefined4)(this->LadderFilter)._padding_;
  local_3d0 = (undefined4)(this->LadderFilter)._padding_;
  local_3d4 = *(undefined4 *)((longlong)&(this->LadderFilter)._padding_ + 4);
  ::FString::FString(&local_3c8,(FString *)&(this->LadderFilter)._padding_);
  local_1c8 = (this->Amp).GainEnvDest.Id;
  local_1c0 = (this->Amp).GainEnvDest.Depth;
  local_1c4 = (this->Amp).GainEnvDest.Stage;
  ::FString::FString(&local_1b8,&(this->Amp).GainEnvDest.Name);
  local_1e8 = (this->Amp).GainScaleDest.Id;
  local_1e0 = (this->Amp).GainScaleDest.Depth;
  local_1e4 = (this->Amp).GainScaleDest.Stage;
  ::FString::FString(&local_1d8,&(this->Amp).GainScaleDest.Name);
  local_208 = (this->Amp).GainPanDest.Id;
  local_200 = (this->Amp).GainPanDest.Depth;
  local_204 = (this->Amp).GainPanDest.Stage;
  ::FString::FString(&local_1f8,&(this->Amp).GainPanDest.Name);
  local_4b8 = (undefined4)this->LFO[0]._padding_;
  local_4b0 = (undefined4)this->LFO[0]._padding_;
  local_4b4 = *(undefined4 *)((longlong)&this->LFO[0]._padding_ + 4);
  ::FString::FString(&local_4a8,(FString *)&this->LFO[0]._padding_);
  local_198 = (undefined4)this->LFO[1]._padding_;
  local_190 = (undefined4)this->LFO[1]._padding_;
  local_194 = *(undefined4 *)((longlong)&this->LFO[1]._padding_ + 4);
  ::FString::FString(&local_188,(FString *)&this->LFO[1]._padding_);
  local_368 = (undefined4)this->LFO[0]._padding_;
  local_360 = (undefined4)this->LFO[0]._padding_;
  local_364 = *(undefined4 *)((longlong)&this->LFO[0]._padding_ + 4);
  ::FString::FString(&local_358,(FString *)&this->LFO[0]._padding_);
  local_3b8 = (undefined4)this->LFO[1]._padding_;
  local_3b0 = (undefined4)this->LFO[1]._padding_;
  local_3b4 = *(undefined4 *)((longlong)&this->LFO[1]._padding_ + 4);
  ::FString::FString(&local_3a8,(FString *)&this->LFO[1]._padding_);
  local_398 = (this->ModEnv).EnvSource.Id;
  ::FString::FString(&local_390,&(this->ModEnv).EnvSource.Name);
  local_380 = (this->ModEnv).BiasedEnvSource.Id;
  ::FString::FString(&local_378,&(this->ModEnv).BiasedEnvSource.Name);
  this->ModEnvPatches[1].bEnabled = false;
  this->ModEnvPatches[1].Source.Id = local_398;
  ::FString::operator=(&this->ModEnvPatches[1].Source.Name,&local_390);
  pFVar12 = this->ModEnvPatches[1].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_498) &&
      ((FScriptContainerElement *)&local_498 <
       pFVar12 + (longlong)this->ModEnvPatches[1].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[1].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvPatches[1].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[1].Destinations.AllocatorInstance,
                        &this->ModEnvPatches[1].Destinations.ArrayMax);
  }
  this->ModEnvPatches[1].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[1].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_498;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_494;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_490;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_488);
  pFVar12 = this->ModEnvPatches[1].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_478) &&
      ((FScriptContainerElement *)&local_478 <
       pFVar12 + (longlong)this->ModEnvPatches[1].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[1].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvPatches[1].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[1].Destinations.AllocatorInstance,
                        &this->ModEnvPatches[1].Destinations.ArrayMax);
  }
  this->ModEnvPatches[1].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[1].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = (undefined4)local_478;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_478._4_4_;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_470;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_468);
  ::FString::FString(&local_100,"ESynthModEnvPatch::PatchToOscFreq");
  ::FString::operator=(&this->ModEnvPatches[1].Name,&local_100);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvPatches + 1);
  this->ModEnvPatches[2].bEnabled = false;
  this->ModEnvPatches[2].Source.Id = local_398;
  ::FString::operator=(&this->ModEnvPatches[2].Source.Name,&local_390);
  pFVar12 = this->ModEnvPatches[2].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_458) &&
      ((FScriptContainerElement *)&local_458 <
       pFVar12 + (longlong)this->ModEnvPatches[2].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[2].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvPatches[2].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[2].Destinations.AllocatorInstance,
                        &this->ModEnvPatches[2].Destinations.ArrayMax);
  }
  this->ModEnvPatches[2].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[2].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_458;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_454;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_450;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_448);
  pFVar12 = this->ModEnvPatches[2].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_438) &&
      ((FScriptContainerElement *)&local_438 <
       pFVar12 + (longlong)this->ModEnvPatches[2].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[2].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvPatches[2].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[2].Destinations.AllocatorInstance,
                        &this->ModEnvPatches[2].Destinations.ArrayMax);
  }
  this->ModEnvPatches[2].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[2].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_438;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_434;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_430;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_428);
  pFVar12 = this->ModEnvPatches[2].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_418) &&
      ((FScriptContainerElement *)&local_418 <
       pFVar12 + (longlong)this->ModEnvPatches[2].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[2].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvPatches[2].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[2].Destinations.AllocatorInstance,
                        &this->ModEnvPatches[2].Destinations.ArrayMax);
  }
  this->ModEnvPatches[2].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[2].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_418;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_414;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_410;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_408);
  ::FString::FString(&local_110,"ESynthModEnvPatch::PatchToFilterFreq");
  ::FString::operator=(&this->ModEnvPatches[2].Name,&local_110);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvPatches + 2);
  this->ModEnvPatches[3].bEnabled = false;
  this->ModEnvPatches[3].Source.Id = local_398;
  ::FString::operator=(&this->ModEnvPatches[3].Source.Name,&local_390);
  pFVar12 = this->ModEnvPatches[3].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_3f8) &&
      ((FScriptContainerElement *)&local_3f8 <
       pFVar12 + (longlong)this->ModEnvPatches[3].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[3].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvPatches[3].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[3].Destinations.AllocatorInstance,
                        &this->ModEnvPatches[3].Destinations.ArrayMax);
  }
  this->ModEnvPatches[3].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[3].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_3f8;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_3f4;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_3f0;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_3e8);
  pFVar12 = this->ModEnvPatches[3].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_3d8) &&
      ((FScriptContainerElement *)&local_3d8 <
       pFVar12 + (longlong)this->ModEnvPatches[3].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[3].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvPatches[3].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[3].Destinations.AllocatorInstance,
                        &this->ModEnvPatches[3].Destinations.ArrayMax);
  }
  this->ModEnvPatches[3].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[3].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_3d8;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_3d4;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_3d0;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_3c8);
  ::FString::FString(&local_120,"ESynthModEnvPatch::PatchToFilterQ");
  ::FString::operator=(&this->ModEnvPatches[3].Name,&local_120);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvPatches + 3);
  this->ModEnvPatches[4].bEnabled = false;
  this->ModEnvPatches[4].Source.Id = local_398;
  ::FString::operator=(&this->ModEnvPatches[4].Source.Name,&local_390);
  pFVar12 = this->ModEnvPatches[4].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_368) &&
      ((FScriptContainerElement *)&local_368 <
       pFVar12 + (longlong)this->ModEnvPatches[4].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[4].Destinations.ArrayNum;
  piVar2 = &this->ModEnvPatches[4].Destinations.ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[4].Destinations.AllocatorInstance,piVar2);
  }
  this->ModEnvPatches[4].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[4].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_368;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_364;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_360;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_358);
  ::FString::FString(&local_130,"ESynthModEnvPatch::PatchToLFO1Gain");
  ::FString::operator=(&this->ModEnvPatches[4].Name,&local_130);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvPatches + 4);
  this->ModEnvPatches[5].bEnabled = false;
  this->ModEnvPatches[5].Source.Id = local_398;
  ::FString::operator=(&this->ModEnvPatches[5].Source.Name,&local_390);
  pFVar12 = this->ModEnvPatches[5].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_3b8) &&
      ((FScriptContainerElement *)&local_3b8 <
       pFVar12 + (longlong)this->ModEnvPatches[5].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[5].Destinations.ArrayNum;
  piVar2 = &this->ModEnvPatches[5].Destinations.ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[5].Destinations.AllocatorInstance,piVar2);
  }
  this->ModEnvPatches[5].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[5].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_3b8;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_3b4;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_3b0;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_3a8);
  ::FString::FString(&local_140,"ESynthModEnvPatch::PatchToLFO2Gain");
  ::FString::operator=(&this->ModEnvPatches[5].Name,&local_140);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvPatches + 5);
  this->ModEnvPatches[6].bEnabled = false;
  this->ModEnvPatches[6].Source.Id = local_398;
  ::FString::operator=(&this->ModEnvPatches[6].Source.Name,&local_390);
  pFVar12 = this->ModEnvPatches[6].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_4b8) &&
      ((FScriptContainerElement *)&local_4b8 <
       pFVar12 + (longlong)this->ModEnvPatches[6].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[6].Destinations.ArrayNum;
  piVar2 = &this->ModEnvPatches[6].Destinations.ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[6].Destinations.AllocatorInstance,piVar2);
  }
  this->ModEnvPatches[6].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[6].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_4b8;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_4b4;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_4b0;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_4a8);
  ::FString::FString(&local_150,"ESynthModEnvPatch::PatchToLFO1Freq");
  ::FString::operator=(&this->ModEnvPatches[6].Name,&local_150);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvPatches + 6);
  this->ModEnvPatches[7].bEnabled = false;
  this->ModEnvPatches[7].Source.Id = local_398;
  ::FString::operator=(&this->ModEnvPatches[7].Source.Name,&local_390);
  pFVar12 = this->ModEnvPatches[7].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_4b8) &&
      ((FScriptContainerElement *)&local_4b8 <
       pFVar12 + (longlong)this->ModEnvPatches[7].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvPatches[7].Destinations.ArrayNum;
  piVar2 = &this->ModEnvPatches[7].Destinations.ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvPatches[7].Destinations.AllocatorInstance,piVar2);
  }
  this->ModEnvPatches[7].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvPatches[7].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_4b8;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_4b4;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_4b0;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_4a8);
  ::FString::FString(&local_228,"ESynthModEnvPatch::PatchToLFO2Freq");
  FVar14.Data = local_228.Data.AllocatorInstance.Data;
  pFVar1 = &this->ModEnvPatches[7].Name;
  if (pFVar1 != &local_228) {
    piVar2 = &this->ModEnvPatches[7].Name.Data.ArrayMax;
    iVar16 = *piVar2;
    this->ModEnvPatches[7].Name.Data.ArrayNum = local_228.Data.ArrayNum;
    if ((local_228.Data.ArrayNum == 0) && (iVar16 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_228.Data.ArrayNum,iVar16,(ForAnyElementType *)pFVar1,
                 local_228.Data.ArrayNum,piVar2);
      if (local_228.Data.ArrayNum != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,
               (longlong)local_228.Data.ArrayNum * 2);
      }
    }
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvPatches + 7);
  this->ModEnvBiasPatches[1].bEnabled = false;
  this->ModEnvBiasPatches[1].Source.Id = local_380;
  ::FString::operator=(&this->ModEnvBiasPatches[1].Source.Name,&local_378);
  pFVar12 = this->ModEnvBiasPatches[1].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_498) &&
      ((FScriptContainerElement *)&local_498 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[1].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[1].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvBiasPatches[1].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[1].Destinations.AllocatorInstance,
                        &this->ModEnvBiasPatches[1].Destinations.ArrayMax);
  }
  this->ModEnvBiasPatches[1].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[1].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_498;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_494;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_490;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_488);
  pFVar12 = this->ModEnvBiasPatches[1].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_478) &&
      ((FScriptContainerElement *)&local_478 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[1].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[1].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvBiasPatches[1].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[1].Destinations.AllocatorInstance,
                        &this->ModEnvBiasPatches[1].Destinations.ArrayMax);
  }
  this->ModEnvBiasPatches[1].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[1].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = (undefined4)local_478;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_478._4_4_;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_470;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_468);
  ::FString::FString(&local_218,"ESynthModEnvBiasPatch::PatchToOscFreq");
  FVar14.Data = local_218.Data.AllocatorInstance.Data;
  pFVar1 = &this->ModEnvBiasPatches[1].Name;
  if (pFVar1 != &local_218) {
    piVar2 = &this->ModEnvBiasPatches[1].Name.Data.ArrayMax;
    iVar16 = *piVar2;
    this->ModEnvBiasPatches[1].Name.Data.ArrayNum = local_218.Data.ArrayNum;
    if ((local_218.Data.ArrayNum == 0) && (iVar16 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_218.Data.ArrayNum,iVar16,(ForAnyElementType *)pFVar1,
                 local_218.Data.ArrayNum,piVar2);
      if (local_218.Data.ArrayNum != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,
               (longlong)local_218.Data.ArrayNum * 2);
      }
    }
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvBiasPatches + 1);
  this->ModEnvBiasPatches[2].bEnabled = false;
  this->ModEnvBiasPatches[2].Source.Id = local_380;
  ::FString::operator=(&this->ModEnvBiasPatches[2].Source.Name,&local_378);
  pFVar12 = this->ModEnvBiasPatches[2].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_458) &&
      ((FScriptContainerElement *)&local_458 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[2].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[2].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvBiasPatches[2].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[2].Destinations.AllocatorInstance,
                        &this->ModEnvBiasPatches[2].Destinations.ArrayMax);
  }
  this->ModEnvBiasPatches[2].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[2].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_458;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_454;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_450;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_448);
  pFVar12 = this->ModEnvBiasPatches[2].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_438) &&
      ((FScriptContainerElement *)&local_438 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[2].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[2].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvBiasPatches[2].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[2].Destinations.AllocatorInstance,
                        &this->ModEnvBiasPatches[2].Destinations.ArrayMax);
  }
  this->ModEnvBiasPatches[2].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[2].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_438;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_434;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_430;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_428);
  pFVar12 = this->ModEnvBiasPatches[2].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_418) &&
      ((FScriptContainerElement *)&local_418 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[2].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[2].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvBiasPatches[2].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[2].Destinations.AllocatorInstance,
                        &this->ModEnvBiasPatches[2].Destinations.ArrayMax);
  }
  this->ModEnvBiasPatches[2].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[2].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_418;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_414;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_410;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_408);
  ::FString::FString(&local_160,"ESynthModEnvBiasPatch::PatchToFilterFreq");
  ::FString::operator=(&this->ModEnvBiasPatches[2].Name,&local_160);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvBiasPatches + 2);
  this->ModEnvBiasPatches[3].bEnabled = false;
  this->ModEnvBiasPatches[3].Source.Id = local_380;
  ::FString::operator=(&this->ModEnvBiasPatches[3].Source.Name,&local_378);
  pFVar12 = this->ModEnvBiasPatches[3].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_3f8) &&
      ((FScriptContainerElement *)&local_3f8 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[3].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[3].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvBiasPatches[3].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[3].Destinations.AllocatorInstance,
                        &this->ModEnvBiasPatches[3].Destinations.ArrayMax);
  }
  this->ModEnvBiasPatches[3].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[3].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_3f8;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_3f4;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_3f0;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_3e8);
  pFVar12 = this->ModEnvBiasPatches[3].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_3d8) &&
      ((FScriptContainerElement *)&local_3d8 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[3].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[3].Destinations.ArrayNum;
  if (iVar16 == this->ModEnvBiasPatches[3].Destinations.ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[3].Destinations.AllocatorInstance,
                        &this->ModEnvBiasPatches[3].Destinations.ArrayMax);
  }
  this->ModEnvBiasPatches[3].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[3].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_3d8;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_3d4;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_3d0;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_3c8);
  ::FString::FString(&local_b0,"ESynthModEnvBiasPatch::PatchToFilterQ");
  ::FString::operator=(&this->ModEnvBiasPatches[3].Name,&local_b0);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvBiasPatches + 3);
  this->ModEnvBiasPatches[4].bEnabled = false;
  this->ModEnvBiasPatches[4].Source.Id = local_380;
  ::FString::operator=(&this->ModEnvBiasPatches[4].Source.Name,&local_378);
  pFVar12 = this->ModEnvBiasPatches[4].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_368) &&
      ((FScriptContainerElement *)&local_368 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[4].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[4].Destinations.ArrayNum;
  piVar2 = &this->ModEnvBiasPatches[4].Destinations.ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[4].Destinations.AllocatorInstance,piVar2);
  }
  this->ModEnvBiasPatches[4].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[4].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_368;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_364;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_360;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_358);
  ::FString::FString(&local_c0,"ESynthModEnvBiasPatch::PatchToLFO1Gain");
  ::FString::operator=(&this->ModEnvBiasPatches[4].Name,&local_c0);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvBiasPatches + 4);
  this->ModEnvBiasPatches[5].bEnabled = false;
  this->ModEnvBiasPatches[5].Source.Id = local_380;
  ::FString::operator=(&this->ModEnvBiasPatches[5].Source.Name,&local_378);
  pFVar12 = this->ModEnvBiasPatches[5].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_3b8) &&
      ((FScriptContainerElement *)&local_3b8 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[5].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[5].Destinations.ArrayNum;
  piVar2 = &this->ModEnvBiasPatches[5].Destinations.ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[5].Destinations.AllocatorInstance,piVar2);
  }
  this->ModEnvBiasPatches[5].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[5].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_3b8;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_3b4;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_3b0;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_3a8);
  ::FString::FString(&local_e0,"ESynthModEnvBiasPatch::PatchToLFO2Gain");
  ::FString::operator=(&this->ModEnvBiasPatches[5].Name,&local_e0);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvBiasPatches + 5);
  this->ModEnvBiasPatches[6].bEnabled = false;
  this->ModEnvBiasPatches[6].Source.Id = local_380;
  ::FString::operator=(&this->ModEnvBiasPatches[6].Source.Name,&local_378);
  pFVar12 = this->ModEnvBiasPatches[6].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_4b8) &&
      ((FScriptContainerElement *)&local_4b8 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[6].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[6].Destinations.ArrayNum;
  piVar2 = &this->ModEnvBiasPatches[6].Destinations.ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[6].Destinations.AllocatorInstance,piVar2);
  }
  this->ModEnvBiasPatches[6].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[6].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_4b8;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_4b4;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_4b0;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_4a8);
  ::FString::FString(&local_f0,"ESynthModEnvBiasPatch::PatchToLFO1Freq");
  ::FString::operator=(&this->ModEnvBiasPatches[6].Name,&local_f0);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvBiasPatches + 6);
  this->ModEnvBiasPatches[7].bEnabled = false;
  this->ModEnvBiasPatches[7].Source.Id = local_380;
  ::FString::operator=(&this->ModEnvBiasPatches[7].Source.Name,&local_378);
  pFVar12 = this->ModEnvBiasPatches[7].Destinations.AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_4b8) &&
      ((FScriptContainerElement *)&local_4b8 <
       pFVar12 + (longlong)this->ModEnvBiasPatches[7].Destinations.ArrayMax * 0x20)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = this->ModEnvBiasPatches[7].Destinations.ArrayNum;
  piVar2 = &this->ModEnvBiasPatches[7].Destinations.ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&this->ModEnvBiasPatches[7].Destinations.AllocatorInstance,piVar2);
  }
  this->ModEnvBiasPatches[7].Destinations.ArrayNum = iVar16 + 1;
  pFVar12 = this->ModEnvBiasPatches[7].Destinations.AllocatorInstance.Data;
  lVar22 = (longlong)iVar16 * 0x20;
  *(undefined4 *)(pFVar12 + lVar22) = local_4b8;
  *(undefined4 *)(pFVar12 + lVar22 + 4) = local_4b4;
  *(undefined4 *)(pFVar12 + lVar22 + 8) = local_4b0;
  ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_4a8);
  ::FString::FString(&local_d0,"ESynthModEnvBiasPatch::PatchToLFO2Freq");
  ::FString::operator=(&this->ModEnvBiasPatches[7].Name,&local_d0);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  FModulationMatrix::AddPatch(this_00,this->VoiceId,this->ModEnvBiasPatches + 7);
  local_res8 = 0;
  local_res18 = 0;
  local_res10 = 0;
  while( true ) {
    FLFO::GetModSourceNormalPhase(this->LFO + uVar17,&local_348);
    this->LFOPatches[local_res8][1].bEnabled = false;
    this->LFOPatches[local_res8][1].Source.Id = local_348.Id;
    ::FString::operator=(&this->LFOPatches[uVar17][1].Source.Name,&local_348.Name);
    pFVar12 = this->LFOPatches[local_res8][1].Destinations.AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_1e8) &&
        ((FScriptContainerElement *)&local_1e8 <
         pFVar12 + (longlong)this->LFOPatches[local_res8][1].Destinations.ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar16 = this->LFOPatches[local_res8][1].Destinations.ArrayNum;
    piVar2 = &this->LFOPatches[local_res8][1].Destinations.ArrayMax;
    if (iVar16 == *piVar2) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&this->LFOPatches[local_res8][1].Destinations.AllocatorInstance,
                          piVar2);
    }
    this->LFOPatches[local_res8][1].Destinations.ArrayNum = iVar16 + 1;
    pFVar12 = this->LFOPatches[local_res8][1].Destinations.AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(uint *)(pFVar12 + lVar22) = local_1e8;
    *(int *)(pFVar12 + lVar22 + 4) = local_1e4;
    *(float *)(pFVar12 + lVar22 + 8) = local_1e0;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_1d8);
    ::FString::FString(&local_1a8,"ELFOPatch::PatchToGain");
    FVar14.Data = local_1a8.Data.AllocatorInstance.Data;
    pFVar1 = (FString *)
             ((longlong)&this->LFOPatches[0][1].Name.Data.AllocatorInstance.Data + local_res10);
    if (pFVar1 != &local_1a8) {
      piVar2 = (int *)((longlong)&this->LFOPatches[0][1].Name.Data.ArrayMax + local_res10);
      iVar16 = *piVar2;
      iVar19 = local_1a8.Data.ArrayNum;
      *(int *)((longlong)&this->LFOPatches[0][1].Name.Data.ArrayNum + local_res10) = iVar19;
      if ((iVar19 == 0) && (iVar16 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,iVar16,(ForAnyElementType *)pFVar1,iVar19,piVar2);
        if (iVar19 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,(longlong)iVar19 * 2);
        }
      }
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    FModulationMatrix::AddPatch
              (this_00,this->VoiceId,
               (FPatch *)((longlong)&this->LFOPatches[0][1].Source.Id + local_res10));
    pFVar21 = this->LFOPatches[local_res8] + 2;
    pFVar21->bEnabled = false;
    (pFVar21->Source).Id = local_348.Id;
    ::FString::operator=(&(pFVar21->Source).Name,&local_348.Name);
    ::FString::FString(&local_2a8,"ELFOPatch::PatchToOscFreq");
    FVar14.Data = local_2a8.Data.AllocatorInstance.Data;
    pFVar1 = &pFVar21->Name;
    if (pFVar1 != &local_2a8) {
      piVar2 = &(pFVar21->Name).Data.ArrayMax;
      iVar16 = *piVar2;
      iVar19 = local_2a8.Data.ArrayNum;
      (pFVar21->Name).Data.ArrayNum = iVar19;
      if ((iVar19 == 0) && (iVar16 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,iVar16,(ForAnyElementType *)pFVar1,iVar19,piVar2);
        if (iVar19 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,(longlong)iVar19 * 2);
        }
      }
    }
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_498) &&
        ((FScriptContainerElement *)&local_498 <
         pFVar12 + (longlong)(pFVar21->Destinations).ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar16 = (pFVar21->Destinations).ArrayNum;
    if (iVar16 == (pFVar21->Destinations).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar21->Destinations).AllocatorInstance,
                          &(pFVar21->Destinations).ArrayMax);
    }
    (pFVar21->Destinations).ArrayNum = iVar16 + 1;
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(undefined4 *)(pFVar12 + lVar22) = local_498;
    *(undefined4 *)(pFVar12 + lVar22 + 4) = local_494;
    *(undefined4 *)(pFVar12 + lVar22 + 8) = local_490;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_488);
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_478) &&
        ((FScriptContainerElement *)&local_478 <
         pFVar12 + (longlong)(pFVar21->Destinations).ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar16 = (pFVar21->Destinations).ArrayNum;
    if (iVar16 == (pFVar21->Destinations).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar21->Destinations).AllocatorInstance,
                          &(pFVar21->Destinations).ArrayMax);
    }
    (pFVar21->Destinations).ArrayNum = iVar16 + 1;
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(undefined4 *)(pFVar12 + lVar22) = (undefined4)local_478;
    *(undefined4 *)(pFVar12 + lVar22 + 4) = local_478._4_4_;
    *(undefined4 *)(pFVar12 + lVar22 + 8) = local_470;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_468);
    FModulationMatrix::AddPatch(this_00,this->VoiceId,pFVar21);
    pFVar21 = this->LFOPatches[local_res8] + 5;
    pFVar21->bEnabled = false;
    (pFVar21->Source).Id = local_348.Id;
    ::FString::operator=(&(pFVar21->Source).Name,&local_348.Name);
    ::FString::FString(&local_298,"ELFOPatch::PatchToOscPulseWidth");
    FVar14.Data = local_298.Data.AllocatorInstance.Data;
    pFVar1 = &pFVar21->Name;
    if (pFVar1 != &local_298) {
      piVar2 = &(pFVar21->Name).Data.ArrayMax;
      iVar16 = *piVar2;
      iVar19 = local_298.Data.ArrayNum;
      (pFVar21->Name).Data.ArrayNum = iVar19;
      if ((iVar19 == 0) && (iVar16 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,iVar16,(ForAnyElementType *)pFVar1,iVar19,piVar2);
        if (iVar19 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,(longlong)iVar19 * 2);
        }
      }
    }
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_2e8) &&
        ((FScriptContainerElement *)&local_2e8 <
         pFVar12 + (longlong)(pFVar21->Destinations).ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar16 = (pFVar21->Destinations).ArrayNum;
    if (iVar16 == (pFVar21->Destinations).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar21->Destinations).AllocatorInstance,
                          &(pFVar21->Destinations).ArrayMax);
    }
    (pFVar21->Destinations).ArrayNum = iVar16 + 1;
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(undefined4 *)(pFVar12 + lVar22) = local_2e8;
    *(undefined4 *)(pFVar12 + lVar22 + 4) = local_2e4;
    *(undefined4 *)(pFVar12 + lVar22 + 8) = local_2e0;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_2d8);
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_2c8) &&
        ((FScriptContainerElement *)&local_2c8 <
         pFVar12 + (longlong)(pFVar21->Destinations).ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar16 = (pFVar21->Destinations).ArrayNum;
    if (iVar16 == (pFVar21->Destinations).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar21->Destinations).AllocatorInstance,
                          &(pFVar21->Destinations).ArrayMax);
    }
    (pFVar21->Destinations).ArrayNum = iVar16 + 1;
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(undefined4 *)(pFVar12 + lVar22) = (undefined4)local_2c8;
    *(undefined4 *)(pFVar12 + lVar22 + 4) = local_2c8._4_4_;
    *(undefined4 *)(pFVar12 + lVar22 + 8) = local_2c0;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_2b8);
    FModulationMatrix::AddPatch(this_00,this->VoiceId,pFVar21);
    pFVar21 = this->LFOPatches[local_res8] + 3;
    pFVar21->bEnabled = false;
    (pFVar21->Source).Id = local_348.Id;
    ::FString::operator=(&(pFVar21->Source).Name,&local_348.Name);
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_458) &&
        ((FScriptContainerElement *)&local_458 <
         pFVar12 + (longlong)(pFVar21->Destinations).ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar16 = (pFVar21->Destinations).ArrayNum;
    if (iVar16 == (pFVar21->Destinations).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar21->Destinations).AllocatorInstance,
                          &(pFVar21->Destinations).ArrayMax);
    }
    (pFVar21->Destinations).ArrayNum = iVar16 + 1;
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(undefined4 *)(pFVar12 + lVar22) = local_458;
    *(undefined4 *)(pFVar12 + lVar22 + 4) = local_454;
    *(undefined4 *)(pFVar12 + lVar22 + 8) = local_450;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_448);
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_438) &&
        ((FScriptContainerElement *)&local_438 <
         pFVar12 + (longlong)(pFVar21->Destinations).ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar16 = (pFVar21->Destinations).ArrayNum;
    if (iVar16 == (pFVar21->Destinations).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar21->Destinations).AllocatorInstance,
                          &(pFVar21->Destinations).ArrayMax);
    }
    (pFVar21->Destinations).ArrayNum = iVar16 + 1;
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(undefined4 *)(pFVar12 + lVar22) = local_438;
    *(undefined4 *)(pFVar12 + lVar22 + 4) = local_434;
    *(undefined4 *)(pFVar12 + lVar22 + 8) = local_430;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_428);
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_418) &&
        ((FScriptContainerElement *)&local_418 <
         pFVar12 + (longlong)(pFVar21->Destinations).ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar16 = (pFVar21->Destinations).ArrayNum;
    if (iVar16 == (pFVar21->Destinations).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar21->Destinations).AllocatorInstance,
                          &(pFVar21->Destinations).ArrayMax);
    }
    (pFVar21->Destinations).ArrayNum = iVar16 + 1;
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(undefined4 *)(pFVar12 + lVar22) = local_418;
    *(undefined4 *)(pFVar12 + lVar22 + 4) = local_414;
    *(undefined4 *)(pFVar12 + lVar22 + 8) = local_410;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_408);
    ::FString::FString(&local_238,"ELFOPatch::PatchToFilterFreq");
    FVar14.Data = local_238.Data.AllocatorInstance.Data;
    pFVar1 = &pFVar21->Name;
    if (pFVar1 != &local_238) {
      piVar2 = &(pFVar21->Name).Data.ArrayMax;
      iVar16 = *piVar2;
      iVar19 = local_238.Data.ArrayNum;
      (pFVar21->Name).Data.ArrayNum = iVar19;
      if ((iVar19 == 0) && (iVar16 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,iVar16,(ForAnyElementType *)pFVar1,iVar19,piVar2);
        if (iVar19 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,(longlong)iVar19 * 2);
        }
      }
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    FModulationMatrix::AddPatch(this_00,this->VoiceId,pFVar21);
    pFVar21 = this->LFOPatches[local_res8] + 4;
    pFVar21->bEnabled = false;
    (pFVar21->Source).Id = local_348.Id;
    ::FString::operator=(&(pFVar21->Source).Name,&local_348.Name);
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_3f8) &&
        ((FScriptContainerElement *)&local_3f8 <
         pFVar12 + (longlong)(pFVar21->Destinations).ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar16 = (pFVar21->Destinations).ArrayNum;
    if (iVar16 == (pFVar21->Destinations).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar21->Destinations).AllocatorInstance,
                          &(pFVar21->Destinations).ArrayMax);
    }
    (pFVar21->Destinations).ArrayNum = iVar16 + 1;
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(undefined4 *)(pFVar12 + lVar22) = local_3f8;
    *(undefined4 *)(pFVar12 + lVar22 + 4) = local_3f4;
    *(undefined4 *)(pFVar12 + lVar22 + 8) = local_3f0;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_3e8);
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_3d8) &&
        ((FScriptContainerElement *)&local_3d8 <
         pFVar12 + (longlong)(pFVar21->Destinations).ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) break;
    iVar16 = (pFVar21->Destinations).ArrayNum;
    if (iVar16 == (pFVar21->Destinations).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar21->Destinations).AllocatorInstance,
                          &(pFVar21->Destinations).ArrayMax);
    }
    (pFVar21->Destinations).ArrayNum = iVar16 + 1;
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(undefined4 *)(pFVar12 + lVar22) = local_3d8;
    *(undefined4 *)(pFVar12 + lVar22 + 4) = local_3d4;
    *(undefined4 *)(pFVar12 + lVar22 + 8) = local_3d0;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_3c8);
    ::FString::FString(&local_288,"ELFOPatch::PatchToFilterQ");
    FVar14.Data = local_288.Data.AllocatorInstance.Data;
    pFVar1 = &pFVar21->Name;
    if (pFVar1 != &local_288) {
      piVar2 = &(pFVar21->Name).Data.ArrayMax;
      iVar16 = *piVar2;
      iVar19 = local_288.Data.ArrayNum;
      (pFVar21->Name).Data.ArrayNum = iVar19;
      if ((iVar19 == 0) && (iVar16 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,iVar16,(ForAnyElementType *)pFVar1,iVar19,piVar2);
        if (iVar19 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,(longlong)iVar19 * 2);
        }
      }
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    FModulationMatrix::AddPatch(this_00,this->VoiceId,pFVar21);
    pFVar21 = this->LFOPatches[local_res8] + 6;
    pFVar21->bEnabled = false;
    (pFVar21->Source).Id = local_348.Id;
    ::FString::operator=(&(pFVar21->Source).Name,&local_348.Name);
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_208) &&
        ((FScriptContainerElement *)&local_208 <
         pFVar12 + (longlong)(pFVar21->Destinations).ArrayMax * 0x20)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar16 = (pFVar21->Destinations).ArrayNum;
    piVar2 = &(pFVar21->Destinations).ArrayMax;
    if (iVar16 == *piVar2) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar21->Destinations).AllocatorInstance,piVar2);
    }
    (pFVar21->Destinations).ArrayNum = iVar16 + 1;
    pFVar12 = (pFVar21->Destinations).AllocatorInstance.Data;
    lVar22 = (longlong)iVar16 * 0x20;
    *(uint *)(pFVar12 + lVar22) = local_208;
    *(int *)(pFVar12 + lVar22 + 4) = local_204;
    *(float *)(pFVar12 + lVar22 + 8) = local_200;
    ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_1f8);
    ::FString::FString(&local_278,"ELFOPatch::PatchToOscPan");
    FVar14.Data = local_278.Data.AllocatorInstance.Data;
    pFVar1 = &pFVar21->Name;
    if (pFVar1 != &local_278) {
      piVar2 = &(pFVar21->Name).Data.ArrayMax;
      iVar16 = *piVar2;
      iVar19 = local_278.Data.ArrayNum;
      (pFVar21->Name).Data.ArrayNum = iVar19;
      if ((iVar19 == 0) && (iVar16 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,iVar16,(ForAnyElementType *)pFVar1,iVar19,piVar2);
        if (iVar19 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,(longlong)iVar19 * 2);
        }
      }
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    FModulationMatrix::AddPatch(this_00,this->VoiceId,pFVar21);
    if (local_348.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Name.Data.AllocatorInstance.Data);
    }
    local_res18 = local_res18 + 1;
    uVar17 = (ulonglong)local_res18;
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + 0x240;
    if (1 < (int)local_res18) {
      pFVar21 = this->LFOPatches[0] + 7;
      this->LFOPatches[0][7].bEnabled = false;
      pFVar18 = FLFO::GetModSourceNormalPhase(this->LFO,&local_a0);
      pFVar1 = &this->LFOPatches[0][7].Source.Name;
      pFVar3 = &pFVar18->Name;
      (pFVar21->Source).Id = pFVar18->Id;
      if (pFVar1 != pFVar3) {
        pFVar12 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        this->LFOPatches[0][7].Source.Name.Data.ArrayNum = (pFVar18->Name).Data.ArrayNum;
        this->LFOPatches[0][7].Source.Name.Data.ArrayMax = (pFVar18->Name).Data.ArrayMax;
        (pFVar18->Name).Data.ArrayNum = 0;
        (pFVar18->Name).Data.ArrayMax = 0;
      }
      if (local_a0.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Name.Data.AllocatorInstance.Data);
      }
      pFVar12 = this->LFOPatches[0][7].Destinations.AllocatorInstance.Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_198) &&
          ((FScriptContainerElement *)&local_198 <
           pFVar12 + (longlong)this->LFOPatches[0][7].Destinations.ArrayMax * 0x20)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar16 = this->LFOPatches[0][7].Destinations.ArrayNum;
      piVar2 = &this->LFOPatches[0][7].Destinations.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&this->LFOPatches[0][7].Destinations.AllocatorInstance,piVar2);
      }
      this->LFOPatches[0][7].Destinations.ArrayNum = iVar16 + 1;
      pFVar12 = this->LFOPatches[0][7].Destinations.AllocatorInstance.Data;
      lVar22 = (longlong)iVar16 * 0x20;
      *(undefined4 *)(pFVar12 + lVar22) = local_198;
      *(undefined4 *)(pFVar12 + lVar22 + 4) = local_194;
      *(undefined4 *)(pFVar12 + lVar22 + 8) = local_190;
      ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_188);
      ::FString::FString(&local_268,"ELFOPatch::PatchLFO1ToLFO2Frequency");
      FVar14.Data = local_268.Data.AllocatorInstance.Data;
      pFVar1 = &this->LFOPatches[0][7].Name;
      if (pFVar1 != &local_268) {
        piVar2 = &this->LFOPatches[0][7].Name.Data.ArrayMax;
        iVar16 = *piVar2;
        this->LFOPatches[0][7].Name.Data.ArrayNum = local_268.Data.ArrayNum;
        if ((local_268.Data.ArrayNum == 0) && (iVar16 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_268.Data.ArrayNum,iVar16,(ForAnyElementType *)pFVar1,
                     local_268.Data.ArrayNum,piVar2);
          if (local_268.Data.ArrayNum != 0) {
            memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,
                   (longlong)local_268.Data.ArrayNum * 2);
          }
        }
      }
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      FModulationMatrix::AddPatch(this_00,this->VoiceId,pFVar21);
      pFVar21 = this->LFOPatches[0] + 8;
      this->LFOPatches[0][8].bEnabled = false;
      pFVar18 = FLFO::GetModSourceNormalPhase(this->LFO,local_88);
      pFVar1 = &this->LFOPatches[0][8].Source.Name;
      pFVar3 = &pFVar18->Name;
      (pFVar21->Source).Id = pFVar18->Id;
      if (pFVar1 != pFVar3) {
        pFVar12 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        this->LFOPatches[0][8].Source.Name.Data.ArrayNum = (pFVar18->Name).Data.ArrayNum;
        this->LFOPatches[0][8].Source.Name.Data.ArrayMax = (pFVar18->Name).Data.ArrayMax;
        (pFVar18->Name).Data.ArrayNum = 0;
        (pFVar18->Name).Data.ArrayMax = 0;
      }
      if (local_88[0].Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88[0].Name.Data.AllocatorInstance.Data);
      }
      pFVar12 = this->LFOPatches[0][8].Destinations.AllocatorInstance.Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_3b8) &&
          ((FScriptContainerElement *)&local_3b8 <
           pFVar12 + (longlong)this->LFOPatches[0][8].Destinations.ArrayMax * 0x20)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar16 = this->LFOPatches[0][8].Destinations.ArrayNum;
      piVar2 = &this->LFOPatches[0][8].Destinations.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&this->LFOPatches[0][8].Destinations.AllocatorInstance,piVar2);
      }
      this->LFOPatches[0][8].Destinations.ArrayNum = iVar16 + 1;
      pFVar12 = this->LFOPatches[0][8].Destinations.AllocatorInstance.Data;
      lVar22 = (longlong)iVar16 * 0x20;
      *(undefined4 *)(pFVar12 + lVar22) = local_3b8;
      *(undefined4 *)(pFVar12 + lVar22 + 4) = local_3b4;
      *(undefined4 *)(pFVar12 + lVar22 + 8) = local_3b0;
      ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_3a8);
      ::FString::FString(&local_258,"ELFOPatch::PatchLFO1ToLFO2Frequency");
      FVar14.Data = local_258.Data.AllocatorInstance.Data;
      pFVar1 = &this->LFOPatches[0][8].Name;
      if (pFVar1 != &local_258) {
        piVar2 = &this->LFOPatches[0][8].Name.Data.ArrayMax;
        iVar16 = *piVar2;
        this->LFOPatches[0][8].Name.Data.ArrayNum = local_258.Data.ArrayNum;
        if ((local_258.Data.ArrayNum == 0) && (iVar16 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_258.Data.ArrayNum,iVar16,(ForAnyElementType *)pFVar1,
                     local_258.Data.ArrayNum,piVar2);
          if (local_258.Data.ArrayNum != 0) {
            memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,
                   (longlong)local_258.Data.ArrayNum * 2);
          }
        }
      }
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      FModulationMatrix::AddPatch(this_00,this->VoiceId,pFVar21);
      (this->Env_To_Amp).bEnabled = true;
      local_178 = (this->GainEnv).EnvSource.Id;
      ::FString::FString(&local_170,&(this->GainEnv).EnvSource.Name);
      (this->Env_To_Amp).Source.Id = local_178;
      ::FString::operator=(&(this->Env_To_Amp).Source.Name,&local_170);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      pTVar7 = &(this->Env_To_Amp).Destinations;
      pFVar12 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_1c8) &&
          ((FScriptContainerElement *)&local_1c8 <
           pFVar12 + (longlong)(this->Env_To_Amp).Destinations.ArrayMax * 0x20)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar16 = (this->Env_To_Amp).Destinations.ArrayNum;
      piVar2 = &(this->Env_To_Amp).Destinations.ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar7->AllocatorInstance,piVar2);
      }
      (this->Env_To_Amp).Destinations.ArrayNum = iVar16 + 1;
      pFVar12 = (pTVar7->AllocatorInstance).Data;
      lVar22 = (longlong)iVar16 * 0x20;
      *(uint *)(pFVar12 + lVar22) = local_1c8;
      *(int *)(pFVar12 + lVar22 + 4) = local_1c4;
      *(float *)(pFVar12 + lVar22 + 8) = local_1c0;
      ::FString::FString((FString *)(pFVar12 + lVar22 + 0x10),&local_1b8);
      ::FString::FString(&local_248,"PatchEnvToAmp");
      FVar14.Data = local_248.Data.AllocatorInstance.Data;
      pFVar1 = &(this->Env_To_Amp).Name;
      if (pFVar1 != &local_248) {
        piVar2 = &(this->Env_To_Amp).Name.Data.ArrayMax;
        iVar16 = *piVar2;
        (this->Env_To_Amp).Name.Data.ArrayNum = local_248.Data.ArrayNum;
        if ((local_248.Data.ArrayNum == 0) && (iVar16 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_248.Data.ArrayNum,iVar16,(ForAnyElementType *)pFVar1,
                     local_248.Data.ArrayNum,piVar2);
          if (local_248.Data.ArrayNum != 0) {
            memcpy((pFVar1->Data).AllocatorInstance.Data,FVar14.Data,
                   (longlong)local_248.Data.ArrayNum * 2);
          }
        }
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FModulationMatrix::AddPatch(this_00,this->VoiceId,&this->Env_To_Amp);
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_428.Data.AllocatorInstance.Data);
      }
      if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
      if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data.AllocatorInstance.Data);
      }
      if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_488.Data.AllocatorInstance.Data);
      }
      return;
    }
  }
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

// Kill @ 14f0e7c40

void __thiscall Audio::FEpicSynth1Voice::Kill(FEpicSynth1Voice *this)

{
  FEpicSynth1Voice *pFVar1;
  FLFO *pFVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 2;
  lVar3 = 2;
  pFVar1 = this;
  do {
    (**(code **)(pFVar1->Oscil[0]._padding_ + 0x18))(pFVar1);
    pFVar1 = (FEpicSynth1Voice *)(pFVar1->Oscil + 1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  pFVar2 = this->LFO;
  do {
    (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
    pFVar2 = pFVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  (**(code **)((this->GainEnv)._padding_ + 0x30))();
  (**(code **)((this->ModEnv)._padding_ + 0x30))();
  FAmp::Reset(&this->Amp);
  this->bIsFinished = true;
  this->bIsActive = false;
  this->VoiceGeneration = 0xffffffff;
  return;
}

// NoteOff @ 14f0e8550

void __thiscall Audio::FEpicSynth1Voice::NoteOff(FEpicSynth1Voice *this,uint param_1,bool param_2)

{
  char cVar1;
  
  this->DurationSampleCount = -1;
  if ((this->bIsFinished == false) && ((this->MidiNote == param_1 || (param_2)))) {
    (**(code **)((this->GainEnv)._padding_ + 0x20))(&this->GainEnv);
    (**(code **)((this->ModEnv)._padding_ + 0x20))();
    cVar1 = (**(code **)((this->GainEnv)._padding_ + 0x38))(&this->GainEnv);
    if (cVar1 != '\0') {
      this->bIsFinished = true;
      FAmp::Reset(&this->Amp);
      return;
    }
  }
  return;
}

// NoteOn @ 14f0e8cf0

void __thiscall
Audio::FEpicSynth1Voice::NoteOn(FEpicSynth1Voice *this,uint param_1,float param_2,float param_3)

{
  float fVar1;
  uint uVar2;
  FEpicSynth1 *pFVar3;
  int iVar4;
  FEpicSynth1Voice *pFVar5;
  FLFO *pFVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  this->bIsFinished = false;
  this->bIsActive = true;
  this->ControlSampleCount = 0;
  this->CurrentSampleCount = 0;
  this->DurationSampleCount = -1;
  if (0.0 < param_3) {
    this->DurationSampleCount = (int)(param_3 * this->ParentSynth->SampleRate);
  }
  fVar1 = __real_40000000;
  uVar2 = this->ParentSynth->VoiceGeneration;
  this->ParentSynth->VoiceGeneration = uVar2 + 1;
  pFVar3 = this->ParentSynth;
  this->VoiceGeneration = uVar2;
  fVar9 = powf(fVar1,((float)pFVar3->LastMidiNote - __real_428a0000) * __real_3daaaaab);
  fVar9 = fVar9 * __real_43dc0000;
  fVar10 = powf(__real_40000000,((float)param_1 - __real_428a0000) * __real_3daaaaab);
  fVar1 = pFVar3->Portamento;
  fVar10 = fVar10 * __real_43dc0000;
  (this->PortamentoFrequency).StartValue = fVar9;
  (this->PortamentoFrequency).CurrentValue = fVar9;
  if ((this->PortamentoFrequency).bIsInit == false) {
    iVar4 = (int)(fVar1 * (this->PortamentoFrequency).SampleRate);
    (this->PortamentoFrequency).DurationTicks = iVar4;
    (this->PortamentoFrequency).CurrentTick = 0;
    if (iVar4 == 0) {
      (this->PortamentoFrequency).CurrentValue = fVar10;
    }
    else {
      (this->PortamentoFrequency).StartValue = fVar9;
      (this->PortamentoFrequency).DeltaValue = fVar10 - fVar9;
    }
  }
  else {
    (this->PortamentoFrequency).bIsInit = false;
    (this->PortamentoFrequency).DurationTicks = 0;
    (this->PortamentoFrequency).CurrentValue = fVar10;
    (this->PortamentoFrequency).CurrentTick = 0;
  }
  lVar8 = 2;
  if ((char)this->Oscil[0]._padding_ == '\0') {
    FAmp::Reset(&this->Amp);
    FAmp::SetVelocity(&this->Amp,param_2);
    lVar7 = 2;
    pFVar5 = this;
    do {
      (**(code **)(pFVar5->Oscil[0]._padding_ + 0x10))(pFVar5);
      pFVar5 = (FEpicSynth1Voice *)(pFVar5->Oscil + 1);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  else if ((this->GainEnv).bIsRetriggerMode != '\0') {
    FAmp::SetVelocity(&this->Amp,param_2);
  }
  pFVar6 = this->LFO;
  do {
    (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6);
    pFVar6 = pFVar6 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  (**(code **)((this->GainEnv)._padding_ + 8))();
  (**(code **)((this->ModEnv)._padding_ + 8))();
  this->MidiNote = param_1;
  return;
}

// Reset @ 14f0f7d30

void __thiscall Audio::FEpicSynth1Voice::Reset(FEpicSynth1Voice *this)

{
  FEpicSynth1Voice *pFVar1;
  longlong lVar2;
  FAmp *this_00;
  
  this->bIsFinished = true;
  this->bIsActive = false;
  this->VoiceGeneration = 0xffffffff;
  this_00 = this->OscilPan;
  lVar2 = 2;
  pFVar1 = this;
  do {
    (**(code **)(pFVar1->Oscil[0]._padding_ + 0x30))(pFVar1);
    FAmp::Reset(this_00);
    pFVar1 = (FEpicSynth1Voice *)(pFVar1->Oscil + 1);
    this_00 = this_00 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (**(code **)((this->OnePoleFilter)._padding_ + 0x50))();
  (**(code **)((this->StateVarFilter)._padding_ + 0x50))();
  (**(code **)((this->LadderFilter)._padding_ + 0x50))();
  FAmp::Reset(&this->Amp);
  return;
}

// SetEnablePatch @ 14f0fa6d0

bool __thiscall
Audio::FEpicSynth1Voice::SetEnablePatch(FEpicSynth1Voice *this,FPatchId param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->DynamicPatches).field_0x8 != *(int *)&(this->DynamicPatches).field_0x34) {
    puVar7 = *(undefined1 **)&(this->DynamicPatches).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->DynamicPatches).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->DynamicPatches).field_0x48 - 1U & param_1.Id) * 4);
    if (iVar4 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)&this->DynamicPatches);
        if (*piVar5 == param_1.Id) {
          plVar6 = (longlong *)(piVar5 + 2);
          if (piVar5 == (int *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          if (plVar6 == (longlong *)0x0) {
            return false;
          }
          if ((*plVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          *(bool *)(*plVar6 + 0x38) = param_2;
          return true;
        }
        iVar4 = piVar5[6];
      } while (iVar4 != -1);
    }
  }
  return false;
}

// SetEnvModBiasPatch @ 14f0fad00

void __thiscall
Audio::FEpicSynth1Voice::SetEnvModBiasPatch(FEpicSynth1Voice *this,ESynthModEnvBiasPatch param_1)

{
  this->ModEnvBiasPatches[0].bEnabled = false;
  this->ModEnvBiasPatches[1].bEnabled = false;
  this->ModEnvBiasPatches[2].bEnabled = false;
  this->ModEnvBiasPatches[3].bEnabled = false;
  this->ModEnvBiasPatches[4].bEnabled = false;
  this->ModEnvBiasPatches[5].bEnabled = false;
  this->ModEnvBiasPatches[6].bEnabled = false;
  this->ModEnvBiasPatches[7].bEnabled = false;
  if (param_1 != PatchToNone) {
    this->ModEnvBiasPatches[param_1].bEnabled = true;
  }
  this->CurrentModBiasPatchType = param_1;
  return;
}

// SetEnvModPatch @ 14f0fad60

void __thiscall
Audio::FEpicSynth1Voice::SetEnvModPatch(FEpicSynth1Voice *this,ESynthModEnvPatch param_1)

{
  this->ModEnvPatches[0].bEnabled = false;
  this->ModEnvPatches[1].bEnabled = false;
  this->ModEnvPatches[2].bEnabled = false;
  this->ModEnvPatches[3].bEnabled = false;
  this->ModEnvPatches[4].bEnabled = false;
  this->ModEnvPatches[5].bEnabled = false;
  this->ModEnvPatches[6].bEnabled = false;
  this->ModEnvPatches[7].bEnabled = false;
  if (param_1 != PatchToNone) {
    this->ModEnvPatches[param_1].bEnabled = true;
  }
  this->CurrentModPatchType = param_1;
  return;
}

// SetLFOPatch @ 14f0fd790

void __thiscall
Audio::FEpicSynth1Voice::SetLFOPatch(FEpicSynth1Voice *this,int param_1,ESynthLFOPatchType param_2)

{
  this->LFOPatches[param_1][0].bEnabled = false;
  this->LFOPatches[param_1][1].bEnabled = false;
  this->LFOPatches[param_1][2].bEnabled = false;
  this->LFOPatches[param_1][3].bEnabled = false;
  this->LFOPatches[param_1][4].bEnabled = false;
  this->LFOPatches[param_1][5].bEnabled = false;
  this->LFOPatches[param_1][6].bEnabled = false;
  this->LFOPatches[param_1][7].bEnabled = false;
  this->LFOPatches[param_1][8].bEnabled = false;
  if (param_2 != PatchToNone) {
    this->LFOPatches[param_1][param_2].bEnabled = true;
    this->CurrentPatchType[param_1] = param_2;
    return;
  }
  this->CurrentPatchType[param_1] = PatchToNone;
  return;
}

// Shutdown @ 14f1032c0

void __thiscall Audio::FEpicSynth1Voice::Shutdown(FEpicSynth1Voice *this)

{
  (**(code **)((this->GainEnv)._padding_ + 0x28))();
  (**(code **)((this->ModEnv)._padding_ + 0x28))();
  FAmp::Reset(&this->Amp);
  this->VoiceGeneration = 0xffffffff;
  return;
}

