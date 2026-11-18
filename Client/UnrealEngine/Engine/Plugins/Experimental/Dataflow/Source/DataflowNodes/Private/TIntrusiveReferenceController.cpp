// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 1

// DestroyObject @ 14dad36d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDataflowProxyElement,1>::DestroyObject
          (TIntrusiveReferenceController<FDataflowProxyElement,1> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  puVar2 = *(undefined8 **)((this->ObjectStorage).Pad + 0x60);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDataflowBaseElement__6B_;
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
    return;
  }
  return;
}

