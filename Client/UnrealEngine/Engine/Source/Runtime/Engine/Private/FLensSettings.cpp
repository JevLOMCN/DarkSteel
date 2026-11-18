// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1484a54f0

UScriptStruct * __cdecl FLensSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLensSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLensSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLensSettings,(UObject *)pUVar1,L"LensSettings");
  }
  return Z_Registration_Info_UScriptStruct_FLensSettings.OuterSingleton;
}

// ExportToPostProcessSettings @ 1484d6650

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FLensSettings::ExportToPostProcessSettings(FLensSettings *this,FPostProcessSettings *param_1)

{
  undefined1 *puVar1;
  uchar uVar2;
  float fVar3;
  UTexture2D *pUVar4;
  UTexture *pUVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  
  param_1->bOverride_BloomIntensity = '\x01';
  fVar3 = (this->Bloom).Intensity;
  param_1->bOverride_BloomSizeScale = '\x01';
  param_1->bOverride_BloomGaussianIntensity = '\x01';
  param_1->bOverride_Bloom2Tint = '\x01';
  param_1->bOverride_Bloom2Size = '\x01';
  param_1->bOverride_Bloom1Size = '\x01';
  param_1->bOverride_Bloom1Tint = '\x01';
  param_1->bOverride_BloomThreshold = '\x01';
  param_1->BloomIntensity = fVar3;
  puVar1 = &param_1->field_0x6;
  param_1->bOverride_Bloom3Tint = '\x01';
  param_1->bOverride_Bloom6Size = '\x01';
  param_1->bOverride_Bloom6Tint = '\x01';
  param_1->bOverride_Bloom5Size = '\x01';
  param_1->bOverride_Bloom5Tint = '\x01';
  param_1->bOverride_Bloom4Size = '\x01';
  param_1->bOverride_Bloom4Tint = '\x01';
  param_1->bOverride_Bloom3Size = '\x01';
  param_1->BloomGaussianIntensity = (this->Bloom).GaussianSum.Intensity;
  param_1->BloomThreshold = (this->Bloom).GaussianSum.Threshold;
  param_1->BloomSizeScale = (this->Bloom).GaussianSum.SizeScale;
  uVar6 = *(undefined8 *)((longlong)&(this->Bloom).GaussianSum.Filter1Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom1Tint).field0_0x0 =
       *(undefined8 *)&(this->Bloom).GaussianSum.Filter1Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom1Tint).field0_0x0 + 8) = uVar6;
  param_1->Bloom1Size = (this->Bloom).GaussianSum.Filter1Size;
  uVar6 = *(undefined8 *)((longlong)&(this->Bloom).GaussianSum.Filter2Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom2Tint).field0_0x0 =
       *(undefined8 *)&(this->Bloom).GaussianSum.Filter2Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom2Tint).field0_0x0 + 8) = uVar6;
  param_1->Bloom2Size = (this->Bloom).GaussianSum.Filter2Size;
  uVar6 = *(undefined8 *)((longlong)&(this->Bloom).GaussianSum.Filter3Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom3Tint).field0_0x0 =
       *(undefined8 *)&(this->Bloom).GaussianSum.Filter3Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom3Tint).field0_0x0 + 8) = uVar6;
  param_1->Bloom3Size = (this->Bloom).GaussianSum.Filter3Size;
  uVar6 = *(undefined8 *)((longlong)&(this->Bloom).GaussianSum.Filter4Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom4Tint).field0_0x0 =
       *(undefined8 *)&(this->Bloom).GaussianSum.Filter4Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom4Tint).field0_0x0 + 8) = uVar6;
  param_1->Bloom4Size = (this->Bloom).GaussianSum.Filter4Size;
  uVar6 = *(undefined8 *)((longlong)&(this->Bloom).GaussianSum.Filter5Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom5Tint).field0_0x0 =
       *(undefined8 *)&(this->Bloom).GaussianSum.Filter5Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom5Tint).field0_0x0 + 8) = uVar6;
  param_1->Bloom5Size = (this->Bloom).GaussianSum.Filter5Size;
  uVar6 = *(undefined8 *)((longlong)&(this->Bloom).GaussianSum.Filter6Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom6Tint).field0_0x0 =
       *(undefined8 *)&(this->Bloom).GaussianSum.Filter6Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom6Tint).field0_0x0 + 8) = uVar6;
  fVar3 = (this->Bloom).GaussianSum.Filter6Size;
  param_1->bOverride_BloomConvolutionIntensity = '\x01';
  param_1->bOverride_BloomConvolutionPreFilterMin = '\x01';
  param_1->bOverride_BloomConvolutionCenterUV = '\x01';
  param_1->bOverride_BloomConvolutionSize = '\x01';
  param_1->bOverride_BloomConvolutionScatterDispersion = '\x01';
  param_1->bOverride_BloomConvolutionTexture = '\x01';
  param_1->bOverride_BloomConvolutionPreFilterMax = '\x01';
  param_1->bOverride_BloomConvolutionBufferScale = '\x01';
  param_1->bOverride_BloomConvolutionPreFilterMult = '\x01';
  param_1->Bloom6Size = fVar3;
  param_1->BloomConvolutionIntensity = (this->Bloom).Convolution.Intensity;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->Bloom).Convolution.Texture.field0_0x0.DebugPtr, pUVar4 != (UTexture2D *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (param_1->BloomConvolutionTexture).field0_0x0 = (this->Bloom).Convolution.Texture.field0_0x0;
  param_1->BloomConvolutionSize = (this->Bloom).Convolution.Size;
  param_1->BloomConvolutionScatterDispersion = (this->Bloom).Convolution.ScatterDispersion;
  dVar7 = (this->Bloom).Convolution.CenterUV.field0_0x0._s_0.Y;
  (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X =
       (this->Bloom).Convolution.CenterUV.field0_0x0._s_0.X;
  (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y = dVar7;
  param_1->BloomConvolutionPreFilterMin = (this->Bloom).Convolution.PreFilterMin;
  param_1->BloomConvolutionPreFilterMax = (this->Bloom).Convolution.PreFilterMax;
  param_1->BloomConvolutionPreFilterMult = (this->Bloom).Convolution.PreFilterMult;
  fVar3 = (this->Bloom).Convolution.BufferScale;
  param_1->bOverride_BloomMethod = '\x01';
  param_1->BloomConvolutionBufferScale = fVar3;
  uVar2 = (this->Bloom).Method.Value;
  param_1->bOverride_BloomDirtMaskIntensity = '\x01';
  param_1->bOverride_BloomDirtMask = '\x01';
  param_1->bOverride_BloomDirtMaskTint = '\x01';
  (param_1->BloomMethod).Value = uVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (this->Imperfections).DirtMask.field0_0x0.DebugPtr, pUVar5 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (param_1->BloomDirtMask).field0_0x0 = (this->Imperfections).DirtMask.field0_0x0;
  param_1->BloomDirtMaskIntensity = (this->Imperfections).DirtMaskIntensity;
  uVar6 = *(undefined8 *)&(this->Imperfections).DirtMaskTint.field0_0x0;
  uVar8 = *(undefined8 *)((longlong)&(this->Imperfections).DirtMaskTint.field0_0x0 + 8);
  param_1->bOverride_SceneFringeIntensity = '\x01';
  *(undefined8 *)&(param_1->BloomDirtMaskTint).field0_0x0 = uVar6;
  *(undefined8 *)((longlong)&(param_1->BloomDirtMaskTint).field0_0x0 + 8) = uVar8;
  param_1->SceneFringeIntensity = this->ChromaticAberration;
  return;
}

