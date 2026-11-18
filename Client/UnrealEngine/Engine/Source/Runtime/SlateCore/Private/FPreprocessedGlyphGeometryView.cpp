// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FPreprocessedGlyphGeometryView @ 142474120

FPreprocessedGlyphGeometryView * __thiscall
UE::Slate::FPreprocessedGlyphGeometryView::FPreprocessedGlyphGeometryView
          (FPreprocessedGlyphGeometryView *this,uchar param_1,int param_2,uchar *param_3,
          short *param_4,int param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  FPreprocessedGlyphGeometryView *pFVar3;
  byte bVar4;
  
  this->CoordinateDataPtr = param_4;
  this->ContourDataLength = param_5;
  this->Flags = param_1;
  this->CoordinateDataLength = param_6;
  this->ContourCount = param_2;
  this->ContourDataPtr = param_3;
  bVar4 = param_1 & 7;
  if (((bVar4 == 0) || ((bVar4 & bVar4 - 1) != 0)) && (bVar4 != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FilteredValue == 0 || bHasSingleBit",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\PreprocessedFontGeometry.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPreprocessedGlyphGeometryView *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// HasAllContoursReversedWindings @ 142497430

bool __thiscall
UE::Slate::FPreprocessedGlyphGeometryView::HasAllContoursReversedWindings
          (FPreprocessedGlyphGeometryView *this)

{
  return (bool)(this->Flags & 1);
}

// UpdateGeometry @ 1424ac840

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Slate::FPreprocessedGlyphGeometryView::UpdateGeometry
          (FPreprocessedGlyphGeometryView *this,Shape *param_1)

{
  EdgeHolder **ppEVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  EdgeHolder *pEVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  byte bVar13;
  EdgeSegment *pEVar14;
  EdgeHolder EVar15;
  vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
  *this_00;
  vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
  *pvVar16;
  EdgeColor EVar17;
  short *psVar18;
  EdgeHolder *pEVar19;
  EdgeSegment *pEVar20;
  byte *pbVar21;
  undefined2 uVar22;
  int local_res18;
  EdgeHolder local_res20;
  EdgeHolder local_98;
  EdgeHolder local_90;
  longlong local_88;
  short *local_80;
  short *local_78;
  short *local_70;
  byte *local_68;
  EdgeSegment local_60 [2];
  
  if ((this->Flags & 4) == 0) {
    return false;
  }
  if (((this->Flags & 3) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!(Flags&(FPreprocessedGlyphGeometry::FLAG_REVERSE_WINDINGS|FPreprocessedGlyphGeometry::FLAG_CONTOUR_WINDINGS))"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\PreprocessedFontGeometry.cpp"
                          ,0x49,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  param_1->inverseYAxis = (bool)(this->Flags >> 4 & 1);
  pvVar16 = &((param_1->contours)._Mypair._Myval2._Mylast)->edges;
  this_00 = &((param_1->contours)._Mypair._Myval2._Myfirst)->edges;
  if (this_00 != pvVar16) {
    do {
      std::
      vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>::
      _Tidy(this_00);
      this_00 = this_00 + 1;
    } while (this_00 != pvVar16);
    (param_1->contours)._Mypair._Myval2._Mylast = (param_1->contours)._Mypair._Myval2._Myfirst;
  }
  std::vector<SlateMsdfgen::msdfgen::Contour,std::allocator<SlateMsdfgen::msdfgen::Contour>_>::
  resize(&param_1->contours,(longlong)this->ContourCount);
  pbVar21 = this->ContourDataPtr;
  psVar18 = this->CoordinateDataPtr;
  local_68 = pbVar21 + this->ContourDataLength;
  local_res18 = 0;
  local_70 = psVar18 + this->CoordinateDataLength;
  if (0 < this->ContourCount) {
    local_88 = 0;
    do {
      pEVar20 = local_60;
      pvVar16 = (vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
                 *)((longlong)
                    &(((param_1->contours)._Mypair._Myval2._Myfirst)->edges)._Mypair._Myval2 +
                   local_88);
      pEVar9 = (pvVar16->_Mypair)._Myval2._Mylast;
      pEVar19 = (pvVar16->_Mypair)._Myval2._Myfirst;
      local_80 = psVar18;
      local_78 = psVar18;
      if (pEVar19 != pEVar9) {
        do {
          pEVar14 = pEVar19->edgeSegment;
          if (pEVar14 != (EdgeSegment *)0x0) {
            (**(code **)pEVar14->_padding_)(pEVar14,1);
          }
          pEVar19 = pEVar19 + 1;
        } while (pEVar19 != pEVar9);
        (pvVar16->_Mypair)._Myval2._Mylast = (pvVar16->_Mypair)._Myval2._Myfirst;
      }
      do {
        bVar13 = *pbVar21 & 3;
        EVar17 = *pbVar21 >> 4 & WHITE;
        if (bVar13 == 1) {
          pEVar14 = ::operator_new(0x30);
          if (pEVar14 == (EdgeSegment *)0x0) {
            pEVar14 = (EdgeSegment *)0x0;
          }
          else {
            sVar2 = *psVar18;
            sVar3 = psVar18[1];
            pEVar20->_padding_ = (longlong)(double)(int)sVar2;
            *(double *)&pEVar20->color = (double)(int)sVar3;
            pEVar14->color = EVar17;
            pEVar14->_padding_ = (longlong)&___7LinearSegment_msdfgen_SlateMsdfgen__6B_;
            pEVar14[1]._padding_ = (longlong)(double)(int)sVar2;
            *(double *)&pEVar14[1].color = (double)(int)sVar3;
            pEVar14[2]._padding_ = 0;
            *(undefined8 *)&pEVar14[2].color = 0;
          }
          pEVar9 = (pvVar16->_Mypair)._Myval2._Mylast;
          local_90.edgeSegment = pEVar14;
          if (pEVar9 == (pvVar16->_Mypair)._Myval2._Myend) {
            std::
            vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
            ::_Emplace_reallocate<SlateMsdfgen::msdfgen::EdgeHolder>(pvVar16,pEVar9,&local_90);
            EVar15.edgeSegment = local_90.edgeSegment;
          }
          else {
            pEVar9->edgeSegment = pEVar14;
            ppEVar1 = &(pvVar16->_Mypair)._Myval2._Mylast;
            *ppEVar1 = *ppEVar1 + 1;
            EVar15.edgeSegment = (EdgeSegment *)0x0;
          }
          if (EVar15.edgeSegment != (EdgeSegment *)0x0) {
            (**(code **)(EVar15.edgeSegment)->_padding_)(EVar15.edgeSegment,1);
          }
          pEVar20 = pEVar14 + 2;
          psVar18 = psVar18 + 2;
        }
        else if (bVar13 == 2) {
          pEVar14 = ::operator_new(0x40);
          if (pEVar14 == (EdgeSegment *)0x0) {
            pEVar14 = (EdgeSegment *)0x0;
          }
          else {
            sVar2 = psVar18[2];
            sVar3 = psVar18[3];
            sVar4 = *psVar18;
            sVar5 = psVar18[1];
            pEVar20->_padding_ = (longlong)(double)(int)sVar4;
            *(double *)&pEVar20->color = (double)(int)sVar5;
            pEVar14->color = EVar17;
            pEVar14->_padding_ = (longlong)&___7QuadraticSegment_msdfgen_SlateMsdfgen__6B_;
            pEVar14[1]._padding_ = (longlong)(double)(int)sVar4;
            *(double *)&pEVar14[1].color = (double)(int)sVar5;
            pEVar14[2]._padding_ = (longlong)(double)(int)sVar2;
            *(double *)&pEVar14[2].color = (double)(int)sVar3;
            pEVar14[3]._padding_ = 0;
            *(undefined8 *)&pEVar14[3].color = 0;
          }
          pEVar9 = (pvVar16->_Mypair)._Myval2._Mylast;
          local_98.edgeSegment = pEVar14;
          if (pEVar9 == (pvVar16->_Mypair)._Myval2._Myend) {
            std::
            vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
            ::_Emplace_reallocate<SlateMsdfgen::msdfgen::EdgeHolder>(pvVar16,pEVar9,&local_98);
            EVar15.edgeSegment = local_98.edgeSegment;
          }
          else {
            pEVar9->edgeSegment = pEVar14;
            ppEVar1 = &(pvVar16->_Mypair)._Myval2._Mylast;
            *ppEVar1 = *ppEVar1 + 1;
            EVar15.edgeSegment = (EdgeSegment *)0x0;
          }
          if (EVar15.edgeSegment != (EdgeSegment *)0x0) {
            (**(code **)(EVar15.edgeSegment)->_padding_)(EVar15.edgeSegment,1);
          }
          pEVar20 = pEVar14 + 3;
          psVar18 = psVar18 + 4;
        }
        else if (bVar13 == 3) {
          pEVar14 = ::operator_new(0x50);
          if (pEVar14 == (EdgeSegment *)0x0) {
            pEVar14 = (EdgeSegment *)0x0;
          }
          else {
            sVar2 = psVar18[4];
            sVar3 = psVar18[5];
            sVar4 = psVar18[2];
            sVar5 = psVar18[3];
            sVar6 = *psVar18;
            sVar7 = psVar18[1];
            pEVar20->_padding_ = (longlong)(double)(int)sVar6;
            *(double *)&pEVar20->color = (double)(int)sVar7;
            pEVar14->color = EVar17;
            pEVar14->_padding_ = (longlong)&___7CubicSegment_msdfgen_SlateMsdfgen__6B_;
            pEVar14[1]._padding_ = (longlong)(double)(int)sVar6;
            *(double *)&pEVar14[1].color = (double)(int)sVar7;
            pEVar14[2]._padding_ = (longlong)(double)(int)sVar4;
            *(double *)&pEVar14[2].color = (double)(int)sVar5;
            pEVar14[3]._padding_ = (longlong)(double)(int)sVar2;
            *(double *)&pEVar14[3].color = (double)(int)sVar3;
            pEVar14[4]._padding_ = 0;
            *(undefined8 *)&pEVar14[4].color = 0;
          }
          pEVar9 = (pvVar16->_Mypair)._Myval2._Mylast;
          local_res20.edgeSegment = pEVar14;
          if (pEVar9 == (pvVar16->_Mypair)._Myval2._Myend) {
            std::
            vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
            ::_Emplace_reallocate<SlateMsdfgen::msdfgen::EdgeHolder>(pvVar16,pEVar9,&local_res20);
            EVar15.edgeSegment = local_res20.edgeSegment;
          }
          else {
            pEVar9->edgeSegment = pEVar14;
            ppEVar1 = &(pvVar16->_Mypair)._Myval2._Mylast;
            *ppEVar1 = *ppEVar1 + 1;
            EVar15.edgeSegment = (EdgeSegment *)0x0;
          }
          if (EVar15.edgeSegment != (EdgeSegment *)0x0) {
            (**(code **)(EVar15.edgeSegment)->_padding_)(EVar15.edgeSegment,1);
          }
          pEVar20 = pEVar14 + 4;
          psVar18 = psVar18 + 6;
        }
        bVar13 = *pbVar21;
        pbVar21 = pbVar21 + 1;
      } while ((bVar13 >> 3 & 1) == 0);
      if (local_80 < psVar18) {
        uVar8 = *(undefined4 *)local_78;
        uVar22 = (undefined2)((uint)uVar8 >> 0x10);
        pEVar20->_padding_ = (longlong)(double)(int)(short)uVar8;
        *(double *)&pEVar20->color =
             (double)(int)((longlong)CONCAT26(uVar22,CONCAT24(uVar22,uVar8)) >> 0x30);
      }
      local_res18 = local_res18 + 1;
      local_88 = local_88 + 0x18;
    } while (local_res18 < this->ContourCount);
  }
  if ((pbVar21 == local_68) && (psVar18 == local_70)) {
    return true;
  }
  return false;
}

// UpdateWindings @ 1424ad310

bool __thiscall
UE::Slate::FPreprocessedGlyphGeometryView::UpdateWindings
          (FPreprocessedGlyphGeometryView *this,Shape *param_1)

{
  byte bVar1;
  Contour *pCVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  Contour *this_00;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  
  bVar1 = this->Flags;
  if ((bVar1 & 1) != 0) {
    if (((bVar1 & 6) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(Flags&(FPreprocessedGlyphGeometry::FLAG_CONTOUR_WINDINGS|FPreprocessedGlyphGeometry::FLAG_FULL_GEOMETRY))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\PreprocessedFontGeometry.cpp"
                           ,0x9d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pCVar2 = (param_1->contours)._Mypair._Myval2._Mylast;
    for (this_00 = (param_1->contours)._Mypair._Myval2._Myfirst; this_00 != pCVar2;
        this_00 = this_00 + 1) {
      SlateMsdfgen::msdfgen::Contour::reverse(this_00);
    }
    return true;
  }
  if (((bVar1 & 2) == 0) ||
     (((longlong)(param_1->contours)._Mypair._Myval2._Mylast -
      (longlong)(param_1->contours)._Mypair._Myval2._Myfirst) / 0x18 != (longlong)this->ContourCount
     )) {
    return false;
  }
  if (((bVar1 & 5) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(Flags&(FPreprocessedGlyphGeometry::FLAG_REVERSE_WINDINGS|FPreprocessedGlyphGeometry::FLAG_FULL_GEOMETRY))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\PreprocessedFontGeometry.cpp"
                         ,0xa8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = this->ContourCount + 7;
  if ((this->ContourDataLength != (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContourDataLength == (ContourCount+7)/8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\PreprocessedFontGeometry.cpp"
                         ,0xa9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pbVar8 = this->ContourDataPtr;
  iVar6 = 0;
  pbVar10 = pbVar8 + this->ContourDataLength;
  if (0 < this->ContourCount) {
    do {
      if (pbVar10 <= pbVar8) break;
      iVar9 = 0;
      uVar7 = 1;
      do {
        if (this->ContourCount <= iVar6) break;
        if ((*pbVar8 & (byte)uVar7) != 0) {
          SlateMsdfgen::msdfgen::Contour::reverse
                    ((param_1->contours)._Mypair._Myval2._Myfirst + iVar6);
        }
        iVar9 = iVar9 + 1;
        uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
        iVar6 = iVar6 + 1;
      } while (iVar9 < 8);
      pbVar8 = pbVar8 + 1;
    } while (iVar6 < this->ContourCount);
  }
  if ((pbVar8 != pbVar10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurContourBits == ContourBitsEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\PreprocessedFontGeometry.cpp"
                         ,0xb8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return iVar6 == this->ContourCount;
}

