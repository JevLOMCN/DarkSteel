// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FVectorCacheKey @ 1424eb790

FVectorCacheKey * __thiscall
FSlateVectorGraphicsCache::FVectorCacheKey::FVectorCacheKey
          (FVectorCacheKey *this,FName param_1,TVector2<float> param_2,float param_3)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float local_res18;
  float fStackX_1c;
  
  fStackX_1c = param_2.field0_0x0._4_4_;
  local_res18 = param_2.field0_0x0._0_4_;
  this->BrushName = param_1;
  fVar6 = local_res18 * param_3 + local_res18 * param_3 + __real_3f000000;
  uVar5 = (int)ROUND(fStackX_1c * param_3 + fStackX_1c * param_3 + __real_3f000000) >> 1;
  (this->PixelSize).field0_0x0._s_0.Y = uVar5;
  iVar3 = (int)ROUND(fVar6) >> 1;
  (this->PixelSize).field0_0x0._s_0.X = iVar3;
  FVar1 = this->BrushName;
  uVar4 = iVar3 - uVar5 ^ uVar5 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar5 ^ uVar4 << 8;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar4 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 0xf;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = (FVar1.Number - uVar4) + uVar2 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar5 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 << 10;
  this->KeyHash = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xf;
  return this;
}

