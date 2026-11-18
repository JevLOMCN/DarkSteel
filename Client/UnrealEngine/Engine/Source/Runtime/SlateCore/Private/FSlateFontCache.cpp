// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 52

// FSlateFontCache @ 1424757e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FSlateFontCache * __thiscall
FSlateFontCache::FSlateFontCache
          (FSlateFontCache *this,TSharedRef<ISlateFontAtlasFactory,1> *param_1,
          ESlateTextureAtlasThreadId param_2)

{
  FCompositeFontCache *pFVar1;
  FFreeTypeCacheDirectory *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FFreeTypeLibrary *pFVar7;
  FT_MemoryRec_ *pFVar8;
  FSlateFontCache *pFVar9;
  pmf_441c3d64 pVar10;
  pmf_441c3d64 pVar11;
  FInternationalization *pFVar12;
  FSlateTextShaper *this_00;
  pmf_441c3d64 pVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_78 [32];
  code *local_58;
  longlong lStack_50;
  
  this->_padding_ = (longlong)&___7ISlateAtlasProvider__6B_;
  FSlateFlushableAtlasCache::FSlateFlushableAtlasCache
            ((FSlateFlushableAtlasCache *)&this->_padding_,&FontAtlasFlushParams);
  this->_padding_ = (longlong)&_vftable__for__ISlateAtlasProvider__;
  this->_padding_ = (longlong)&_vftable__for__FSlateFlushableAtlasCache__;
  pFVar7 = ::operator_new(0x10);
  if (pFVar7 == (FFreeTypeLibrary *)0x0) {
    pFVar7 = (FFreeTypeLibrary *)0x0;
  }
  else {
    pFVar8 = FMemory::Malloc(0x20,0);
    pFVar7->CustomMemory = pFVar8;
    pFVar8->alloc = FreeTypeMemory::Alloc;
    pFVar7->CustomMemory->realloc = FreeTypeMemory::Realloc;
    pFVar7->CustomMemory->free = FreeTypeMemory::Free;
    pFVar7->CustomMemory->user = (void *)0x0;
    iVar6 = FT_New_Library(pFVar7->CustomMemory,pFVar7);
    if ((iVar6 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                           ,0x160,L"Could not init FreeType. Error code: %d"), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FSlateFontCache *)(*pcVar4)();
      return pFVar9;
    }
    FT_Add_Default_Modules(pFVar7->FTLibrary);
    local_res18[0] = 0x28;
    if (GSlateEnableLegacyFontHinting != 0) {
      local_res18[0] = 0x23;
    }
    FT_Property_Set(pFVar7->FTLibrary,"truetype","interpreter-version",local_res18);
    if (bLoggedVersion == false) {
      bLoggedVersion = true;
      FT_Library_Version(pFVar7->FTLibrary,local_res20,local_res10,local_res8);
      if (4 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
  }
  pVar13 = (pmf_441c3d64)0x0;
  (this->FTLibrary).Ptr = pFVar7;
  pVar10 = (pmf_441c3d64)::operator_new(0x100);
  pVar11 = pVar13;
  if (pVar10 != (pmf_441c3d64)0x0) {
    *(longlong *)pVar10 = 0;
    *(longlong *)((longlong)pVar10 + 8) = 0;
    *(longlong *)((longlong)pVar10 + 0x20) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x28) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)pVar10 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)pVar10 + 0x34) = 0;
    *(longlong *)((longlong)pVar10 + 0x40) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x48) = 0;
    *(longlong *)((longlong)pVar10 + 0x50) = 0;
    *(longlong *)((longlong)pVar10 + 0x58) = 0;
    *(longlong *)((longlong)pVar10 + 0x70) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x78) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x7c) = 0x80;
    *(undefined4 *)((longlong)pVar10 + 0x80) = 0xffffffff;
    *(undefined4 *)((longlong)pVar10 + 0x84) = 0;
    *(longlong *)((longlong)pVar10 + 0x90) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x98) = 0;
    *(longlong *)((longlong)pVar10 + 0xa0) = 0;
    *(longlong *)((longlong)pVar10 + 0xa8) = 0;
    *(longlong *)((longlong)pVar10 + 0xc0) = 0;
    *(undefined4 *)((longlong)pVar10 + 200) = 0;
    *(undefined4 *)((longlong)pVar10 + 0xcc) = 0x80;
    *(undefined4 *)((longlong)pVar10 + 0xd0) = 0xffffffff;
    *(undefined4 *)((longlong)pVar10 + 0xd4) = 0;
    *(longlong *)((longlong)pVar10 + 0xe0) = 0;
    *(undefined4 *)((longlong)pVar10 + 0xe8) = 0;
    pVar11 = (pmf_441c3d64)::operator_new(0x70);
    if (pVar11 == (pmf_441c3d64)0x0) {
      *(longlong *)((longlong)pVar10 + 0xf0) = 0x10;
      *(longlong *)((longlong)pVar10 + 0xf8) = 0;
      pVar11 = pVar13;
    }
    else {
      *(undefined4 *)((longlong)pVar11 + 8) = 1;
      *(undefined4 *)((longlong)pVar11 + 0xc) = 1;
      *(undefined ***)pVar11 =
           &
           ___7__TIntrusiveReferenceController_VFFreeTypeAdvanceCache___00_SharedPointerInternals__6B_
      ;
      *(undefined8 *)((longlong)pVar11 + 0x10) = 0;
      *(undefined8 *)((longlong)pVar11 + 0x18) = 0;
      *(undefined8 *)((longlong)pVar11 + 0x30) = 0;
      *(undefined8 *)((longlong)pVar11 + 0x38) = 0;
      *(undefined8 *)((longlong)pVar11 + 0x58) = 0;
      *(undefined8 *)((longlong)pVar11 + 0x68) = 0;
      *(undefined8 *)((longlong)pVar11 + 0x20) = 0;
      *(undefined8 *)((longlong)pVar11 + 0x28) = 0;
      *(undefined8 *)((longlong)pVar11 + 0x40) = 0;
      *(undefined4 *)((longlong)pVar11 + 0x48) = 0;
      *(undefined4 *)((longlong)pVar11 + 0x4c) = 0x80;
      *(undefined4 *)((longlong)pVar11 + 0x50) = 0xffffffff;
      *(undefined4 *)((longlong)pVar11 + 0x54) = 0;
      *(undefined8 *)((longlong)pVar11 + 0x60) = 0;
      if (((undefined8 *)((longlong)pVar11 + 0x10) == (undefined8 *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FSlateFontCache *)(*pcVar4)();
        return pFVar9;
      }
      *(undefined8 **)((longlong)pVar10 + 0xf0) = (undefined8 *)((longlong)pVar11 + 0x10);
      *(pmf_441c3d64 *)((longlong)pVar10 + 0xf8) = pVar11;
      LOCK();
      *(int *)((longlong)pVar11 + 8) = *(int *)((longlong)pVar11 + 8) + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pVar11);
    pVar11 = pVar10;
  }
  (this->FTCacheDirectory).Ptr = (FFreeTypeCacheDirectory *)pVar11;
  pVar10 = (pmf_441c3d64)::operator_new(0xb8);
  pVar11 = pVar13;
  if (pVar10 != (pmf_441c3d64)0x0) {
    *(FFreeTypeLibrary **)pVar10 = (this->FTLibrary).Ptr;
    *(undefined8 *)((longlong)pVar10 + 8) = 0;
    *(undefined8 *)((longlong)pVar10 + 0x10) = 0;
    *(undefined8 *)((longlong)pVar10 + 0x28) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x30) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x34) = 0x80;
    *(undefined4 *)((longlong)pVar10 + 0x38) = 0xffffffff;
    *(undefined4 *)((longlong)pVar10 + 0x3c) = 0;
    *(undefined8 *)((longlong)pVar10 + 0x48) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x50) = 0;
    *(undefined8 *)((longlong)pVar10 + 0x58) = 0;
    *(undefined8 *)((longlong)pVar10 + 0x60) = 0;
    *(undefined8 *)((longlong)pVar10 + 0x78) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x80) = 0;
    *(undefined4 *)((longlong)pVar10 + 0x84) = 0x80;
    *(undefined4 *)((longlong)pVar10 + 0x88) = 0xffffffff;
    *(undefined4 *)((longlong)pVar10 + 0x8c) = 0;
    *(undefined8 *)((longlong)pVar10 + 0x98) = 0;
    *(undefined4 *)((longlong)pVar10 + 0xa0) = 0;
    *(undefined8 *)((longlong)pVar10 + 0xa8) = 0;
    *(undefined8 *)((longlong)pVar10 + 0xb0) = 0;
    if ((*(longlong *)pVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FTLibrary",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.cpp"
                           ,0x116,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FSlateFontCache *)(*pcVar4)();
      return pFVar9;
    }
    pFVar12 = FInternationalization::Get();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FCompositeFontCache>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar12->CultureChangedEvent,(FCompositeFontCache *)local_78,pVar10);
    pVar11 = pVar10;
  }
  (this->CompositeFontCache).Ptr = (FCompositeFontCache *)pVar11;
  pVar10 = (pmf_441c3d64)::operator_new(0x18);
  pVar11 = pVar13;
  if (pVar10 != (pmf_441c3d64)0x0) {
    pFVar7 = (this->FTLibrary).Ptr;
    pFVar1 = (this->CompositeFontCache).Ptr;
    pFVar2 = (this->FTCacheDirectory).Ptr;
    *(FFreeTypeLibrary **)pVar10 = pFVar7;
    *(FFreeTypeCacheDirectory **)((longlong)pVar10 + 8) = pFVar2;
    *(FCompositeFontCache **)((longlong)pVar10 + 0x10) = pFVar1;
    if ((pFVar7 == (FFreeTypeLibrary *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FTLibrary",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                           ,0xbb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FSlateFontCache *)(*pcVar4)();
      return pFVar9;
    }
    if ((*(longlong *)((longlong)pVar10 + 8) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FTCacheDirectory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                           ,0xbc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FSlateFontCache *)(*pcVar4)();
      return pFVar9;
    }
    pVar11 = pVar10;
    if ((*(longlong *)((longlong)pVar10 + 0x10) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompositeFontCache",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateFontRenderer.cpp"
                           ,0xbd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FSlateFontCache *)(*pcVar4)();
      return pFVar9;
    }
  }
  (this->FontRenderer).Ptr = (FSlateFontRenderer *)pVar11;
  this_00 = ::operator_new(0x98);
  if (this_00 != (FSlateTextShaper *)0x0) {
    pVar13 = (pmf_441c3d64)
             FSlateTextShaper::FSlateTextShaper
                       (this_00,(this->FTCacheDirectory).Ptr,(this->CompositeFontCache).Ptr,
                        (this->FontRenderer).Ptr,this);
  }
  (this->TextShaper).Ptr = (FSlateTextShaper *)pVar13;
  FSlateSdfGenerator::create();
  *(undefined8 *)&this->FontToCharacterListCache = 0;
  *(undefined8 *)&(this->FontToCharacterListCache).field_0x8 = 0;
  *(undefined8 *)&(this->FontToCharacterListCache).field_0x20 = 0;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x28 = 0;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x34 = 0;
  *(undefined8 *)&(this->FontToCharacterListCache).field_0x40 = 0;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x48 = 0;
  *(undefined8 *)&this->ShapedGlyphToAtlasData = 0;
  *(undefined8 *)&(this->ShapedGlyphToAtlasData).field_0x8 = 0;
  *(undefined8 *)&(this->ShapedGlyphToAtlasData).field_0x20 = 0;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x28 = 0;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x34 = 0;
  *(undefined8 *)&(this->ShapedGlyphToAtlasData).field_0x40 = 0;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x48 = 0;
  *(undefined8 *)&this->SdfGlyphToAtlasData = 0;
  *(undefined8 *)&(this->SdfGlyphToAtlasData).field_0x8 = 0;
  *(undefined8 *)&(this->SdfGlyphToAtlasData).field_0x20 = 0;
  *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x28 = 0;
  *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x34 = 0;
  *(undefined8 *)&(this->SdfGlyphToAtlasData).field_0x40 = 0;
  *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x48 = 0;
  *(undefined8 *)&this->SdfTaskToAtlasData = 0;
  *(undefined8 *)&(this->SdfTaskToAtlasData).field_0x8 = 0;
  *(undefined8 *)&(this->SdfTaskToAtlasData).field_0x20 = 0;
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x28 = 0;
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x34 = 0;
  *(undefined8 *)&(this->SdfTaskToAtlasData).field_0x40 = 0;
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x48 = 0;
  (this->GrayscaleFontAtlasIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrayscaleFontAtlasIndices).ArrayNum = 0;
  (this->GrayscaleFontAtlasIndices).ArrayMax = 0;
  (this->ColorFontAtlasIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorFontAtlasIndices).ArrayNum = 0;
  (this->ColorFontAtlasIndices).ArrayMax = 0;
  (this->MsdfFontAtlasIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MsdfFontAtlasIndices).ArrayNum = 0;
  (this->MsdfFontAtlasIndices).ArrayMax = 0;
  (this->NonAtlasedTextureIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonAtlasedTextureIndices).ArrayNum = 0;
  (this->NonAtlasedTextureIndices).ArrayMax = 0;
  (this->AllFontTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllFontTextures).ArrayNum = 0;
  (this->AllFontTextures).ArrayMax = 0;
  (this->FontAtlasFactory).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->FontAtlasFactory).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bFlushRequested = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FontObjectsToFlushCS,4000);
  (this->FontObjectsToFlush).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontObjectsToFlush).ArrayNum = 0;
  (this->FontObjectsToFlush).ArrayMax = 0;
  *(undefined8 *)&this->OnReleaseResourcesDelegate = 0;
  *(undefined8 *)&(this->OnReleaseResourcesDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnReleaseResourcesDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnReleaseResourcesDelegate).field_0x18 = 2;
  this->OwningThread = param_2;
  FText::AsLocalizable_Advanced_LocText
            (&this->EllipsisText,L"FontCache",L"TextOverflowIndicator",L"…");
  local_78._8_4_ = 0;
  local_78._0_8_ = HandleCultureChanged;
  lStack_50 = (ulonglong)(uint)local_78._12_4_ << 0x20;
  local_58 = HandleCultureChanged;
  pFVar12 = FInternationalization::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FSlateFontCache>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar12->CultureChangedEvent,(FSlateFontCache *)(local_78 + 0x10),(pmf_e74cd4cc *)this
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSlateFontCache @ 1424796a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FSlateFontCache::~FSlateFontCache(FSlateFontCache *this)

{
  undefined1 *puVar1;
  TMap<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>_>
  *this_00;
  int iVar2;
  FFreeTypeCacheDirectory *pFVar3;
  FSlateTextShaper *pFVar4;
  void *pvVar5;
  ITextBiDi *pIVar6;
  FSlateFontRenderer *pFVar7;
  FCompositeFontCache *pFVar8;
  FFreeTypeLibrary *pFVar9;
  ITextData *pIVar10;
  FScriptContainerElement *pFVar11;
  FSlateSdfGenerator *pFVar12;
  FAsyncTaskBase *this_01;
  bool bVar13;
  FInternationalization *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&_vftable__for__ISlateAtlasProvider__;
  this->_padding_ = (longlong)&_vftable__for__FSlateFlushableAtlasCache__;
  pFVar14 = FInternationalization::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar14->CultureChangedEvent,
             this);
  pFVar3 = (this->FTCacheDirectory).Ptr;
  if (pFVar3 != (FFreeTypeCacheDirectory *)0x0) {
    (this->FTCacheDirectory).Ptr = (FFreeTypeCacheDirectory *)0x0;
    TDefaultDelete<FFreeTypeCacheDirectory>::operator()
              ((TDefaultDelete<FFreeTypeCacheDirectory> *)&this->FTCacheDirectory,pFVar3);
  }
  bVar13 = 1 < *(int *)&(this->FontToCharacterListCache).field_0x48;
  if (!bVar13) {
    TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
                      *)&this->FontToCharacterListCache);
  }
  TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->FontToCharacterListCache,0,
                    *(int *)&(this->FontToCharacterListCache).field_0x8);
  puVar1 = &(this->FontToCharacterListCache).field_0xc;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)&this->FontToCharacterListCache,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x34 = 0;
  iVar2 = *(int *)&(this->FontToCharacterListCache).field_0x2c;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->FontToCharacterListCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FontToCharacterListCache).field_0x10,
               0);
  }
  if (bVar13) {
    *(undefined4 *)&(this->FontToCharacterListCache).field_0x48 = 1;
    TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
              *)&this->FontToCharacterListCache);
  }
  this_00 = &this->ShapedGlyphToAtlasData;
  bVar13 = 1 < *(int *)&(this->ShapedGlyphToAtlasData).field_0x48;
  if (!bVar13) {
    TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ShapedGlyphToAtlasData).field_0x8);
  puVar1 = &(this->ShapedGlyphToAtlasData).field_0xc;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x34 = 0;
  iVar2 = *(int *)&(this->ShapedGlyphToAtlasData).field_0x2c;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ShapedGlyphToAtlasData).field_0x10,0)
    ;
  }
  if (bVar13) {
    *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x48 = 1;
    TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  pFVar4 = (this->TextShaper).Ptr;
  if (pFVar4 != (FSlateTextShaper *)0x0) {
    (this->TextShaper).Ptr = (FSlateTextShaper *)0x0;
    FHarfBuzzFontCache::Flush(&pFVar4->HarfBuzzFontCache);
    hb_font_funcs_destroy((pFVar4->HarfBuzzFontCache).CustomHarfBuzzFuncs);
    (pFVar4->HarfBuzzFontCache).CustomHarfBuzzFuncs = (hb_font_funcs_t *)0x0;
    *(undefined4 *)&(pFVar4->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar4->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(pFVar4->HarfBuzzFontCache).HarfBuzzFontCacheMap);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->GraphemeBreakIterator).SharedReferenceCount.ReferenceController);
    pIVar6 = (pFVar4->TextBiDiDetection).Ptr;
    if (pIVar6 != (ITextBiDi *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    ::operator_delete(pFVar4,0x98);
  }
  pFVar7 = (this->FontRenderer).Ptr;
  if (pFVar7 != (FSlateFontRenderer *)0x0) {
    (this->FontRenderer).Ptr = (FSlateFontRenderer *)0x0;
    ::operator_delete(pFVar7,0x18);
  }
  pFVar8 = (this->CompositeFontCache).Ptr;
  if (pFVar8 != (FCompositeFontCache *)0x0) {
    (this->CompositeFontCache).Ptr = (FCompositeFontCache *)0x0;
    TDefaultDelete<FCompositeFontCache>::operator()
              ((TDefaultDelete<FCompositeFontCache> *)&this->CompositeFontCache,pFVar8);
  }
  pFVar9 = (this->FTLibrary).Ptr;
  if (pFVar9 != (FFreeTypeLibrary *)0x0) {
    (this->FTLibrary).Ptr = (FFreeTypeLibrary *)0x0;
    FT_Done_Library(pFVar9->FTLibrary);
    FMemory::Free(pFVar9->CustomMemory);
    ::operator_delete(pFVar9,0x10);
  }
  pIVar10 = (this->EllipsisText).TextData.Reference;
  if (pIVar10 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar10 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnReleaseResourcesDelegate).field_0x8,
             *(int *)&(this->OnReleaseResourcesDelegate).field_0x10);
  pvVar5 = *(void **)&(this->OnReleaseResourcesDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReleaseResourcesDelegate);
  pFVar11 = (this->FontObjectsToFlush).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FontObjectsToFlushCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FontAtlasFactory).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<ISlateFontTexture,1>,int>
            ((TSharedRef<ISlateFontTexture,1> *)(this->AllFontTextures).AllocatorInstance.Data,
             (this->AllFontTextures).ArrayNum);
  pFVar11 = (this->AllFontTextures).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pFVar11 = (this->NonAtlasedTextureIndices).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pFVar11 = (this->MsdfFontAtlasIndices).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pFVar11 = (this->ColorFontAtlasIndices).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pFVar11 = (this->GrayscaleFontAtlasIndices).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x48 = 0;
  pvVar5 = *(void **)&(this->SdfTaskToAtlasData).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SdfTaskToAtlasData);
  *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x48 = 0;
  pvVar5 = *(void **)&(this->SdfGlyphToAtlasData).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SdfGlyphToAtlasData);
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ShapedGlyphToAtlasData).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x48 = 0;
  pvVar5 = *(void **)&(this->FontToCharacterListCache).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FontToCharacterListCache);
  pFVar12 = (this->SdfGenerator).Ptr;
  if (pFVar12 != (FSlateSdfGenerator *)0x0) {
    (**(code **)*pFVar12)(pFVar12,1);
  }
  pFVar4 = (this->TextShaper).Ptr;
  if (pFVar4 != (FSlateTextShaper *)0x0) {
    FHarfBuzzFontCache::Flush(&pFVar4->HarfBuzzFontCache);
    hb_font_funcs_destroy((pFVar4->HarfBuzzFontCache).CustomHarfBuzzFuncs);
    (pFVar4->HarfBuzzFontCache).CustomHarfBuzzFuncs = (hb_font_funcs_t *)0x0;
    *(undefined4 *)&(pFVar4->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar4->HarfBuzzFontCache).HarfBuzzFontCacheMap.field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(pFVar4->HarfBuzzFontCache).HarfBuzzFontCacheMap);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->GraphemeBreakIterator).SharedReferenceCount.ReferenceController);
    pIVar6 = (pFVar4->TextBiDiDetection).Ptr;
    if (pIVar6 != (ITextBiDi *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    ::operator_delete(pFVar4,0x98);
  }
  ::operator_delete((this->FontRenderer).Ptr,0x18);
  pFVar8 = (this->CompositeFontCache).Ptr;
  if (pFVar8 != (FCompositeFontCache *)0x0) {
    pFVar14 = FInternationalization::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar14->CultureChangedEvent,
               pFVar8);
    pFVar15 = (pFVar8->LoadFontFaceTasks).AllocatorInstance.Data;
    iVar2 = (pFVar8->LoadFontFaceTasks).ArrayNum;
    pFVar11 = pFVar15 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar8->LoadFontFaceTasks).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAsyncTask<FAsyncLoadFontFaceData>_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar11) break;
      this_01 = *(FAsyncTaskBase **)pFVar15;
      FAsyncTaskBase::EnsureCompletion(this_01,true,false);
      if (this_01 != (FAsyncTaskBase *)0x0) {
        (**(code **)(this_01->_padding_ + 0x28))(this_01,1);
      }
      pFVar15 = pFVar15 + 8;
    }
    pFVar11 = (pFVar8->LoadFontFaceTasks).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    *(undefined4 *)&(pFVar8->FontFaceMap).field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar8->FontFaceMap).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar8->FontFaceMap);
    *(undefined4 *)&(pFVar8->CompositeFontToCachedDataMap).field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar8->CompositeFontToCachedDataMap).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar8->CompositeFontToCachedDataMap);
    ::operator_delete(pFVar8,0xb8);
  }
  pFVar3 = (this->FTCacheDirectory).Ptr;
  if (pFVar3 != (FFreeTypeCacheDirectory *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->InvalidAdvanceCache).SharedReferenceCount.ReferenceController);
    *(undefined4 *)&(pFVar3->KerningCacheMap).field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar3->KerningCacheMap).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar3->KerningCacheMap);
    *(undefined4 *)&(pFVar3->AdvanceCacheMap).field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar3->AdvanceCacheMap).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar3->AdvanceCacheMap);
    *(undefined4 *)&(pFVar3->GlyphCacheMap).field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar3->GlyphCacheMap).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)pFVar3);
    ::operator_delete(pFVar3,0x100);
  }
  pFVar9 = (this->FTLibrary).Ptr;
  if (pFVar9 != (FFreeTypeLibrary *)0x0) {
    FT_Done_Library(pFVar9->FTLibrary);
    FMemory::Free(pFVar9->CustomMemory);
    ::operator_delete(pFVar9,0x10);
  }
  this->_padding_ = (longlong)&___7FSlateFlushableAtlasCache__6B_;
  this->_padding_ = (longlong)&___7ISlateAtlasProvider__6B_;
  return;
}

