// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// DestroyObject @ 145edff70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<UProceduralFoliageTile_*>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<UProceduralFoliageTile_*>,1> *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000145edffb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

