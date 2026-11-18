// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 1484a53f0

UScriptStruct * __cdecl FLensBloomSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLensBloomSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLensBloomSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLensBloomSettings,(UObject *)pUVar1,
                         L"LensBloomSettings");
  }
  return Z_Registration_Info_UScriptStruct_FLensBloomSettings.OuterSingleton;
}

// FLensBloomSettings @ 1484ba5f0

FLensBloomSettings * __thiscall FLensBloomSettings::FLensBloomSettings(FLensBloomSettings *this)

{
  FGaussianSumBloomSettings::FGaussianSumBloomSettings(&this->GaussianSum);
  (this->Convolution).Texture.field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->Convolution).Intensity = 1.0;
  (this->Convolution).ScatterDispersion = 1.0;
  (this->Convolution).Size = 1.0;
  (this->Convolution).CenterUV.field0_0x0._s_0.X = 0.5;
  (this->Convolution).CenterUV.field0_0x0._s_0.Y = 0.5;
  (this->Convolution).PreFilterMin = 7.0;
  (this->Convolution).PreFilterMax = 15000.0;
  (this->Convolution).PreFilterMult = 15.0;
  (this->Convolution).BufferScale = 0.133;
  this->Intensity = 0.675;
  (this->Method).Value = '\0';
  return this;
}

// operator= @ 1484be4f0

FLensBloomSettings * __thiscall
FLensBloomSettings::operator=(FLensBloomSettings *this,FLensBloomSettings *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this->Intensity = param_1->Intensity;
  fVar2 = (param_1->GaussianSum).Threshold;
  fVar3 = (param_1->GaussianSum).SizeScale;
  fVar4 = (param_1->GaussianSum).Filter1Size;
  (this->GaussianSum).Intensity = (param_1->GaussianSum).Intensity;
  (this->GaussianSum).Threshold = fVar2;
  (this->GaussianSum).SizeScale = fVar3;
  (this->GaussianSum).Filter1Size = fVar4;
  fVar2 = (param_1->GaussianSum).Filter3Size;
  fVar3 = (param_1->GaussianSum).Filter4Size;
  fVar4 = (param_1->GaussianSum).Filter5Size;
  (this->GaussianSum).Filter2Size = (param_1->GaussianSum).Filter2Size;
  (this->GaussianSum).Filter3Size = fVar2;
  (this->GaussianSum).Filter4Size = fVar3;
  (this->GaussianSum).Filter5Size = fVar4;
  uVar1 = *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter1Tint.field0_0x0 + 4);
  *(undefined8 *)&(this->GaussianSum).Filter6Size =
       *(undefined8 *)&(param_1->GaussianSum).Filter6Size;
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter1Tint.field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter2Tint.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter1Tint.field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter1Tint.field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter2Tint.field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter3Tint.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter2Tint.field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter2Tint.field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter3Tint.field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter4Tint.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter3Tint.field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter3Tint.field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter4Tint.field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter5Tint.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter4Tint.field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter4Tint.field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter5Tint.field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter6Tint.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter5Tint.field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&(param_1->GaussianSum).Filter5Tint.field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->GaussianSum).Filter6Tint.field0_0x0 + 4) = uVar1;
  (this->GaussianSum).Filter6Tint.field0_0x0._s_0.A =
       (param_1->GaussianSum).Filter6Tint.field0_0x0._s_0.A;
  FConvolutionBloomSettings::operator=(&this->Convolution,&param_1->Convolution);
  (this->Method).Value = (param_1->Method).Value;
  return this;
}

