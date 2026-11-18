// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FGBufferInfo @ 145d09b60

FGBufferInfo * __thiscall FGBufferInfo::FGBufferInfo(FGBufferInfo *this,FGBufferInfo *param_1)

{
  this->NumTargets = param_1->NumTargets;
  this->Targets[0].TargetType = param_1->Targets[0].TargetType;
  this->Targets[0].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[0].TargetName.Data.AllocatorInstance.Data =
       param_1->Targets[0].TargetName.Data.AllocatorInstance.Data;
  param_1->Targets[0].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[0].TargetName.Data.ArrayNum = param_1->Targets[0].TargetName.Data.ArrayNum;
  this->Targets[0].TargetName.Data.ArrayMax = param_1->Targets[0].TargetName.Data.ArrayMax;
  param_1->Targets[0].TargetName.Data.ArrayNum = 0;
  param_1->Targets[0].TargetName.Data.ArrayMax = 0;
  this->Targets[0].bIsSrgb = param_1->Targets[0].bIsSrgb;
  this->Targets[0].bIsRenderTargetable = param_1->Targets[0].bIsRenderTargetable;
  this->Targets[0].bIsShaderResource = param_1->Targets[0].bIsShaderResource;
  this->Targets[0].bIsUsingExtraFlags = param_1->Targets[0].bIsUsingExtraFlags;
  this->Targets[1].TargetType = param_1->Targets[1].TargetType;
  this->Targets[1].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[1].TargetName.Data.AllocatorInstance.Data =
       param_1->Targets[1].TargetName.Data.AllocatorInstance.Data;
  param_1->Targets[1].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[1].TargetName.Data.ArrayNum = param_1->Targets[1].TargetName.Data.ArrayNum;
  this->Targets[1].TargetName.Data.ArrayMax = param_1->Targets[1].TargetName.Data.ArrayMax;
  param_1->Targets[1].TargetName.Data.ArrayNum = 0;
  param_1->Targets[1].TargetName.Data.ArrayMax = 0;
  this->Targets[1].bIsSrgb = param_1->Targets[1].bIsSrgb;
  this->Targets[1].bIsRenderTargetable = param_1->Targets[1].bIsRenderTargetable;
  this->Targets[1].bIsShaderResource = param_1->Targets[1].bIsShaderResource;
  this->Targets[1].bIsUsingExtraFlags = param_1->Targets[1].bIsUsingExtraFlags;
  this->Targets[2].TargetType = param_1->Targets[2].TargetType;
  this->Targets[2].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[2].TargetName.Data.AllocatorInstance.Data =
       param_1->Targets[2].TargetName.Data.AllocatorInstance.Data;
  param_1->Targets[2].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[2].TargetName.Data.ArrayNum = param_1->Targets[2].TargetName.Data.ArrayNum;
  this->Targets[2].TargetName.Data.ArrayMax = param_1->Targets[2].TargetName.Data.ArrayMax;
  param_1->Targets[2].TargetName.Data.ArrayNum = 0;
  param_1->Targets[2].TargetName.Data.ArrayMax = 0;
  this->Targets[2].bIsSrgb = param_1->Targets[2].bIsSrgb;
  this->Targets[2].bIsRenderTargetable = param_1->Targets[2].bIsRenderTargetable;
  this->Targets[2].bIsShaderResource = param_1->Targets[2].bIsShaderResource;
  this->Targets[2].bIsUsingExtraFlags = param_1->Targets[2].bIsUsingExtraFlags;
  this->Targets[3].TargetType = param_1->Targets[3].TargetType;
  this->Targets[3].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[3].TargetName.Data.AllocatorInstance.Data =
       param_1->Targets[3].TargetName.Data.AllocatorInstance.Data;
  param_1->Targets[3].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[3].TargetName.Data.ArrayNum = param_1->Targets[3].TargetName.Data.ArrayNum;
  this->Targets[3].TargetName.Data.ArrayMax = param_1->Targets[3].TargetName.Data.ArrayMax;
  param_1->Targets[3].TargetName.Data.ArrayNum = 0;
  param_1->Targets[3].TargetName.Data.ArrayMax = 0;
  this->Targets[3].bIsSrgb = param_1->Targets[3].bIsSrgb;
  this->Targets[3].bIsRenderTargetable = param_1->Targets[3].bIsRenderTargetable;
  this->Targets[3].bIsShaderResource = param_1->Targets[3].bIsShaderResource;
  this->Targets[3].bIsUsingExtraFlags = param_1->Targets[3].bIsUsingExtraFlags;
  this->Targets[4].TargetType = param_1->Targets[4].TargetType;
  this->Targets[4].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[4].TargetName.Data.AllocatorInstance.Data =
       param_1->Targets[4].TargetName.Data.AllocatorInstance.Data;
  param_1->Targets[4].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[4].TargetName.Data.ArrayNum = param_1->Targets[4].TargetName.Data.ArrayNum;
  this->Targets[4].TargetName.Data.ArrayMax = param_1->Targets[4].TargetName.Data.ArrayMax;
  param_1->Targets[4].TargetName.Data.ArrayNum = 0;
  param_1->Targets[4].TargetName.Data.ArrayMax = 0;
  this->Targets[4].bIsSrgb = param_1->Targets[4].bIsSrgb;
  this->Targets[4].bIsRenderTargetable = param_1->Targets[4].bIsRenderTargetable;
  this->Targets[4].bIsShaderResource = param_1->Targets[4].bIsShaderResource;
  this->Targets[4].bIsUsingExtraFlags = param_1->Targets[4].bIsUsingExtraFlags;
  this->Targets[5].TargetType = param_1->Targets[5].TargetType;
  this->Targets[5].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[5].TargetName.Data.AllocatorInstance.Data =
       param_1->Targets[5].TargetName.Data.AllocatorInstance.Data;
  param_1->Targets[5].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[5].TargetName.Data.ArrayNum = param_1->Targets[5].TargetName.Data.ArrayNum;
  this->Targets[5].TargetName.Data.ArrayMax = param_1->Targets[5].TargetName.Data.ArrayMax;
  param_1->Targets[5].TargetName.Data.ArrayNum = 0;
  param_1->Targets[5].TargetName.Data.ArrayMax = 0;
  this->Targets[5].bIsSrgb = param_1->Targets[5].bIsSrgb;
  this->Targets[5].bIsRenderTargetable = param_1->Targets[5].bIsRenderTargetable;
  this->Targets[5].bIsShaderResource = param_1->Targets[5].bIsShaderResource;
  this->Targets[5].bIsUsingExtraFlags = param_1->Targets[5].bIsUsingExtraFlags;
  this->Targets[6].TargetType = param_1->Targets[6].TargetType;
  this->Targets[6].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[6].TargetName.Data.AllocatorInstance.Data =
       param_1->Targets[6].TargetName.Data.AllocatorInstance.Data;
  param_1->Targets[6].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[6].TargetName.Data.ArrayNum = param_1->Targets[6].TargetName.Data.ArrayNum;
  this->Targets[6].TargetName.Data.ArrayMax = param_1->Targets[6].TargetName.Data.ArrayMax;
  param_1->Targets[6].TargetName.Data.ArrayNum = 0;
  param_1->Targets[6].TargetName.Data.ArrayMax = 0;
  this->Targets[6].bIsSrgb = param_1->Targets[6].bIsSrgb;
  this->Targets[6].bIsRenderTargetable = param_1->Targets[6].bIsRenderTargetable;
  this->Targets[6].bIsShaderResource = param_1->Targets[6].bIsShaderResource;
  this->Targets[6].bIsUsingExtraFlags = param_1->Targets[6].bIsUsingExtraFlags;
  this->Targets[7].TargetType = param_1->Targets[7].TargetType;
  this->Targets[7].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[7].TargetName.Data.AllocatorInstance.Data =
       param_1->Targets[7].TargetName.Data.AllocatorInstance.Data;
  param_1->Targets[7].TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Targets[7].TargetName.Data.ArrayNum = param_1->Targets[7].TargetName.Data.ArrayNum;
  this->Targets[7].TargetName.Data.ArrayMax = param_1->Targets[7].TargetName.Data.ArrayMax;
  param_1->Targets[7].TargetName.Data.ArrayNum = 0;
  param_1->Targets[7].TargetName.Data.ArrayMax = 0;
  this->Targets[7].bIsSrgb = param_1->Targets[7].bIsSrgb;
  this->Targets[7].bIsRenderTargetable = param_1->Targets[7].bIsRenderTargetable;
  this->Targets[7].bIsShaderResource = param_1->Targets[7].bIsShaderResource;
  this->Targets[7].bIsUsingExtraFlags = param_1->Targets[7].bIsUsingExtraFlags;
  memcpy(this->Slots,param_1->Slots,0x1b30);
  return this;
}

// ~FGBufferInfo @ 145d0bfb0

void __thiscall FGBufferInfo::~FGBufferInfo(FGBufferInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = this->Targets[7].TargetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->Targets[6].TargetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->Targets[5].TargetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->Targets[4].TargetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->Targets[3].TargetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->Targets[2].TargetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->Targets[1].TargetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->Targets[0].TargetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

