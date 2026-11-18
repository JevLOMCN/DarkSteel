// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FGBufferTarget @ 145d0a020

FGBufferTarget * __thiscall
FGBufferTarget::FGBufferTarget(FGBufferTarget *this,FGBufferTarget *param_1)

{
  EGBufferType EVar1;
  
  EVar1 = param_1->TargetType;
  (this->TargetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TargetType = EVar1;
  (this->TargetName).Data.AllocatorInstance.Data = (param_1->TargetName).Data.AllocatorInstance.Data
  ;
  (param_1->TargetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetName).Data.ArrayNum = (param_1->TargetName).Data.ArrayNum;
  (this->TargetName).Data.ArrayMax = (param_1->TargetName).Data.ArrayMax;
  (param_1->TargetName).Data.ArrayNum = 0;
  (param_1->TargetName).Data.ArrayMax = 0;
  this->bIsSrgb = param_1->bIsSrgb;
  this->bIsRenderTargetable = param_1->bIsRenderTargetable;
  this->bIsShaderResource = param_1->bIsShaderResource;
  this->bIsUsingExtraFlags = param_1->bIsUsingExtraFlags;
  return this;
}