// operator() @ 14247abd0

void __thiscall
`FSlateFontCache::AddNewEntry'::__l2::<lambda_1>::operator()
          (void *this,FAtlasedTextureSlot *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  uVar1 = param_1->X;
  uVar2 = param_1->Y;
  uVar3 = param_1->Width;
  uVar4 = param_1->Height;
  if (0xffff < uVar1) {
    ``FSlateFontCache::AddNewEntry'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (0xffff < uVar2) {
    ``FSlateFontCache::AddNewEntry'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()
              (local_res8);
  }
  if (0xffff < uVar3) {
    ``FSlateFontCache::AddNewEntry'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()
              (local_res8);
  }
  if (0xffff < uVar4) {
    ``FSlateFontCache::AddNewEntry'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()
              (local_res8);
  }
  **(undefined2 **)this = (short)uVar1;
  **(undefined2 **)((longlong)this + 8) = (short)uVar2;
  **(undefined2 **)((longlong)this + 0x10) = (short)uVar3;
  **(undefined2 **)((longlong)this + 0x18) = (short)uVar4;
  **(uchar **)((longlong)this + 0x20) = param_1->Padding;
  return;
}

// operator() @ 14247ac90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
`FSlateFontCache::GetSdfGlyphFontAtlasData'::__l2::<lambda_1>::operator()
          (void *this,FSdfGlyphFontAtlasData *param_1)

{
  atomic<int> *paVar1;
  float fVar2;
  float fVar3;
  atomic<int> aVar4;
  uint uVar5;
  ESlateFontAtlasContentType EVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ushort local_res8;
  ushort local_resa;
  short local_resc;
  short local_rese;
  TWeakPtr<FFreeTypeFace,1> local_98;
  FFreeTypeFace *local_88;
  TReferenceControllerBase<1> *local_80;
  uint local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  int local_68;
  FSdfGlyphEntryKey local_60;
  
  plVar7 = *(longlong **)this;
  fVar2 = param_1->EmInnerSpread;
  fVar3 = param_1->EmOuterSpread;
  uVar5 = *(uint *)(plVar7 + 2);
  iVar11 = **(int **)((longlong)this + 0x10);
  EVar6 = **(ESlateFontAtlasContentType **)((longlong)this + 8);
  if (*plVar7 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
  }
  local_98.Object = *(FFreeTypeFace **)*plVar7;
  local_98.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)((undefined8 *)*plVar7)[1];
  if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FSdfGlyphEntryKey::FSdfGlyphEntryKey(&local_60,&local_98,uVar5,EVar6,iVar11,fVar3,fVar2);
  local_88 = local_60.FontFace.Object;
  local_80 = local_60.FontFace.WeakReferenceCount.ReferenceController;
  if (local_60.FontFace.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_60.FontFace.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_60.FontFace.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_70 = param_1->EmOuterSpread;
  local_6c = param_1->EmInnerSpread;
  local_78 = local_60.GlyphIndex;
  local_74 = **(undefined4 **)((longlong)this + 0x18);
  local_68 = local_60.Ppem;
  local_res8 = param_1->USize;
  local_resa = param_1->VSize;
  local_resc = param_1->HorizontalOffset;
  local_rese = param_1->VerticalOffset;
  plVar7 = *(longlong **)(*(longlong *)((longlong)this + 0x20) + 0x58);
  iVar11 = (**(code **)(*plVar7 + 0x18))(plVar7,&local_88,&local_res8);
  if (iVar11 == 4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("RespawnStatus != FSlateSdfGenerator::ERequestResponse::BAD_REQUEST",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                       ,0x56e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
  }
  if (local_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_80->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(local_80->_padding_ + 8))(local_80,1);
    }
  }
  if (local_60.FontFace.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    paVar1 = &(local_60.FontFace.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_60.FontFace.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_60.FontFace.WeakReferenceCount.ReferenceController,1);
    }
  }
  return iVar11 == 0;
}

// operator() @ 14247ba20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
`FSlateFontCache::ConditionalDumpFontCacheStats'::__l5::<lambda_1>::operator()
          (void *this,FFontCacheStatsKey *param_1,FFontCacheStatsKey *param_2)

{
  FFreeTypeFace *pFVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  FFreeTypeFace *pFVar5;
  FFreeTypeFace *pFVar6;
  FFreeTypeFace *pFVar7;
  FFreeTypeFace *pFVar8;
  FFreeTypeFace *pFVar9;
  bool bVar10;
  
  pFVar1 = (FFreeTypeFace *)(param_1->FontFace).WeakReferenceCount.ReferenceController;
  pFVar9 = (FFreeTypeFace *)0x0;
  pFVar6 = pFVar1;
  pFVar7 = pFVar9;
  if (pFVar1 != (FFreeTypeFace *)0x0) {
    iVar3 = *(int *)&(pFVar1->Memory).Object;
    do {
      pFVar6 = pFVar9;
      pFVar7 = (FFreeTypeFace *)0x0;
      if (iVar3 == 0) goto LAB_14247ba75;
      LOCK();
      iVar4 = *(int *)&(pFVar1->Memory).Object;
      bVar10 = iVar3 == iVar4;
      if (bVar10) {
        *(int *)&(pFVar1->Memory).Object = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar10);
    pFVar6 = pFVar1;
    pFVar7 = (param_1->FontFace).Object;
  }
LAB_14247ba75:
  pFVar1 = (FFreeTypeFace *)(param_2->FontFace).WeakReferenceCount.ReferenceController;
  pFVar5 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FFreeTypeFace *)0x0) {
    iVar3 = *(int *)&(pFVar1->Memory).Object;
    do {
      pFVar5 = pFVar9;
      if (iVar3 == 0) goto LAB_14247baa1;
      LOCK();
      iVar4 = *(int *)&(pFVar1->Memory).Object;
      bVar10 = iVar3 == iVar4;
      if (bVar10) {
        *(int *)&(pFVar1->Memory).Object = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar10);
    pFVar5 = pFVar1;
    pFVar8 = (param_2->FontFace).Object;
  }
LAB_14247baa1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  if (pFVar7 == pFVar8) {
    bVar10 = param_1->FontRenderSize < param_2->FontRenderSize;
    if ((((param_1->FontRenderSize == param_2->FontRenderSize) &&
         (bVar10 = param_1->OutlineRenderSize < param_2->OutlineRenderSize,
         param_1->OutlineRenderSize == param_2->OutlineRenderSize)) &&
        (bVar10 = param_1->OutlineMiteredCorners < param_2->OutlineMiteredCorners,
        param_1->OutlineMiteredCorners == param_2->OutlineMiteredCorners)) &&
       (bVar10 = param_1->OutlineSeparateFillAlpha < param_2->OutlineSeparateFillAlpha,
       param_1->OutlineSeparateFillAlpha == param_2->OutlineSeparateFillAlpha)) {
      bVar10 = param_1->FontSkew < param_2->FontSkew;
    }
  }
  else {
    pFVar1 = (FFreeTypeFace *)(param_1->FontFace).WeakReferenceCount.ReferenceController;
    pFVar6 = pFVar9;
    pFVar7 = pFVar1;
    if (pFVar1 != (FFreeTypeFace *)0x0) {
      iVar3 = *(int *)&(pFVar1->Memory).Object;
      do {
        pFVar7 = pFVar9;
        if (iVar3 == 0) goto LAB_14247bb21;
        LOCK();
        iVar4 = *(int *)&(pFVar1->Memory).Object;
        bVar10 = iVar3 == iVar4;
        if (bVar10) {
          *(int *)&(pFVar1->Memory).Object = iVar3 + 1;
          iVar4 = iVar3;
        }
        UNLOCK();
        iVar3 = iVar4;
      } while (!bVar10);
      pFVar6 = (param_1->FontFace).Object;
      pFVar7 = pFVar1;
    }
LAB_14247bb21:
    pFVar1 = (FFreeTypeFace *)(param_2->FontFace).WeakReferenceCount.ReferenceController;
    pcVar2 = pFVar6->FTFace->family_name;
    pFVar6 = pFVar1;
    if (pFVar1 != (FFreeTypeFace *)0x0) {
      iVar3 = *(int *)&(pFVar1->Memory).Object;
      do {
        pFVar6 = pFVar9;
        if (iVar3 == 0) goto LAB_14247bb51;
        LOCK();
        iVar4 = *(int *)&(pFVar1->Memory).Object;
        bVar10 = iVar3 == iVar4;
        if (bVar10) {
          *(int *)&(pFVar1->Memory).Object = iVar3 + 1;
          iVar4 = iVar3;
        }
        UNLOCK();
        iVar3 = iVar4;
      } while (!bVar10);
      pFVar9 = (param_2->FontFace).Object;
      pFVar6 = pFVar1;
    }
LAB_14247bb51:
    bVar10 = pcVar2 < pFVar9->FTFace->family_name;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
  }
  return bVar10;
}

// operator() @ 14247bba0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
`FSlateFontCache::UpdateCache'::__l5::<lambda_1>::operator()
          (void *this,FRequestDescriptor *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  atomic<int> *paVar1;
  float fVar2;
  float fVar3;
  atomic<int> aVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ESdfType EVar10;
  int iVar11;
  longlong lVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  bool bVar16;
  uint uVar17;
  byte *pbVar18;
  TWeakPtr<FFreeTypeFace,1> *this_00;
  longlong *plVar19;
  ESlateFontAtlasContentType EVar20;
  byte *pbVar21;
  longlong lVar22;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_100;
  FSdfGlyphTaskKey local_f0;
  TWeakPtr<FFreeTypeFace,1> local_b8;
  FAtlasedTextureSlot local_a8;
  FSdfGlyphEntryKey local_80;
  
  EVar10 = param_1->SdfType;
  EVar20 = Alpha;
  if ((((EVar10 != Simple) && (EVar10 != Perpendicular)) &&
      (EVar20 = Msdf, EVar10 != MultichannelAndSimple)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                          ,0x764,L""), bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  local_b8.Object = (param_1->FontFace).Object;
  fVar2 = param_1->EmInnerSpread;
  fVar3 = param_1->EmOuterSpread;
  iVar11 = param_1->Ppem;
  uVar17 = param_1->GlyphIndex;
  local_b8.WeakReferenceCount.ReferenceController =
       (param_1->FontFace).WeakReferenceCount.ReferenceController;
  if (local_b8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FSdfGlyphEntryKey::FSdfGlyphEntryKey(&local_80,&local_b8,uVar17,EVar20,iVar11,fVar3,fVar2);
  FSdfGlyphTaskKey::FSdfGlyphTaskKey
            (&local_f0,&local_80,param_1->EmOuterSpread,param_1->EmInnerSpread);
  lVar12 = *(longlong *)this;
  if (*(int *)(lVar12 + 0x158) != *(int *)(lVar12 + 0x184)) {
    lVar22 = *(longlong *)(lVar12 + 400);
    if (*(longlong *)(lVar12 + 400) == 0) {
      lVar22 = lVar12 + 0x188;
    }
    iVar11 = *(int *)(lVar22 + (ulonglong)(*(int *)(lVar12 + 0x198) - 1U & local_f0.KeyHash) * 4);
    while (iVar11 != -1) {
      lVar22 = (longlong)iVar11 * 0x50;
      this_00 = (TWeakPtr<FFreeTypeFace,1> *)(*(longlong *)(lVar12 + 0x150) + lVar22);
      bVar16 = TWeakPtr<FFreeTypeFace,1>::UEOpEquals<FFreeTypeFace>
                         (this_00,(TWeakPtr<FFreeTypeFace,1> *)&local_f0);
      if ((((bVar16) && (*(uint *)&this_00[1].Object == local_f0.SdfGlyphEntryKey.GlyphIndex)) &&
          ((*(ESlateFontAtlasContentType *)((longlong)&this_00[1].Object + 4) ==
            local_f0.SdfGlyphEntryKey.AtlasContentType &&
           ((*(int *)&this_00[1].WeakReferenceCount.ReferenceController ==
             local_f0.SdfGlyphEntryKey.Ppem &&
            (*(int *)((longlong)&this_00[1].WeakReferenceCount.ReferenceController + 4) ==
             local_f0.SdfGlyphEntryKey.SpreadCategory)))))) &&
         ((local_f0.EmOuterSpread == *(float *)&this_00[2].WeakReferenceCount.ReferenceController &&
          (local_f0.EmInnerSpread ==
           *(float *)((longlong)&this_00[2].WeakReferenceCount.ReferenceController + 4))))) {
        if (iVar11 != -1) {
          lVar22 = *(longlong *)(lVar12 + 0x150) + lVar22;
          plVar19 = (longlong *)(lVar22 + 0x38);
          if (lVar22 == 0) {
            plVar19 = (longlong *)0x0;
          }
          if (plVar19 != (longlong *)0x0) {
            if (*(char *)(*plVar19 + 0x25) == '\0') goto LAB_14247c028;
            lVar12 = *(longlong *)this;
            bVar5 = *(byte *)(*plVar19 + 0x24);
            if (*(int *)(lVar12 + 0x1e8) <= (int)(uint)bVar5) goto LAB_14247bead;
            lVar22 = 0x1c0;
            if (param_1->SdfType != MultichannelAndSimple) {
              lVar22 = 0x1a0;
            }
            pbVar18 = *(byte **)(lVar22 + lVar12);
            pbVar21 = pbVar18 + *(int *)(lVar22 + 8 + lVar12);
            goto joined_r0x00014247be97;
          }
        }
        break;
      }
      iVar11 = *(int *)(lVar22 + 0x48 + *(longlong *)(lVar12 + 0x150));
    }
  }
  goto LAB_14247bd87;
joined_r0x00014247be97:
  if (pbVar18 == pbVar21) goto LAB_14247bead;
  if (*pbVar18 == bVar5) goto LAB_14247bed3;
  pbVar18 = pbVar18 + 1;
  goto joined_r0x00014247be97;
LAB_14247bead:
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("AllFontTextures.IsValidIndex((*FoundAtlasData)->TextureIndex) && (InRequestDescriptor.SdfType == FSlateSdfGenerator::ESdfType::MultichannelAndSimple ? MsdfFontAtlasIndices : GrayscaleFontAtlasIndices).Contains((*FoundAtlasData)->TextureIndex)"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                      ,0x773,L"");
  if (bVar16) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
LAB_14247bed3:
  lVar12 = *(longlong *)this;
  bVar5 = *(byte *)(*plVar19 + 0x24);
  if ((*(int *)(lVar12 + 0x1e8) <= (int)(uint)bVar5) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x1e0) + (ulonglong)bVar5 * 0x10);
  lVar22 = *plVar19;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  sVar6 = *(short *)(lVar22 + 4);
  sVar7 = *(short *)(lVar22 + 6);
  sVar8 = *(short *)(lVar22 + 8);
  sVar9 = *(short *)(lVar22 + 10);
  if (&local_100 != param_2) {
    local_100.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = param_2->ArrayNum;
    local_100.ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  bVar16 = *(int *)(lVar12 + 0x44) != 0;
  if ((((0 < sVar8) && (0 < sVar9)) && ((short)(ushort)bVar16 <= sVar6)) &&
     ((short)(ushort)bVar16 <= sVar7)) {
    uVar17 = GetSlateFontAtlasContentBytesPerPixel(*(ESlateFontAtlasContentType *)(lVar12 + 0x50));
    if (local_100.ArrayNum == uVar17 * (int)sVar9 * (int)sVar8) {
      local_a8.X = (int)sVar6 - (uint)bVar16;
      local_a8.Y = (int)sVar7 - (uint)bVar16;
      local_a8.Width = (uint)bVar16 * 2 + (int)sVar8;
      local_a8.Height = (uint)bVar16 * 2 + (int)sVar9;
      local_a8._padding_ = 0;
      local_a8._padding_ = 0;
      local_a8.Padding = bVar16;
      FSlateTextureAtlas::CopyDataIntoSlot((FSlateTextureAtlas *)(lVar12 + 8),&local_a8,&local_100);
      FSlateTextureAtlas::MarkTextureDirty((FSlateTextureAtlas *)(lVar12 + 8));
    }
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
LAB_14247c028:
  lVar12 = *(longlong *)this;
  if (*(int *)(lVar12 + 0x158) != *(int *)(lVar12 + 0x184)) {
    TSet<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FSdfGlyphTaskKey>
              ((TSet<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                *)(lVar12 + 0x150),local_f0.KeyHash,&local_f0);
  }
LAB_14247bd87:
  if (local_f0.SdfGlyphEntryKey.FontFace.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_f0.SdfGlyphEntryKey.FontFace.WeakReferenceCount.ReferenceController)->
              WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_f0.SdfGlyphEntryKey.FontFace.WeakReferenceCount.ReferenceController)->
                   _padding_ + 8))
                (local_f0.SdfGlyphEntryKey.FontFace.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_80.FontFace.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    paVar1 = &(local_80.FontFace.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_80.FontFace.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_80.FontFace.WeakReferenceCount.ReferenceController,1);
    }
  }
  pTVar13 = (param_1->FontFace).WeakReferenceCount.ReferenceController;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar13->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  pFVar14 = (param_2->AllocatorInstance).Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return;
}

// operator() @ 14247c4f0

FSdfGlyphFontAtlasData * __thiscall
`FSlateFontCache::GetSdfGlyphFontAtlasData'::__l2::<lambda_2>::operator()
          (void *this,FSdfGlyphFontAtlasData *__return_storage_ptr__,
          TSharedRef<FSdfGlyphFontAtlasData,1> *param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  FSdfGlyphFontAtlasData *pFVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  FMetrics FVar24;
  
  lVar5 = *(longlong *)this;
  lVar19 = (longlong)**(int **)((longlong)this + 8);
  *(FSdfGlyphFontAtlasData **)(lVar5 + 0x68 + lVar19 * 0x10) = param_1->Object;
  pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar6 != *(TReferenceControllerBase<1> **)(lVar5 + 0x70 + lVar19 * 0x10)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar7 = *(longlong **)(lVar5 + 0x70 + lVar19 * 0x10);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    *(TReferenceControllerBase<1> **)(lVar5 + 0x70 + lVar19 * 0x10) = pTVar6;
  }
  pFVar8 = param_1->Object;
  sVar12 = pFVar8->HorizontalOffset;
  uVar13 = pFVar8->StartU;
  uVar14 = pFVar8->StartV;
  uVar15 = pFVar8->USize;
  uVar16 = pFVar8->VSize;
  fVar3 = pFVar8->EmOuterSpread;
  fVar20 = pFVar8->EmInnerSpread;
  fVar21 = (pFVar8->Metrics).BearingX;
  fVar17 = (pFVar8->Metrics).BearingY;
  fVar18 = (pFVar8->Metrics).Width;
  __return_storage_ptr__->VerticalOffset = pFVar8->VerticalOffset;
  __return_storage_ptr__->HorizontalOffset = sVar12;
  __return_storage_ptr__->StartU = uVar13;
  __return_storage_ptr__->StartV = uVar14;
  __return_storage_ptr__->USize = uVar15;
  __return_storage_ptr__->VSize = uVar16;
  __return_storage_ptr__->EmOuterSpread = fVar3;
  uVar4 = *(undefined8 *)&(pFVar8->Metrics).Height;
  __return_storage_ptr__->EmInnerSpread = fVar20;
  (__return_storage_ptr__->Metrics).BearingX = fVar21;
  (__return_storage_ptr__->Metrics).BearingY = fVar17;
  (__return_storage_ptr__->Metrics).Width = fVar18;
  *(undefined8 *)&(__return_storage_ptr__->Metrics).Height = uVar4;
  if (__return_storage_ptr__->bSupportsSdf != false) {
    fVar3 = **(float **)((longlong)this + 0x10);
    fVar21 = ((float)(int)__return_storage_ptr__->VerticalOffset - __real_3f000000) * fVar3;
    auVar11._4_4_ = fVar21;
    auVar11._0_4_ = fVar21;
    auVar11._8_4_ = fVar21;
    iVar2 = **(int **)((longlong)this + 8);
    lVar5 = *(longlong *)this;
    fVar20 = (float)(int)(__return_storage_ptr__->USize - 1) * fVar3;
    auVar9._4_8_ = auVar11._4_8_;
    auVar9._0_4_ = fVar21;
    auVar22._0_8_ = auVar9._0_8_ << 0x20;
    auVar22._8_4_ = fVar21;
    auVar22._12_4_ = fVar20;
    auVar10._4_8_ = auVar22._8_8_;
    auVar10._0_4_ = fVar21;
    auVar23._0_8_ = auVar10._0_8_ << 0x20;
    auVar23._8_4_ = fVar20;
    auVar23._12_4_ = (float)(int)(__return_storage_ptr__->VSize - 1) * fVar3;
    FVar24._4_12_ = auVar23._4_12_;
    FVar24.BearingX =
         ((float)(int)__return_storage_ptr__->HorizontalOffset + __real_3f000000) * fVar3;
    __return_storage_ptr__->Metrics = FVar24;
    *(FMetrics *)(lVar5 + 0x88 + (longlong)iVar2 * 0x10) = FVar24;
  }
  return __return_storage_ptr__;
}

// operator() @ 14247cab0

void __thiscall
`FSlateFontCache::UpdateCache'::__l2::<lambda_2>::operator()
          (void *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar1 = pFVar7 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<unsigned_char_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar1) break;
    lVar4 = *(longlong *)this;
    FVar2 = *pFVar7;
    if (*(int *)(lVar4 + 0x1e8) <= (int)(uint)(byte)FVar2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1e0) + (ulonglong)(byte)FVar2 * 0x10);
    (**(code **)(*(longlong *)(lVar4 + 8) + 8))(lVar4 + 8);
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// operator() @ 14247ccf0

