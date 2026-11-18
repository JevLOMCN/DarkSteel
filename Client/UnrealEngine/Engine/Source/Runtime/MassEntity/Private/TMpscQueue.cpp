// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,enum_FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory> @ 1471d5510

TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>
* __thiscall
TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,enum_FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>
::
TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,enum_FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>
          (void *this)

{
  undefined8 *puVar1;
  
  *(undefined8 *)this = 0;
  puVar1 = FMemory::Malloc(0x18,8);
  *puVar1 = 0;
  *(undefined8 **)this = puVar1;
  *(undefined8 **)((longlong)this + 8) = puVar1;
  return this;
}

