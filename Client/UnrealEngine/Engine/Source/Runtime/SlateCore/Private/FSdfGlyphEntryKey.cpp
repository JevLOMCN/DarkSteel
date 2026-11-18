// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSdfGlyphEntryKey @ 142474360

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSdfGlyphEntryKey * __thiscall
FSdfGlyphEntryKey::FSdfGlyphEntryKey
          (FSdfGlyphEntryKey *this,TWeakPtr<FFreeTypeFace,1> *param_1,uint param_2,
          ESlateFontAtlasContentType param_3,int param_4,float param_5,float param_6)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FFreeTypeFace *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  (this->FontFace).Object = param_1->Object;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  (this->FontFace).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->GlyphIndex = param_2;
  this->AtlasContentType = param_3;
  this->Ppem = param_4;
  fVar10 = logf(param_5 * param_5);
  pFVar4 = (this->FontFace).Object;
  uVar5 = ((uint)((ulonglong)pFVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar4 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar9 = (int)ROUND(fVar10 - __real_3f000000) >> 1;
  this->SpreadCategory = uVar9;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar7 = uVar5 >> 0xd ^ -uVar5;
  uVar6 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
  uVar8 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar8) - uVar6 ^ uVar8 >> 0xc;
  uVar5 = (uVar6 - uVar7) - uVar8 ^ uVar7 << 0x10;
  uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar6 = (uVar7 - uVar8) - uVar5 ^ uVar8 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 << 10;
  uVar6 = ((uVar8 - uVar5) - uVar6 ^ uVar5 >> 0xf) - param_2 ^ param_2 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - param_2 ^ uVar6 << 8;
  uVar7 = (param_2 - uVar6) - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 10;
  uVar7 = ((uVar7 - uVar5) - uVar6 ^ uVar5 >> 0xf) - param_3 ^ param_3 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - param_3 ^ uVar7 << 8;
  uVar6 = (param_3 - uVar7) - uVar5 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 10;
  uVar7 = ((uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xf) - param_4 ^ (uint)param_4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - param_4 ^ uVar7 << 8;
  uVar6 = (param_4 - uVar7) - uVar5 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 10;
  uVar5 = ((uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xf) - uVar9 ^ uVar9 >> 0xd;
  uVar6 = (-0x61c88647 - uVar5) - uVar9 ^ uVar5 << 8;
  uVar7 = (uVar9 - uVar5) - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 10;
  this->KeyHash = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return this;
}

// GetSpreadCategory @ 142495a60

int __cdecl FSdfGlyphEntryKey::GetSpreadCategory(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = logf(param_1 * param_1);
  return (int)ROUND(fVar1 - __real_3f000000) >> 1;
}

