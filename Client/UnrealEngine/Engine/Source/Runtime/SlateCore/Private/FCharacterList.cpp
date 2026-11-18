// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// FCharacterList @ 142471ee0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FCharacterList * __thiscall
FCharacterList::FCharacterList(FCharacterList *this,FSlateFontKey *param_1,FSlateFontCache *param_2)

{
  *(undefined8 *)&this->MappedEntries = 0;
  *(undefined8 *)&(this->MappedEntries).field_0x8 = 0;
  *(undefined8 *)&(this->MappedEntries).field_0x20 = 0;
  *(undefined4 *)&(this->MappedEntries).field_0x28 = 0;
  *(undefined4 *)&(this->MappedEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->MappedEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappedEntries).field_0x34 = 0;
  *(undefined8 *)&(this->MappedEntries).field_0x40 = 0;
  *(undefined4 *)&(this->MappedEntries).field_0x48 = 0;
  FSlateFontKey::FSlateFontKey(&this->FontKey,param_1);
  this->FontCache = param_2;
  this->MaxHeight = 0;
  this->Baseline = 0;
  return this;
}

// CacheCharacter @ 1424816a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FCharacterEntry * __thiscall FCharacterList::CacheCharacter(FCharacterList *this,wchar_t param_1)

{
  float fVar1;
  FSlateFontRenderer *this_00;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  FFontData *this_01;
  FCharacterEntry *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FT_FaceRec_ *pFVar11;
  float fVar12;
  undefined1 auStackY_258 [32];
  wchar_t local_218 [4];
  byte local_210;
  float local_20c;
  uint local_208;
  long local_204 [3];
  wchar_t local_1f8 [2];
  uint local_1f4;
  FFontData *local_1f0;
  FFreeTypeKerningCache *local_1e8;
  FSharedReferencer<1> FStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc;
  FShapedGlyphFontAtlasData local_1b8;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  undefined1 local_19c [20];
  FSharedReferencer<1> local_188;
  TSharedPtr<FFreeTypeKerningCache,1> local_180;
  FFreeTypeFaceGlyphData local_170;
  TSharedRef<FFreeTypeAdvanceCache,1> local_150;
  TWeakPtr<FFreeTypeFace,1> local_140;
  wchar_t *local_130;
  wchar_t *local_128;
  FShapedGlyphEntry local_118;
  ulonglong local_68;
  
  fVar12 = __real_3f800000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_20c = 1.0;
  local_218[0] = param_1;
  this_01 = FCompositeFontCache::GetFontDataForCodepoint
                      ((this->FontCache->CompositeFontCache).Ptr,&(this->FontKey).FontInfo,
                       (uint)(ushort)param_1,&local_20c);
  FSlateFontRenderer::GetFontFaceForCodepoint
            ((this->FontCache->FontRenderer).Ptr,&local_170,this_01,(uint)(ushort)local_218[0],
             (this->FontKey).FontInfo.FontFallback);
  if (local_170.FaceAndMemory.Object != (FFreeTypeFace *)0x0) {
    if ((local_170.FaceAndMemory.Object == (FFreeTypeFace *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FCharacterEntry *)(*pcVar3)();
      return pFVar9;
    }
    if (((local_170.FaceAndMemory.Object)->bPendingAsyncLoad == false) &&
       ((local_170.FaceAndMemory.Object)->FTFace != (FT_FaceRec_ *)0x0)) {
      if (((local_170.FaceAndMemory.Object)->FTFace->face_flags & 1) == 0) {
        local_20c = fVar12;
      }
      fVar12 = local_20c * (this->FontKey).Scale;
      local_208 = 0;
      SlateFontRendererUtils::AppendGlyphFlags(local_170.FaceAndMemory.Object,this_01,&local_208);
      local_1a0 = (uint)(local_170.FaceAndMemory.Object)->FTFace->face_flags >> 6 & 0xffffff01;
      local_210 = FTextChar::IsWhitespace((uint)(ushort)local_218[0]);
      uVar8 = FT_Get_Char_Index((local_170.FaceAndMemory.Object)->FTFace,local_218[0]);
      local_1a8 = uVar8;
      local_1a4 = FreeTypeUtils::ComputeFontPixelSize((this->FontKey).FontInfo.Size,fVar12);
      uVar4 = local_208;
      local_204[0] = 0;
      sVar7 = 0;
      FFreeTypeCacheDirectory::GetAdvanceCache
                ((this->FontCache->FTCacheDirectory).Ptr,&local_150,
                 (local_170.FaceAndMemory.Object)->FTFace,local_208,local_1a4);
      bVar6 = FFreeTypeAdvanceCache::FindOrCache(local_150.Object,uVar8,local_204);
      if (bVar6) {
        sVar7 = (short)((local_204[0] + 0x200 >> 10) + 0x20 >> 6);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_150.SharedReferenceCount.ReferenceController);
      local_118.FontFaceData.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_118.GlyphIndex = 0;
      local_118.SourceIndex = 0;
      local_118.XAdvance = 0;
      local_118.YAdvance = 0;
      local_118.XOffset = 0;
      local_118.YOffset = 0;
      local_118.Kerning = '\0';
      local_118.NumCharactersInGlyph = '\0';
      local_118.NumGraphemeClustersInGlyph = '\0';
      local_118.TextDirection = LeftToRight;
      local_118.bIsVisible = false;
      local_118.CachedAtlasData[0][0].Object = (FShapedGlyphFontAtlasData *)0x0;
      local_118.CachedAtlasData[0][0].WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_118.CachedAtlasData[0][1].Object = (FShapedGlyphFontAtlasData *)0x0;
      local_118.CachedAtlasData[0][1].WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_118.CachedAtlasData[1][0].Object = (FShapedGlyphFontAtlasData *)0x0;
      local_118.CachedAtlasData[1][0].WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_118.CachedAtlasData[1][1].Object = (FShapedGlyphFontAtlasData *)0x0;
      local_118.CachedAtlasData[1][1].WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_118.CachedSdfFontAtlasData[0].Object = (FSdfGlyphFontAtlasData *)0x0;
      local_118.CachedSdfFontAtlasData[0].WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_118.CachedSdfFontAtlasData[1].Object = (FSdfGlyphFontAtlasData *)0x0;
      local_118.CachedSdfFontAtlasData[1].WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_118.CachedSdfMetrics[0].BearingX = 0.0;
      local_118.CachedSdfMetrics[0].BearingY = 0.0;
      local_118.CachedSdfMetrics[0].Width = 0.0;
      local_118.CachedSdfMetrics[0].Height = 0.0;
      local_118.CachedSdfMetrics[1].BearingX = 0.0;
      local_118.CachedSdfMetrics[1].BearingY = 0.0;
      local_118.CachedSdfMetrics[1].Width = 0.0;
      local_118.CachedSdfMetrics[1].Height = 0.0;
      FFontData::GetFontRasterizationSettings(this_01);
      pTVar10 = ::operator_new(0x38);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        local_118.FontFaceData.Object = (FShapedGlyphFaceData *)&DAT_00000010;
        local_188.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFShapedGlyphFaceData___00_SharedPointerInternals__6B_
        ;
        fVar1 = (this->FontKey).FontInfo.Size;
        local_140.Object = local_170.FaceAndMemory.Object;
        local_140.WeakReferenceCount.ReferenceController =
             local_170.FaceAndMemory.SharedReferenceCount.ReferenceController;
        if (local_170.FaceAndMemory.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.FaceAndMemory.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_170.FaceAndMemory.SharedReferenceCount.ReferenceController)->
                     WeakReferenceCount + 1);
          UNLOCK();
        }
        FShapedGlyphFaceData::FShapedGlyphFaceData
                  ((FShapedGlyphFaceData *)(pTVar10 + 1),&local_140,uVar4,fVar1,fVar12,0.0,
                   local_19c[4],local_19c._8_2_);
        local_118.FontFaceData.Object = (FShapedGlyphFaceData *)(pTVar10 + 1);
        if ((local_118.FontFaceData.Object == (FShapedGlyphFaceData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FCharacterEntry *)(*pcVar3)();
          return pFVar9;
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        local_188.ReferenceController = pTVar10;
      }
      FVar5.ReferenceController = local_188.ReferenceController;
      local_19c._12_8_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_118.FontFaceData.SharedReferenceCount,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      uVar4 = local_1a8;
      local_118.bIsVisible = (bool)(local_210 ^ 1);
      local_118.XAdvance = sVar7;
      local_118.GlyphIndex = local_1a8;
      local_1f8[0] = L'\0';
      local_1f4 = 0;
      local_1f0 = (FFontData *)0x0;
      local_1e8 = (FFreeTypeKerningCache *)0x0;
      FStack_1e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0x200;
      if ((local_218[0] == L'\0') || (local_1a8 != 0)) {
        local_1bc = 1;
        FSlateFontCache::GetShapedGlyphFontAtlasData
                  (this->FontCache,&local_1b8,&local_118,&(this->FontKey).OutlineSettings);
        if (local_1b8.Valid == false) {
          local_1bc = 0;
        }
        else {
          local_1f8[0] = local_218[0];
          local_1f4 = uVar4;
          this_00 = (this->FontCache->FontRenderer).Ptr;
          local_1f0 = this_01;
          pFVar11 = FSlateFontRenderer::GetFontFace(this_00,this_01);
          FFreeTypeCacheDirectory::GetKerningCache
                    (this_00->FTCacheDirectory,&local_180,pFVar11,0,local_1a4);
          local_1e8 = local_180.Object;
          local_180.Object = (FFreeTypeKerningCache *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&FStack_1e0,&local_180.SharedReferenceCount);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_180.SharedReferenceCount.ReferenceController);
          if ((local_118.FontFaceData.Object == (FShapedGlyphFaceData *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FCharacterEntry *)(*pcVar3)();
            return pFVar9;
          }
          local_1d8._0_4_ = (local_118.FontFaceData.Object)->FontScale;
          local_1d8._4_4_ = (local_118.FontFaceData.Object)->BitmapRenderScale;
          local_1d0 = CONCAT26(local_1b8.VSize,
                               CONCAT24(local_1b8.USize,CONCAT22(local_1b8.StartV,local_1b8.StartU))
                              );
          local_1c8._0_4_ = CONCAT22(local_1b8.HorizontalOffset,local_1b8.VerticalOffset);
          sVar7 = GetBaseline(this);
          local_1c8 = CONCAT26(local_118.XAdvance,CONCAT24(sVar7,(undefined4)local_1c8));
          local_1c0 = CONCAT13(local_1b8.SupportsOutline,
                               CONCAT12((char)local_1a0,
                                        CONCAT11(local_170.CharFallbackLevel,local_1b8.TextureIndex)
                                       ));
        }
        local_130 = local_218;
        local_128 = local_1f8;
        TSet<TTuple<wchar_t,FCharacterEntry>,TDefaultMapHashableKeyFuncs<wchar_t,FCharacterEntry,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<wchar_t_const_&,FCharacterEntry_&&>_>
                  ((TSet<TTuple<wchar_t,FCharacterEntry>,TDefaultMapHashableKeyFuncs<wchar_t,FCharacterEntry,0>,FDefaultSetAllocator>
                    *)this,(TPairInitializer<wchar_t_const_&,FCharacterEntry_&&> *)local_19c,
                   (bool *)&local_130);
        lVar2 = *(longlong *)&this->MappedEntries;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_1e0.ReferenceController);
        FShapedGlyphEntry::~FShapedGlyphEntry(&local_118);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_170.FaceAndMemory.SharedReferenceCount.ReferenceController);
        return (FCharacterEntry *)((longlong)(int)local_19c._0_4_ * 0x50 + lVar2 + 8);
      }
      local_1bc = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FShapedGlyphEntry::~FShapedGlyphEntry(&local_118);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_170.FaceAndMemory.SharedReferenceCount.ReferenceController);
  return (FCharacterEntry *)0x0;
}

