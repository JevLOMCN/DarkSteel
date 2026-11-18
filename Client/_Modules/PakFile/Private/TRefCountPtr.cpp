// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// operator= @ 142a578d0

/* WARNING: Enum "EVersion": Some values do not have unique names */

TRefCountPtr<FPakFile> * __thiscall
TRefCountPtr<FPakFile>::operator=(TRefCountPtr<FPakFile> *this,TRefCountPtr<FPakFile> *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FPakFile *pFVar3;
  
  if (this != param_1) {
    pFVar3 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FPakFile *)0x0;
    if (pFVar3 != (FPakFile *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar3 = (FPakFile *)0x0;
        }
        if (pFVar3 != (FPakFile *)0x0) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
  }
  return this;
}

