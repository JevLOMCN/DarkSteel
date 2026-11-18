// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FShapedGlyphFaceData @ 142474e10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FShapedGlyphFaceData * __thiscall
FShapedGlyphFaceData::FShapedGlyphFaceData
          (FShapedGlyphFaceData *this,TWeakPtr<FFreeTypeFace,1> *param_1,uint param_2,float param_3,
          float param_4,float param_5,EFontRasterizationMode param_6,short param_7)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FFreeTypeFace *pFVar5;
  FT_FaceRec_ *pFVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  (this->FontFace).Object = param_1->Object;
  (this->FontFace).WeakReferenceCount.ReferenceController =
       (param_1->WeakReferenceCount).ReferenceController;
  (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FFreeTypeFace *)0x0;
  this->RasterizationMode = param_6;
  this->FontScale = param_4;
  this->SdfPpem = param_7;
  this->FontSize = param_3;
  this->FontSkew = param_5;
  this->GlyphFlags = param_2;
  this->BitmapRenderScale = 1.0;
  pTVar4 = (this->FontFace).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142474e91;
      LOCK();
      aVar7 = pTVar4->SharedReferenceCount;
      bVar9 = aVar2 == aVar7;
      if (bVar9) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar9);
    pFVar5 = (this->FontFace).Object;
    pTVar8 = pTVar4;
    if (pFVar5 != (FFreeTypeFace *)0x0) {
      pFVar6 = pFVar5->FTFace;
      if ((((byte)pFVar6->face_flags & 3) == 2) &&
         (iVar3 = (pFVar6->size->metrics).x_scale, 0x10000 < iVar3)) {
        this->BitmapRenderScale = (float)iVar3 * __real_37800000;
      }
      else {
        this->BitmapRenderScale = __real_3f800000;
      }
    }
  }
LAB_142474e91:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return this;
}