// CanCacheCharacter @ 142481d60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FCharacterList::CanCacheCharacter(FCharacterList *this,wchar_t param_1,EFontFallback param_2)

{
  FFontData *pFVar1;
  bool bVar2;
  float local_res10 [2];
  FFreeTypeFaceGlyphData local_28;
  
  if (param_1 == L'�') {
    return true;
  }
  pFVar1 = FCompositeFontCache::GetFontDataForCodepoint
                     ((this->FontCache->CompositeFontCache).Ptr,&(this->FontKey).FontInfo,
                      (uint)(ushort)param_1,local_res10);
  FSlateFontRenderer::GetFontFaceForCodepoint
            ((this->FontCache->FontRenderer).Ptr,&local_28,pFVar1,(uint)(ushort)param_1,param_2);
  if ((local_28.FaceAndMemory.Object == (FFreeTypeFace *)0x0) || (local_28.GlyphIndex == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.FaceAndMemory.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// GetBaseline @ 14248b770

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

short __thiscall FCharacterList::GetBaseline(FCharacterList *this)

{
  short sVar1;
  
  sVar1 = this->Baseline;
  if (sVar1 == 0) {
    sVar1 = FSlateFontRenderer::GetBaseline
                      ((this->FontCache->FontRenderer).Ptr,&(this->FontKey).FontInfo,
                       (this->FontKey).Scale);
    this->Baseline = sVar1;
  }
  return sVar1;
}

// GetCharacter @ 14248c2d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FCharacterEntry * __thiscall
FCharacterList::GetCharacter(FCharacterList *this,wchar_t param_1,EFontFallback param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FFontData *pFVar3;
  FCharacterEntry *pFVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  wchar32 wVar7;
  float local_res10 [2];
  FFreeTypeFaceGlyphData local_38;
  
LAB_14248c300:
  do {
    wVar7 = (wchar32)(ushort)param_1;
    if (*(int *)&(this->MappedEntries).field_0x8 != *(int *)&(this->MappedEntries).field_0x34) {
      puVar1 = *(undefined1 **)&(this->MappedEntries).field_0x40;
      puVar5 = &(this->MappedEntries).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar5 = puVar1;
      }
      iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->MappedEntries).field_0x48 - 1) &
                                (ulonglong)(ushort)param_1) * 4);
      if (iVar2 != -1) {
        do {
          puVar6 = (ushort *)((longlong)iVar2 * 0x50 + *(longlong *)&this->MappedEntries);
          if ((uint)*puVar6 == wVar7) {
            pFVar4 = (FCharacterEntry *)(puVar6 + 4);
            if (puVar6 == (ushort *)0x0) {
              pFVar4 = (FCharacterEntry *)0x0;
            }
            if (pFVar4 != (FCharacterEntry *)0x0) {
              if (param_1 == L'�') {
                return pFVar4;
              }
              if (pFVar4->FallbackLevel <= param_2) {
                return pFVar4;
              }
              param_1 = L'�';
              goto LAB_14248c300;
            }
            break;
          }
          iVar2 = *(int *)(puVar6 + 0x24);
        } while (iVar2 != -1);
      }
    }
    if (param_1 != L'�') {
      pFVar3 = FCompositeFontCache::GetFontDataForCodepoint
                         ((this->FontCache->CompositeFontCache).Ptr,&(this->FontKey).FontInfo,wVar7,
                          local_res10);
      FSlateFontRenderer::GetFontFaceForCodepoint
                ((this->FontCache->FontRenderer).Ptr,&local_38,pFVar3,wVar7,param_2);
      if ((local_38.FaceAndMemory.Object == (FFreeTypeFace *)0x0) || (local_38.GlyphIndex == 0)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.FaceAndMemory.SharedReferenceCount.ReferenceController);
        param_1 = L'�';
        goto LAB_14248c300;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.FaceAndMemory.SharedReferenceCount.ReferenceController);
    }
    pFVar4 = CacheCharacter(this,param_1);
    if (pFVar4 != (FCharacterEntry *)0x0) {
      return pFVar4;
    }
    if (param_1 == L'�') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FCharacterList::GetCharacter'::__l2::_dynamic_atexit_destructor_for__Invalid__);
        _Init_thread_footer(&::_TSS0);
      }
      return &::Invalid;
    }
    param_1 = L'�';
  } while( true );
}

