// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 1

// StaticStruct @ 14d0cdb00

UScriptStruct * __cdecl FAudioCaptureDeviceInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioCaptureDeviceInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioCapture();
    Z_Registration_Info_UScriptStruct_FAudioCaptureDeviceInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo,(UObject *)pUVar1,
                         L"AudioCaptureDeviceInfo");
  }
  return Z_Registration_Info_UScriptStruct_FAudioCaptureDeviceInfo.OuterSingleton;
}

