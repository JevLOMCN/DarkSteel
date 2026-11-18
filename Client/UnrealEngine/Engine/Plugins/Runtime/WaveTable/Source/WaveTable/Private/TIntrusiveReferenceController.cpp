// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 1

// DestroyObject @ 14b2bee60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWaveTableBankAssetProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FWaveTableBankAssetProxy,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DestructItems<FWaveTableData,int>
            (*(FWaveTableData **)((this->ObjectStorage).Pad + 0x30),
             *(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014b2beea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