bool __thiscall
`FSlateFontCache::GetSdfGlyphFontAtlasData'::__l2::<lambda_3>::operator()
          (void *this,FSlateFontAtlas *param_1,uchar param_2)

{
  byte bVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  FAtlasedTextureSlot *pFVar8;
  short sVar9;
  short sVar10;
  
  if (**(char **)this == '\0') {
    if (**(char **)((longlong)this + 0x18) == '\0') {
      sVar9 = **(short **)((longlong)this + 0x20);
      if ((0 < sVar9) && (sVar10 = (*(short **)((longlong)this + 0x20))[1], 0 < sVar10)) {
        pFVar8 = FSlateTextureAtlas::FindSlotForTexture
                           ((FSlateTextureAtlas *)&param_1->_padding_,(int)sVar9,(int)sVar10);
        if (pFVar8 != (FAtlasedTextureSlot *)0x0) {
          bVar1 = pFVar8->Padding;
          uVar4 = pFVar8->X;
          uVar5 = pFVar8->Y;
          sVar9 = (short)pFVar8->Width + (ushort)bVar1 * -2;
          sVar10 = (short)pFVar8->Height + (ushort)bVar1 * -2;
          *(uchar *)(**(longlong **)((longlong)this + 0x10) + 0x24) = param_2;
          *(ushort *)(**(longlong **)((longlong)this + 0x10) + 4) = (ushort)bVar1 + (short)uVar4;
          *(ushort *)(**(longlong **)((longlong)this + 0x10) + 6) = (ushort)bVar1 + (short)uVar5;
          *(short *)(**(longlong **)((longlong)this + 0x10) + 8) = sVar9;
          *(short *)(**(longlong **)((longlong)this + 0x10) + 10) = sVar10;
          if (((int)sVar9 != (uint)**(ushort **)((longlong)this + 0x20)) ||
             ((int)sVar10 != (uint)(*(ushort **)((longlong)this + 0x20))[1])) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("RenderData.USize == SdfRequestOutputInfo.ImageWidth && RenderData.VSize == SdfRequestOutputInfo.ImageHeight"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                               ,0x60c,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          return true;
        }
      }
    }
  }
  else {
    pTVar2 = *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
    if (pTVar2[1].ArrayNum != param_1->ContentType) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderData.ContentType == GetContentType()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontTypes.cpp"
                         ,0x1b,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    pFVar8 = FSlateTextureAtlas::AddTexture
                       ((FSlateTextureAtlas *)&param_1->_padding_,
                        (int)*(short *)&pTVar2[1].AllocatorInstance.Data,
                        (int)*(short *)((longlong)&pTVar2[1].AllocatorInstance.Data + 2),pTVar2);
    if (pFVar8 != (FAtlasedTextureSlot *)0x0) {
      *(uchar *)(**(longlong **)((longlong)this + 0x10) + 0x24) = param_2;
      *(ushort *)(**(longlong **)((longlong)this + 0x10) + 4) =
           (ushort)pFVar8->Padding + (short)pFVar8->X;
      *(ushort *)(**(longlong **)((longlong)this + 0x10) + 6) =
           (ushort)pFVar8->Padding + (short)pFVar8->Y;
      *(ushort *)(**(longlong **)((longlong)this + 0x10) + 8) =
           (short)pFVar8->Width + (ushort)pFVar8->Padding * -2;
      *(ushort *)(**(longlong **)((longlong)this + 0x10) + 10) =
           (short)pFVar8->Height + (ushort)pFVar8->Padding * -2;
      return true;
    }
  }
  return false;
}

// AddNewEntry @ 14247ec80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateFontCache::AddNewEntry
          (FSlateFontCache *this,FShapedGlyphEntry *param_1,FFontOutlineSettings *param_2,
          FShapedGlyphFontAtlasData *param_3)

{
  ForAnyElementType _Src;
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  size_t _Size;
  int iVar4;
  byte local_res8 [8];
  undefined1 local_res20 [8];
  FCharacterRenderData local_68;
  FCharacterRenderData local_48;
  
  local_68.RawPixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.RawPixels.ArrayNum = 0;
  local_68.RawPixels.ArrayMax = 0;
  local_68.SizeX = 0;
  local_68.SizeY = 0;
  local_68.VerticalOffset = 0;
  local_68.HorizontalOffset = 0;
  local_68.ContentType = Alpha;
  local_68.bSupportsOutline = false;
  bVar1 = FSlateFontRenderer::GetRenderData((this->FontRenderer).Ptr,param_1,param_2,&local_68);
  _Src.Data = local_68.RawPixels.AllocatorInstance.Data;
  local_res8[0] = 0;
  if (bVar1) {
    _Size = (size_t)local_68.RawPixels.ArrayNum;
    local_48.RawPixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.RawPixels.ArrayNum = local_68.RawPixels.ArrayNum;
    if (local_68.RawPixels.ArrayNum == 0) {
      local_48.RawPixels.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_68.RawPixels.ArrayNum,0,(ForAnyElementType *)&local_48,
                 local_68.RawPixels.ArrayNum,&local_48.RawPixels.ArrayMax);
      memcpy(local_48.RawPixels.AllocatorInstance.Data,_Src.Data,_Size);
    }
    local_48.SizeX = local_68.SizeX;
    local_48.SizeY = local_68.SizeY;
    local_48.VerticalOffset = local_68.VerticalOffset;
    local_48.HorizontalOffset = local_68.HorizontalOffset;
    local_48.ContentType = local_68.ContentType;
    local_48.bSupportsOutline = local_68.bSupportsOutline;
    bVar1 = AddNewEntry(this,&local_48,&param_3->TextureIndex,&param_3->StartU,&param_3->StartV,
                        &param_3->USize,&param_3->VSize,local_res8);
    if (bVar1) {
      uVar3 = 1;
      iVar4 = (int)local_68.VerticalOffset + (uint)local_res8[0];
      iVar2 = (int)local_68.HorizontalOffset - (uint)local_res8[0];
      param_3->Valid = true;
      if ((iVar4 < -0x8000) || (0x7fff < iVar4)) {
        `FSlateFontCache::AddNewEntry'::__l5::<lambda_1>::operator()(local_res20);
        uVar3 = param_3->Valid;
      }
      if ((iVar2 < -0x8000) || (0x7fff < iVar2)) {
        `FSlateFontCache::AddNewEntry'::__l5::<lambda_2>::operator()(local_res20);
        uVar3 = param_3->Valid;
      }
      param_3->SupportsOutline = local_68.bSupportsOutline;
      param_3->VerticalOffset = (short)iVar4;
      param_3->HorizontalOffset = (short)iVar2;
      goto LAB_14247edfc;
    }
  }
  param_3->Valid = false;
  uVar3 = 0;
LAB_14247edfc:
  if (local_68.RawPixels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.RawPixels.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// AddNewEntry @ 14247ee40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateFontCache::AddNewEntry
          (FSlateFontCache *this,FCharacterRenderData *param_1,uchar *param_2,ushort *param_3,
          ushort *param_4,ushort *param_5,ushort *param_6,uchar *param_7)

{
  int *piVar1;
  TArray<TSharedRef<ISlateFontTexture,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement FVar5;
  ESlateFontAtlasContentType EVar6;
  ISlateFontAtlasFactory *pIVar7;
  FName FVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  FAtlasedTextureSlot *pFVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_SlateNumFontAtlases> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_SlateNumFontNonAtlasedTextures> FVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  FNameEntryId FVar24;
  uint local_res8;
  uint uStackX_c;
  uint local_res10;
  uint uStackX_14;
  FScriptContainerElement *local_res18;
  undefined8 in_stack_fffffffffffffeb8;
  undefined4 uVar25;
  int local_108;
  int local_104;
  longlong local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  longlong local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  longlong local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  FScriptContainerElement *local_c8;
  FName local_c0;
  FName local_b8;
  FStatMessage local_b0;
  longlong local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FStatMessage local_88;
  ushort *local_78;
  ushort *local_70;
  ushort *local_68;
  ushort *local_60;
  uchar *local_58;
  FName local_50;
  FName local_48 [2];
  
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  pIVar7 = (this->FontAtlasFactory).Object;
  local_res18 = (FScriptContainerElement *)param_2;
  (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&local_108,param_1->ContentType);
  if ((local_108 < param_1->SizeX) || (local_104 < param_1->SizeY)) {
    pIVar7 = (this->FontAtlasFactory).Object;
    (**(code **)((longlong)*pIVar7 + 0x18))
              (pIVar7,&local_d8,(int)param_1->SizeX,(int)param_1->SizeY,
               CONCAT44(uVar25,param_1->ContentType),param_1);
    if (local_d8 == 0) {
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      FVar21 = StatPtr_STAT_SlateNumFontNonAtlasedTextures;
      if (StatPtr_STAT_SlateNumFontNonAtlasedTextures ==
          (FThreadSafeStaticStat<FStat_STAT_SlateNumFontNonAtlasedTextures>)0x0) {
        pFVar17 = ::FName::FName(local_48,"STAT_SlateNumFontNonAtlasedTextures");
        FVar21 = (FThreadSafeStaticStat<FStat_STAT_SlateNumFontNonAtlasedTextures>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_SlateNumFontNonAtlasedTextures,*pFVar17,
                            L"Num Font Non-Atlased Textures","STATGROUP_SlateMemory",
                            "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar8 = *(FName *)FVar21;
      FVar24 = FVar8.ComparisonIndex.Value;
      uVar13 = FVar8.Number;
      local_res8 = FVar24.Value;
      uStackX_c = uVar13;
      if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar19 == (FThreadStats *)0x0) {
          pFVar20 = FThreadStatsPool::Get();
          pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
        }
        local_88.NameAndInfo.Number = uVar13 & 0xffffafff | 0xa000;
        local_88.StatData.Pad[0] = '\x01';
        local_88.StatData.Pad[1] = '\0';
        local_88.StatData.Pad[2] = '\0';
        local_88.StatData.Pad[3] = '\0';
        local_88.StatData.Pad[4] = '\0';
        local_88.StatData.Pad[5] = '\0';
        local_88.StatData.Pad[6] = '\0';
        local_88.StatData.Pad[7] = '\0';
        local_b8 = FVar8;
        local_88.NameAndInfo.Index.Value = FVar24.Value;
        FThreadStats::AddStatMessage(pFVar19,&local_88);
        FStatsTrace::Add(&local_b8,1);
        if (pFVar19->ScopeCount == 0) {
          FThreadStats::Flush(pFVar19,false,false);
          param_2 = (uchar *)local_res18;
        }
        else {
          param_2 = (uchar *)local_res18;
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
            param_2 = (uchar *)local_res18;
          }
        }
      }
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      if ((this->AllFontTextures).ArrayNum < 0xff) {
        pTVar2 = &this->AllFontTextures;
        if ((local_d8 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        local_f8 = local_d8;
        pTStack_f0 = pTStack_d0;
        if (pTStack_d0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_d0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_d0->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_d8 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        pFVar22 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar22 <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 <
             pFVar22 + (longlong)(this->AllFontTextures).ArrayMax * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        iVar12 = (this->AllFontTextures).ArrayNum;
        piVar1 = &(this->AllFontTextures).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->AllFontTextures).ArrayNum = iVar12 + 1;
        pFVar22 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
        *(longlong *)pFVar22 = local_f8;
        *(TReferenceControllerBase<1> **)(pFVar22 + 8) = pTStack_f0;
        if (pTStack_f0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_f0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_f0->SharedReferenceCount + 1);
          UNLOCK();
        }
        *param_2 = (uchar)SUB41(iVar12,0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_f0);
        pTVar3 = &this->NonAtlasedTextureIndices;
        pFVar22 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar22 <= param_2) && (param_2 < pFVar22 + (this->NonAtlasedTextureIndices).ArrayMax)
            ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        iVar12 = (this->NonAtlasedTextureIndices).ArrayNum;
        piVar1 = &(this->NonAtlasedTextureIndices).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->NonAtlasedTextureIndices).ArrayNum = iVar12 + 1;
        (pTVar3->AllocatorInstance).Data[iVar12] = (FScriptContainerElement)*param_2;
        *param_3 = 0;
        *param_4 = 0;
        *param_5 = param_1->SizeX;
        *param_6 = param_1->SizeY;
        *param_7 = '\0';
        if (this->bFlushRequested == false) {
          FSlateFlushableAtlasCache::UpdateFlushCounters
                    ((FSlateFlushableAtlasCache *)&this->_padding_,
                     (this->GrayscaleFontAtlasIndices).ArrayNum,
                     (this->ColorFontAtlasIndices).ArrayNum,(this->MsdfFontAtlasIndices).ArrayNum,
                     (this->NonAtlasedTextureIndices).ArrayNum);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_d0);
        goto LAB_14247f7f1;
      }
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
LAB_14247f841:
    pFVar22 = (param_1->RawPixels).AllocatorInstance.Data;
    if (pFVar22 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar22);
    }
    bVar10 = false;
  }
  else {
    EVar6 = param_1->ContentType;
    local_70 = param_4;
    local_68 = param_5;
    local_60 = param_6;
    local_58 = param_7;
    local_78 = param_3;
    if (EVar6 == Alpha) {
      lVar14 = 0x1a0;
    }
    else {
      if (EVar6 != Color) {
        if (EVar6 == Msdf) {
          lVar14 = 0x1c0;
          goto LAB_14247ef1b;
        }
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                            ,0x497,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
      }
      lVar14 = 0x1b0;
    }
LAB_14247ef1b:
    pFVar4 = (ForAnyElementType *)((longlong)&this->_padding_ + lVar14);
    if ((pFVar4 == (ForAnyElementType *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FontAtlasIndicesPtr != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                            ,0x49c,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    local_res10 = *(uint *)&pFVar4[1].Data;
    uVar15 = (ulonglong)(int)local_res10;
    pTVar2 = &this->AllFontTextures;
    pFVar22 = pFVar4->Data;
    local_c8 = pFVar22 + uVar15;
    while( true ) {
      pFVar23 = local_c8;
      if (*(int *)&pFVar4[1].Data != (int)uVar15) {
        local_res8 = local_res8 & 0xffffff00;
        `TCheckedPointerIterator<unsigned_char,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar22 == pFVar23) {
        if ((this->AllFontTextures).ArrayNum < 0xff) {
          pIVar7 = (this->FontAtlasFactory).Object;
          (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7,&local_98,param_1->ContentType);
          local_e8 = local_98;
          pTStack_e0 = pTStack_90;
          if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_90->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar22 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar22 <= (FScriptContainerElement *)&local_e8) &&
              ((FScriptContainerElement *)&local_e8 <
               pFVar22 + (longlong)(this->AllFontTextures).ArrayMax * 0x10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          iVar12 = (this->AllFontTextures).ArrayNum;
          piVar1 = &(this->AllFontTextures).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          pFVar22 = local_res18;
          (this->AllFontTextures).ArrayNum = iVar12 + 1;
          pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(longlong *)pFVar23 = local_e8;
          *(TReferenceControllerBase<1> **)(pFVar23 + 8) = pTStack_e0;
          if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_e0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
            UNLOCK();
          }
          *local_res18 = SUB41(iVar12,0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_e0);
          if (((pFVar4->Data <= pFVar22) &&
              (pFVar22 < pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          iVar12 = *(int *)&pFVar4[1].Data;
          piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,pFVar4,piVar1);
          }
          *(int *)&pFVar4[1].Data = iVar12 + 1;
          pFVar4->Data[iVar12] = *pFVar22;
          FVar18 = StatPtr_STAT_SlateNumFontAtlases;
          if (StatPtr_STAT_SlateNumFontAtlases ==
              (FThreadSafeStaticStat<FStat_STAT_SlateNumFontAtlases>)0x0) {
            pFVar17 = ::FName::FName(&local_50,"STAT_SlateNumFontAtlases");
            FVar18 = (FThreadSafeStaticStat<FStat_STAT_SlateNumFontAtlases>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumFontAtlases,
                                *pFVar17,L"Num Font Atlases","STATGROUP_SlateMemory",
                                "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                                MCR_Invalid);
          }
          FVar8 = *(FName *)FVar18;
          FVar24 = FVar8.ComparisonIndex.Value;
          uVar13 = FVar8.Number;
          local_res10 = FVar24.Value;
          uStackX_14 = uVar13;
          if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar19 == (FThreadStats *)0x0) {
              pFVar20 = FThreadStatsPool::Get();
              pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
            }
            local_b0.NameAndInfo.Number = uVar13 & 0xffffafff | 0xa000;
            local_b0.StatData.Pad[0] = '\x01';
            local_b0.StatData.Pad[1] = '\0';
            local_b0.StatData.Pad[2] = '\0';
            local_b0.StatData.Pad[3] = '\0';
            local_b0.StatData.Pad[4] = '\0';
            local_b0.StatData.Pad[5] = '\0';
            local_b0.StatData.Pad[6] = '\0';
            local_b0.StatData.Pad[7] = '\0';
            local_c0 = FVar8;
            local_b0.NameAndInfo.Index.Value = FVar24.Value;
            FThreadStats::AddStatMessage(pFVar19,&local_b0);
            FStatsTrace::Add(&local_c0,1);
            if (pFVar19->ScopeCount == 0) {
              FThreadStats::Flush(pFVar19,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar19,false,false);
            }
          }
          if ((param_1->ContentType != *(ESlateFontAtlasContentType *)(local_98 + 0x50)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RenderData.ContentType == GetContentType()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontTypes.cpp"
                                  ,0x1b,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          pFVar16 = FSlateTextureAtlas::AddTexture
                              ((FSlateTextureAtlas *)(local_98 + 8),(int)param_1->SizeX,
                               (int)param_1->SizeY,&param_1->RawPixels);
          if (pFVar16 != (FAtlasedTextureSlot *)0x0) {
            `FSlateFontCache::AddNewEntry'::__l2::<lambda_1>::operator()(&local_78,pFVar16);
          }
          if (this->bFlushRequested == false) {
            FSlateFlushableAtlasCache::UpdateFlushCounters
                      ((FSlateFlushableAtlasCache *)&this->_padding_,
                       (this->GrayscaleFontAtlasIndices).ArrayNum,
                       (this->ColorFontAtlasIndices).ArrayNum,(this->MsdfFontAtlasIndices).ArrayNum,
                       (this->NonAtlasedTextureIndices).ArrayNum);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_90);
          pFVar22 = (param_1->RawPixels).AllocatorInstance.Data;
          if (pFVar22 == (FScriptContainerElement *)0x0) {
            return pFVar16 != (FAtlasedTextureSlot *)0x0;
          }
          FMemory::Free(pFVar22);
          return pFVar16 != (FAtlasedTextureSlot *)0x0;
        }
        if (2 < (byte)LogSlate._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
        goto LAB_14247f841;
      }
      FVar5 = *pFVar22;
      if (((this->AllFontTextures).ArrayNum <= (int)(uint)(byte)FVar5) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      lVar14 = *(longlong *)((pTVar2->AllocatorInstance).Data + (ulonglong)(byte)FVar5 * 0x10);
      if ((param_1->ContentType != *(ESlateFontAtlasContentType *)(lVar14 + 0x50)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("RenderData.ContentType == GetContentType()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontTypes.cpp"
                              ,0x1b,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      pFVar16 = FSlateTextureAtlas::AddTexture
                          ((FSlateTextureAtlas *)(lVar14 + 8),(int)param_1->SizeX,
                           (int)param_1->SizeY,&param_1->RawPixels);
      if (pFVar16 != (FAtlasedTextureSlot *)0x0) break;
      pFVar22 = pFVar22 + 1;
      uVar15 = (ulonglong)local_res10;
    }
    *local_res18 = FVar5;
    `FSlateFontCache::AddNewEntry'::__l2::<lambda_1>::operator()(&local_78,pFVar16);
LAB_14247f7f1:
    pFVar22 = (param_1->RawPixels).AllocatorInstance.Data;
    if (pFVar22 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar22);
    }
    bVar10 = true;
  }
  return bVar10;
}

// CanLoadCodepoint @ 142481e10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateFontCache::CanLoadCodepoint
          (FSlateFontCache *this,FFontData *param_1,wchar32 param_2,EFontFallback param_3)

{
  FFreeTypeFaceGlyphData local_28;
  
  FSlateFontRenderer::GetFontFaceForCodepoint
            ((this->FontRenderer).Ptr,&local_28,param_1,param_2,param_3);
  if ((local_28.FaceAndMemory.Object != (FFreeTypeFace *)0x0) && (local_28.GlyphIndex != 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.FaceAndMemory.SharedReferenceCount.ReferenceController);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.FaceAndMemory.SharedReferenceCount.ReferenceController);
  return false;
}

// ConditionalDumpFontCacheStats @ 142482580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateFontCache::ConditionalDumpFontCacheStats(FSlateFontCache *this)

{
  atomic<int> *paVar1;
  TMap<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>_>
  *pTVar2;
  undefined1 *puVar3;
  atomic<int> aVar4;
  float fVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  code *pcVar11;
  TMap<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>_>
  *pTVar12;
  undefined8 uVar13;
  bool bVar14;
  atomic<int> aVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  FString *pFVar20;
  byte bVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  FShapedGlyphEntryKey *pFVar26;
  TReferenceControllerBase<1> *pTVar27;
  int iVar28;
  FFreeTypeFace *pFVar29;
  uint uVar30;
  undefined1 *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ForElementType<unsigned_int> FVar34;
  longlong lVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  wchar_t *pwVar41;
  wchar_t *pwVar42;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  double local_2b0;
  FScriptContainerElement *local_2a8;
  FScriptContainerElement *local_2a0;
  double local_298;
  uint local_290;
  uint local_288;
  undefined1 local_284;
  undefined1 local_283;
  FIdentityFunctor local_282;
  undefined1 local_281;
  int local_280;
  uint local_27c;
  int local_278 [2];
  ulonglong local_270;
  int local_268;
  uint uStack_264;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_260;
  undefined4 local_258;
  uint uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  FSlateFontCache *local_248;
  TMap<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>_>
  *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_238;
  undefined8 local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  FFontCacheStatsKey *local_1e0;
  FIdentityFunctor *local_1d8;
  FIdentityFunctor **local_1d0;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  longlong *local_1a0;
  int iStack_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TMap<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FFontCacheStatsKey local_140;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_27c = 0;
  if (!bDumpFontCacheStats) {
    return;
  }
  pTVar2 = &this->ShapedGlyphToAtlasData;
  puVar3 = &(this->ShapedGlyphToAtlasData).field_0x10;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_288 = 0;
  local_210._padding_._0_4_ = 0;
  local_270 = 1;
  local_210._padding_._4_4_ = 1;
  local_210.UnvisitedBitMask = 0xffffffff;
  local_210.CurrentBitIndex = 0;
  local_210.BaseBitIndex = 0;
  local_248 = this;
  local_210.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if (*(int *)&(this->ShapedGlyphToAtlasData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
  }
  uVar30 = *(uint *)&(this->ShapedGlyphToAtlasData).field_0x28;
  uVar39 = uVar30 & 0xffffffe0;
  TStack_238._padding_ = CONCAT44(local_210._padding_._4_4_,(undefined4)local_210._padding_);
  TStack_238.CurrentBitIndex = local_210.CurrentBitIndex;
  TStack_238.UnvisitedBitMask = local_210.UnvisitedBitMask;
  TStack_238._28_4_ = local_210._28_4_;
  TStack_238.BaseBitIndex = local_210.BaseBitIndex;
  local_218 = CONCAT44(local_218._4_4_,
                       *(int *)&(this->ShapedGlyphToAtlasData).field_0x8 -
                       *(int *)&(this->ShapedGlyphToAtlasData).field_0x34);
  TStack_238.Array = local_210.Array;
  iVar28 = (int)uVar30 >> 5;
  TStack_168.Array = local_210.Array;
  uStack_148 = local_218;
  local_240 = pTVar2;
  local_170 = pTVar2;
  TStack_168._padding_ = TStack_238._padding_;
  TStack_168._16_8_ = TStack_238._16_8_;
  TStack_168._24_8_ = TStack_238._24_8_;
  if (((int)uVar30 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar36 = *(uint *)&(this->ShapedGlyphToAtlasData).field_0x28;
  uVar25 = local_288;
  uVar40 = local_288;
  if (uVar30 != uVar36) {
    puVar31 = *(undefined1 **)&(this->ShapedGlyphToAtlasData).field_0x20;
    if (puVar31 == (undefined1 *)0x0) {
      puVar31 = puVar3;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar28 * 4);
    while (uVar30 == 0) {
      lVar22 = (longlong)iVar28;
      uVar39 = uVar39 + 0x20;
      iVar28 = iVar28 + 1;
      uVar30 = uVar36;
      if ((int)((uVar36 - 1) + ((int)(uVar36 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
      goto LAB_142482760;
      uVar30 = *(uint *)(puVar31 + lVar22 * 4 + 4);
    }
    uVar33 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_1f0 = (int)lVar22;
    uVar30 = local_1f0 + -1 + uVar39;
    if ((int)uVar36 < (int)uVar30) {
      uVar30 = uVar36;
    }
  }
LAB_142482760:
  while( true ) {
    pTVar12 = local_170;
    if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
      local_284 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_284);
    }
    if (((TStack_168.CurrentBitIndex == uVar30) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar12 == pTVar2)
       ) break;
    pFVar26 = (FShapedGlyphEntryKey *)
              ((longlong)TStack_168.CurrentBitIndex * 0x40 + *(longlong *)pTVar12);
    pFVar29 = pFVar26[1].FontFace.Object;
    uVar6 = *(ushort *)((longlong)&(pFVar29->Memory).Object + 2);
    uVar7 = *(ushort *)&(pFVar29->Memory).Object;
    FFontCacheStatsKey::FFontCacheStatsKey(&local_140,pFVar26);
    pFVar29 = (FFreeTypeFace *)0x0;
    if (local_140.FontFace.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      aVar4 = (local_140.FontFace.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_142482882;
        }
        LOCK();
        aVar15 = (local_140.FontFace.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar14 = aVar4 == aVar15;
        if (bVar14) {
          (local_140.FontFace.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar4 + 1);
          aVar15 = aVar4;
        }
        UNLOCK();
        pFVar29 = local_140.FontFace.Object;
        aVar4 = aVar15;
      } while (!bVar14);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.FontFace.WeakReferenceCount.ReferenceController);
    uVar39 = local_140.KeyHash;
    if ((pFVar29 != (FFreeTypeFace *)0x0) && (pFVar29->FTFace != (FT_FaceRec_ *)0x0)) {
      iVar28 = TSet<TTuple<FFontCacheStatsKey,int>,TDefaultMapHashableKeyFuncs<FFontCacheStatsKey,int,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FFontCacheStatsKey>
                         ((TSet<TTuple<FFontCacheStatsKey,int>,TDefaultMapHashableKeyFuncs<FFontCacheStatsKey,int,0>,FDefaultSetAllocator>
                           *)local_98,local_140.KeyHash,&local_140);
      if ((iVar28 == -1) ||
         (pFVar23 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar28 * 0x38),
         pFVar23 == (FScriptContainerElement *)0x0)) {
        local_1e0 = &local_140;
        local_2b8 = 0;
        TSet<TTuple<FFontCacheStatsKey,int>,TDefaultMapHashableKeyFuncs<FFontCacheStatsKey,int,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FFontCacheStatsKey_const_&>_>
                  ((TSet<TTuple<FFontCacheStatsKey,int>,TDefaultMapHashableKeyFuncs<FFontCacheStatsKey,int,0>,FDefaultSetAllocator>
                    *)local_98,(uint)local_278,
                   (TKeyInitializer<FFontCacheStatsKey_const_&> *)(ulonglong)uVar39,
                   (bool *)&local_1e0);
        pFVar23 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_278[0] * 0x38);
      }
      *(int *)(pFVar23 + 0x28) = *(int *)(pFVar23 + 0x28) + 1;
    }
LAB_142482882:
    if (local_140.FontFace.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_140.FontFace.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_140.FontFace.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_140.FontFace.WeakReferenceCount.ReferenceController,local_270 & 0xffffffff)
        ;
      }
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
    uVar25 = uVar25 + (uint)uVar6 * (uint)uVar7;
    uVar40 = uVar40 + 1;
  }
  iVar38 = 0;
  iVar28 = (local_248->AllFontTextures).ArrayNum;
  pFVar23 = (local_248->AllFontTextures).AllocatorInstance.Data;
  pFVar37 = pFVar23 + (longlong)iVar28 * 0x10;
  local_288 = uVar25;
  local_280 = uVar40;
  while( true ) {
    if ((local_248->AllFontTextures).ArrayNum != iVar28) {
      local_283 = 0;
      `TCheckedPointerIterator<TSharedRef<ISlateFontTexture,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_283);
    }
    uVar30 = local_27c;
    if (pFVar23 == pFVar37) break;
    plVar18 = (longlong *)(**(code **)(**(longlong **)pFVar23 + 8))();
    if ((plVar18 == (longlong *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("SlateShaderResource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                            ,0x6ff,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcVar11 = (code *)((undefined8 *)*plVar18)[1];
    iVar16 = (**(code **)*plVar18)(plVar18);
    iVar17 = (*pcVar11)();
    iVar38 = iVar38 + iVar16 * iVar17;
    pFVar23 = pFVar23 + 0x10;
  }
  if (4 < (byte)LogSlate._0_1_) {
    local_2b0 = (double)(((float)(int)local_288 * __real_42c80000) / (float)iVar38);
    local_2b8 = CONCAT44(local_2b8._4_4_,iVar38);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if (4 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
  }
  local_1d8 = &local_282;
  local_1d0 = &local_1d8;
  if (0 < local_98._8_4_ - local_64) {
    TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
    uVar13 = local_98._0_8_;
    iVar28 = local_98._8_4_ - local_64;
    if ((iVar28 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FFontCacheStatsKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FFontCacheStatsKey,int>,TDefaultMapHashableKeyFuncs<FFontCacheStatsKey,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FFontCacheStatsKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFontCacheStatsKey,int,0>_>::FKeyComparisonClass<_FSlateFontCache::ConditionalDumpFontCacheStats_::__l5::<lambda_1>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *)uVar13,iVar28,local_282,
               (FElementCompareClass<TSortableMapBase<FFontCacheStatsKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFontCacheStatsKey,int,0>_>::FKeyComparisonClass<_private:_void___cdecl_FSlateFontCache::ConditionalDumpFontCacheStats(void)const_::_5_::<lambda_1>_>_>
                *)&local_1d0);
  }
  uVar39 = local_50;
  uVar33 = (ulonglong)local_50;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar39 == 0) goto LAB_142482b00;
  uVar36 = uVar39;
  if (uVar39 < 2) {
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      uVar36 = 0;
      goto LAB_142482a94;
    }
  }
  else {
LAB_142482a94:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar36,4);
  }
  if (0 < (int)uVar39) {
    uVar32 = 0;
    do {
      FVar24.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar24.Data = local_58.Data;
      }
      uVar19 = uVar32 & (longlong)(int)uVar39 - 1U;
      uVar32 = uVar32 + 1;
      *(undefined4 *)((longlong)FVar24.Data + uVar19 * 4) = 0xffffffff;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
LAB_142482b00:
  uVar39 = (uint)local_270;
  if (local_50 != uVar30) {
    local_268 = 0;
    uStack_254 = 0;
    iStack_250 = 0;
    pTStack_260 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_264 = uVar39;
    if (local_70 != 0) {
      FVar34 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_78;
      }
      uVar36 = *(uint *)FVar34;
      iStack_250 = 0;
      local_268 = 0;
      while (uVar36 == 0) {
        iStack_250 = iStack_250 + 0x20;
        lVar22 = (longlong)local_268;
        local_268 = local_268 + 1;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_268)
        goto LAB_142482bbc;
        uVar36 = ((uint *)((longlong)FVar34 + 4))[lVar22];
      }
      uStack_264 = -uVar36 & uVar36;
      uVar33 = (ulonglong)uStack_264 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_1ec = (int)lVar22;
      uStack_254 = iStack_250 + -1 + local_1ec;
      if ((int)local_70 < (int)uStack_254) {
LAB_142482bbc:
        uStack_254 = local_70;
      }
    }
    local_258 = 0xffffffff;
    local_1c8 = (longlong *)local_98;
    local_1c0._padding_ = CONCAT44(uStack_264,local_268);
    local_1c0.CurrentBitIndex = uStack_254;
    local_1c0.UnvisitedBitMask = 0xffffffff;
    local_1c0._28_4_ = uStack_24c;
    local_1c0.BaseBitIndex = iStack_250;
    uVar36 = uStack_254;
    local_1c0.Array = pTStack_260;
    if ((int)uStack_254 < (int)local_70) {
      do {
        lVar22 = *local_1c8;
        lVar35 = (longlong)(int)uVar36 * 0x38;
        uVar25 = local_50 - 1 & *(uint *)(lVar35 + 0x1c + lVar22);
        *(uint *)(lVar35 + 0x34 + lVar22) = uVar25;
        FVar24.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar24.Data = local_58.Data;
        }
        uVar33 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar25;
        *(undefined4 *)(lVar35 + 0x30 + lVar22) =
             *(undefined4 *)((longlong)FVar24.Data + uVar33 * 4);
        *(uint *)((longlong)FVar24.Data + uVar33 * 4) = uVar36;
        local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
        uVar36 = local_1c0.CurrentBitIndex;
      } while (local_1c0.CurrentBitIndex < (local_1c0.Array)->NumBits);
    }
  }
  uVar36 = local_70;
  iStack_198 = 0;
  local_180 = 0;
  uStack_184 = 0;
  if (local_70 != 0) {
    FVar34 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar34 = local_78;
    }
    uVar25 = *(uint *)FVar34;
    while (uVar25 == 0) {
      lVar22 = (longlong)iStack_198;
      local_180 = local_180 + 0x20;
      iStack_198 = iStack_198 + 1;
      uStack_184 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_198)
      goto LAB_142482ce0;
      uVar25 = ((uint *)((longlong)FVar34 + 4))[lVar22];
    }
    uVar39 = -uVar25 & uVar25;
    uVar33 = (ulonglong)uVar39 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_1e8 = (int)lVar22;
    uStack_184 = local_180 + -1 + local_1e8;
    if ((int)local_70 < (int)uStack_184) {
      uStack_184 = local_70;
    }
  }
LAB_142482ce0:
  local_240 = (TMap<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>_>
               *)local_98;
  uStack_17c = local_9c;
  TStack_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar25 = local_70 & 0xffffffe0;
  iStack_178 = local_98._8_4_ - local_64;
  uStack_188 = 0xffffffff;
  TStack_238.CurrentBitIndex = uStack_184;
  TStack_238.UnvisitedBitMask = 0xffffffff;
  TStack_238._padding_ = CONCAT44(uVar39,iStack_198);
  iVar28 = (int)local_70 >> 5;
  TStack_238._28_4_ = local_9c;
  TStack_238.BaseBitIndex = local_180;
  local_218 = CONCAT44(uStack_174,iStack_178);
  bVar21 = (byte)local_70;
  local_288 = local_70;
  local_1a0 = (longlong *)local_240;
  uStack_194 = uVar39;
  local_190 = TStack_238.Array;
  if (((int)local_70 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (uVar36 != local_70) {
    FVar34 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar34 = local_78;
    }
    uVar39 = -1 << (bVar21 & 0x1f) & *(uint *)((longlong)FVar34 + (longlong)iVar28 * 4);
    while (uVar39 == 0) {
      lVar22 = (longlong)iVar28;
      uVar25 = uVar25 + 0x20;
      iVar28 = iVar28 + 1;
      uVar36 = local_70;
      local_288 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
      goto LAB_142482e10;
      uVar39 = ((uint *)((longlong)FVar34 + 4))[lVar22];
    }
    uVar33 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_288 = (uVar25 - 1) + (int)lVar22;
    uVar36 = local_288;
    if ((int)local_70 < (int)local_288) {
      uVar36 = local_70;
      local_288 = local_70;
    }
  }
LAB_142482e10:
  do {
    pTVar2 = local_240;
    if ((int)*(longlong *)((longlong)local_240 + 8) - *(int *)((longlong)local_240 + 0x34) !=
        (int)local_218) {
      `TSparseArray<TSparseSetElement<TTuple<FFontCacheStatsKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_281);
    }
    if (((TStack_238.CurrentBitIndex == uVar36) &&
        (TStack_238.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (pTVar2 == (TMap<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>_>
                   *)local_98)) {
      bDumpFontCacheStats = false;
      local_50 = 0;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FFontCacheStatsKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FFontCacheStatsKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FFontCacheStatsKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    lVar22 = *(longlong *)pTVar2;
    plVar18 = (longlong *)0x0;
    lVar35 = (longlong)TStack_238.CurrentBitIndex * 0x38;
    pTVar27 = *(TReferenceControllerBase<1> **)(lVar35 + 8 + lVar22);
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar27->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar27 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142482e73;
        }
        LOCK();
        aVar15 = pTVar27->SharedReferenceCount;
        bVar14 = aVar4 == aVar15;
        if (bVar14) {
          pTVar27->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar15 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar15;
      } while (!bVar14);
      plVar18 = *(longlong **)(lVar35 + lVar22);
    }
LAB_142482e73:
    lVar10 = *plVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
    if (4 < (byte)LogSlate._0_1_) {
      fVar5 = *(float *)(lVar35 + 0x20 + lVar22);
      local_27c = *(uint *)(lVar35 + 0x28 + lVar22);
      if (*(char *)(lVar35 + 0x19 + lVar22) == '\0') {
        uVar30 = uVar30 | 2;
        pFVar20 = ::FString::FString(&local_d8,"false");
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar42 = L"";
        }
        else {
          pwVar42 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
      }
      else {
        uVar30 = uVar30 | 1;
        pFVar20 = ::FString::FString(local_c8,"true");
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar42 = L"";
        }
        else {
          pwVar42 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
      }
      if (*(char *)(lVar35 + 0x18 + lVar22) == '\0') {
        pFVar20 = ::FString::FString(&local_f8,"false");
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar41 = L"";
        }
        else {
          pwVar41 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
        uVar39 = 8;
      }
      else {
        pFVar20 = ::FString::FString(&local_e8,"true");
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar41 = L"";
          uVar39 = 4;
        }
        else {
          pwVar41 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
          uVar39 = 4;
        }
      }
      uVar8 = *(undefined4 *)(lVar35 + 0x14 + lVar22);
      uVar30 = uVar30 | uVar39;
      uVar9 = *(undefined4 *)(lVar35 + 0x10 + lVar22);
      ::FString::FString(&local_108,*(char **)(lVar10 + 0x20));
      ::FString::FString(&local_118,*(char **)(lVar10 + 0x18));
      local_290 = local_27c;
      local_2b0 = (double)CONCAT44(local_2b0._4_4_,uVar8);
      local_2b8 = CONCAT44(local_2b8._4_4_,uVar9);
      local_2a8 = (FScriptContainerElement *)pwVar41;
      local_2a0 = (FScriptContainerElement *)pwVar42;
      local_298 = (double)fVar5;
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (((uVar30 & 8) != 0) &&
         (uVar30 = uVar30 & 0xfffffff7,
         local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (((uVar30 & 4) != 0) &&
         (uVar30 = uVar30 & 0xfffffffb,
         local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (((uVar30 & 2) != 0) &&
         (uVar30 = uVar30 & 0xfffffffd,
         local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      uVar36 = local_288;
      if (((uVar30 & 1) != 0) &&
         (uVar30 = uVar30 & 0xfffffffe,
         local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
        uVar36 = local_288;
      }
    }
    TStack_238.UnvisitedBitMask = TStack_238.UnvisitedBitMask & ~TStack_238._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_238);
  } while( true );
}

// ConditionalFlushCache @ 142483130

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateFontCache::ConditionalFlushCache(FSlateFontCache *this)

{
  bool bVar1;
  
  if ((this->bFlushRequested != false) || (bFlushFontCache)) {
    bVar1 = FlushCache(this);
    if (bVar1) {
      this->bFlushRequested = false;
      bFlushFontCache = false;
      return true;
    }
  }
  bVar1 = IsInGameThread();
  if (bVar1) {
    FlushFontObjects(this);
  }
  return false;
}

// FlushCache @ 142489620

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateFontCache::FlushCache(FSlateFontCache *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_SlateNumFontAtlases> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SlateNumFontNonAtlasedTextures> FVar8;
  FName local_res10;
  FStatMessage local_38;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    return false;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"Slate_FlushFontCache");
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1959,"Slate_FlushFontCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
               ,0x7a7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1959);
  }
  FlushData(this);
  ReleaseResources(this);
  FVar5 = StatPtr_STAT_SlateNumFontAtlases;
  if (StatPtr_STAT_SlateNumFontAtlases == (FThreadSafeStaticStat<FStat_STAT_SlateNumFontAtlases>)0x0
     ) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_SlateNumFontAtlases");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_SlateNumFontAtlases>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumFontAtlases,*pFVar4,
                       L"Num Font Atlases","STATGROUP_SlateMemory","STATCAT_Advanced",
                       L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar5;
  local_res10 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_38.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_38.StatData.Pad[0] = '\0';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res10 = FVar2;
    local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,&local_38);
    FStatsTrace::Set(&local_res10,0);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  FVar8 = StatPtr_STAT_SlateNumFontNonAtlasedTextures;
  if (StatPtr_STAT_SlateNumFontNonAtlasedTextures ==
      (FThreadSafeStaticStat<FStat_STAT_SlateNumFontNonAtlasedTextures>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_SlateNumFontNonAtlasedTextures");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_SlateNumFontNonAtlasedTextures>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumFontNonAtlasedTextures,
                       *pFVar4,L"Num Font Non-Atlased Textures","STATGROUP_SlateMemory",
                       "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar2 = *(FName *)FVar8;
  local_res10 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_38.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_38.StatData.Pad[0] = '\0';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res10 = FVar2;
    local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,&local_38);
    FStatsTrace::Set(&local_res10,0);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  piVar1 = &(this->GrayscaleFontAtlasIndices).ArrayMax;
  (this->GrayscaleFontAtlasIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->GrayscaleFontAtlasIndices).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ColorFontAtlasIndices).ArrayMax;
  (this->ColorFontAtlasIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ColorFontAtlasIndices).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->NonAtlasedTextureIndices).ArrayMax;
  (this->NonAtlasedTextureIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->NonAtlasedTextureIndices).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->MsdfFontAtlasIndices).ArrayMax;
  (this->MsdfFontAtlasIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->MsdfFontAtlasIndices).AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedRef<ISlateFontTexture,1>,int>
            ((TSharedRef<ISlateFontTexture,1> *)(this->AllFontTextures).AllocatorInstance.Data,
             (this->AllFontTextures).ArrayNum);
  piVar1 = &(this->AllFontTextures).ArrayMax;
  (this->AllFontTextures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AllFontTextures).AllocatorInstance,0,piVar1);
  }
  lpCriticalSection = &this->FontObjectsToFlushCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  piVar1 = &(this->FontObjectsToFlush).ArrayMax;
  (this->FontObjectsToFlush).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FontObjectsToFlush).AllocatorInstance,0,piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (4 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return true;
}

