// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FFreeTypeShapeBuilder @ 1424732a0

FFreeTypeShapeBuilder * __thiscall
SdfUtils::FFreeTypeShapeBuilder::FFreeTypeShapeBuilder(FFreeTypeShapeBuilder *this)

{
  return this;
}

// Build @ 142480ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
SdfUtils::FFreeTypeShapeBuilder::Build
          (FFreeTypeShapeBuilder *this,TSharedPtr<FFreeTypeFace,1> *param_1,uint param_2,
          float param_3,float param_4,int param_5,Shape *param_6,FGlyphSdfMapping *param_7)

{
  ushort uVar1;
  FT_FaceRec_ *pFVar2;
  FFontFaceData *pFVar3;
  FScriptContainerElement *pFVar4;
  FT_GlyphSlotRec_ *pFVar5;
  EdgeSegment *pEVar6;
  code *pcVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  FPreprocessedGlyphGeometryView *pFVar21;
  FFreeTypeFace *pFVar22;
  FPreprocessedFontGeometry *this_00;
  EdgeSegment *pEVar23;
  uint uVar24;
  EdgeHolder *pEVar25;
  EdgeHolder *pEVar26;
  Contour *pCVar27;
  Contour *pCVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  uint uVar32;
  double dVar33;
  undefined4 uVar34;
  uint uVar35;
  undefined4 uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  undefined1 auStackY_1d8 [32];
  FPreprocessedGlyphGeometryView local_190;
  undefined1 local_170 [8];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  FPreprocessedGlyphGeometryView local_128;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((param_1->Object == (FFreeTypeFace *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    uVar18 = (*pcVar7)();
    return (bool)uVar18;
  }
  pFVar2 = param_1->Object->FTFace;
  if (((pFVar2 == (FT_FaceRec_ *)0x0) || ((pFVar2->face_flags & 0x2001U) != 1)) ||
     (((pFVar2->face_flags & 2U) != 0 && (pFVar2->num_glyphs < 1)))) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  local_190._0_8_ = ((ulonglong)local_190._0_8_ >> 8 & 0xffffff) << 8;
  local_190.ContourDataLength = 0;
  local_190.CoordinateDataLength = 0;
  local_190.ContourDataPtr = (uchar *)0x0;
  local_190.CoordinateDataPtr = (short *)0x0;
  if ((param_1->Object == (FFreeTypeFace *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    uVar18 = (*pcVar7)();
    return (bool)uVar18;
  }
  pFVar22 = param_1->Object;
  pFVar3 = (pFVar22->Memory).Object;
  if (pFVar3 != (FFontFaceData *)0x0) {
    iVar19 = (pFVar3->PreprocessedFontGeometries).ArrayNum;
    uVar24 = pFVar22->FTFace->face_index & 0x7fff;
    if ((iVar19 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar7 = (code *)swi(3);
      uVar18 = (*pcVar7)();
      return (bool)uVar18;
    }
    if ((int)uVar24 < iVar19) {
      if (((pFVar22->Memory).Object == (FFontFaceData *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      pFVar3 = (pFVar22->Memory).Object;
      iVar19 = (pFVar3->PreprocessedFontGeometries).ArrayNum;
      pFVar4 = (pFVar3->PreprocessedFontGeometries).AllocatorInstance.Data;
      if ((iVar19 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      if ((iVar19 <= (int)uVar24) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      this_00 = (FPreprocessedFontGeometry *)(pFVar4 + (ulonglong)uVar24 * 0x78);
      if (this_00 != (FPreprocessedFontGeometry *)0x0) {
        pFVar21 = UE::Slate::FPreprocessedFontGeometry::ViewGlyph(this_00,&local_128,param_2);
        local_190.Flags = pFVar21->Flags;
        local_190._1_3_ = *(undefined3 *)&pFVar21->field_0x1;
        local_190.ContourCount = pFVar21->ContourCount;
        local_190.ContourDataPtr = pFVar21->ContourDataPtr;
        local_190.CoordinateDataPtr = pFVar21->CoordinateDataPtr;
        local_190.ContourDataLength = pFVar21->ContourDataLength;
        local_190.CoordinateDataLength = pFVar21->CoordinateDataLength;
      }
    }
  }
  bVar17 = UE::Slate::FPreprocessedGlyphGeometryView::UpdateGeometry(&local_190,param_6);
  dVar33 = __real_3ff0000000000000;
  uVar34 = SUB84(__real_3ff0000000000000,0);
  uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (!bVar17) {
    if ((param_1->Object == (FFreeTypeFace *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar7 = (code *)swi(3);
      uVar18 = (*pcVar7)();
      return (bool)uVar18;
    }
    iVar19 = FT_Load_Glyph(param_1->Object->FTFace,param_2,0x880b);
    if (iVar19 != 0) goto LAB_1424813e5;
    pFVar22 = TSharedPtr<FFreeTypeFace,1>::operator->(param_1);
    pFVar5 = pFVar22->FTFace->glyph;
    if ((((pFVar5 == (FT_GlyphSlotRec_ *)0x0) || (pFVar5->format != FT_GLYPH_FORMAT_OUTLINE)) ||
        (pFVar22 = TSharedPtr<FFreeTypeFace,1>::operator->(param_1),
        (pFVar22->FTFace->glyph->metrics).width < 1)) ||
       ((pFVar22 = TSharedPtr<FFreeTypeFace,1>::operator->(param_1),
        (pFVar22->FTFace->glyph->metrics).height < 1 ||
        (pFVar22 = TSharedPtr<FFreeTypeFace,1>::operator->(param_1),
        (pFVar22->FTFace->glyph->outline).n_points < 1)))) goto LAB_1424813e5;
    pFVar22 = TSharedPtr<FFreeTypeFace,1>::operator->(param_1);
    iVar19 = SlateMsdfgen::msdfgen::readFreetypeOutline
                       (param_6,&pFVar22->FTFace->glyph->outline,dVar33);
    if ((iVar19 != 0) ||
       ((param_6->contours)._Mypair._Myval2._Myfirst == (param_6->contours)._Mypair._Myval2._Mylast)
       ) goto LAB_1424813e5;
    UE::Slate::FPreprocessedGlyphGeometryView::UpdateWindings(&local_190,param_6);
  }
  dStack_f0 = _UNK_1508ffb38;
  local_f8 = ___xmm_f1c33234de7ad7e3f1c33234de7ad7e3;
  local_108 = ___xmm_71c33234de7ad7e371c33234de7ad7e3;
  param_6->inverseYAxis = param_6->inverseYAxis == false;
  pCVar28 = (param_6->contours)._Mypair._Myval2._Myfirst;
  pCVar27 = (param_6->contours)._Mypair._Myval2._Mylast;
  if (pCVar28 != pCVar27) {
    do {
      pEVar25 = (pCVar28->edges)._Mypair._Myval2._Myfirst;
      if (pEVar25 != (pCVar28->edges)._Mypair._Myval2._Mylast) {
        do {
          (**(code **)(pEVar25->edgeSegment->_padding_ + 0x60))
                    (pEVar25->edgeSegment,local_108,local_108 + 8,&local_f8);
          pEVar25 = pEVar25 + 1;
        } while (pEVar25 != (pCVar28->edges)._Mypair._Myval2._Mylast);
      }
      pCVar27 = (param_6->contours)._Mypair._Myval2._Mylast;
      pCVar28 = pCVar28 + 1;
    } while (pCVar28 != pCVar27);
  }
  dVar16 = __real_bff004189374bc6a;
  uVar15 = _UNK_15061cc8c;
  uVar14 = _UNK_15061cc88;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar24 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pCVar28 = (param_6->contours)._Mypair._Myval2._Myfirst;
  uVar38 = 0;
  uVar39 = 0;
  dVar11 = (local_108._0_8_ - (local_f8 - local_108._0_8_)) - dVar33;
  dVar33 = (local_108._8_8_ - (dStack_f0 - local_108._8_8_)) - dVar33;
  dVar9 = __real_ffefffffffffffff -
          SQRT(dVar33 * dVar33 + dVar11 * dVar11) * __real_3ff004189374bc6a;
  if (pCVar28 != pCVar27) {
    do {
      pEVar25 = (pCVar28->edges)._Mypair._Myval2._Mylast;
      pEVar26 = (pCVar28->edges)._Mypair._Myval2._Myfirst;
      if (pEVar26 != pEVar25) {
        dVar10 = SQRT(dVar33 * dVar33 + dVar11 * dVar11) * dVar16;
        pEVar23 = pEVar25[-1].edgeSegment;
        do {
          pEVar6 = pEVar26->edgeSegment;
          uVar35 = SUB84(dVar9,0) & uVar24;
          uVar37 = (uint)((ulonglong)dVar9 >> 0x20) & uVar13;
          if (dVar10 < (double)CONCAT44(uVar37,uVar35) || dVar10 == (double)CONCAT44(uVar37,uVar35))
          {
            local_168._8_4_ = SUB84(dVar33,0);
            local_168._0_8_ = dVar11;
            local_168._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
            (**(code **)(pEVar23->_padding_ + 0x38))(pEVar23,local_158,local_168,local_170);
            uVar8 = local_158._12_4_;
            uVar32 = local_158._8_4_;
            auVar29._0_8_ = (double)CONCAT44(local_158._4_4_ & uVar13,local_158._0_4_ & uVar24);
            auVar29._8_4_ = uVar32 & uVar14;
            auVar29._12_4_ = uVar8 & uVar15;
            if ((auVar29._0_8_ < (double)CONCAT44(uVar37,uVar35)) ||
               ((auVar29._0_8_ == (double)CONCAT44(uVar37,uVar35) &&
                (auVar12._4_8_ = auVar29._8_8_, auVar12._0_4_ = local_158._4_4_,
                auVar30._0_8_ = auVar12._0_8_ << 0x20, auVar30._8_4_ = uVar32,
                auVar30._12_4_ = uVar8, auVar30._8_8_ < (double)CONCAT44(uVar39,uVar38))))) {
              uVar38 = uVar32;
              uVar39 = uVar8;
              dVar9 = local_158._0_8_;
            }
          }
          pEVar26 = pEVar26 + 1;
          pEVar23 = pEVar6;
        } while (pEVar26 != (pCVar28->edges)._Mypair._Myval2._Mylast);
      }
      pCVar27 = (param_6->contours)._Mypair._Myval2._Mylast;
      pCVar28 = pCVar28 + 1;
    } while (pCVar28 != pCVar27);
    uVar34 = SUB84(__real_3ff0000000000000,0);
    uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  if (0.0 < dVar9) {
    for (pCVar28 = (param_6->contours)._Mypair._Myval2._Myfirst; pCVar28 != pCVar27;
        pCVar28 = pCVar28 + 1) {
      SlateMsdfgen::msdfgen::Contour::reverse(pCVar28);
    }
  }
  if ((param_1->Object == (FFreeTypeFace *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    uVar18 = (*pcVar7)();
    return (bool)uVar18;
  }
  uVar1 = param_1->Object->FTFace->units_per_EM;
  local_138 = local_f8;
  dStack_130 = dStack_f0;
  local_148 = local_108;
  FGlyphSdfMapping::Wrap
            (param_7,param_6,(Bounds *)local_148,uVar1,param_5,param_3,
             (double)CONCAT44(uVar36,uVar34));
  fVar31 = (float)uVar1;
  dVar33 = (double)(float)((uint)(fVar31 * param_3) ^ __xmm_80000000800000008000000080000000);
  (param_7->MsdfgenTransformation).distanceMapping.scale =
       (double)CONCAT44(uVar36,uVar34) / ((double)(fVar31 * param_4) - dVar33);
  (param_7->MsdfgenTransformation).distanceMapping.translate =
       (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(dVar33,0) ^ (uint)__xmm_80000000000000008000000000000000);
  iVar19 = *(int *)((longlong)&(param_7->SdfBounds).field0_0x0 + 8) -
           *(int *)&(param_7->SdfBounds).field0_0x0;
  if ((((0 < iVar19) &&
       (iVar20 = *(int *)((longlong)&(param_7->SdfBounds).field0_0x0 + 0xc) -
                 *(int *)((longlong)&(param_7->SdfBounds).field0_0x0 + 4), 0 < iVar20)) &&
      (iVar19 < 0x1000)) && (iVar20 < 0x1000)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_1424813e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