// GetKerning @ 1424913a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall
FCharacterList::GetKerning(FCharacterList *this,FCharacterEntry *param_1,FCharacterEntry *param_2)

{
  bool bVar1;
  FFreeTypeKerningCache *this_00;
  FT_Vector_ local_res10 [3];
  
  if ((((param_1->Valid != false) && (param_2->Valid != false)) &&
      (param_1->FontData != (FFontData *)0x0)) && (param_1->HasKerning != false)) {
    bVar1 = FFontData::operator==(param_1->FontData,param_2->FontData);
    if ((bVar1) && ((param_1->KerningCache).Object != (FFreeTypeKerningCache *)0x0)) {
      this_00 = TSharedPtr<FFreeTypeKerningCache,1>::operator->(&param_1->KerningCache);
      bVar1 = FFreeTypeKerningCache::FindOrCache
                        (this_00,param_1->GlyphIndex,param_2->GlyphIndex,local_res10);
      if (bVar1) {
        return (schar)(local_res10[0].x + 0x20 >> 6);
      }
    }
  }
  return '\0';
}

// GetKerning @ 142491430

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall
FCharacterList::GetKerning
          (FCharacterList *this,wchar_t param_1,wchar_t param_2,EFontFallback param_3)

{
  schar sVar1;
  FCharacterEntry *pFVar2;
  FCharacterEntry *pFVar3;
  
  pFVar2 = GetCharacter(this,param_1,param_3);
  pFVar3 = GetCharacter(this,param_2,param_3);
  sVar1 = GetKerning(this,pFVar2,pFVar3);
  return sVar1;
}

// GetMaxHeight @ 142492450

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ushort __thiscall FCharacterList::GetMaxHeight(FCharacterList *this)

{
  ushort uVar1;
  
  uVar1 = this->MaxHeight;
  if (uVar1 == 0) {
    uVar1 = FSlateFontRenderer::GetMaxHeight
                      ((this->FontCache->FontRenderer).Ptr,&(this->FontKey).FontInfo,
                       (this->FontKey).Scale);
    this->MaxHeight = uVar1;
  }
  return uVar1;
}

