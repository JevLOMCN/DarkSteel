// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba2fa0

UScriptStruct * __cdecl FAudioBasedVibrationData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioBasedVibrationData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAudioBasedVibrationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioBasedVibrationData,(UObject *)pUVar1,
                         L"AudioBasedVibrationData");
  }
  return Z_Registration_Info_UScriptStruct_FAudioBasedVibrationData.OuterSingleton;
}

// FAudioBasedVibrationData @ 147bb8bd0

FAudioBasedVibrationData * __thiscall
FAudioBasedVibrationData::FAudioBasedVibrationData(FAudioBasedVibrationData *this)

{
  (this->Sound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  return this;
}

