// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// FFreeTypeCacheDirectory @ 1424729d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFreeTypeCacheDirectory * __thiscall
FFreeTypeCacheDirectory::FFreeTypeCacheDirectory(FFreeTypeCacheDirectory *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FFreeTypeCacheDirectory *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->GlyphCacheMap = 0;
  *(undefined8 *)&(this->GlyphCacheMap).field_0x8 = 0;
  *(undefined8 *)&(this->GlyphCacheMap).field_0x20 = 0;
  *(undefined4 *)&(this->GlyphCacheMap).field_0x28 = 0;
  *(undefined4 *)&(this->GlyphCacheMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GlyphCacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GlyphCacheMap).field_0x34 = 0;
  *(undefined8 *)&(this->GlyphCacheMap).field_0x40 = 0;
  *(undefined4 *)&(this->GlyphCacheMap).field_0x48 = 0;
  *(undefined8 *)&this->AdvanceCacheMap = 0;
  *(undefined8 *)&(this->AdvanceCacheMap).field_0x8 = 0;
  *(undefined8 *)&(this->AdvanceCacheMap).field_0x20 = 0;
  *(undefined4 *)&(this->AdvanceCacheMap).field_0x28 = 0;
  *(undefined4 *)&(this->AdvanceCacheMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AdvanceCacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdvanceCacheMap).field_0x34 = 0;
  *(undefined8 *)&(this->AdvanceCacheMap).field_0x40 = 0;
  *(undefined4 *)&(this->AdvanceCacheMap).field_0x48 = 0;
  *(undefined8 *)&this->KerningCacheMap = 0;
  *(undefined8 *)&(this->KerningCacheMap).field_0x8 = 0;
  *(undefined8 *)&(this->KerningCacheMap).field_0x20 = 0;
  *(undefined4 *)&(this->KerningCacheMap).field_0x28 = 0;
  *(undefined4 *)&(this->KerningCacheMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->KerningCacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KerningCacheMap).field_0x34 = 0;
  *(undefined8 *)&(this->KerningCacheMap).field_0x40 = 0;
  *(undefined4 *)&(this->KerningCacheMap).field_0x48 = 0;
  pTVar3 = ::operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->InvalidAdvanceCache).Object = (FFreeTypeAdvanceCache *)0x10;
    (this->InvalidAdvanceCache).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFreeTypeAdvanceCache___00_SharedPointerInternals__6B_
    ;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[5]._padding_ = 0xffffffff;
    pTVar3[6]._padding_ = 0;
    if ((FFreeTypeAdvanceCache *)(pTVar3 + 1) == (FFreeTypeAdvanceCache *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFreeTypeCacheDirectory *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->InvalidAdvanceCache).Object = (FFreeTypeAdvanceCache *)(pTVar3 + 1);
    (this->InvalidAdvanceCache).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return this;
}

// FlushCache @ 142489420

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FFreeTypeCacheDirectory::FlushCache(FFreeTypeCacheDirectory *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TMap<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>,0>_>
  *this_00;
  
  bVar3 = 1 < *(int *)&(this->GlyphCacheMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->GlyphCacheMap).field_0x8);
  puVar1 = &(this->GlyphCacheMap).field_0xc;
  *(undefined4 *)&(this->GlyphCacheMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->GlyphCacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GlyphCacheMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->GlyphCacheMap).field_0x2c;
  *(undefined4 *)&(this->GlyphCacheMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->GlyphCacheMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GlyphCacheMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->GlyphCacheMap).field_0x48 = 1;
    TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>,0>,FDefaultSetAllocator>
              *)this);
  }
  bVar3 = 1 < *(int *)&(this->AdvanceCacheMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>,0>,FDefaultSetAllocator>
                      *)&this->AdvanceCacheMap);
  }
  TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->AdvanceCacheMap,0,*(int *)&(this->AdvanceCacheMap).field_0x8);
  puVar1 = &(this->AdvanceCacheMap).field_0xc;
  *(undefined4 *)&(this->AdvanceCacheMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&this->AdvanceCacheMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AdvanceCacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdvanceCacheMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->AdvanceCacheMap).field_0x2c;
  *(undefined4 *)&(this->AdvanceCacheMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AdvanceCacheMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AdvanceCacheMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->AdvanceCacheMap).field_0x48 = 1;
    TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>,0>,FDefaultSetAllocator>
              *)&this->AdvanceCacheMap);
  }
  this_00 = &this->KerningCacheMap;
  bVar3 = 1 < *(int *)&(this->KerningCacheMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->KerningCacheMap).field_0x8);
  puVar1 = &(this->KerningCacheMap).field_0xc;
  *(undefined4 *)&(this->KerningCacheMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->KerningCacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KerningCacheMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->KerningCacheMap).field_0x2c;
  *(undefined4 *)&(this->KerningCacheMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->KerningCacheMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->KerningCacheMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->KerningCacheMap).field_0x48 = 1;
    TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// GetAdvanceCache @ 14248a7b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FFreeTypeAdvanceCache,1> * __thiscall
