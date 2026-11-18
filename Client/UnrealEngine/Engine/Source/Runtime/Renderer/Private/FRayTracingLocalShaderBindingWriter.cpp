// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// AddWithExternalParameters @ 14536d9e0

FRayTracingLocalShaderBindings * __thiscall
FRayTracingLocalShaderBindingWriter::AddWithExternalParameters
          (FRayTracingLocalShaderBindingWriter *this)

{
  FChunk **ppFVar1;
  FChunk *pFVar2;
  FChunk *pFVar3;
  FRayTracingLocalShaderBindings *pFVar4;
  
  pFVar2 = this->CurrentChunk;
  ppFVar1 = &this->CurrentChunk;
  if ((pFVar2 == (FChunk *)0x0) || (pFVar2->Num == 0x400)) {
    pFVar3 = FMemStackBase::Alloc(&this->ParameterMemory,0xe010,8);
    *ppFVar1 = pFVar3;
    pFVar3->Next = (FChunk *)0x0;
    (*ppFVar1)->Num = 0;
    if (this->FirstChunk == (FChunk *)0x0) {
      this->FirstChunk = *ppFVar1;
    }
    if (pFVar2 != (FChunk *)0x0) {
      pFVar2->Next = *ppFVar1;
    }
  }
  pFVar2 = this->CurrentChunk;
  pFVar4 = pFVar2->Bindings + pFVar2->Num;
  pFVar2->Num = pFVar2->Num + 1;
  pFVar4->Geometry = (FRHIRayTracingGeometry *)0x0;
  pFVar4->SegmentIndex = 0;
  pFVar4->RecordIndex = 0;
  pFVar4->ShaderIndexInPipeline = 0;
  pFVar4->UserData = 0;
  pFVar4->NumUniformBuffers = 0;
  pFVar4->LooseParameterDataSize = 0;
  pFVar4->UniformBuffers = (FRHIUniformBuffer **)0x0;
  pFVar4->LooseParameterData = (uchar *)0x0;
  pFVar4->BindingType = Transient;
  return pFVar4;
}

