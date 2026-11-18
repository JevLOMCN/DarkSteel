// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 2

// StaticStruct @ 145ecf110

UScriptStruct * __cdecl FFoliageVertexColorChannelMask::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFoliageVertexColorChannelMask.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UScriptStruct_FFoliageVertexColorChannelMask.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask,(UObject *)pUVar1,
                         L"FoliageVertexColorChannelMask");
  }
  return Z_Registration_Info_UScriptStruct_FFoliageVertexColorChannelMask.OuterSingleton;
}

// FFoliageVertexColorChannelMask @ 145ed87a0

FFoliageVertexColorChannelMask * __thiscall
FFoliageVertexColorChannelMask::FFoliageVertexColorChannelMask(FFoliageVertexColorChannelMask *this)

{
  this->UseMask = 0;
  this->InvertMask = 0;
  this->MaskThreshold = 0.5;
  return this;
}