// FlushCompositeFont @ 142489c50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontCache::FlushCompositeFont(FSlateFontCache *this,FCompositeFont *param_1)

{
  FCompositeFontCache *pFVar1;
  uint uVar2;
  FCompositeFont *local_res8 [4];
  
  pFVar1 = (this->CompositeFontCache).Ptr;
  if (*(int *)&(pFVar1->CompositeFontToCachedDataMap).field_0x8 !=
      *(int *)&(pFVar1->CompositeFontToCachedDataMap).field_0x34) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res8[0] = param_1;
    TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FCompositeFont_const_*>
              ((TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
                *)&pFVar1->CompositeFontToCachedDataMap,uVar2 >> 0x10 ^ uVar2,local_res8);
  }
  return;
}

// FlushData @ 142489cb0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontCache::FlushData(FSlateFontCache *this)

{
  undefined1 *puVar1;
  TMap<FFontData,TSharedPtr<FFreeTypeFace,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>_>
  *this_00;
  TMap<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>_>
  *this_01;
  TMap<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>_>
  *this_02;
  TMap<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>_>
  *this_03;
  int iVar2;
  FCompositeFontCache *pFVar3;
  bool bVar4;
  FSlateApplicationBase *this_04;
  
  this_04 = FSlateApplicationBase::Get();
  FSlateApplicationBase::InvalidateAllWidgets(this_04,false);
  if (bSlateSdfTextEnable != false) {
    (**(code **)((longlong)*(this->SdfGenerator).Ptr + 0x30))();
  }
  FHarfBuzzFontCache::Flush(&((this->TextShaper).Ptr)->HarfBuzzFontCache);
  if (UnloadFreeTypeDataOnFlush != 0) {
    FFreeTypeCacheDirectory::FlushCache((this->FTCacheDirectory).Ptr);
    pFVar3 = (this->CompositeFontCache).Ptr;
    bVar4 = 1 < *(int *)&(pFVar3->CompositeFontToCachedDataMap).field_0x48;
    if (!bVar4) {
      TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
                        *)&pFVar3->CompositeFontToCachedDataMap);
    }
    TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&pFVar3->CompositeFontToCachedDataMap,0,
                      *(int *)&(pFVar3->CompositeFontToCachedDataMap).field_0x8);
    puVar1 = &(pFVar3->CompositeFontToCachedDataMap).field_0xc;
    *(undefined4 *)&(pFVar3->CompositeFontToCachedDataMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&pFVar3->CompositeFontToCachedDataMap,0,(int *)puVar1
                );
    }
    *(undefined4 *)&(pFVar3->CompositeFontToCachedDataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar3->CompositeFontToCachedDataMap).field_0x34 = 0;
    iVar2 = *(int *)&(pFVar3->CompositeFontToCachedDataMap).field_0x2c;
    *(undefined4 *)&(pFVar3->CompositeFontToCachedDataMap).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(pFVar3->CompositeFontToCachedDataMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(pFVar3->CompositeFontToCachedDataMap).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(pFVar3->CompositeFontToCachedDataMap).field_0x48 = 1;
      TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
                *)&pFVar3->CompositeFontToCachedDataMap);
    }
    this_00 = &pFVar3->FontFaceMap;
    bVar4 = 1 < *(int *)&(pFVar3->FontFaceMap).field_0x48;
    if (!bVar4) {
      TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(pFVar3->FontFaceMap).field_0x8);
    puVar1 = &(pFVar3->FontFaceMap).field_0xc;
    *(undefined4 *)&(pFVar3->FontFaceMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(pFVar3->FontFaceMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar3->FontFaceMap).field_0x34 = 0;
    iVar2 = *(int *)&(pFVar3->FontFaceMap).field_0x2c;
    *(undefined4 *)&(pFVar3->FontFaceMap).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(pFVar3->FontFaceMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar3->FontFaceMap).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(pFVar3->FontFaceMap).field_0x48 = 1;
      TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  bVar4 = 1 < *(int *)&(this->FontToCharacterListCache).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
                      *)&this->FontToCharacterListCache);
  }
  TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->FontToCharacterListCache,0,
                    *(int *)&(this->FontToCharacterListCache).field_0x8);
  puVar1 = &(this->FontToCharacterListCache).field_0xc;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)&this->FontToCharacterListCache,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x34 = 0;
  iVar2 = *(int *)&(this->FontToCharacterListCache).field_0x2c;
  *(undefined4 *)&(this->FontToCharacterListCache).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->FontToCharacterListCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FontToCharacterListCache).field_0x10,
               0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->FontToCharacterListCache).field_0x48 = 1;
    TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
              *)&this->FontToCharacterListCache);
  }
  this_01 = &this->ShapedGlyphToAtlasData;
  bVar4 = 1 < *(int *)&(this->ShapedGlyphToAtlasData).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->ShapedGlyphToAtlasData).field_0x8);
  puVar1 = &(this->ShapedGlyphToAtlasData).field_0xc;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x34 = 0;
  iVar2 = *(int *)&(this->ShapedGlyphToAtlasData).field_0x2c;
  *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ShapedGlyphToAtlasData).field_0x10,0)
    ;
  }
  if (bVar4) {
    *(undefined4 *)&(this->ShapedGlyphToAtlasData).field_0x48 = 1;
    TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_02 = &this->SdfGlyphToAtlasData;
  bVar4 = 1 < *(int *)&(this->SdfGlyphToAtlasData).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)&(this->SdfGlyphToAtlasData).field_0x8);
  puVar1 = &(this->SdfGlyphToAtlasData).field_0xc;
  *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x34 = 0;
  iVar2 = *(int *)&(this->SdfGlyphToAtlasData).field_0x2c;
  *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SdfGlyphToAtlasData).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->SdfGlyphToAtlasData).field_0x48 = 1;
    TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
              *)this_02);
  }
  this_03 = &this->SdfTaskToAtlasData;
  bVar4 = *(int *)&(this->SdfTaskToAtlasData).field_0x48 < 2;
  if (bVar4) {
    TSet<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                      *)this_03);
  }
  TSparseArray<TSparseSetElement<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_03,0,*(int *)&(this->SdfTaskToAtlasData).field_0x8);
  puVar1 = &(this->SdfTaskToAtlasData).field_0xc;
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this_03,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x34 = 0;
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->SdfTaskToAtlasData).field_0x2c;
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SdfTaskToAtlasData).field_0x10,0);
  }
  if (bVar4) {
    return;
  }
  *(undefined4 *)&(this->SdfTaskToAtlasData).field_0x48 = 1;
  TSet<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
  ::Rehash((TSet<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
            *)this_03);
  return;
}

