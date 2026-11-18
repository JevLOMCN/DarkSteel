// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FFontKey @ 1424726b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFontKey * __thiscall
FFreeTypeCacheDirectory::FFontKey::FFontKey
          (FFontKey *this,FT_FaceRec_ *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->Face = param_1;
  this->Flags = param_2;
  this->FontRenderSize = param_3;
  uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = (uVar1 >> 0x10 ^ uVar1) - param_2 ^ (uint)param_2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - param_2 ^ uVar2 << 8;
  uVar3 = (param_2 - uVar2) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar3 = ((uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf) - param_3 ^ param_3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - param_3 ^ uVar3 << 8;
  uVar2 = (param_3 - uVar3) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  this->KeyHash = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
  return this;
}

// FFontKey @ 1424727f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFontKey * __thiscall
FHarfBuzzFontCache::FFontKey::FFontKey(FFontKey *this,FT_FaceRec_ *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->Face = param_1;
  this->Flags = param_2;
  uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = (uVar1 >> 0x10 ^ uVar1) - param_2 ^ (uint)param_2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - param_2 ^ uVar2 << 8;
  uVar3 = (param_2 - uVar2) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  this->KeyHash = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf;
  return this;
}

