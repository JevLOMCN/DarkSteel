// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// ~TSoftObjectPtr<UMaterialInterface_const_> @ 14ddca120

void __thiscall
TSoftObjectPtr<UMaterialInterface_const_>::~TSoftObjectPtr<UMaterialInterface_const_>
          (TSoftObjectPtr<UMaterialInterface_const_> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// ~TSoftObjectPtr<UMaterialInterface> @ 14ddca140

void __thiscall
TSoftObjectPtr<UMaterialInterface>::~TSoftObjectPtr<UMaterialInterface>
          (TSoftObjectPtr<UMaterialInterface> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

