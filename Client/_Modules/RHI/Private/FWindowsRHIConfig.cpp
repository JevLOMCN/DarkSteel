// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// FWindowsRHIConfig @ 145cd2440

FWindowsRHIConfig * __thiscall
FWindowsRHIConfig::FWindowsRHIConfig(FWindowsRHIConfig *this,FWindowsRHIConfig *param_1)

{
  (this->ShaderPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderPlatforms).AllocatorInstance.Data = (param_1->ShaderPlatforms).AllocatorInstance.Data
  ;
  (param_1->ShaderPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderPlatforms).ArrayNum = (param_1->ShaderPlatforms).ArrayNum;
  (this->ShaderPlatforms).ArrayMax = (param_1->ShaderPlatforms).ArrayMax;
  (param_1->ShaderPlatforms).ArrayNum = 0;
  (param_1->ShaderPlatforms).ArrayMax = 0;
  (this->FeatureLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeatureLevels).AllocatorInstance.Data = (param_1->FeatureLevels).AllocatorInstance.Data;
  (param_1->FeatureLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeatureLevels).ArrayNum = (param_1->FeatureLevels).ArrayNum;
  (this->FeatureLevels).ArrayMax = (param_1->FeatureLevels).ArrayMax;
  (param_1->FeatureLevels).ArrayNum = 0;
  (param_1->FeatureLevels).ArrayMax = 0;
  return this;
}

// FWindowsRHIConfig @ 145cd2490

FWindowsRHIConfig * __thiscall FWindowsRHIConfig::FWindowsRHIConfig(FWindowsRHIConfig *this)

{
  (this->ShaderPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderPlatforms).ArrayNum = 0;
  (this->ShaderPlatforms).ArrayMax = 0;
  (this->FeatureLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeatureLevels).ArrayNum = 0;
  (this->FeatureLevels).ArrayMax = 0;
  return this;
}

// ~FWindowsRHIConfig @ 145cd2e90

void __thiscall FWindowsRHIConfig::~FWindowsRHIConfig(FWindowsRHIConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FeatureLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderPlatforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 145cd2ed0

FWindowsRHIConfig * __thiscall
FWindowsRHIConfig::operator=(FWindowsRHIConfig *this,FWindowsRHIConfig *param_1)

{
  TArray<ERHIFeatureLevel::Type,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<ERHIFeatureLevel::Type,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    pFVar2 = (this->ShaderPlatforms).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->ShaderPlatforms).AllocatorInstance.Data =
         (param_1->ShaderPlatforms).AllocatorInstance.Data;
    (param_1->ShaderPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ShaderPlatforms).ArrayNum = (param_1->ShaderPlatforms).ArrayNum;
    (this->ShaderPlatforms).ArrayMax = (param_1->ShaderPlatforms).ArrayMax;
    (param_1->ShaderPlatforms).ArrayNum = 0;
    (param_1->ShaderPlatforms).ArrayMax = 0;
  }
  pTVar3 = &param_1->FeatureLevels;
  pTVar1 = &this->FeatureLevels;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FeatureLevels).ArrayNum = (param_1->FeatureLevels).ArrayNum;
    (this->FeatureLevels).ArrayMax = (param_1->FeatureLevels).ArrayMax;
    (param_1->FeatureLevels).ArrayNum = 0;
    (param_1->FeatureLevels).ArrayMax = 0;
  }
  return this;
}

