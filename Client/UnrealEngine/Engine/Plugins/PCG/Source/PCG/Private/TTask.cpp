// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// operator= @ 149ca6bd0

TTask<bool> * __thiscall UE::Tasks::TTask<bool>::operator=(TTask<bool> *this,TTask<bool> *param_1)

{
  int *piVar1;
  int iVar2;
  TTask<bool> TVar3;
  
  if (this != param_1) {
    TVar3 = *this;
    *this = *param_1;
    *param_1 = (TTask<bool>)0x0;
    if (TVar3 != (TTask<bool>)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)TVar3 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)TVar3)(TVar3,1);
      }
    }
  }
  return this;
}

