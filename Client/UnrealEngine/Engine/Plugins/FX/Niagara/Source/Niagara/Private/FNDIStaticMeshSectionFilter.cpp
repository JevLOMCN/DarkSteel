// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// StaticStruct @ 148ee53c0

UScriptStruct * __cdecl FNDIStaticMeshSectionFilter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDIStaticMeshSectionFilter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDIStaticMeshSectionFilter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter,(UObject *)pUVar1,
                         L"NDIStaticMeshSectionFilter");
  }
  return Z_Registration_Info_UScriptStruct_FNDIStaticMeshSectionFilter.OuterSingleton;
}

