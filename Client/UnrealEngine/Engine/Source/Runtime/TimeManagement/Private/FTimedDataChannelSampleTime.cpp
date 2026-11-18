// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 1

// StaticStruct @ 14603ad30

UScriptStruct * __cdecl FTimedDataChannelSampleTime::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTimedDataChannelSampleTime.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TimeManagement();
    Z_Registration_Info_UScriptStruct_FTimedDataChannelSampleTime.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataChannelSampleTime,(UObject *)pUVar1,
                         L"TimedDataChannelSampleTime");
  }
  return Z_Registration_Info_UScriptStruct_FTimedDataChannelSampleTime.OuterSingleton;
}

