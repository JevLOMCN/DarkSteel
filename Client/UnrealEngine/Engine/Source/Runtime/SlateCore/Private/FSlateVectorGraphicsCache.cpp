// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// FSlateVectorGraphicsCache @ 1424eb250

FSlateVectorGraphicsCache * __thiscall
FSlateVectorGraphicsCache::FSlateVectorGraphicsCache
          (FSlateVectorGraphicsCache *this,TSharedPtr<ISlateTextureAtlasFactory,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  FSlateFlushableAtlasCache::FSlateFlushableAtlasCache
            ((FSlateFlushableAtlasCache *)this,&SVGAtlasFlushParams);
  this->_padding_ = (longlong)&___7FSlateVectorGraphicsCache__6B_;
  *(undefined8 *)&this->ResourceMap = 0;
  *(undefined8 *)&(this->ResourceMap).field_0x8 = 0;
  *(undefined8 *)&(this->ResourceMap).field_0x20 = 0;
  *(undefined4 *)&(this->ResourceMap).field_0x28 = 0;
  *(undefined4 *)&(this->ResourceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResourceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResourceMap).field_0x34 = 0;
  *(undefined8 *)&(this->ResourceMap).field_0x40 = 0;
  *(undefined4 *)&(this->ResourceMap).field_0x48 = 0;
  (this->Atlases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Atlases).ArrayNum = 0;
  (this->Atlases).ArrayMax = 0;
  (this->NonAtlasedTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonAtlasedTextures).ArrayNum = 0;
  (this->NonAtlasedTextures).ArrayMax = 0;
  (this->AtlasFactory).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->AtlasFactory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->PendingRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRequests).ArrayNum = 0;
  (this->PendingRequests).ArrayMax = 0;
  this->bFlushRequested = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// operator() @ 1424fa360

