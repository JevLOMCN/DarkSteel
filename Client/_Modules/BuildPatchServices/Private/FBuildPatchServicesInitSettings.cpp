// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FBuildPatchServicesInitSettings @ 143220310

FBuildPatchServicesInitSettings * __thiscall
BuildPatchServices::FBuildPatchServicesInitSettings::FBuildPatchServicesInitSettings
          (FBuildPatchServicesInitSettings *this)

{
  wchar_t *pwVar1;
  
  pwVar1 = FWindowsPlatformProcess::ApplicationSettingsDir();
  ::FString::FString(&this->ApplicationSettingsDir,pwVar1);
  ::FString::FString(&this->ProjectName,GInternalProjectName);
  ::FString::FString(&this->LocalMachineConfigFileName,L"BuildPatchServicesLocal.ini");
  return this;
}

