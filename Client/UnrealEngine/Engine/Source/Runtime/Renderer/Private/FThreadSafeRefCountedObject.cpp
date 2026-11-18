// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Release @ 145448550

uint __thiscall FThreadSafeRefCountedObject::Release(FThreadSafeRefCountedObject *this)

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
      this = (FThreadSafeRefCountedObject *)0x0;
    }
    if (this != (FThreadSafeRefCountedObject *)0x0) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return iVar2 - 1;
}

