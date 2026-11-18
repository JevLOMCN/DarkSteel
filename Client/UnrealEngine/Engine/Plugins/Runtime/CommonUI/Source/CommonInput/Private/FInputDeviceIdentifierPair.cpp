// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 1

// StaticStruct @ 14a76eb90

UScriptStruct * __cdecl FInputDeviceIdentifierPair::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputDeviceIdentifierPair.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonInput();
    Z_Registration_Info_UScriptStruct_FInputDeviceIdentifierPair.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputDeviceIdentifierPair,(UObject *)pUVar1,
                         L"InputDeviceIdentifierPair");
  }
  return Z_Registration_Info_UScriptStruct_FInputDeviceIdentifierPair.OuterSingleton;
}

