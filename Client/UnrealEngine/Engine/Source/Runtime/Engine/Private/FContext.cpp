// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetDistributionData @ 148179940

UObject * __thiscall UParticleModule::FContext::GetDistributionData(FContext *this)

{
  UObject *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014817994a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UObject *)(**(code **)((longlong)*this->Owner->Component + 8))();
  return pUVar1;
}

// GetInstanceName @ 14817a0b0

FString * __thiscall
UParticleModule::FContext::GetInstanceName(FContext *this,FString *__return_storage_ptr__)

{
  (**(code **)((longlong)*this->Owner->Component + 0x90))();
  return __return_storage_ptr__;
}

// GetTemplateName @ 14817f830

FString * __thiscall
UParticleModule::FContext::GetTemplateName(FContext *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  FName local_res8 [4];
  
  lVar1 = (**(code **)((longlong)*this->Owner->Component + 0xd8))();
  if (lVar1 == 0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  local_res8[0] = *(FName *)(lVar1 + 0x18);
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTransform @ 14817f890

TTransform<double> * __thiscall UParticleModule::FContext::GetTransform(FContext *this)

{
  TTransform<double> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014817f89a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TTransform<double> *)(**(code **)((longlong)*this->Owner->Component + 0x10))();
  return pTVar1;
}

