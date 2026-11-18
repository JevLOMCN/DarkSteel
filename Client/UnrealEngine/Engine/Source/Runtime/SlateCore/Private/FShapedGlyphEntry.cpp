// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FShapedGlyphEntry @ 142474850

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FShapedGlyphEntry * __thiscall
FShapedGlyphEntry::FShapedGlyphEntry(FShapedGlyphEntry *this,FShapedGlyphEntry *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (this->FontFaceData).Object = (param_1->FontFaceData).Object;
  pTVar1 = (param_1->FontFaceData).SharedReferenceCount.ReferenceController;
  (this->FontFaceData).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->GlyphIndex = param_1->GlyphIndex;
  this->SourceIndex = param_1->SourceIndex;
  this->XAdvance = param_1->XAdvance;
  this->YAdvance = param_1->YAdvance;
  this->XOffset = param_1->XOffset;
  this->YOffset = param_1->YOffset;
  this->Kerning = param_1->Kerning;
  this->NumCharactersInGlyph = param_1->NumCharactersInGlyph;
  this->NumGraphemeClustersInGlyph = param_1->NumGraphemeClustersInGlyph;
  this->TextDirection = param_1->TextDirection;
  this->bIsVisible = param_1->bIsVisible;
  this->CachedAtlasData[0][0].Object = param_1->CachedAtlasData[0][0].Object;
  pTVar1 = param_1->CachedAtlasData[0][0].WeakReferenceCount.ReferenceController;
  this->CachedAtlasData[0][0].WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->CachedAtlasData[0][1].Object = param_1->CachedAtlasData[0][1].Object;
  pTVar1 = param_1->CachedAtlasData[0][1].WeakReferenceCount.ReferenceController;
  this->CachedAtlasData[0][1].WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->CachedAtlasData[1][0].Object = param_1->CachedAtlasData[1][0].Object;
  pTVar1 = param_1->CachedAtlasData[1][0].WeakReferenceCount.ReferenceController;
  this->CachedAtlasData[1][0].WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->CachedAtlasData[1][1].Object = param_1->CachedAtlasData[1][1].Object;
  pTVar1 = param_1->CachedAtlasData[1][1].WeakReferenceCount.ReferenceController;
  this->CachedAtlasData[1][1].WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->CachedSdfFontAtlasData[0].Object = param_1->CachedSdfFontAtlasData[0].Object;
  pTVar1 = param_1->CachedSdfFontAtlasData[0].WeakReferenceCount.ReferenceController;
  this->CachedSdfFontAtlasData[0].WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->CachedSdfFontAtlasData[1].Object = param_1->CachedSdfFontAtlasData[1].Object;
  pTVar1 = param_1->CachedSdfFontAtlasData[1].WeakReferenceCount.ReferenceController;
  this->CachedSdfFontAtlasData[1].WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  fVar2 = param_1->CachedSdfMetrics[0].BearingY;
  fVar3 = param_1->CachedSdfMetrics[0].Width;
  fVar4 = param_1->CachedSdfMetrics[0].Height;
  this->CachedSdfMetrics[0].BearingX = param_1->CachedSdfMetrics[0].BearingX;
  this->CachedSdfMetrics[0].BearingY = fVar2;
  this->CachedSdfMetrics[0].Width = fVar3;
  this->CachedSdfMetrics[0].Height = fVar4;
  fVar2 = param_1->CachedSdfMetrics[1].BearingY;
  fVar3 = param_1->CachedSdfMetrics[1].Width;
  fVar4 = param_1->CachedSdfMetrics[1].Height;
  this->CachedSdfMetrics[1].BearingX = param_1->CachedSdfMetrics[1].BearingX;
  this->CachedSdfMetrics[1].BearingY = fVar2;
  this->CachedSdfMetrics[1].Width = fVar3;
  this->CachedSdfMetrics[1].Height = fVar4;
  return this;
}

// ~FShapedGlyphEntry @ 142479330

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FShapedGlyphEntry::~FShapedGlyphEntry(FShapedGlyphEntry *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = this->CachedSdfFontAtlasData[1].WeakReferenceCount.ReferenceController;
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
  pTVar3 = this->CachedSdfFontAtlasData[0].WeakReferenceCount.ReferenceController;
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
  pTVar3 = this->CachedAtlasData[1][1].WeakReferenceCount.ReferenceController;
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
  pTVar3 = this->CachedAtlasData[1][0].WeakReferenceCount.ReferenceController;
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
  pTVar3 = this->CachedAtlasData[0][1].WeakReferenceCount.ReferenceController;
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
  pTVar3 = this->CachedAtlasData[0][0].WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FontFaceData).SharedReferenceCount.ReferenceController);
  return;
}

// GetBitmapRenderScale @ 14248bd70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float __thiscall FShapedGlyphEntry::GetBitmapRenderScale(FShapedGlyphEntry *this)

{
  FShapedGlyphFaceData *pFVar1;
  
  pFVar1 = (this->FontFaceData).Object;
  if (pFVar1 != (FShapedGlyphFaceData *)0x0) {
    return pFVar1->BitmapRenderScale;
  }
  return __real_3f800000;
}

// HasValidGlyph @ 142497b40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FShapedGlyphEntry::HasValidGlyph(FShapedGlyphEntry *this)

{
  FShapedGlyphFaceData *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  FFreeTypeFace *pFVar6;
  bool bVar7;
  
  pFVar1 = (this->FontFaceData).Object;
  if (pFVar1 == (FShapedGlyphFaceData *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar5 = (pFVar1->FontFace).WeakReferenceCount.ReferenceController;
    pFVar6 = (FFreeTypeFace *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar5->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142497b80;
        }
        LOCK();
        aVar3 = pTVar5->SharedReferenceCount;
        bVar7 = aVar2 == aVar3;
        if (bVar7) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar7);
      pFVar6 = (pFVar1->FontFace).Object;
    }
LAB_142497b80:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((pFVar6 != (FFreeTypeFace *)0x0) && (this->GlyphIndex != 0)) {
      uVar4 = FT_Get_Char_Index(pFVar6->FTFace,0xfffd);
      bVar7 = this->GlyphIndex != uVar4;
      goto LAB_142497bb9;
    }
  }
  bVar7 = false;
LAB_142497bb9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return bVar7;
}

