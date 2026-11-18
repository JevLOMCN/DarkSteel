// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// TRefCountPtr<UE::Net::FNetBlob> @ 144266850

TRefCountPtr<UE::Net::FNetBlob> * __thiscall
TRefCountPtr<UE::Net::FNetBlob>::TRefCountPtr<UE::Net::FNetBlob>
          (TRefCountPtr<UE::Net::FNetBlob> *this)

{
  this->Reference = (FNetBlob *)0x0;
  return this;
}

// ~TRefCountPtr<UE::Net::FNetBlob> @ 144268c40

void __thiscall
TRefCountPtr<UE::Net::FNetBlob>::~TRefCountPtr<UE::Net::FNetBlob>
          (TRefCountPtr<UE::Net::FNetBlob> *this)

{
  int *piVar1;
  FNetBlob *pFVar2;
  
  pFVar2 = this->Reference;
  if (pFVar2 == (FNetBlob *)0x0) {
    return;
  }
  piVar1 = &pFVar2->RefCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014424cd0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,1);
    return;
  }
  return;
}

