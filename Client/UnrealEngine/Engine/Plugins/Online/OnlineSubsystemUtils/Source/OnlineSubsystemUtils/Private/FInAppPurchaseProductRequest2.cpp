// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// StaticStruct @ 14ec473d0

UScriptStruct * __cdecl FInAppPurchaseProductRequest2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseProductRequest2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UScriptStruct_FInAppPurchaseProductRequest2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2,(UObject *)pUVar1,
                         L"InAppPurchaseProductRequest2");
  }
  return Z_Registration_Info_UScriptStruct_FInAppPurchaseProductRequest2.OuterSingleton;
}

