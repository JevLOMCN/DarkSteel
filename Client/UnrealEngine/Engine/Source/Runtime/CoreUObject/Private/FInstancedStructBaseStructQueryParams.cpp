// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// StaticStruct @ 141e48bd0

UScriptStruct * __cdecl UE::StructUtils::FInstancedStructBaseStructQueryParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstancedStructBaseStructQueryParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FInstancedStructBaseStructQueryParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStructBaseStructQueryParams,
                         (UObject *)pUVar1,L"InstancedStructBaseStructQueryParams");
  }
  return Z_Registration_Info_UScriptStruct_FInstancedStructBaseStructQueryParams.OuterSingleton;
}

