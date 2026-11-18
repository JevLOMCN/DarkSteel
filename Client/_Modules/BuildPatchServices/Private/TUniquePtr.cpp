// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// operator= @ 1431bfe00

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> * __thiscall
TUniquePtr<FArchive,TDefaultDelete<FArchive>_>::operator=
          (TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *this,
          TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *param_1)

{
  FArchive *pFVar1;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FArchive *)0x0;
    if (pFVar1 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
  }
  return this;
}

