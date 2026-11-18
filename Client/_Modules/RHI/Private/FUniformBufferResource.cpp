// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// InitLifetimeTracking @ 145cdf5c0

void __thiscall
RHIValidation::FUniformBufferResource::InitLifetimeTracking
          (FUniformBufferResource *this,ulong64 param_1,void *param_2,EUniformBufferUsage param_3)

{
  this->AllocatedFrameID = param_1;
  this->UniformBufferUsage = param_3;
  this->AllocatedCallstack = (void *)0x0;
  this->bContainsNullContents = param_2 == (void *)0x0;
  return;
}

// UpdateAllocation @ 145cf38d0

void __thiscall
RHIValidation::FUniformBufferResource::UpdateAllocation
          (FUniformBufferResource *this,ulong64 param_1)

{
  this->AllocatedFrameID = param_1;
  this->bContainsNullContents = false;
  this->AllocatedCallstack = (void *)0x0;
  return;
}

// ValidateLifeTime @ 145cf4a30

void __thiscall
RHIValidation::FUniformBufferResource::ValidateLifeTime(FUniformBufferResource *this)

{
  FDynamicRHI *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FString local_28;
  FString local_18;
  
  pFVar1 = GDynamicRHI;
  if (this->bContainsNullContents != false) {
    FValidationRHI::ReportValidationFailure
              (
              L"Uniform buffer created with null contents is now being bound for rendering on an RHI context. The contents must first be updated."
              );
  }
  if ((this->UniformBufferUsage != UniformBuffer_MultiFrame) &&
     (this->AllocatedFrameID < (ulonglong)pFVar1[5]._padding_)) {
    ::FString::FString(&local_28,
                       L"Non MultiFrame Uniform buffer has been allocated in a previous frame. The data could have been deleted already!"
                      );
    if (this->AllocatedCallstack != (void *)0x0) {
      ::FString::PrintfImpl(&local_18,L"\nAllocation callstack: (void**)0x%p,32");
      iVar3 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar2.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

