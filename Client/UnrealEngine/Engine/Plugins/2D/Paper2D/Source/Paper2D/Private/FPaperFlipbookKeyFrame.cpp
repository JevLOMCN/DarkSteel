// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 1

// StaticStruct @ 14acdf7a0

UScriptStruct * __cdecl FPaperFlipbookKeyFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPaperFlipbookKeyFrame.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UScriptStruct_FPaperFlipbookKeyFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame,(UObject *)pUVar1,
                         L"PaperFlipbookKeyFrame");
  }
  return Z_Registration_Info_UScriptStruct_FPaperFlipbookKeyFrame.OuterSingleton;
}