void __thiscall
`FSlateVectorGraphicsCache::UpdateCache'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  FName *this_00;
  longlong lVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  lVar1 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar1 + 0xb0)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0xa8);
  TVar2 = ((TIntPoint<int>_u_0 *)(lVar1 + 8 + (longlong)param_1 * 0x28))->_s_0;
  this_00 = (FName *)(lVar1 + (longlong)param_1 * 0x28);
  pFVar7 = ::FName::ToString(this_00,&local_18);
  pTVar8 = FSlateSVGRasterizer::RasterizeSVGFromFile(&local_28,pFVar7,(TIntPoint<int>)TVar2);
  pTVar9 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(this_00 + 3);
  if (pTVar9 != pTVar8) {
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar9->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this_00[4].ComparisonIndex.Value = pTVar8->ArrayNum;
    this_00[4].Number = pTVar8->ArrayMax;
    pTVar8->ArrayNum = 0;
    pTVar8->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ConditionalFlushCache @ 142505330

void __thiscall FSlateVectorGraphicsCache::ConditionalFlushCache(FSlateVectorGraphicsCache *this)

{
  if (this->bFlushRequested != false) {
    FlushCache(this);
    this->bFlushRequested = false;
  }
  return;
}

// DeleteResources @ 1425072c0

void __thiscall FSlateVectorGraphicsCache::DeleteResources(FSlateVectorGraphicsCache *this)

{
  TMap<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>_>
  *this_00;
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  DestructItems<TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>,int>
            ((TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_> *)
             (this->Atlases).AllocatorInstance.Data,(this->Atlases).ArrayNum);
  piVar2 = &(this->Atlases).ArrayMax;
  (this->Atlases).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Atlases).AllocatorInstance,0,piVar2);
  }
  DestructItems<TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>,int>
            ((TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_> *)
             (this->NonAtlasedTextures).AllocatorInstance.Data,(this->NonAtlasedTextures).ArrayNum);
  piVar2 = &(this->NonAtlasedTextures).ArrayMax;
  (this->NonAtlasedTextures).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NonAtlasedTextures).AllocatorInstance,0,piVar2);
  }
  this_00 = &this->ResourceMap;
  bVar4 = 1 < *(int *)&(this->ResourceMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ResourceMap).field_0x8);
  puVar1 = &(this->ResourceMap).field_0xc;
  *(undefined4 *)&(this->ResourceMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ResourceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResourceMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->ResourceMap).field_0x2c;
  *(undefined4 *)&(this->ResourceMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ResourceMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ResourceMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->ResourceMap).field_0x48 = 1;
    TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// FlushCache @ 14250b0b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateVectorGraphicsCache::FlushCache(FSlateVectorGraphicsCache *this)

{
  TMap<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>_>
  *this_00;
  undefined1 *puVar1;
  TArray<TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  int iVar4;
  ISlateTextureAtlasFactory *pIVar5;
  code *pcVar6;
  bool bVar7;
  FSlateApplicationBase *this_01;
  
  this_01 = FSlateApplicationBase::Get();
  FSlateApplicationBase::InvalidateAllWidgets(this_01,false);
  if (((this->AtlasFactory).Object == (ISlateTextureAtlasFactory *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar5 = (this->AtlasFactory).Object;
  pTVar2 = &this->NonAtlasedTextures;
  (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,&this->Atlases,pTVar2,1);
  DestructItems<TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>,int>
            ((TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_> *)
             (this->Atlases).AllocatorInstance.Data,(this->Atlases).ArrayNum);
  piVar3 = &(this->Atlases).ArrayMax;
  (this->Atlases).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Atlases).AllocatorInstance,0,piVar3);
  }
  DestructItems<TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>,int>
            ((TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_> *)
             (pTVar2->AllocatorInstance).Data,(this->NonAtlasedTextures).ArrayNum);
  piVar3 = &(this->NonAtlasedTextures).ArrayMax;
  (this->NonAtlasedTextures).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar3);
  }
  this_00 = &this->ResourceMap;
  bVar7 = 1 < *(int *)&(this->ResourceMap).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ResourceMap).field_0x8);
  puVar1 = &(this->ResourceMap).field_0xc;
  *(undefined4 *)&(this->ResourceMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ResourceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResourceMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->ResourceMap).field_0x2c;
  *(undefined4 *)&(this->ResourceMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ResourceMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ResourceMap).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->ResourceMap).field_0x48 = 1;
    TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// GetShaderResource @ 14250f5e0

FSlateShaderResourceProxy * __thiscall
FSlateVectorGraphicsCache::GetShaderResource
          (FSlateVectorGraphicsCache *this,FSlateBrush *param_1,TVector2<float> param_2,
          float param_3)

{
  int *piVar1;
  longlong lVar2;
  FVectorCacheKey *this_00;
  UObject *pUVar3;
  FSlateSharedHandleData *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TVector2<float>_u_0 TVar9;
  TVector2<float>_u_0 TVar10;
  FSlateShaderResourceProxy *pFVar11;
  uint uVar12;
  FName FVar13;
  undefined1 *puVar14;
  FName FVar15;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  TVector2<float>_u_0 local_78;
  FScriptContainerElement *local_70;
  TVector2<float>_u_0 *local_68;
  FVectorCacheKey local_60 [2];
  
  TVar10 = (TVector2<float>_u_0)0x0;
  if ((param_1->ImageType).Value == '\x03') {
    FVar13 = param_1->ResourceName;
    if ((FVar13 == (FName)0x0) &&
       (pUVar3 = (param_1->ResourceObject).field0_0x0.DebugPtr, pUVar3 != (UObject *)0x0)) {
      FVar13.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
      FVar13.Number = *(uint *)&pUVar3->field_0x1c;
    }
    local_res18 = param_2.field0_0x0;
    FVectorCacheKey::FVectorCacheKey(local_60,FVar13,param_2,param_3);
    if (*(int *)&(this->ResourceMap).field_0x8 != *(int *)&(this->ResourceMap).field_0x34) {
      puVar14 = *(undefined1 **)&(this->ResourceMap).field_0x40;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(this->ResourceMap).field_0x38;
      }
      iVar7 = *(int *)(puVar14 +
                      (ulonglong)
                      (*(int *)&(this->ResourceMap).field_0x48 - 1U & local_60[0].KeyHash) * 4);
      if (iVar7 != -1) {
        do {
          lVar2 = *(longlong *)&this->ResourceMap + (longlong)iVar7 * 0x28;
          if (((*(FName *)(*(longlong *)&this->ResourceMap + (longlong)iVar7 * 0x28) ==
                local_60[0].BrushName) &&
              (*(int *)(lVar2 + 8) == local_60[0].PixelSize.field0_0x0._s_0.X)) &&
             (*(int *)(lVar2 + 0xc) == local_60[0].PixelSize.field0_0x0._s_0.Y)) {
            if (iVar7 != -1) {
              TVar9 = (TVector2<float>_u_0)(lVar2 + 0x18);
              if (lVar2 == 0) {
                TVar9 = TVar10;
              }
              if (TVar9 != (TVector2<float>_u_0)0x0) {
                return *(FSlateShaderResourceProxy **)TVar9;
              }
            }
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x20);
        } while (iVar7 != -1);
      }
    }
    if ((0.0 < (float)local_res18) && (0.0 < local_res18._4_4_)) {
      FVar15 = param_1->ResourceName;
      if ((FVar15 == (FName)0x0) &&
         (pUVar3 = (param_1->ResourceObject).field0_0x0.DebugPtr, pUVar3 != (UObject *)0x0)) {
        FVar15.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        FVar15.Number = *(uint *)&pUVar3->field_0x1c;
      }
      iVar7 = (this->PendingRequests).ArrayNum;
      piVar1 = &(this->PendingRequests).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&(this->PendingRequests).AllocatorInstance,piVar1);
      }
      (this->PendingRequests).ArrayNum = iVar7 + 1;
      this_00 = (FVectorCacheKey *)
                ((this->PendingRequests).AllocatorInstance.Data + (longlong)iVar7 * 0x28);
      FVectorCacheKey::FVectorCacheKey(this_00,FVar15,param_2,param_3);
      *(undefined8 *)&this_00[1].BrushName.Number = 0;
      *(undefined8 *)((longlong)&this_00[1].PixelSize.field0_0x0 + 4) = 0;
      TVar9 = (TVector2<float>_u_0)::operator_new(0x30);
      if (TVar9 != (TVector2<float>_u_0)0x0) {
        *(undefined8 *)TVar9 = 0;
        (((TVector2<float> *)((longlong)TVar9 + 8))->field0_0x0)._s_0.X = 1.0;
        *(undefined4 *)((longlong)TVar9 + 0xc) = 0x3f800000;
        *(FSlateShaderResource **)((longlong)TVar9 + 0x10) = (FSlateShaderResource *)0x0;
        ((TIntPoint<int> *)((longlong)TVar9 + 0x18))->field0_0x0 = (TIntPoint<int>_u_0)0x0;
        ((TSharedPtr<FSlateSharedHandleData,1> *)((longlong)TVar9 + 0x20))->Object =
             (FSlateSharedHandleData *)0x0;
        ((FSharedReferencer<1> *)((longlong)TVar9 + 0x28))->ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        TVar10 = TVar9;
      }
      iVar7 = (this->PendingRequests).ArrayNum;
      uVar12 = iVar7 - 1;
      uVar8 = 0;
      if ((int)uVar12 < iVar7) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      local_78 = TVar10;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FSlateShaderResourceProxy *)(*pcVar5)();
        return pFVar11;
      }
      local_70 = (this->PendingRequests).AllocatorInstance.Data +
                 (longlong)((this->PendingRequests).ArrayNum + -1) * 0x28;
      local_68 = &local_78;
      TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FSlateVectorGraphicsCache::FVectorCacheKey_const_&,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_&&>_>
                ((TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
                  *)&this->ResourceMap,
                 (TPairInitializer<FSlateVectorGraphicsCache::FVectorCacheKey_const_&,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_&&>
                  *)local_res10,(bool *)&local_70);
      TVar9 = local_78;
      if (local_78 != (TVector2<float>_u_0)0x0) {
        pFVar4 = ((TSharedPtr<FSlateSharedHandleData,1> *)((longlong)local_78 + 0x20))->Object;
        if (pFVar4 != (FSlateSharedHandleData *)0x0) {
          pFVar4->Proxy = (FSlateShaderResourceProxy *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (((FSharedReferencer<1> *)((longlong)local_78 + 0x28))->ReferenceController);
        ::operator_delete((void *)TVar9,0x30);
      }
    }
  }
  return (FSlateShaderResourceProxy *)TVar10;
}

// ReleaseResources @ 14251b0a0

void __thiscall
FSlateVectorGraphicsCache::ReleaseResources(FSlateVectorGraphicsCache *this,bool param_1)

{
  ISlateTextureAtlasFactory *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->AtlasFactory).Object == (ISlateTextureAtlasFactory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->AtlasFactory).Object;
                    /* WARNING: Could not recover jumptable at 0x00014251b103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,&this->Atlases,&this->NonAtlasedTextures,param_1);
  return;
}

// RequestFlushCache @ 14251cae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateVectorGraphicsCache::RequestFlushCache(FSlateVectorGraphicsCache *this,FString *param_1)

{
  if (4 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    this->bFlushRequested = true;
    return;
  }
  this->bFlushRequested = true;
  return;
}

// UpdateCache @ 1425238e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateVectorGraphicsCache::UpdateCache(FSlateVectorGraphicsCache *this)

{
  int *piVar1;
  TArray<TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ISlateTextureAtlasFactory *pIVar4;
  code *pcVar5;
  FVectorCacheKey *pFVar6;
  bool bVar7;
  int iVar8;
  FAtlasedTextureSlot *pFVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FSlateTextureAtlas *pFVar16;
  FVectorCacheKey *pFVar17;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar18;
  <lambda_1> local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FSlateTextureAtlas *local_e8;
  undefined8 local_e0;
  FVectorCacheKey *local_d8;
  undefined8 local_d0;
  FSlateTextureAtlas *local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  LARGE_INTEGER local_a0;
  FSlateVectorGraphicsCache *local_98;
  FVectorCacheKey *local_90;
  LARGE_INTEGER local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FSlateVectorGraphicsCache **local_68;
  
  piVar1 = &(this->PendingRequests).ArrayNum;
  if (0 < *piVar1) {
    QueryPerformanceCounter(&local_a0);
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`FSlateVectorGraphicsCache::UpdateCache'::__l5::<lambda_1>,void,int>
               ::Call;
    local_68 = &local_98;
    local_80.DataPtr = (void **)0x0;
    local_80.ArrayNum = 0;
    local_98 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",*piVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_70,
               local_res8[0],None,&local_80);
    local_res20 = (this->PendingRequests).ArrayNum;
    uVar11 = (ulonglong)(int)local_res20;
    pFVar17 = (FVectorCacheKey *)(this->PendingRequests).AllocatorInstance.Data;
    local_90 = pFVar17 + uVar11 * 2;
    pTVar18 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar17[1].BrushName.Number;
    while( true ) {
      pFVar6 = local_90;
      pFVar9 = (FAtlasedTextureSlot *)0x0;
      local_d8 = pFVar17;
      if ((this->PendingRequests).ArrayNum != (int)uVar11) {
        local_res8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<FSlateVectorGraphicsCache::FRasterRequest,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar17 == pFVar6) break;
      pFVar3 = pTVar18[-1].AllocatorInstance.Data;
      local_d0 = pFVar3;
      if (pTVar18->ArrayNum != 0) {
        uVar12 = (uint)pFVar3;
        if (((int)uVar12 < 0x401) && ((int)((ulonglong)pFVar3 >> 0x20) < 0x401)) {
          pFVar14 = (this->Atlases).AllocatorInstance.Data;
          iVar8 = (this->Atlases).ArrayNum;
          local_c8 = (FSlateTextureAtlas *)0x0;
          pFVar13 = pFVar14 + (longlong)iVar8 * 8;
          while( true ) {
            if ((this->Atlases).ArrayNum != iVar8) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res10);
            }
            if (pFVar14 == pFVar13) break;
            pFVar9 = FSlateTextureAtlas::AddTexture
                               (*(FSlateTextureAtlas **)pFVar14,uVar12,local_d0._4_4_,pTVar18);
            if (pFVar9 != (FAtlasedTextureSlot *)0x0) {
              local_c8 = *(FSlateTextureAtlas **)pFVar14;
            }
            pFVar14 = pFVar14 + 8;
          }
          pFVar16 = local_c8;
          if (pFVar9 == (FAtlasedTextureSlot *)0x0) {
            if (((this->AtlasFactory).Object == (ISlateTextureAtlasFactory *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pIVar4 = (this->AtlasFactory).Object;
            (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_e8,0x400,4,1,1);
            pFVar9 = FSlateTextureAtlas::AddTexture(local_e8,uVar12,local_d0._4_4_,pTVar18);
            pFVar16 = local_e8;
            pFVar13 = (this->Atlases).AllocatorInstance.Data;
            if (((pFVar13 <= (FScriptContainerElement *)&local_e8) &&
                ((FScriptContainerElement *)&local_e8 <
                 pFVar13 + (longlong)(this->Atlases).ArrayMax * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = (this->Atlases).ArrayNum;
            piVar1 = &(this->Atlases).ArrayMax;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(this->Atlases).AllocatorInstance,piVar1);
            }
            (this->Atlases).ArrayNum = iVar8 + 1;
            *(FSlateTextureAtlas **)((this->Atlases).AllocatorInstance.Data + (longlong)iVar8 * 8) =
                 local_e8;
            local_e8 = (FSlateTextureAtlas *)0x0;
            FSlateFlushableAtlasCache::UpdateFlushCounters
                      ((FSlateFlushableAtlasCache *)this,0,(this->Atlases).ArrayNum,0,0);
            if (local_e8 != (FSlateTextureAtlas *)0x0) {
              (**(code **)local_e8->_padding_)();
            }
            pFVar17 = local_d8;
            if (pFVar9 == (FAtlasedTextureSlot *)0x0) goto LAB_142523bbe;
          }
          lVar15 = 0;
          iVar8 = TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FSlateVectorGraphicsCache::FVectorCacheKey>
                            ((TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
                              *)&this->ResourceMap,pTVar18[-1].ArrayNum,local_d8);
          if (((iVar8 == -1) ||
              (lVar15 = *(longlong *)&this->ResourceMap + (longlong)iVar8 * 0x28, lVar15 == 0)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = (**(code **)(pFVar16->_padding_ + 0x18))(pFVar16);
          *(undefined8 *)(*(longlong *)(lVar15 + 0x18) + 0x10) = uVar10;
          local_c0 = (float)(pFVar9->X + 1) / (float)pFVar16->AtlasWidth;
          fStack_bc = (float)(pFVar9->Y + 1) / (float)pFVar16->AtlasHeight;
          **(undefined8 **)(lVar15 + 0x18) = CONCAT44(fStack_bc,local_c0);
          local_b8 = (float)(pFVar9->Width - 2) / (float)pFVar16->AtlasWidth;
          fStack_b4 = (float)(pFVar9->Height - 2) / (float)pFVar16->AtlasHeight;
          *(ulonglong *)(*(longlong *)(lVar15 + 0x18) + 8) = CONCAT44(fStack_b4,local_b8);
          *(FScriptContainerElement **)(*(longlong *)(lVar15 + 0x18) + 0x18) = pFVar3;
          pFVar17 = local_d8;
        }
        else {
          if (((this->AtlasFactory).Object == (ISlateTextureAtlasFactory *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pIVar4 = (this->AtlasFactory).Object;
          (**(code **)((longlong)*pIVar4 + 0x10))
                    (pIVar4,&local_e0,(ulonglong)pFVar3 & 0xffffffff,local_d0._4_4_,pTVar18);
          iVar8 = TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FSlateVectorGraphicsCache::FVectorCacheKey>
                            ((TSet<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>,TDefaultMapHashableKeyFuncs<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>,0>,FDefaultSetAllocator>
                              *)&this->ResourceMap,pTVar18[-1].ArrayNum,pFVar17);
          if (((iVar8 == -1) ||
              (pFVar9 = (FAtlasedTextureSlot *)
                        (*(longlong *)&this->ResourceMap + (longlong)iVar8 * 0x28),
              pFVar9 == (FAtlasedTextureSlot *)0x0)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_b0 = 0;
          local_a8 = 0x3f800000;
          *(undefined8 *)(*(longlong *)&pFVar9->Width + 0x10) = local_e0;
          uStack_a4 = 0x3f800000;
          **(undefined8 **)&pFVar9->Width = 0;
          *(undefined8 *)(*(longlong *)&pFVar9->Width + 8) = 0x3f8000003f800000;
          *(FScriptContainerElement **)(*(longlong *)&pFVar9->Width + 0x18) = pFVar3;
          pTVar2 = &this->NonAtlasedTextures;
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_e0) &&
              ((FScriptContainerElement *)&local_e0 <
               pFVar3 + (longlong)(this->NonAtlasedTextures).ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (this->NonAtlasedTextures).ArrayNum;
          piVar1 = &(this->NonAtlasedTextures).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->NonAtlasedTextures).ArrayNum = iVar8 + 1;
          *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_e0;
          local_e0 = 0;
        }
LAB_142523bbe:
        FSlateFlushableAtlasCache::UpdateFlushCounters
                  ((FSlateFlushableAtlasCache *)this,0,(this->Atlases).ArrayNum,0,
                   (this->NonAtlasedTextures).ArrayNum);
      }
      uVar11 = (ulonglong)local_res20;
      pFVar17 = pFVar17 + 2;
      pTVar18 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pTVar18[2].ArrayNum;
    }
    QueryPerformanceCounter(&local_88);
  }
  if ((0 < (this->PendingRequests).ArrayNum) && (5 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  DestructItems<FSlateVectorGraphicsCache::FRasterRequest,int>
            ((FRasterRequest *)(this->PendingRequests).AllocatorInstance.Data,
             (this->PendingRequests).ArrayNum);
  piVar1 = &(this->PendingRequests).ArrayMax;
  (this->PendingRequests).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->PendingRequests).AllocatorInstance,0,piVar1);
  }
  pFVar13 = (this->Atlases).AllocatorInstance.Data;
  iVar8 = (this->Atlases).ArrayNum;
  pFVar3 = pFVar13 + (longlong)iVar8 * 8;
  while( true ) {
    if ((this->Atlases).ArrayNum != iVar8) {
      `TCheckedPointerIterator<TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar13 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar13 + 8))();
    pFVar13 = pFVar13 + 8;
  }
  return;
}