FFreeTypeCacheDirectory::GetAdvanceCache
          (FFreeTypeCacheDirectory *this,TSharedRef<FFreeTypeAdvanceCache,1> *__return_storage_ptr__
          ,FT_FaceRec_ *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  TSharedRef<FFreeTypeAdvanceCache,1> *pTVar4;
  TSharedPtr<FFreeTypeAdvanceCache,1> *this_00;
  undefined1 *puVar5;
  int iVar6;
  FT_FaceRec_ *local_res18;
  int local_res20 [2];
  int local_58 [2];
  FFontKey *local_50;
  TSharedPtr<FFreeTypeAdvanceCache,1> local_48;
  TSharedRef<FFreeTypeAdvanceCache,1> local_38;
  FFontKey local_28;
  
  local_res18 = param_1;
  local_res20[0] = param_2;
  if ((param_1 == (FT_FaceRec_ *)0x0) ||
     (((param_2 & 1U) != 0 &&
      (((param_1->face_flags & 0x2001U) != 1 ||
       (((param_1->face_flags & 2U) != 0 && (param_1->num_glyphs < 1)))))))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x391,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<FFreeTypeAdvanceCache,1> *)(*pcVar1)();
      return pTVar4;
    }
    this_00 = &this->InvalidAdvanceCache;
  }
  else {
    FFontKey::FFontKey(&local_28,param_1,param_2,param_3);
    if (*(int *)&(this->AdvanceCacheMap).field_0x8 != *(int *)&(this->AdvanceCacheMap).field_0x34) {
      puVar5 = *(undefined1 **)&(this->AdvanceCacheMap).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->AdvanceCacheMap).field_0x38;
      }
      iVar6 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->AdvanceCacheMap).field_0x48 - 1U & local_28.KeyHash
                                ) * 4);
      if (iVar6 != -1) {
        do {
          plVar3 = (longlong *)((longlong)iVar6 * 0x30 + *(longlong *)&this->AdvanceCacheMap);
          if ((((FT_FaceRec_ *)*plVar3 == local_28.Face) && ((int)plVar3[1] == local_28.Flags)) &&
             (*(uint *)((longlong)plVar3 + 0xc) == local_28.FontRenderSize)) {
            if ((iVar6 != -1) && (plVar3 != (longlong *)0x0)) goto LAB_14248a8db;
            break;
          }
          iVar6 = (int)plVar3[5];
        } while (iVar6 != -1);
      }
    }
    local_50 = &local_28;
    TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FFreeTypeCacheDirectory::FFontKey_const_&>_>
              ((TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeAdvanceCache,1>,0>,FDefaultSetAllocator>
                *)&this->AdvanceCacheMap,(uint)local_58,
               (TKeyInitializer<FFreeTypeCacheDirectory::FFontKey_const_&> *)
               (ulonglong)local_28.KeyHash,(bool *)&local_50);
    plVar3 = (longlong *)((longlong)local_58[0] * 0x30 + *(longlong *)&this->AdvanceCacheMap);
