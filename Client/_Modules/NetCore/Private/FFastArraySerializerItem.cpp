// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// StaticStruct @ 1441c3d70

UScriptStruct * __cdecl FFastArraySerializerItem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFastArraySerializerItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UScriptStruct_FFastArraySerializerItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFastArraySerializerItem,(UObject *)pUVar1,
                         L"FastArraySerializerItem");
  }
  return Z_Registration_Info_UScriptStruct_FFastArraySerializerItem.OuterSingleton;
}

