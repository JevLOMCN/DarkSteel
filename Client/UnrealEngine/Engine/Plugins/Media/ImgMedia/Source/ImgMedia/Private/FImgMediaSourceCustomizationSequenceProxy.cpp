// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 1

// StaticStruct @ 14ea30890

UScriptStruct * __cdecl FImgMediaSourceCustomizationSequenceProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ImgMedia();
    Z_Registration_Info_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy,
                         (UObject *)pUVar1,L"ImgMediaSourceCustomizationSequenceProxy");
  }
  return Z_Registration_Info_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy.OuterSingleton;
}