LAB_14248a8db:
    this_00 = (TSharedPtr<FFreeTypeAdvanceCache,1> *)(plVar3 + 3);
    if (plVar3[3] == 0) {
      pTVar4 = MakeShared<FFreeTypeAdvanceCache,1,FT_FaceRec__*_&,int_const_&,unsigned_int_const_&>
                         (&local_38,&local_res18,local_res20,&param_3);
      local_48.SharedReferenceCount.ReferenceController =
           (pTVar4->SharedReferenceCount).ReferenceController;
      local_48.Object = pTVar4->Object;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != &local_48) {
        this_00->Object = local_48.Object;
        local_48.Object = (FFreeTypeAdvanceCache *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(plVar3 + 4),&local_48.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  TSharedPtr<FFreeTypeAdvanceCache,1>::ToSharedRef(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGlyphCache @ 142490f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FFreeTypeGlyphCache,1> * __thiscall
FFreeTypeCacheDirectory::GetGlyphCache
          (FFreeTypeCacheDirectory *this,TSharedRef<FFreeTypeGlyphCache,1> *__return_storage_ptr__,
          FT_FaceRec_ *param_1,int param_2,uint param_3)

{
  TReferenceControllerBase<1> **ppTVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  TSharedRef<FFreeTypeGlyphCache,1> *pTVar5;
  undefined1 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  int iVar9;
  int local_res8 [2];
  FFontKey *local_res10;
  TReferenceControllerBase<1> *local_58;
  FSharedReferencer<1> FStack_50;
  FFontKey local_48;
  
  FFontKey::FFontKey(&local_48,param_1,param_2,param_3);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)&(this->GlyphCacheMap).field_0x8 != *(int *)&(this->GlyphCacheMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->GlyphCacheMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->GlyphCacheMap).field_0x38;
    }
    iVar9 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->GlyphCacheMap).field_0x48 - 1) &
                              local_48._16_8_ & 0xffffffff) * 4);
    if (iVar9 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar9 * 0x30 + *(longlong *)&this->GlyphCacheMap);
        if ((((FT_FaceRec_ *)*plVar4 == local_48.Face) && ((int)plVar4[1] == local_48.Flags)) &&
           (*(uint *)((longlong)plVar4 + 0xc) == local_48.FontRenderSize)) {
          if ((iVar9 != -1) && (plVar4 != (longlong *)0x0)) goto LAB_142491016;
          break;
        }
        iVar9 = (int)plVar4[5];
      } while (iVar9 != -1);
    }
  }
  local_res10 = &local_48;
  TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FFreeTypeCacheDirectory::FFontKey_const_&>_>
            ((TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeGlyphCache,1>,0>,FDefaultSetAllocator>
              *)this,(uint)local_res8,
             (TKeyInitializer<FFreeTypeCacheDirectory::FFontKey_const_&> *)
             (local_48._16_8_ & 0xffffffff),(bool *)&local_res10);
  plVar4 = (longlong *)((longlong)local_res8[0] * 0x30 + *(longlong *)&this->GlyphCacheMap);
