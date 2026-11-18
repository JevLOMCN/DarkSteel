// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 1493c30c0

UScriptStruct * __cdecl FNiagaraEmitterStateData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterStateData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraEmitterStateData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterStateData,(UObject *)pUVar1,
                         L"NiagaraEmitterStateData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraEmitterStateData.OuterSingleton;
}

// FNiagaraEmitterStateData @ 1493cc2d0

FNiagaraEmitterStateData * __thiscall
FNiagaraEmitterStateData::FNiagaraEmitterStateData(FNiagaraEmitterStateData *this)

{
  undefined1 *puVar1;
  float fVar2;
  
  fVar2 = __real_3f800000;
  this->InactiveResponse = Complete;
  this->LoopBehavior = Infinite;
  this->LoopCount = 1;
  this->LoopDurationMode = Fixed;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->LoopDuration,fVar2);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->LoopDelay,0.0);
  this->bLoopDelayEnabled = 0;
  this->bResetAgeOnAwaken = 0;
  this->bMaxDistanceEnabled = 0;
  this->bMinDistanceEnabled = 0;
  this->bEnableVisibilityCulling = 0;
  this->bEnableDistanceCulling = 0;
  this->bRecalculateDelayEachLoop = 0;
  this->bDelayFirstLoopOnly = 0;
  this->bRecalculateDurationEachLoop = 0;
  this->MaxDistance = 5000.0;
  this->MinDistance = 0.0;
  this->MinDistanceReaction = Awaken;
  this->MaxDistanceReaction = SleepAndLetParticlesFinish;
  this->VisibilityCullReaction = SleepAndLetParticlesFinish;
  this->VisibilityCullDelay = 1.0;
  return this;
}