// FlushFontObjects @ 14248a0e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontCache::FlushFontObjects(FSlateFontCache *this)

{
  TMap<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>,FDefaultSetAllocator,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>_>
  *pTVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                         ,0x80d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar6 = false;
  lpCriticalSection = &this->FontObjectsToFlushCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (0 < (this->FontObjectsToFlush).ArrayNum) {
    pTVar1 = &this->FontToCharacterListCache;
    TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
                *)pTVar1);
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_10 = 0;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar9 = local_78._24_8_ >> 0x20;
    uVar10 = local_78._28_4_;
    local_18 = (TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
                *)pTVar1;
    bVar6 = false;
    if ((int)uVar10 < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        pFVar8 = (this->FontObjectsToFlush).AllocatorInstance.Data;
        pFVar3 = pFVar8 + (longlong)(this->FontObjectsToFlush).ArrayNum * 8;
        if (pFVar8 != pFVar3) {
          lVar4 = *(longlong *)((longlong)(int)uVar9 * 0x98 + *local_48);
          do {
            if (lVar4 == 0) {
              bVar11 = *(longlong *)pFVar8 == 0;
            }
            else {
              bVar11 = lVar4 == *(longlong *)pFVar8;
            }
            if (bVar11) {
              bVar6 = true;
              TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_20,uVar10);
              local_10 = CONCAT11(local_10._1_1_,1);
              break;
            }
            pFVar8 = pFVar8 + 8;
          } while (pFVar8 != pFVar3);
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar9 = (ulonglong)uStack_2c;
        uVar10 = uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar7 = 1;
        }
        else {
          uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    piVar2 = &(this->FontObjectsToFlush).ArrayMax;
    (this->FontObjectsToFlush).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->FontObjectsToFlush).AllocatorInstance,0,piVar2);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar6) {
    FlushData(this);
  }
  return;
}

