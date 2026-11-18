// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 3

// StaticStruct @ 14a070ce0

UScriptStruct * __cdecl FRigVMTrait::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait,(UObject *)pUVar1,L"RigVMTrait");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton;
}

// GetDisplayName @ 14a070d20

FString * __thiscall FRigVMTrait::GetDisplayName(FRigVMTrait *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ~FRigVMTrait @ 14a07bf90

void __thiscall FRigVMTrait::~FRigVMTrait(FRigVMTrait *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigVMTrait__6B_;
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

