// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FShapedGlyphEntryKey @ 142474980

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FShapedGlyphEntryKey * __thiscall
FShapedGlyphEntryKey::FShapedGlyphEntryKey
          (FShapedGlyphEntryKey *this,FShapedGlyphFaceData *param_1,uint param_2,
          FFontOutlineSettings *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FFreeTypeFace *pFVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  (this->FontFace).Object = (param_1->FontFace).Object;
  pTVar1 = (param_1->FontFace).WeakReferenceCount.ReferenceController;
  (this->FontFace).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->OutlineMiteredCorners = param_3->bMiteredCorners;
  this->OutlineSeparateFillAlpha = param_3->bSeparateFillAlpha;
  this->GlyphIndex = param_2;
  this->KeyHash = 0;
  this->FontSkew = param_1->FontSkew;
  fVar10 = param_1->FontScale;
  if (param_1->FontScale <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = param_1->FontSize;
  if (param_1->FontSize <= 0.0) {
    fVar11 = 0.0;
  }
  iVar3 = FT_MulFix(((int)(fVar11 * __real_c2800000) * -0x60 + 0x24) / 0x48,
                    (int)(fVar10 * __real_47800000));
  pFVar2 = (this->FontFace).Object;
  uVar9 = iVar3 + 0x20 >> 6;
  uVar4 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
          -0x7a143595;
  this->FontRenderSize = uVar9;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  auVar12 = ZEXT416((uint)((float)param_3->OutlineSize * param_1->FontScale + __real_3f000000));
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar6 = this->KeyHash - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar7 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  auVar12 = roundps(auVar12,auVar12,1);
  uVar8 = (uint)auVar12._0_4_;
  uVar4 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 0x10;
  this->OutlineRenderSize = uVar8;
  uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar5 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar5 = ((uVar7 - uVar4) - uVar5 ^ uVar4 >> 0xf) - uVar9 ^ uVar9 >> 0xd;
  uVar4 = (-0x61c88647 - uVar5) - uVar9 ^ uVar5 << 8;
  uVar6 = (uVar9 - uVar5) - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 5;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 3;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 << 10;
  uVar6 = ((uVar6 - uVar4) - uVar5 ^ uVar4 >> 0xf) - uVar8 ^ uVar8 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar8 ^ uVar6 << 8;
  uVar5 = (uVar8 - uVar6) - uVar4 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
  uVar4 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf;
  iVar3 = uVar4 - this->OutlineMiteredCorners;
  uVar5 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar4;
  uVar6 = (this->OutlineMiteredCorners - uVar5) - iVar3 ^ uVar5 >> 0xd;
  uVar4 = (iVar3 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar5 >> 5;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 10;
  uVar4 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xf;
  iVar3 = uVar4 - this->OutlineSeparateFillAlpha;
  uVar6 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar4;
  uVar7 = (this->OutlineSeparateFillAlpha - uVar6) - iVar3 ^ uVar6 >> 0xd;
  uVar4 = this->GlyphIndex;
  uVar5 = (iVar3 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar7 = ((uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - uVar4 ^ uVar7 << 8;
  uVar6 = (uVar4 - uVar7) - uVar5 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar4 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar5 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 5;
  uVar6 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
  fVar10 = this->FontSkew;
  uVar5 = ((uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf) - (int)fVar10 ^ (uint)fVar10 >> 0xd;
  uVar6 = (-0x61c88647 - uVar5) - (int)fVar10 ^ uVar5 << 8;
  uVar4 = ((int)fVar10 - uVar5) - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 << 10;
  this->KeyHash = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  return this;
}

// operator== @ 14247a5b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FShapedGlyphEntryKey::operator==(FShapedGlyphEntryKey *this,FShapedGlyphEntryKey *param_1)

{
  bool bVar1;
  
  bVar1 = TWeakPtr<FFreeTypeFace,1>::UEOpEquals<FFreeTypeFace>(&this->FontFace,&param_1->FontFace);
  if ((((bVar1) && (this->FontRenderSize == param_1->FontRenderSize)) &&
      (this->OutlineRenderSize == param_1->OutlineRenderSize)) &&
     (((this->OutlineMiteredCorners == param_1->OutlineMiteredCorners &&
       (this->OutlineSeparateFillAlpha == param_1->OutlineSeparateFillAlpha)) &&
      ((this->GlyphIndex == param_1->GlyphIndex && (param_1->FontSkew == this->FontSkew)))))) {
    return true;
  }
  return false;
}

