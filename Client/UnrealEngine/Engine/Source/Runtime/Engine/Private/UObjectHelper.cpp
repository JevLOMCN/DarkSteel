// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetFullNameIfAvailable<UStaticMeshComponent_const_> @ 14799d7a0

FString * __cdecl
UObjectHelper::GetFullNameIfAvailable<UStaticMeshComponent_const_>
          (FString *__return_storage_ptr__,UStaticMeshComponent *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameIfAvailable<UStaticMeshComponent> @ 14876eee0

FString * __cdecl
UObjectHelper::GetFullNameIfAvailable<UStaticMeshComponent>
          (FString *__return_storage_ptr__,UStaticMeshComponent *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

