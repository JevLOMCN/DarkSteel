// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// StaticStruct @ 14ec47410

UScriptStruct * __cdecl FInAppPurchaseReceiptInfo2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseReceiptInfo2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UScriptStruct_FInAppPurchaseReceiptInfo2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2,(UObject *)pUVar1,
                         L"InAppPurchaseReceiptInfo2");
  }
  return Z_Registration_Info_UScriptStruct_FInAppPurchaseReceiptInfo2.OuterSingleton;
}

