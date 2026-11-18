// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// operator<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData>_TTuple<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData> @ 14245aad0

TTuple<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData> * __thiscall
TPairInitializer<unsigned_int_const_&,FFreeTypeGlyphCache::FCachedGlyphData_&>::
operator<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData>_TTuple<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData>
          (TPairInitializer<unsigned_int_const_&,FFreeTypeGlyphCache::FCachedGlyphData_&> *this,
          TTuple<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FCachedGlyphData *pFVar3;
  FScriptContainerElement *_Src;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x48;
  *(uint *)__return_storage_ptr__ = *this->Key;
  *(short *)&__return_storage_ptr__->field_0x8 = pFVar3->Height;
  lVar4 = (pFVar3->GlyphMetrics).height;
  lVar5 = (pFVar3->GlyphMetrics).horiBearingX;
  lVar6 = (pFVar3->GlyphMetrics).horiBearingY;
  *(long *)&__return_storage_ptr__->field_0xc = (pFVar3->GlyphMetrics).width;
  *(long *)&__return_storage_ptr__->field_0x10 = lVar4;
  *(long *)&__return_storage_ptr__->field_0x14 = lVar5;
  *(long *)&__return_storage_ptr__->field_0x18 = lVar6;
  lVar4 = (pFVar3->GlyphMetrics).vertBearingX;
  lVar5 = (pFVar3->GlyphMetrics).vertBearingY;
  lVar6 = (pFVar3->GlyphMetrics).vertAdvance;
  *(long *)&__return_storage_ptr__->field_0x1c = (pFVar3->GlyphMetrics).horiAdvance;
  *(long *)&__return_storage_ptr__->field_0x20 = lVar4;
  *(long *)&__return_storage_ptr__->field_0x24 = lVar5;
  *(long *)&__return_storage_ptr__->field_0x28 = lVar6;
  uVar7 = (pFVar3->SizeMetrics).y_ppem;
  lVar4 = (pFVar3->SizeMetrics).x_scale;
  lVar5 = (pFVar3->SizeMetrics).y_scale;
  lVar6 = (pFVar3->SizeMetrics).ascender;
  *(ushort *)&__return_storage_ptr__->field_0x2c = (pFVar3->SizeMetrics).x_ppem;
  *(ushort *)&__return_storage_ptr__->field_0x2e = uVar7;
  *(long *)&__return_storage_ptr__->field_0x30 = lVar4;
  *(long *)&__return_storage_ptr__->field_0x34 = lVar5;
  *(long *)&__return_storage_ptr__->field_0x38 = lVar6;
  lVar4 = (pFVar3->SizeMetrics).height;
  *(long *)&__return_storage_ptr__->field_0x3c = (pFVar3->SizeMetrics).descender;
  *(long *)&__return_storage_ptr__->field_0x40 = lVar4;
  *(long *)&__return_storage_ptr__->field_0x44 = (pFVar3->SizeMetrics).max_advance;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->OutlinePoints).ArrayNum;
  _Src = (pFVar3->OutlinePoints).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x50 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x54 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x54);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

// operator<FFontData,TSharedPtr<FFreeTypeFace,1>_>_TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_> @ 14245aba0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_> * __thiscall
TPairInitializer<FFontData_const_&,TSharedPtr<FFreeTypeFace,1>_const_&>::
operator<FFontData,TSharedPtr<FFreeTypeFace,1>_>_TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>
          (TPairInitializer<FFontData_const_&,TSharedPtr<FFreeTypeFace,1>_const_&> *this,
          TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_> *__return_storage_ptr__)

