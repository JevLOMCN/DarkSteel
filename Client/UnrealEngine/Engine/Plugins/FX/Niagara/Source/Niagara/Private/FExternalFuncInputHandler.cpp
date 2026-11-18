// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// FExternalFuncInputHandler<int> @ 148f7dd20

FExternalFuncInputHandler<int> * __thiscall
VectorVM::FExternalFuncInputHandler<int>::FExternalFuncInputHandler<int>
          (FExternalFuncInputHandler<int> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  
  this->InputPtr = (int *)0x0;
  this->StartPtr = (int *)0x0;
  this->AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&this->AdvanceOffset);
  this->InputPtr = (int *)pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  this->InputPtr = (int *)(pfVar2 + iVar1 * this->AdvanceOffset);
  this->StartPtr = (int *)(pfVar2 + iVar1 * this->AdvanceOffset);
  return this;
}

// FExternalFuncInputHandler<float> @ 148f7dd80

FExternalFuncInputHandler<float> * __thiscall
VectorVM::FExternalFuncInputHandler<float>::FExternalFuncInputHandler<float>
          (FExternalFuncInputHandler<float> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  
  this->InputPtr = (float *)0x0;
  this->StartPtr = (float *)0x0;
  this->AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&this->AdvanceOffset);
  this->InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  this->InputPtr = pfVar2 + iVar1 * this->AdvanceOffset;
  this->StartPtr = pfVar2 + iVar1 * this->AdvanceOffset;
  return this;
}

// FExternalFuncInputHandler<float> @ 148f7dde0

FExternalFuncInputHandler<float> * __thiscall
VectorVM::FExternalFuncInputHandler<float>::FExternalFuncInputHandler<float>
          (FExternalFuncInputHandler<float> *this)

{
  this->InputPtr = (float *)0x0;
  this->StartPtr = (float *)0x0;
  this->AdvanceOffset = 0;
  return this;
}

