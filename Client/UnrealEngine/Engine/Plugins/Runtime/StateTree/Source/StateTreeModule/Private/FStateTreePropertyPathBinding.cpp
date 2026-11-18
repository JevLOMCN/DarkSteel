// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// StaticStruct @ 14d5269e0

UScriptStruct * __cdecl FStateTreePropertyPathBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyPathBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreePropertyPathBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding,(UObject *)pUVar1,
                         L"StateTreePropertyPathBinding");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreePropertyPathBinding.OuterSingleton;
}

// GetSourceDataHandleStruct @ 14d526a50

FConstStructView * __thiscall
FStateTreePropertyPathBinding::GetSourceDataHandleStruct
          (FStateTreePropertyPathBinding *this,FConstStructView *__return_storage_ptr__)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDataHandle,(UObject *)pUVar1,
                         L"StateTreeDataHandle");
  }
  __return_storage_ptr__->ScriptStruct =
       Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton;
  __return_storage_ptr__->StructMemory = &(this->SourceDataHandle).Source;
  return __return_storage_ptr__;
}

