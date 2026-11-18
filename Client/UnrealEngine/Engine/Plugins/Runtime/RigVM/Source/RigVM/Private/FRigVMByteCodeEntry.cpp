// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06d290

UScriptStruct * __cdecl FRigVMByteCodeEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMByteCodeEntry,(UObject *)pUVar1,
                         L"RigVMByteCodeEntry");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton;
}

// GetSanitizedName @ 14a098350

FString * __thiscall
FRigVMByteCodeEntry::GetSanitizedName(FRigVMByteCodeEntry *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->Name,__return_storage_ptr__);
  ::FString::ReplaceInline(__return_storage_ptr__,L" ",L"_",IgnoreCase);
  ::FString::TrimStartAndEndInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

