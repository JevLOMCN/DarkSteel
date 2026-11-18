// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 13

// FSlateFontRenderer @ 1424769e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateFontRenderer * __thiscall
FSlateFontRenderer::FSlateFontRenderer
          (FSlateFontRenderer *this,FFreeTypeLibrary *param_1,FFreeTypeCacheDirectory *param_2,
          FCompositeFontCache *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSlateFontRenderer *pFVar3;
  
  this->FTLibrary = param_1;
  this->FTCacheDirectory = param_2;
  this->CompositeFontCache = param_3;
  if (param_1 == (FFreeTypeLibrary *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FTLibrary",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateFontRenderer *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->FTCacheDirectory == (FFreeTypeCacheDirectory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FTCacheDirectory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                       ,0xbc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateFontRenderer *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->CompositeFontCache == (FCompositeFontCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeFontCache",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                       ,0xbd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateFontRenderer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// CanLoadCodepoint @ 142481e70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateFontRenderer::CanLoadCodepoint
          (FSlateFontRenderer *this,FFontData *param_1,wchar32 param_2,EFontFallback param_3)

{
  FFreeTypeFaceGlyphData local_28;
  
  GetFontFaceForCodepoint(this,&local_28,param_1,param_2,param_3);
  if ((local_28.FaceAndMemory.Object != (FFreeTypeFace *)0x0) && (local_28.GlyphIndex != 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.FaceAndMemory.SharedReferenceCount.ReferenceController);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.FaceAndMemory.SharedReferenceCount.ReferenceController);
  return false;
}

// GetBaseline @ 14248b830

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

short __thiscall
FSlateFontRenderer::GetBaseline(FSlateFontRenderer *this,FSlateFontInfo *param_1,float param_2)

{
  FT_FaceRec_ *pFVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  FFontData *pFVar7;
  UObject *local_res8;
  FFreeTypeFaceGlyphData local_38;
  
  pFVar7 = FCompositeFontCache::GetDefaultFontData(this->CompositeFontCache,param_1);
  GetFontFaceForCodepoint(this,&local_38,pFVar7,L'\0',param_1->FontFallback);
  if (local_38.FaceAndMemory.Object != (FFreeTypeFace *)0x0) {
    if (local_38.FaceAndMemory.Object == (FFreeTypeFace *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        sVar4 = (*pcVar2)();
        return sVar4;
      }
    }
    if ((local_38.FaceAndMemory.Object)->FTFace != (FT_FaceRec_ *)0x0) {
      FreeTypeUtils::ApplySizeAndScale
                ((local_38.FaceAndMemory.Object)->FTFace,param_1->Size,param_2);
      local_res8 = (param_1->FontObject).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      bVar3 = UE::Slate::FontUtils::IsAscentDescentOverrideEnabled
                        ((TObjectPtr<UObject_const_>)&local_res8);
      if ((bVar3) && ((local_38.FaceAndMemory.Object)->IsDescentOverridden != false)) {
        uVar5 = FT_MulFix((local_38.FaceAndMemory.Object)->DescentOverrideValue,
                          ((local_38.FaceAndMemory.Object)->FTFace->size->metrics).y_scale);
        sVar4 = (short)((int)((uVar5 & 0xffffffc0) + 0x20) >> 6);
      }
      else {
        pFVar1 = (local_38.FaceAndMemory.Object)->FTFace;
        if ((pFVar1->face_flags & 1U) == 0) {
          if ((pFVar1->face_flags & 2U) == 0) {
            sVar4 = 0;
          }
          else {
            iVar6 = FT_MulFix((pFVar1->size->metrics).descender,(pFVar1->size->metrics).y_scale);
            sVar4 = (short)(iVar6 + 0x20 >> 6);
          }
        }
        else if ((local_38.FaceAndMemory.Object)->LayoutMethod == Metrics) {
          iVar6 = FT_MulFix((int)pFVar1->descender,(pFVar1->size->metrics).y_scale);
          sVar4 = (short)(iVar6 + 0x20 >> 6);
        }
        else {
          iVar6 = FT_MulFix((pFVar1->bbox).yMin,(pFVar1->size->metrics).y_scale);
          sVar4 = (short)(iVar6 + 0x20 >> 6);
        }
      }
      goto LAB_14248b98d;
    }
  }
  sVar4 = 0;
LAB_14248b98d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.FaceAndMemory.SharedReferenceCount.ReferenceController);
  return sVar4;
}

// GetFontFace @ 1424906e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FT_FaceRec_ * __thiscall
FSlateFontRenderer::GetFontFace(FSlateFontRenderer *this,FFontData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FT_FaceRec_ *pFVar3;
  TSharedPtr<FFreeTypeFace,1> local_18;
  
  FCompositeFontCache::GetFontFace(this->CompositeFontCache,&local_18,param_1);
  if (local_18.Object == (FFreeTypeFace *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return (FT_FaceRec_ *)0x0;
  }
  if ((local_18.Object == (FFreeTypeFace *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FT_FaceRec_ *)(*pcVar1)();
    return pFVar3;
  }
  pFVar3 = (local_18.Object)->FTFace;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pFVar3;
}

// GetFontFaceForCodepoint @ 142490860

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FFreeTypeFaceGlyphData * __thiscall
FSlateFontRenderer::GetFontFaceForCodepoint
          (FSlateFontRenderer *this,FFreeTypeFaceGlyphData *__return_storage_ptr__,
          FFontData *param_1,wchar32 param_2,EFontFallback param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FFreeTypeFace *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FCompositeFontCache *this_00;
  uint uVar5;
  FFreeTypeFaceGlyphData *pFVar6;
  FLegacySlateFontInfoCache *pFVar7;
  FFontData *pFVar8;
  FFallbackContext local_58;
  TSharedPtr<FFreeTypeFace,1> local_48;
  FFreeTypeFaceGlyphData local_38;
  
  (__return_storage_ptr__->FaceAndMemory).Object = (FFreeTypeFace *)0x0;
  (__return_storage_ptr__->FaceAndMemory).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->GlyphIndex = 0;
  __return_storage_ptr__->GlyphFlags = 0;
  __return_storage_ptr__->CharFallbackLevel = FF_NoFallback;
  pFVar6 = (FFreeTypeFaceGlyphData *)
           FCompositeFontCache::GetFontFace
                     (this->CompositeFontCache,(TSharedPtr<FFreeTypeFace,1> *)&local_58,param_1);
  if (__return_storage_ptr__ != pFVar6) {
    (__return_storage_ptr__->FaceAndMemory).Object = (pFVar6->FaceAndMemory).Object;
    (pFVar6->FaceAndMemory).Object = (FFreeTypeFace *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->FaceAndMemory).SharedReferenceCount,
               &(pFVar6->FaceAndMemory).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_58._12_4_,local_58.Codepoint));
  pFVar3 = (__return_storage_ptr__->FaceAndMemory).Object;
  if (pFVar3 != (FFreeTypeFace *)0x0) {
    if (pFVar3->bPendingAsyncLoad != false) {
      if (__return_storage_ptr__ != &local_38) {
        (__return_storage_ptr__->FaceAndMemory).Object = (FFreeTypeFace *)0x0;
        pTVar4 = (__return_storage_ptr__->FaceAndMemory).SharedReferenceCount.ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          (__return_storage_ptr__->FaceAndMemory).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          LOCK();
          paVar1 = &pTVar4->SharedReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)pTVar4->_padding_)();
            LOCK();
            paVar1 = &pTVar4->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      __return_storage_ptr__->GlyphIndex = 0;
      __return_storage_ptr__->CharFallbackLevel = FF_NoFallback;
      return __return_storage_ptr__;
    }
    uVar5 = FT_Get_Char_Index(pFVar3->FTFace,param_2);
    __return_storage_ptr__->GlyphIndex = uVar5;
    __return_storage_ptr__->CharFallbackLevel = FF_NoFallback;
    if ((__return_storage_ptr__->FaceAndMemory).Object != (FFreeTypeFace *)0x0) {
      if (param_2 == L'\0') {
        return __return_storage_ptr__;
      }
      if (uVar5 != 0) goto LAB_142490a40;
    }
  }
  if (((param_2 == L'�') || (param_3 != FF_NoFallback)) &&
     (pFVar7 = FLegacySlateFontInfoCache::Get(), pFVar7->bIsLastResortFontAvailable != false)) {
    if (2 < (byte)LogSlate._0_1_) {
      FFontData::GetFontFilename(param_1);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    this_00 = this->CompositeFontCache;
    pFVar7 = FLegacySlateFontInfoCache::Get();
    local_58.FontData = param_1;
    local_58.Codepoint = param_2;
    pFVar8 = FLegacySlateFontInfoCache::GetLastResortFontData(pFVar7,&local_58);
    pFVar6 = (FFreeTypeFaceGlyphData *)FCompositeFontCache::GetFontFace(this_00,&local_48,pFVar8);
    if (__return_storage_ptr__ != pFVar6) {
      (__return_storage_ptr__->FaceAndMemory).Object = (pFVar6->FaceAndMemory).Object;
      (pFVar6->FaceAndMemory).Object = (FFreeTypeFace *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(__return_storage_ptr__->FaceAndMemory).SharedReferenceCount,
                 &(pFVar6->FaceAndMemory).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    pFVar3 = (__return_storage_ptr__->FaceAndMemory).Object;
    if (pFVar3 != (FFreeTypeFace *)0x0) {
      uVar5 = FT_Get_Char_Index(pFVar3->FTFace,param_2);
      __return_storage_ptr__->GlyphIndex = uVar5;
      if (uVar5 != 0) {
        __return_storage_ptr__->GlyphFlags = __return_storage_ptr__->GlyphFlags | 0x20;
        __return_storage_ptr__->CharFallbackLevel = FF_LastResortFallback;
      }
    }
  }
  if (param_2 == L'\0') {
    return __return_storage_ptr__;
  }
LAB_142490a40:
  if (__return_storage_ptr__->GlyphIndex == 0) {
    if (__return_storage_ptr__ != (FFreeTypeFaceGlyphData *)&local_38.GlyphIndex) {
      (__return_storage_ptr__->FaceAndMemory).Object = (FFreeTypeFace *)0x0;
      pTVar4 = (__return_storage_ptr__->FaceAndMemory).SharedReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        (__return_storage_ptr__->FaceAndMemory).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar1 = &pTVar4->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar4->_padding_)();
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return __return_storage_ptr__;
}

// GetKerning @ 142491720

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall
FSlateFontRenderer::GetKerning
          (FSlateFontRenderer *this,FFontData *param_1,float param_2,wchar_t param_3,wchar_t param_4
          ,float param_5)

{
  code *pcVar1;
  bool bVar2;
  schar sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FT_FaceRec_ *pFVar7;
  FT_Vector_ local_38;
  TSharedPtr<FFreeTypeKerningCache,1> local_30 [2];
  
  pFVar7 = GetFontFace(this,param_1);
  if ((pFVar7 != (FT_FaceRec_ *)0x0) && ((pFVar7->face_flags & 0x40) != 0)) {
    uVar4 = FT_Get_Char_Index(pFVar7,param_3);
    uVar5 = FT_Get_Char_Index(pFVar7,param_4);
    uVar6 = FreeTypeUtils::ComputeFontPixelSize(param_2,param_5);
    pFVar7 = GetFontFace(this,param_1);
    FFreeTypeCacheDirectory::GetKerningCache(this->FTCacheDirectory,local_30,pFVar7,0,uVar6);
    if (local_30[0].Object != (FFreeTypeKerningCache *)0x0) {
      if ((local_30[0].Object == (FFreeTypeKerningCache *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        sVar3 = (*pcVar1)();
        return sVar3;
      }
      bVar2 = FFreeTypeKerningCache::FindOrCache(local_30[0].Object,uVar4,uVar5,&local_38);
      if (bVar2) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30[0].SharedReferenceCount.ReferenceController);
        return (schar)(local_38.x + 0x20 >> 6);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30[0].SharedReferenceCount.ReferenceController);
  }
  return '\0';
}

// GetKerningCache @ 142491ab0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedPtr<FFreeTypeKerningCache,1> * __thiscall
FSlateFontRenderer::GetKerningCache
          (FSlateFontRenderer *this,TSharedPtr<FFreeTypeKerningCache,1> *__return_storage_ptr__,
          FFontData *param_1,uint param_2)

{
  FT_FaceRec_ *pFVar1;
  
  pFVar1 = GetFontFace(this,param_1);
  FFreeTypeCacheDirectory::GetKerningCache
            (this->FTCacheDirectory,__return_storage_ptr__,pFVar1,0,param_2);
  return __return_storage_ptr__;
}

// GetMaxHeight @ 1424924a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ushort __thiscall
FSlateFontRenderer::GetMaxHeight(FSlateFontRenderer *this,FSlateFontInfo *param_1,float param_2)

{
  int iVar1;
  long lVar2;
  FT_FaceRec_ *pFVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  FFontData *pFVar9;
  uint uVar10;
  int iVar11;
  UObject *local_res8;
  FFreeTypeFaceGlyphData local_48 [2];
  
  pFVar9 = FCompositeFontCache::GetDefaultFontData(this->CompositeFontCache,param_1);
  GetFontFaceForCodepoint(this,local_48,pFVar9,L'\0',param_1->FontFallback);
  if (local_48[0].FaceAndMemory.Object != (FFreeTypeFace *)0x0) {
    if (local_48[0].FaceAndMemory.Object == (FFreeTypeFace *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    if ((local_48[0].FaceAndMemory.Object)->FTFace != (FT_FaceRec_ *)0x0) {
      FreeTypeUtils::ApplySizeAndScale
                ((local_48[0].FaceAndMemory.Object)->FTFace,param_1->Size,param_2);
      iVar1 = (param_1->OutlineSettings).OutlineSize;
      local_res8 = (param_1->FontObject).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      bVar5 = UE::Slate::FontUtils::IsAscentDescentOverrideEnabled
                        ((TObjectPtr<UObject_const_>)&local_res8);
      if ((bVar5) &&
         (((local_48[0].FaceAndMemory.Object)->IsAscentOverridden != false ||
          ((local_48[0].FaceAndMemory.Object)->IsDescentOverridden != false)))) {
        iVar11 = 0;
        if ((local_48[0].FaceAndMemory.Object)->IsAscentOverridden == false) {
          pFVar3 = (local_48[0].FaceAndMemory.Object)->FTFace;
          if ((pFVar3->face_flags & 1U) == 0) {
            if ((pFVar3->face_flags & 2U) == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = FT_MulFix((pFVar3->size->metrics).ascender,(pFVar3->size->metrics).y_scale);
            }
          }
          else if ((local_48[0].FaceAndMemory.Object)->LayoutMethod == Metrics) {
            uVar10 = FT_MulFix((int)pFVar3->ascender,(pFVar3->size->metrics).y_scale);
          }
          else {
            uVar10 = FT_MulFix((pFVar3->bbox).yMax,(pFVar3->size->metrics).y_scale);
          }
        }
        else {
          iVar7 = FT_MulFix((local_48[0].FaceAndMemory.Object)->AscentOverrideValue,
                            ((local_48[0].FaceAndMemory.Object)->FTFace->size->metrics).y_scale);
          uVar10 = iVar7 + 0x3fU & 0xffffffc0;
        }
        if ((local_48[0].FaceAndMemory.Object)->IsDescentOverridden == false) {
          pFVar3 = (local_48[0].FaceAndMemory.Object)->FTFace;
          if ((pFVar3->face_flags & 1U) == 0) {
            if ((pFVar3->face_flags & 2U) != 0) {
              iVar11 = FT_MulFix((pFVar3->size->metrics).descender,(pFVar3->size->metrics).y_scale);
            }
            iVar11 = uVar10 - iVar11;
          }
          else if ((local_48[0].FaceAndMemory.Object)->LayoutMethod == Metrics) {
            iVar11 = FT_MulFix((int)pFVar3->descender,(pFVar3->size->metrics).y_scale);
            iVar11 = uVar10 - iVar11;
          }
          else {
            iVar11 = FT_MulFix((pFVar3->bbox).yMin,(pFVar3->size->metrics).y_scale);
            iVar11 = uVar10 - iVar11;
          }
        }
        else {
          uVar8 = FT_MulFix((local_48[0].FaceAndMemory.Object)->DescentOverrideValue,
                            ((local_48[0].FaceAndMemory.Object)->FTFace->size->metrics).y_scale);
          iVar11 = uVar10 - (uVar8 & 0xffffffc0);
        }
      }
      else {
        pFVar3 = (local_48[0].FaceAndMemory.Object)->FTFace;
        if ((pFVar3->face_flags & 1U) == 0) {
          if ((pFVar3->face_flags & 2U) == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = FT_MulFix((pFVar3->size->metrics).height,(pFVar3->size->metrics).y_scale);
          }
        }
        else {
          lVar2 = (pFVar3->size->metrics).y_scale;
          if ((local_48[0].FaceAndMemory.Object)->LayoutMethod == Metrics) {
            iVar11 = FT_MulFix((int)pFVar3->height,lVar2);
          }
          else {
            iVar11 = FT_MulFix((pFVar3->bbox).yMax - (pFVar3->bbox).yMin,lVar2);
          }
        }
      }
      uVar6 = (ushort)(int)((float)(iVar11 + 0x20 >> 6) + (float)iVar1 * param_2);
      goto LAB_142492717;
    }
  }
  uVar6 = 0;
LAB_142492717:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48[0].FaceAndMemory.SharedReferenceCount.ReferenceController);
  return uVar6;
}

// GetRenderData @ 142492da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateFontRenderer::GetRenderData
          (FSlateFontRenderer *this,FShapedGlyphEntry *param_1,FFontOutlineSettings *param_2,
          FCharacterRenderData *param_3)

{
  TSharedPtr<FFontFaceData_const_,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FT_FaceRec_ *pFVar4;
  code *pcVar5;
  FT_FaceRec_ **ppFVar6;
  float fVar7;
  FSharedReferencer<1> FVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  FShapedGlyphFaceData *pFVar14;
  undefined4 *puVar15;
  FFreeTypeFace *pFVar16;
  FFreeTypeFace *pFVar17;
  FFreeTypeFace *pFVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_e8 [32];
  FFreeTypeFaceGlyphData local_b8;
  FCharacterRenderData *local_98;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar16 = (FFreeTypeFace *)0x0;
  local_b8.FaceAndMemory.Object = (FFreeTypeFace *)0x0;
  local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_b8.GlyphIndex = 0;
  local_b8.GlyphFlags = 0;
  local_b8.CharFallbackLevel = FF_NoFallback;
  local_98 = param_3;
  if (((param_1->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  FVar8.ReferenceController = local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController;
  pFVar14 = (param_1->FontFaceData).Object;
  pFVar18 = (FFreeTypeFace *)(pFVar14->FontFace).WeakReferenceCount.ReferenceController;
  pFVar17 = pFVar18;
  if (pFVar18 != (FFreeTypeFace *)0x0) {
    iVar13 = *(int *)&(pFVar18->Memory).Object;
    do {
      pFVar17 = pFVar16;
      if (iVar13 == 0) goto LAB_142492e46;
      LOCK();
      iVar12 = *(int *)&(pFVar18->Memory).Object;
      bVar10 = iVar13 == iVar12;
      if (bVar10) {
        *(int *)&(pFVar18->Memory).Object = iVar13 + 1;
        iVar12 = iVar13;
      }
      UNLOCK();
      iVar13 = iVar12;
    } while (!bVar10);
    pFVar16 = (pFVar14->FontFace).Object;
    pFVar17 = pFVar18;
  }
LAB_142492e46:
  pFVar18 = pFVar17;
  local_b8.FaceAndMemory.Object = pFVar16;
  FVar9.ReferenceController = local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController;
  if ((pFVar17 != (FFreeTypeFace *)local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController)
     && (pFVar18 = (FFreeTypeFace *)0x0,
        FVar9.ReferenceController = (TReferenceControllerBase<1> *)pFVar17,
        (FFreeTypeFace *)local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController !=
        (FFreeTypeFace *)0x0)) {
    LOCK();
    pTVar1 = (TSharedPtr<FFontFaceData_const_,1> *)
             &(local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    iVar13 = *(int *)&pTVar1->Object;
    *(int *)&pTVar1->Object = *(int *)&pTVar1->Object + -1;
    UNLOCK();
    param_3 = local_98;
    if (iVar13 == 1) {
      ppFVar6 = (FT_FaceRec_ **)
                &(local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController)->_padding_;
      local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar17;
      (**(code **)*ppFVar6)(FVar8.ReferenceController);
      LOCK();
      paVar2 = &(FVar8.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      param_3 = local_98;
      FVar9.ReferenceController = local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController;
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)&((FT_FaceRec_ *)(FVar8.ReferenceController)->_padding_)->face_flags)
                  (FVar8.ReferenceController);
        param_3 = local_98;
        FVar9.ReferenceController = local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController;
      }
    }
  }
  local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar18);
  local_b8.GlyphIndex = param_1->GlyphIndex;
  if (((param_1->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  local_b8.GlyphFlags = ((param_1->FontFaceData).Object)->GlyphFlags;
  if (pFVar16 != (FFreeTypeFace *)0x0) {
    if ((pFVar16 == (FFreeTypeFace *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    if ((pFVar16->FTFace == (FT_FaceRec_ *)0x0) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3247713308408544858>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                            ,0x1a6,"FaceGlyphData.FaceAndMemory->IsFaceValid()"), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    if ((pFVar16 == (FFreeTypeFace *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    if (pFVar16->FTFace != (FT_FaceRec_ *)0x0) {
      if (((param_1->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      fVar7 = __real_47800000;
      if (__real_322bcc77 <
          (float)((uint)((param_1->FontFaceData).Object)->FontSkew &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        local_90 = 0x10000;
        pFVar14 = TSharedPtr<FShapedGlyphFaceData,1>::operator->(&param_1->FontFaceData);
        local_88 = 0;
        local_84 = 0x10000;
        local_8c = (int)(pFVar14->FontSkew * fVar7);
        if ((pFVar16 == (FFreeTypeFace *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        puVar15 = &local_90;
      }
      else {
        if ((pFVar16 == (FFreeTypeFace *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        puVar15 = (undefined4 *)0x0;
      }
      FT_Set_Transform(pFVar16->FTFace,puVar15,0);
      if (((param_1->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pFVar14 = (param_1->FontFaceData).Object;
      fVar20 = pFVar14->FontScale;
      if ((pFVar14 == (FShapedGlyphFaceData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      fVar19 = ((param_1->FontFaceData).Object)->FontSize;
      if ((pFVar16 == (FFreeTypeFace *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pFVar4 = pFVar16->FTFace;
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      iVar13 = FT_MulFix(((int)(fVar19 * __real_c2800000) * -0x60 + 0x24) / 0x48,
                         (int)(fVar20 * fVar7));
      iVar13 = FreeTypeUtils::LoadGlyph
                         (pFVar4,local_b8.GlyphIndex,local_b8.GlyphFlags,iVar13 + 0x20 >> 6);
      if (iVar13 == 0) {
        pFVar14 = TSharedPtr<FShapedGlyphFaceData,1>::operator->(&param_1->FontFaceData);
        bVar10 = GetRenderDataInternal(this,&local_b8,pFVar14->FontScale,param_2,param_3);
        goto LAB_1424931f1;
      }
    }
  }
  bVar10 = false;
LAB_1424931f1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.FaceAndMemory.SharedReferenceCount.ReferenceController);
  return bVar10;
}

// GetRenderDataInternal @ 142493220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateFontRenderer::GetRenderDataInternal
          (FSlateFontRenderer *this,FFreeTypeFaceGlyphData *param_1,float param_2,
          FFontOutlineSettings *param_3,FCharacterRenderData *param_4)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  uchar uVar3;
  ushort uVar4;
  FT_FaceRec_ *pFVar5;
  FT_GlyphSlotRec_ *pFVar6;
  uchar *puVar7;
  code *pcVar8;
  undefined1 auVar9 [12];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  ESlateFontAtlasContentType EVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_FreetypeRenderGlyph> FVar21;
  FScriptContainerElement *pFVar22;
  size_t sVar23;
  FScriptContainerElement FVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ForAnyElementType FVar27;
  FName FVar28;
  FSlateFontRenderer *pFVar29;
  FFontOutlineSettings *pFVar30;
  longlong lVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  int *piVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  FT_Bitmap_ *pFVar38;
  bool bVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 in_XMM2_Db;
  undefined4 uVar42;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auStackY_6f8 [32];
  undefined1 local_696;
  undefined1 local_695;
  undefined1 local_694;
  undefined1 local_693 [3];
  uint local_690;
  uint local_68c;
  FName local_688;
  FName local_680;
  FT_GlyphSlotRec_ *local_678;
  FFontOutlineSettings *local_670;
  FCharacterRenderData local_668;
  longlong local_648;
  FSlateFontRenderer *local_640;
  undefined8 local_638;
  longlong local_630;
  ulonglong local_628;
  FColor_u_0 local_620 [2];
  undefined1 local_618 [12];
  undefined4 uStack_60c;
  undefined8 local_608;
  undefined8 uStack_600;
  bool local_5f8;
  undefined7 uStack_5f7;
  FName local_5f0;
  FT_FaceRec_ *local_5e8;
  FRasterizerSpanList local_5e0;
  FRasterizerSpanList local_5a8;
  FName local_570;
  FName local_560;
  FT_Bitmap_ local_558;
  FScriptContainerElement local_528 [256];
  ForAnyElementType local_428;
  FScriptContainerElement *local_420;
  int local_418;
  FScriptContainerElement local_408 [256];
  ForAnyElementType local_308;
  FScriptContainerElement *local_300;
  int local_2f8;
  FScriptContainerElement local_2e8 [256];
  ForAnyElementType local_1e8;
  FScriptContainerElement *local_1e0;
  int local_1d8;
  FScriptContainerElement local_1c8 [256];
  ForAnyElementType local_c8;
  FScriptContainerElement *local_c0;
  int local_b8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  uVar32 = 0;
  auVar48._4_4_ = in_XMM2_Db;
  auVar48._0_4_ = param_2;
  auVar48._8_4_ = in_XMM2_Dc;
  auVar48._12_4_ = in_XMM2_Dd;
  FVar21 = StatPtr_STAT_FreetypeRenderGlyph;
  local_670 = param_3;
  local_640 = this;
  if (StatPtr_STAT_FreetypeRenderGlyph == (FThreadSafeStaticStat<FStat_STAT_FreetypeRenderGlyph>)0x0
     ) {
    pFVar20 = ::FName::FName(&local_560,"STAT_FreetypeRenderGlyph");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_FreetypeRenderGlyph>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FreetypeRenderGlyph,*pFVar20,
                        L"Freetype Render Glyph","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar21;
  local_570.ComparisonIndex.Value = 0;
  local_570.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_1424933b7:
    bVar12 = false;
    local_680 = local_570;
    FVar28 = local_570;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_620[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_620[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_5f0.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_5f0.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_5f0,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                   ,0x217);
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1424933b7;
    local_688 = FVar28;
    local_680 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar12 = true;
  }
  bVar39 = EnableFontAntiAliasing == 0;
  if (((param_1->FaceAndMemory).Object == (FFreeTypeFace *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    uVar16 = (*pcVar8)();
    return (bool)uVar16;
  }
  fVar14 = __real_3f000000;
  fVar13 = __real_3f800000;
  pFVar5 = ((param_1->FaceAndMemory).Object)->FTFace;
  pFVar6 = pFVar5->glyph;
  fVar49 = __real_3f800000;
  if ((((byte)pFVar5->face_flags & 3) == 2) &&
     (iVar18 = (pFVar5->size->metrics).x_scale, iVar18 < 0x10000)) {
    fVar49 = (float)iVar18 * __real_37800000;
  }
  iVar18 = param_3->OutlineSize;
  param_4->ContentType = Alpha;
  param_4->bSupportsOutline = (bool)((byte)pFVar5->face_flags & 1);
  auVar48 = roundps(auVar48,ZEXT416((uint)((float)iVar18 * param_2 + fVar14)),1);
  fVar47 = auVar48._0_4_;
  local_678 = pFVar6;
  local_5e8 = pFVar5;
  if (((fVar47 <= 0.0) && (OutlineFontRenderMethod != 1)) ||
     (pFVar6->format != FT_GLYPH_FORMAT_OUTLINE)) {
    iVar18 = FT_Render_Glyph(pFVar6,bVar39 * '\x02');
    if (iVar18 != 0) {
      if (2 < (byte)LogSlate._0_1_) {
        puVar7 = (uchar *)pFVar5->style_name;
        local_c8.Data = (FScriptContainerElement *)0x0;
        if (puVar7 == (uchar *)0x0) {
          local_c0 = (FScriptContainerElement *)0x0;
          local_b8 = 0;
        }
        else {
          sVar23 = strlen((char *)puVar7);
          local_b8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar7,(int)sVar23);
          uVar32 = local_b8 + 1;
          uVar35 = uVar32;
          if (uVar32 < 0x81) {
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              uVar35 = 0;
              goto LAB_142493e48;
            }
          }
          else {
LAB_142493e48:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_c8,0,uVar35,2);
          }
          local_c0 = local_1c8;
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            local_c0 = local_c8.Data;
          }
          UE::Core::Private::Convert((wchar_t *)local_c0,uVar32,puVar7,(int)sVar23 + 1);
        }
        local_1e8.Data = (FScriptContainerElement *)0x0;
        puVar7 = (uchar *)local_5e8->family_name;
        if (puVar7 == (uchar *)0x0) {
          local_1e0 = (FScriptContainerElement *)0x0;
          local_1d8 = 0;
        }
        else {
          sVar23 = strlen((char *)puVar7);
          local_1d8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar7,(int)sVar23);
          uVar32 = local_1d8 + 1;
          uVar35 = uVar32;
          if (uVar32 < 0x81) {
            if (local_1e8.Data != (FScriptContainerElement *)0x0) {
              uVar35 = 0;
              goto LAB_142493ef7;
            }
          }
          else {
LAB_142493ef7:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1e8,0,uVar35,2);
          }
          local_1e0 = local_2e8;
          if (local_1e8.Data != (FScriptContainerElement *)0x0) {
            local_1e0 = local_1e8.Data;
          }
          UE::Core::Private::Convert((wchar_t *)local_1e0,uVar32,puVar7,(int)sVar23 + 1);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        FVar27.Data = local_c8.Data;
        if (local_1e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data);
          FVar27.Data = local_c8.Data;
        }
        goto LAB_142493f8d;
      }
      goto LAB_142493f97;
    }
    pFVar38 = &pFVar6->bitmap;
    uVar3 = (pFVar6->bitmap).pixel_mode;
    if (uVar3 == '\a') {
      param_4->ContentType = Color;
      EVar19 = Color;
LAB_142493ff5:
      if (pFVar38 != (FT_Bitmap_ *)0x0) goto LAB_142493ffa;
LAB_142494017:
      bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("Bitmap && ((Bitmap->pixel_mode == FT_PIXEL_MODE_GRAY && OutRenderData.ContentType == ESlateFontAtlasContentType::Alpha) || (Slot->bitmap.pixel_mode == FT_PIXEL_MODE_BGRA && OutRenderData.ContentType == ESlateFontAtlasContentType::Color))"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                          ,699,L"");
      if (bVar39) {
        pcVar8 = (code *)swi(3);
        uVar16 = (*pcVar8)();
        return (bool)uVar16;
      }
    }
    else {
      if (uVar3 == '\x02') {
        EVar19 = param_4->ContentType;
        goto LAB_142493ff5;
      }
      FT_Bitmap_New(&local_558);
      FT_Bitmap_Convert(this->FTLibrary->FTLibrary,pFVar38,&local_558,4);
      EVar19 = param_4->ContentType;
      pFVar38 = &local_558;
LAB_142493ffa:
      if (((pFVar38->pixel_mode != '\x02') || (EVar19 != Alpha)) &&
         (((local_678->bitmap).pixel_mode != '\a' || (EVar19 != Color)))) goto LAB_142494017;
    }
    uVar35 = GetSlateFontAtlasContentBytesPerPixel(param_4->ContentType);
    piVar34 = &(param_4->RawPixels).ArrayMax;
    piVar1 = &(param_4->RawPixels).ArrayNum;
    *piVar1 = 0;
    local_690 = uVar35;
    if ((param_4->RawPixels).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)param_4,0,piVar34);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,pFVar38->rows * pFVar38->width * uVar35,(ForAnyElementType *)param_4,piVar1,
               piVar34);
    uVar17 = local_690;
    if (*piVar1 != 0) {
      if (pFVar38->rows != 0) {
        do {
          iVar18 = pFVar38->pitch;
          local_670 = (FFontOutlineSettings *)(ulonglong)(pFVar38->width * uVar17);
          puVar7 = pFVar38->buffer;
          uVar36 = pFVar38->width * uVar32 * uVar17;
          uVar35 = 0;
          if ((int)uVar36 < (param_4->RawPixels).ArrayNum) {
            uVar35 = ~uVar36 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar39)) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
          memcpy((param_4->RawPixels).AllocatorInstance.Data + (int)uVar36,puVar7 + uVar32 * iVar18,
                 (size_t)local_670);
          uVar32 = uVar32 + 1;
          FVar28 = local_680;
        } while (uVar32 < pFVar38->rows);
      }
      piVar34 = &(param_4->RawPixels).ArrayNum;
      uVar35 = local_690;
      if ((param_4->ContentType == Alpha) && (uVar4 = pFVar38->num_grays, uVar4 != 0x100)) {
        pFVar22 = (param_4->RawPixels).AllocatorInstance.Data;
        iVar18 = *piVar34;
        pFVar33 = pFVar22 + iVar18;
        while( true ) {
          if (*piVar34 != iVar18) {
            local_693[0] = 0;
            `TCheckedPointerIterator<unsigned_char,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_693);
          }
          FVar28 = local_680;
          uVar35 = local_690;
          if (pFVar22 == pFVar33) break;
          *pFVar22 = (FScriptContainerElement)
                     ((char)*pFVar22 * (char)(0xff / (longlong)(int)(uVar4 - 1)));
          pFVar22 = pFVar22 + 1;
        }
      }
    }
    uVar32 = 0;
    param_4->SizeX = (short)pFVar38->width;
    param_4->SizeY = (short)pFVar38->rows;
    if (pFVar38 == &local_558) {
      FT_Bitmap_Done(local_640->FTLibrary->FTLibrary);
    }
    uVar17 = uVar32;
    if (fVar49 < fVar13) {
      iVar37 = (int)((float)(int)param_4->SizeX * fVar49);
      iVar18 = (int)((float)(int)param_4->SizeY * fVar49);
      if ((0x7fff < iVar37) &&
         (bVar39 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3247713308408544537>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                              ,0x2e7,"ScaledWidth <= std::numeric_limits<int16>::max()"), bVar39)) {
        pcVar8 = (code *)swi(3);
        uVar16 = (*pcVar8)();
        return (bool)uVar16;
      }
      if ((0x7fff < iVar18) &&
         (bVar39 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3247713308408544536>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                              ,0x2e8,"ScaledHeight <= std::numeric_limits<int16>::max()"), bVar39))
      {
        pcVar8 = (code *)swi(3);
        uVar16 = (*pcVar8)();
        return (bool)uVar16;
      }
      local_668.RawPixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_668.RawPixels.ArrayNum = 0;
      local_668.RawPixels.ArrayMax = 0;
      if (param_4->ContentType == Alpha) {
        if ((uVar35 != 1) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("BytesPerPixel == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                                ,0x2ed,L""), bVar39)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        SlateFontRendererUtils::ResizeFontBitmap<1>
                  ((int)param_4->SizeX,(int)param_4->SizeY,&param_4->RawPixels,iVar37,iVar18,
                   &local_668.RawPixels);
      }
      else {
        if ((uVar35 != 4) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("BytesPerPixel == 4",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                                ,0x2f2,L""), bVar39)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        SlateFontRendererUtils::ResizeFontBitmap<4>
                  ((int)param_4->SizeX,(int)param_4->SizeY,&param_4->RawPixels,iVar37,iVar18,
                   &local_668.RawPixels);
      }
      param_4->SizeX = (short)iVar37;
      param_4->SizeY = (short)iVar18;
      if (param_4 != &local_668) {
        pFVar33 = (param_4->RawPixels).AllocatorInstance.Data;
        if (pFVar33 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar33);
        }
        (param_4->RawPixels).AllocatorInstance.Data = local_668.RawPixels.AllocatorInstance.Data;
        (param_4->RawPixels).ArrayNum = local_668.RawPixels.ArrayNum;
        (param_4->RawPixels).ArrayMax = local_668.RawPixels.ArrayMax;
        local_668.RawPixels.ArrayNum = 0;
        local_668.RawPixels.ArrayMax = 0;
        local_668.RawPixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_668.RawPixels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_668.RawPixels.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_5a8.Spans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5a8.Spans.ArrayNum = 0;
    local_5a8.Spans.ArrayMax = 0;
    local_5a8.BoundingBox.Min.field0_0x0._s_0.X = 0.0;
    local_5a8.BoundingBox.Min.field0_0x0._s_0.Y = 0.0;
    local_5a8.BoundingBox.bIsValid = false;
    local_5a8.BoundingBox._33_7_ = 0;
    local_5a8.BoundingBox.Max.field0_0x0._s_0.X = 0.0;
    local_5a8.BoundingBox.Max.field0_0x0._s_0.Y = 0.0;
    RenderOutlineRows(this->FTLibrary->FTLibrary,&pFVar6->outline,&local_5a8);
    local_5e0.Spans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5e0.Spans.ArrayNum = 0;
    local_5e0.Spans.ArrayMax = 0;
    local_5e0.BoundingBox.bIsValid = false;
    local_5e0.BoundingBox._33_7_ = 0;
    local_5e0.BoundingBox.Min.field0_0x0._0_4_ = 0;
    local_5e0.BoundingBox.Min.field0_0x0._4_4_ = 0;
    local_5e0.BoundingBox.Min.field0_0x0._8_4_ = 0;
    local_5e0.BoundingBox.Min.field0_0x0._12_4_ = 0;
    local_5e0.BoundingBox.Max.field0_0x0._0_4_ = 0;
    local_5e0.BoundingBox.Max.field0_0x0._4_4_ = 0;
    local_5e0.BoundingBox.Max.field0_0x0._8_4_ = 0;
    local_5e0.BoundingBox.Max.field0_0x0._12_4_ = 0;
    local_5e0.BoundingBox.Min.field0_0x0._s_0.X = 0.0;
    local_5e0.BoundingBox.Min.field0_0x0._s_0.Y = 0.0;
    local_5e0.BoundingBox.Max.field0_0x0._s_0.X = 0.0;
    local_5e0.BoundingBox.Max.field0_0x0._s_0.Y = 0.0;
    if (0.0 < fVar47) {
      bVar15 = param_3->bMiteredCorners;
      local_638 = 0;
      FT_Stroker_New(this->FTLibrary->FTLibrary,&local_638);
      FT_Stroker_Set(local_638,(int)(fVar47 * __real_42800000),(bVar15 != false) + '\x01',
                     -(bVar15 != false) & 2);
      local_630 = 0;
      FT_Get_Glyph(local_678,&local_630);
      FT_Glyph_StrokeBorder(&local_630,local_638,0,1);
      RenderOutlineRows(this->FTLibrary->FTLibrary,(FT_Outline_ *)(local_630 + 0x20),&local_5e0);
      FT_Stroker_Done(local_638);
      FT_Done_Glyph(local_630);
    }
    unique0x10000df9 = local_5a8.BoundingBox.Min.field0_0x0._s_0.Y;
    local_618._0_8_ = local_5a8.BoundingBox.Min.field0_0x0._s_0.X;
    uVar43 = SUB84(local_5a8.BoundingBox.Min.field0_0x0._s_0.X,0);
    uVar44 = (undefined4)((ulonglong)local_5a8.BoundingBox.Min.field0_0x0._0_8_ >> 0x20);
    local_608 = local_5a8.BoundingBox.Max.field0_0x0._s_0.X;
    uStack_600 = local_5a8.BoundingBox.Max.field0_0x0._s_0.Y;
    local_5f8 = local_5a8.BoundingBox.bIsValid;
    uStack_5f7 = local_5a8.BoundingBox._33_7_;
    uVar41 = SUB84(local_5a8.BoundingBox.Max.field0_0x0._s_0.X,0);
    uVar42 = (undefined4)((ulonglong)local_5a8.BoundingBox.Max.field0_0x0._0_8_ >> 0x20);
    uVar45 = SUB84(local_5a8.BoundingBox.Min.field0_0x0._s_0.Y,0);
    uVar46 = (undefined4)((ulonglong)local_5a8.BoundingBox.Min.field0_0x0._8_8_ >> 0x20);
    dVar40 = local_5a8.BoundingBox.Max.field0_0x0._s_0.Y;
    if (local_5a8.BoundingBox.bIsValid == false) {
      if (local_5e0.BoundingBox.bIsValid != false) {
        auVar9._4_4_ = local_5e0.BoundingBox.Max.field0_0x0._8_4_;
        auVar9._0_4_ = local_5e0.BoundingBox.Max.field0_0x0._4_4_;
        auVar9._8_4_ = local_5e0.BoundingBox.Max.field0_0x0._12_4_;
        local_5f8 = local_5e0.BoundingBox.bIsValid;
        uStack_5f7 = local_5e0.BoundingBox._33_7_;
        local_618._4_4_ = local_5e0.BoundingBox.Min.field0_0x0._4_4_;
        local_618._0_4_ = local_5e0.BoundingBox.Min.field0_0x0._0_4_;
        local_618._8_4_ = local_5e0.BoundingBox.Min.field0_0x0._8_4_;
        uStack_60c = local_5e0.BoundingBox.Min.field0_0x0._12_4_;
        local_608 = (double)CONCAT44(local_5e0.BoundingBox.Max.field0_0x0._4_4_,
                                     local_5e0.BoundingBox.Max.field0_0x0._0_4_);
        uStack_600 = CONCAT44(local_5e0.BoundingBox.Max.field0_0x0._12_4_,
                              local_5e0.BoundingBox.Max.field0_0x0._8_4_);
        uVar41 = local_5e0.BoundingBox.Max.field0_0x0._0_4_;
        uVar42 = local_5e0.BoundingBox.Max.field0_0x0._4_4_;
        uVar43 = local_5e0.BoundingBox.Min.field0_0x0._0_4_;
        uVar44 = local_5e0.BoundingBox.Min.field0_0x0._4_4_;
        uVar45 = local_5e0.BoundingBox.Min.field0_0x0._8_4_;
        uVar46 = local_5e0.BoundingBox.Min.field0_0x0._12_4_;
        dVar40 = auVar9._4_8_;
      }
    }
    else if (local_5e0.BoundingBox.bIsValid != false) {
      if (local_5a8.BoundingBox.Max.field0_0x0._s_0.X <= local_5e0.BoundingBox.Max.field0_0x0._s_0.X
         ) {
        uVar41 = SUB84(local_5e0.BoundingBox.Max.field0_0x0._s_0.X,0);
        uVar42 = (undefined4)((ulonglong)local_5e0.BoundingBox.Max.field0_0x0._0_8_ >> 0x20);
      }
      if (local_5a8.BoundingBox.Max.field0_0x0._s_0.Y <= local_5e0.BoundingBox.Max.field0_0x0._s_0.Y
         ) {
        uStack_600 = local_5e0.BoundingBox.Max.field0_0x0._s_0.Y;
      }
      local_618._0_4_ = SUB84(local_5e0.BoundingBox.Min.field0_0x0._s_0.X,0);
      local_618._4_4_ = (int)((ulonglong)local_5e0.BoundingBox.Min.field0_0x0._0_8_ >> 0x20);
      if (local_5a8.BoundingBox.Min.field0_0x0._s_0.X <= local_5e0.BoundingBox.Min.field0_0x0._s_0.X
         ) {
        local_618._0_4_ = uVar43;
        local_618._4_4_ = uVar44;
      }
      if (local_5e0.BoundingBox.Min.field0_0x0._s_0.Y <= local_5a8.BoundingBox.Min.field0_0x0._s_0.Y
         ) {
        uVar45 = SUB84(local_5e0.BoundingBox.Min.field0_0x0._s_0.Y,0);
        uVar46 = (undefined4)((ulonglong)local_5e0.BoundingBox.Min.field0_0x0._8_8_ >> 0x20);
      }
      local_608 = (double)CONCAT44(uVar42,uVar41);
      uStack_60c = uVar46;
      local_618._8_4_ = uVar45;
      uVar43 = local_618._0_4_;
      uVar44 = local_618._4_4_;
      dVar40 = (double)uStack_600;
    }
    uVar35 = (int)(longlong)(dVar40 - (double)CONCAT44(uVar46,uVar45)) + 1;
    uVar26 = (ulonglong)uVar35;
    FVar28.ComparisonIndex.Value =
         (int)(longlong)((double)CONCAT44(uVar42,uVar41) - (double)CONCAT44(uVar44,uVar43)) + 1;
    FVar28.Number = 0;
    local_688 = FVar28;
    local_628 = uVar26;
    if ((0x7fff < (int)FVar28.ComparisonIndex.Value) &&
       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3247713308408544686>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                            ,0x252,"Width <= std::numeric_limits<int16>::max()"), bVar15)) {
      pcVar8 = (code *)swi(3);
      uVar16 = (*pcVar8)();
      return (bool)uVar16;
    }
    if ((0x7fff < (int)uVar35) &&
       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3247713308408544685>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                            ,0x253,"Height <= std::numeric_limits<int16>::max()"), bVar15)) {
      pcVar8 = (code *)swi(3);
      uVar16 = (*pcVar8)();
      return (bool)uVar16;
    }
    param_4->SizeX = (short)FVar28.ComparisonIndex.Value;
    piVar34 = &(param_4->RawPixels).ArrayMax;
    param_4->SizeY = (short)uVar35;
    (param_4->RawPixels).ArrayNum = 0;
    if (*piVar34 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)param_4,0,piVar34);
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed
              (&param_4->RawPixels,uVar35 * FVar28.ComparisonIndex.Value);
    uVar25 = (ulonglong)local_5e0.Spans.ArrayNum;
    lVar31 = (longlong)stack0xfffffffffffff9f0;
    local_68c = local_5e0.Spans.ArrayNum;
    local_648 = (longlong)(double)local_618._0_8_;
    local_690 = (int)ROUND(((double)local_618._0_8_ - local_5a8.BoundingBox.Min.field0_0x0._s_0.X) +
                           ((double)local_618._0_8_ - local_5a8.BoundingBox.Min.field0_0x0._s_0.X) +
                           __real_3fe0000000000000) >> 1;
    local_668._16_4_ =
         (int)ROUND(((double)uStack_600 - local_5a8.BoundingBox.Max.field0_0x0._s_0.Y) +
                    ((double)uStack_600 - local_5a8.BoundingBox.Max.field0_0x0._s_0.Y) +
                    __real_3fe0000000000000) >> 1;
    local_640 = (FSlateFontRenderer *)(local_5e0.Spans.AllocatorInstance.Data + uVar25 * 0x10);
    pFVar33 = local_5e0.Spans.AllocatorInstance.Data + 8;
    local_668._24_8_ = lVar31;
    while( true ) {
      pFVar29 = local_640;
      if (local_5e0.Spans.ArrayNum != (int)uVar25) {
        local_696 = 0;
        `TCheckedPointerIterator<FRasterizerSpan_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_696);
        lVar31 = local_668._24_8_;
      }
      if ((FSlateFontRenderer *)(pFVar33 + -8) == pFVar29) break;
      uVar35 = uVar32;
      if (0 < *(int *)pFVar33) {
        do {
          FVar2 = pFVar33[4];
          uVar36 = (((int)uVar26 + ((int)lVar31 - *(int *)(pFVar33 + -4)) + -1) *
                    local_688.ComparisonIndex.Value - (int)local_648) + uVar35 +
                   *(int *)&((FSlateFontRenderer *)(pFVar33 + -8))->FTLibrary;
          uVar17 = 0;
          if ((int)uVar36 < (param_4->RawPixels).ArrayNum) {
            uVar17 = ~uVar36 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             lVar31 = local_668._24_8_, bVar15)) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
          uVar35 = uVar35 + 1;
          (param_4->RawPixels).AllocatorInstance.Data[(int)uVar36] = FVar2;
          uVar26 = local_628;
        } while ((int)uVar35 < *(int *)pFVar33);
      }
      pFVar33 = pFVar33 + 0x10;
      uVar25 = (ulonglong)local_68c;
    }
    uVar26 = (ulonglong)local_5a8.Spans.ArrayNum;
    local_68c = local_5a8.Spans.ArrayNum;
    pFVar33 = local_5a8.Spans.AllocatorInstance.Data + 8;
    if (fVar47 <= 0.0) {
      pFVar30 = (FFontOutlineSettings *)(local_5a8.Spans.AllocatorInstance.Data + uVar26 * 0x10);
      local_670 = pFVar30;
      while( true ) {
        if (local_5a8.Spans.ArrayNum != (int)uVar26) {
          local_694 = 0;
          `TCheckedPointerIterator<FRasterizerSpan_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_694);
        }
        FVar28 = local_680;
        if ((FFontOutlineSettings *)(pFVar33 + -8) == pFVar30) break;
        uVar35 = uVar32;
        if (0 < *(int *)pFVar33) {
          do {
            FVar2 = pFVar33[4];
            uVar36 = (((int)local_628 + -1 + (local_668.ContentType - *(int *)(pFVar33 + -4))) *
                      local_688.ComparisonIndex.Value - (int)local_648) +
                     ((FFontOutlineSettings *)(pFVar33 + -8))->OutlineSize + uVar35;
            uVar17 = 0;
            if ((int)uVar36 < (param_4->RawPixels).ArrayNum) {
              uVar17 = ~uVar36 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar8 = (code *)swi(3);
              uVar16 = (*pcVar8)();
              return (bool)uVar16;
            }
            uVar35 = uVar35 + 1;
            (param_4->RawPixels).AllocatorInstance.Data[(int)uVar36] = FVar2;
            pFVar30 = local_670;
          } while ((int)uVar35 < *(int *)pFVar33);
        }
        uVar26 = (ulonglong)local_68c;
        pFVar33 = pFVar33 + 0x10;
      }
    }
    else {
      pFVar29 = (FSlateFontRenderer *)(local_5a8.Spans.AllocatorInstance.Data + uVar26 * 0x10);
      FVar28 = local_680;
      local_640 = pFVar29;
      while( true ) {
        if (local_5a8.Spans.ArrayNum != (int)uVar26) {
          local_695 = 0;
          `TCheckedPointerIterator<FRasterizerSpan_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_695);
        }
        uVar26 = local_628;
        if ((FSlateFontRenderer *)(pFVar33 + -8) == pFVar29) break;
        uVar35 = uVar32;
        if (0 < *(int *)pFVar33) {
          do {
            uVar36 = (((local_668.ContentType - *(int *)(pFVar33 + -4)) + -1 + (int)uVar26) *
                      local_688.ComparisonIndex.Value - (int)local_648) + uVar35 +
                     *(int *)&((FSlateFontRenderer *)(pFVar33 + -8))->FTLibrary;
            uVar17 = 0;
            if ((int)uVar36 < (param_4->RawPixels).ArrayNum) {
              uVar17 = ~uVar36 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar8 = (code *)swi(3);
              uVar16 = (*pcVar8)();
              return (bool)uVar16;
            }
            FVar2 = pFVar33[4];
            pFVar22 = (param_4->RawPixels).AllocatorInstance.Data + (int)uVar36;
            if (local_670->bSeparateFillAlpha == false) {
              FVar24 = (FScriptContainerElement)0xff;
              if (FVar2 != (FScriptContainerElement)0xff) {
                FVar24 = *pFVar22;
              }
            }
            else if (FVar2 == (FScriptContainerElement)0x0) {
              FVar24 = (FScriptContainerElement)0x0;
            }
            else {
              FVar24 = (FScriptContainerElement)((char)*pFVar22 - (char)FVar2);
            }
            uVar35 = uVar35 + 1;
            *pFVar22 = FVar24;
            FVar28 = local_680;
            pFVar29 = local_640;
          } while ((int)uVar35 < *(int *)pFVar33);
        }
        uVar26 = (ulonglong)local_68c;
        pFVar33 = pFVar33 + 0x10;
      }
    }
    iVar18 = FT_Render_Glyph(local_678,bVar39 * '\x02');
    pFVar5 = local_5e8;
    if (iVar18 != 0) {
      if (2 < (byte)LogSlate._0_1_) {
        local_308.Data = (FScriptContainerElement *)0x0;
        puVar7 = (uchar *)local_5e8->style_name;
        if (puVar7 == (uchar *)0x0) {
          local_300 = (FScriptContainerElement *)0x0;
          local_2f8 = 0;
        }
        else {
          sVar23 = strlen((char *)puVar7);
          local_2f8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar7,(int)sVar23);
          uVar32 = local_2f8 + 1;
          uVar35 = uVar32;
          if (uVar32 < 0x81) {
            if (local_308.Data != (FScriptContainerElement *)0x0) {
              uVar35 = 0;
              goto LAB_142493af1;
            }
          }
          else {
LAB_142493af1:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_308,0,uVar35,2);
          }
          local_300 = local_408;
          if (local_308.Data != (FScriptContainerElement *)0x0) {
            local_300 = local_308.Data;
          }
          UE::Core::Private::Convert((wchar_t *)local_300,uVar32,puVar7,(int)sVar23 + 1);
        }
        puVar7 = (uchar *)pFVar5->family_name;
        local_428.Data = (FScriptContainerElement *)0x0;
        if (puVar7 == (uchar *)0x0) {
          local_420 = (FScriptContainerElement *)0x0;
          local_418 = 0;
        }
        else {
          sVar23 = strlen((char *)puVar7);
          local_418 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar7,(int)sVar23);
          uVar32 = local_418 + 1;
          uVar35 = uVar32;
          if (uVar32 < 0x81) {
            if (local_428.Data != (FScriptContainerElement *)0x0) {
              uVar35 = 0;
              goto LAB_142493b9c;
            }
          }
          else {
LAB_142493b9c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_428,0,uVar35,2);
          }
          local_420 = local_528;
          if (local_428.Data != (FScriptContainerElement *)0x0) {
            local_420 = local_428.Data;
          }
          UE::Core::Private::Convert((wchar_t *)local_420,uVar32,puVar7,(int)sVar23 + 1);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        if (local_428.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_428.Data);
        }
        if (local_308.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data);
        }
      }
      FVar27.Data = local_5a8.Spans.AllocatorInstance.Data;
      if (local_5e0.Spans.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e0.Spans.AllocatorInstance.Data);
        FVar27.Data = local_5a8.Spans.AllocatorInstance.Data;
      }
LAB_142493f8d:
      if (FVar27.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar27.Data);
      }
LAB_142493f97:
      bVar39 = false;
      goto LAB_142493d33;
    }
    if (local_5e0.Spans.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e0.Spans.AllocatorInstance.Data);
    }
    uVar32 = local_668._16_4_;
    uVar17 = local_690;
    if (local_5a8.Spans.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Spans.AllocatorInstance.Data);
      uVar32 = local_668._16_4_;
      uVar17 = local_690;
    }
  }
  iVar37 = (int)((float)(int)(local_678->bitmap_top + uVar32) * fVar49);
  iVar18 = (int)ROUND((float)(int)(local_678->bitmap_left + uVar17) * (fVar49 + fVar49) + fVar14) >>
           1;
  if ((0x7fff < iVar18) &&
     (bVar39 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3247713308408544508>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                          ,0x304,"HorizontalOffset <= std::numeric_limits<int16>::max()"), bVar39))
  {
    pcVar8 = (code *)swi(3);
    uVar16 = (*pcVar8)();
    return (bool)uVar16;
  }
  if ((0x7fff < iVar37) &&
     (bVar39 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3247713308408544507>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                          ,0x305,"VerticalOffset <= std::numeric_limits<int16>::max()"), bVar39)) {
    pcVar8 = (code *)swi(3);
    uVar16 = (*pcVar8)();
    return (bool)uVar16;
  }
  param_4->HorizontalOffset = (short)iVar18;
  param_4->VerticalOffset = (short)iVar37;
  bVar39 = true;
LAB_142493d33:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return bVar39;
}

// GetStrikeMetrics @ 142495ca0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateFontRenderer::GetStrikeMetrics
          (FSlateFontRenderer *this,FSlateFontInfo *param_1,float param_2,short *param_3,
          short *param_4)

{
  long lVar1;
  UObjectBaseUtility *this_00;
  EFontLayoutMethod EVar2;
  undefined4 uVar3;
  int iVar4;
  FFontData *this_01;
  FT_FaceRec_ *pFVar5;
  UClass *pUVar6;
  longlong *plVar7;
  FString *pFVar8;
  long lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString local_38;
  FString local_28 [2];
  
  this_01 = FCompositeFontCache::GetDefaultFontData(this->CompositeFontCache,param_1);
  pFVar5 = GetFontFace(this,this_01);
  if ((pFVar5 == (FT_FaceRec_ *)0x0) || ((pFVar5->face_flags & 1) == 0)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    FreeTypeUtils::ApplySizeAndScale(pFVar5,param_1->Size,param_2);
    this_00 = (UObjectBaseUtility *)(this_01->FontFaceAsset).field0_0x0.DebugPtr;
    lVar1 = (pFVar5->size->metrics).y_scale;
    if (this_00 == (UObjectBaseUtility *)0x0) {
      uVar3 = 0x3c;
    }
    else {
      pUVar6 = UFontFaceInterface::StaticClass();
      plVar7 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
      if (plVar7 == (longlong *)0x0) {
        pFVar8 = GetTypeName<IFontFaceInterface_const_>(&local_38);
        pwVar10 = L"";
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<UObject_const_>
                           (local_28,(this_01->FontFaceAsset).field0_0x0.DebugPtr);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar10,pwVar11);
      }
      uVar3 = (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    EVar2 = FFontData::GetLayoutMethod(this_01);
    if ((pFVar5->face_flags & 1U) == 0) {
      if ((pFVar5->face_flags & 2U) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (pFVar5->size->metrics).height;
      }
    }
    else if (EVar2 == Metrics) {
      lVar9 = (long)pFVar5->height;
    }
    else {
      lVar9 = (pFVar5->bbox).yMax - (pFVar5->bbox).yMin;
    }
    uVar3 = FT_MulFix(lVar9,uVar3);
    uVar3 = FT_DivFix(uVar3,100);
    iVar4 = FT_MulFix(uVar3,lVar1);
    *param_3 = (short)(iVar4 + 0x20 >> 6);
    iVar4 = FT_MulFix((int)pFVar5->underline_thickness,(pFVar5->size->metrics).y_scale);
    *param_4 = (short)(iVar4 + 0x20 >> 6);
  }
  return;
}

// GetUnderlineMetrics @ 142496f80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateFontRenderer::GetUnderlineMetrics
          (FSlateFontRenderer *this,FSlateFontInfo *param_1,float param_2,short *param_3,
          short *param_4)

{
  int iVar1;
  FFontData *pFVar2;
  FT_FaceRec_ *pFVar3;
  
  pFVar2 = FCompositeFontCache::GetDefaultFontData(this->CompositeFontCache,param_1);
  pFVar3 = GetFontFace(this,pFVar2);
  if ((pFVar3 == (FT_FaceRec_ *)0x0) || ((pFVar3->face_flags & 1) == 0)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    FreeTypeUtils::ApplySizeAndScale(pFVar3,param_1->Size,param_2);
    iVar1 = FT_MulFix((int)pFVar3->underline_position,(pFVar3->size->metrics).y_scale);
    *param_3 = (short)(iVar1 + 0x20 >> 6);
    iVar1 = FT_MulFix((int)pFVar3->underline_thickness,(pFVar3->size->metrics).y_scale);
    *param_4 = (short)(iVar1 + 0x20 >> 6);
  }
  return;
}

// HasKerning @ 1424978a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateFontRenderer::HasKerning(FSlateFontRenderer *this,FFontData *param_1)

{
  FT_FaceRec_ *pFVar1;
  
  pFVar1 = GetFontFace(this,param_1);
  if (pFVar1 == (FT_FaceRec_ *)0x0) {
    return false;
  }
  return (bool)((byte)((uint)pFVar1->face_flags >> 6) & 1);
}

