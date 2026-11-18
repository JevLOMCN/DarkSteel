// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// StaticStruct @ 1468d92e0

UScriptStruct * __cdecl FSequenceTickManagerWidgetData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSequenceTickManagerWidgetData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FSequenceTickManagerWidgetData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData,(UObject *)pUVar1,
                         L"SequenceTickManagerWidgetData");
  }
  return Z_Registration_Info_UScriptStruct_FSequenceTickManagerWidgetData.OuterSingleton;
}

