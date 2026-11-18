// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// operator= @ 149ad3e90

FSoftClassPath * __thiscall FSoftClassPath::operator=(FSoftClassPath *this,FSoftClassPath *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  puVar1 = &param_1->field_0x10;
  puVar2 = &this->field_0x10;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar3;
  if (puVar2 != puVar1) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
    *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
    *(undefined8 *)&param_1->field_0x18 = 0;
  }
  return this;
}

