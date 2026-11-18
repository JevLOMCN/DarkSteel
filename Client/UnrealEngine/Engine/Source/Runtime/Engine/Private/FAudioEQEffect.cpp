// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ClampValues @ 14762d2f0

void __thiscall FAudioEQEffect::ClampValues(FAudioEQEffect *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = __real_469c4000;
  fVar4 = __real_41a00000;
  fVar1 = this->FrequencyCenter0;
  if (__real_469c4000 <= this->FrequencyCenter0) {
    fVar1 = __real_469c4000;
  }
  fVar3 = this->FrequencyCenter2;
  if (__real_469c4000 <= this->FrequencyCenter2) {
    fVar3 = __real_469c4000;
  }
  if (fVar1 <= __real_41a00000) {
    fVar1 = __real_41a00000;
  }
  if (fVar3 <= __real_41a00000) {
    fVar3 = __real_41a00000;
  }
  this->FrequencyCenter0 = fVar1;
  fVar1 = this->FrequencyCenter1;
  if (fVar2 <= this->FrequencyCenter1) {
    fVar1 = fVar2;
  }
  this->FrequencyCenter2 = fVar3;
  if (fVar1 <= fVar4) {
    fVar1 = fVar4;
  }
  this->FrequencyCenter1 = fVar1;
  fVar1 = __real_40fe147b;
  fVar3 = this->FrequencyCenter3;
  if (fVar2 <= this->FrequencyCenter3) {
    fVar3 = fVar2;
  }
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = this->Gain0;
  if (__real_40fe147b <= this->Gain0) {
    fVar4 = __real_40fe147b;
  }
  this->FrequencyCenter3 = fVar3;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar2 = this->Gain1;
  if (fVar1 <= this->Gain1) {
    fVar2 = fVar1;
  }
  this->Gain0 = fVar4;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar4 = this->Gain2;
  if (fVar1 <= this->Gain2) {
    fVar4 = fVar1;
  }
  this->Gain1 = fVar2;
  fVar2 = __real_3dcccccd;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar3 = this->Gain3;
  if (fVar1 <= this->Gain3) {
    fVar3 = fVar1;
  }
  this->Gain2 = fVar4;
  fVar4 = __real_40000000;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar1 = this->Bandwidth0;
  if (__real_40000000 <= this->Bandwidth0) {
    fVar1 = __real_40000000;
  }
  this->Gain3 = fVar3;
  fVar3 = this->Bandwidth1;
  if (fVar4 <= this->Bandwidth1) {
    fVar3 = fVar4;
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  this->Bandwidth0 = fVar1;
  fVar1 = this->Bandwidth2;
  if (fVar4 <= this->Bandwidth2) {
    fVar1 = fVar4;
  }
  this->Bandwidth1 = fVar3;
  fVar3 = this->Bandwidth3;
  if (fVar4 <= this->Bandwidth3) {
    fVar3 = fVar4;
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  this->Bandwidth2 = fVar1;
  this->Bandwidth3 = fVar3;
  return;
}

// Interpolate @ 147647fb0

bool __thiscall
FAudioEQEffect::Interpolate
          (FAudioEQEffect *this,FAudioEffectParameters *param_1,FAudioEffectParameters *param_2)

{
  FAudioEffectParameters FVar1;
  FAudioEffectParameters FVar2;
  float fVar3;
  
  FVar2 = param_2[1];
  FVar1 = param_1[1];
  fVar3 = __real_3f800000;
  if (0.0 < (double)FVar2 - (double)FVar1) {
    FVar1 = param_1[1];
    FVar2 = param_2[1];
    fVar3 = (float)(((double)FApp::CurrentTime - (double)FVar1) / ((double)FVar2 - (double)FVar1));
  }
  if (__real_3f800000 <= fVar3) {
    this->RootTime = (double)FVar2;
    this->FrequencyCenter0 = *(float *)(param_2 + 2);
    this->Gain0 = *(float *)&param_2[2].field_0x4;
    this->Bandwidth0 = *(float *)(param_2 + 3);
    this->FrequencyCenter1 = *(float *)&param_2[3].field_0x4;
    this->Gain1 = *(float *)(param_2 + 4);
    this->Bandwidth1 = *(float *)&param_2[4].field_0x4;
    this->FrequencyCenter2 = *(float *)(param_2 + 5);
    this->Gain2 = *(float *)&param_2[5].field_0x4;
    this->Bandwidth2 = *(float *)(param_2 + 6);
    this->FrequencyCenter3 = *(float *)&param_2[6].field_0x4;
    this->Gain3 = *(float *)(param_2 + 7);
    this->Bandwidth3 = *(float *)&param_2[7].field_0x4;
    return true;
  }
  if (fVar3 <= 0.0) {
    this->RootTime = (double)FVar1;
    this->FrequencyCenter0 = *(float *)(param_1 + 2);
    this->Gain0 = *(float *)&param_1[2].field_0x4;
    this->Bandwidth0 = *(float *)(param_1 + 3);
    this->FrequencyCenter1 = *(float *)&param_1[3].field_0x4;
    this->Gain1 = *(float *)(param_1 + 4);
    this->Bandwidth1 = *(float *)&param_1[4].field_0x4;
    this->FrequencyCenter2 = *(float *)(param_1 + 5);
    this->Gain2 = *(float *)&param_1[5].field_0x4;
    this->Bandwidth2 = *(float *)(param_1 + 6);
    this->FrequencyCenter3 = *(float *)&param_1[6].field_0x4;
    this->Gain3 = *(float *)(param_1 + 7);
    this->Bandwidth3 = *(float *)&param_1[7].field_0x4;
    return false;
  }
  this->RootTime = (double)FApp::CurrentTime;
  this->FrequencyCenter0 =
       (*(float *)(param_2 + 2) - *(float *)(param_1 + 2)) * fVar3 + *(float *)(param_1 + 2);
  this->FrequencyCenter1 =
       (*(float *)&param_2[3].field_0x4 - *(float *)&param_1[3].field_0x4) * fVar3 +
       *(float *)&param_1[3].field_0x4;
  this->FrequencyCenter2 =
       (*(float *)(param_2 + 5) - *(float *)(param_1 + 5)) * fVar3 + *(float *)(param_1 + 5);
  this->FrequencyCenter3 =
       (*(float *)&param_2[6].field_0x4 - *(float *)&param_1[6].field_0x4) * fVar3 +
       *(float *)&param_1[6].field_0x4;
  this->Gain0 = (*(float *)&param_2[2].field_0x4 - *(float *)&param_1[2].field_0x4) * fVar3 +
                *(float *)&param_1[2].field_0x4;
  this->Gain1 = (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) * fVar3 +
                *(float *)(param_1 + 4);
  this->Gain2 = (*(float *)&param_2[5].field_0x4 - *(float *)&param_1[5].field_0x4) * fVar3 +
                *(float *)&param_1[5].field_0x4;
  this->Gain3 = (*(float *)(param_2 + 7) - *(float *)(param_1 + 7)) * fVar3 +
                *(float *)(param_1 + 7);
  this->Bandwidth0 =
       (*(float *)(param_2 + 3) - *(float *)(param_1 + 3)) * fVar3 + *(float *)(param_1 + 3);
  this->Bandwidth1 =
       (*(float *)&param_2[4].field_0x4 - *(float *)&param_1[4].field_0x4) * fVar3 +
       *(float *)&param_1[4].field_0x4;
  this->Bandwidth2 =
       (*(float *)(param_2 + 6) - *(float *)(param_1 + 6)) * fVar3 + *(float *)(param_1 + 6);
  this->Bandwidth3 =
       (*(float *)&param_2[7].field_0x4 - *(float *)&param_1[7].field_0x4) * fVar3 +
       *(float *)&param_1[7].field_0x4;
  return false;
}

// PrintSettings @ 14764d050

void __thiscall FAudioEQEffect::PrintSettings(FAudioEQEffect *this)

{
  return;
}

// StaticStruct @ 148674a80

UScriptStruct * __cdecl FAudioEQEffect::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioEQEffect.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAudioEQEffect.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioEQEffect,(UObject *)pUVar1,L"AudioEQEffect"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FAudioEQEffect.OuterSingleton;
}

