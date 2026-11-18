// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioPlatformConfiguration
// Functions: 2

// StaticStruct @ 144539a20

UScriptStruct * __cdecl FPlatformRuntimeAudioCompressionOverrides::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioPlatformConfiguration();
    Z_Registration_Info_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides,
                         (UObject *)pUVar1,L"PlatformRuntimeAudioCompressionOverrides");
  }
  return Z_Registration_Info_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides.OuterSingleton;
}

// FPlatformRuntimeAudioCompressionOverrides @ 144539fd0

FPlatformRuntimeAudioCompressionOverrides * __thiscall
FPlatformRuntimeAudioCompressionOverrides::FPlatformRuntimeAudioCompressionOverrides
          (FPlatformRuntimeAudioCompressionOverrides *this)

{
  this->bOverrideCompressionTimes = false;
  this->SoundCueQualityIndex = 0;
  this->DurationThreshold = 5.0;
  this->MaxNumRandomBranches = 0;
  return this;
}