// FlushObject @ 14248a340

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontCache::FlushObject(FSlateFontCache *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UObject *local_res10 [3];
  
  if (param_1 != (UObject *)0x0) {
    lpCriticalSection = &this->FontObjectsToFlushCS;
    local_res10[0] = param_1;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TArray<UObject_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_const_*_const_&>
              (&this->FontObjectsToFlush,local_res10);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetAllFontTexturesIndex @ 14248a9a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall FSlateFontCache::GetAllFontTexturesIndex(FSlateFontCache *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (this->GrayscaleFontAtlasIndices).ArrayNum;
  if (iVar4 <= param_1) {
    iVar4 = param_1 - iVar4;
    iVar1 = (this->ColorFontAtlasIndices).ArrayNum;
    if (iVar1 <= iVar4) {
      iVar4 = iVar4 - iVar1;
      if ((this->MsdfFontAtlasIndices).ArrayNum <= iVar4) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                           ,0x807,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        return 0;
      }
      if (iVar4 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
      return (int)(byte)(this->MsdfFontAtlasIndices).AllocatorInstance.Data[iVar4];
    }
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return (int)(byte)(this->ColorFontAtlasIndices).AllocatorInstance.Data[iVar4];
  }
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return (int)(byte)(this->GrayscaleFontAtlasIndices).AllocatorInstance.Data[param_1];
}

// GetAtlasPageResource @ 14248ad70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateShaderResource * __thiscall
FSlateFontCache::GetAtlasPageResource(FSlateFontCache *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlateShaderResource *pFVar4;
  uint uVar5;
  
  uVar3 = GetAllFontTexturesIndex(this,param_1);
  uVar5 = 0;
  if ((int)uVar3 < (this->AllFontTextures).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateShaderResource *)(*pcVar1)();
      return pFVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014248adec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FSlateShaderResource *)
           (**(code **)(**(longlong **)
                          ((this->AllFontTextures).AllocatorInstance.Data +
                          (longlong)(int)uVar3 * 0x10) + 8))();
  return pFVar4;
}

// GetAvailableFontSubFaces @ 14248ae20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FSlateFontCache::GetAvailableFontSubFaces
          (FSlateFontCache *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,FString *param_1)

{
  FFreeTypeFace::GetAvailableSubFaces(__return_storage_ptr__,(this->FTLibrary).Ptr,param_1);
  return __return_storage_ptr__;
}

// GetAvailableFontSubFaces @ 14248ae50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FSlateFontCache::GetAvailableFontSubFaces
          (FSlateFontCache *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,TSharedRef<FFontFaceData_const_,1> *param_1)

{
  TSharedRef<FFontFaceData_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FFreeTypeFace::GetAvailableSubFaces(__return_storage_ptr__,(this->FTLibrary).Ptr,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetBaseline @ 14248b7c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

short __thiscall
FSlateFontCache::GetBaseline(FSlateFontCache *this,FSlateFontInfo *param_1,float param_2)

{
  short sVar1;
  
  sVar1 = FSlateFontRenderer::GetBaseline((this->FontRenderer).Ptr,param_1,param_2);
  return sVar1;
}

// GetCharacterList @ 14248c480

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FCharacterList * __thiscall
FSlateFontCache::GetCharacterList
          (FSlateFontCache *this,FSlateFontInfo *param_1,float param_2,FFontOutlineSettings *param_3
          )

{
  TMap<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>,FDefaultSetAllocator,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>_>
  *this_00;
  UObject *pUVar1;
  longlong *plVar2;
  TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  FCharacterList *pFVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  FSlateFontCache *local_res8;
  TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_d8;
  TObjectPtr<UObject_const_>_u_0 *local_d0;
  TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_c8;
  TObjectPtr<UObject_const_>_u_0 local_b8 [2];
  int iStack_a8;
  undefined2 uStack_a4;
  longlong local_88;
  TReferenceControllerBase<1> *local_80;
  longlong local_78;
  float local_70;
  int local_58;
  char cStack_54;
  char cStack_53;
  undefined1 uStack_52;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  uint local_34;
  
  local_res8 = this;
  FSlateFontKey::FSlateFontKey((FSlateFontKey *)&local_b8[0].ObjectPtr,param_1,param_3,param_2);
  this_00 = &this->FontToCharacterListCache;
  if (*(int *)&(this->FontToCharacterListCache).field_0x8 !=
      *(int *)&(this->FontToCharacterListCache).field_0x34) {
    puVar5 = *(undefined1 **)&(this->FontToCharacterListCache).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->FontToCharacterListCache).field_0x38;
    }
    iVar8 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->FontToCharacterListCache).field_0x48 - 1U & local_34)
                              * 4);
    if (iVar8 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar8 * 0x98 + *(longlong *)&this_00->field_0x0);
        this = local_res8;
        if ((((((UObject *)*plVar2 == local_b8[0].DebugPtr) && ((int)plVar2[2] == iStack_a8)) &&
             (*(char *)((longlong)plVar2 + 0x14) == (char)uStack_a4)) &&
            ((*(char *)((longlong)plVar2 + 0x15) == (char)((ushort)uStack_a4 >> 8) &&
             (plVar2[6] == local_88)))) && (plVar2[8] == local_78)) {
          fVar10 = *(float *)(plVar2 + 9);
          if (__real_477fff00 <= *(float *)(plVar2 + 9)) {
            fVar10 = __real_477fff00;
          }
          fVar9 = local_70;
          if (__real_477fff00 <= local_70) {
            fVar9 = __real_477fff00;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
          if (((fVar10 == fVar9) && ((int)plVar2[0xc] == local_58)) &&
             ((*(char *)((longlong)plVar2 + 100) == cStack_54 &&
              ((*(char *)((longlong)plVar2 + 0x65) == cStack_53 &&
               (local_38 == *(float *)(plVar2 + 0x10))))))) {
            if (iVar8 != -1) {
              plVar4 = plVar2 + 0x11;
              if (plVar2 == (longlong *)0x0) {
                plVar4 = (longlong *)0x0;
              }
              if (plVar4 != (longlong *)0x0) {
                pFVar7 = (FCharacterList *)*plVar4;
                goto LAB_14248c730;
              }
            }
            break;
          }
        }
        iVar8 = (int)plVar2[0x12];
      } while (iVar8 != -1);
    }
  }
  pTVar6 = (TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)0x0;
  pTVar3 = ::operator_new(0xe8);
  if (pTVar3 != (TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)0x0) {
    *(undefined8 *)pTVar3 = 0;
    *(undefined8 *)&pTVar3->field_0x8 = 0;
    *(undefined8 *)&pTVar3->field_0x20 = 0;
    *(undefined4 *)&pTVar3->field_0x28 = 0;
    *(undefined4 *)&pTVar3->field_0x2c = 0x80;
    *(undefined4 *)&pTVar3->field_0x30 = 0xffffffff;
    *(undefined4 *)&pTVar3->field_0x34 = 0;
    *(undefined8 *)&pTVar3[1].field_0x8 = 0;
    *(undefined4 *)&pTVar3[1].field_0x10 = 0;
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)&pTVar3[1].field_0x18,(FSlateFontInfo *)&local_b8[0].ObjectPtr);
    *(int *)&pTVar3[3].field_0x8 = local_58;
    pTVar3[3].field_0xc = cStack_54;
    pTVar3[3].field_0xd = cStack_53;
    pTVar3[3].field_0xe = uStack_52;
    pUVar1 = (UObject *)CONCAT44(uStack_4c,uStack_50);
    *(UObject **)&pTVar3[3].field_0x10 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)&pTVar3[3].field_0x18 = local_48;
    *(undefined8 *)&pTVar3[3].field_0x20 = uStack_40;
    *(float *)&pTVar3[3].field_0x28 = local_38;
    *(uint *)&pTVar3[3].field_0x2c = local_34;
    *(FSlateFontCache **)&pTVar3[3].field_0x30 = this;
    *(undefined4 *)(pTVar3 + 4) = 0;
    pTVar6 = pTVar3;
  }
  local_d0 = local_b8;
  local_c8 = &local_d8;
  local_d8 = pTVar6;
  TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FSlateFontKey_const_&,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_&&>_>
            ((TSet<TTuple<FSlateFontKey,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FSlateFontKeyFuncs<TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FSlateFontKey_const_&,TUniquePtr<FCharacterList,TDefaultDelete<FCharacterList>_>_&&>
              *)&local_res8,(bool *)&local_d0);
  pTVar6 = local_d8;
  pFVar7 = *(FCharacterList **)
            ((longlong)(int)local_res8 * 0x98 + 0x88 + *(longlong *)&this_00->field_0x0);
  if (local_d8 !=
      (TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&local_d8[2].field_0x18);
    *(undefined4 *)&pTVar6[1].field_0x10 = 0;
    if (*(void **)&pTVar6[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar6[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<wchar_t,FCharacterEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (pTVar6);
    ::operator_delete(pTVar6,0xe8);
  }
LAB_14248c730:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  return pFVar7;
}

// GetDefaultFontData @ 14248eb70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFontData * __thiscall
FSlateFontCache::GetDefaultFontData(FSlateFontCache *this,FSlateFontInfo *param_1)

{
  FFontData *pFVar1;
  
  pFVar1 = FCompositeFontCache::GetDefaultFontData((this->CompositeFontCache).Ptr,param_1);
  return pFVar1;
}

// GetFontAttributes @ 14248ed90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
FSlateFontCache::GetFontAttributes(FSlateFontCache *this,FFontData *param_1)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  
  pTVar1 = FCompositeFontCache::GetFontAttributes((this->CompositeFontCache).Ptr,param_1);
  return pTVar1;
}

// GetFontDataAssetResidentMemory @ 14248f150

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ulong64 __thiscall
FSlateFontCache::GetFontDataAssetResidentMemory(FSlateFontCache *this,UObject *param_1)

{
  ulong64 uVar1;
  
  uVar1 = FCompositeFontCache::GetFontDataAssetResidentMemory
                    ((this->CompositeFontCache).Ptr,param_1);
  return uVar1;
}

// GetFontDataForCodepoint @ 14248f620

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFontData * __thiscall
FSlateFontCache::GetFontDataForCodepoint
          (FSlateFontCache *this,FSlateFontInfo *param_1,wchar32 param_2,float *param_3)

{
  FFontData *pFVar1;
  
  pFVar1 = FCompositeFontCache::GetFontDataForCodepoint
                     ((this->CompositeFontCache).Ptr,param_1,param_2,param_3);
  return pFVar1;
}

// GetKerning @ 142491560

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall
FSlateFontCache::GetKerning
          (FSlateFontCache *this,FFontData *param_1,float param_2,wchar_t param_3,wchar_t param_4,
          float param_5)

{
  FSlateFontRenderer *this_00;
  code *pcVar1;
  bool bVar2;
  schar sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FT_FaceRec_ *pFVar7;
  FT_Vector_ local_res8;
  TSharedPtr<FFreeTypeKerningCache,1> local_38 [2];
  
  this_00 = (this->FontRenderer).Ptr;
  pFVar7 = FSlateFontRenderer::GetFontFace(this_00,param_1);
  if ((pFVar7 != (FT_FaceRec_ *)0x0) && ((pFVar7->face_flags & 0x40) != 0)) {
    uVar4 = FT_Get_Char_Index(pFVar7,param_3);
    uVar5 = FT_Get_Char_Index(pFVar7,param_4);
    uVar6 = FreeTypeUtils::ComputeFontPixelSize(param_2,param_5);
    pFVar7 = FSlateFontRenderer::GetFontFace(this_00,param_1);
    FFreeTypeCacheDirectory::GetKerningCache(this_00->FTCacheDirectory,local_38,pFVar7,0,uVar6);
    if (local_38[0].Object != (FFreeTypeKerningCache *)0x0) {
      if ((local_38[0].Object == (FFreeTypeKerningCache *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        sVar3 = (*pcVar1)();
        return sVar3;
      }
      bVar2 = FFreeTypeKerningCache::FindOrCache(local_38[0].Object,uVar4,uVar5,&local_res8);
      if (bVar2) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38[0].SharedReferenceCount.ReferenceController);
        return (schar)(local_res8.x + 0x20 >> 6);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38[0].SharedReferenceCount.ReferenceController);
  }
  return '\0';
}

// GetMaxCharacterHeight @ 1424923e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ushort __thiscall
FSlateFontCache::GetMaxCharacterHeight(FSlateFontCache *this,FSlateFontInfo *param_1,float param_2)

{
  ushort uVar1;
  
  uVar1 = FSlateFontRenderer::GetMaxHeight((this->FontRenderer).Ptr,param_1,param_2);
  return uVar1;
}

// GetNumAtlasPages @ 142492830

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall FSlateFontCache::GetNumAtlasPages(FSlateFontCache *this)

{
  return (this->MsdfFontAtlasIndices).ArrayNum + (this->ColorFontAtlasIndices).ArrayNum +
         (this->GrayscaleFontAtlasIndices).ArrayNum;
}

// GetOverflowEllipsisText @ 142492880

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FSlateFontCache::GetOverflowEllipsisText
          (FSlateFontCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          FSlateFontInfo *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  ETextShapingMethod EVar5;
  wchar_t *pwVar6;
  
  uVar2 = (**(code **)(*(longlong *)CVarDefaultTextShapingMethod._padding_ + 200))();
  EVar5 = (ETextShapingMethod)uVar2;
  if (2 < uVar2) {
    EVar5 = Auto;
  }
  pFVar3 = FText::ToString(&this->EllipsisText);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FSlateTextShaper::ShapeBidirectionalText
            ((this->TextShaper).Ptr,__return_storage_ptr__,pwVar6,0,iVar4,param_1,param_2,
             LeftToRight,EVar5);
  return __return_storage_ptr__;
}

// GetSdfGlyphFontAtlasData @ 142494400

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSdfGlyphFontAtlasData * __thiscall
FSlateFontCache::GetSdfGlyphFontAtlasData
          (FSlateFontCache *this,FSdfGlyphFontAtlasData *__return_storage_ptr__,
          FShapedGlyphEntry *param_1,FFontOutlineSettings *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  TArray<TSharedRef<ISlateFontTexture,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FMetrics *pFVar5;
  atomic<int> aVar6;
  undefined8 uVar7;
  EFontRasterizationMode EVar8;
  FScriptContainerElement FVar9;
  ushort uVar10;
  ushort uVar11;
  ESlateTextureAtlasThreadId EVar12;
  FSdfGlyphFontAtlasData *pFVar13;
  FSlateSdfGenerator *pFVar14;
  FSlateSdfGenerator FVar15;
  TReferenceControllerBase<1> *pTVar16;
  ISlateFontAtlasFactory *pIVar17;
  FName FVar18;
  code *pcVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  short sVar35;
  ushort uVar36;
  ushort uVar37;
  FSharedReferencer<1> FVar38;
  ESlateFontAtlasContentType EVar39;
  FShapedGlyphEntry *pFVar40;
  ESlateTextureAtlasThreadId *pEVar41;
  bool bVar42;
  uint uVar43;
  atomic<int> aVar44;
  int iVar45;
  FSdfGlyphFontAtlasData *pFVar46;
  FShapedGlyphFaceData *pFVar47;
  FSdfGlyphFontAtlasData *pFVar48;
  ulonglong uVar49;
  FName *pFVar50;
  FThreadSafeStaticStat<FStat_STAT_SlateNumFontAtlases> FVar51;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar52;
  FSdfGlyphFontAtlasData *pFVar53;
  longlong lVar54;
  FScriptContainerElement *pFVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  char local_res18 [8];
  FScriptContainerElement local_2e8;
  char local_2e7 [7];
  TSharedRef<FSdfGlyphFontAtlasData,1> local_2e0;
  undefined8 local_2d0;
  undefined1 local_2c8 [4];
  FLLMScope local_2c4;
  ESlateTextureAtlasThreadId local_2c0;
  ESlateFontAtlasContentType local_2bc;
  undefined4 local_2b8;
  uint local_2b4;
  void *local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined1 local_294;
  int local_290;
  float local_28c;
  FMemScope local_288;
  undefined1 local_280 [16];
  longlong *local_270;
  undefined4 local_268;
  undefined4 local_260;
  uint local_258;
  FSlateFontAtlas *local_248;
  TReferenceControllerBase<1> *pTStack_240;
  FShapedGlyphEntry *local_238;
  ESlateTextureAtlasThreadId *local_230;
  float *local_228;
  FFreeTypeFace *local_220;
  longlong *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  float local_208;
  float local_204;
  undefined4 local_200;
  undefined1 local_1f8 [16];
  FSlateFontAtlas *local_1e8;
  TReferenceControllerBase<1> *pTStack_1e0;
  undefined1 local_1d8 [8];
  FName local_1d0;
  TRawPtrProxy<FSdfGlyphFontAtlasData> local_1c8;
  FSdfGlyphTaskKey *local_1c0;
  TSharedRef<FSdfGlyphFontAtlasData,1> *local_1b8;
  undefined8 *local_1b0;
  TSharedRef<FSdfGlyphFontAtlasData,1> *local_1a8;
  TWeakPtr<FFreeTypeFace,1> local_1a0;
  undefined8 *local_190;
  TSharedRef<FSdfGlyphFontAtlasData,1> *local_188;
  FSdfGlyphTaskKey *local_180;
  TSharedRef<FSdfGlyphFontAtlasData,1> *local_178;
  undefined8 *local_170;
  TSharedRef<FSdfGlyphFontAtlasData,1> *local_168;
  FShapedGlyphEntry *local_160;
  ESlateFontAtlasContentType *local_158;
  int *local_150;
  undefined4 *local_148;
  FSlateFontCache *local_140;
  char *local_138;
  void **local_130;
  TSharedRef<FSdfGlyphFontAtlasData,1> *local_128;
  char *local_120;
  undefined8 *local_118;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined1 uStack_ec;
  char cStack_eb;
  undefined2 uStack_ea;
  FName local_e8;
  FSdfGlyphTaskKey local_e0;
  FSdfGlyphTaskKey local_a8 [2];
  
  FLLMScope::FLLMScope(&local_2c4,LLMTagDeclaration_UI_Text.UniqueName,false,None,Default,true);
  local_1d0 = LLMTagDeclaration_UI_Text.UniqueName;
  FMemScope::FMemScope(&local_288,&local_1d0,true);
  if (param_1->bIsVisible == false) {
LAB_14249548a:
    __return_storage_ptr__->VerticalOffset = 0;
    __return_storage_ptr__->HorizontalOffset = 0;
    __return_storage_ptr__->StartU = 0;
    __return_storage_ptr__->StartV = 0;
    __return_storage_ptr__->USize = 0;
    __return_storage_ptr__->VSize = 0;
    __return_storage_ptr__->EmOuterSpread = 0.0;
    __return_storage_ptr__->EmInnerSpread = 0.0;
    (__return_storage_ptr__->Metrics).BearingX = 0.0;
    (__return_storage_ptr__->Metrics).BearingY = 0.0;
    (__return_storage_ptr__->Metrics).Width = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->Metrics).Height = 0;
    FMemScope::~FMemScope(&local_288);
    FLLMScope::~FLLMScope(&local_2c4);
    return __return_storage_ptr__;
  }
  if (((param_1->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
     (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar42)) {
    pcVar19 = (code *)swi(3);
    pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
    return pFVar46;
  }
  if ((((param_1->FontFaceData).Object)->RasterizationMode == Bitmap) ||
     (bSlateSdfTextEnable == false)) goto LAB_14249548a;
  local_2c0 = this->OwningThread;
  if ((((int)local_2c0 < 0) || (1 < (int)local_2c0)) &&
     (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachedAtlasDataThreadIndex >= 0 && CachedAtlasDataThreadIndex < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                          ,0x538,L""), bVar42)) {
    pcVar19 = (code *)swi(3);
    pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
    return pFVar46;
  }
  pFVar47 = TSharedPtr<FShapedGlyphFaceData,1>::operator->(&param_1->FontFaceData);
  local_res18[0] = pFVar47->RasterizationMode == SdfApproximation;
  pFVar47 = TSharedPtr<FShapedGlyphFaceData,1>::operator->(&param_1->FontFaceData);
  fVar58 = pFVar47->FontScale;
  if (((param_1->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
     (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar42)) {
    pcVar19 = (code *)swi(3);
    pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
    return pFVar46;
  }
  uVar43 = FreeTypeUtils::ComputeFontPixelSize(((param_1->FontFaceData).Object)->FontSize,fVar58);
  fVar60 = __real_3f800000;
  fVar58 = (float)uVar43;
  if ((float)uVar43 <= __real_3f800000) {
    fVar58 = __real_3f800000;
  }
  pFVar47 = TSharedPtr<FShapedGlyphFaceData,1>::operator->(&param_1->FontFaceData);
  local_290 = (int)pFVar47->SdfPpem;
  local_28c = fVar58 / (float)local_290;
  pFVar47 = TSharedPtr<FShapedGlyphFaceData,1>::operator->(&param_1->FontFaceData);
  fVar57 = __real_3f000000;
  pTVar52 = &this->MsdfFontAtlasIndices;
  fVar60 = fVar60 / fVar58;
  local_2b8 = 2;
  local_2bc = Msdf;
  fVar61 = fVar60 + fVar60;
  if (__real_3e800000 <= fVar60 + fVar60) {
    fVar61 = __real_3e800000;
  }
  auVar59 = roundps(ZEXT416((uint)fVar58),
                    ZEXT416((uint)((float)param_2->OutlineSize * pFVar47->FontScale +
                                  __real_3f000000)),1);
  if (fVar61 <= __real_3d4ccccd) {
    fVar61 = __real_3d4ccccd;
  }
  fVar58 = auVar59._0_4_ * fVar60 + fVar61;
  if (__real_41000000 <= fVar58) {
    fVar58 = __real_41000000;
  }
  pFVar47 = TSharedPtr<FShapedGlyphFaceData,1>::operator->(&param_1->FontFaceData);
  pFVar46 = (FSdfGlyphFontAtlasData *)0x0;
  EVar8 = pFVar47->RasterizationMode;
  if (EVar8 == Bitmap) {
LAB_142494651:
    bVar42 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                        ,0x54e,L"");
    if (bVar42) {
      pcVar19 = (code *)swi(3);
      pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
      return pFVar46;
    }
  }
  else if (EVar8 != Msdf) {
    if ((EVar8 != Sdf) && (EVar8 != SdfApproximation)) goto LAB_142494651;
    local_2b8 = 0;
    pTVar52 = &this->GrayscaleFontAtlasIndices;
    local_2bc = Alpha;
  }
  local_158 = &local_2bc;
  local_150 = &local_290;
  local_148 = &local_2b8;
  pFVar48 = (FSdfGlyphFontAtlasData *)
            param_1->CachedSdfFontAtlasData[(int)local_2c0].WeakReferenceCount.ReferenceController;
  pFVar53 = pFVar48;
  fVar60 = fVar61;
  local_160 = param_1;
  local_140 = this;
  if (pFVar48 != (FSdfGlyphFontAtlasData *)0x0) {
    aVar6 = *(atomic<int> *)&pFVar48->USize;
    do {
      pFVar53 = pFVar46;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1424946d6;
      LOCK();
      aVar44 = *(atomic<int> *)&pFVar48->USize;
      bVar42 = aVar6 == aVar44;
      if (bVar42) {
        *(atomic<int> *)&pFVar48->USize = (atomic<int>)((int)aVar6 + 1);
        aVar44 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar44;
    } while (!bVar42);
    pFVar13 = param_1->CachedSdfFontAtlasData[(int)local_2c0].Object;
    pFVar53 = pFVar48;
    if (pFVar13 != (FSdfGlyphFontAtlasData *)0x0) {
      uVar20 = pFVar13->EmInnerSpread;
      uVar21 = (pFVar13->Metrics).BearingX;
      uVar22 = (pFVar13->Metrics).BearingY;
      uVar23 = (pFVar13->Metrics).Width;
      uVar7 = *(undefined8 *)&(pFVar13->Metrics).Height;
      uVar24 = pFVar13->VerticalOffset;
      uVar25 = pFVar13->HorizontalOffset;
      uVar26 = pFVar13->StartU;
      uVar27 = pFVar13->StartV;
      uVar28 = pFVar13->USize;
      uVar29 = pFVar13->VSize;
      uVar30 = pFVar13->EmOuterSpread;
      local_f0 = (undefined4)uVar7;
      uStack_ec = (undefined1)((ulonglong)uVar7 >> 0x20);
      cStack_eb = (char)((ulonglong)uVar7 >> 0x28);
      uStack_ea = (undefined2)((ulonglong)uVar7 >> 0x30);
      local_100 = uVar20;
      uStack_fc = uVar21;
      uStack_f8 = uVar22;
      uStack_f4 = uVar23;
      if (cStack_eb == '\0') {
        __return_storage_ptr__->VerticalOffset = uVar24;
        __return_storage_ptr__->HorizontalOffset = uVar25;
        __return_storage_ptr__->StartU = uVar26;
        __return_storage_ptr__->StartV = uVar27;
        __return_storage_ptr__->USize = uVar28;
        __return_storage_ptr__->VSize = uVar29;
        __return_storage_ptr__->EmOuterSpread = (float)uVar30;
        __return_storage_ptr__->EmInnerSpread = (float)uVar20;
        (__return_storage_ptr__->Metrics).BearingX = (float)uVar21;
        (__return_storage_ptr__->Metrics).BearingY = (float)uVar22;
        (__return_storage_ptr__->Metrics).Width = (float)uVar23;
        *(undefined8 *)&(__return_storage_ptr__->Metrics).Height = uVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar48);
        goto LAB_14249542d;
      }
      fVar56 = pFVar13->EmOuterSpread;
      if ((fVar58 <= fVar56) &&
         (fVar61 < pFVar13->EmInnerSpread || fVar61 == pFVar13->EmInnerSpread)) {
        if (pFVar13->bPendingRespawn != false) {
          bVar42 = `FSlateFontCache::GetSdfGlyphFontAtlasData'::__l2::<lambda_1>::operator()
                             (&local_160,pFVar13);
          pFVar13->bPendingRespawn = !bVar42;
        }
        pFVar5 = param_1->CachedSdfMetrics + (int)local_2c0;
        uVar31 = pFVar5->BearingX;
        uVar32 = pFVar5->BearingY;
        uVar33 = pFVar5->Width;
        uVar34 = pFVar5->Height;
        __return_storage_ptr__->VerticalOffset = uVar24;
        __return_storage_ptr__->HorizontalOffset = uVar25;
        __return_storage_ptr__->StartU = uVar26;
        __return_storage_ptr__->StartV = uVar27;
        __return_storage_ptr__->USize = uVar28;
        __return_storage_ptr__->VSize = uVar29;
        __return_storage_ptr__->EmOuterSpread = (float)uVar30;
        __return_storage_ptr__->EmInnerSpread = (float)local_100;
        (__return_storage_ptr__->Metrics).BearingX = (float)uVar31;
        (__return_storage_ptr__->Metrics).BearingY = (float)uVar32;
        (__return_storage_ptr__->Metrics).Width = (float)uVar33;
        *(ulonglong *)&(__return_storage_ptr__->Metrics).Height =
             CONCAT26(uStack_ea,CONCAT15(cStack_eb,CONCAT14(uStack_ec,uVar34)));
        uStack_fc = uVar31;
        uStack_f8 = uVar32;
        uStack_f4 = uVar33;
        local_f0 = uVar34;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar48);
        goto LAB_14249542d;
      }
      if (fVar56 <= fVar58) {
        fVar56 = fVar58;
      }
      fVar60 = pFVar13->EmInnerSpread;
      fVar58 = fVar56;
      if (pFVar13->EmInnerSpread <= fVar61) {
        fVar60 = fVar61;
      }
    }
  }
LAB_1424946d6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar53);
  iVar45 = local_290;
  EVar39 = local_2bc;
  fVar56 = (float)local_290;
  for (fVar61 = __real_40000000; fVar61 < fVar56 * fVar58; fVar61 = fVar61 + fVar61) {
  }
  fVar61 = fVar61 / fVar56;
  for (fVar58 = __real_40000000; fVar58 < fVar56 * fVar60; fVar58 = fVar58 + fVar58) {
  }
  local_230 = &local_2c0;
  local_228 = &local_28c;
  local_2b4 = param_1->GlyphIndex;
  fVar58 = fVar58 / fVar56;
  local_238 = param_1;
  pFVar47 = TSharedPtr<FShapedGlyphFaceData,1>::operator->(&param_1->FontFaceData);
  local_1a0.Object = (pFVar47->FontFace).Object;
  local_1a0.WeakReferenceCount.ReferenceController =
       (pFVar47->FontFace).WeakReferenceCount.ReferenceController;
  if (local_1a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_1a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FSdfGlyphEntryKey::FSdfGlyphEntryKey
            ((FSdfGlyphEntryKey *)(local_280 + 8),&local_1a0,local_2b4,EVar39,iVar45,fVar61,fVar58);
  iVar45 = TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FSdfGlyphEntryKey>
                     ((TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                       *)&this->SdfGlyphToAtlasData,local_258,(FSdfGlyphEntryKey *)(local_280 + 8));
  if (iVar45 == -1) {
LAB_142494902:
    local_220 = (FFreeTypeFace *)local_280._8_8_;
    local_218 = local_270;
    if (local_270 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_270 + 0xc) = *(int *)((longlong)local_270 + 0xc) + 1;
      UNLOCK();
    }
    pFVar14 = (this->SdfGenerator).Ptr;
    local_210 = local_268;
    local_20c = local_2b8;
    local_200 = local_260;
    local_2d0 = 0;
    local_2b0 = (void *)0x0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 0;
    local_294 = 0;
    FVar15 = *pFVar14;
    local_208 = fVar61;
    local_204 = fVar58;
    if (local_res18[0] == '\0') {
      iVar45 = (**(code **)((longlong)FVar15 + 0x10))(pFVar14,&local_220,&local_2d0);
    }
    else {
      iVar45 = (**(code **)((longlong)FVar15 + 0x20))();
    }
    pFVar48 = ::operator_new(0x28);
    if (pFVar48 != (FSdfGlyphFontAtlasData *)0x0) {
      pFVar48->VerticalOffset = 0;
      pFVar48->HorizontalOffset = 0;
      pFVar48->StartU = 0;
      pFVar48->StartV = 0;
      *(undefined8 *)&pFVar48->USize = 0;
      pFVar48->EmInnerSpread = 0.0;
      (pFVar48->Metrics).BearingX = 0.0;
      (pFVar48->Metrics).BearingY = 0.0;
      (pFVar48->Metrics).Width = 0.0;
      *(undefined8 *)&(pFVar48->Metrics).Height = 0;
      pFVar46 = pFVar48;
    }
    local_1c8.Object = pFVar46;
    TSharedRef<FSdfGlyphFontAtlasData,1>::
    TSharedRef<FSdfGlyphFontAtlasData,1><FSdfGlyphFontAtlasData>(&local_2e0,&local_1c8);
    if (iVar45 == 0) {
LAB_142494a16:
      (local_2e0.Object)->bSupportsSdf = true;
      (local_2e0.Object)->HorizontalOffset = local_2d0._4_2_;
      (local_2e0.Object)->VerticalOffset = local_2d0._6_2_;
      (local_2e0.Object)->EmOuterSpread = fVar61;
      (local_2e0.Object)->EmInnerSpread = fVar58;
      ((local_2e0.Object)->Metrics).BearingX = (float)(int)local_2d0._4_2_;
      ((local_2e0.Object)->Metrics).BearingY = (float)(int)local_2d0._6_2_;
      ((local_2e0.Object)->Metrics).Width = (float)(ushort)local_2d0;
      ((local_2e0.Object)->Metrics).Height = (float)local_2d0._2_2_;
      (local_2e0.Object)->Valid = true;
      if (((int)((uint)local_2d0._2_2_ * (uint)(ushort)local_2d0) < 1) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("SdfRequestOutputInfo.ImageWidth*SdfRequestOutputInfo.ImageHeight > 0"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                              ,0x5e2,L""), bVar42)) {
        pcVar19 = (code *)swi(3);
        pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
        return pFVar46;
      }
      local_2e7[0] = (uint)local_2d0._2_2_ * (uint)(ushort)local_2d0 <= local_2a8._4_4_;
      if ((!(bool)local_2e7[0]) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("bPlaceholderAvailable",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                              ,0x5e4,L""), bVar42)) {
        pcVar19 = (code *)swi(3);
        pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
        return pFVar46;
      }
      if (local_2e7[0] == '\0') {
        if (local_res18[0] != '\0') goto LAB_142494f6f;
      }
      else {
        local_2a0 = (undefined4)local_2d0;
        local_29c = CONCAT44(local_2bc,
                             (int)CONCAT42((int)((ulonglong)local_2d0 >> 0x20),local_2d0._6_2_));
        local_294 = 1;
      }
      local_138 = local_2e7;
      local_130 = &local_2b0;
      local_128 = &local_2e0;
      local_120 = local_res18;
      local_118 = &local_2d0;
      if ((pTVar52 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("FontAtlasIndicesPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                              ,0x613,L""), bVar42)) {
        pcVar19 = (code *)swi(3);
        pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
        return pFVar46;
      }
      local_2b4 = pTVar52->ArrayNum;
      uVar49 = (ulonglong)(int)local_2b4;
      pFVar55 = (pTVar52->AllocatorInstance).Data;
      pFVar4 = pFVar55 + uVar49;
      while( true ) {
        if (pTVar52->ArrayNum != (int)uVar49) {
          local_2c8[0] = 0;
          `TCheckedPointerIterator<unsigned_char,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2c8);
        }
        if (pFVar55 == pFVar4) {
          if (0xfe < (this->AllFontTextures).ArrayNum) {
            if (2 < (byte)LogSlate._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            }
            goto LAB_142494f6f;
          }
          pIVar17 = (this->FontAtlasFactory).Object;
          (**(code **)((longlong)*pIVar17 + 0x10))(pIVar17,&local_1e8,local_2bc);
          pTVar3 = &this->AllFontTextures;
          local_248 = local_1e8;
          pTStack_240 = pTStack_1e0;
          if (pTStack_1e0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_1e0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_1e0->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_248) &&
              ((FScriptContainerElement *)&local_248 <
               pFVar4 + (longlong)(this->AllFontTextures).ArrayMax * 0x10)) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar42)) {
            pcVar19 = (code *)swi(3);
            pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
            return pFVar46;
          }
          iVar45 = (this->AllFontTextures).ArrayNum;
          piVar2 = &(this->AllFontTextures).ArrayMax;
          if (iVar45 == *piVar2) {
            iVar45 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar3->AllocatorInstance,piVar2);
          }
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          (this->AllFontTextures).ArrayNum = iVar45 + 1;
          *(FSlateFontAtlas **)(pFVar4 + (longlong)iVar45 * 0x10) = local_248;
          *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar45 * 0x10 + 8) = pTStack_240;
          if (pTStack_240 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_240->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_240->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2e8 = SUB41(iVar45,0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_240);
          pFVar4 = (pTVar52->AllocatorInstance).Data;
          if (((pFVar4 <= &local_2e8) && (&local_2e8 < pFVar4 + pTVar52->ArrayMax)) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar42)) {
            pcVar19 = (code *)swi(3);
            pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
            return pFVar46;
          }
          iVar45 = pTVar52->ArrayNum;
          if (iVar45 == pTVar52->ArrayMax) {
            iVar45 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&pTVar52->AllocatorInstance,&pTVar52->ArrayMax);
          }
          pTVar52->ArrayNum = iVar45 + 1;
          (pTVar52->AllocatorInstance).Data[iVar45] = local_2e8;
          FVar51 = StatPtr_STAT_SlateNumFontAtlases;
          if (StatPtr_STAT_SlateNumFontAtlases ==
              (FThreadSafeStaticStat<FStat_STAT_SlateNumFontAtlases>)0x0) {
            pFVar50 = ::FName::FName(&local_e8,"STAT_SlateNumFontAtlases");
            FVar51 = (FThreadSafeStaticStat<FStat_STAT_SlateNumFontAtlases>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumFontAtlases,
                                *pFVar50,L"Num Font Atlases","STATGROUP_SlateMemory",
                                "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                                MCR_Invalid);
          }
          FVar18 = *(FName *)FVar51;
          local_280._0_4_ = FVar18.ComparisonIndex.Value;
          local_280._4_4_ = FVar18.Number;
          FThreadStats::AddMessage<__int64>(FVar18,Add,1,false);
          bVar42 = `FSlateFontCache::GetSdfGlyphFontAtlasData'::__l2::<lambda_3>::operator()
                             (&local_138,local_1e8,(uchar)local_2e8);
          if (bVar42) {
            local_1c0 = FSdfGlyphTaskKey::FSdfGlyphTaskKey
                                  (local_a8,(FSdfGlyphEntryKey *)(local_280 + 8),fVar61,fVar58);
            local_1b8 = &local_2e0;
            TSet<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FSdfGlyphTaskKey_&&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>_>
                      ((TSet<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                        *)&this->SdfTaskToAtlasData,
                       (TPairInitializer<FSdfGlyphTaskKey_&&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>
                        *)local_1d8,(bool *)&local_1c0);
            if (local_a8[0].SdfGlyphEntryKey.FontFace.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(local_a8[0].SdfGlyphEntryKey.FontFace.WeakReferenceCount.
                        ReferenceController)->WeakReferenceCount;
              aVar6 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar6 == (atomic<int>)0x1) {
                (**(code **)((local_a8[0].SdfGlyphEntryKey.FontFace.WeakReferenceCount.
                             ReferenceController)->_padding_ + 8))
                          (local_a8[0].SdfGlyphEntryKey.FontFace.WeakReferenceCount.
                           ReferenceController,1);
              }
            }
          }
          else {
            (local_2e0.Object)->bSupportsSdf = false;
            if (2 < (byte)LogSlate._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            }
          }
          local_1b0 = (undefined8 *)(local_280 + 8);
          local_1a8 = &local_2e0;
          TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FSdfGlyphEntryKey_const_&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>_>
                    ((TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                      *)&this->SdfGlyphToAtlasData,
                     (TPairInitializer<FSdfGlyphEntryKey_const_&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>
                      *)(local_1d8 + 4),(bool *)&local_1b0);
          if (this->bFlushRequested == false) {
            FSlateFlushableAtlasCache::UpdateFlushCounters
                      ((FSlateFlushableAtlasCache *)&this->_padding_,
                       (this->GrayscaleFontAtlasIndices).ArrayNum,
                       (this->ColorFontAtlasIndices).ArrayNum,(this->MsdfFontAtlasIndices).ArrayNum,
                       (this->NonAtlasedTextureIndices).ArrayNum);
          }
          pEVar41 = local_230;
          pFVar40 = local_238;
          FVar38.ReferenceController = local_2e0.SharedReferenceCount.ReferenceController;
          EVar12 = *local_230;
          local_238->CachedSdfFontAtlasData[(int)EVar12].Object = local_2e0.Object;
          if (local_2e0.SharedReferenceCount.ReferenceController !=
              local_238->CachedSdfFontAtlasData[(int)EVar12].WeakReferenceCount.ReferenceController)
          {
            if (local_2e0.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_2e0.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)
                   ((int)(local_2e0.SharedReferenceCount.ReferenceController)->WeakReferenceCount +
                   1);
              UNLOCK();
            }
            pTVar16 = local_238->CachedSdfFontAtlasData[(int)EVar12].WeakReferenceCount.
                      ReferenceController;
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &pTVar16->WeakReferenceCount;
              aVar6 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar6 == (atomic<int>)0x1) {
                (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
              }
            }
            pFVar40->CachedSdfFontAtlasData[(int)EVar12].WeakReferenceCount.ReferenceController =
                 FVar38.ReferenceController;
          }
          sVar35 = (local_2e0.Object)->HorizontalOffset;
          uVar10 = (local_2e0.Object)->StartU;
          uVar11 = (local_2e0.Object)->StartV;
          uVar36 = (local_2e0.Object)->USize;
          uVar37 = (local_2e0.Object)->VSize;
          fVar58 = (local_2e0.Object)->EmOuterSpread;
          __return_storage_ptr__->VerticalOffset = (local_2e0.Object)->VerticalOffset;
          __return_storage_ptr__->HorizontalOffset = sVar35;
          __return_storage_ptr__->StartU = uVar10;
          __return_storage_ptr__->StartV = uVar11;
          __return_storage_ptr__->USize = uVar36;
          __return_storage_ptr__->VSize = uVar37;
          __return_storage_ptr__->EmOuterSpread = fVar58;
          fVar58 = ((local_2e0.Object)->Metrics).BearingX;
          fVar60 = ((local_2e0.Object)->Metrics).BearingY;
          fVar61 = ((local_2e0.Object)->Metrics).Width;
          __return_storage_ptr__->EmInnerSpread = (local_2e0.Object)->EmInnerSpread;
          (__return_storage_ptr__->Metrics).BearingX = fVar58;
          (__return_storage_ptr__->Metrics).BearingY = fVar60;
          (__return_storage_ptr__->Metrics).Width = fVar61;
          *(undefined8 *)&(__return_storage_ptr__->Metrics).Height =
               *(undefined8 *)&((local_2e0.Object)->Metrics).Height;
          if (__return_storage_ptr__->bSupportsSdf != false) {
            (__return_storage_ptr__->Metrics).BearingX =
                 ((float)(int)__return_storage_ptr__->HorizontalOffset + fVar57) * *local_228;
            uVar10 = __return_storage_ptr__->USize;
            (__return_storage_ptr__->Metrics).BearingY =
                 ((float)(int)__return_storage_ptr__->VerticalOffset - fVar57) * *local_228;
            uVar11 = __return_storage_ptr__->VSize;
            (__return_storage_ptr__->Metrics).Width = (float)(int)(uVar10 - 1) * *local_228;
            (__return_storage_ptr__->Metrics).Height = (float)(int)(uVar11 - 1) * *local_228;
            fVar58 = (__return_storage_ptr__->Metrics).BearingY;
            fVar60 = (__return_storage_ptr__->Metrics).Width;
            fVar57 = (__return_storage_ptr__->Metrics).Height;
            pFVar5 = pFVar40->CachedSdfMetrics + (int)*pEVar41;
            pFVar5->BearingX = (__return_storage_ptr__->Metrics).BearingX;
            pFVar5->BearingY = fVar58;
            pFVar5->Width = fVar60;
            pFVar5->Height = fVar57;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_1e0);
          goto LAB_1424953da;
        }
        FVar9 = *pFVar55;
        if (((this->AllFontTextures).ArrayNum <= (int)(uint)(byte)FVar9) &&
           (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar42)) {
          pcVar19 = (code *)swi(3);
          pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
          return pFVar46;
        }
        bVar42 = `FSlateFontCache::GetSdfGlyphFontAtlasData'::__l2::<lambda_3>::operator()
                           (&local_138,
                            *(FSlateFontAtlas **)
                             ((this->AllFontTextures).AllocatorInstance.Data +
                             (ulonglong)(byte)FVar9 * 0x10),(uchar)FVar9);
        if (bVar42) break;
        uVar49 = (ulonglong)local_2b4;
        pFVar55 = pFVar55 + 1;
      }
      local_180 = FSdfGlyphTaskKey::FSdfGlyphTaskKey
                            (&local_e0,(FSdfGlyphEntryKey *)(local_280 + 8),fVar61,fVar58);
      local_178 = &local_2e0;
      TSet<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FSdfGlyphTaskKey_&&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>_>
                ((TSet<TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                  *)&this->SdfTaskToAtlasData,
                 (TPairInitializer<FSdfGlyphTaskKey_&&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>
                  *)(local_1f8 + 4),(bool *)&local_180);
      if (local_e0.SdfGlyphEntryKey.FontFace.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_e0.SdfGlyphEntryKey.FontFace.WeakReferenceCount.ReferenceController)->
                  WeakReferenceCount;
        aVar6 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar6 == (atomic<int>)0x1) {
          (**(code **)((local_e0.SdfGlyphEntryKey.FontFace.WeakReferenceCount.ReferenceController)->
                       _padding_ + 8))
                    (local_e0.SdfGlyphEntryKey.FontFace.WeakReferenceCount.ReferenceController,1);
        }
      }
      local_170 = (undefined8 *)(local_280 + 8);
      local_168 = &local_2e0;
      TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FSdfGlyphEntryKey_const_&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>_>
                ((TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                  *)&this->SdfGlyphToAtlasData,
                 (TPairInitializer<FSdfGlyphEntryKey_const_&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>
                  *)local_280,(bool *)&local_170);
      pEVar41 = local_230;
      pFVar40 = local_238;
      FVar38.ReferenceController = local_2e0.SharedReferenceCount.ReferenceController;
      EVar12 = *local_230;
      local_238->CachedSdfFontAtlasData[(int)EVar12].Object = local_2e0.Object;
      if (local_2e0.SharedReferenceCount.ReferenceController !=
          local_238->CachedSdfFontAtlasData[(int)EVar12].WeakReferenceCount.ReferenceController) {
        if (local_2e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2e0.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_2e0.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar16 = local_238->CachedSdfFontAtlasData[(int)EVar12].WeakReferenceCount.
                  ReferenceController;
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar16->WeakReferenceCount;
          aVar6 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar6 == (atomic<int>)0x1) {
            (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
          }
        }
        pFVar40->CachedSdfFontAtlasData[(int)EVar12].WeakReferenceCount.ReferenceController =
             FVar38.ReferenceController;
      }
      sVar35 = (local_2e0.Object)->HorizontalOffset;
      uVar10 = (local_2e0.Object)->StartU;
      uVar11 = (local_2e0.Object)->StartV;
      uVar36 = (local_2e0.Object)->USize;
      uVar37 = (local_2e0.Object)->VSize;
      fVar58 = (local_2e0.Object)->EmOuterSpread;
      __return_storage_ptr__->VerticalOffset = (local_2e0.Object)->VerticalOffset;
      __return_storage_ptr__->HorizontalOffset = sVar35;
      __return_storage_ptr__->StartU = uVar10;
      __return_storage_ptr__->StartV = uVar11;
      __return_storage_ptr__->USize = uVar36;
      __return_storage_ptr__->VSize = uVar37;
      __return_storage_ptr__->EmOuterSpread = fVar58;
      fVar58 = ((local_2e0.Object)->Metrics).BearingX;
      fVar60 = ((local_2e0.Object)->Metrics).BearingY;
      fVar61 = ((local_2e0.Object)->Metrics).Width;
      __return_storage_ptr__->EmInnerSpread = (local_2e0.Object)->EmInnerSpread;
      (__return_storage_ptr__->Metrics).BearingX = fVar58;
      (__return_storage_ptr__->Metrics).BearingY = fVar60;
      (__return_storage_ptr__->Metrics).Width = fVar61;
      *(undefined8 *)&(__return_storage_ptr__->Metrics).Height =
           *(undefined8 *)&((local_2e0.Object)->Metrics).Height;
      if (__return_storage_ptr__->bSupportsSdf != false) {
        (__return_storage_ptr__->Metrics).BearingX =
             ((float)(int)__return_storage_ptr__->HorizontalOffset + fVar57) * *local_228;
        uVar10 = __return_storage_ptr__->USize;
        (__return_storage_ptr__->Metrics).BearingY =
             ((float)(int)__return_storage_ptr__->VerticalOffset - fVar57) * *local_228;
        uVar11 = __return_storage_ptr__->VSize;
        (__return_storage_ptr__->Metrics).Width = (float)(int)(uVar10 - 1) * *local_228;
        (__return_storage_ptr__->Metrics).Height = (float)(int)(uVar11 - 1) * *local_228;
        fVar58 = (__return_storage_ptr__->Metrics).BearingY;
        fVar60 = (__return_storage_ptr__->Metrics).Width;
        fVar57 = (__return_storage_ptr__->Metrics).Height;
        pFVar5 = pFVar40->CachedSdfMetrics + (int)*pEVar41;
        pFVar5->BearingX = (__return_storage_ptr__->Metrics).BearingX;
        pFVar5->BearingY = fVar58;
        pFVar5->Width = fVar60;
        pFVar5->Height = fVar57;
      }
