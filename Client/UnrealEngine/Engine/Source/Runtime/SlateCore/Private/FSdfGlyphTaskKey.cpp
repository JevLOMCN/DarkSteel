// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSdfGlyphTaskKey @ 142474690

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSdfGlyphTaskKey * __thiscall
FSdfGlyphTaskKey::FSdfGlyphTaskKey
          (FSdfGlyphTaskKey *this,FSdfGlyphEntryKey *param_1,float param_2,float param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  (this->SdfGlyphEntryKey).FontFace.Object = (param_1->FontFace).Object;
  pTVar1 = (param_1->FontFace).WeakReferenceCount.ReferenceController;
  (this->SdfGlyphEntryKey).FontFace.WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->SdfGlyphEntryKey).GlyphIndex = param_1->GlyphIndex;
  (this->SdfGlyphEntryKey).AtlasContentType = param_1->AtlasContentType;
  (this->SdfGlyphEntryKey).Ppem = param_1->Ppem;
  (this->SdfGlyphEntryKey).SpreadCategory = param_1->SpreadCategory;
  uVar3 = param_1->KeyHash;
  (this->SdfGlyphEntryKey).KeyHash = uVar3;
  this->EmOuterSpread = param_2;
  this->EmInnerSpread = param_3;
  uVar4 = uVar3 >> 0xd ^ -uVar3;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar4 = ((uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf) - (int)param_2 ^ (uint)param_2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - (int)param_2 ^ uVar4 << 8;
  uVar2 = ((int)param_2 - uVar4) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
  uVar2 = ((uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf) - (int)param_3 ^ (uint)param_3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar2) - (int)param_3 ^ uVar2 << 8;
  uVar3 = ((int)param_3 - uVar2) - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 10;
  this->KeyHash = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xf;
  return this;
}

// operator== @ 14247a540

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSdfGlyphTaskKey::operator==(FSdfGlyphTaskKey *this,FSdfGlyphTaskKey *param_1)

{
  bool bVar1;
  
  bVar1 = TWeakPtr<FFreeTypeFace,1>::UEOpEquals<FFreeTypeFace>
                    ((TWeakPtr<FFreeTypeFace,1> *)this,(TWeakPtr<FFreeTypeFace,1> *)param_1);
  if ((((bVar1) && ((this->SdfGlyphEntryKey).GlyphIndex == (param_1->SdfGlyphEntryKey).GlyphIndex))
      && ((this->SdfGlyphEntryKey).AtlasContentType == (param_1->SdfGlyphEntryKey).AtlasContentType)
      ) && ((((this->SdfGlyphEntryKey).Ppem == (param_1->SdfGlyphEntryKey).Ppem &&
             ((this->SdfGlyphEntryKey).SpreadCategory == (param_1->SdfGlyphEntryKey).SpreadCategory)
             ) && ((param_1->EmOuterSpread == this->EmOuterSpread &&
                   (param_1->EmInnerSpread == this->EmInnerSpread)))))) {
    return true;
  }
  return false;
}

