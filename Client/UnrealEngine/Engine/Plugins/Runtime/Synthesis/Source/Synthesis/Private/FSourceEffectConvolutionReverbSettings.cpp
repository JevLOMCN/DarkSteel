// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 2

// StaticStruct @ 14f0a9020

UScriptStruct * __cdecl FSourceEffectConvolutionReverbSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectConvolutionReverbSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSourceEffectConvolutionReverbSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings,
                         (UObject *)pUVar1,L"SourceEffectConvolutionReverbSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSourceEffectConvolutionReverbSettings.OuterSingleton;
}

// FSourceEffectConvolutionReverbSettings @ 14f0b7e90

FSourceEffectConvolutionReverbSettings * __thiscall
FSourceEffectConvolutionReverbSettings::FSourceEffectConvolutionReverbSettings
          (FSourceEffectConvolutionReverbSettings *this)

{
  this->NormalizationVolumeDb = -24.0;
  this->WetVolumeDb = 0.0;
  this->DryVolumeDb = -96.0;
  this->bBypass = false;
  return this;
}

