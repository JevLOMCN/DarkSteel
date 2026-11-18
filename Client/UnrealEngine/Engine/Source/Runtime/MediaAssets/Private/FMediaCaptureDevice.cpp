// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// StaticStruct @ 146c14700

UScriptStruct * __cdecl FMediaCaptureDevice::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaCaptureDevice.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MediaAssets();
    Z_Registration_Info_UScriptStruct_FMediaCaptureDevice.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaCaptureDevice,(UObject *)pUVar1,
                         L"MediaCaptureDevice");
  }
  return Z_Registration_Info_UScriptStruct_FMediaCaptureDevice.OuterSingleton;
}

