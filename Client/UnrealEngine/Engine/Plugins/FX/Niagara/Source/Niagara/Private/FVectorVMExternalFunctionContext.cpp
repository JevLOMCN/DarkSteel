// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// GetNextRegister @ 148e6d560

float * __thiscall
FVectorVMExternalFunctionContext::GetNextRegister
          (FVectorVMExternalFunctionContext *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (this->NumRegisters <= this->RegReadCount) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar3 = (float *)(*pcVar1)();
      return pfVar3;
    }
  }
  *param_1 = (uint)this->RegInc[this->RegReadCount];
  pfVar3 = (float *)this->RegisterData[this->RegReadCount];
  this->RegReadCount = this->RegReadCount + 1;
  return pfVar3;
}

