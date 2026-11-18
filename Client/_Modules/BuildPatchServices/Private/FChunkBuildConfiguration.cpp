// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FChunkBuildConfiguration @ 143220360

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FChunkBuildConfiguration * __thiscall
BuildPatchServices::FChunkBuildConfiguration::FChunkBuildConfiguration
          (FChunkBuildConfiguration *this)

{
  this->FeatureLevel = Latest;
  (this->RootDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootDirectory).Data.ArrayNum = 0;
  (this->RootDirectory).Data.ArrayMax = 0;
  (this->AppName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AppName).Data.ArrayNum = 0;
  (this->AppName).Data.ArrayMax = 0;
  (this->BuildVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildVersion).Data.ArrayNum = 0;
  (this->BuildVersion).Data.ArrayMax = 0;
  (this->LaunchExe).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LaunchExe).Data.ArrayNum = 0;
  (this->LaunchExe).Data.ArrayMax = 0;
  (this->LaunchCommand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LaunchCommand).Data.ArrayNum = 0;
  (this->LaunchCommand).Data.ArrayMax = 0;
  (this->InputListFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputListFile).Data.ArrayNum = 0;
  (this->InputListFile).Data.ArrayMax = 0;
  (this->IgnoreListFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IgnoreListFile).Data.ArrayNum = 0;
  (this->IgnoreListFile).Data.ArrayMax = 0;
  (this->AttributeListFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeListFile).Data.ArrayNum = 0;
  (this->AttributeListFile).Data.ArrayMax = 0;
  *(undefined8 *)&(this->PrereqIds).Elements = 0;
  *(undefined8 *)&(this->PrereqIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PrereqIds).Elements.field_0x20 = 0;
  this->AppId = 0;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x30 = 0xffffffff;
  (this->PrereqIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PrereqIds).HashSize = 0;
  (this->PrereqName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqName).Data.ArrayNum = 0;
  (this->PrereqName).Data.ArrayMax = 0;
  (this->PrereqPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqPath).Data.ArrayNum = 0;
  (this->PrereqPath).Data.ArrayMax = 0;
  (this->PrereqArgs).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqArgs).Data.ArrayNum = 0;
  (this->PrereqArgs).Data.ArrayMax = 0;
  *(undefined8 *)&this->CustomFields = 0;
  *(undefined8 *)&(this->CustomFields).field_0x8 = 0;
  *(undefined8 *)&(this->CustomFields).field_0x20 = 0;
  this->bShouldHonorReuseThreshold = false;
  this->DataAgeThreshold = 3.4028235e+38;
  this->OutputChunkWindowSize = 0x100000;
  this->bShouldMatchAnyWindowSize = true;
  *(undefined4 *)&(this->CustomFields).field_0x28 = 0;
  *(undefined4 *)&(this->CustomFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomFields).field_0x34 = 0;
  *(undefined4 *)&(this->CustomFields).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CustomFields).field_0x40 = 0;
  *(undefined4 *)&(this->CustomFields).field_0x48 = 0;
  (this->CloudDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirectory).Data.ArrayNum = 0;
  (this->CloudDirectory).Data.ArrayMax = 0;
  (this->OutputFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFilename).Data.ArrayNum = 0;
  (this->OutputFilename).Data.ArrayMax = 0;
  this->bAllowEmptyBuild = false;
  return this;
}

