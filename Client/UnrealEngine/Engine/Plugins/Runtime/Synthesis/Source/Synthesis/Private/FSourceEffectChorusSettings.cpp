// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 5

// StaticStruct @ 14f09fc60

UScriptStruct * __cdecl FSourceEffectChorusSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectChorusSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSourceEffectChorusSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectChorusSettings,(UObject *)pUVar1,
                         L"SourceEffectChorusSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSourceEffectChorusSettings.OuterSingleton;
}

// FSourceEffectChorusSettings @ 14f0b7a10

FSourceEffectChorusSettings * __thiscall
FSourceEffectChorusSettings::FSourceEffectChorusSettings
          (FSourceEffectChorusSettings *this,FSourceEffectChorusSettings *param_1)

{
  float fVar1;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar2;
  
  this->Depth = param_1->Depth;
  this->Frequency = param_1->Frequency;
  this->Feedback = param_1->Feedback;
  this->WetLevel = param_1->WetLevel;
  this->DryLevel = param_1->DryLevel;
  this->Spread = param_1->Spread;
  (this->DepthModulation).Value = (param_1->DepthModulation).Value;
  pTVar2 = &(this->DepthModulation).Modulators;
  *(undefined8 *)&pTVar2->Elements = 0;
  *(undefined8 *)&(this->DepthModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DepthModulation).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DepthModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DepthModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DepthModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DepthModulation).Modulators.Elements.field_0x34 = 0;
  (this->DepthModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DepthModulation).Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar2,&(param_1->DepthModulation).Modulators);
  fVar1 = (param_1->FrequencyModulation).Value;
  pTVar2 = &(this->FrequencyModulation).Modulators;
  *(undefined8 *)&pTVar2->Elements = 0;
  *(undefined8 *)&(this->FrequencyModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FrequencyModulation).Modulators.Elements.field_0x20 = 0;
  (this->FrequencyModulation).Value = fVar1;
  *(undefined4 *)&(this->FrequencyModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FrequencyModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FrequencyModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FrequencyModulation).Modulators.Elements.field_0x34 = 0;
  (this->FrequencyModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FrequencyModulation).Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar2,&(param_1->FrequencyModulation).Modulators);
  fVar1 = (param_1->FeedbackModulation).Value;
  pTVar2 = &(this->FeedbackModulation).Modulators;
  *(undefined8 *)&pTVar2->Elements = 0;
  *(undefined8 *)&(this->FeedbackModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FeedbackModulation).Modulators.Elements.field_0x20 = 0;
  (this->FeedbackModulation).Value = fVar1;
  *(undefined4 *)&(this->FeedbackModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FeedbackModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FeedbackModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FeedbackModulation).Modulators.Elements.field_0x34 = 0;
  (this->FeedbackModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FeedbackModulation).Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar2,&(param_1->FeedbackModulation).Modulators);
  fVar1 = (param_1->WetModulation).Value;
  pTVar2 = &(this->WetModulation).Modulators;
  *(undefined8 *)&pTVar2->Elements = 0;
  *(undefined8 *)&(this->WetModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WetModulation).Modulators.Elements.field_0x20 = 0;
  (this->WetModulation).Value = fVar1;
  *(undefined4 *)&(this->WetModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WetModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WetModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WetModulation).Modulators.Elements.field_0x34 = 0;
  (this->WetModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->WetModulation).Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar2,&(param_1->WetModulation).Modulators);
  fVar1 = (param_1->DryModulation).Value;
  pTVar2 = &(this->DryModulation).Modulators;
  *(undefined8 *)&pTVar2->Elements = 0;
  *(undefined8 *)&(this->DryModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DryModulation).Modulators.Elements.field_0x20 = 0;
  (this->DryModulation).Value = fVar1;
  *(undefined4 *)&(this->DryModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DryModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DryModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DryModulation).Modulators.Elements.field_0x34 = 0;
  (this->DryModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DryModulation).Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar2,&(param_1->DryModulation).Modulators);
  fVar1 = (param_1->SpreadModulation).Value;
  pTVar2 = &(this->SpreadModulation).Modulators;
  *(undefined8 *)&pTVar2->Elements = 0;
  *(undefined8 *)&(this->SpreadModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SpreadModulation).Modulators.Elements.field_0x20 = 0;
  (this->SpreadModulation).Value = fVar1;
  *(undefined4 *)&(this->SpreadModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SpreadModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SpreadModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SpreadModulation).Modulators.Elements.field_0x34 = 0;
  (this->SpreadModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SpreadModulation).Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar2,&(param_1->SpreadModulation).Modulators);
  return this;
}

// FSourceEffectChorusSettings @ 14f0b7bf0

