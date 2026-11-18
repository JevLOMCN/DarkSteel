// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// operator() @ 148911b70

void __thiscall
`FCanvasShapedTextItem::DrawStringInternal'::__l18::<lambda_1>::operator()
          (void *this,TVector2<float> *param_1,FLinearColor *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  TVector2<float>_u_0 local_res8;
  TVector4<float>_u_0 local_78 [5];
  
  lVar1 = *(longlong *)((longlong)this + 0x18);
  fVar8 = (float)(((double)(int)(*(short **)((longlong)this + 0x10))[1] +
                  (double)(int)*(short *)(*(longlong *)((longlong)this + 0x20) + 0x1c)) *
                  *(double *)(lVar1 + 0xd0) + (double)**(float **)((longlong)this + 8) +
                 (double)(param_1->field0_0x0)._s_0.X + **(double **)this);
  local_78[0]._12_4_ = *(float *)(lVar1 + 0x44);
  fVar6 = (float)local_78[0]._12_4_ * fVar8;
  local_res8._s_0.Y = **(float **)((longlong)this + 0x60);
  local_res8._s_0.X = **(float **)((longlong)this + 0x58);
  fVar9 = (fVar8 + **(float **)((longlong)this + 0x48)) * (float)local_78[0]._12_4_;
  fVar7 = (float)((((double)(param_1->field0_0x0)._s_0.Y + (*(double **)this)[1] +
                   (double)**(float **)((longlong)this + 0x28)) -
                  (double)(int)**(short **)((longlong)this + 0x10) * *(double *)(lVar1 + 0xd8)) +
                  (double)(int)*(short *)(*(longlong *)((longlong)this + 0x20) + 0x1e) *
                  *(double *)(lVar1 + 0xd8) +
                 (double)((**(float **)((longlong)this + 0x38) + **(float **)((longlong)this + 0x30)
                          ) * **(float **)((longlong)this + 0x40)));
  fVar8 = (float)local_78[0]._12_4_ * fVar7;
  local_78[0]._s_0.Z = 0.0;
  fVar7 = (fVar7 + **(float **)((longlong)this + 0x50)) * (float)local_78[0]._12_4_;
  local_78[0]._0_4_ = fVar6;
  local_78[0]._4_4_ = fVar8;
  iVar2 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(lVar1 + 400),(TVector4<float> *)&local_78[0]._s_0,
                     (TVector2<float> *)&local_res8._s_0,param_2,
                     (FHitProxyId)**(int **)((longlong)this + 0x68));
  local_res8._s_0.X = **(float **)((longlong)this + 0x70) + **(float **)((longlong)this + 0x58);
  local_res8._s_0.Y = **(float **)((longlong)this + 0x60);
  local_78[0]._12_4_ = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x44);
  local_78[0]._s_0.Z = 0.0;
  local_78[0]._0_4_ = fVar9;
  local_78[0]._4_4_ = fVar8;
  iVar3 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),
                     (TVector4<float> *)&local_78[0]._s_0,(TVector2<float> *)&local_res8._s_0,
                     param_2,(FHitProxyId)**(int **)((longlong)this + 0x68));
  local_res8._s_0.Y = **(float **)((longlong)this + 0x78) + **(float **)((longlong)this + 0x60);
  local_res8._s_0.X = **(float **)((longlong)this + 0x58);
  local_78[0]._12_4_ = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x44);
  local_78[0]._s_0.Z = 0.0;
  local_78[0]._0_4_ = fVar6;
  local_78[0]._4_4_ = fVar7;
  iVar4 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),
                     (TVector4<float> *)&local_78[0]._s_0,(TVector2<float> *)&local_res8._s_0,
                     param_2,(FHitProxyId)**(int **)((longlong)this + 0x68));
  local_res8._s_0.Y = **(float **)((longlong)this + 0x78) + **(float **)((longlong)this + 0x60);
  local_res8._s_0.X = **(float **)((longlong)this + 0x70) + **(float **)((longlong)this + 0x58);
  local_78[0]._12_4_ = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x44);
  local_78[0]._s_0.Z = 0.0;
  local_78[0]._0_4_ = fVar9;
  local_78[0]._4_4_ = fVar7;
  iVar5 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),
                     (TVector4<float> *)&local_78[0]._s_0,(TVector2<float> *)&local_res8._s_0,
                     param_2,(FHitProxyId)**(int **)((longlong)this + 0x68));
  FBatchedElements::AddTriangle
            (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),iVar2,iVar3,iVar5,
             (FTexture *)**(undefined8 **)((longlong)this + 0x80),
             **(ESimpleElementBlendMode **)((longlong)this + 0x88),
             (FDepthFieldGlowInfo *)(*(longlong *)((longlong)this + 0x18) + 0x50));
  FBatchedElements::AddTriangle
            (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),iVar2,iVar5,iVar4,
             (FTexture *)**(undefined8 **)((longlong)this + 0x80),
             **(ESimpleElementBlendMode **)((longlong)this + 0x88),
             (FDepthFieldGlowInfo *)(*(longlong *)((longlong)this + 0x18) + 0x50));
  return;
}

// DrawStringInternal @ 148935380

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FCanvasShapedTextItem::DrawStringInternal
          (FCanvasShapedTextItem *this,FCanvas *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,TArrayView<FCanvasTextItemBase::FTextEffect,int> *param_4)

{
  FTextEffect *pFVar1;
  float fVar2;
  double dVar3;
  FSlateFontServices *this_00;
  FSlateFontCache *this_01;
  HHitProxy *pHVar4;
  FShapedGlyphSequence *pFVar5;
  code *pcVar6;
  float fVar7;
  uchar uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  TSharedRef<FSlateFontCache,1> *pTVar12;
  ISlateFontTexture *pIVar13;
  FLinearColor *pFVar14;
  FBatchedElements *pFVar15;
  ulonglong uVar16;
  FTextEffect *pFVar17;
  FShapedGlyphEntry *pFVar18;
  TReferenceControllerBase<1> *pTVar19;
  FShapedGlyphEntry *this_02;
  byte bVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined1 local_res8 [8];
  FCanvas *local_res10;
  TVector2<double> *local_res18;
  FLinearColor *local_res20;
  ESimpleElementBlendMode local_1a8;
  float local_1a4;
  FTexture *local_1a0;
  float local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  int local_178;
  float local_174;
  float local_170;
  uint local_16c;
  FShapedGlyphFontAtlasData local_168;
  FShapedGlyphEntry *local_158;
  FShapedGlyphSequence *local_150;
  FLinearColor_u_0 local_148;
  TVector2<double> *local_138;
  float *local_130;
  FShapedGlyphFontAtlasData *local_128;
  FCanvasShapedTextItem *local_120;
  FShapedGlyphEntry *local_118;
  undefined4 *local_110;
  float *local_108;
  float *local_100;
  float *local_f8;
  float *local_f0;
  float *local_e8;
  float *local_e0;
  float *local_d8;
  int *local_d0;
  float *local_c8;
  float *local_c0;
  FTexture **local_b8;
  ESimpleElementBlendMode *local_b0;
  TSharedRef<FSlateFontCache,1> local_a8 [6];
  
  *(TVector2<double>_u_0 *)&this->_padding_ =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((FEngineFontServices::Instance == (FEngineFontServices *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\EngineFontServices.cpp"
                         ,0x31,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = (FEngineFontServices::Instance->SlateFontServices).Object;
  if (this_00 == (FSlateFontServices *)0x0) {
    pTVar19 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar12 = FSlateFontServices::GetFontCache(this_00,local_a8);
    pTVar19 = (pTVar12->SharedReferenceCount).ReferenceController;
    this_01 = pTVar12->Object;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8[0].SharedReferenceCount.ReferenceController);
    if (this_01 != (FSlateFontCache *)0x0) {
      pHVar4 = (param_1->CurrentHitProxy).Reference;
      if (pHVar4 == (HHitProxy *)0x0) {
        local_178 = -1;
      }
      else {
        local_178 = (pHVar4->Id).Index;
      }
      local_148._0_8_ = *(undefined8 *)&param_3->field0_0x0;
      local_148._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      local_1a8 = *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4);
      bVar20 = 0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      local_1a0 = (FTexture *)0x0;
      fVar2 = *(float *)&this->_padding_;
      local_194 = 0;
      dVar3 = (double)this->_padding_;
      if (((this->ShapedGlyphSequence).Object == (FShapedGlyphSequence *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->ShapedGlyphSequence).Object;
      local_198 = (float)((double)pFVar5->MaxTextHeight * (double)this->_padding_);
      if ((pFVar5 == (FShapedGlyphSequence *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->ShapedGlyphSequence).Object;
      local_1a4 = 0.0;
      local_190 = (float)((double)(int)pFVar5->TextBaseline * (double)this->_padding_);
      if ((pFVar5 == (FShapedGlyphSequence *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar7 = __real_3f800000;
      local_150 = (this->ShapedGlyphSequence).Object;
      local_16c = (local_150->GlyphsToRender).ArrayNum;
      uVar16 = (ulonglong)(int)local_16c;
      this_02 = (FShapedGlyphEntry *)(local_150->GlyphsToRender).AllocatorInstance.Data;
      pFVar18 = this_02 + uVar16;
      local_158 = pFVar18;
      while( true ) {
        if ((local_150->GlyphsToRender).ArrayNum != (int)uVar16) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FShapedGlyphEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (this_02 == pFVar18) break;
        if ((double)this->_padding_ == 0.0) {
          this->_padding_ = (longlong)(double)local_198;
        }
        if ((this_02->bIsVisible != false) &&
           (FSlateFontCache::GetShapedGlyphFontAtlasData
                      (this_01,&local_168,this_02,&FFontOutlineSettings::NoOutline),
           uVar8 = local_168.TextureIndex, local_168.Valid != false)) {
          if ((local_1a0 == (FTexture *)0x0) || (local_168.TextureIndex != bVar20)) {
            pIVar13 = FSlateFontCache::GetFontTexture(this_01,(uint)local_168.TextureIndex);
            if ((pIVar13 == (ISlateFontTexture *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("SlateFontTexture",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                                   ,0x5d2,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_1a0 = (FTexture *)(**(code **)((longlong)*pIVar13 + 0x10))(pIVar13);
            if ((local_1a0 == (FTexture *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FontTexture",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                                   ,0x5d5,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar10 = (**(code **)((longlong)*pIVar13 + 0x18))(pIVar13);
            local_1a8 = SE_BLEND_Translucent;
            if (iVar10 == 1) {
              pFVar14 = &FLinearColor::White;
            }
            else {
              local_1a8 = *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4);
              pFVar14 = local_res20;
            }
            local_148._0_8_ = *(undefined8 *)&pFVar14->field0_0x0;
            local_148._8_8_ = *(undefined8 *)((longlong)&pFVar14->field0_0x0 + 8);
            pFVar15 = FCanvas::GetBatchedElements
                                (param_1,ET_Triangle,(FBatchedElementParameters *)0x0,local_1a0,
                                 local_1a8,(FDepthFieldGlowInfo *)&this->_padding_,true);
            this->_padding_ = (longlong)pFVar15;
            if ((pFVar15 == (FBatchedElements *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("BatchedElements",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                                   ,0x5dd,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (((this->ShapedGlyphSequence).Object == (FShapedGlyphSequence *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar10 = (((this->ShapedGlyphSequence).Object)->GlyphsToRender).ArrayNum;
            FBatchedElements::ReserveVertices((FBatchedElements *)this->_padding_,iVar10 * 4);
            FBatchedElements::ReserveTriangles
                      ((FBatchedElements *)this->_padding_,iVar10 * 2,local_1a0,local_1a8);
            uVar11 = (**(code **)(local_1a0->_padding_ + 0x30))();
            fVar23 = fVar7 / (float)uVar11;
            uVar11 = (**(code **)(local_1a0->_padding_ + 0x38))();
            fVar24 = fVar7 / (float)uVar11;
            bVar20 = uVar8;
          }
          fVar21 = FShapedGlyphEntry::GetBitmapRenderScale(this_02);
          local_18c = fVar7 / fVar21;
          local_180 = (float)local_168.StartU * fVar23;
          local_17c = (float)local_168.StartV * fVar24;
          local_188 = (float)((double)local_168.USize * (double)this->_padding_ * (double)fVar21);
          local_184 = (float)((double)local_168.VSize * (double)this->_padding_ * (double)fVar21);
          local_130 = &local_1a4;
          local_128 = &local_168;
          local_110 = &local_194;
          local_108 = &local_190;
          local_100 = &local_198;
          local_f8 = &local_18c;
          local_f0 = &local_188;
          local_e8 = &local_184;
          local_e0 = &local_180;
          local_d8 = &local_17c;
          local_d0 = &local_178;
          local_c8 = &local_174;
          local_c0 = &local_170;
          local_b8 = &local_1a0;
          local_b0 = &local_1a8;
          pFVar17 = param_4->DataPtr;
          pFVar1 = pFVar17 + param_4->ArrayNum;
          local_174 = (float)local_168.USize * fVar23;
          local_170 = (float)local_168.VSize * fVar24;
          local_120 = this;
          local_118 = this_02;
          local_138 = local_res18;
          for (; pFVar17 != pFVar1; pFVar17 = pFVar17 + 1) {
            `FCanvasShapedTextItem::DrawStringInternal'::__l18::<lambda_1>::operator()
                      (&local_138,&pFVar17->Offset,&pFVar17->Color);
          }
          `FCanvasShapedTextItem::DrawStringInternal'::__l18::<lambda_1>::operator()
                    (&local_138,&UE::Math::TVector2<float>::ZeroVector,
                     (FLinearColor *)&local_148._s_0);
          pFVar18 = local_158;
          param_1 = local_res10;
        }
        local_1a4 = (float)((double)(int)this_02->XAdvance * (double)this->_padding_ +
                           (double)local_1a4) + (float)((double)fVar2 * dVar3);
        dVar22 = (double)local_1a4;
        if ((double)this->_padding_ <= dVar22 && dVar22 != (double)this->_padding_) {
          this->_padding_ = (longlong)dVar22;
        }
        this_02 = this_02 + 1;
        uVar16 = (ulonglong)local_16c;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  return;
}

// GetTextBlendMode @ 14895e590

ESimpleElementBlendMode __thiscall
FCanvasShapedTextItem::GetTextBlendMode(FCanvasShapedTextItem *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ESimpleElementBlendMode EVar4;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  if ((iVar1 != 2) && (1 < iVar1 - 0xcU)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendModeToUse == SE_BLEND_Translucent || BlendModeToUse == SE_BLEND_TranslucentAlphaOnly || BlendModeToUse == SE_BLEND_TranslucentAlphaOnlyWriteAlpha"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return SE_BLEND_TranslucentAlphaOnly;
}

// GetTextSize @ 14895e6d0

TVector2<double> * __thiscall
FCanvasShapedTextItem::GetTextSize
          (FCanvasShapedTextItem *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  ushort uVar1;
  FShapedGlyphSequence *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TVector2<double> *pTVar6;
  
  if ((this->ShapedGlyphSequence).Object == (FShapedGlyphSequence *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector2<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = (this->ShapedGlyphSequence).Object;
  uVar1 = pFVar2->MaxTextHeight;
  if (pFVar2 == (FShapedGlyphSequence *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector2<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = FShapedGlyphSequence::GetMeasuredWidth((this->ShapedGlyphSequence).Object);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)iVar5;
  return __return_storage_ptr__;
}

// HasValidText @ 148960cd0

bool __thiscall FCanvasShapedTextItem::HasValidText(FCanvasShapedTextItem *this)

{
  FShapedGlyphSequence *pFVar1;
  
  pFVar1 = (this->ShapedGlyphSequence).Object;
  if ((pFVar1 != (FShapedGlyphSequence *)0x0) && ((pFVar1->GlyphsToRender).ArrayNum != 0)) {
    return true;
  }
  return false;
}