LAB_1424953da:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e0.SharedReferenceCount.ReferenceController);
      if (local_2b0 != (void *)0x0) {
        FMemory::Free(local_2b0);
      }
    }
    else {
      if (iVar45 == 1) {
        (local_2e0.Object)->bSupportsSdf = false;
        (local_2e0.Object)->Valid = true;
        local_190 = (undefined8 *)(local_280 + 8);
        local_188 = &local_2e0;
        TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FSdfGlyphEntryKey_const_&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>_>
                  ((TSet<TTuple<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FSdfGlyphEntryKey,TSharedRef<FSdfGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                    *)&this->SdfGlyphToAtlasData,
                   (TPairInitializer<FSdfGlyphEntryKey_const_&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>
                    *)local_1f8,(bool *)&local_190);
        FVar38.ReferenceController = local_2e0.SharedReferenceCount.ReferenceController;
        lVar54 = (longlong)(int)local_2c0;
        param_1->CachedSdfFontAtlasData[lVar54].Object = local_2e0.Object;
        if (local_2e0.SharedReferenceCount.ReferenceController !=
            param_1->CachedSdfFontAtlasData[lVar54].WeakReferenceCount.ReferenceController) {
          if (local_2e0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2e0.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_2e0.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1)
            ;
            UNLOCK();
          }
          pTVar16 = param_1->CachedSdfFontAtlasData[lVar54].WeakReferenceCount.ReferenceController;
          if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar16->WeakReferenceCount;
            aVar6 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar6 == (atomic<int>)0x1) {
              (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
            }
          }
          param_1->CachedSdfFontAtlasData[lVar54].WeakReferenceCount.ReferenceController =
               FVar38.ReferenceController;
        }
        sVar35 = (local_2e0.Object)->HorizontalOffset;
        uVar10 = (local_2e0.Object)->StartU;
        uVar11 = (local_2e0.Object)->StartV;
        uVar36 = (local_2e0.Object)->USize;
        uVar37 = (local_2e0.Object)->VSize;
        fVar58 = (local_2e0.Object)->EmOuterSpread;
        __return_storage_ptr__->VerticalOffset = (local_2e0.Object)->VerticalOffset;
        __return_storage_ptr__->HorizontalOffset = sVar35;
        __return_storage_ptr__->StartU = uVar10;
        __return_storage_ptr__->StartV = uVar11;
        __return_storage_ptr__->USize = uVar36;
        __return_storage_ptr__->VSize = uVar37;
        __return_storage_ptr__->EmOuterSpread = fVar58;
        fVar58 = ((local_2e0.Object)->Metrics).BearingX;
        fVar60 = ((local_2e0.Object)->Metrics).BearingY;
        fVar61 = ((local_2e0.Object)->Metrics).Width;
        __return_storage_ptr__->EmInnerSpread = (local_2e0.Object)->EmInnerSpread;
        (__return_storage_ptr__->Metrics).BearingX = fVar58;
        (__return_storage_ptr__->Metrics).BearingY = fVar60;
        (__return_storage_ptr__->Metrics).Width = fVar61;
        *(undefined8 *)&(__return_storage_ptr__->Metrics).Height =
             *(undefined8 *)&((local_2e0.Object)->Metrics).Height;
        if (__return_storage_ptr__->bSupportsSdf != false) {
          fVar61 = ((float)(int)__return_storage_ptr__->VerticalOffset - fVar57) * local_28c;
          fVar58 = (float)(int)(__return_storage_ptr__->USize - 1) * local_28c;
          fVar60 = (float)(int)(__return_storage_ptr__->VSize - 1) * local_28c;
          fVar57 = ((float)(int)__return_storage_ptr__->HorizontalOffset + fVar57) * local_28c;
          (__return_storage_ptr__->Metrics).BearingX = fVar57;
          (__return_storage_ptr__->Metrics).BearingY = fVar61;
          (__return_storage_ptr__->Metrics).Width = fVar58;
          (__return_storage_ptr__->Metrics).Height = fVar60;
          pFVar5 = param_1->CachedSdfMetrics + (int)local_2c0;
          pFVar5->BearingX = fVar57;
          pFVar5->BearingY = fVar61;
          pFVar5->Width = fVar58;
          pFVar5->Height = fVar60;
        }
        goto LAB_1424953da;
      }
      if (iVar45 != 2) {
        if (iVar45 == 3) {
          (local_2e0.Object)->bPendingRespawn = local_res18[0] == '\0';
          goto LAB_142494a16;
        }
        bVar42 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                            ,0x5d3,L"");
        if (bVar42) {
          pcVar19 = (code *)swi(3);
          pFVar46 = (FSdfGlyphFontAtlasData *)(*pcVar19)();
          return pFVar46;
        }
      }
LAB_142494f6f:
      __return_storage_ptr__->VerticalOffset = 0;
      __return_storage_ptr__->HorizontalOffset = 0;
      __return_storage_ptr__->StartU = 0;
      __return_storage_ptr__->StartV = 0;
      __return_storage_ptr__->USize = 0;
      __return_storage_ptr__->VSize = 0;
      __return_storage_ptr__->EmOuterSpread = 0.0;
      __return_storage_ptr__->EmInnerSpread = 0.0;
      (__return_storage_ptr__->Metrics).BearingX = 0.0;
      (__return_storage_ptr__->Metrics).BearingY = 0.0;
      (__return_storage_ptr__->Metrics).Width = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->Metrics).Height = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e0.SharedReferenceCount.ReferenceController);
      if (local_2b0 != (void *)0x0) {
        FMemory::Free(local_2b0);
      }
    }
    if (local_218 != (longlong *)0x0) {
      LOCK();
      lVar54 = (longlong)local_218 + 0xc;
      iVar45 = *(int *)lVar54;
      *(int *)lVar54 = *(int *)lVar54 + -1;
      UNLOCK();
      if (iVar45 == 1) {
        (**(code **)(*local_218 + 8))(local_218,1);
      }
    }
  }
  else {
    lVar54 = (longlong)iVar45 * 0x40 + *(longlong *)&this->SdfGlyphToAtlasData;
    pFVar48 = (FSdfGlyphFontAtlasData *)(lVar54 + 0x28);
    if (lVar54 == 0) {
      pFVar48 = pFVar46;
    }
    if (((pFVar48 == (FSdfGlyphFontAtlasData *)0x0) ||
        (pFVar53 = *(FSdfGlyphFontAtlasData **)pFVar48,
        pFVar53->EmOuterSpread <= fVar61 && fVar61 != pFVar53->EmOuterSpread)) ||
       (pFVar53->EmInnerSpread <= fVar58 && fVar58 != pFVar53->EmInnerSpread)) goto LAB_142494902;
    if (pFVar53->bPendingRespawn != false) {
      bVar42 = `FSlateFontCache::GetSdfGlyphFontAtlasData'::__l2::<lambda_1>::operator()
                         (&local_160,pFVar53);
      *(bool *)(*(longlong *)pFVar48 + 0x26) = !bVar42;
    }
    `FSlateFontCache::GetSdfGlyphFontAtlasData'::__l2::<lambda_2>::operator()
              (&local_238,__return_storage_ptr__,(TSharedRef<FSdfGlyphFontAtlasData,1> *)pFVar48);
  }
  if (local_270 != (longlong *)0x0) {
    LOCK();
    lVar54 = (longlong)local_270 + 0xc;
    iVar45 = *(int *)lVar54;
    *(int *)lVar54 = *(int *)lVar54 + -1;
    UNLOCK();
    if (iVar45 == 1) {
      (**(code **)(*local_270 + 8))(local_270,1);
    }
  }
LAB_14249542d:
  FMemScope::~FMemScope(&local_288);
  FLLMScope::~FLLMScope(&local_2c4);
  return __return_storage_ptr__;
}

