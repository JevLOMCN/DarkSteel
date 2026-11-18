// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessage
// Functions: 1

// StaticStruct @ 14e9bcff0

UScriptStruct * __cdecl FLocalizableMessageParameterString::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterString,
                         (UObject *)pUVar1,L"LocalizableMessageParameterString");
  }
  return Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton;
}

