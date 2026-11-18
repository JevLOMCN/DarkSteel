// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 12

// FSlateTextShaper @ 142476d30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateTextShaper * __thiscall
FSlateTextShaper::FSlateTextShaper
          (FSlateTextShaper *this,FFreeTypeCacheDirectory *param_1,FCompositeFontCache *param_2,
          FSlateFontRenderer *param_3,FSlateFontCache *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  TSharedRef<IBreakIterator,1> *pTVar3;
  FSlateTextShaper *pFVar4;
  hb_font_funcs_t *phVar5;
  bool bVar6;
  TSharedRef<IBreakIterator,1> local_28;
  TSharedRef<IBreakIterator,1> local_18;
  
  this->FontCache = param_4;
  this->FTCacheDirectory = param_1;
  this->CompositeFontCache = param_2;
  this->FontRenderer = param_3;
  TextBiDi::CreateTextBiDi();
  bVar6 = GSlateUseSharedBreakIterator == false;
  if (bVar6) {
    pTVar3 = FBreakIterator::CreateCharacterBoundaryIterator(&local_28);
  }
  else {
    pTVar3 = FBreakIterator::GetCharacterBoundaryIterator(&local_18);
  }
  (this->GraphemeBreakIterator).Object = pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (this->GraphemeBreakIterator).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  (this->HarfBuzzFontCache).FTCacheDirectory = this->FTCacheDirectory;
  *(undefined8 *)&(this->HarfBuzzFontCache).HarfBuzzFontCacheMap = 0;
  *(undefined8 *)&(this->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x8 = 0;
  *(undefined8 *)&(this->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x20 = 0;
  *(undefined4 *)&(this->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x28 = 0;
  *(undefined4 *)&(this->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x34 = 0;
  *(undefined8 *)&(this->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x40 = 0;
  *(undefined4 *)&(this->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x48 = 0;
  if (((this->HarfBuzzFontCache).FTCacheDirectory == (FFreeTypeCacheDirectory *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FTCacheDirectory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheHarfBuzz.cpp"
                         ,0x1b5,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSlateTextShaper *)(*pcVar2)();
    return pFVar4;
  }
  phVar5 = (hb_font_funcs_t *)hb_font_funcs_create();
  (this->HarfBuzzFontCache).CustomHarfBuzzFuncs = phVar5;
  hb_font_funcs_set_font_h_extents_func
            (phVar5,HarfBuzzFontFunctions::Internal::get_font_h_extents,0,0);
  hb_font_funcs_set_nominal_glyph_func
            ((this->HarfBuzzFontCache).CustomHarfBuzzFuncs,
             HarfBuzzFontFunctions::Internal::get_nominal_glyph,0,0);
  hb_font_funcs_set_nominal_glyphs_func
            ((this->HarfBuzzFontCache).CustomHarfBuzzFuncs,
             HarfBuzzFontFunctions::Internal::get_nominal_glyphs,0,0);
  hb_font_funcs_set_glyph_h_advance_func
            ((this->HarfBuzzFontCache).CustomHarfBuzzFuncs,
             HarfBuzzFontFunctions::Internal::get_glyph_h_advance,0,0);
  hb_font_funcs_set_glyph_h_advances_func
            ((this->HarfBuzzFontCache).CustomHarfBuzzFuncs,
             HarfBuzzFontFunctions::Internal::get_glyph_h_advances,0,0);
  hb_font_funcs_set_glyph_v_advance_func
            ((this->HarfBuzzFontCache).CustomHarfBuzzFuncs,
             HarfBuzzFontFunctions::Internal::get_glyph_v_advance,0,0);
  hb_font_funcs_set_glyph_v_advances_func
            ((this->HarfBuzzFontCache).CustomHarfBuzzFuncs,
             HarfBuzzFontFunctions::Internal::get_glyph_v_advances,0,0);
  hb_font_funcs_set_glyph_v_origin_func
            ((this->HarfBuzzFontCache).CustomHarfBuzzFuncs,
             HarfBuzzFontFunctions::Internal::get_glyph_v_origin,0,0);
  hb_font_funcs_set_glyph_h_kerning_func
            ((this->HarfBuzzFontCache).CustomHarfBuzzFuncs,
             HarfBuzzFontFunctions::Internal::get_glyph_h_kerning,0,0);
  hb_font_funcs_set_glyph_extents_func
            ((this->HarfBuzzFontCache).CustomHarfBuzzFuncs,
             HarfBuzzFontFunctions::Internal::get_glyph_extents,0,0);
  hb_font_funcs_set_glyph_contour_point_func
            ((this->HarfBuzzFontCache).CustomHarfBuzzFuncs,
             HarfBuzzFontFunctions::Internal::get_glyph_contour_point,0,0);
  hb_font_funcs_make_immutable((this->HarfBuzzFontCache).CustomHarfBuzzFuncs);
  if ((this->FTCacheDirectory == (FFreeTypeCacheDirectory *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FTCacheDirectory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                         ,0x6e,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSlateTextShaper *)(*pcVar2)();
    return pFVar4;
  }
  if ((this->CompositeFontCache == (FCompositeFontCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeFontCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                         ,0x6f,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSlateTextShaper *)(*pcVar2)();
    return pFVar4;
  }
  if ((this->FontRenderer == (FSlateFontRenderer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FontRenderer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                         ,0x70,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSlateTextShaper *)(*pcVar2)();
    return pFVar4;
  }
  if ((this->FontCache == (FSlateFontCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FontCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                         ,0x71,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSlateTextShaper *)(*pcVar2)();
    return pFVar4;
  }
  return this;
}

// operator() @ 14247b7a0

void __thiscall
`FSlateTextShaper::PerformHarfBuzzTextShaping'::__l3::<lambda_1>::operator()(void *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> FVar5;
  undefined8 *puVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> FVar11;
  int *piVar12;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  plVar4 = *(longlong **)this;
  if (*plVar4 != 0) {
    FVar5 = *(ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> *)
             ((longlong)this + 8);
    iVar2 = **(int **)((longlong)this + 0x18);
    piVar12 = *(int **)((longlong)this + 0x28);
    iVar10 = *(int *)((ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> *)
                     ((longlong)FVar5 + 0x2a8))->InlineData;
    puVar6 = *(undefined8 **)((longlong)this + 0x20);
    piVar7 = *(int **)((longlong)this + 0x10);
    iVar3 = *piVar7;
    if (iVar10 == *(int *)((longlong)FVar5 + 0x2ac)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>_>
                         (0x838,(ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> *
                                )FVar5,(int *)((longlong)FVar5 + 0x2ac));
    }
    *(int *)((ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> *)
            ((longlong)FVar5 + 0x2a8))->InlineData = iVar10 + 1;
    lVar8 = puVar6[1];
    iVar1 = *piVar12;
    uVar9 = *puVar6;
    FVar11 = *(ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> *)
              ((longlong)FVar5 + 0x2a0);
    if (*(ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> *)
         ((longlong)FVar5 + 0x2a0) ==
        (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0) {
      FVar11 = FVar5;
    }
    piVar12 = (int *)((longlong)FVar11 + (longlong)iVar10 * 0x38);
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    iVar10 = *piVar7;
    *(longlong *)(piVar12 + 2) = *plVar4;
    piVar12[8] = iVar1;
    *piVar12 = iVar10;
    piVar12[1] = iVar2 - iVar3;
    *(undefined8 *)(piVar12 + 4) = uVar9;
    *(longlong *)(piVar12 + 6) = lVar8;
    piVar12[10] = 0;
    piVar12[0xb] = 0;
    piVar12[0xc] = 0;
    piVar12[0xd] = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    **(undefined8 **)this = 0;
    puVar6 = *(undefined8 **)((longlong)this + 0x20);
    if (puVar6 != &local_28) {
      *puVar6 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(puVar6 + 1),&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    **(undefined4 **)((longlong)this + 0x28) = 0x3f800000;
  }
  return;
}

// operator() @ 14247b8e0

void __thiscall
`FSlateTextShaper::PerformKerningOnlyTextShaping'::__l3::<lambda_1>::operator()(void *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> FVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> FVar13;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  plVar4 = *(longlong **)this;
  if (*plVar4 != 0) {
    FVar5 = *(ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> *)
             ((longlong)this + 8);
    iVar2 = **(int **)((longlong)this + 0x18);
    puVar6 = *(undefined4 **)((longlong)this + 0x28);
    iVar11 = *(int *)((ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> *)
                     ((longlong)FVar5 + 0xa8))->InlineData;
    puVar7 = *(undefined8 **)((longlong)this + 0x20);
    piVar8 = *(int **)((longlong)this + 0x10);
    iVar3 = *piVar8;
    if (iVar11 == *(int *)((longlong)FVar5 + 0xac)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>_>
                         (0x828,(ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>
                                 *)FVar5,(int *)((longlong)FVar5 + 0xac));
    }
    lVar12 = (longlong)iVar11;
    *(int *)((ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> *)
            ((longlong)FVar5 + 0xa8))->InlineData = iVar11 + 1;
    lVar9 = puVar7[1];
    uVar1 = *puVar6;
    uVar10 = *puVar7;
    FVar13 = *(ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> *)
              ((longlong)FVar5 + 0xa0);
    if (*(ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> *)
         ((longlong)FVar5 + 0xa0) ==
        (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)0x0) {
      FVar13 = FVar5;
    }
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    iVar11 = *piVar8;
    *(longlong *)((longlong)FVar13 + 8 + lVar12 * 0x28) = *plVar4;
    *(undefined4 *)((longlong)FVar13 + 0x20 + lVar12 * 0x28) = uVar1;
    *(int *)((longlong)FVar13 + lVar12 * 0x28) = iVar11;
    *(int *)((longlong)FVar13 + 4 + lVar12 * 0x28) = iVar2 - iVar3;
    *(undefined8 *)((longlong)FVar13 + 0x10 + lVar12 * 0x28) = uVar10;
    *(longlong *)((longlong)FVar13 + 0x18 + lVar12 * 0x28) = lVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    **(undefined8 **)this = 0;
    puVar7 = *(undefined8 **)((longlong)this + 0x20);
    if (puVar7 != &local_28) {
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(puVar7 + 1),&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    **(undefined4 **)((longlong)this + 0x28) = 0x3f800000;
  }
  return;
}

// operator() @ 14247c180

bool __thiscall `FSlateTextShaper::PerformTextShaping'::__l12::<lambda_1>::operator()(void *this)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  
  if (**(char **)this == '\x01') {
LAB_14247c4ca:
    bVar3 = true;
  }
  else {
    iVar2 = **(int **)((longlong)this + 8);
    lVar4 = (longlong)iVar2;
    iVar5 = **(int **)((longlong)this + 0x10) + iVar2;
    if (iVar2 < iVar5) {
      do {
        uVar1 = *(ushort *)(**(longlong **)((longlong)this + 0x18) + lVar4 * 2);
        if ((0x7f < uVar1) &&
           ((((((((uVar1 == 0x200d || ((ushort)(uVar1 - 0x300) < 0x70)) ||
                 ((ushort)(uVar1 + 0xe550) < 0x50)) ||
                ((((ushort)(uVar1 + 0xe240) < 0x40 || ((ushort)(uVar1 + 0xdf30) < 0x30)) ||
                 (((ushort)(uVar1 + 0xcf67) < 2 ||
                  (((ushort)(uVar1 + 0xce40) < 0x30 || ((ushort)(uVar1 + 0x200) < 0x10)))))))) ||
               ((ushort)(uVar1 + 0x1e0) < 0x10)) ||
              ((((ushort)(uVar1 - 0x900) < 0x80 || ((ushort)(uVar1 + 0x5720) < 0x20)) ||
               ((ushort)(uVar1 + 0xe330) < 0x30)))) ||
             ((((ushort)(uVar1 - 0x980) < 0x80 || ((ushort)(uVar1 - 0xa80) < 0x80)) ||
              (((ushort)(uVar1 - 0xb00) < 0x80 ||
               (((ushort)(uVar1 - 0xb80) < 0x80 || ((ushort)(uVar1 - 0xc00) < 0x80)))))))) ||
            ((((ushort)(uVar1 - 0xc80) < 0x80 ||
              ((((((ushort)(uVar1 - 0xd00) < 0x80 || ((ushort)(uVar1 - 0xe00) < 0x80)) ||
                 ((ushort)(uVar1 - 0xf00) < 0x100)) ||
                (((ushort)(uVar1 + 0xe880) < 0x80 || ((ushort)(uVar1 + 0xe620) < 0x20)))) ||
               (((ushort)(uVar1 - 0xd80) < 0x80 ||
                (((ushort)(uVar1 + 0xe700) < 0x50 || ((ushort)(uVar1 + 0xe5e0) < 0x90)))))))) ||
             (((ushort)(uVar1 + 0x5580) < 0x60 ||
              (((ushort)(uVar1 + 0xe440) < 0x40 ||
               (((lVar4 + 1 < (longlong)iVar5 && ((ushort)(uVar1 + 0x2800) < 0x400)) &&
                ((ushort)(*(short *)(**(longlong **)((longlong)this + 0x18) + 2 + lVar4 * 2) +
                         0x2400U) < 0x400)))))))))))) goto LAB_14247c4ca;
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar5);
    }
    bVar3 = false;
  }
  return bVar3;
}

// FinalizeTextShaping @ 142486be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FSlateTextShaper::FinalizeTextShaping
          (FSlateTextShaper *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *param_1,FSlateFontInfo *param_2,
          float param_3,FSourceTextRange *param_4)

{
  long lVar1;
  FT_FaceRec_ *pFVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FFontData *pFVar9;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined4 *puVar12;
  ushort uVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  ushort uVar16;
  float fVar17;
  undefined1 auStackY_e8 [32];
  UObject *local_a8;
  FSourceTextRange *local_a0;
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> local_98;
  FFreeTypeFaceGlyphData local_88;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a0 = param_4;
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  uVar13 = 0;
  pFVar9 = FCompositeFontCache::GetDefaultFontData(this->CompositeFontCache,param_2);
  FSlateFontRenderer::GetFontFaceForCodepoint
            (this->FontRenderer,&local_88,pFVar9,L'\0',param_2->FontFallback);
  uVar16 = uVar13;
  if (local_88.FaceAndMemory.Object == (FFreeTypeFace *)0x0) goto LAB_142486f52;
  if ((local_88.FaceAndMemory.Object == (FFreeTypeFace *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar5)();
    return pTVar10;
  }
  if ((local_88.FaceAndMemory.Object)->FTFace == (FT_FaceRec_ *)0x0) goto LAB_142486f52;
  fVar17 = param_2->SkewAmount;
  if (__real_40a00000 <= param_2->SkewAmount) {
    fVar17 = __real_40a00000;
  }
  if (fVar17 <= __real_c0a00000) {
    fVar17 = __real_c0a00000;
  }
  iVar7 = 0;
  if (__real_322bcc77 < (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    puVar12 = &local_68;
    local_68 = 0x10000;
    local_60 = 0;
    local_5c = 0x10000;
    local_64 = (int)(fVar17 * __real_47800000);
  }
  else {
    puVar12 = (undefined4 *)0x0;
  }
  FT_Set_Transform((local_88.FaceAndMemory.Object)->FTFace,puVar12,0);
  FreeTypeUtils::ApplySizeAndScale((local_88.FaceAndMemory.Object)->FTFace,param_2->Size,param_3);
  local_a8 = (param_2->FontObject).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a8);
  }
  bVar6 = UE::Slate::FontUtils::IsAscentDescentOverrideEnabled
                    ((TObjectPtr<UObject_const_>)&local_a8);
  if ((bVar6) && ((local_88.FaceAndMemory.Object)->IsDescentOverridden != false)) {
    iVar7 = FT_MulFix((local_88.FaceAndMemory.Object)->DescentOverrideValue,
                      ((local_88.FaceAndMemory.Object)->FTFace->size->metrics).y_scale);
    uVar16 = (ushort)(iVar7 >> 6);
LAB_142486ddb:
    if ((local_88.FaceAndMemory.Object)->IsAscentOverridden == false) {
      if ((local_88.FaceAndMemory.Object)->IsDescentOverridden == false) goto LAB_142486ef3;
      pFVar2 = (local_88.FaceAndMemory.Object)->FTFace;
      if ((pFVar2->face_flags & 1U) == 0) {
        if ((pFVar2->face_flags & 2U) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = FT_MulFix((pFVar2->size->metrics).ascender,(pFVar2->size->metrics).y_scale);
        }
      }
      else if ((local_88.FaceAndMemory.Object)->LayoutMethod == Metrics) {
        uVar15 = FT_MulFix((int)pFVar2->ascender,(pFVar2->size->metrics).y_scale);
      }
      else {
        uVar15 = FT_MulFix((pFVar2->bbox).yMax,(pFVar2->size->metrics).y_scale);
      }
    }
    else {
      iVar7 = FT_MulFix((local_88.FaceAndMemory.Object)->AscentOverrideValue,
                        ((local_88.FaceAndMemory.Object)->FTFace->size->metrics).y_scale);
      uVar15 = iVar7 + 0x3fU & 0xffffffc0;
    }
    if ((local_88.FaceAndMemory.Object)->IsDescentOverridden == false) {
      pFVar2 = (local_88.FaceAndMemory.Object)->FTFace;
      if ((pFVar2->face_flags & 1U) == 0) {
        if ((pFVar2->face_flags & 2U) != 0) {
          iVar7 = FT_MulFix((pFVar2->size->metrics).descender,(pFVar2->size->metrics).y_scale);
          uVar15 = uVar15 - iVar7;
        }
      }
      else if ((local_88.FaceAndMemory.Object)->LayoutMethod == Metrics) {
        iVar7 = FT_MulFix((int)pFVar2->descender,(pFVar2->size->metrics).y_scale);
        uVar15 = uVar15 - iVar7;
      }
      else {
        iVar7 = FT_MulFix((pFVar2->bbox).yMin,(pFVar2->size->metrics).y_scale);
        uVar15 = uVar15 - iVar7;
      }
    }
    else {
      uVar8 = FT_MulFix((local_88.FaceAndMemory.Object)->DescentOverrideValue,
                        ((local_88.FaceAndMemory.Object)->FTFace->size->metrics).y_scale);
      uVar15 = uVar15 - (uVar8 & 0xffffffc0);
    }
  }
  else {
    pFVar2 = (local_88.FaceAndMemory.Object)->FTFace;
    if ((pFVar2->face_flags & 1U) == 0) {
      if ((pFVar2->face_flags & 2U) != 0) {
        iVar7 = FT_MulFix((pFVar2->size->metrics).descender,(pFVar2->size->metrics).y_scale);
      }
    }
    else if ((local_88.FaceAndMemory.Object)->LayoutMethod == Metrics) {
      iVar7 = FT_MulFix((int)pFVar2->descender,(pFVar2->size->metrics).y_scale);
    }
    else {
      iVar7 = FT_MulFix((pFVar2->bbox).yMin,(pFVar2->size->metrics).y_scale);
    }
    uVar16 = (ushort)(iVar7 + 0x20 >> 6);
    if (bVar6) goto LAB_142486ddb;
LAB_142486ef3:
    pFVar2 = (local_88.FaceAndMemory.Object)->FTFace;
    if ((pFVar2->face_flags & 1U) == 0) {
      if ((pFVar2->face_flags & 2U) == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = FT_MulFix((pFVar2->size->metrics).height,(pFVar2->size->metrics).y_scale);
      }
    }
    else {
      lVar1 = (pFVar2->size->metrics).y_scale;
      if ((local_88.FaceAndMemory.Object)->LayoutMethod == Metrics) {
        uVar15 = FT_MulFix((int)pFVar2->height,lVar1);
      }
      else {
        uVar15 = FT_MulFix((pFVar2->bbox).yMax - (pFVar2->bbox).yMin,lVar1);
      }
    }
  }
  uVar13 = (ushort)((int)(uVar15 + 0x20) >> 6);
LAB_142486f52:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.FaceAndMemory.SharedReferenceCount.ReferenceController);
  pUVar3 = (param_2->FontMaterial).field0_0x0.DebugPtr;
  pTVar11 = ::operator_new(0xb8);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FShapedGlyphSequence *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFShapedGlyphSequence___00_SharedPointerInternals__6B_
    ;
    local_98.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    bVar6 = param_2->bMaterialIsStencil;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = param_1->ArrayNum;
    local_98.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    FShapedGlyphSequence::FShapedGlyphSequence
              ((FShapedGlyphSequence *)(pTVar11 + 1),&local_98,uVar16,uVar13,pUVar3,bVar6,
               &param_2->OutlineSettings,local_a0);
    if (((FShapedGlyphSequence *)(pTVar11 + 1) == (FShapedGlyphSequence *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar5)();
      return pTVar10;
    }
    __return_storage_ptr__->Object = (FShapedGlyphSequence *)(pTVar11 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    pTVar14 = pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  DestructItems<FShapedGlyphEntry,int>
            ((FShapedGlyphEntry *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// FlushCache @ 142489be0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateTextShaper::FlushCache(FSlateTextShaper *this)

{
  FHarfBuzzFontCache::Flush(&this->HarfBuzzFontCache);
  return;
}

// InsertSubstituteGlyphs @ 1424984a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __cdecl
FSlateTextShaper::InsertSubstituteGlyphs
          (wchar_t *param_1,int param_2,TSharedRef<FShapedGlyphFaceData,1> *param_3,
          TSharedRef<FFreeTypeAdvanceCache,1> *param_4,
          TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *param_5,short param_6)

{
  wchar_t wVar1;
  FShapedGlyphFaceData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FFreeTypeFace *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  undefined1 uVar8;
  atomic<int> aVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  short sVar17;
  short sVar18;
  FShapedGlyphEntry *pFVar19;
  FScriptContainerElement *pFVar20;
  long local_res8 [2];
  int local_res10;
  long local_res18 [2];
  TSharedRef<FFreeTypeAdvanceCache,1> *local_res20;
  FShapedGlyphFaceData *local_88;
  FSharedReferencer<1> local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  FShapedGlyphFaceData *local_58;
  FSharedReferencer<1> local_50 [2];
  
  wVar1 = param_1[param_2];
  local_res10 = param_2;
  local_res20 = param_4;
  bVar7 = TextBiDi::IsControlCharacter(wVar1);
  if ((bVar7) || (wVar1 == L'\x200b')) {
    iVar13 = param_5->ArrayNum;
    if (iVar13 == param_5->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8a8,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    param_5->ArrayNum = iVar13 + 1;
    pFVar20 = (param_5->AllocatorInstance).Data + (longlong)iVar13 * 0xa8;
    DefaultConstructItems<FShapedGlyphEntry,int>(pFVar20,1);
    local_50[0].ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
    local_58 = param_3->Object;
    if ((FShapedGlyphFontAtlasData *)local_50[0].ReferenceController !=
        (FShapedGlyphFontAtlasData *)0x0) {
      LOCK();
      *(atomic<int> *)&((FShapedGlyphFontAtlasData *)local_50[0].ReferenceController)->USize =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  &((FShapedGlyphFontAtlasData *)local_50[0].ReferenceController)->USize + 1);
      UNLOCK();
    }
    if (pFVar20 != (FScriptContainerElement *)(local_68 + 0x10)) {
      *(FShapedGlyphFaceData **)pFVar20 = local_58;
      local_58 = (FShapedGlyphFaceData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar20 + 8),local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50[0].ReferenceController);
    *(int *)(pFVar20 + 0x14) = local_res10;
    *(undefined4 *)(pFVar20 + 0x10) = 0;
    *(undefined8 *)(pFVar20 + 0x18) = 0;
    *(undefined4 *)(pFVar20 + 0x20) = 0x10100;
    pFVar20[0x24] = (FScriptContainerElement)0x0;
  }
  else {
    if (wVar1 == L'\t') {
      pFVar2 = param_3->Object;
      uVar12 = 0;
      sVar18 = 0;
      pTVar3 = (pFVar2->FontFace).WeakReferenceCount.ReferenceController;
      pTVar15 = pTVar3;
      sVar17 = sVar18;
      uVar11 = uVar12;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar3->SharedReferenceCount;
        do {
          pTVar15 = (TReferenceControllerBase<1> *)0x0;
          if (aVar6 == (atomic<int>)0x0) goto LAB_142498523;
          LOCK();
          aVar9 = pTVar3->SharedReferenceCount;
          bVar7 = aVar6 == aVar9;
          if (bVar7) {
            pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar9 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar9;
        } while (!bVar7);
        pFVar4 = (pFVar2->FontFace).Object;
        pTVar15 = pTVar3;
        if (pFVar4 != (FFreeTypeFace *)0x0) {
          uVar11 = FT_Get_Char_Index(pFVar4->FTFace,0x20);
          local_res8[0] = 0;
          bVar7 = FFreeTypeAdvanceCache::FindOrCache(local_res20->Object,uVar11,local_res8);
          if (bVar7) {
            sVar17 = (short)((local_res8[0] + 0x200 >> 10) + 0x20 >> 6);
          }
        }
      }
LAB_142498523:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      uVar10 = local_res10 - 4U;
      if ((int)(local_res10 - 4U) < 0) {
        uVar10 = uVar12;
      }
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      for (lVar14 = (longlong)(int)uVar10; lVar14 < param_2; lVar14 = lVar14 + 1) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        if (param_1[lVar14] != L'\t') {
          uVar12 = (int)(short)pTVar3 + 1U & 0x80000003;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
          }
          pTVar15 = (TReferenceControllerBase<1> *)(ulonglong)(uVar12 & 0xffff);
        }
        sVar18 = (short)pTVar15;
        pTVar3 = pTVar15;
      }
      if ((short)(4 - sVar18) < 1) {
        return true;
      }
      iVar13 = param_5->ArrayNum;
      if (iVar13 == param_5->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a8,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar13 + 1;
      pFVar19 = (FShapedGlyphEntry *)((param_5->AllocatorInstance).Data + (longlong)iVar13 * 0xa8);
      DefaultConstructItems<FShapedGlyphEntry,int>(pFVar19,1);
      local_78._8_8_ = (param_3->SharedReferenceCount).ReferenceController;
      local_78._0_8_ = param_3->Object;
      if ((TReferenceControllerBase<1> *)local_78._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_78._8_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_78._8_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar19 != (FShapedGlyphEntry *)local_78) {
        (pFVar19->FontFaceData).Object = (FShapedGlyphFaceData *)local_78._0_8_;
        local_78._0_8_ = (FShapedGlyphFaceData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar19->FontFaceData).SharedReferenceCount,
                   (FSharedReferencer<1> *)(local_78 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_78._8_8_);
      pFVar19->SourceIndex = local_res10;
      pFVar19->GlyphIndex = uVar11;
      iVar13 = ((int)sVar17 + (int)param_6) * (int)(short)(4 - sVar18);
      if ((0x7fff < iVar13) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8098064431772072973>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                             ,0x3f3,"XAdvance <= std::numeric_limits<int16>::max()"), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar19->XAdvance = (short)iVar13;
    }
    else {
      if ((0x26 < (ushort)(wVar1 + L'\xdff7')) ||
         ((0x4020000001U >> ((ulonglong)(ushort)(wVar1 + L'\xdff7') & 0x3f) & 1) == 0)) {
        return false;
      }
      pFVar2 = param_3->Object;
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      pTVar3 = (pFVar2->FontFace).WeakReferenceCount.ReferenceController;
      pTVar15 = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar3->SharedReferenceCount;
        do {
          pTVar15 = pTVar16;
          if (aVar6 == (atomic<int>)0x0) goto LAB_1424986f5;
          LOCK();
          aVar9 = pTVar3->SharedReferenceCount;
          bVar7 = aVar6 == aVar9;
          if (bVar7) {
            pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar9 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar9;
        } while (!bVar7);
        pFVar4 = (pFVar2->FontFace).Object;
        pTVar15 = pTVar3;
        if ((pFVar4 != (FFreeTypeFace *)0x0) &&
           (iVar13 = FT_Get_Char_Index(pFVar4->FTFace,wVar1), iVar13 != 0)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          return false;
        }
      }
LAB_1424986f5:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      pFVar2 = param_3->Object;
      sVar18 = 0;
      pTVar3 = (pFVar2->FontFace).WeakReferenceCount.ReferenceController;
      uVar11 = 0;
      if (wVar1 == L'…') {
        pTVar15 = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          aVar6 = pTVar3->SharedReferenceCount;
          do {
            pTVar15 = pTVar16;
            if (aVar6 == (atomic<int>)0x0) goto LAB_142498745;
            LOCK();
            aVar9 = pTVar3->SharedReferenceCount;
            bVar7 = aVar6 == aVar9;
            if (bVar7) {
              pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
              aVar9 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar9;
          } while (!bVar7);
          pFVar4 = (pFVar2->FontFace).Object;
          pTVar15 = pTVar3;
          if (pFVar4 != (FFreeTypeFace *)0x0) {
            uVar11 = FT_Get_Char_Index(pFVar4->FTFace,0x2e);
            local_res18[0] = 0;
            bVar7 = FFreeTypeAdvanceCache::FindOrCache(local_res20->Object,uVar11,local_res18);
            if (bVar7) {
              sVar18 = (short)((local_res18[0] + 0x200 >> 10) + 0x20 >> 6);
            }
          }
        }
LAB_142498745:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        iVar13 = param_5->ArrayNum;
        if (iVar13 == param_5->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8a8,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar13 + 1;
        pFVar20 = (param_5->AllocatorInstance).Data + (longlong)iVar13 * 0xa8;
        DefaultConstructItems<FShapedGlyphEntry,int>(pFVar20,1);
        local_80.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
        pFVar2 = param_3->Object;
        if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_80.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar20 != (FScriptContainerElement *)&local_88) {
          *(FShapedGlyphFaceData **)pFVar20 = pFVar2;
          local_88 = (FShapedGlyphFaceData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar20 + 8),&local_80);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.ReferenceController);
        sVar18 = sVar18 + param_6;
        *(int *)(pFVar20 + 0x14) = local_res10;
        *(short *)(pFVar20 + 0x18) = sVar18;
        *(uint *)(pFVar20 + 0x10) = uVar11;
        *(undefined4 *)(pFVar20 + 0x1a) = 0;
        *(undefined4 *)(pFVar20 + 0x1e) = 0x1000000;
        *(undefined2 *)(pFVar20 + 0x22) = 1;
        pFVar20[0x24] = (FScriptContainerElement)0x1;
        iVar13 = param_5->ArrayNum;
        if (iVar13 == param_5->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8a8,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar13 + 1;
        pFVar20 = (param_5->AllocatorInstance).Data + (longlong)iVar13 * 0xa8;
        DefaultConstructItems<FShapedGlyphEntry,int>(pFVar20,1);
        local_80.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
        pFVar2 = param_3->Object;
        if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_80.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar20 != (FScriptContainerElement *)&local_88) {
          *(FShapedGlyphFaceData **)pFVar20 = pFVar2;
          local_88 = (FShapedGlyphFaceData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar20 + 8),&local_80);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.ReferenceController);
        *(uint *)(pFVar20 + 0x10) = uVar11;
        *(int *)(pFVar20 + 0x14) = local_res10;
        *(short *)(pFVar20 + 0x18) = sVar18;
        *(undefined4 *)(pFVar20 + 0x1a) = 0;
        *(undefined4 *)(pFVar20 + 0x1e) = 0x1000000;
        *(undefined2 *)(pFVar20 + 0x22) = 1;
        pFVar20[0x24] = (FScriptContainerElement)0x1;
        iVar13 = param_5->ArrayNum;
        if (iVar13 == param_5->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8a8,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar13 + 1;
        pFVar20 = (param_5->AllocatorInstance).Data + (longlong)iVar13 * 0xa8;
        DefaultConstructItems<FShapedGlyphEntry,int>(pFVar20,1);
        local_80.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
        local_88 = param_3->Object;
        if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_80.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar20 != (FScriptContainerElement *)&local_88) {
          *(FShapedGlyphFaceData **)pFVar20 = local_88;
          local_88 = (FShapedGlyphFaceData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar20 + 8),&local_80);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.ReferenceController);
        *(uint *)(pFVar20 + 0x10) = uVar11;
        *(int *)(pFVar20 + 0x14) = local_res10;
        *(short *)(pFVar20 + 0x18) = sVar18;
        *(undefined4 *)(pFVar20 + 0x1a) = 0;
        *(undefined4 *)(pFVar20 + 0x1e) = 0x1000000;
        *(undefined2 *)(pFVar20 + 0x22) = 1;
        pFVar20[0x24] = (FScriptContainerElement)0x1;
        return true;
      }
      pTVar15 = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar3->SharedReferenceCount;
        do {
          pTVar15 = pTVar16;
          uVar11 = 0;
          if (aVar6 == (atomic<int>)0x0) goto LAB_1424989c7;
          LOCK();
          aVar9 = pTVar3->SharedReferenceCount;
          bVar7 = aVar6 == aVar9;
          if (bVar7) {
            pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar9 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar9;
        } while (!bVar7);
        pFVar4 = (pFVar2->FontFace).Object;
        pTVar15 = pTVar3;
        if (pFVar4 != (FFreeTypeFace *)0x0) {
          uVar11 = FT_Get_Char_Index(pFVar4->FTFace,0x20);
          local_res20 = (TSharedRef<FFreeTypeAdvanceCache,1> *)
                        ((ulonglong)local_res20 & 0xffffffff00000000);
          bVar7 = FFreeTypeAdvanceCache::FindOrCache(param_4->Object,uVar11,(long *)&local_res20);
          if (bVar7) {
            sVar18 = (short)(((int)local_res20 + 0x200 >> 10) + 0x20 >> 6);
          }
        }
      }
LAB_1424989c7:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      pFVar19 = TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef(param_5);
      local_68._8_8_ = (param_3->SharedReferenceCount).ReferenceController;
      local_68._0_8_ = param_3->Object;
      if ((TReferenceControllerBase<1> *)local_68._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar19 != (FShapedGlyphEntry *)local_68) {
        (pFVar19->FontFaceData).Object = (FShapedGlyphFaceData *)local_68._0_8_;
        local_68._0_8_ = (FShapedGlyphFaceData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar19->FontFaceData).SharedReferenceCount,
                   (FSharedReferencer<1> *)(local_68 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_68._8_8_);
      pFVar19->SourceIndex = local_res10;
      pFVar19->GlyphIndex = uVar11;
      lVar14 = (longlong)(((int)sVar18 + (int)param_6) * 2);
      pFVar19->XAdvance =
           (short)((ulonglong)(lVar14 * 0x55555556) >> 0x20) +
           (short)((lVar14 / 3 + (lVar14 >> 0x3f) & 0xffffffffU) >> 0x1f);
    }
    pFVar19->bIsVisible = false;
    pFVar19->NumGraphemeClustersInGlyph = '\x01';
    pFVar19->TextDirection = LeftToRight;
    pFVar19->YOffset = 0;
    pFVar19->Kerning = '\0';
    pFVar19->NumCharactersInGlyph = '\x01';
    pFVar19->YAdvance = 0;
    pFVar19->XOffset = 0;
  }
  return true;
}

// PerformHarfBuzzTextShaping @ 14249de80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateTextShaper::PerformHarfBuzzTextShaping
          (FSlateTextShaper *this,wchar_t *param_1,int param_2,int param_3,FSlateFontInfo *param_4,
          float param_5,ETextDirection param_6,
          TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *param_7)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  wchar_t wVar4;
  int iVar5;
  IBreakIterator *pIVar6;
  FFontData *pFVar7;
  UObjectBaseUtility *this_00;
  FFreeTypeCacheDirectory *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  FShapedGlyphFaceData *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  float fVar25;
  float fVar26;
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *pTVar27;
  FSlateTextShaper *pFVar28;
  FSlateFontInfo *pFVar29;
  FSharedReferencer<1> FVar30;
  FSharedReferencer<1> FVar31;
  bool bVar32;
  EFontFallback EVar33;
  bool bVar34;
  EFontHinting EVar35;
  FScriptContainerElement FVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  TStatId TVar40;
  FFontData *pFVar41;
  FFreeTypeFaceGlyphData *pFVar42;
  FName *pFVar43;
  FThreadSafeStaticStat<FStat_STAT_SplitByScript> FVar44;
  ulonglong uVar45;
  longlong lVar46;
  undefined8 *puVar47;
  FThreadSafeStaticStat<FStat_STAT_TextSequencesProcessing> FVar48;
  UClass *pUVar49;
  longlong *plVar50;
  TReferenceControllerBase<1> *pTVar51;
  FThreadSafeStaticStat<FStat_STAT_HarfBuzzNativeShape> FVar52;
  FString *pFVar53;
  longlong lVar54;
  wchar32 wVar55;
  FNameEntryId FVar56;
  FName FVar57;
  ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> FVar58;
  FName FVar59;
  longlong lVar60;
  wchar_t *pwVar61;
  bool bVar62;
  uint uVar63;
  FScriptContainerElement *pFVar64;
  ushort uVar65;
  FFreeTypeFace *pFVar66;
  int *piVar67;
  int iVar68;
  wchar_t *pwVar69;
  int *piVar70;
  FName FVar71;
  ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> FVar72;
  uint uVar73;
  FName FVar75;
  uchar *puVar76;
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *pTVar77;
  bool bVar78;
  float fVar79;
  float fVar80;
  undefined1 auStackY_6e8 [32];
  byte local_688;
  undefined1 local_685;
  undefined1 local_684;
  undefined1 local_683 [3];
  uint local_680;
  int local_67c;
  FName local_678;
  float local_670 [2];
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *local_668;
  int *local_660;
  int local_658;
  uint local_654;
  FSlateTextShaper *local_650;
  FSlateFontInfo *local_648;
  FName local_640;
  float local_638;
  int local_634;
  longlong local_630;
  FName local_628;
  int local_620 [2];
  wchar_t *local_618;
  FCycleCounter local_610;
  FCycleCounter local_600;
  uint local_5f0;
  FColor_u_0 local_5ec;
  FColor_u_0 local_5e8;
  FColor_u_0 local_5e4;
  FFontData *local_5e0;
  undefined8 local_5d8;
  uint local_5d0;
  uint local_5cc;
  TSharedRef<FShapedGlyphFaceData,1> local_5c8;
  FFreeTypeFace *local_5b8;
  FSharedReferencer<1> FStack_5b0;
  uint local_5a8;
  uint uStack_5a4;
  hb_font_t *local_5a0;
  ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> local_598;
  ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> local_590;
  FName local_588;
  FName local_580;
  undefined8 local_578;
  FName local_570;
  FFontData **local_568;
  ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> local_560;
  int *local_558;
  int *local_550;
  FFreeTypeFace **local_548;
  float *local_540;
  FFreeTypeFaceGlyphData local_538;
  FName local_518;
  FName local_508;
  FName local_4f8;
  FShapedGlyphFaceData *local_4e8;
  FSharedReferencer<1> FStack_4e0;
  longlong local_4d8;
  FT_Vector_ local_4d0;
  FName local_4c8;
  FFreeTypeFace *local_4c0;
  FSharedReferencer<1> FStack_4b8;
  TSharedPtr<FFreeTypeKerningCache,1> local_4b0;
  FSourceLocation local_498;
  FSourceLocation local_478;
  TWeakPtr<FFreeTypeFace,1> local_458;
  TSharedRef<FFreeTypeAdvanceCache,1> local_448;
  FName local_430;
  int local_428;
  FName local_420;
  FName local_418 [2];
  FString local_408;
  FString local_3f8;
  FFreeTypeFaceGlyphData local_3e8;
  undefined1 local_3c8 [672];
  ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> local_128;
  uint local_120;
  uint local_11c;
  undefined4 local_118;
  uint local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  ulonglong local_f8;
  ulonglong uVar74;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  local_668 = param_7;
  local_648 = param_4;
  local_650 = this;
  local_634 = param_2;
  local_618 = param_1;
  TVar40 = FThreadSafeStaticStatInner<FStat_STAT_PerformHarfBuzzTextShaping,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_PerformHarfBuzzTextShaping,1> *)
                      &StatPtr_STAT_PerformHarfBuzzTextShaping);
  local_498.Impl._Line = 0x20c;
  local_498.Impl._Column = 2;
  local_498.Impl._Function =
       "void __cdecl FSlateTextShaper::PerformHarfBuzzTextShaping(const wchar_t *,const int,const int,const struct FSlateFontInfo &,const float,const enum TextBiDi::ETextDirection,class TArray<struct FShapedGlyphEntry,class TSizedDefaultAllocator<32> > &)"
  ;
  local_600.StatId.ComparisonIndex.Value = 0;
  local_600.StatId.Number = 0;
  local_498.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
  ;
  local_600.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_600,*(TStatIdData **)&(TVar40.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_498);
  pIVar6 = (this->GraphemeBreakIterator).Object;
  local_128 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0;
  local_120 = 0;
  local_11c = 0xc;
  (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,param_1 + param_2,param_3);
  bVar62 = false;
  TVar40 = FThreadSafeStaticStatInner<FStat_STAT_SplitByFontFace,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_SplitByFontFace,1> *)
                      &StatPtr_STAT_SplitByFontFace);
  local_478.Impl._Line = 0x218;
  local_478.Impl._Column = 3;
  local_478.Impl._Function =
       "void __cdecl FSlateTextShaper::PerformHarfBuzzTextShaping(const wchar_t *,const int,const int,const struct FSlateFontInfo &,const float,const enum TextBiDi::ETextDirection,class TArray<struct FShapedGlyphEntry,class TSizedDefaultAllocator<32> > &)"
  ;
  local_478.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
  ;
  local_610.StatId.ComparisonIndex.Value = 0;
  local_610.StatId.Number = 0;
  local_610.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_610,*(TStatIdData **)&(TVar40.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_478);
  fVar21 = __real_3f800000;
  local_568 = &local_5e0;
  local_5e0 = (FFontData *)0x0;
  local_558 = local_620;
  local_550 = &local_658;
  uVar73 = 0;
  local_540 = &local_638;
  local_5b8 = (FFreeTypeFace *)0x0;
  FStack_5b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_638 = 1.0;
  local_658 = param_2;
  local_620[0] = param_2;
  local_560 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)local_3c8;
  local_548 = &local_5b8;
  local_680 = (**(code **)((longlong)*(this->GraphemeBreakIterator).Object + 0x78))();
  if (local_680 != -1) {
    do {
      iVar68 = local_680 - uVar73;
      wVar4 = param_1[local_658];
      wVar55 = (wchar32)(ushort)wVar4;
      if (1 < iVar68) {
        if (((ushort)wVar4 - 0xd800 < 0x400) && ((ushort)param_1[local_658 + 1] - 0xdc00 < 0x400)) {
          wVar55 = (uint)(ushort)wVar4 * 0x400 + -0x35fdc00 + (uint)(ushort)param_1[local_658 + 1];
        }
        else {
          bVar62 = true;
        }
      }
      bVar32 = FTextChar::IsWhitespace(wVar55 & 0xffff);
      pFVar29 = local_648;
      if ((bVar32) ||
         ((uVar65 = (short)wVar55 + 0xdff7, uVar65 < 0x27 &&
          ((0x4000000005U >> ((ulonglong)uVar65 & 0x3f) & 1) != 0)))) {
        bVar32 = true;
        local_670[0] = 1.0;
        pFVar41 = FCompositeFontCache::GetFontDataForCodepoint
                            (this->CompositeFontCache,local_648,wVar55,local_670);
        EVar33 = FF_NoFallback;
      }
      else {
        bVar32 = false;
        local_670[0] = 1.0;
        pFVar41 = FCompositeFontCache::GetFontDataForCodepoint
                            (this->CompositeFontCache,local_648,wVar55,local_670);
        EVar33 = pFVar29->FontFallback;
      }
      FSlateFontRenderer::GetFontFaceForCodepoint
                (local_650->FontRenderer,&local_538,pFVar41,wVar55,EVar33);
      pFVar66 = local_538.FaceAndMemory.Object;
      pFVar28 = local_650;
      bVar78 = false;
      if (local_538.FaceAndMemory.Object == (FFreeTypeFace *)0x0) {
        wVar55 = L'�';
        if (bVar32) {
          wVar55 = L' ';
        }
        pFVar41 = FCompositeFontCache::GetFontDataForCodepoint
                            (local_650->CompositeFontCache,local_648,wVar55,local_670);
        pFVar42 = FSlateFontRenderer::GetFontFaceForCodepoint
                            (pFVar28->FontRenderer,&local_3e8,pFVar41,wVar55,local_648->FontFallback
                            );
        if (&local_538 != pFVar42) {
          local_538.FaceAndMemory.Object = (pFVar42->FaceAndMemory).Object;
          (pFVar42->FaceAndMemory).Object = (FFreeTypeFace *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_538.FaceAndMemory.SharedReferenceCount,
                     &(pFVar42->FaceAndMemory).SharedReferenceCount);
          pFVar66 = local_538.FaceAndMemory.Object;
        }
        local_538.GlyphFlags = pFVar42->GlyphFlags;
        local_538.GlyphIndex = pFVar42->GlyphIndex;
        local_538.CharFallbackLevel = pFVar42->CharFallbackLevel;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3e8.FaceAndMemory.SharedReferenceCount.ReferenceController);
        bVar78 = pFVar66 == (FFreeTypeFace *)0x0;
      }
      if (pFVar66 != (FFreeTypeFace *)0x0) {
        if ((bVar78) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar32)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((pFVar66->FTFace->face_flags & 1) == 0) {
          local_670[0] = fVar21;
        }
      }
      FVar31.ReferenceController = local_538.FaceAndMemory.SharedReferenceCount.ReferenceController;
      fVar22 = local_670[0];
      if ((((local_5e0 == (FFontData *)0x0) || (local_5e0 != pFVar41)) || (local_5b8 != pFVar66)) ||
         (local_638 != local_670[0])) {
        if (*local_568 != (FFontData *)0x0) {
          iVar37 = *local_550;
          iVar38 = *local_558;
          if (local_120 == local_11c) {
            local_120 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>_>
                                  (0x838,(ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>
                                          *)local_3c8,(int *)&local_11c);
          }
          FVar72 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)local_3c8;
          if (local_128 != (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0) {
            FVar72 = local_128;
          }
          piVar67 = (int *)((longlong)(int)local_120 * 0x38 + (longlong)FVar72);
          fVar1 = *local_540;
          if (FStack_5b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_5b0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_5b0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar7 = *local_568;
          iVar5 = *local_558;
          local_120 = local_120 + 1;
          piVar67[1] = iVar37 - iVar38;
          *(FFontData **)(piVar67 + 2) = pFVar7;
          piVar67[10] = 0;
          piVar67[0xb] = 0;
          piVar67[0xc] = 0;
          piVar67[0xd] = 0;
          piVar67[8] = (int)fVar1;
          *piVar67 = iVar5;
          *(FFreeTypeFace **)(piVar67 + 4) = local_5b8;
          *(TReferenceControllerBase<1> **)(piVar67 + 6) = FStack_5b0.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_4c0 = (FFreeTypeFace *)0x0;
          FStack_4b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          *local_568 = (FFontData *)0x0;
          if (&local_5b8 != &local_4c0) {
            local_5b8 = (FFreeTypeFace *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_5b0,&FStack_4b8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_4b8.ReferenceController);
          *local_540 = 1.0;
        }
        FVar30.ReferenceController = FStack_5b0.ReferenceController;
        local_620[0] = local_658;
        if (FVar31.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar31.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar31.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FStack_5b0.ReferenceController = FVar31.ReferenceController;
        local_5e0 = pFVar41;
        local_5b8 = pFVar66;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar30.ReferenceController);
        local_638 = fVar22;
      }
      local_658 = local_658 + iVar68;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar31.ReferenceController);
      this = local_650;
      uVar73 = local_680;
      local_680 = (**(code **)((longlong)*(local_650->GraphemeBreakIterator).Object + 0x78))();
      param_1 = local_618;
    } while (local_680 != -1);
    local_680 = -1;
  }
  `FSlateTextShaper::PerformHarfBuzzTextShaping'::__l3::<lambda_1>::operator()(&local_568);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_5b0.ReferenceController);
  if ((local_610.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_610.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_610.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_610.StatId,CycleScopeEnd);
  }
  local_610.EmittedEvent = '\0';
  FVar44 = StatPtr_STAT_SplitByScript;
  if (StatPtr_STAT_SplitByScript == (FThreadSafeStaticStat<FStat_STAT_SplitByScript>)0x0) {
    pFVar43 = ::FName::FName(&local_430,"STAT_SplitByScript");
    FVar44 = (FThreadSafeStaticStat<FStat_STAT_SplitByScript>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SplitByScript,*pFVar43,
                        L"Split By Script","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar57 = *(FName *)FVar44;
  bVar32 = false;
  bVar20 = false;
  local_518.ComparisonIndex.Value = 0;
  local_518.Number = 0;
  bVar78 = false;
  bVar34 = false;
  if ((FVar57.ComparisonIndex.Value.Value == 0) && (FVar57.Number == 0)) {
LAB_14249e5d5:
    bVar20 = bVar34;
    bVar32 = bVar78;
    bVar78 = false;
    local_640 = local_518;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5ec.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5ec._s_0,(char *)*(FName *)((longlong)FVar44 + 0x10));
      bVar32 = false;
      bVar20 = true;
      bVar78 = false;
      bVar34 = true;
      if (-1 < CpuChannel->Enabled) {
        local_588.ComparisonIndex.Value = FVar57.ComparisonIndex.Value.Value;
        local_588.Number = FVar57.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_588,(wchar_t *)*(FName *)((longlong)FVar44 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                   ,0x270);
        bVar32 = true;
        bVar20 = true;
        bVar78 = true;
        bVar34 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14249e5d5;
    local_678 = FVar57;
    local_640 = FVar57;
    FThreadStats::AddMessage(FVar57,CycleScopeStart);
    bVar78 = true;
  }
  local_678 = (FName)hb_unicode_funcs_get_default();
  uVar45 = (ulonglong)(int)local_120;
  FVar72 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)local_3c8;
  if (local_128 != (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0) {
    FVar72 = local_128;
  }
  local_680 = local_120;
  FVar58 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)local_3c8;
  if (local_128 != (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0) {
    FVar58 = local_128;
  }
  FVar57 = (FName)(uVar45 * 0x38 + (longlong)FVar58);
  local_628 = FVar57;
  puVar76 = (uchar *)((longlong)FVar72 + 0x30);
  iVar68 = local_428;
  while( true ) {
    if (local_120 != (uint)uVar45) {
      local_685 = 0;
      `TCheckedPointerIterator<`anonymous_namespace'::FHarfBuzzTextSequenceEntry,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_685);
    }
    FVar71 = local_640;
    if ((FName)(puVar76 + -0x30) == FVar57) break;
    iVar37 = *(int *)((ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry> *)
                     (puVar76 + -0x30))->InlineData;
    uVar45 = (ulonglong)iVar37;
    bVar34 = false;
    local_67c = *(int *)(puVar76 + -0x2c) + iVar37;
    if (iVar37 < local_67c) {
      pwVar69 = local_618 + uVar45;
      uVar74 = uVar45;
      do {
        iVar37 = hb_unicode_script(local_678,*pwVar69);
        if (bVar34) {
          if (iVar68 != iVar37) {
            if (!bVar34) goto LAB_14249e704;
            if (((iVar37 == 0x5a797979) || (iVar37 == 0x5a696e68)) || (iVar37 == 0x5a7a7a7a))
            goto LAB_14249e70c;
            if (((iVar68 != 0x5a797979) && (iVar68 != 0x5a696e68)) && (iVar68 != 0x5a7a7a7a)) {
              iVar38 = *(int *)puVar76;
              if (iVar38 == *(int *)(puVar76 + 4)) {
                iVar38 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,(ForAnyElementType *)(puVar76 + -8),(int *)(puVar76 + 4));
              }
              lVar46 = (longlong)iVar38;
              *(int *)puVar76 = iVar38 + 1;
              lVar54 = *(longlong *)(puVar76 + -8);
              *(int *)(lVar54 + 4 + lVar46 * 0xc) = (int)uVar74 - (int)uVar45;
              *(int *)(lVar54 + lVar46 * 0xc) = (int)uVar45;
              *(int *)(lVar54 + 8 + lVar46 * 0xc) = iVar68;
              goto LAB_14249e704;
            }
            goto LAB_14249e707;
          }
        }
        else {
LAB_14249e704:
          uVar45 = uVar74 & 0xffffffff;
LAB_14249e707:
          bVar34 = true;
          iVar68 = iVar37;
        }
LAB_14249e70c:
        uVar73 = (int)uVar74 + 1;
        uVar74 = (ulonglong)uVar73;
        pwVar69 = pwVar69 + 1;
      } while ((int)uVar73 < local_67c);
      FVar57 = local_628;
      if (bVar34) {
        iVar37 = *(int *)puVar76;
        if (iVar37 == *(int *)(puVar76 + 4)) {
          iVar37 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)(puVar76 + -8),(int *)(puVar76 + 4));
        }
        *(int *)puVar76 = iVar37 + 1;
        lVar46 = (longlong)iVar37;
        lVar54 = *(longlong *)(puVar76 + -8);
        *(int *)(lVar54 + lVar46 * 0xc) = (int)uVar45;
        *(uint *)(lVar54 + 4 + lVar46 * 0xc) = uVar73 - (int)uVar45;
        *(int *)(lVar54 + 8 + lVar46 * 0xc) = iVar68;
        FVar57 = local_628;
      }
    }
    puVar76 = puVar76 + 0x38;
    uVar45 = (ulonglong)local_680;
  }
  if (bVar20) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar78) {
    FThreadStats::AddMessage(FVar71,CycleScopeEnd);
  }
  if (param_6 == RightToLeft) {
    FVar72 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)local_3c8;
    if (local_128 != (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0) {
      FVar72 = local_128;
    }
    lVar54 = (longlong)((int)local_120 / 2);
    if (0 < (int)local_120 / 2) {
      puVar47 = (undefined8 *)((longlong)(int)(local_120 - 1) * 0x38 + (longlong)FVar72);
      do {
        uVar3 = *(undefined8 *)((longlong)FVar72 + 0x30);
        uVar11 = puVar47[1];
        uVar12 = *(undefined8 *)FVar72;
        uVar13 = *(undefined8 *)((longlong)FVar72 + 8);
        uVar14 = *(undefined8 *)((longlong)FVar72 + 0x10);
        uVar15 = *(undefined8 *)((longlong)FVar72 + 0x18);
        uVar16 = *(undefined8 *)((longlong)FVar72 + 0x20);
        uVar17 = *(undefined8 *)((longlong)FVar72 + 0x28);
        *(undefined8 *)FVar72 = *puVar47;
        *(undefined8 *)((longlong)FVar72 + 8) = uVar11;
        uVar11 = puVar47[3];
        *(undefined8 *)((longlong)FVar72 + 0x10) = puVar47[2];
        *(undefined8 *)((longlong)FVar72 + 0x18) = uVar11;
        uVar11 = puVar47[5];
        *(undefined8 *)((longlong)FVar72 + 0x20) = puVar47[4];
        *(undefined8 *)((longlong)FVar72 + 0x28) = uVar11;
        *(undefined8 *)((longlong)FVar72 + 0x30) = puVar47[6];
        *puVar47 = uVar12;
        puVar47[1] = uVar13;
        puVar47[2] = uVar14;
        puVar47[3] = uVar15;
        puVar47[4] = uVar16;
        puVar47[5] = uVar17;
        puVar47[6] = uVar3;
        lVar54 = lVar54 + -1;
        puVar47 = puVar47 + -7;
        FVar72 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)
                 ((longlong)FVar72 + 0x38);
      } while (lVar54 != 0);
    }
    bVar62 = true;
  }
  FVar48 = StatPtr_STAT_TextSequencesProcessing;
  if (StatPtr_STAT_TextSequencesProcessing ==
      (FThreadSafeStaticStat<FStat_STAT_TextSequencesProcessing>)0x0) {
    pFVar43 = ::FName::FName(&local_420,"STAT_TextSequencesProcessing");
    FVar48 = (FThreadSafeStaticStat<FStat_STAT_TextSequencesProcessing>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextSequencesProcessing,*pFVar43,
                        L"Text Sequences Processing","STATGROUP_Slate","STATCAT_Advanced",L"Slate",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar57 = *(FName *)FVar48;
  bVar32 = false;
  bVar20 = false;
  local_508.ComparisonIndex.Value = 0;
  local_508.Number = 0;
  bVar78 = false;
  bVar34 = false;
  if ((FVar57.ComparisonIndex.Value.Value != 0) || (FVar57.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5e8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5e8._s_0,(char *)*(FName *)((longlong)FVar48 + 0x10));
      bVar32 = false;
      bVar20 = true;
      bVar78 = false;
      bVar34 = true;
      if (-1 < CpuChannel->Enabled) {
        local_580.ComparisonIndex.Value = FVar57.ComparisonIndex.Value.Value;
        local_580.Number = FVar57.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_580,(wchar_t *)*(FName *)((longlong)FVar48 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                   ,0x2bf);
        bVar32 = true;
        bVar20 = true;
        bVar78 = true;
        bVar34 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_678 = FVar57;
      local_628 = FVar57;
      FThreadStats::AddMessage(FVar57,CycleScopeStart);
      bVar78 = true;
      goto LAB_14249e99e;
    }
  }
  bVar20 = bVar34;
  bVar32 = bVar78;
  bVar78 = false;
  local_628 = local_508;
  FVar57 = local_508;
LAB_14249e99e:
  local_678 = (FName)hb_buffer_create();
  local_578 = (ulonglong)local_578._4_4_ << 0x20;
  if (local_618 != (wchar_t *)0x0) {
    local_578 = wcslen(local_618);
  }
  fVar26 = __real_c2800000;
  fVar25 = __real_c0a00000;
  fVar1 = __real_47800000;
  pTVar24 = _UNK_150651568;
  pFVar23 = ___xmm_00000000000000000000000000000010;
  fVar22 = __real_40a00000;
  fVar21 = __real_3a83126f;
  if ((bVar62) || (local_648->LetterSpacing == 0)) {
    bVar62 = false;
  }
  else {
    bVar62 = true;
  }
  uVar45 = (ulonglong)(int)local_120;
  FVar72 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)local_3c8;
  if (local_128 != (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0) {
    FVar72 = local_128;
  }
  FVar58 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)
           (uVar45 * 0x38 + (longlong)FVar72);
  local_5f0 = local_120;
  local_598 = FVar58;
  do {
    pFVar29 = local_648;
    local_590 = FVar72;
    if (local_120 != (uint)uVar45) {
      local_684 = 0;
      `TCheckedPointerIterator<`anonymous_namespace'::FHarfBuzzTextSequenceEntry,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_684);
    }
    if (FVar72 == FVar58) {
      hb_buffer_destroy(local_678);
      if (bVar20) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar32) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar78) {
        FThreadStats::AddMessage(FVar57,CycleScopeEnd);
      }
      (**(code **)((longlong)*(local_650->GraphemeBreakIterator).Object + 0x50))();
      FVar72 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)local_3c8;
      if (local_128 != (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0) {
        FVar72 = local_128;
      }
      DestructItems<_anonymous_namespace_::FHarfBuzzTextSequenceEntry,int>
                ((FHarfBuzzTextSequenceEntry *)FVar72,local_120);
      if (local_128 != (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)0x0) {
        FMemory::Free((void *)local_128);
      }
      if ((local_600.EmittedEvent & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_600.EmittedEvent & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_600.EmittedEvent & 4) != 0) {
        FThreadStats::AddMessage(local_600.StatId,CycleScopeEnd);
      }
      return;
    }
    if (*(longlong **)((longlong)FVar72 + 0x10) != (longlong *)0x0) {
      if (((*(byte *)(**(longlong **)((longlong)FVar72 + 0x10) + 8) & 0x40) != 0) || (bVar62)) {
        local_688 = 1;
        if (!bVar62) goto LAB_14249eaa8;
        local_688 = 1;
        uVar73 = (uint)((float)pFVar29->LetterSpacing * pFVar29->Size * fVar21);
        uVar45 = (ulonglong)uVar73;
        if (0x7fff < (int)uVar73) {
          local_688 = 1;
          bVar34 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8098064431772073260>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                              ,0x2d4,"LetterSpacingScaledAsInt <= std::numeric_limits<int16>::max()"
                             );
          if (bVar34) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
      else {
        local_688 = 0;
LAB_14249eaa8:
        uVar45 = 0;
      }
      local_680 = (uint)uVar45;
      pFVar41 = *(FFontData **)((longlong)FVar72 + 8);
      pwVar69 = L"";
      if (!bVar62) {
        local_680 = (int)(uVar45 >> 0x10) << 0x10;
      }
      local_114 = (uint)local_688;
      local_118 = 0x6b65726e;
      local_110 = 0;
      local_104 = (uint)((short)local_680 == 0);
      local_10c = 0xffffffff;
      local_108 = 0x6c696761;
      local_100 = 0;
      local_fc = 0xffffffff;
      if ((*(longlong *)((longlong)FVar72 + 0x10) == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar34)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar73 = (*(uint *)(**(longlong **)((longlong)FVar72 + 0x10) + 8) & 1) * 8 + 0x100000;
      if (EnableFontAntiAliasing == 0) {
LAB_14249ebf7:
        uVar73 = uVar73 | 0x20020;
      }
      else {
        EVar35 = FFontData::GetHinting(pFVar41);
        if (EVar35 != Default) {
          if (EVar35 == Auto) {
            uVar73 = uVar73 | 0x20;
          }
          else if (EVar35 == AutoLight) {
            uVar73 = uVar73 | 0x10000;
          }
          else {
            if (EVar35 == Monochrome) goto LAB_14249ebf7;
            if (EVar35 == None) {
              uVar73 = uVar73 | 0x8002;
            }
          }
        }
      }
      pFVar28 = local_650;
      fVar80 = param_5 * *(float *)((longlong)FVar72 + 0x20);
      if ((*(longlong *)((longlong)FVar72 + 0x10) == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar34)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_5a0 = FHarfBuzzFontCache::CreateFont
                            (&pFVar28->HarfBuzzFontCache,
                             *(FFreeTypeFace **)((longlong)FVar72 + 0x10),uVar73,pFVar29,fVar80);
      FVar58 = local_598;
      if (local_5a0 != (hb_font_t *)0x0) {
        lVar54 = *(longlong *)((longlong)FVar72 + 8);
        this_00 = *(UObjectBaseUtility **)(lVar54 + 0x20);
        if ((this_00 == (UObjectBaseUtility *)0x0) || (bSlateSdfTextEnable == false)) {
          local_5d8 = 0;
        }
        else {
          pUVar49 = UFontFaceInterface::StaticClass();
          plVar50 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar49);
          if (plVar50 == (longlong *)0x0) {
            pFVar53 = GetTypeName<IFontFaceInterface_const_>(&local_408);
            if ((pFVar53->Data).ArrayNum == 0) {
              pwVar61 = L"";
            }
            else {
              pwVar61 = (wchar_t *)(pFVar53->Data).AllocatorInstance.Data;
            }
            pFVar53 = GetFullNameForCastLogError<UObject_const_>
                                (&local_3f8,*(UObject **)(lVar54 + 0x20));
            if ((pFVar53->Data).ArrayNum != 0) {
              pwVar69 = (wchar_t *)(pFVar53->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar69,pwVar61);
          }
          (**(code **)(*plVar50 + 0x60))(plVar50,&local_5d8);
        }
        pFVar29 = local_648;
        fVar79 = local_648->SkewAmount;
        if (fVar22 <= local_648->SkewAmount) {
          fVar79 = fVar22;
        }
        if (fVar79 <= fVar25) {
          fVar79 = fVar25;
        }
        pTVar51 = ::operator_new(0x38);
        if (pTVar51 == (TReferenceControllerBase<1> *)0x0) {
          local_5c8.Object = pFVar23;
          local_5c8.SharedReferenceCount.ReferenceController = pTVar24;
        }
        else {
          pTVar51->SharedReferenceCount = (atomic<int>)0x1;
          pTVar51->WeakReferenceCount = (atomic<int>)0x1;
          pTVar51->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFShapedGlyphFaceData___00_SharedPointerInternals__6B_
          ;
          local_458.WeakReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)((longlong)FVar72 + 0x18);
          local_458.Object = *(FFreeTypeFace **)((longlong)FVar72 + 0x10);
          fVar2 = pFVar29->Size;
          if (local_458.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             ) {
            LOCK();
            (local_458.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_458.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          FShapedGlyphFaceData::FShapedGlyphFaceData
                    ((FShapedGlyphFaceData *)(pTVar51 + 1),&local_458,uVar73,fVar2,fVar80,fVar79,
                     (EFontRasterizationMode)local_5d8,local_5d8._4_2_);
          local_5c8.Object = (FShapedGlyphFaceData *)(pTVar51 + 1);
          local_5c8.SharedReferenceCount.ReferenceController = pTVar51;
          if ((local_5c8.Object == (FShapedGlyphFaceData *)0x0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar34)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        fVar79 = pFVar29->Size;
        if (fVar80 <= 0.0) {
          fVar80 = 0.0;
        }
        if (fVar79 <= 0.0) {
          fVar79 = 0.0;
        }
        iVar68 = FT_MulFix(((int)(fVar79 * fVar26) * -0x60 + 0x24) / 0x48,(int)(fVar80 * fVar1));
        pFVar8 = pFVar28->FTCacheDirectory;
        uVar63 = iVar68 + 0x20 >> 6;
        if ((*(longlong *)((longlong)FVar72 + 0x10) == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar34)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FFreeTypeCacheDirectory::GetKerningCache
                  (pFVar8,&local_4b0,(FT_FaceRec_ *)**(undefined8 **)((longlong)FVar72 + 0x10),0,
                   uVar63);
        pFVar8 = pFVar28->FTCacheDirectory;
        if ((*(longlong *)((longlong)FVar72 + 0x10) == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar34)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FFreeTypeCacheDirectory::GetAdvanceCache
                  (pFVar8,&local_448,(FT_FaceRec_ *)**(undefined8 **)((longlong)FVar72 + 0x10),
                   uVar73,uVar63);
        uVar45 = (ulonglong)(int)*(uint *)((longlong)FVar72 + 0x30);
        FVar71 = *(FName *)((longlong)FVar72 + 0x28);
        local_5cc = *(uint *)((longlong)FVar72 + 0x30);
        local_4c8 = (FName)((longlong)FVar71 + uVar45 * 0xc);
        while( true ) {
          FVar59 = local_4c8;
          local_640 = FVar71;
          if (*(int *)((longlong)FVar72 + 0x30) != (int)uVar45) {
            local_683[0] = 0;
            `TCheckedPointerIterator<`anonymous_namespace'::FHarfBuzzTextSequenceEntry::FSubSequenceEntry_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_683);
          }
          pTVar77 = local_668;
          FVar75 = local_678;
          if (FVar71 == FVar59) break;
          uVar73 = local_668->ArrayNum;
          local_5d0 = uVar73;
          hb_buffer_set_cluster_level(local_678,0);
          bVar18 = false;
          bVar34 = false;
          hb_buffer_set_direction(FVar75,(param_6 != LeftToRight) + '\x04');
          hb_buffer_set_script(FVar75,*(int *)((longlong)FVar71 + 8));
          hb_buffer_add_utf16(FVar75,local_618,local_578 & 0xffffffff,*(int *)FVar71);
          FVar52 = StatPtr_STAT_HarfBuzzNativeShape;
          if (StatPtr_STAT_HarfBuzzNativeShape ==
              (FThreadSafeStaticStat<FStat_STAT_HarfBuzzNativeShape>)0x0) {
            pFVar43 = ::FName::FName(local_418,"STAT_HarfBuzzNativeShape");
            FVar52 = (FThreadSafeStaticStat<FStat_STAT_HarfBuzzNativeShape>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HarfBuzzNativeShape,
                                *pFVar43,L"HarfBuzz Shape","STATGROUP_Slate","STATCAT_Advanced",
                                L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
          }
          FVar59 = *(FName *)FVar52;
          local_4f8.ComparisonIndex.Value = 0;
          local_4f8.Number = 0;
          FVar56 = FVar59.ComparisonIndex.Value;
          uVar63 = FVar59.Number;
          if ((FVar56.Value == 0) && (uVar63 == 0)) {
LAB_14249f023:
            bVar19 = false;
            FVar59 = local_4f8;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_5e4.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_5e4._s_0,(char *)*(FName *)((longlong)FVar52 + 0x10));
              bVar18 = false;
              bVar34 = true;
              if (-1 < CpuChannel->Enabled) {
                local_570.ComparisonIndex.Value = FVar56.Value;
                local_570.Number = uVar63;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_570,(wchar_t *)*(FName *)((longlong)FVar52 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                           ,0x300);
                bVar18 = true;
                bVar34 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_14249f023;
            local_5a8 = FVar56.Value;
            uStack_5a4 = uVar63;
            local_4f8 = FVar59;
            FThreadStats::AddMessage(FVar59,CycleScopeStart);
            bVar18 = false;
            bVar19 = true;
          }
          FVar75 = local_678;
          hb_shape(local_5a0,local_678,&local_118,2);
          if (bVar34) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar18) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar19) {
            FThreadStats::AddMessage(FVar59,CycleScopeEnd);
          }
          local_654 = 0;
          lVar54 = hb_buffer_get_glyph_infos(FVar75,&local_654);
          local_630 = lVar54;
          local_4d8 = hb_buffer_get_glyph_positions(FVar75,&local_654);
          uVar63 = pTVar77->ArrayNum + local_654;
          if ((int)uVar63 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar63);
          }
          piVar67 = &pTVar77->ArrayMax;
          local_660 = piVar67;
          if (*piVar67 < (int)uVar63) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa8,8,uVar63,&pTVar77->AllocatorInstance,pTVar77->ArrayNum,piVar67);
          }
          lVar46 = local_4d8;
          if (local_654 != 0) {
            uVar63 = 0;
            do {
              uVar45 = (ulonglong)uVar63;
              local_67c = *(int *)(lVar54 + 8 + uVar45 * 0x14);
              wVar4 = local_618[local_67c];
              bVar34 = InsertSubstituteGlyphs
                                 (local_618,local_67c,&local_5c8,&local_448,pTVar77,(short)local_680
                                 );
              if (!bVar34) {
                uVar73 = pTVar77->ArrayNum;
                if (uVar73 == *piVar67) {
                  uVar73 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x8a8,&local_668->AllocatorInstance,piVar67);
                }
                local_668->ArrayNum = uVar73 + 1;
                DefaultConstructItems<FShapedGlyphEntry,int>
                          ((local_668->AllocatorInstance).Data + (longlong)(int)uVar73 * 0xa8,1);
                uVar39 = 0;
                if ((int)uVar73 < local_668->ArrayNum) {
                  uVar39 = ~uVar73 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar34)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                local_4e8 = local_5c8.Object;
                FStack_4e0.ReferenceController = local_5c8.SharedReferenceCount.ReferenceController;
                pFVar64 = (local_668->AllocatorInstance).Data + (longlong)(int)uVar73 * 0xa8;
                if (local_5c8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_5c8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                if (pFVar64 != (FScriptContainerElement *)&local_4e8) {
                  *(FShapedGlyphFaceData **)pFVar64 = local_5c8.Object;
                  local_4e8 = (FShapedGlyphFaceData *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            ((FSharedReferencer<1> *)(pFVar64 + 8),&FStack_4e0);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FStack_4e0.ReferenceController);
                *(undefined4 *)(pFVar64 + 0x10) = *(undefined4 *)(local_630 + uVar45 * 0x14);
                *(int *)(pFVar64 + 0x14) = local_67c;
                *(short *)(pFVar64 + 0x18) = (short)(*(int *)(lVar46 + uVar45 * 0x14) + 0x20 >> 6);
                *(short *)(pFVar64 + 0x1a) =
                     -(short)(*(int *)(lVar46 + 4 + uVar45 * 0x14) + 0x20 >> 6);
                *(short *)(pFVar64 + 0x1c) =
                     (short)(*(int *)(lVar46 + 8 + uVar45 * 0x14) + 0x20 >> 6);
                iVar68 = *(int *)(lVar46 + 0xc + uVar45 * 0x14);
                *(undefined2 *)(pFVar64 + 0x20) = 0;
                pFVar64[0x22] = (FScriptContainerElement)0x0;
                *(short *)(pFVar64 + 0x1e) = -(short)(iVar68 + 0x20 >> 6);
                pFVar64[0x23] = (FScriptContainerElement)param_6;
                bVar34 = FTextChar::IsWhitespace((uint)(ushort)wVar4);
                pTVar77 = local_668;
                if ((bVar34) ||
                   ((uVar65 = wVar4 + L'\xdff7', uVar65 < 0x27 &&
                    ((0x4000000005U >> ((ulonglong)uVar65 & 0x3f) & 1) != 0)))) {
                  FVar36 = (FScriptContainerElement)0x0;
                }
                else {
                  FVar36 = (FScriptContainerElement)0x1;
                }
                pFVar64[0x24] = FVar36;
                piVar67 = local_660;
                lVar54 = local_630;
                if ((0 < (int)uVar73) && (local_688 != 0)) {
                  uVar73 = uVar73 - 1;
                  uVar39 = 0;
                  if ((int)uVar73 < local_668->ArrayNum) {
                    uVar39 = ~uVar73 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar34)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pFVar9 = (pTVar77->AllocatorInstance).Data;
                  if ((short)local_680 != 0) {
                    *(short *)(pFVar9 + (longlong)(int)uVar73 * 0xa8 + 0x18) =
                         *(short *)(pFVar9 + (longlong)(int)uVar73 * 0xa8 + 0x18) + (short)local_680
                    ;
                  }
                  piVar67 = local_660;
                  lVar54 = local_630;
                  if ((pFVar64[0x24] != (FScriptContainerElement)0x0) &&
                     (local_4b0.Object != (FFreeTypeKerningCache *)0x0)) {
                    if ((local_4b0.Object == (FFreeTypeKerningCache *)0x0) &&
                       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar34)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    bVar34 = FFreeTypeKerningCache::FindOrCache
                                       (local_4b0.Object,
                                        *(uint *)(pFVar9 + (longlong)(int)uVar73 * 0xa8 + 0x10),
                                        *(uint *)(pFVar64 + 0x10),&local_4d0);
                    piVar67 = local_660;
                    lVar54 = local_630;
                    if (bVar34) {
                      pFVar9[(longlong)(int)uVar73 * 0xa8 + 0x20] = SUB41(local_4d0.x + 0x20 >> 6,0)
                      ;
                    }
                  }
                }
              }
              uVar63 = uVar63 + 1;
              FVar57 = local_628;
              FVar71 = local_640;
              FVar75 = local_678;
              uVar73 = local_5d0;
            } while (uVar63 < local_654);
          }
          hb_buffer_t::hb_buffer_clear_contents((hb_buffer_t *)FVar75);
          iVar68 = pTVar77->ArrayNum;
          if (0 < (int)(iVar68 - uVar73)) {
            if (param_6 == LeftToRight) {
              if ((int)uVar73 < iVar68) {
                lVar54 = (longlong)(int)uVar73;
                do {
                  uVar63 = 0;
                  if ((int)uVar73 < iVar68) {
                    uVar63 = ~uVar73 >> 0x1f;
                  }
                  if ((uVar63 == 0) &&
                     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar34)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pTVar27 = local_668;
                  pFVar64 = (pTVar77->AllocatorInstance).Data;
                  lVar46 = lVar54 * 0xa8;
                  uVar63 = 0;
                  if ((int)uVar73 < local_668->ArrayNum) {
                    uVar63 = ~uVar73 >> 0x1f;
                  }
                  if ((uVar63 == 0) &&
                     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar34)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  iVar68 = pTVar27->ArrayNum;
                  uVar73 = uVar73 + 1;
                  pFVar9 = (pTVar27->AllocatorInstance).Data;
                  lVar54 = lVar54 + 1;
                  if ((int)uVar73 < iVar68) {
                    lVar60 = lVar54 * 0xa8;
                    do {
                      uVar63 = 0;
                      if ((int)uVar73 < iVar68) {
                        uVar63 = ~uVar73 >> 0x1f;
                      }
                      if ((uVar63 == 0) &&
                         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar34)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      if (*(int *)(pFVar9 + lVar46 + 0x14) !=
                          *(int *)((pTVar27->AllocatorInstance).Data + lVar60 + 0x14)) break;
                      iVar68 = pTVar27->ArrayNum;
                      uVar73 = uVar73 + 1;
                      lVar54 = lVar54 + 1;
                      lVar60 = lVar60 + 0xa8;
                    } while ((int)uVar73 < iVar68);
                  }
                  if ((int)uVar73 < pTVar27->ArrayNum) {
                    if (((int)uVar73 < 0) &&
                       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar34)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    iVar37 = *(int *)(pFVar64 + lVar46 + 0x14);
                    iVar68 = *(int *)((pTVar27->AllocatorInstance).Data + lVar54 * 0xa8 + 0x14);
                    if ((iVar68 < iVar37) &&
                       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                           ("TextStartIndex <= TextEndIndex",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                                            ,0x341,L""), bVar34)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    if ((pFVar64[lVar46 + 0x21] == (FScriptContainerElement)0x0) &&
                       (pFVar64[lVar46 + 0x22] == (FScriptContainerElement)0x0)) {
                      if ((0xff < iVar68 - iVar37) &&
                         (bVar34 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<_8098064431772073147>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                                              ,0x345,
                                              "TextEndIndex - TextStartIndex <= std::numeric_limits<uint8>::max()"
                                             ), bVar34)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      pFVar28 = local_650;
                      FVar36 = (FScriptContainerElement)((char)iVar68 - (char)iVar37);
                      pFVar64[lVar46 + 0x21] = FVar36;
                      if (FVar36 != (FScriptContainerElement)0x0) {
                        iVar37 = iVar37 - local_634;
                        iVar68 = iVar68 - local_634;
                        pIVar6 = (local_650->GraphemeBreakIterator).Object;
                        (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6,iVar37);
                        iVar38 = (**(code **)((longlong)*(pFVar28->GraphemeBreakIterator).Object +
                                             0x70))();
                        if (iVar38 == iVar37) {
                          pIVar6 = (pFVar28->GraphemeBreakIterator).Object;
                          iVar37 = (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6,iVar37);
                          if (iVar37 != -1) {
                            do {
                              pFVar64[lVar46 + 0x22] =
                                   (FScriptContainerElement)((char)pFVar64[lVar46 + 0x22] + '\x01');
                              bVar34 = iVar37 == iVar68;
                              if (iVar68 <= iVar37) goto LAB_14249f79c;
                              iVar37 = (**(code **)((longlong)
                                                    *(pFVar28->GraphemeBreakIterator).Object + 0x78)
                                       )();
                            } while (iVar37 != -1);
                            iVar37 = -1;
                          }
LAB_14249f799:
                          bVar34 = iVar37 == iVar68;
LAB_14249f79c:
                          if (!bVar34) {
                            pFVar64[lVar46 + 0x22] = (FScriptContainerElement)0x0;
                          }
                        }
                      }
                    }
                  }
                  else {
                    iVar37 = *(int *)(pFVar64 + lVar46 + 0x14);
                    iVar68 = *(int *)((longlong)local_640 + 4) + *(int *)local_640;
                    if ((iVar68 < iVar37) &&
                       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                           ("TextStartIndex <= TextEndIndex",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                                            ,0x341,L""), bVar34)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    if ((pFVar64[lVar46 + 0x21] == (FScriptContainerElement)0x0) &&
                       (pFVar64[lVar46 + 0x22] == (FScriptContainerElement)0x0)) {
                      if ((0xff < iVar68 - iVar37) &&
                         (bVar34 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<_8098064431772073147>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                                              ,0x345,
                                              "TextEndIndex - TextStartIndex <= std::numeric_limits<uint8>::max()"
                                             ), bVar34)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      pFVar28 = local_650;
                      FVar36 = (FScriptContainerElement)((char)iVar68 - (char)iVar37);
                      pFVar64[lVar46 + 0x21] = FVar36;
                      if (FVar36 != (FScriptContainerElement)0x0) {
                        iVar37 = iVar37 - local_634;
                        iVar68 = iVar68 - local_634;
                        pIVar6 = (local_650->GraphemeBreakIterator).Object;
                        (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6,iVar37);
                        iVar38 = (**(code **)((longlong)*(pFVar28->GraphemeBreakIterator).Object +
                                             0x70))();
                        if (iVar38 == iVar37) {
                          pIVar6 = (pFVar28->GraphemeBreakIterator).Object;
                          iVar37 = (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6,iVar37);
                          while (iVar37 != -1) {
                            pFVar64[lVar46 + 0x22] =
                                 (FScriptContainerElement)((char)pFVar64[lVar46 + 0x22] + '\x01');
                            bVar34 = iVar37 == iVar68;
                            if (iVar68 <= iVar37) goto LAB_14249f79c;
                            iVar37 = (**(code **)((longlong)*(pFVar28->GraphemeBreakIterator).Object
                                                 + 0x78))();
                          }
                          goto LAB_14249f799;
                        }
                      }
                    }
                  }
                  iVar68 = local_668->ArrayNum;
                  FVar57 = local_628;
                  FVar71 = local_640;
                  pTVar77 = local_668;
                } while ((int)uVar73 < iVar68);
              }
            }
            else {
              iVar37 = *(int *)((longlong)FVar71 + 4) + *(int *)FVar71;
              if ((int)uVar73 < iVar68) {
                local_660 = (int *)(longlong)(int)uVar73;
                do {
                  piVar67 = local_660;
                  uVar63 = 0;
                  if ((int)uVar73 < iVar68) {
                    uVar63 = ~uVar73 >> 0x1f;
                  }
                  if ((uVar63 == 0) &&
                     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar34)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pFVar64 = (pTVar77->AllocatorInstance).Data;
                  lVar54 = (longlong)piVar67 * 0xa8;
                  iVar68 = *(int *)(pFVar64 + lVar54 + 0x14);
                  if ((iVar37 < iVar68) &&
                     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                         ("TextStartIndex <= TextEndIndex",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                                          ,0x341,L""), bVar34)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  if ((pFVar64[lVar54 + 0x21] == (FScriptContainerElement)0x0) &&
                     (pFVar64[lVar54 + 0x22] == (FScriptContainerElement)0x0)) {
                    if ((0xff < iVar37 - iVar68) &&
                       (bVar34 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<_8098064431772073147>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                                            ,0x345,
                                            "TextEndIndex - TextStartIndex <= std::numeric_limits<uint8>::max()"
                                           ), bVar34)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    pFVar28 = local_650;
                    FVar36 = (FScriptContainerElement)((char)iVar37 - (char)iVar68);
                    pFVar64[lVar54 + 0x21] = FVar36;
                    if (FVar36 != (FScriptContainerElement)0x0) {
                      iVar68 = iVar68 - local_634;
                      iVar37 = iVar37 - local_634;
                      pIVar6 = (local_650->GraphemeBreakIterator).Object;
                      (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6,iVar68);
                      iVar38 = (**(code **)((longlong)*(pFVar28->GraphemeBreakIterator).Object +
                                           0x70))();
                      if (iVar38 == iVar68) {
                        pIVar6 = (pFVar28->GraphemeBreakIterator).Object;
                        iVar68 = (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6,iVar68);
                        while (iVar68 != -1) {
                          pFVar64[lVar54 + 0x22] =
                               (FScriptContainerElement)((char)pFVar64[lVar54 + 0x22] + '\x01');
                          if (iVar37 <= iVar68) goto LAB_14249f91a;
                          iVar68 = (**(code **)((longlong)*(pFVar28->GraphemeBreakIterator).Object +
                                               0x78))();
                        }
                        iVar68 = -1;
LAB_14249f91a:
                        if (iVar68 != iVar37) {
                          pFVar64[lVar54 + 0x22] = (FScriptContainerElement)0x0;
                        }
                      }
                    }
                  }
                  piVar67 = local_660;
                  pTVar77 = local_668;
                  uVar63 = 0;
                  if ((int)uVar73 < local_668->ArrayNum) {
                    uVar63 = ~uVar73 >> 0x1f;
                  }
                  if ((uVar63 == 0) &&
                     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar34)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  iVar68 = pTVar77->ArrayNum;
                  pFVar9 = (pTVar77->AllocatorInstance).Data;
                  uVar73 = uVar73 + 1;
                  piVar70 = (int *)((longlong)piVar67 + 1);
                  if ((int)uVar73 < iVar68) {
                    lVar46 = (longlong)piVar70 * 0xa8;
                    local_660 = piVar70;
                    do {
                      uVar63 = 0;
                      if ((int)uVar73 < iVar68) {
                        uVar63 = ~uVar73 >> 0x1f;
                      }
                      if ((uVar63 == 0) &&
                         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar34)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      if (*(int *)(pFVar9 + (longlong)piVar67 * 0xa8 + 0x14) !=
                          *(int *)((pTVar77->AllocatorInstance).Data + lVar46 + 0x14)) break;
                      iVar68 = pTVar77->ArrayNum;
                      uVar73 = uVar73 + 1;
                      piVar70 = (int *)((longlong)piVar70 + 1);
                      lVar46 = lVar46 + 0xa8;
                    } while ((int)uVar73 < iVar68);
                  }
                  local_660 = piVar70;
                  iVar68 = pTVar77->ArrayNum;
                  iVar37 = *(int *)(pFVar64 + lVar54 + 0x14);
                  FVar57 = local_628;
                  FVar71 = local_640;
                } while ((int)uVar73 < iVar68);
              }
            }
          }
          FVar71 = (FName)((longlong)FVar71 + 0xc);
          uVar45 = (ulonglong)local_5cc;
          FVar72 = local_590;
        }
        hb_font_destroy(local_5a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_448.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4b0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5c8.SharedReferenceCount.ReferenceController);
        FVar58 = local_598;
      }
    }
    FVar72 = (ForElementType<_anonymous_namespace_::FHarfBuzzTextSequenceEntry>)
             ((longlong)FVar72 + 0x38);
    uVar45 = (ulonglong)local_5f0;
  } while( true );
}

// PerformKerningOnlyTextShaping @ 14249fbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateTextShaper::PerformKerningOnlyTextShaping
          (FSlateTextShaper *this,wchar_t *param_1,int param_2,int param_3,FSlateFontInfo *param_4,
          float param_5,TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *param_6)

{
  float fVar1;
  wchar_t wVar2;
  int iVar3;
  int iVar4;
  FT_FaceRec_ *pFVar5;
  UObjectBaseUtility *this_00;
  FFreeTypeCacheDirectory *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  FShapedGlyphFaceData *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  float fVar17;
  float fVar18;
  FSlateFontInfo *pFVar19;
  FSlateTextShaper *pFVar20;
  FSharedReferencer<1> FVar21;
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *pTVar22;
  FSharedReferencer<1> FVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  EFontFallback EVar27;
  EFontHinting EVar28;
  short sVar29;
  int iVar30;
  uint uVar31;
  FName *pFVar32;
  FThreadSafeStaticStat<FStat_STAT_PerformKerningOnlyTextShaping> FVar33;
  FThreadSafeStaticStat<FStat_STAT_SplitByFontFace> FVar34;
  FFontData *pFVar35;
  FFreeTypeFaceGlyphData *pFVar36;
  longlong lVar37;
  FThreadSafeStaticStat<FStat_STAT_TextSequencesProcessing> FVar38;
  UClass *pUVar39;
  longlong *plVar40;
  TReferenceControllerBase<1> *pTVar41;
  FString *pFVar42;
  FScriptContainerElement FVar43;
  FSlateFontRenderer *this_01;
  ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> FVar44;
  FName FVar45;
  wchar_t *pwVar46;
  wchar32 wVar47;
  FScriptContainerElement *pFVar48;
  FName FVar49;
  wchar_t *pwVar50;
  uint uVar51;
  ulonglong uVar52;
  undefined2 uVar53;
  FName FVar54;
  short sVar55;
  FFreeTypeFace *pFVar56;
  uint uVar57;
  bool bVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auStackY_3f8 [32];
  undefined1 local_395 [5];
  FName local_390;
  float local_388;
  int local_384;
  int local_380;
  int local_37c;
  FSlateFontInfo *local_378;
  wchar_t local_370;
  float local_36c;
  FSlateTextShaper *local_368;
  FName local_360;
  FName local_358;
  int local_350;
  long local_34c;
  FColor_u_0 local_348;
  FColor_u_0 local_344;
  FColor_u_0 local_340;
  int local_33c;
  uint local_338;
  FFontData *local_330;
  TSharedRef<FShapedGlyphFaceData,1> local_328;
  FFreeTypeFace *local_318;
  FSharedReferencer<1> FStack_310;
  FName local_308;
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *local_300;
  wchar_t *local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FFontData **local_2d8;
  ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> local_2d0;
  int *local_2c8;
  int *local_2c0;
  FFreeTypeFace **local_2b8;
  float *local_2b0;
  FFreeTypeFaceGlyphData local_2a8;
  FName local_288;
  FName local_278;
  FName local_268;
  FShapedGlyphFaceData *local_258;
  FSharedReferencer<1> FStack_250;
  FT_Vector_ local_248;
  ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> local_240;
  FFreeTypeFace *local_238;
  FSharedReferencer<1> FStack_230;
  TSharedRef<FFreeTypeAdvanceCache,1> local_228;
  TSharedPtr<FFreeTypeKerningCache,1> local_218;
  TWeakPtr<FFreeTypeFace,1> local_208;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FString local_1e0;
  FString local_1d0;
  FFreeTypeFaceGlyphData local_1c0;
  undefined1 local_1a0 [160];
  ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry> local_100;
  uint local_f8;
  uint local_f4;
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_300 = param_6;
  local_378 = param_4;
  FVar33 = StatPtr_STAT_PerformKerningOnlyTextShaping;
  local_380 = param_3;
  local_368 = this;
  local_2f8 = param_1;
  if (StatPtr_STAT_PerformKerningOnlyTextShaping ==
      (FThreadSafeStaticStat<FStat_STAT_PerformKerningOnlyTextShaping>)0x0) {
    pFVar32 = ::FName::FName(&local_1f8,"STAT_PerformKerningOnlyTextShaping");
    FVar33 = (FThreadSafeStaticStat<FStat_STAT_PerformKerningOnlyTextShaping>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PerformKerningOnlyTextShaping,
                        *pFVar32,L"Kerning Only Text Shaping","STATGROUP_Slate","STATCAT_Advanced",
                        L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar10 = false;
  bVar12 = false;
  local_288.ComparisonIndex.Value = 0;
  local_288.Number = 0;
  FVar49 = *(FName *)FVar33;
  bVar25 = false;
  bVar9 = false;
  if ((FVar49.ComparisonIndex.Value.Value == 0) && (FVar49.Number == 0)) {
LAB_14249fd80:
    bVar12 = bVar9;
    bVar10 = bVar25;
    bVar25 = false;
    local_358 = local_288;
    FVar49 = local_288;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_348.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_348._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
      bVar10 = false;
      bVar12 = true;
      bVar25 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2e8.ComparisonIndex.Value = FVar49.ComparisonIndex.Value.Value;
        local_2e8.Number = FVar49.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2e8,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                   ,0x152);
        bVar10 = true;
        bVar12 = true;
        bVar25 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14249fd80;
    local_358 = FVar49;
    FThreadStats::AddMessage(FVar49,CycleScopeStart);
    bVar25 = true;
  }
  local_100 = (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)0x0;
  local_f8 = 0;
  local_f4 = 4;
  FVar34 = StatPtr_STAT_SplitByFontFace;
  if (StatPtr_STAT_SplitByFontFace == (FThreadSafeStaticStat<FStat_STAT_SplitByFontFace>)0x0) {
    pFVar32 = ::FName::FName(&local_1f0,"STAT_SplitByFontFace");
    FVar34 = (FThreadSafeStaticStat<FStat_STAT_SplitByFontFace>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SplitByFontFace,*pFVar32,
                        L"Split By FontFace","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  bVar9 = false;
  bVar11 = false;
  local_278.ComparisonIndex.Value = 0;
  local_278.Number = 0;
  FVar45 = *(FName *)FVar34;
  bVar24 = false;
  bVar26 = false;
  if ((FVar45.ComparisonIndex.Value.Value == 0) && (FVar45.Number == 0)) {
LAB_14249fec7:
    bVar11 = bVar26;
    bVar9 = bVar24;
    bVar24 = false;
    local_390 = local_278;
    FVar45 = local_278;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_344.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_344._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
      bVar9 = false;
      bVar11 = true;
      bVar24 = false;
      bVar26 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2e0.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
        local_2e0.Number = FVar45.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2e0,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                   ,0x159);
        bVar9 = true;
        bVar11 = true;
        bVar24 = true;
        bVar26 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14249fec7;
    local_390 = FVar45;
    local_360 = FVar45;
    FThreadStats::AddMessage(FVar45,CycleScopeStart);
    bVar24 = true;
  }
  fVar13 = __real_3f800000;
  local_2d8 = &local_330;
  local_2c8 = &local_350;
  local_2c0 = &local_384;
  local_2b0 = &local_36c;
  local_330 = (FFontData *)0x0;
  local_37c = param_3 + param_2;
  local_318 = (FFreeTypeFace *)0x0;
  FStack_310.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_36c = 1.0;
  local_384 = param_2;
  local_350 = param_2;
  local_2d0 = (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)local_1a0;
  local_2b8 = &local_318;
  if (param_2 < local_37c) {
    do {
      wVar2 = local_2f8[local_384];
      wVar47 = (wchar32)(ushort)wVar2;
      bVar26 = FTextChar::IsWhitespace(wVar47);
      pFVar20 = local_368;
      pFVar19 = local_378;
      if ((bVar26) ||
         (((ushort)(wVar2 + L'\xdff7') < 0x27 &&
          ((0x4000000005U >> ((ulonglong)(ushort)(wVar2 + L'\xdff7') & 0x3f) & 1) != 0)))) {
        bVar26 = true;
        local_388 = 1.0;
        pFVar35 = FCompositeFontCache::GetFontDataForCodepoint
                            (local_368->CompositeFontCache,local_378,wVar47,&local_388);
        this_01 = pFVar20->FontRenderer;
        EVar27 = FF_NoFallback;
      }
      else {
        bVar26 = false;
        local_388 = 1.0;
        pFVar35 = FCompositeFontCache::GetFontDataForCodepoint
                            (local_368->CompositeFontCache,local_378,(uint)(ushort)wVar2,&local_388)
        ;
        EVar27 = pFVar19->FontFallback;
        this_01 = local_368->FontRenderer;
      }
      FSlateFontRenderer::GetFontFaceForCodepoint(this_01,&local_2a8,pFVar35,wVar47,EVar27);
      pFVar56 = local_2a8.FaceAndMemory.Object;
      pFVar19 = local_378;
      bVar58 = false;
      if (local_2a8.FaceAndMemory.Object == (FFreeTypeFace *)0x0) {
        wVar47 = L'�';
        if (bVar26) {
          wVar47 = L' ';
        }
        pFVar35 = FCompositeFontCache::GetFontDataForCodepoint
                            (local_368->CompositeFontCache,local_378,wVar47,&local_388);
        pFVar36 = FSlateFontRenderer::GetFontFaceForCodepoint
                            (local_368->FontRenderer,&local_1c0,pFVar35,wVar47,pFVar19->FontFallback
                            );
        if (&local_2a8 != pFVar36) {
          local_2a8.FaceAndMemory.Object = (pFVar36->FaceAndMemory).Object;
          (pFVar36->FaceAndMemory).Object = (FFreeTypeFace *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_2a8.FaceAndMemory.SharedReferenceCount,
                     &(pFVar36->FaceAndMemory).SharedReferenceCount);
          pFVar56 = local_2a8.FaceAndMemory.Object;
        }
        local_2a8.GlyphFlags = pFVar36->GlyphFlags;
        local_2a8.GlyphIndex = pFVar36->GlyphIndex;
        local_2a8.CharFallbackLevel = pFVar36->CharFallbackLevel;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c0.FaceAndMemory.SharedReferenceCount.ReferenceController);
        bVar58 = pFVar56 == (FFreeTypeFace *)0x0;
      }
      if (pFVar56 != (FFreeTypeFace *)0x0) {
        if ((bVar58) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pFVar56->FTFace->face_flags & 1) == 0) {
          local_388 = fVar13;
        }
      }
      FVar23.ReferenceController = local_2a8.FaceAndMemory.SharedReferenceCount.ReferenceController;
      fVar14 = local_388;
      if ((((local_330 == (FFontData *)0x0) || (local_330 != pFVar35)) || (local_318 != pFVar56)) ||
         (local_36c != local_388)) {
        if (local_330 != (FFontData *)0x0) {
          iVar30 = *local_2c0;
          iVar3 = *local_2c8;
          if (local_f8 == local_f4) {
            local_f8 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>_>
                                 (0x828,(ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>
                                         *)local_1a0,(int *)&local_f4);
          }
          lVar37 = (longlong)(int)local_f8;
          FVar44 = (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)local_1a0;
          if (local_100 != (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)0x0
             ) {
            FVar44 = local_100;
          }
          fVar1 = *local_2b0;
          if (FStack_310.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_310.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_310.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          iVar4 = *local_2c8;
          local_f8 = local_f8 + 1;
          *(FFontData **)((uchar *)((longlong)FVar44 + 8) + lVar37 * 0x28) = local_330;
          *(float *)((uchar *)((longlong)FVar44 + 0x20) + lVar37 * 0x28) = fVar1;
          *(int *)((longlong)FVar44 + lVar37 * 0x28) = iVar4;
          *(int *)((uchar *)((longlong)FVar44 + 4) + lVar37 * 0x28) = iVar30 - iVar3;
          *(FFreeTypeFace **)((uchar *)((longlong)FVar44 + 0x10) + lVar37 * 0x28) = local_318;
          *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar44 + 0x18) + lVar37 * 0x28) =
               FStack_310.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_330 = (FFontData *)0x0;
          local_238 = (FFreeTypeFace *)0x0;
          FStack_230.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (&local_318 != &local_238) {
            local_318 = (FFreeTypeFace *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_310,&FStack_230);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_230.ReferenceController);
          *local_2b0 = 1.0;
        }
        FVar21.ReferenceController = FStack_310.ReferenceController;
        local_350 = local_384;
        if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar23.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FStack_310.ReferenceController = FVar23.ReferenceController;
        local_330 = pFVar35;
        local_318 = pFVar56;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar21.ReferenceController);
        local_36c = fVar14;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar23.ReferenceController);
      local_384 = local_384 + 1;
      FVar45 = local_390;
      FVar49 = local_358;
      param_3 = local_380;
    } while (local_384 < local_37c);
  }
  `FSlateTextShaper::PerformKerningOnlyTextShaping'::__l3::<lambda_1>::operator()(&local_2d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_310.ReferenceController);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar24) {
    FThreadStats::AddMessage(FVar45,CycleScopeEnd);
  }
  FVar38 = StatPtr_STAT_TextSequencesProcessing;
  if (StatPtr_STAT_TextSequencesProcessing ==
      (FThreadSafeStaticStat<FStat_STAT_TextSequencesProcessing>)0x0) {
    pFVar32 = ::FName::FName(&local_1e8,"STAT_TextSequencesProcessing");
    FVar38 = (FThreadSafeStaticStat<FStat_STAT_TextSequencesProcessing>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextSequencesProcessing,*pFVar32,
                        L"Text Sequences Processing","STATGROUP_Slate","STATCAT_Advanced",L"Slate",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar45 = *(FName *)FVar38;
  bVar9 = false;
  bVar11 = false;
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  bVar24 = false;
  bVar26 = false;
  if ((FVar45.ComparisonIndex.Value.Value != 0) || (FVar45.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_340.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_340._s_0,(char *)*(FName *)((longlong)FVar38 + 0x10));
      bVar9 = false;
      bVar11 = true;
      bVar24 = false;
      bVar26 = true;
      if (-1 < CpuChannel->Enabled) {
        local_308.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
        local_308.Number = FVar45.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_308,(wchar_t *)*(FName *)((longlong)FVar38 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                   ,0x19f);
        bVar9 = true;
        bVar11 = true;
        bVar24 = true;
        bVar26 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_390 = FVar45;
      local_2f0 = FVar45;
      FThreadStats::AddMessage(FVar45,CycleScopeStart);
      bVar24 = true;
      goto LAB_1424a0404;
    }
  }
  bVar11 = bVar26;
  bVar9 = bVar24;
  bVar24 = false;
  local_2f0 = local_268;
  FVar45 = local_268;
LAB_1424a0404:
  uVar51 = param_3 + local_300->ArrayNum;
  if ((int)uVar51 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar51);
  }
  if (local_300->ArrayMax < (int)uVar51) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,uVar51,&local_300->AllocatorInstance,local_300->ArrayNum,&local_300->ArrayMax)
    ;
  }
  fVar18 = __real_c2800000;
  fVar17 = __real_c0a00000;
  fVar1 = __real_46fffe00;
  pTVar16 = _UNK_150651568;
  pFVar15 = ___xmm_00000000000000000000000000000010;
  fVar14 = __real_40a00000;
  fVar13 = __real_3a83126f;
  uVar52 = (ulonglong)(int)local_f8;
  FVar54 = (FName)local_1a0;
  if (local_100 != (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)0x0) {
    FVar54 = (FName)local_100;
  }
  FVar44 = (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)
           ((longlong)FVar54 + uVar52 * 0x28);
  local_240 = FVar44;
  local_338 = local_f8;
  do {
    local_390 = FVar54;
    if (local_f8 != (uint)uVar52) {
      local_395[0] = 0;
      `TCheckedPointerIterator<`anonymous_namespace'::FKerningOnlyTextSequenceEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_395);
    }
    pFVar19 = local_378;
    if (FVar54 == (FName)FVar44) {
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar24) {
        FThreadStats::AddMessage(FVar45,CycleScopeEnd);
      }
      FVar44 = (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)local_1a0;
      if (local_100 != (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)0x0) {
        FVar44 = local_100;
      }
      DestructItems<_anonymous_namespace_::FKerningOnlyTextSequenceEntry,int>
                ((FKerningOnlyTextSequenceEntry *)FVar44,local_f8);
      if (local_100 != (ForElementType<_anonymous_namespace_::FKerningOnlyTextSequenceEntry>)0x0) {
        FMemory::Free((void *)local_100);
      }
      if (bVar12) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar25) {
        FThreadStats::AddMessage(FVar49,CycleScopeEnd);
      }
      return;
    }
    if (*(longlong **)((longlong)FVar54 + 0x10) != (longlong *)0x0) {
      if (((*(byte *)(**(longlong **)((longlong)FVar54 + 0x10) + 8) & 0x40) != 0) ||
         (bVar26 = false, local_378->LetterSpacing != 0)) {
        bVar26 = true;
      }
      uVar51 = (*(uint *)(**(longlong **)((longlong)FVar54 + 0x10) + 8) & 1) * 8 + 0x100000;
      if (EnableFontAntiAliasing == 0) {
LAB_1424a05af:
        uVar51 = uVar51 | 0x20020;
      }
      else {
        EVar28 = FFontData::GetHinting(*(FFontData **)((longlong)FVar54 + 8));
        if (EVar28 != Default) {
          if (EVar28 == Auto) {
            uVar51 = uVar51 | 0x20;
          }
          else if (EVar28 == AutoLight) {
            uVar51 = uVar51 | 0x10000;
          }
          else {
            if (EVar28 == Monochrome) goto LAB_1424a05af;
            if (EVar28 == None) {
              uVar51 = uVar51 | 0x8002;
            }
          }
        }
      }
      fVar61 = param_5 * *(float *)((longlong)FVar54 + 0x20);
      if (pFVar19->LetterSpacing == 0) {
        fVar60 = 0.0;
      }
      else {
        fVar60 = (float)pFVar19->LetterSpacing * fVar61 * pFVar19->Size * fVar13;
        if ((fVar1 < fVar60) &&
           (bVar58 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_8098064431772073551>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                                ,0x1b1,
                                "LetterSpacingScaledAsFloat <= std::numeric_limits<int16>::max()"),
           bVar58)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_37c = (int)fVar60;
      local_380 = 0xffff;
      if (pFVar19->bForceMonospaced != false) {
        if (pFVar19->MonospacedWidth == 0.0) {
          fVar60 = 0.0;
        }
        else {
          fVar60 = pFVar19->MonospacedWidth * pFVar19->Size * fVar61;
          if ((fVar1 < fVar60) &&
             (bVar58 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_8098064431772073543>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                                  ,0x1b9,
                                  "MonospacingScaledAsFloat <= std::numeric_limits<int16>::max()"),
             bVar58)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        local_380 = (int)fVar60;
      }
      fVar60 = pFVar19->Size;
      if ((*(longlong *)((longlong)FVar54 + 0x10) == 0) &&
         (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar58)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (fVar60 <= 0.0) {
        fVar60 = 0.0;
      }
      fVar59 = fVar61;
      if (fVar61 <= 0.0) {
        fVar59 = 0.0;
      }
      pFVar5 = (FT_FaceRec_ *)**(undefined8 **)((longlong)FVar54 + 0x10);
      fVar59 = fVar59 * __real_47800000;
      iVar30 = FT_MulFix(((int)(fVar60 * fVar18) * -0x60 + 0x24) / 0x48,(int)fVar59);
      FreeTypeUtils::ApplySizeAndScale(pFVar5,iVar30 + 0x20 >> 6);
      lVar37 = *(longlong *)((longlong)FVar54 + 8);
      this_00 = *(UObjectBaseUtility **)(lVar37 + 0x20);
      if ((this_00 == (UObjectBaseUtility *)0x0) || (bSlateSdfTextEnable == false)) {
        local_360.ComparisonIndex.Value = 0;
        local_360.Number = 0;
      }
      else {
        pUVar39 = UFontFaceInterface::StaticClass();
        plVar40 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar39);
        if (plVar40 == (longlong *)0x0) {
          pFVar42 = GetTypeName<IFontFaceInterface_const_>(&local_1e0);
          pwVar50 = L"";
          if ((pFVar42->Data).ArrayNum == 0) {
            pwVar46 = L"";
          }
          else {
            pwVar46 = (wchar_t *)(pFVar42->Data).AllocatorInstance.Data;
          }
          pFVar42 = GetFullNameForCastLogError<UObject_const_>
                              (&local_1d0,*(UObject **)(lVar37 + 0x20));
          if ((pFVar42->Data).ArrayNum != 0) {
            pwVar50 = (wchar_t *)(pFVar42->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar50,pwVar46);
        }
        (**(code **)(*plVar40 + 0x60))(plVar40,&local_360);
      }
      fVar60 = local_378->Size;
      if (fVar60 <= 0.0) {
        fVar60 = 0.0;
      }
      iVar30 = FT_MulFix(((int)(fVar60 * fVar18) * -0x60 + 0x24) / 0x48,(int)fVar59);
      pFVar19 = local_378;
      fVar60 = local_378->SkewAmount;
      if (fVar14 <= local_378->SkewAmount) {
        fVar60 = fVar14;
      }
      uVar57 = iVar30 + 0x20 >> 6;
      if (fVar60 <= fVar17) {
        fVar60 = fVar17;
      }
      pTVar41 = ::operator_new(0x38);
      if (pTVar41 == (TReferenceControllerBase<1> *)0x0) {
        local_328.Object = pFVar15;
        local_328.SharedReferenceCount.ReferenceController = pTVar16;
      }
      else {
        pTVar41->SharedReferenceCount = (atomic<int>)0x1;
        pTVar41->WeakReferenceCount = (atomic<int>)0x1;
        pTVar41->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFShapedGlyphFaceData___00_SharedPointerInternals__6B_
        ;
        local_208.WeakReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)((longlong)FVar54 + 0x18);
        local_208.Object = *(FFreeTypeFace **)((longlong)FVar54 + 0x10);
        fVar59 = pFVar19->Size;
        if (local_208.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_208.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_208.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        FShapedGlyphFaceData::FShapedGlyphFaceData
                  ((FShapedGlyphFaceData *)(pTVar41 + 1),&local_208,uVar51,fVar59,fVar61,fVar60,
                   (EFontRasterizationMode)local_360.ComparisonIndex.Value,(short)local_360.Number);
        local_328.SharedReferenceCount.ReferenceController = pTVar41;
        local_328.Object = (FShapedGlyphFaceData *)(pTVar41 + 1);
        if (((FShapedGlyphFaceData *)(pTVar41 + 1) == (FShapedGlyphFaceData *)0x0) &&
           (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar58)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar20 = local_368;
      pFVar6 = local_368->FTCacheDirectory;
      if ((*(longlong *)((longlong)FVar54 + 0x10) == 0) &&
         (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar58)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FFreeTypeCacheDirectory::GetKerningCache
                (pFVar6,&local_218,(FT_FaceRec_ *)**(undefined8 **)((longlong)FVar54 + 0x10),0,
                 uVar57);
      pFVar6 = pFVar20->FTCacheDirectory;
      if ((*(longlong *)((longlong)FVar54 + 0x10) == 0) &&
         (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar58)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FFreeTypeCacheDirectory::GetAdvanceCache
                (pFVar6,&local_228,(FT_FaceRec_ *)**(undefined8 **)((longlong)FVar54 + 0x10),uVar51,
                 uVar57);
      pTVar22 = local_300;
      iVar30 = 0;
      if (0 < *(int *)((longlong)FVar54 + 4)) {
        do {
          local_33c = *(int *)FVar54 + iVar30;
          wVar2 = local_2f8[local_33c];
          local_370 = wVar2;
          bVar58 = InsertSubstituteGlyphs
                             (local_2f8,local_33c,&local_328,&local_228,pTVar22,(short)local_37c);
          if (!bVar58) {
            if ((*(longlong *)((longlong)FVar54 + 0x10) == 0) &&
               (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar58)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar51 = FT_Get_Char_Index(**(undefined8 **)((longlong)FVar54 + 0x10),wVar2);
            if ((wVar2 != L'\0') && (uVar51 == 0)) {
              if ((*(longlong *)((longlong)FVar54 + 0x10) == 0) &&
                 (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar58)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar51 = FT_Get_Char_Index(**(undefined8 **)((longlong)FVar54 + 0x10),0xfffd);
            }
            local_34c = 0;
            sVar55 = 0;
            bVar58 = FFreeTypeAdvanceCache::FindOrCache(local_228.Object,uVar51,&local_34c);
            if (bVar58) {
              sVar55 = (short)((local_34c + 0x200 >> 10) + 0x20 >> 6);
            }
            uVar57 = pTVar22->ArrayNum;
            if (uVar57 == pTVar22->ArrayMax) {
              uVar57 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8a8,&pTVar22->AllocatorInstance,&pTVar22->ArrayMax);
            }
            pTVar22->ArrayNum = uVar57 + 1;
            DefaultConstructItems<FShapedGlyphEntry,int>
                      ((pTVar22->AllocatorInstance).Data + (longlong)(int)uVar57 * 0xa8,1);
            uVar31 = 0;
            if ((int)uVar57 < pTVar22->ArrayNum) {
              uVar31 = ~uVar57 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar58)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar48 = (pTVar22->AllocatorInstance).Data + (longlong)(int)uVar57 * 0xa8;
            local_258 = local_328.Object;
            FStack_250.ReferenceController = local_328.SharedReferenceCount.ReferenceController;
            if (local_328.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if (pFVar48 != (FScriptContainerElement *)&local_258) {
              *(FShapedGlyphFaceData **)pFVar48 = local_328.Object;
              local_258 = (FShapedGlyphFaceData *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(pFVar48 + 8),&FStack_250);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_250.ReferenceController);
            wVar2 = local_370;
            pFVar19 = local_378;
            *(int *)(pFVar48 + 0x14) = local_33c;
            *(uint *)(pFVar48 + 0x10) = uVar51;
            bVar58 = local_378->bForceMonospaced;
            uVar53 = 0;
            *(undefined2 *)(pFVar48 + 0x1a) = 0;
            sVar29 = (short)local_380;
            if (bVar58 == false) {
              sVar29 = sVar55;
            }
            *(short *)(pFVar48 + 0x18) = sVar29;
            if (local_378->bForceMonospaced != false) {
              uVar53 = (undefined2)(((int)(short)local_380 - (int)sVar55) / 2);
            }
            *(undefined2 *)(pFVar48 + 0x1c) = uVar53;
            *(undefined4 *)(pFVar48 + 0x1e) = 0x1000000;
            *(undefined2 *)(pFVar48 + 0x22) = 1;
            bVar58 = FTextChar::IsWhitespace((uint)(ushort)local_370);
            if ((bVar58) ||
               (((ushort)(wVar2 + L'\xdff7') < 0x27 &&
                ((0x4000000005U >> ((ulonglong)(ushort)(wVar2 + L'\xdff7') & 0x3f) & 1) != 0)))) {
              FVar43 = (FScriptContainerElement)0x0;
            }
            else {
              FVar43 = (FScriptContainerElement)0x1;
            }
            pFVar48[0x24] = FVar43;
            FVar54 = local_390;
            if ((0 < (int)uVar57) && (bVar26)) {
              uVar57 = uVar57 - 1;
              uVar51 = 0;
              if ((int)uVar57 < pTVar22->ArrayNum) {
                uVar51 = ~uVar57 >> 0x1f;
              }
              if ((uVar51 == 0) &&
                 (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar58)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar7 = (pTVar22->AllocatorInstance).Data;
              if ((short)local_37c != 0) {
                *(short *)(pFVar7 + (longlong)(int)uVar57 * 0xa8 + 0x18) =
                     *(short *)(pFVar7 + (longlong)(int)uVar57 * 0xa8 + 0x18) + (short)local_37c;
              }
              FVar54 = local_390;
              if (((pFVar48[0x24] != (FScriptContainerElement)0x0) &&
                  (pFVar19->bForceMonospaced == false)) &&
                 (local_218.Object != (FFreeTypeKerningCache *)0x0)) {
                if ((local_218.Object == (FFreeTypeKerningCache *)0x0) &&
                   (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar58)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                bVar58 = FFreeTypeKerningCache::FindOrCache
                                   (local_218.Object,
                                    *(uint *)(pFVar7 + (longlong)(int)uVar57 * 0xa8 + 0x10),
                                    *(uint *)(pFVar48 + 0x10),&local_248);
                FVar54 = local_390;
                if (bVar58) {
                  FVar43 = SUB41(local_248.x + 0x20 >> 6,0);
                  *(short *)(pFVar7 + (longlong)(int)uVar57 * 0xa8 + 0x18) =
                       *(short *)(pFVar7 + (longlong)(int)uVar57 * 0xa8 + 0x18) +
                       (short)(char)FVar43;
                  pFVar7[(longlong)(int)uVar57 * 0xa8 + 0x20] = FVar43;
                }
              }
            }
          }
          iVar30 = iVar30 + 1;
          FVar45 = local_2f0;
          FVar49 = local_358;
        } while (iVar30 < *(int *)((longlong)FVar54 + 4));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_228.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_328.SharedReferenceCount.ReferenceController);
      FVar44 = local_240;
    }
    uVar52 = (ulonglong)local_338;
    FVar54 = (FName)((longlong)FVar54 + 0x28);
  } while( true );
}

// PerformTextShaping @ 1424a0ea0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateTextShaper::PerformTextShaping
          (FSlateTextShaper *this,wchar_t *param_1,int param_2,int param_3,FSlateFontInfo *param_4,
          float param_5,ETextDirection param_6,ETextShapingMethod param_7,
          TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *param_8)

{
  code *pcVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  wchar_t *local_res10;
  int local_res18 [2];
  int local_res20 [2];
  ETextDirection *local_38;
  int *local_30;
  int *local_28;
  wchar_t **local_20;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if ((param_6 == Mixed) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTextDirection != TextBiDi::ETextDirection::Mixed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                         ,0x96,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = local_res20[0];
  iVar3 = local_res18[0];
  pwVar2 = local_res10;
  if (0 < local_res20[0]) {
    local_38 = &param_6;
    local_30 = local_res18;
    local_28 = local_res20;
    local_20 = &local_res10;
    if ((param_7 != FullShaping) &&
       ((param_7 != Auto ||
        (bVar5 = `FSlateTextShaper::PerformTextShaping'::__l12::<lambda_1>::operator()(&local_38),
        !bVar5)))) {
      PerformKerningOnlyTextShaping(this,pwVar2,iVar3,iVar4,param_4,param_5,param_8);
      return;
    }
    PerformHarfBuzzTextShaping(this,pwVar2,iVar3,iVar4,param_4,param_5,param_6,param_8);
  }
  return;
}

// ShapeBidirectionalText @ 1424a7540

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FSlateTextShaper::ShapeBidirectionalText
          (FSlateTextShaper *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          wchar_t *param_1,int param_2,int param_3,FSlateFontInfo *param_4,float param_5,
          ETextDirection param_6,ETextShapingMethod param_7)

{
  int *piVar1;
  FName FVar2;
  ITextBiDi *pIVar3;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar4;
  wchar_t *pwVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SlateShapeBidirectionalText> FVar8;
  uint uVar9;
  ulonglong uVar10;
  FColor_u_0 FVar11;
  undefined1 uVar12;
  int *piVar13;
  FColor_u_0 local_res8;
  uint uStackX_c;
  TSharedRef<FShapedGlyphSequence_const_,1> *local_res10;
  wchar_t *local_res18;
  int local_res20;
  undefined1 local_b8 [4];
  FSourceTextRange local_b4;
  FName local_a8;
  FName local_a0;
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> local_90;
  int *local_80;
  ulonglong local_78;
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> local_70 [3];
  
  FVar8 = StatPtr_STAT_SlateShapeBidirectionalText;
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  local_res20 = param_2;
  if (StatPtr_STAT_SlateShapeBidirectionalText ==
      (FThreadSafeStaticStat<FStat_STAT_SlateShapeBidirectionalText>)0x0) {
    pFVar7 = ::FName::FName(&local_a8,"STAT_SlateShapeBidirectionalText");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_SlateShapeBidirectionalText>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateShapeBidirectionalText,
                       *pFVar7,L"Shape Bidirectional Text","STATGROUP_Slate","STATCAT_Advanced",
                       L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar8;
  uVar12 = 0;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  local_res8.Bits = local_res8.Bits & 0xffffff00;
  FVar11.Bits = (uint)FVar2.ComparisonIndex.Value;
  uVar9 = FVar2.Number;
  if ((FVar11.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      uVar12 = 1;
      local_res8._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar11.Bits;
        uStackX_c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                   ,0x7d);
        uVar12 = 3;
        local_res8._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar11.Bits;
      uStackX_c = uVar9;
      local_a8 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      local_res8.Bits = CONCAT31(local_res8.Bits._1_3_,uVar12) | 4;
      goto LAB_1424a76a6;
    }
  }
  local_a8 = local_a0;
LAB_1424a76a6:
  pIVar3 = (this->TextBiDiDetection).Ptr;
  local_80 = (int *)0x0;
  local_78 = 0;
  (**(code **)((longlong)*pIVar3 + 8))(pIVar3,param_1,param_2,param_3,param_6,&local_80);
  pwVar5 = local_res18;
  iVar6 = (int)local_78;
  uVar10 = (ulonglong)(int)local_78;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = local_80 + uVar10 * 3;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  piVar13 = local_80;
  while( true ) {
    if ((int)uVar10 != iVar6) {
      `TCheckedPointerIterator<TextBiDi::FTextDirectionInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    pTVar4 = local_res10;
    if (piVar13 == piVar1) break;
    PerformTextShaping(this,pwVar5,*piVar13,piVar13[1],param_4,param_5,
                       *(ETextDirection *)(piVar13 + 2),param_7,&local_90);
    uVar10 = local_78 & 0xffffffff;
    piVar13 = piVar13 + 3;
  }
  local_b4.TextStart = local_res20;
  local_b4.TextLen = param_3;
  local_70[0].AllocatorInstance.Data = local_90.AllocatorInstance.Data;
  local_70[0].ArrayNum = local_90.ArrayNum;
  local_70[0].ArrayMax = local_90.ArrayMax;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  FinalizeTextShaping(this,local_res10,local_70,param_4,param_5,&local_b4);
  DestructItems<FShapedGlyphEntry,int>
            ((FShapedGlyphEntry *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
  FVar2 = local_a8;
  FVar11 = local_res8;
  if ((FShapedGlyphEntry *)local_90.AllocatorInstance.Data != (FShapedGlyphEntry *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (local_80 != (int *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FVar11.Bits & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((FVar11.Bits & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((FVar11.Bits & 4) != 0) {
    FThreadStats::AddMessage(FVar2,CycleScopeEnd);
  }
  return pTVar4;
}

// ShapeUnidirectionalText @ 1424a79d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FSlateTextShaper::ShapeUnidirectionalText
          (FSlateTextShaper *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          wchar_t *param_1,int param_2,int param_3,FSlateFontInfo *param_4,float param_5,
          ETextDirection param_6,ETextShapingMethod param_7)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SlateShapeUnidirectionalText> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res10;
  wchar_t *local_res18;
  FColor_u_0 local_res20 [2];
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> local_88;
  FName local_78;
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> local_68 [2];
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_SlateShapeUnidirectionalText;
  local_res18 = param_1;
  if (StatPtr_STAT_SlateShapeUnidirectionalText ==
      (FThreadSafeStaticStat<FStat_STAT_SlateShapeUnidirectionalText>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_88,"STAT_SlateShapeUnidirectionalText");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_SlateShapeUnidirectionalText>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateShapeUnidirectionalText,
                       *pFVar5,L"Shape Unidirectional Text","STATGROUP_Slate","STATCAT_Advanced",
                       L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar8.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateTextShaper.cpp"
                   ,0x8d);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar8.Value;
      local_res10.s.HighPart = uVar7;
      local_78 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_78.ComparisonIndex.Value;
      goto LAB_1424a7b1e;
    }
  }
  bVar3 = false;
  FVar9 = local_78;
LAB_1424a7b1e:
  local_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68[0].ArrayNum = 0;
  local_68[0].ArrayMax = 0;
  PerformTextShaping(this,local_res18,param_2,param_3,param_4,param_5,param_6,param_7,local_68);
  local_88.AllocatorInstance.Data = local_68[0].AllocatorInstance.Data;
  local_88.ArrayNum = local_68[0].ArrayNum;
  local_88.ArrayMax = local_68[0].ArrayMax;
  local_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68[0].ArrayNum = 0;
  local_68[0].ArrayMax = 0;
  local_res10.s.HighPart = param_3;
  local_res10.s.LowPart = param_2;
  FinalizeTextShaping(this,__return_storage_ptr__,&local_88,param_4,param_5,
                      (FSourceTextRange *)&local_res10.s);
  DestructItems<FShapedGlyphEntry,int>
            ((FShapedGlyphEntry *)local_68[0].AllocatorInstance.Data,local_68[0].ArrayNum);
  if ((FShapedGlyphEntry *)local_68[0].AllocatorInstance.Data != (FShapedGlyphEntry *)0x0) {
    FMemory::Free(local_68[0].AllocatorInstance.Data);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.ArrayMax = FVar9.Number & 0xffff6fff | 0x6000;
      local_88.ArrayNum = FVar10.Value;
      QueryPerformanceCounter(&local_res10);
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)(ulonglong)local_res10.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_88);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

