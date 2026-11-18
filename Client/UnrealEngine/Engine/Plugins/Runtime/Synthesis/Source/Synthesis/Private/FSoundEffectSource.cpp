// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// ~FSoundEffectSource @ 14f0bf0e0

void __thiscall FSoundEffectSource::~FSoundEffectSource(FSoundEffectSource *this)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)&this->field_0x68;
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)&this->field_0x68 = *puVar1;
    if (puVar1[2] != 0) {
      plVar2 = puVar1 + 4;
      if ((longlong *)puVar1[7] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar1[7];
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    ::operator_delete(puVar1,0x40);
    puVar1 = *(undefined8 **)&this->field_0x68;
  }
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x000146540ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x10);
  return;
}

