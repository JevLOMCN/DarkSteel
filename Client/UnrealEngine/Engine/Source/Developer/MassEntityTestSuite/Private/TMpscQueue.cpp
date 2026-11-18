// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// ~TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,enum_FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory> @ 1470f7a50

void __thiscall
TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,enum_FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>
::
~TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,enum_FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>
          (void *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  UObject *pUVar3;
  
  puVar1 = (undefined8 *)**(undefined8 **)((longlong)this + 8);
  FMemory::Free(*(void **)((longlong)this + 8));
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)this + 8) = puVar1;
    puVar1 = (undefined8 *)*puVar1;
    lVar2 = *(longlong *)((longlong)this + 8);
    pUVar3 = *(UObject **)(lVar2 + 8);
    if (pUVar3 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  return;
}

