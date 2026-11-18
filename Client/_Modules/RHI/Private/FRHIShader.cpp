// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// ~FRHIShader @ 145c47fa0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHIShader::~FRHIShader(FRHIShader *this)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FRHIShader__6B_;
  if (0 < this->InUseByPSOCompilation) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    BytesToHex((this->Hash).Hash,0x14,&local_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = (this->DebugUBSizeValidationData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugUAVTypeValidationData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugSRVTypeValidationData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugStrideValidationData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Debug).UniformBufferNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Debug).ShaderName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FShaderResourceTable::~FShaderResourceTable((FShaderResourceTable *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// SetInUseByPSOCompilation @ 145c78f50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FRHIShader::SetInUseByPSOCompilation(FRHIShader *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1) {
    LOCK();
    this->InUseByPSOCompilation = this->InUseByPSOCompilation + 1;
    UNLOCK();
    return;
  }
  if (this->InUseByPSOCompilation < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InUseByPSOCompilation > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0xe8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  this->InUseByPSOCompilation = this->InUseByPSOCompilation + -1;
  UNLOCK();
  return;
}

// GetShaderName @ 145cde2e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

wchar_t * __thiscall FRHIShader::GetShaderName(FRHIShader *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->Debug).ShaderName.Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      return (wchar_t *)(this->Debug).ShaderName.Data.AllocatorInstance.Data;
    }
    return L"";
  }
  return L"<unknown>";
}

