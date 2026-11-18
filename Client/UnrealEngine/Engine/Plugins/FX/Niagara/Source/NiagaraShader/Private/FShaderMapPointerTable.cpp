// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// ~FShaderMapPointerTable @ 148df1660

void __thiscall FShaderMapPointerTable::~FShaderMapPointerTable(FShaderMapPointerTable *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->VFTypes).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->VFTypes).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (*(void **)&this->VFTypes != (void *)0x0) {
    FMemory::Free(*(void **)&this->VFTypes);
  }
  pvVar1 = *(void **)&(this->ShaderTypes).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->ShaderTypes).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (*(void **)&this->ShaderTypes != (void *)0x0) {
    FMemory::Free(*(void **)&this->ShaderTypes);
  }
  this->_padding_ = (longlong)&___7FPointerTableBase__6B_;
  return;
}

