// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineBlueprint
// Functions: 2

// StaticStruct @ 14de85a30

UScriptStruct * __cdecl FStreamlineFeatureRequirements::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStreamlineFeatureRequirements.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineBlueprint();
    Z_Registration_Info_UScriptStruct_FStreamlineFeatureRequirements.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStreamlineFeatureRequirements,(UObject *)pUVar1,
                         L"StreamlineFeatureRequirements");
  }
  return Z_Registration_Info_UScriptStruct_FStreamlineFeatureRequirements.OuterSingleton;
}

// FStreamlineFeatureRequirements @ 14de86720

FStreamlineFeatureRequirements * __thiscall
FStreamlineFeatureRequirements::FStreamlineFeatureRequirements(FStreamlineFeatureRequirements *this)

{
  this->Support = NotSupportedByPlatformAtBuildTime;
  this->Requirements = None;
  (this->RequiredOperatingSystemVersion).Major = 0;
  (this->RequiredOperatingSystemVersion).Minor = 0;
  *(undefined8 *)&(this->RequiredOperatingSystemVersion).Build = 0;
  (this->DetectedOperatingSystemVersion).Minor = 0;
  (this->DetectedOperatingSystemVersion).Build = 0;
  (this->RequiredDriverVersion).Major = 0;
  (this->RequiredDriverVersion).Minor = 0;
  *(undefined8 *)&(this->RequiredDriverVersion).Build = 0;
  (this->DetectedDriverVersion).Minor = 0;
  (this->DetectedDriverVersion).Build = 0;
  return this;
}

