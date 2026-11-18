// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06c6d0

UScriptStruct * __cdecl FRigVMInvokeEntryOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMInvokeEntryOp.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMInvokeEntryOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMInvokeEntryOp,(UObject *)pUVar1,
                         L"RigVMInvokeEntryOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMInvokeEntryOp.OuterSingleton;
}

// Serialize @ 14a0a6110

void __thiscall FRigVMInvokeEntryOp::Serialize(FRigVMInvokeEntryOp *this,FArchive *param_1)

{
  ForAnyElementType FVar1;
  FName local_res10 [3];
  FString local_18;
  
  if ((param_1->field_0x28 & 1) == 0) {
    ::FName::ToString(&this->EntryName,&local_18);
    ::operator<<(param_1,&local_18);
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_18);
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName(local_res10,(wchar_t *)FVar1.Data);
    this->EntryName = local_res10[0];
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

