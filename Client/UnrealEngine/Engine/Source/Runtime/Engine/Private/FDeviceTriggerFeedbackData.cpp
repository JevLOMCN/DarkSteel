// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147ba5f70

UScriptStruct * __cdecl FDeviceTriggerFeedbackData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDeviceTriggerFeedbackData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDeviceTriggerFeedbackData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData,(UObject *)pUVar1,
                         L"DeviceTriggerFeedbackData");
  }
  return Z_Registration_Info_UScriptStruct_FDeviceTriggerFeedbackData.OuterSingleton;
}

