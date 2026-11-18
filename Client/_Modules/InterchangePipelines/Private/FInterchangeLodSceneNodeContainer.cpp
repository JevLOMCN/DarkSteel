// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 1

// StaticStruct @ 14e72ed60

UScriptStruct * __cdecl FInterchangeLodSceneNodeContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeLodSceneNodeContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UScriptStruct_FInterchangeLodSceneNodeContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer,
                         (UObject *)pUVar1,L"InterchangeLodSceneNodeContainer");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeLodSceneNodeContainer.OuterSingleton;
}

