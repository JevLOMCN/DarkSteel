// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// operator() @ 14247cf00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
TDefaultDelete<FCompositeFontCache>::operator()
          (TDefaultDelete<FCompositeFontCache> *this,FCompositeFontCache *param_1)

{
  int iVar1;
  FAsyncTaskBase *this_00;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FInternationalization *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  if (param_1 != (FCompositeFontCache *)0x0) {
    pFVar4 = FInternationalization::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar4->CultureChangedEvent,
               param_1);
    pFVar5 = (param_1->LoadFontFaceTasks).AllocatorInstance.Data;
    iVar1 = (param_1->LoadFontFaceTasks).ArrayNum;
    pFVar2 = pFVar5 + (longlong)iVar1 * 8;
    while( true ) {
      if ((param_1->LoadFontFaceTasks).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FAsyncTask<FAsyncLoadFontFaceData>_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar5 == pFVar2) break;
      this_00 = *(FAsyncTaskBase **)pFVar5;
      FAsyncTaskBase::EnsureCompletion(this_00,true,false);
      if (this_00 != (FAsyncTaskBase *)0x0) {
        (**(code **)(this_00->_padding_ + 0x28))(this_00,1);
      }
      pFVar5 = pFVar5 + 8;
    }
    pFVar2 = (param_1->LoadFontFaceTasks).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)&(param_1->FontFaceMap).field_0x48 = 0;
    pvVar3 = *(void **)&(param_1->FontFaceMap).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->FontFaceMap);
    *(undefined4 *)&(param_1->CompositeFontToCachedDataMap).field_0x48 = 0;
    pvVar3 = *(void **)&(param_1->CompositeFontToCachedDataMap).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->CompositeFontToCachedDataMap);
    ::operator_delete(param_1,0xb8);
  }
  return;
}

// operator() @ 14247d010

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TDefaultDelete<FFreeTypeCacheDirectory>::operator()
          (TDefaultDelete<FFreeTypeCacheDirectory> *this,FFreeTypeCacheDirectory *param_1)

{
  void *pvVar1;
  
  if (param_1 != (FFreeTypeCacheDirectory *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->InvalidAdvanceCache).SharedReferenceCount.ReferenceController);
    *(undefined4 *)&(param_1->KerningCacheMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->KerningCacheMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->KerningCacheMap);
    *(undefined4 *)&(param_1->AdvanceCacheMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->AdvanceCacheMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->AdvanceCacheMap);
    *(undefined4 *)&(param_1->GlyphCacheMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->GlyphCacheMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)param_1);
    ::operator_delete(param_1,0x100);
  }
  return;
}

// operator() @ 1425c4290

void __thiscall
TDefaultDelete<FHittestGrid>::operator()(TDefaultDelete<FHittestGrid> *this,FHittestGrid *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  
  if (param_1 != (FHittestGrid *)0x0) {
    FInstancedStruct::Reset(&(param_1->LastNavigationMethod).InstancedStruct);
    DestructItems<FHittestGrid::FAppendedGridData,int>
              ((FAppendedGridData *)(param_1->AppendedGridArray).AllocatorInstance.Data,
               (param_1->AppendedGridArray).ArrayNum);
    pFVar3 = (param_1->AppendedGridArray).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<FHittestGrid::FCell,int>
              ((FCell *)(param_1->Cells).AllocatorInstance.Data,(param_1->Cells).ArrayNum);
    pFVar3 = (param_1->Cells).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator>::DestroyElements
              (&param_1->WidgetArray,0,*(int *)&(param_1->WidgetArray).field_0x8);
    puVar1 = &(param_1->WidgetArray).field_0xc;
    *(undefined4 *)&(param_1->WidgetArray).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)&param_1->WidgetArray,0,(int *)puVar1);
    }
    *(undefined4 *)&(param_1->WidgetArray).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->WidgetArray).field_0x34 = 0;
    iVar2 = *(int *)&(param_1->WidgetArray).field_0x2c;
    *(undefined4 *)&(param_1->WidgetArray).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(param_1->WidgetArray).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(param_1->WidgetArray).field_0x10,0);
    }
    pvVar4 = *(void **)&(param_1->WidgetArray).field_0x20;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    if (*(void **)&param_1->WidgetArray != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->WidgetArray);
    }
    *(undefined4 *)&(param_1->WidgetMap).field_0x48 = 0;
    pvVar4 = *(void **)&(param_1->WidgetMap).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)param_1);
    ::operator_delete(param_1,0xf8);
  }
  return;
}