FSourceEffectChorusSettings * __thiscall
FSourceEffectChorusSettings::FSourceEffectChorusSettings(FSourceEffectChorusSettings *this)

{
  this->Depth = 0.2;
  *(undefined8 *)&(this->DepthModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DepthModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->DepthModulation).Modulators.Elements.field_0x20 = 0;
  this->Frequency = 2.0;
  this->Feedback = 0.3;
  this->WetLevel = 0.5;
  this->DryLevel = 0.5;
  this->Spread = 0.0;
  *(undefined4 *)&(this->DepthModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DepthModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DepthModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DepthModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->DepthModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DepthModulation).Modulators.HashSize = 0;
  *(undefined8 *)&(this->FrequencyModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FrequencyModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->FrequencyModulation).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FrequencyModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FrequencyModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FrequencyModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->FrequencyModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->FrequencyModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FrequencyModulation).Modulators.HashSize = 0;
  *(undefined8 *)&(this->FeedbackModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FeedbackModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->FeedbackModulation).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FeedbackModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FeedbackModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FeedbackModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->FeedbackModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->FeedbackModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FeedbackModulation).Modulators.HashSize = 0;
  *(undefined8 *)&(this->WetModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WetModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->WetModulation).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->WetModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WetModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WetModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->WetModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->WetModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->WetModulation).Modulators.HashSize = 0;
  *(undefined8 *)&(this->DryModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DryModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->DryModulation).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DryModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DryModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DryModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DryModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->DryModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DryModulation).Modulators.HashSize = 0;
  *(undefined8 *)&(this->SpreadModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->SpreadModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SpreadModulation).Modulators.Elements.field_0x20 = 0;
  (this->SpreadModulation).Value = 1.0;
  *(undefined4 *)&(this->SpreadModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SpreadModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SpreadModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SpreadModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->SpreadModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SpreadModulation).Modulators.HashSize = 0;
  (this->DepthModulation).Value = 0.0;
  (this->FrequencyModulation).Value = 2.0;
  (this->FeedbackModulation).Value = 0.3;
  (this->WetModulation).Value = 0.5;
  (this->DryModulation).Value = 0.5;
  return this;
}

// ~FSourceEffectChorusSettings @ 14f0bf0f0

void __thiscall
FSourceEffectChorusSettings::~FSourceEffectChorusSettings(FSourceEffectChorusSettings *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->SpreadModulation).Modulators.HashSize = 0;
  FVar1 = (this->SpreadModulation).Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SpreadModulation).Modulators.Elements);
  (this->DryModulation).Modulators.HashSize = 0;
  FVar1 = (this->DryModulation).Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DryModulation).Modulators.Elements);
  (this->WetModulation).Modulators.HashSize = 0;
  FVar1 = (this->WetModulation).Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->WetModulation).Modulators.Elements);
  (this->FeedbackModulation).Modulators.HashSize = 0;
  FVar1 = (this->FeedbackModulation).Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FeedbackModulation).Modulators.Elements);
  (this->FrequencyModulation).Modulators.HashSize = 0;
  FVar1 = (this->FrequencyModulation).Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FrequencyModulation).Modulators.Elements);
  (this->DepthModulation).Modulators.HashSize = 0;
  FVar1 = (this->DepthModulation).Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DepthModulation).Modulators.Elements);
  return;
}

// operator= @ 14f0c11d0

FSourceEffectChorusSettings * __thiscall
FSourceEffectChorusSettings::operator=
          (FSourceEffectChorusSettings *this,FSourceEffectChorusSettings *param_1)

{
  this->Depth = param_1->Depth;
  this->Frequency = param_1->Frequency;
  this->Feedback = param_1->Feedback;
  this->WetLevel = param_1->WetLevel;
  this->DryLevel = param_1->DryLevel;
  this->Spread = param_1->Spread;
  (this->DepthModulation).Value = (param_1->DepthModulation).Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->DepthModulation).Modulators,&(param_1->DepthModulation).Modulators);
  (this->FrequencyModulation).Value = (param_1->FrequencyModulation).Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->FrequencyModulation).Modulators,&(param_1->FrequencyModulation).Modulators);
  (this->FeedbackModulation).Value = (param_1->FeedbackModulation).Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->FeedbackModulation).Modulators,&(param_1->FeedbackModulation).Modulators);
  (this->WetModulation).Value = (param_1->WetModulation).Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->WetModulation).Modulators,&(param_1->WetModulation).Modulators);
  (this->DryModulation).Value = (param_1->DryModulation).Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->DryModulation).Modulators,&(param_1->DryModulation).Modulators);
  (this->SpreadModulation).Value = (param_1->SpreadModulation).Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->SpreadModulation).Modulators,&(param_1->SpreadModulation).Modulators);
  return this;
}

