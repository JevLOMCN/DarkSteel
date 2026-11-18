// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 2

// StaticStruct @ 1494bc080

UScriptStruct * __cdecl FShaderValueTypeHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FShaderValueTypeHandle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UScriptStruct_FShaderValueTypeHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShaderValueTypeHandle,(UObject *)pUVar1,
                         L"ShaderValueTypeHandle");
  }
  return Z_Registration_Info_UScriptStruct_FShaderValueTypeHandle.OuterSingleton;
}

// Serialize @ 1494d6e30

bool __thiscall FShaderValueTypeHandle::Serialize(FShaderValueTypeHandle *this,FArchive *param_1)

{
  ::operator<<(param_1,this);
  return true;
}