// ExportToPostProcessSettings @ 1484d6480

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FLensBloomSettings::ExportToPostProcessSettings
          (FLensBloomSettings *this,FPostProcessSettings *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  UTexture2D *pUVar3;
  undefined8 uVar4;
  double dVar5;
  
  param_1->bOverride_BloomIntensity = '\x01';
  fVar2 = this->Intensity;
  param_1->bOverride_BloomSizeScale = '\x01';
  param_1->bOverride_BloomGaussianIntensity = '\x01';
  param_1->bOverride_Bloom2Tint = '\x01';
  param_1->bOverride_Bloom2Size = '\x01';
  param_1->bOverride_Bloom1Size = '\x01';
  param_1->bOverride_Bloom1Tint = '\x01';
  param_1->bOverride_BloomThreshold = '\x01';
  param_1->BloomIntensity = fVar2;
  puVar1 = &param_1->field_0x6;
  param_1->bOverride_Bloom3Tint = '\x01';
  param_1->bOverride_Bloom6Size = '\x01';
  param_1->bOverride_Bloom6Tint = '\x01';
  param_1->bOverride_Bloom5Size = '\x01';
  param_1->bOverride_Bloom5Tint = '\x01';
  param_1->bOverride_Bloom4Size = '\x01';
  param_1->bOverride_Bloom4Tint = '\x01';
  param_1->bOverride_Bloom3Size = '\x01';
  param_1->BloomGaussianIntensity = (this->GaussianSum).Intensity;
  param_1->BloomThreshold = (this->GaussianSum).Threshold;
  param_1->BloomSizeScale = (this->GaussianSum).SizeScale;
  uVar4 = *(undefined8 *)((longlong)&(this->GaussianSum).Filter1Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom1Tint).field0_0x0 =
       *(undefined8 *)&(this->GaussianSum).Filter1Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom1Tint).field0_0x0 + 8) = uVar4;
  param_1->Bloom1Size = (this->GaussianSum).Filter1Size;
  uVar4 = *(undefined8 *)((longlong)&(this->GaussianSum).Filter2Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom2Tint).field0_0x0 =
       *(undefined8 *)&(this->GaussianSum).Filter2Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom2Tint).field0_0x0 + 8) = uVar4;
  param_1->Bloom2Size = (this->GaussianSum).Filter2Size;
  uVar4 = *(undefined8 *)((longlong)&(this->GaussianSum).Filter3Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom3Tint).field0_0x0 =
       *(undefined8 *)&(this->GaussianSum).Filter3Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom3Tint).field0_0x0 + 8) = uVar4;
  param_1->Bloom3Size = (this->GaussianSum).Filter3Size;
  uVar4 = *(undefined8 *)((longlong)&(this->GaussianSum).Filter4Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom4Tint).field0_0x0 =
       *(undefined8 *)&(this->GaussianSum).Filter4Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom4Tint).field0_0x0 + 8) = uVar4;
  param_1->Bloom4Size = (this->GaussianSum).Filter4Size;
  uVar4 = *(undefined8 *)((longlong)&(this->GaussianSum).Filter5Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom5Tint).field0_0x0 =
       *(undefined8 *)&(this->GaussianSum).Filter5Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom5Tint).field0_0x0 + 8) = uVar4;
  param_1->Bloom5Size = (this->GaussianSum).Filter5Size;
  uVar4 = *(undefined8 *)((longlong)&(this->GaussianSum).Filter6Tint.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Bloom6Tint).field0_0x0 =
       *(undefined8 *)&(this->GaussianSum).Filter6Tint.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Bloom6Tint).field0_0x0 + 8) = uVar4;
  fVar2 = (this->GaussianSum).Filter6Size;
  param_1->bOverride_BloomConvolutionIntensity = '\x01';
  param_1->bOverride_BloomConvolutionPreFilterMin = '\x01';
  param_1->bOverride_BloomConvolutionCenterUV = '\x01';
  param_1->bOverride_BloomConvolutionSize = '\x01';
  param_1->bOverride_BloomConvolutionScatterDispersion = '\x01';
  param_1->bOverride_BloomConvolutionTexture = '\x01';
  param_1->bOverride_BloomConvolutionPreFilterMax = '\x01';
  param_1->bOverride_BloomConvolutionBufferScale = '\x01';
  param_1->bOverride_BloomConvolutionPreFilterMult = '\x01';
  param_1->Bloom6Size = fVar2;
  param_1->BloomConvolutionIntensity = (this->Convolution).Intensity;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (this->Convolution).Texture.field0_0x0.DebugPtr, pUVar3 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (param_1->BloomConvolutionTexture).field0_0x0 = (this->Convolution).Texture.field0_0x0;
  param_1->BloomConvolutionSize = (this->Convolution).Size;
  param_1->BloomConvolutionScatterDispersion = (this->Convolution).ScatterDispersion;
  dVar5 = (this->Convolution).CenterUV.field0_0x0._s_0.Y;
  (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X =
       (this->Convolution).CenterUV.field0_0x0._s_0.X;
  (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y = dVar5;
  param_1->BloomConvolutionPreFilterMin = (this->Convolution).PreFilterMin;
  param_1->BloomConvolutionPreFilterMax = (this->Convolution).PreFilterMax;
  param_1->BloomConvolutionPreFilterMult = (this->Convolution).PreFilterMult;
  fVar2 = (this->Convolution).BufferScale;
  param_1->bOverride_BloomMethod = '\x01';
  param_1->BloomConvolutionBufferScale = fVar2;
  (param_1->BloomMethod).Value = (this->Method).Value;
  return;
}

// PostSerialize @ 1484e5520

void __thiscall FLensBloomSettings::PostSerialize(FLensBloomSettings *this,FArchive *param_1)

{
  int iVar1;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xdd) {
      this->Intensity = (this->GaussianSum).Intensity;
      (this->GaussianSum).Intensity = 1.0;
      (this->Convolution).Intensity = 1.0;
    }
  }
  return;
}

// Serialize @ 1484f83f0

bool __thiscall FLensBloomSettings::Serialize(FLensBloomSettings *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  return false;
}

