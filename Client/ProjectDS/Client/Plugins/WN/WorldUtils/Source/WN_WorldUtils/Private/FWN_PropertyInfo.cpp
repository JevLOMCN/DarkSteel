// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 1

// StaticStruct @ 14a026410

UScriptStruct * __cdecl FWN_PropertyInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_PropertyInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_WorldUtils();
    Z_Registration_Info_UScriptStruct_FWN_PropertyInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_PropertyInfo,(UObject *)pUVar1,
                         L"WN_PropertyInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_PropertyInfo.OuterSingleton;
}

