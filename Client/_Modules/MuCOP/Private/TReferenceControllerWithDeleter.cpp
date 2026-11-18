// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 1

// DestroyObject @ 14d368a80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCustomizableObjectPopulationGeneratorPrivate,SharedPointerInternals::DefaultDeleter<FCustomizableObjectPopulationGeneratorPrivate>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCustomizableObjectPopulationGeneratorPrivate,SharedPointerInternals::DefaultDeleter<FCustomizableObjectPopulationGeneratorPrivate>,1>
                *this)

{
  FCustomizableObjectPopulationGeneratorPrivate *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
    DestructItems<FCustomizableObjectPopulationClassGenerator,int>
              ((FCustomizableObjectPopulationClassGenerator *)
               (pFVar1->ClassGenerators).AllocatorInstance.Data,(pFVar1->ClassGenerators).ArrayNum);
    pFVar2 = (pFVar1->ClassGenerators).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (*(void **)&pFVar1->ClassSampler != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar1->ClassSampler);
    }
    ::operator_delete(pFVar1,0x28);
    return;
  }
  return;
}

