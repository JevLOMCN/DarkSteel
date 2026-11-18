// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorLayerUtilities
// Functions: 1

// StaticStruct @ 14ddb86e0

UScriptStruct * __cdecl FActorLayer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorLayer.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ActorLayerUtilities();
    Z_Registration_Info_UScriptStruct_FActorLayer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorLayer,(UObject *)pUVar1,L"ActorLayer");
  }
  return Z_Registration_Info_UScriptStruct_FActorLayer.OuterSingleton;
}

