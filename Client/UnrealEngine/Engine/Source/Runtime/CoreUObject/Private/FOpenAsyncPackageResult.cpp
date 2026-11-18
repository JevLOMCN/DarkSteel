// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FOpenAsyncPackageResult @ 14212b910

FOpenAsyncPackageResult * __thiscall
FOpenAsyncPackageResult::FOpenAsyncPackageResult
          (FOpenAsyncPackageResult *this,
          TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_> *param_1,
          EPackageFormat param_2,bool param_3)

{
  (this->Handle).Ptr = param_1->Ptr;
  param_1->Ptr = (IAsyncReadFileHandle *)0x0;
  this->Format = param_2;
  this->bNeedsEngineVersionChecks = param_3;
  return this;
}

// ~FOpenAsyncPackageResult @ 14212c920

void __thiscall FOpenAsyncPackageResult::~FOpenAsyncPackageResult(FOpenAsyncPackageResult *this)

{
  IAsyncReadFileHandle *pIVar1;
  
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IAsyncReadFileHandle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014212c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

