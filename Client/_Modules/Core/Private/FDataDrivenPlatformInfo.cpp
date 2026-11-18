// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FDataDrivenPlatformInfo @ 1418baa80

FDataDrivenPlatformInfo * __thiscall
FDataDrivenPlatformInfo::FDataDrivenPlatformInfo
          (FDataDrivenPlatformInfo *this,FDataDrivenPlatformInfo *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this->IniPlatformName = param_1->IniPlatformName;
  (this->IniParentChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IniParentChain).AllocatorInstance.Data = (param_1->IniParentChain).AllocatorInstance.Data;
  (param_1->IniParentChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IniParentChain).ArrayNum = (param_1->IniParentChain).ArrayNum;
  (this->IniParentChain).ArrayMax = (param_1->IniParentChain).ArrayMax;
  (param_1->IniParentChain).ArrayNum = 0;
  (param_1->IniParentChain).ArrayMax = 0;
  this->bIsConfidential = param_1->bIsConfidential;
  bVar1 = param_1->bIsFakePlatform;
  (this->TargetSettingsIniSectionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bIsFakePlatform = bVar1;
  (this->TargetSettingsIniSectionName).Data.AllocatorInstance.Data =
       (param_1->TargetSettingsIniSectionName).Data.AllocatorInstance.Data;
  (param_1->TargetSettingsIniSectionName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TargetSettingsIniSectionName).Data.ArrayNum =
       (param_1->TargetSettingsIniSectionName).Data.ArrayNum;
  (this->TargetSettingsIniSectionName).Data.ArrayMax =
       (param_1->TargetSettingsIniSectionName).Data.ArrayMax;
  (param_1->TargetSettingsIniSectionName).Data.ArrayNum = 0;
  (param_1->TargetSettingsIniSectionName).Data.ArrayMax = 0;
  (this->AdditionalRestrictedFolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalRestrictedFolders).AllocatorInstance.Data =
       (param_1->AdditionalRestrictedFolders).AllocatorInstance.Data;
  (param_1->AdditionalRestrictedFolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalRestrictedFolders).ArrayNum = (param_1->AdditionalRestrictedFolders).ArrayNum;
  (this->AdditionalRestrictedFolders).ArrayMax = (param_1->AdditionalRestrictedFolders).ArrayMax;
  (param_1->AdditionalRestrictedFolders).ArrayNum = 0;
  (param_1->AdditionalRestrictedFolders).ArrayMax = 0;
  uVar2 = (param_1->GlobalIdentifier).B;
  uVar3 = (param_1->GlobalIdentifier).C;
  uVar4 = (param_1->GlobalIdentifier).D;
  (this->GlobalIdentifier).A = (param_1->GlobalIdentifier).A;
  (this->GlobalIdentifier).B = uVar2;
  (this->GlobalIdentifier).C = uVar3;
  (this->GlobalIdentifier).D = uVar4;
  this->Freezing_MaxFieldAlignment = param_1->Freezing_MaxFieldAlignment;
  this->Freezing_b32Bit = param_1->Freezing_b32Bit;
  this->Freezing_bForce64BitMemoryImagePointers = param_1->Freezing_bForce64BitMemoryImagePointers;
  this->Freezing_bAlignBases = param_1->Freezing_bAlignBases;
  this->bHasDedicatedGamepad = param_1->bHasDedicatedGamepad;
  this->bDefaultInputStandardKeyboard = param_1->bDefaultInputStandardKeyboard;
  bVar1 = param_1->bInputSupportConfigurable;
  (this->DefaultInputType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bInputSupportConfigurable = bVar1;
  (this->DefaultInputType).Data.AllocatorInstance.Data =
       (param_1->DefaultInputType).Data.AllocatorInstance.Data;
  (param_1->DefaultInputType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultInputType).Data.ArrayNum = (param_1->DefaultInputType).Data.ArrayNum;
  (this->DefaultInputType).Data.ArrayMax = (param_1->DefaultInputType).Data.ArrayMax;
  (param_1->DefaultInputType).Data.ArrayNum = 0;
  (param_1->DefaultInputType).Data.ArrayMax = 0;
  this->bSupportsMouseAndKeyboard = param_1->bSupportsMouseAndKeyboard;
  this->bSupportsGamepad = param_1->bSupportsGamepad;
  this->bCanChangeGamepadType = param_1->bCanChangeGamepadType;
  bVar1 = param_1->bSupportsTouch;
  (this->HardwareCompressionFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bSupportsTouch = bVar1;
  (this->HardwareCompressionFormat).Data.AllocatorInstance.Data =
       (param_1->HardwareCompressionFormat).Data.AllocatorInstance.Data;
  (param_1->HardwareCompressionFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HardwareCompressionFormat).Data.ArrayNum =
       (param_1->HardwareCompressionFormat).Data.ArrayNum;
  (this->HardwareCompressionFormat).Data.ArrayMax =
       (param_1->HardwareCompressionFormat).Data.ArrayMax;
  (param_1->HardwareCompressionFormat).Data.ArrayNum = 0;
  (param_1->HardwareCompressionFormat).Data.ArrayMax = 0;
  this->OverrideCookPlatformName = param_1->OverrideCookPlatformName;
  return this;
}

// ~FDataDrivenPlatformInfo @ 1418be980

void __thiscall FDataDrivenPlatformInfo::~FDataDrivenPlatformInfo(FDataDrivenPlatformInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->HardwareCompressionFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultInputType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AdditionalRestrictedFolders).AllocatorInstance.Data,
             (this->AdditionalRestrictedFolders).ArrayNum);
  pFVar1 = (this->AdditionalRestrictedFolders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetSettingsIniSectionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->IniParentChain).AllocatorInstance.Data,
             (this->IniParentChain).ArrayNum);
  pFVar1 = (this->IniParentChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

