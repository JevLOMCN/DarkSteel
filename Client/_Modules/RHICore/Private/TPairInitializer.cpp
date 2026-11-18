// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 1

// operator<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>_TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo> @ 1446c9480

TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo> * __thiscall
TPairInitializer<unsigned___int64_const_&,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo_const_&>
::
operator<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>_TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>
          (TPairInitializer<unsigned___int64_const_&,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo_const_&>
           *this,TTuple<unsigned___int64,UE::RHICore::Nvidia::Aftermath::FShaderDebugInfo>
                 *__return_storage_ptr__)

{
  FShaderDebugInfo *pFVar1;
  
  pFVar1 = this->Value;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x8,&pFVar1->DebugName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,
                     &(pFVar1->DebugData).FunctionName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x28,&(pFVar1->DebugData).PDBName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x38,&(pFVar1->DebugData).Hash);
  return __return_storage_ptr__;
}

