// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1484a5370

UScriptStruct * __cdecl FGaussianSumBloomSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGaussianSumBloomSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FGaussianSumBloomSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGaussianSumBloomSettings,(UObject *)pUVar1,
                         L"GaussianSumBloomSettings");
  }
  return Z_Registration_Info_UScriptStruct_FGaussianSumBloomSettings.OuterSingleton;
}

// FGaussianSumBloomSettings @ 1484ba3b0

FGaussianSumBloomSettings * __thiscall
FGaussianSumBloomSettings::FGaussianSumBloomSettings(FGaussianSumBloomSettings *this)

{
  this->Intensity = 1.0;
  this->Threshold = -1.0;
  this->SizeScale = 4.0;
  (this->Filter1Tint).field0_0x0._s_0.R = 0.3465;
  (this->Filter1Tint).field0_0x0._s_0.G = 0.3465;
  (this->Filter1Tint).field0_0x0._s_0.B = 0.3465;
  (this->Filter1Tint).field0_0x0._s_0.A = 1.0;
  this->Filter1Size = 0.3;
  (this->Filter2Tint).field0_0x0._s_0.R = 0.138;
  (this->Filter2Tint).field0_0x0._s_0.G = 0.138;
  (this->Filter2Tint).field0_0x0._s_0.B = 0.138;
  (this->Filter2Tint).field0_0x0._s_0.A = 1.0;
  this->Filter2Size = 1.0;
  (this->Filter3Tint).field0_0x0._s_0.R = 0.1176;
  (this->Filter3Tint).field0_0x0._s_0.G = 0.1176;
  (this->Filter3Tint).field0_0x0._s_0.B = 0.1176;
  (this->Filter3Tint).field0_0x0._s_0.A = 1.0;
  this->Filter3Size = 2.0;
  (this->Filter4Tint).field0_0x0._s_0.R = 0.066;
  (this->Filter4Tint).field0_0x0._s_0.G = 0.066;
  (this->Filter4Tint).field0_0x0._s_0.B = 0.066;
  (this->Filter4Tint).field0_0x0._s_0.A = 1.0;
  this->Filter4Size = 10.0;
  (this->Filter5Tint).field0_0x0._s_0.R = 0.066;
  (this->Filter5Tint).field0_0x0._s_0.G = 0.066;
  (this->Filter5Tint).field0_0x0._s_0.B = 0.066;
  (this->Filter5Tint).field0_0x0._s_0.A = 1.0;
  this->Filter5Size = 30.0;
  (this->Filter6Tint).field0_0x0._s_0.R = 0.061;
  (this->Filter6Tint).field0_0x0._s_0.G = 0.061;
  (this->Filter6Tint).field0_0x0._s_0.B = 0.061;
  (this->Filter6Tint).field0_0x0._s_0.A = 1.0;
  this->Filter6Size = 64.0;
  return this;
}

// ExportToPostProcessSettings @ 1484d63d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FGaussianSumBloomSettings::ExportToPostProcessSettings
          (FGaussianSumBloomSettings *this,FPostProcessSettings *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  param_1->bOverride_BloomSizeScale = '\x01';
  param_1->bOverride_BloomGaussianIntensity = '\x01';
  param_1->bOverride_Bloom2Tint = '\x01';
  param_1->bOverride_Bloom2Size = '\x01';
  param_1->bOverride_Bloom1Size = '\x01';
  param_1->bOverride_Bloom1Tint = '\x01';
  param_1->bOverride_BloomThreshold = '\x01';
  puVar1 = &param_1->field_0x6;
  param_1->bOverride_Bloom3Tint = '\x01';
  param_1->bOverride_Bloom6Size = '\x01';
  param_1->bOverride_Bloom6Tint = '\x01';
  param_1->bOverride_Bloom5Size = '\x01';
  param_1->bOverride_Bloom5Tint = '\x01';
  param_1->bOverride_Bloom4Size = '\x01';
  param_1->bOverride_Bloom4Tint = '\x01';
  param_1->bOverride_Bloom3Size = '\x01';
  param_1->BloomGaussianIntensity = this->Intensity;
  param_1->BloomThreshold = this->Threshold;
  param_1->BloomSizeScale = this->SizeScale;
  uVar2 = *(undefined8 *)((longlong)&(this->Filter1Tint).field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom1Tint).field0_0x0 = *(undefined8 *)&(this->Filter1Tint).field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom1Tint).field0_0x0 + 8) = uVar2;
  param_1->Bloom1Size = this->Filter1Size;
  uVar2 = *(undefined8 *)((longlong)&(this->Filter2Tint).field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom2Tint).field0_0x0 = *(undefined8 *)&(this->Filter2Tint).field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom2Tint).field0_0x0 + 8) = uVar2;
  param_1->Bloom2Size = this->Filter2Size;
  uVar2 = *(undefined8 *)((longlong)&(this->Filter3Tint).field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom3Tint).field0_0x0 = *(undefined8 *)&(this->Filter3Tint).field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom3Tint).field0_0x0 + 8) = uVar2;
  param_1->Bloom3Size = this->Filter3Size;
  uVar2 = *(undefined8 *)((longlong)&(this->Filter4Tint).field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom4Tint).field0_0x0 = *(undefined8 *)&(this->Filter4Tint).field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom4Tint).field0_0x0 + 8) = uVar2;
  param_1->Bloom4Size = this->Filter4Size;
  uVar2 = *(undefined8 *)((longlong)&(this->Filter5Tint).field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom5Tint).field0_0x0 = *(undefined8 *)&(this->Filter5Tint).field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom5Tint).field0_0x0 + 8) = uVar2;
  param_1->Bloom5Size = this->Filter5Size;
  uVar2 = *(undefined8 *)((longlong)&(this->Filter6Tint).field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom6Tint).field0_0x0 = *(undefined8 *)&(this->Filter6Tint).field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom6Tint).field0_0x0 + 8) = uVar2;
  param_1->Bloom6Size = this->Filter6Size;
  return;
}