{
  FFontData *pFVar1;
  TSharedPtr<FFreeTypeFace,1> *pTVar2;
  UObject *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pFVar1 = this->Key;
  pTVar2 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,&pFVar1->FontFilename);
  *(uint *)&__return_storage_ptr__->field_0x10 = pFVar1->FontFilenameHash;
  __return_storage_ptr__->field_0x14 = pFVar1->Hinting;
  __return_storage_ptr__->field_0x15 = pFVar1->LoadingPolicy;
  *(int *)&__return_storage_ptr__->field_0x18 = pFVar1->SubFaceIndex;
  pUVar3 = (pFVar1->FontFaceAsset).field0_0x0.DebugPtr;
  *(UObject **)&__return_storage_ptr__->field_0x20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(FFreeTypeFace **)&__return_storage_ptr__->field_0x28 = pTVar2->Object;
  pTVar4 = (pTVar2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x30 = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// operator<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_> @ 14245ac30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_> * __thiscall
TPairInitializer<FSdfGlyphTaskKey_&&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&>::
operator<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>_TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_>
          (TPairInitializer<FSdfGlyphTaskKey_&&,TSharedRef<FSdfGlyphFontAtlasData,1>_const_&> *this,
          TTuple<FSdfGlyphTaskKey,TSharedRef<FSdfGlyphFontAtlasData,1>_> *__return_storage_ptr__)

{
  FSdfGlyphTaskKey *pFVar1;
  TSharedRef<FSdfGlyphFontAtlasData,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = this->Key;
  pTVar2 = this->Value;
  *(FFreeTypeFace **)__return_storage_ptr__ = (pFVar1->SdfGlyphEntryKey).FontFace.Object;
  pTVar3 = (pFVar1->SdfGlyphEntryKey).FontFace.WeakReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(uint *)&__return_storage_ptr__->field_0x10 = (pFVar1->SdfGlyphEntryKey).GlyphIndex;
  *(ESlateFontAtlasContentType *)&__return_storage_ptr__->field_0x14 =
       (pFVar1->SdfGlyphEntryKey).AtlasContentType;
  *(int *)&__return_storage_ptr__->field_0x18 = (pFVar1->SdfGlyphEntryKey).Ppem;
  *(int *)&__return_storage_ptr__->field_0x1c = (pFVar1->SdfGlyphEntryKey).SpreadCategory;
  *(uint *)&__return_storage_ptr__->field_0x20 = (pFVar1->SdfGlyphEntryKey).KeyHash;
  *(float *)&__return_storage_ptr__->field_0x28 = pFVar1->EmOuterSpread;
  *(float *)&__return_storage_ptr__->field_0x2c = pFVar1->EmInnerSpread;
  *(uint *)&__return_storage_ptr__->field_0x30 = pFVar1->KeyHash;
  *(FSdfGlyphFontAtlasData **)&__return_storage_ptr__->field_0x38 = pTVar2->Object;
  pTVar3 = (pTVar2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x40 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// operator<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>_TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_> @ 14245acb0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_> * __thiscall
TPairInitializer<FShapedGlyphEntryKey_const_&,TSharedRef<FShapedGlyphFontAtlasData,1>_const_&>::
operator<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>_TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>
          (TPairInitializer<FShapedGlyphEntryKey_const_&,TSharedRef<FShapedGlyphFontAtlasData,1>_const_&>
           *this,TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,1>_>
                 *__return_storage_ptr__)

{
  FShapedGlyphEntryKey *pFVar1;
  TSharedRef<FShapedGlyphFontAtlasData,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = this->Key;
  pTVar2 = this->Value;
  *(FFreeTypeFace **)__return_storage_ptr__ = (pFVar1->FontFace).Object;
  pTVar3 = (pFVar1->FontFace).WeakReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(uint *)&__return_storage_ptr__->field_0x10 = pFVar1->FontRenderSize;
  *(int *)&__return_storage_ptr__->field_0x14 = pFVar1->OutlineRenderSize;
  __return_storage_ptr__->field_0x18 = pFVar1->OutlineMiteredCorners;
  __return_storage_ptr__->field_0x19 = pFVar1->OutlineSeparateFillAlpha;
  *(uint *)&__return_storage_ptr__->field_0x1c = pFVar1->GlyphIndex;
  *(uint *)&__return_storage_ptr__->field_0x20 = pFVar1->KeyHash;
  *(float *)&__return_storage_ptr__->field_0x24 = pFVar1->FontSkew;
  *(FShapedGlyphFontAtlasData **)&__return_storage_ptr__->field_0x28 = pTVar2->Object;
  pTVar3 = (pTVar2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x30 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// operator<wchar_t,FCharacterEntry>_TTuple<wchar_t,FCharacterEntry> @ 14245ad30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TTuple<wchar_t,FCharacterEntry> * __thiscall
TPairInitializer<wchar_t_const_&,FCharacterEntry_&&>::
operator<wchar_t,FCharacterEntry>_TTuple<wchar_t,FCharacterEntry>
          (TPairInitializer<wchar_t_const_&,FCharacterEntry_&&> *this,
          TTuple<wchar_t,FCharacterEntry> *__return_storage_ptr__)

{
  FCharacterEntry *pFVar1;
  
  pFVar1 = this->Value;
  *(wchar_t *)__return_storage_ptr__ = *this->Key;
  *(wchar_t *)&__return_storage_ptr__->field_0x8 = pFVar1->Character;
  *(uint *)&__return_storage_ptr__->field_0xc = pFVar1->GlyphIndex;
  *(FFontData **)&__return_storage_ptr__->field_0x10 = pFVar1->FontData;
  *(FFreeTypeKerningCache **)&__return_storage_ptr__->field_0x18 = (pFVar1->KerningCache).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar1->KerningCache).SharedReferenceCount.ReferenceController;
  (pFVar1->KerningCache).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (pFVar1->KerningCache).Object = (FFreeTypeKerningCache *)0x0;
  *(float *)&__return_storage_ptr__->field_0x28 = pFVar1->FontScale;
  *(float *)&__return_storage_ptr__->field_0x2c = pFVar1->BitmapRenderScale;
  *(ushort *)&__return_storage_ptr__->field_0x30 = pFVar1->StartU;
  *(ushort *)&__return_storage_ptr__->field_0x32 = pFVar1->StartV;
  *(ushort *)&__return_storage_ptr__->field_0x34 = pFVar1->USize;
  *(ushort *)&__return_storage_ptr__->field_0x36 = pFVar1->VSize;
  *(short *)&__return_storage_ptr__->field_0x38 = pFVar1->VerticalOffset;
  *(short *)&__return_storage_ptr__->field_0x3a = pFVar1->HorizontalOffset;
  *(short *)&__return_storage_ptr__->field_0x3c = pFVar1->GlobalDescender;
  *(short *)&__return_storage_ptr__->field_0x3e = pFVar1->XAdvance;
  __return_storage_ptr__->field_0x40 = pFVar1->TextureIndex;
  __return_storage_ptr__->field_0x41 = pFVar1->FallbackLevel;
  __return_storage_ptr__->field_0x42 = pFVar1->HasKerning;
  __return_storage_ptr__->field_0x43 = pFVar1->SupportsOutline;
  __return_storage_ptr__->field_0x44 = pFVar1->Valid;
  return __return_storage_ptr__;
}

