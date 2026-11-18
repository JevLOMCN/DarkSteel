// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 1476070e0

UScriptStruct * __cdecl FAudioReverbEffect::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioReverbEffect.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAudioReverbEffect.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioReverbEffect,(UObject *)pUVar1,
                         L"AudioReverbEffect");
  }
  return Z_Registration_Info_UScriptStruct_FAudioReverbEffect.OuterSingleton;
}

// FAudioReverbEffect @ 14761cf60

FAudioReverbEffect * __thiscall
FAudioReverbEffect::FAudioReverbEffect
          (FAudioReverbEffect *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
          float param_11,float param_12,bool param_13,bool param_14)

{
  this->Density = param_11;
  this->_padding_ = (longlong)&___7FAudioReverbEffect__6B_;
  this->DecayTime = param_4;
  this->Gain = param_1;
  this->Time = 0.0;
  this->Volume = 0.0;
  this->ReflectionsGain = param_6;
  this->DecayHFRatio = param_5;
  this->bBypassEarlyReflections = param_13;
  this->LateGain = param_8;
  this->ReflectionsDelay = param_7;
  this->bBypassLateReflections = param_14;
  this->AirAbsorptionGainHF = param_12;
  this->Diffusion = param_10;
  this->GainHF = param_2;
  this->LateDelay = param_9;
  this->RoomRolloffFactor = param_3;
  return this;
}

// FAudioReverbEffect @ 14761d000

FAudioReverbEffect * __thiscall FAudioReverbEffect::FAudioReverbEffect(FAudioReverbEffect *this)

{
  this->Density = 1.0;
  this->_padding_ = (longlong)&___7FAudioReverbEffect__6B_;
  this->Time = 0.0;
  this->Volume = 0.0;
  this->Diffusion = 1.0;
  this->Gain = 0.32;
  this->GainHF = 0.89;
  this->DecayTime = 1.49;
  this->DecayHFRatio = 0.83;
  this->ReflectionsGain = 0.05;
  this->ReflectionsDelay = 0.007;
  this->LateGain = 1.26;
  this->LateDelay = 0.011;
  this->AirAbsorptionGainHF = 0.994;
  this->RoomRolloffFactor = 0.0;
  this->bBypassEarlyReflections = true;
  this->bBypassLateReflections = false;
  return this;
}

// operator= @ 147621f70

FAudioReverbEffect * __thiscall
FAudioReverbEffect::operator=(FAudioReverbEffect *this,UReverbEffect *param_1)

{
  if (param_1 != (UReverbEffect *)0x0) {
    this->Density = param_1->Density;
    this->Diffusion = param_1->Diffusion;
    this->Gain = param_1->Gain;
    this->GainHF = param_1->GainHF;
    this->DecayTime = param_1->DecayTime;
    this->DecayHFRatio = param_1->DecayHFRatio;
    this->ReflectionsGain = param_1->ReflectionsGain;
    this->ReflectionsDelay = param_1->ReflectionsDelay;
    this->LateGain = param_1->LateGain;
    this->LateDelay = param_1->LateDelay;
    this->AirAbsorptionGainHF = param_1->AirAbsorptionGainHF;
    this->bBypassEarlyReflections = param_1->bBypassEarlyReflections;
    this->bBypassLateReflections = param_1->bBypassLateReflections;
  }
  return this;
}

// Interpolate @ 147648200

bool __thiscall
FAudioReverbEffect::Interpolate
          (FAudioReverbEffect *this,FAudioEffectParameters *param_1,FAudioEffectParameters *param_2)