LAB_142491016:
  ppTVar1 = (TReferenceControllerBase<1> **)(plVar4 + 3);
  if (plVar4[3] == 0) {
    FStack_50.ReferenceController = ::operator_new(0x70);
    if (FStack_50.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_58 = ___xmm_00000000000000000000000000000010;
      pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_50.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_50.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (FStack_50.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      FStack_50.ReferenceController[1]._padding_ = (longlong)param_1;
      pTVar7 = FStack_50.ReferenceController + 1;
      FStack_50.ReferenceController[1].SharedReferenceCount = (atomic<int>)param_2;
      (FStack_50.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFFreeTypeGlyphCache___00_SharedPointerInternals__6B_
      ;
      FStack_50.ReferenceController[1].WeakReferenceCount = (atomic<int>)param_3;
      FStack_50.ReferenceController[3]._padding_ = 0;
      FStack_50.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      FStack_50.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      FStack_50.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
      FStack_50.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
      FStack_50.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
      FStack_50.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
      FStack_50.ReferenceController[2]._padding_ = 0;
      FStack_50.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      FStack_50.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      FStack_50.ReferenceController[4]._padding_ = 0;
      FStack_50.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
      FStack_50.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&FStack_50.ReferenceController[5]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&FStack_50.ReferenceController[5]._padding_ + 4) = 0;
      FStack_50.ReferenceController[6]._padding_ = 0;
      if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FFreeTypeGlyphCache,1> *)(*pcVar2)();
        return pTVar5;
      }
      LOCK();
      (FStack_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar8 = FStack_50.ReferenceController;
      local_58 = pTVar7;
    }
    if (ppTVar1 != &local_58) {
      *ppTVar1 = pTVar7;
      local_58 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(plVar4 + 4),&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if ((*ppTVar1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FFreeTypeGlyphCache,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object = (FFreeTypeGlyphCache *)*ppTVar1;
  pTVar8 = (TReferenceControllerBase<1> *)plVar4[4];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (FFreeTypeGlyphCache *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FFreeTypeGlyphCache,1> *)(*pcVar2)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// GetKerningCache @ 142491860

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedPtr<FFreeTypeKerningCache,1> * __thiscall
FFreeTypeCacheDirectory::GetKerningCache
          (FFreeTypeCacheDirectory *this,TSharedPtr<FFreeTypeKerningCache,1> *__return_storage_ptr__
          ,FT_FaceRec_ *param_1,int param_2,uint param_3)

{
  TTypeCompatibleBytes<FFreeTypeKerningCache> **ppTVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FFreeTypeKerningCache,1> *pTVar6;
  longlong *plVar7;
  TIntrusiveReferenceController<FFreeTypeKerningCache,1> *pTVar8;
  undefined1 *puVar9;
  TMap<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>,0>_>
  *this_00;
  int iVar10;
  FT_FaceRec_ *local_res18;
  int local_res20 [2];
  int local_58 [2];
  FFontKey *local_50;
  TTypeCompatibleBytes<FFreeTypeKerningCache> *local_48;
  FSharedReferencer<1> local_40;
  FFontKey local_38;
  
  if ((param_1 != (FT_FaceRec_ *)0x0) && (uVar2 = param_1->face_flags, (uVar2 & 0x40) != 0)) {
    local_res18 = param_1;
    local_res20[0] = param_2;
    if ((param_2 != 2) ||
       (((uVar2 & 0x2001) == 1 && (((uVar2 & 2) == 0 || (0 < param_1->num_glyphs)))))) {
      FFontKey::FFontKey(&local_38,param_1,param_2,param_3);
      this_00 = &this->KerningCacheMap;
      if (*(int *)&(this->KerningCacheMap).field_0x8 != *(int *)&(this->KerningCacheMap).field_0x34)
      {
        puVar9 = *(undefined1 **)&(this->KerningCacheMap).field_0x40;
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &(this->KerningCacheMap).field_0x38;
        }
        iVar10 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->KerningCacheMap).field_0x48 - 1) &
                                   local_38._16_8_ & 0xffffffff) * 4);
        if (iVar10 != -1) {
          do {
            plVar7 = (longlong *)((longlong)iVar10 * 0x30 + *(longlong *)&this_00->field_0x0);
            if ((((FT_FaceRec_ *)*plVar7 == local_38.Face) && ((int)plVar7[1] == local_38.Flags)) &&
               (*(uint *)((longlong)plVar7 + 0xc) == local_38.FontRenderSize)) {
              if ((iVar10 != -1) && (plVar7 != (longlong *)0x0)) goto LAB_1424919bd;
              break;
            }
            iVar10 = (int)plVar7[5];
          } while (iVar10 != -1);
        }
      }
      local_50 = &local_38;
      TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FFreeTypeCacheDirectory::FFontKey_const_&>_>
                ((TSet<TTuple<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>_>,TDefaultMapHashableKeyFuncs<FFreeTypeCacheDirectory::FFontKey,TSharedPtr<FFreeTypeKerningCache,1>,0>,FDefaultSetAllocator>
                  *)this_00,(uint)local_58,
                 (TKeyInitializer<FFreeTypeCacheDirectory::FFontKey_const_&> *)
                 (local_38._16_8_ & 0xffffffff),(bool *)&local_50);
      plVar7 = (longlong *)((longlong)local_58[0] * 0x30 + *(longlong *)&this_00->field_0x0);
LAB_1424919bd:
      ppTVar1 = (TTypeCompatibleBytes<FFreeTypeKerningCache> **)(plVar7 + 3);
      if (plVar7[3] == 0) {
        pTVar8 = SharedPointerInternals::
                 NewIntrusiveReferenceController<1,FFreeTypeKerningCache,FT_FaceRec__*_&,int_const_&,unsigned_int_const_&>
                           (&local_res18,local_res20,&param_3);
        local_48 = &pTVar8->ObjectStorage;
        if ((local_48 == (TTypeCompatibleBytes<FFreeTypeKerningCache> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar6 = (TSharedPtr<FFreeTypeKerningCache,1> *)(*pcVar4)();
          return pTVar6;
        }
        if (pTVar8 != (TIntrusiveReferenceController<FFreeTypeKerningCache,1> *)0x0) {
          LOCK();
          *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
          UNLOCK();
        }
        local_40.ReferenceController = (TReferenceControllerBase<1> *)pTVar8;
        if (ppTVar1 != &local_48) {
          *ppTVar1 = local_48;
          local_48 = (TTypeCompatibleBytes<FFreeTypeKerningCache> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(plVar7 + 4),&local_40);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar8);
      }
      __return_storage_ptr__->Object = (FFreeTypeKerningCache *)*ppTVar1;
      pTVar3 = (TReferenceControllerBase<1> *)plVar7[4];
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x3ad,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FFreeTypeKerningCache,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->Object = (FFreeTypeKerningCache *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

