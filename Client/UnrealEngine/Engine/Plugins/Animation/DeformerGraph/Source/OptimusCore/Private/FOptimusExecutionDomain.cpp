// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// StaticStruct @ 14e108690

UScriptStruct * __cdecl FOptimusExecutionDomain::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusExecutionDomain.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusExecutionDomain.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusExecutionDomain,(UObject *)pUVar1,
                         L"OptimusExecutionDomain");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusExecutionDomain.OuterSingleton;
}

// AsExpression @ 14e17ea80

FString * __thiscall
FOptimusExecutionDomain::AsExpression(FOptimusExecutionDomain *this,FString *__return_storage_ptr__)

{
  if (this->Type == DomainName) {
    ::FName::ToString(&this->Name,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,&this->Expression);
  return __return_storage_ptr__;
}

// IsDefined @ 14e1eec70

bool __thiscall FOptimusExecutionDomain::IsDefined(FOptimusExecutionDomain *this)

{
  int iVar1;
  FString *pFVar2;
  FString local_18;
  
  if (this->Type == DomainName) {
    return this->Name != (FName)0x0;
  }
  pFVar2 = ::FString::TrimStartAndEnd(&this->Expression,&local_18);
  iVar1 = (pFVar2->Data).ArrayNum;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return 1 < iVar1;
}

