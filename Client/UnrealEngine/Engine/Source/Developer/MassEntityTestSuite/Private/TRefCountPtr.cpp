// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// TRefCountPtr<FBaseGraphTask> @ 1470f1ff0

TRefCountPtr<FBaseGraphTask> * __thiscall
TRefCountPtr<FBaseGraphTask>::TRefCountPtr<FBaseGraphTask>
          (TRefCountPtr<FBaseGraphTask> *this,TRefCountPtr<FBaseGraphTask> *param_1)

{
  FBaseGraphTask *pFVar1;
  
  this->Reference = (FBaseGraphTask *)0x0;
  pFVar1 = param_1->Reference;
  this->Reference = pFVar1;
  if (pFVar1 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar1->field_0x30 = *(int *)&pFVar1->field_0x30 + 1;
    UNLOCK();
  }
  return this;
}

