// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// FError @ 142a515d0

FError * __thiscall UE::UnifiedError::FError::FError(FError *this,FError *param_1)

{
  IErrorDetails *pIVar1;
  IErrorDetails *pIVar2;
  undefined1 local_res8 [8];
  
  (this->ErrorDetails).Reference = (IErrorDetails *)0x0;
  this->ErrorCode = param_1->ErrorCode;
  param_1->ErrorCode = 0;
  this->ModuleId = param_1->ModuleId;
  pIVar1 = (param_1->ErrorDetails).Reference;
  param_1->ModuleId = 0;
  if (pIVar1 != (IErrorDetails *)0x0) {
    pIVar2 = (this->ErrorDetails).Reference;
    if (pIVar2 != pIVar1) {
      (this->ErrorDetails).Reference = pIVar1;
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      if (pIVar2 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    pIVar1 = (param_1->ErrorDetails).Reference;
    if (pIVar1 != (IErrorDetails *)0x0) {
      (param_1->ErrorDetails).Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
  }
  return this;
}

