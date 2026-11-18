// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1488764a0

UScriptStruct * __cdecl FTextureSourceBlock::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTextureSourceBlock.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTextureSourceBlock.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTextureSourceBlock,(UObject *)pUVar1,
                         L"TextureSourceBlock");
  }
  return Z_Registration_Info_UScriptStruct_FTextureSourceBlock.OuterSingleton;
}

// FTextureSourceBlock @ 14887d4a0

FTextureSourceBlock * __thiscall FTextureSourceBlock::FTextureSourceBlock(FTextureSourceBlock *this)

{
  this->BlockX = 0;
  this->BlockY = 0;
  this->SizeX = 0;
  this->SizeY = 0;
  this->NumSlices = 0;
  this->NumMips = 0;
  return this;
}

