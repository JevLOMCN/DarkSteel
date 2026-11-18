// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1484a53b0

UScriptStruct * __cdecl FConvolutionBloomSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvolutionBloomSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FConvolutionBloomSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvolutionBloomSettings,(UObject *)pUVar1,
                         L"ConvolutionBloomSettings");
  }
  return Z_Registration_Info_UScriptStruct_FConvolutionBloomSettings.OuterSingleton;
}

// operator= @ 1484be470

FConvolutionBloomSettings * __thiscall
FConvolutionBloomSettings::operator=
          (FConvolutionBloomSettings *this,FConvolutionBloomSettings *param_1)

{
  UTexture2D *pUVar1;
  double dVar2;
  
  this->Intensity = param_1->Intensity;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->Texture).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Texture).field0_0x0 = (param_1->Texture).field0_0x0;
  this->ScatterDispersion = param_1->ScatterDispersion;
  this->Size = param_1->Size;
  dVar2 = (param_1->CenterUV).field0_0x0._s_0.Y;
  (this->CenterUV).field0_0x0._s_0.X = (param_1->CenterUV).field0_0x0._s_0.X;
  (this->CenterUV).field0_0x0._s_0.Y = dVar2;
  this->PreFilterMin = param_1->PreFilterMin;
  this->PreFilterMax = param_1->PreFilterMax;
  this->PreFilterMult = param_1->PreFilterMult;
  this->BufferScale = param_1->BufferScale;
  return this;
}

// ExportToPostProcessSettings @ 1484d62f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FConvolutionBloomSettings::ExportToPostProcessSettings
          (FConvolutionBloomSettings *this,FPostProcessSettings *param_1)

{
  undefined1 *puVar1;
  UTexture2D *pUVar2;
  double dVar3;
  
  param_1->bOverride_BloomConvolutionIntensity = '\x01';
  param_1->bOverride_BloomConvolutionPreFilterMin = '\x01';
  param_1->bOverride_BloomConvolutionCenterUV = '\x01';
  param_1->bOverride_BloomConvolutionSize = '\x01';
  param_1->bOverride_BloomConvolutionScatterDispersion = '\x01';
  param_1->bOverride_BloomConvolutionTexture = '\x01';
  param_1->bOverride_BloomConvolutionPreFilterMax = '\x01';
  param_1->bOverride_BloomConvolutionBufferScale = '\x01';
  param_1->bOverride_BloomConvolutionPreFilterMult = '\x01';
  param_1->BloomConvolutionIntensity = this->Intensity;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (this->Texture).field0_0x0.DebugPtr, pUVar2 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (param_1->BloomConvolutionTexture).field0_0x0 = (this->Texture).field0_0x0;
  param_1->BloomConvolutionSize = this->Size;
  param_1->BloomConvolutionScatterDispersion = this->ScatterDispersion;
  dVar3 = (this->CenterUV).field0_0x0._s_0.Y;
  (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X = (this->CenterUV).field0_0x0._s_0.X;
  (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y = dVar3;
  param_1->BloomConvolutionPreFilterMin = this->PreFilterMin;
  param_1->BloomConvolutionPreFilterMax = this->PreFilterMax;
  param_1->BloomConvolutionPreFilterMult = this->PreFilterMult;
  param_1->BloomConvolutionBufferScale = this->BufferScale;
  return;
}

