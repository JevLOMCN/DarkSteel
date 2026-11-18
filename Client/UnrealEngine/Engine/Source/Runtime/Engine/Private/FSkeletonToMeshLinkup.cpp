// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147588e70

UScriptStruct * __cdecl FSkeletonToMeshLinkup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletonToMeshLinkup.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletonToMeshLinkup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonToMeshLinkup,(UObject *)pUVar1,
                         L"SkeletonToMeshLinkup");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletonToMeshLinkup.OuterSingleton;
}

