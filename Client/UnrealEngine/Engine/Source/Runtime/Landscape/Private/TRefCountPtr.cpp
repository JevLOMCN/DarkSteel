// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// operator= @ 145f04360

TRefCountPtr<Chaos::FHeightField> * __thiscall
TRefCountPtr<Chaos::FHeightField>::operator=
          (TRefCountPtr<Chaos::FHeightField> *this,TRefCountPtr<Chaos::FHeightField> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FHeightField *pFVar3;
  
  if (this != param_1) {
    pFVar3 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FHeightField *)0x0;
    if (pFVar3 != (FHeightField *)0x0) {
      LOCK();
      puVar1 = &pFVar3->field_0x8;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(int *)&pFVar3->field_0xc == 0)) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
  }
  return this;
}

