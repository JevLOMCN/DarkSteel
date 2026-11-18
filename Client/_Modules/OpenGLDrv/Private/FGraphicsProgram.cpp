// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// ~FGraphicsProgram @ 145be9370

void __thiscall FOpenGLLinkedProgram::FGraphicsProgram::~FGraphicsProgram(FGraphicsProgram *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->Geometry).bIsSet != false) {
    pFVar1 = (this->Geometry).TypedValue.LastEmulatedUniformBufferSet.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> *)
               (this->Geometry).TypedValue.PackedUniformBufferInfos.AllocatorInstance.Data,
               (this->Geometry).TypedValue.PackedUniformBufferInfos.ArrayNum);
    pFVar1 = (this->Geometry).TypedValue.PackedUniformBufferInfos.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->Geometry).TypedValue.PackedUniformInfos.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FOpenGLShaderBindings::~FOpenGLShaderBindings((FOpenGLShaderBindings *)&this->Geometry);
  }
  pFVar1 = (this->Pixel).LastEmulatedUniformBufferSet.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> *)
             (this->Pixel).PackedUniformBufferInfos.AllocatorInstance.Data,
             (this->Pixel).PackedUniformBufferInfos.ArrayNum);
  pFVar1 = (this->Pixel).PackedUniformBufferInfos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Pixel).PackedUniformInfos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(&(this->Pixel).Bindings);
  pFVar1 = (this->Vertex).LastEmulatedUniformBufferSet.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> *)
             (this->Vertex).PackedUniformBufferInfos.AllocatorInstance.Data,
             (this->Vertex).PackedUniformBufferInfos.ArrayNum);
  pFVar1 = (this->Vertex).PackedUniformBufferInfos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertex).PackedUniformInfos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings((FOpenGLShaderBindings *)this);
  return;
}

