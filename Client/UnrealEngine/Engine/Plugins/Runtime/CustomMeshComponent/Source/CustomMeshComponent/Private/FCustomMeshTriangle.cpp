// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CustomMeshComponent
// Functions: 1

// StaticStruct @ 14f02f3c0

UScriptStruct * __cdecl FCustomMeshTriangle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomMeshTriangle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_CustomMeshComponent();
    Z_Registration_Info_UScriptStruct_FCustomMeshTriangle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomMeshTriangle,(UObject *)pUVar1,
                         L"CustomMeshTriangle");
  }
  return Z_Registration_Info_UScriptStruct_FCustomMeshTriangle.OuterSingleton;
}

