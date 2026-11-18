// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e114f20

UScriptStruct * __cdecl FRigVMTrait_OptimusDeformer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusDeformer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusDeformer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_OptimusDeformer,(UObject *)pUVar1,
                         L"RigVMTrait_OptimusDeformer");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusDeformer.OuterSingleton;
}

// GetDisplayName @ 14e114f60

FString * __thiscall
FRigVMTrait_OptimusDeformer::GetDisplayName
          (FRigVMTrait_OptimusDeformer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Deformer Graph Asset");
  return __return_storage_ptr__;
}

