// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FFontCacheStatsKey @ 1424720e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFontCacheStatsKey * __thiscall
FFontCacheStatsKey::FFontCacheStatsKey(FFontCacheStatsKey *this,FShapedGlyphEntryKey *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FFreeTypeFace *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  (this->FontFace).Object = (param_1->FontFace).Object;
  pTVar4 = (param_1->FontFace).WeakReferenceCount.ReferenceController;
  (this->FontFace).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  uVar8 = param_1->FontRenderSize;
  this->FontRenderSize = uVar8;
  uVar12 = param_1->OutlineRenderSize;
  this->OutlineRenderSize = uVar12;
  bVar2 = param_1->OutlineMiteredCorners;
  this->OutlineMiteredCorners = bVar2;
  bVar3 = param_1->OutlineSeparateFillAlpha;
  this->OutlineSeparateFillAlpha = bVar3;
  this->KeyHash = 0;
  fVar1 = param_1->FontSkew;
  this->FontSkew = fVar1;
  pFVar5 = (this->FontFace).Object;
  uVar6 = ((uint)((ulonglong)pFVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar5 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar10 = uVar6 >> 0xd ^ -uVar6;
  uVar7 = (-0x61c88647 - uVar10) - uVar6 ^ uVar10 << 8;
  uVar11 = (uVar6 - uVar7) - uVar10 ^ uVar7 >> 0xd;
  uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 >> 0xc;
  uVar6 = (uVar7 - uVar10) - uVar11 ^ uVar10 << 0x10;
  uVar11 = (uVar11 - uVar6) - uVar10 ^ uVar6 >> 5;
  uVar7 = (uVar10 - uVar11) - uVar6 ^ uVar11 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar11 ^ uVar7 << 10;
  uVar7 = ((uVar11 - uVar6) - uVar7 ^ uVar6 >> 0xf) - uVar8 ^ uVar8 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar7 ^ uVar7 << 8;
  uVar10 = (uVar8 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar8 = (uVar6 - uVar7) - uVar10 ^ uVar7 << 0x10;
  uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
  uVar6 = (uVar7 - uVar10) - uVar8 ^ uVar10 >> 3;
  uVar8 = (uVar8 - uVar6) - uVar10 ^ uVar6 << 10;
  uVar6 = ((uVar10 - uVar8) - uVar6 ^ uVar8 >> 0xf) - uVar12 ^ uVar12 >> 0xd;
  uVar8 = (-0x61c88647 - uVar12) - uVar6 ^ uVar6 << 8;
  uVar7 = (uVar12 - uVar8) - uVar6 ^ uVar8 >> 0xd;
  uVar12 = (uVar6 - uVar7) - uVar8 ^ uVar7 >> 0xc;
  uVar8 = (uVar8 - uVar12) - uVar7 ^ uVar12 << 0x10;
  uVar6 = (uVar7 - uVar8) - uVar12 ^ uVar8 >> 5;
  uVar12 = (uVar12 - uVar6) - uVar8 ^ uVar6 >> 3;
  uVar8 = (uVar8 - uVar12) - uVar6 ^ uVar12 << 10;
  uVar8 = (uVar6 - uVar8) - uVar12 ^ uVar8 >> 0xf;
  iVar9 = uVar8 - bVar2;
  uVar12 = 0x9e3779b9 - uVar8 ^ iVar9 * 0x100;
  uVar6 = (bVar2 - uVar12) - iVar9 ^ uVar12 >> 0xd;
  uVar8 = (iVar9 - uVar6) - uVar12 ^ uVar6 >> 0xc;
  uVar12 = (uVar12 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar6 = (uVar6 - uVar12) - uVar8 ^ uVar12 >> 5;
  uVar8 = (uVar8 - uVar6) - uVar12 ^ uVar6 >> 3;
  uVar12 = (uVar12 - uVar8) - uVar6 ^ uVar8 << 10;
  uVar8 = (uVar6 - uVar12) - uVar8 ^ uVar12 >> 0xf;
  iVar9 = uVar8 - bVar3;
  uVar12 = 0x9e3779b9 - uVar8 ^ iVar9 * 0x100;
  uVar6 = (bVar3 - uVar12) - iVar9 ^ uVar12 >> 0xd;
  uVar8 = (iVar9 - uVar6) - uVar12 ^ uVar6 >> 0xc;
  uVar12 = (uVar12 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar6 = (uVar6 - uVar12) - uVar8 ^ uVar12 >> 5;
  uVar8 = (uVar8 - uVar6) - uVar12 ^ uVar6 >> 3;
  uVar12 = (uVar12 - uVar8) - uVar6 ^ uVar8 << 10;
  uVar6 = ((uVar6 - uVar12) - uVar8 ^ uVar12 >> 0xf) - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar12 = (-0x61c88647 - (int)fVar1) - uVar6 ^ uVar6 << 8;
  uVar8 = ((int)fVar1 - uVar6) - uVar12 ^ uVar12 >> 0xd;
  uVar6 = (uVar6 - uVar8) - uVar12 ^ uVar8 >> 0xc;
  uVar12 = (uVar12 - uVar6) - uVar8 ^ uVar6 << 0x10;
  uVar8 = (uVar8 - uVar12) - uVar6 ^ uVar12 >> 5;
  uVar6 = (uVar6 - uVar8) - uVar12 ^ uVar8 >> 3;
  uVar12 = (uVar12 - uVar6) - uVar8 ^ uVar6 << 10;
  this->KeyHash = (uVar8 - uVar12) - uVar6 ^ uVar12 >> 0xf;
  return this;
}

