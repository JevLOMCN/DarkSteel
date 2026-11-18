// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Release @ 142a95e10

uint __thiscall FRefCountBase::Release(FRefCountBase *this)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &this->field_0x8;
  LOCK();
  iVar2 = *(int *)puVar1;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (puVar1 == (undefined1 *)0x0) {
      this = (FRefCountBase *)0x0;
    }
    if (this != (FRefCountBase *)0x0) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return iVar2 - 1;
}

