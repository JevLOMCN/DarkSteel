// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// FRHIShader @ 1446c43e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FRHIShader * __thiscall
FRHIShader::FRHIShader(FRHIShader *this,ERHIResourceType param_1,EShaderFrequency param_2)

{
  undefined1 *puVar1;
  
  FRHIResource::FRHIResource((FRHIResource *)this,param_1);
  this->_padding_ = (longlong)&___7FRHIShader__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Debug).ShaderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Debug).ShaderName.Data.ArrayNum = 0;
  (this->Debug).ShaderName.Data.ArrayMax = 0;
  (this->Debug).UniformBufferNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Debug).UniformBufferNames.ArrayNum = 0;
  (this->Debug).UniformBufferNames.ArrayMax = 0;
  (this->DebugStrideValidationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugStrideValidationData).ArrayNum = 0;
  (this->DebugStrideValidationData).ArrayMax = 0;
  (this->DebugSRVTypeValidationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugSRVTypeValidationData).ArrayNum = 0;
  (this->DebugSRVTypeValidationData).ArrayMax = 0;
  (this->DebugUAVTypeValidationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugUAVTypeValidationData).ArrayNum = 0;
  (this->DebugUAVTypeValidationData).ArrayMax = 0;
  (this->DebugUBSizeValidationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugUBSizeValidationData).ArrayNum = 0;
  (this->DebugUBSizeValidationData).ArrayMax = 0;
  (this->Hash).Hash[0] = '\0';
  (this->Hash).Hash[1] = '\0';
  (this->Hash).Hash[2] = '\0';
  (this->Hash).Hash[3] = '\0';
  (this->Hash).Hash[4] = '\0';
  (this->Hash).Hash[5] = '\0';
  (this->Hash).Hash[6] = '\0';
  (this->Hash).Hash[7] = '\0';
  (this->Hash).Hash[8] = '\0';
  (this->Hash).Hash[9] = '\0';
  (this->Hash).Hash[10] = '\0';
  (this->Hash).Hash[0xb] = '\0';
  (this->Hash).Hash[0xc] = '\0';
  (this->Hash).Hash[0xd] = '\0';
  (this->Hash).Hash[0xe] = '\0';
  (this->Hash).Hash[0xf] = '\0';
  (this->Hash).Hash[0x10] = '\0';
  (this->Hash).Hash[0x11] = '\0';
  (this->Hash).Hash[0x12] = '\0';
  (this->Hash).Hash[0x13] = '\0';
  this->bNoDerivativeOps = '\0';
  this->bHasShaderBundleUsage = '\0';
  this->Frequency = param_2;
  this->InUseByPSOCompilation = 0;
  return this;
}

