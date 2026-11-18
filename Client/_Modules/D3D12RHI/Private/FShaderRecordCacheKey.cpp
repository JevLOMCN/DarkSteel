// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// operator== @ 1459f9e50

bool __thiscall
FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey::operator==
          (FShaderRecordCacheKey *this,FShaderRecordCacheKey *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  if (((this->Hash == param_1->Hash) && (this->ShaderIndex == param_1->ShaderIndex)) &&
     (uVar1 = this->NumUniformBuffers, uVar1 == param_1->NumUniformBuffers)) {
    uVar2 = 0;
    if (uVar1 != 0) {
      lVar3 = (longlong)param_1 - (longlong)this;
      do {
        if (this->UniformBuffers[0] != *(FRHIUniformBuffer ***)((longlong)this + lVar3)) {
          return false;
        }
        uVar2 = uVar2 + 1;
        this = (FShaderRecordCacheKey *)(this->UniformBuffers + 1);
      } while (uVar2 < uVar1);
    }
    return true;
  }
  return false;
}