// GetShapedGlyphFontAtlasData @ 1424954c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShapedGlyphFontAtlasData * __thiscall
FSlateFontCache::GetShapedGlyphFontAtlasData
          (FSlateFontCache *this,FShapedGlyphFontAtlasData *__return_storage_ptr__,
          FShapedGlyphEntry *param_1,FFontOutlineSettings *param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  short sVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  uchar uVar18;
  undefined1 uVar19;
  bool bVar20;
  bool bVar21;
  FSharedReferencer<1> FVar22;
  atomic<int> aVar23;
  FShapedGlyphFontAtlasData *pFVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<_public:_struct_FShapedGlyphFontAtlasData___cdecl_FSlateFontCache::GetShapedGlyphFontAtlasData(FShapedGlyphEntry_const_&,FFontOutlineSettings_const_&)_::_10_::FStat_STAT_SlateFontCacheAddNewShapedEntry>
  FVar26;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar27;
  TReferenceControllerBase<1> *pTVar28;
  undefined1 *puVar29;
  FNameEntryId FVar30;
  TWeakPtr<FFreeTypeFace,1> *this_02;
  TReferenceControllerBase<1> *pTVar31;
  FName FVar32;
  longlong lVar33;
  FNameEntryId FVar34;
  TReferenceControllerBase<1> *pTVar35;
  undefined1 *puVar36;
  TMap<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>_>
  *this_03;
  bool bVar37;
  FName local_e8;
  FColor_u_0 local_e0 [2];
  TSharedRef<FShapedGlyphFontAtlasData,1> local_d8;
  FName local_c8;
  FShapedGlyphEntryKey local_b8;
  TPairInitializer<FShapedGlyphEntryKey_const_&,TSharedRef<FShapedGlyphFontAtlasData,1>_const_&>
  local_90;
  LARGE_INTEGER local_80;
  FStatMessage local_78;
  FShapedGlyphEntryKey *local_68;
  TSharedRef<FShapedGlyphFontAtlasData,1> *local_60;
  FName local_58;
  FName local_50 [2];
  
  pTVar35 = (TReferenceControllerBase<1> *)0x0;
  FVar34.Value = 0;
  pTVar31 = pTVar35;
  if (0 < param_2->OutlineSize) {
    pTVar31 = (TReferenceControllerBase<1> *)&DAT_00000002;
  }
  puVar36 = (undefined1 *)((longlong)&pTVar31->_padding_ + (longlong)(int)this->OwningThread);
  pTVar31 = param_1->CachedSdfFontAtlasData[(longlong)(puVar36 + -4)].WeakReferenceCount.
            ReferenceController;
  pTVar28 = pTVar31;
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar31->SharedReferenceCount;
    do {
      pTVar28 = pTVar35;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142495545;
      LOCK();
      aVar23 = pTVar31->SharedReferenceCount;
      bVar37 = aVar3 == aVar23;
      if (bVar37) {
        pTVar31->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar23 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar23;
    } while (!bVar37);
    pFVar24 = param_1->CachedAtlasData[0][(longlong)puVar36].Object;
    pTVar28 = pTVar31;
    if (pFVar24 != (FShapedGlyphFontAtlasData *)0x0) {
      sVar13 = pFVar24->HorizontalOffset;
      uVar14 = pFVar24->StartU;
      uVar15 = pFVar24->StartV;
      uVar16 = pFVar24->USize;
      uVar17 = pFVar24->VSize;
      uVar18 = pFVar24->TextureIndex;
      bVar37 = pFVar24->SupportsOutline;
      bVar12 = pFVar24->Valid;
      uVar19 = pFVar24->field_0xf;
      __return_storage_ptr__->VerticalOffset = pFVar24->VerticalOffset;
      __return_storage_ptr__->HorizontalOffset = sVar13;
      __return_storage_ptr__->StartU = uVar14;
      __return_storage_ptr__->StartV = uVar15;
      __return_storage_ptr__->USize = uVar16;
      __return_storage_ptr__->VSize = uVar17;
      __return_storage_ptr__->TextureIndex = uVar18;
      __return_storage_ptr__->SupportsOutline = bVar37;
      __return_storage_ptr__->Valid = bVar12;
      __return_storage_ptr__->field_0xf = uVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
      return __return_storage_ptr__;
    }
  }
LAB_142495545:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  uVar27 = param_1->GlyphIndex;
  if (((param_1->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar37)) {
    pcVar6 = (code *)swi(3);
    pFVar24 = (FShapedGlyphFontAtlasData *)(*pcVar6)();
    return pFVar24;
  }
  FShapedGlyphEntryKey::FShapedGlyphEntryKey
            (&local_b8,(param_1->FontFaceData).Object,uVar27,param_2);
  this_03 = &this->ShapedGlyphToAtlasData;
  if (*(int *)&(this->ShapedGlyphToAtlasData).field_0x8 !=
      *(int *)&(this->ShapedGlyphToAtlasData).field_0x34) {
    puVar29 = *(undefined1 **)&(this->ShapedGlyphToAtlasData).field_0x40;
    if (puVar29 == (undefined1 *)0x0) {
      puVar29 = &(this->ShapedGlyphToAtlasData).field_0x38;
    }
    iVar4 = *(int *)(puVar29 +
                    (ulonglong)
                    (*(int *)&(this->ShapedGlyphToAtlasData).field_0x48 - 1U & local_b8.KeyHash) * 4
                    );
    while (iVar4 != -1) {
      lVar33 = (longlong)iVar4 * 0x40;
      this_02 = (TWeakPtr<FFreeTypeFace,1> *)(*(longlong *)&this_03->field_0x0 + lVar33);
      bVar37 = TWeakPtr<FFreeTypeFace,1>::UEOpEquals<FFreeTypeFace>(this_02,&local_b8.FontFace);
      if ((((bVar37) && (*(uint *)&this_02[1].Object == local_b8.FontRenderSize)) &&
          (*(int *)((longlong)&this_02[1].Object + 4) == local_b8.OutlineRenderSize)) &&
         ((((bool)*(char *)&this_02[1].WeakReferenceCount.ReferenceController ==
            local_b8.OutlineMiteredCorners &&
           ((bool)*(char *)((longlong)&this_02[1].WeakReferenceCount.ReferenceController + 1) ==
            local_b8.OutlineSeparateFillAlpha)) &&
          ((*(uint *)((longlong)&this_02[1].WeakReferenceCount.ReferenceController + 4) ==
            local_b8.GlyphIndex &&
           (local_b8.FontSkew == *(float *)((longlong)&this_02[2].Object + 4))))))) {
        if (iVar4 != -1) {
          lVar33 = *(longlong *)&this_03->field_0x0 + lVar33;
          pTVar31 = (TReferenceControllerBase<1> *)(lVar33 + 0x28);
          if (lVar33 == 0) {
            pTVar31 = pTVar35;
          }
          if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
            TWeakPtr<FShapedGlyphFontAtlasData,1>::operator=<FShapedGlyphFontAtlasData>
                      (param_1->CachedAtlasData[0] + (longlong)puVar36,
                       (TSharedRef<FShapedGlyphFontAtlasData,1> *)pTVar31);
            puVar5 = (undefined4 *)pTVar31->_padding_;
            uVar7 = *puVar5;
            uVar8 = puVar5[1];
            uVar9 = puVar5[2];
            uVar10 = puVar5[3];
            __return_storage_ptr__->VerticalOffset = (short)uVar7;
            __return_storage_ptr__->HorizontalOffset = (short)((uint)uVar7 >> 0x10);
            __return_storage_ptr__->StartU = (short)uVar8;
            __return_storage_ptr__->StartV = (short)((uint)uVar8 >> 0x10);
            __return_storage_ptr__->USize = (short)uVar9;
            __return_storage_ptr__->VSize = (short)((uint)uVar9 >> 0x10);
            __return_storage_ptr__->TextureIndex = (char)uVar10;
            __return_storage_ptr__->SupportsOutline = (bool)(char)((uint)uVar10 >> 8);
            __return_storage_ptr__->Valid = (bool)(char)((uint)uVar10 >> 0x10);
            __return_storage_ptr__->field_0xf = (char)((uint)uVar10 >> 0x18);
            goto joined_r0x0001424957df;
          }
        }
        break;
      }
      iVar4 = *(int *)(*(longlong *)&this_03->field_0x0 + 0x38 + lVar33);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SlateFontCacheAddNewShapedEntry ==
        (FThreadSafeStaticStat<_public:_struct_FShapedGlyphFontAtlasData___cdecl_FSlateFontCache::GetShapedGlyphFontAtlasData(FShapedGlyphEntry_const_&,FFontOutlineSettings_const_&)_::_10_::FStat_STAT_SlateFontCacheAddNewShapedEntry>
         )0x0) {
      pFVar25 = ::FName::FName(&local_58,"STAT_SlateFontCacheAddNewShapedEntry");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateFontCacheAddNewShapedEntry,*pFVar25
                 ,L"STAT_SlateFontCacheAddNewShapedEntry","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar26 = StatPtr_STAT_SlateFontCacheAddNewShapedEntry;
  if (StatPtr_STAT_SlateFontCacheAddNewShapedEntry ==
      (FThreadSafeStaticStat<_public:_struct_FShapedGlyphFontAtlasData___cdecl_FSlateFontCache::GetShapedGlyphFontAtlasData(FShapedGlyphEntry_const_&,FFontOutlineSettings_const_&)_::_10_::FStat_STAT_SlateFontCacheAddNewShapedEntry>
       )0x0) {
    pFVar25 = ::FName::FName(local_50,"STAT_SlateFontCacheAddNewShapedEntry");
    FVar26 = (FThreadSafeStaticStat<_public:_struct_FShapedGlyphFontAtlasData___cdecl_FSlateFontCache::GetShapedGlyphFontAtlasData(FShapedGlyphEntry_const_&,FFontOutlineSettings_const_&)_::_10_::FStat_STAT_SlateFontCacheAddNewShapedEntry>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateFontCacheAddNewShapedEntry
                          ,*pFVar25,L"STAT_SlateFontCacheAddNewShapedEntry","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar26;
  bVar37 = false;
  bVar12 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar30 = FVar32.ComparisonIndex.Value;
  uVar27 = FVar32.Number;
  if ((FVar30.Value != 0) || (uVar27 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e0[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar37 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar30.Value;
        local_e8.Number = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                   ,0x512);
        bVar37 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e8.ComparisonIndex.Value = FVar30.Value;
      local_e8.Number = uVar27;
      local_c8 = FVar32;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar11 = true;
      FVar34.Value = local_c8.ComparisonIndex.Value;
      goto LAB_1424957f3;
    }
  }
  bVar11 = false;
  FVar32 = local_c8;
LAB_1424957f3:
  local_90.Value = ::operator_new(0x10);
  if (local_90.Value != (TSharedRef<FShapedGlyphFontAtlasData,1> *)0x0) {
    ((local_90.Value)->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (local_90.Value)->Object = (FShapedGlyphFontAtlasData *)0x0;
  }
  TSharedRef<FShapedGlyphFontAtlasData,1>::
  TSharedRef<FShapedGlyphFontAtlasData,1><FShapedGlyphFontAtlasData>
            (&local_d8,(TRawPtrProxy<FShapedGlyphFontAtlasData> *)&local_90.Value);
  AddNewEntry(this,param_1,param_2,local_d8.Object);
  FVar22.ReferenceController = local_d8.SharedReferenceCount.ReferenceController;
  if ((local_d8.Object)->Valid != false) {
    param_1->CachedAtlasData[0][(longlong)puVar36].Object = local_d8.Object;
    if (local_d8.SharedReferenceCount.ReferenceController !=
        param_1->CachedSdfFontAtlasData[(longlong)(puVar36 + -4)].WeakReferenceCount.
        ReferenceController) {
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar31 = param_1->CachedSdfFontAtlasData[(longlong)(puVar36 + -4)].WeakReferenceCount.
                ReferenceController;
      if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar31->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar31->_padding_ + 8))(pTVar31,1);
        }
      }
      param_1->CachedSdfFontAtlasData[(longlong)(puVar36 + -4)].WeakReferenceCount.
      ReferenceController = FVar22.ReferenceController;
    }
    local_68 = &local_b8;
    local_60 = &local_d8;
    TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FShapedGlyphEntryKey_const_&,TSharedRef<FShapedGlyphFontAtlasData,1>_const_&>_>
              ((TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>,0>,FDefaultSetAllocator>
                *)this_03,&local_90,(bool *)&local_68);
  }
  sVar13 = (local_d8.Object)->HorizontalOffset;
  uVar14 = (local_d8.Object)->StartU;
  uVar15 = (local_d8.Object)->StartV;
  uVar16 = (local_d8.Object)->USize;
  uVar17 = (local_d8.Object)->VSize;
  uVar18 = (local_d8.Object)->TextureIndex;
  bVar20 = (local_d8.Object)->SupportsOutline;
  bVar21 = (local_d8.Object)->Valid;
  uVar19 = (local_d8.Object)->field_0xf;
  __return_storage_ptr__->VerticalOffset = (local_d8.Object)->VerticalOffset;
  __return_storage_ptr__->HorizontalOffset = sVar13;
  __return_storage_ptr__->StartU = uVar14;
  __return_storage_ptr__->StartV = uVar15;
  __return_storage_ptr__->USize = uVar16;
  __return_storage_ptr__->VSize = uVar17;
  __return_storage_ptr__->TextureIndex = uVar18;
  __return_storage_ptr__->SupportsOutline = bVar20;
  __return_storage_ptr__->Valid = bVar21;
  __return_storage_ptr__->field_0xf = uVar19;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar32 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar34.Value;
      QueryPerformanceCounter(&local_80);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
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
joined_r0x0001424957df:
  if (local_b8.FontFace.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    paVar2 = &(local_b8.FontFace.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_b8.FontFace.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_b8.FontFace.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// GetStrikeMetrics @ 142495c90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateFontCache::GetStrikeMetrics
          (FSlateFontCache *this,FSlateFontInfo *param_1,float param_2,short *param_3,short *param_4
          )

{
  FSlateFontRenderer::GetStrikeMetrics((this->FontRenderer).Ptr,param_1,param_2,param_3,param_4);
  return;
}

// GetUnderlineMetrics @ 142496ec0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateFontCache::GetUnderlineMetrics
          (FSlateFontCache *this,FSlateFontInfo *param_1,float param_2,short *param_3,short *param_4
          )

{
  FSlateFontRenderer *this_00;
  int iVar1;
  FFontData *pFVar2;
  FT_FaceRec_ *pFVar3;
  
  this_00 = (this->FontRenderer).Ptr;
  pFVar2 = FCompositeFontCache::GetDefaultFontData(this_00->CompositeFontCache,param_1);
  pFVar3 = FSlateFontRenderer::GetFontFace(this_00,pFVar2);
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

// HandleCultureChanged @ 1424973d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontCache::HandleCultureChanged(FSlateFontCache *this)

{
  code *pcVar1;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 8);
  ::FString::FString(&local_18,L"Culture for localization was changed");
  (*pcVar1)(&this->_padding_,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HasKerning @ 142497870

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateFontCache::HasKerning(FSlateFontCache *this,FFontData *param_1)

{
  FT_FaceRec_ *pFVar1;
  
  pFVar1 = FSlateFontRenderer::GetFontFace((this->FontRenderer).Ptr,param_1);
  if (pFVar1 == (FT_FaceRec_ *)0x0) {
    return false;
  }
  return (bool)((byte)((uint)pFVar1->face_flags >> 6) & 1);
}

// HasLoadedFontForCodepoint @ 142497ae0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateFontCache::HasLoadedFontForCodepoint
          (FSlateFontCache *this,FSlateFontInfo *param_1,wchar32 param_2)

{
  bool bVar1;
  
  bVar1 = FCompositeFontCache::HasLoadedFontForCodepoint
                    ((this->CompositeFontCache).Ptr,param_1,param_2);
  return bVar1;
}

// IsAtlasPageResourceAlphaOnly @ 14249a950

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateFontCache::IsAtlasPageResourceAlphaOnly(FSlateFontCache *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = GetAllFontTexturesIndex(this,param_1);
  uVar6 = 0;
  if ((int)uVar4 < (this->AllFontTextures).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar5 = (**(code **)(**(longlong **)
                         ((this->AllFontTextures).AllocatorInstance.Data +
                         (longlong)(int)uVar4 * 0x10) + 0x18))();
  return iVar5 == 0;
}

// ReleaseResources @ 1424a5180

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontCache::ReleaseResources(FSlateFontCache *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FDestructionSentinel local_38;
  
  pFVar11 = (this->AllFontTextures).AllocatorInstance.Data;
  iVar2 = (this->AllFontTextures).ArrayNum;
  pFVar13 = pFVar11 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->AllFontTextures).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<ISlateFontTexture,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar11 == pFVar13) break;
    (**(code **)(**(longlong **)pFVar11 + 0x20))();
    pFVar11 = pFVar11 + 0x10;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnReleaseResourcesDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnReleaseResourcesDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  uVar10 = *(int *)&(this->OnReleaseResourcesDelegate).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar12 = (longlong)(int)uVar10 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&(this->OnReleaseResourcesDelegate).field_0x10) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)&(this->OnReleaseResourcesDelegate).field_0x8;
      if (((*(int *)(lVar12 + 8 + lVar3) == 0) ||
          (plVar4 = *(longlong **)(lVar12 + lVar3), plVar4 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
        bVar6 = true;
      }
      lVar12 = lVar12 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnReleaseResourcesDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnReleaseResourcesDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// RequestFlushCache @ 1424a5ff0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateFontCache::RequestFlushCache(FSlateFontCache *this,FString *param_1)

{
  if (*(char *)&(this->FontAtlasFactory).SharedReferenceCount.ReferenceController == '\0') {
    if (4 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    *(undefined1 *)&(this->FontAtlasFactory).SharedReferenceCount.ReferenceController = 1;
  }
  return;
}

// ShapeBidirectionalText @ 1424a7460

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FSlateFontCache::ShapeBidirectionalText
          (FSlateFontCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          FString *param_1,FSlateFontInfo *param_2,float param_3,ETextDirection param_4,
          ETextShapingMethod param_5)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FSlateTextShaper::ShapeBidirectionalText
            ((this->TextShaper).Ptr,__return_storage_ptr__,pwVar2,0,iVar3,param_2,param_3,param_4,
             param_5);
  return __return_storage_ptr__;
}

// ShapeBidirectionalText @ 1424a74e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FSlateFontCache::ShapeBidirectionalText
          (FSlateFontCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          wchar_t *param_1,int param_2,int param_3,FSlateFontInfo *param_4,float param_5,
          ETextDirection param_6,ETextShapingMethod param_7)

{
  FSlateTextShaper::ShapeBidirectionalText
            ((this->TextShaper).Ptr,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,
             param_6,param_7);
  return __return_storage_ptr__;
}

// ShapeOverflowEllipsisText @ 1424a7830

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FSlateFontCache::ShapeOverflowEllipsisText
          (FSlateFontCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          FSlateFontInfo *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  ETextShapingMethod EVar5;
  wchar_t *pwVar6;
  
  uVar2 = (**(code **)(*(longlong *)CVarDefaultTextShapingMethod._padding_ + 200))();
  EVar5 = (ETextShapingMethod)uVar2;
  if (2 < uVar2) {
    EVar5 = Auto;
  }
  pFVar3 = FText::ToString(&this->EllipsisText);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FSlateTextShaper::ShapeBidirectionalText
            ((this->TextShaper).Ptr,__return_storage_ptr__,pwVar6,0,iVar4,param_1,param_2,
             LeftToRight,EVar5);
  return __return_storage_ptr__;
}

// ShapeUnidirectionalText @ 1424a78f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FSlateFontCache::ShapeUnidirectionalText
          (FSlateFontCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          FString *param_1,FSlateFontInfo *param_2,float param_3,ETextDirection param_4,
          ETextShapingMethod param_5)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FSlateTextShaper::ShapeUnidirectionalText
            ((this->TextShaper).Ptr,__return_storage_ptr__,pwVar2,0,iVar3,param_2,param_3,param_4,
             param_5);
  return __return_storage_ptr__;
}

// ShapeUnidirectionalText @ 1424a7970

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FSlateFontCache::ShapeUnidirectionalText
          (FSlateFontCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          wchar_t *param_1,int param_2,int param_3,FSlateFontInfo *param_4,float param_5,
          ETextDirection param_6,ETextShapingMethod param_7)

{
  FSlateTextShaper::ShapeUnidirectionalText
            ((this->TextShaper).Ptr,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,
             param_6,param_7);
  return __return_storage_ptr__;
}

// UpdateCache @ 1424ac790

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateFontCache::UpdateCache(FSlateFontCache *this)

{
  FSlateSdfGenerator *pFVar1;
  bool bVar2;
  FSlateFontCache *local_res8;
  code *local_18;
  FSlateFontCache **local_10;
  
  bVar2 = bSlateSdfTextEnable;
  if (bSlateSdfTextEnable) {
    pFVar1 = (this->SdfGenerator).Ptr;
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FSlateFontCache::UpdateCache'::__l5::<lambda_1>,void,FSlateSdfGenerator::FRequestDescriptor,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
               ::Call;
    local_res8 = this;
    (**(code **)((longlong)*pFVar1 + 0x28))(pFVar1,&local_18);
  }
  local_res8 = this;
  `FSlateFontCache::UpdateCache'::__l2::<lambda_2>::operator()
            (&local_res8,&this->GrayscaleFontAtlasIndices);
  `FSlateFontCache::UpdateCache'::__l2::<lambda_2>::operator()
            (&local_res8,&this->ColorFontAtlasIndices);
  if (bVar2) {
    `FSlateFontCache::UpdateCache'::__l2::<lambda_2>::operator()
              (&local_res8,&this->MsdfFontAtlasIndices);
  }
  FCompositeFontCache::Update((this->CompositeFontCache).Ptr);
  ConditionalDumpFontCacheStats(this);
  return;
}

// GetFontTexture @ 14250d7d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ISlateFontTexture * __thiscall FSlateFontCache::GetFontTexture(FSlateFontCache *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ISlateFontTexture *pIVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->AllFontTextures).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (ISlateFontTexture *)(*pcVar1)();
      return pIVar4;
    }
  }
  return *(ISlateFontTexture **)
          ((this->AllFontTextures).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
}

// operator() @ 15048eaa0

bool __thiscall `FSlateFontCache::AddNewEntry'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8003776250218808386>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8003776250218808386>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048ec60

bool __thiscall `FSlateFontCache::AddNewEntry'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8003776250218808387>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8003776250218808387>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

