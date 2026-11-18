// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgetsCore
// Functions: 1

// StaticStruct @ 14d7e6fa0

UScriptStruct * __cdecl FAudioMeterChannelInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMeterChannelInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgetsCore();
    Z_Registration_Info_UScriptStruct_FAudioMeterChannelInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMeterChannelInfo,(UObject *)pUVar1,
                         L"AudioMeterChannelInfo");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMeterChannelInfo.OuterSingleton;
}