{
  bool bVar1;
  float fVar2;
  FAudioEffectParameters FVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FAudioEffectParameters FVar7;
  
  FVar3 = param_2[1];
  FVar7 = param_1[1];
  fVar5 = __real_3f800000;
  if (0.0 < (double)FVar3 - (double)FVar7) {
    FVar7 = param_1[1];
    FVar3 = param_2[1];
    fVar5 = (float)(((double)FApp::CurrentTime - (double)FVar7) / ((double)FVar3 - (double)FVar7));
  }
  if (__real_3f800000 <= fVar5) {
    this->Time = (double)FVar3;
    this->Volume = *(float *)(param_2 + 2);
    this->Density = *(float *)&param_2[2].field_0x4;
    this->Diffusion = *(float *)(param_2 + 3);
    this->Gain = *(float *)&param_2[3].field_0x4;
    this->GainHF = *(float *)(param_2 + 4);
    this->DecayTime = *(float *)&param_2[4].field_0x4;
    this->DecayHFRatio = *(float *)(param_2 + 5);
    this->ReflectionsGain = *(float *)&param_2[5].field_0x4;
    this->ReflectionsDelay = *(float *)(param_2 + 6);
    this->LateGain = *(float *)&param_2[6].field_0x4;
    this->LateDelay = *(float *)(param_2 + 7);
    this->AirAbsorptionGainHF = *(float *)&param_2[7].field_0x4;
    this->RoomRolloffFactor = *(float *)(param_2 + 8);
    this->bBypassEarlyReflections = (bool)param_2[8].field_0x4;
    this->bBypassLateReflections = (bool)param_2[8].field_0x5;
    return true;
  }
  if (fVar5 <= 0.0) {
    this->Time = (double)FVar7;
    this->Volume = *(float *)(param_1 + 2);
    this->Density = *(float *)&param_1[2].field_0x4;
    this->Diffusion = *(float *)(param_1 + 3);
    this->Gain = *(float *)&param_1[3].field_0x4;
    this->GainHF = *(float *)(param_1 + 4);
    this->DecayTime = *(float *)&param_1[4].field_0x4;
    this->DecayHFRatio = *(float *)(param_1 + 5);
    this->ReflectionsGain = *(float *)&param_1[5].field_0x4;
    this->ReflectionsDelay = *(float *)(param_1 + 6);
    this->LateGain = *(float *)&param_1[6].field_0x4;
    this->LateDelay = *(float *)(param_1 + 7);
    this->AirAbsorptionGainHF = *(float *)&param_1[7].field_0x4;
    this->RoomRolloffFactor = *(float *)(param_1 + 8);
    this->bBypassEarlyReflections = (bool)param_1[8].field_0x4;
    this->bBypassLateReflections = (bool)param_1[8].field_0x5;
    return false;
  }
  fVar4 = __real_3f800000 - fVar5;
  this->Time = (double)FApp::CurrentTime;
  this->Volume = fVar5 * *(float *)(param_2 + 2) + fVar4 * *(float *)(param_1 + 2);
  fVar6 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_1 + 4);
  if (param_1[8].field_0x4 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x4 != '\0') {
    fVar6 = 0.0;
  }
  this->GainHF = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)&param_2[5].field_0x4;
  fVar2 = *(float *)&param_1[5].field_0x4;
  if (param_1[8].field_0x4 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x4 != '\0') {
    fVar6 = 0.0;
  }
  this->ReflectionsGain = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)(param_2 + 6);
  fVar2 = *(float *)(param_1 + 6);
  if (param_1[8].field_0x4 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x4 != '\0') {
    fVar6 = 0.0;
  }
  this->ReflectionsDelay = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)&param_2[2].field_0x4;
  fVar2 = *(float *)&param_1[2].field_0x4;
  if (param_1[8].field_0x5 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x5 != '\0') {
    fVar6 = 0.0;
  }
  this->Density = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)(param_2 + 3);
  fVar2 = *(float *)(param_1 + 3);
  if (param_1[8].field_0x5 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x5 != '\0') {
    fVar6 = 0.0;
  }
  this->Diffusion = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)&param_2[3].field_0x4;
  fVar2 = *(float *)&param_1[3].field_0x4;
  if (param_1[8].field_0x5 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x5 != '\0') {
    fVar6 = 0.0;
  }
  this->Gain = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)&param_2[4].field_0x4;
  fVar2 = *(float *)&param_1[4].field_0x4;
  if (param_1[8].field_0x5 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x5 != '\0') {
    fVar6 = 0.0;
  }
  this->DecayTime = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)(param_2 + 5);
  fVar2 = *(float *)(param_1 + 5);
  if (param_1[8].field_0x5 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x5 != '\0') {
    fVar6 = 0.0;
  }
  this->DecayHFRatio = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)&param_2[6].field_0x4;
  fVar2 = *(float *)&param_1[6].field_0x4;
  if (param_1[8].field_0x5 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x5 != '\0') {
    fVar6 = 0.0;
  }
  this->LateGain = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)(param_2 + 7);
  fVar2 = *(float *)(param_1 + 7);
  if (param_1[8].field_0x5 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x5 != '\0') {
    fVar6 = 0.0;
  }
  this->LateDelay = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)&param_2[7].field_0x4;
  fVar2 = *(float *)&param_1[7].field_0x4;
  if (param_1[8].field_0x5 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x5 != '\0') {
    fVar6 = 0.0;
  }
  this->AirAbsorptionGainHF = fVar4 * fVar2 + fVar5 * fVar6;
  fVar6 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_1 + 8);
  if (param_1[8].field_0x5 != '\0') {
    fVar2 = 0.0;
  }
  if (param_2[8].field_0x5 != '\0') {
    fVar6 = 0.0;
  }
  this->RoomRolloffFactor = fVar4 * fVar2 + fVar5 * fVar6;
  if ((param_1[8].field_0x4 == '\0') || (param_2[8].field_0x4 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bBypassEarlyReflections = bVar1;
  if ((param_1[8].field_0x5 != '\0') && (param_2[8].field_0x5 != '\0')) {
    this->bBypassLateReflections = true;
    return false;
  }
  this->bBypassLateReflections = false;
  return false;
}

// PrintSettings @ 14764d060

void __thiscall FAudioReverbEffect::PrintSettings(FAudioReverbEffect *this)

{
  return;
}

