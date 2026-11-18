// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticStruct @ 147eec260

UScriptStruct * __cdecl FMaterialCachedExpressionData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedExpressionData,(UObject *)pUVar1,
                         L"MaterialCachedExpressionData");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionData.OuterSingleton;
}

// FMaterialCachedExpressionData @ 147eefc40

FMaterialCachedExpressionData * __thiscall
FMaterialCachedExpressionData::FMaterialCachedExpressionData(FMaterialCachedExpressionData *this)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  longlong lVar5;
  
  puVar3 = &this->RuntimeEntries[0].ParameterInfoSet.Elements.field_0xc;
  lVar5 = 10;
  do {
    *(undefined8 *)(puVar3 + -0xc) = 0;
    *(undefined8 *)(puVar3 + -4) = 0;
    *(undefined8 *)(puVar3 + 0x14) = 0;
    *(undefined4 *)(puVar3 + 0x1c) = 0;
    *(undefined4 *)(puVar3 + 0x20) = 0x80;
    *(undefined4 *)(puVar3 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x34) = 0;
    *(undefined4 *)(puVar3 + 0x3c) = 0;
    puVar3 = puVar3 + 0x50;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  this->bHasMaterialLayers = 0;
  this->bHasWorldPosition = 0;
  this->bHasMeshPaintTexture = 0;
  this->bHasCustomizedUVs = 0;
  this->bHasVertexInterpolator = 0;
  this->bHasPerInstanceRandom = 0;
  this->bHasPerInstanceCustomData = 0;
  this->bHasSceneColor = 0;
  this->bMaterialCacheHasNonUVDerivedExpression = 0;
  this->bHasMaterialCacheOutput = 0;
  this->bSamplesMaterialCache = 0;
  this->bUsesMotionVectorWorldOffset = 0;
  this->bUsesTemporalResponsiveness = 0;
  this->bHasFirstPersonOutput = 0;
  this->bHasRuntimeVirtualTextureOutput = 0;
  piVar1 = &(this->QualityLevelsUsed).ArrayMax;
  (this->ScalarPrimitiveDataIndexValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarPrimitiveDataIndexValues).ArrayNum = 0;
  (this->ScalarPrimitiveDataIndexValues).ArrayMax = 0;
  (this->VectorPrimitiveDataIndexValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorPrimitiveDataIndexValues).ArrayNum = 0;
  (this->VectorPrimitiveDataIndexValues).ArrayMax = 0;
  (this->ScalarValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarValues).ArrayNum = 0;
  (this->ScalarValues).ArrayMax = 0;
  (this->StaticSwitchValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticSwitchValues).ArrayNum = 0;
  (this->StaticSwitchValues).ArrayMax = 0;
  (this->DynamicSwitchValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicSwitchValues).ArrayNum = 0;
  (this->DynamicSwitchValues).ArrayMax = 0;
  (this->VectorValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorValues).ArrayNum = 0;
  (this->VectorValues).ArrayMax = 0;
  (this->DoubleVectorValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleVectorValues).ArrayNum = 0;
  (this->DoubleVectorValues).ArrayMax = 0;
  (this->TextureValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureValues).ArrayNum = 0;
  (this->TextureValues).ArrayMax = 0;
  (this->TextureCollectionValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureCollectionValues).ArrayNum = 0;
  (this->TextureCollectionValues).ArrayMax = 0;
  (this->ParameterCollectionValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCollectionValues).ArrayNum = 0;
  (this->ParameterCollectionValues).ArrayMax = 0;
  (this->FontValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontValues).ArrayNum = 0;
  (this->FontValues).ArrayMax = 0;
  (this->FontPageValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FontPageValues).ArrayNum = 0;
  (this->FontPageValues).ArrayMax = 0;
  (this->RuntimeVirtualTextureValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextureValues).ArrayNum = 0;
  (this->RuntimeVirtualTextureValues).ArrayMax = 0;
  (this->SparseVolumeTextureValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SparseVolumeTextureValues).ArrayNum = 0;
  (this->SparseVolumeTextureValues).ArrayMax = 0;
  (this->ReferencedTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedTextures).ArrayNum = 0;
  (this->ReferencedTextures).ArrayMax = 0;
  (this->ReferencedTextureCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedTextureCollections).ArrayNum = 0;
  (this->ReferencedTextureCollections).ArrayMax = 0;
  (this->ReferencedExternalCodeExpressionClasses).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReferencedExternalCodeExpressionClasses).ArrayNum = 0;
  (this->ReferencedExternalCodeExpressionClasses).ArrayMax = 0;
  (this->FunctionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionInfos).ArrayNum = 0;
  (this->FunctionInfos).ArrayMax = 0;
  (this->ParameterCollectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCollectionInfos).ArrayNum = 0;
  (this->ParameterCollectionInfos).ArrayMax = 0;
  (this->GrassTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrassTypes).ArrayNum = 0;
  (this->GrassTypes).ArrayMax = 0;
  (this->MaterialCacheTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialCacheTags).ArrayNum = 0;
  (this->MaterialCacheTags).ArrayMax = 0;
  (this->MaterialLayers).Layers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialLayers).Layers.ArrayNum = 0;
  (this->MaterialLayers).Layers.ArrayMax = 0;
  (this->MaterialLayers).Blends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialLayers).Blends.ArrayNum = 0;
  (this->MaterialLayers).Blends.ArrayMax = 0;
  (this->MaterialLayers).LayerStackCache.Object = (FMaterialLayerStackFunctionsCache *)0x0;
  (this->MaterialLayers).LayerStackCache.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DynamicParameterNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicParameterNames).ArrayNum = 0;
  (this->DynamicParameterNames).ArrayMax = 0;
  (this->QualityLevelsUsed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FunctionInfosStateCRC = 0xffffffff;
  piVar4 = &(this->QualityLevelsUsed).ArrayNum;
  *piVar1 = 0;
  this->MaterialCacheUVCoordinatesUsedMask = 0;
  *piVar4 = 0;
  this->PropertyConnectedBitmask_DEPRECATED = 0;
  this->PropertyConnectedMask = 0;
  iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&(this->QualityLevelsUsed).AllocatorInstance,piVar4,piVar1);
  *(undefined4 *)((this->QualityLevelsUsed).AllocatorInstance.Data + iVar2) = 0;
  return this;
}

// ~FMaterialCachedExpressionData @ 147ef21c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FMaterialCachedExpressionData::~FMaterialCachedExpressionData(FMaterialCachedExpressionData *this)

{
  FScriptContainerElement *pFVar1;
  TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar2;
  longlong lVar3;
  
  pFVar1 = (this->QualityLevelsUsed).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicParameterNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData(&this->MaterialLayers);
  pFVar1 = (this->MaterialCacheTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GrassTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterCollectionInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FunctionInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferencedExternalCodeExpressionClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferencedTextureCollections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferencedTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<USparseVolumeTexture>,int>
            ((TSoftObjectPtr<USparseVolumeTexture> *)
             (this->SparseVolumeTextureValues).AllocatorInstance.Data,
             (this->SparseVolumeTextureValues).ArrayNum);
  pFVar1 = (this->SparseVolumeTextureValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<URuntimeVirtualTexture>,int>
            ((TSoftObjectPtr<URuntimeVirtualTexture> *)
             (this->RuntimeVirtualTextureValues).AllocatorInstance.Data,
             (this->RuntimeVirtualTextureValues).ArrayNum);
  pFVar1 = (this->RuntimeVirtualTextureValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FontPageValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UFont>,int>
            ((TSoftObjectPtr<UFont> *)(this->FontValues).AllocatorInstance.Data,
             (this->FontValues).ArrayNum);
  pFVar1 = (this->FontValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UMaterialParameterCollection>,int>
            ((TSoftObjectPtr<UMaterialParameterCollection> *)
             (this->ParameterCollectionValues).AllocatorInstance.Data,
             (this->ParameterCollectionValues).ArrayNum);
  pFVar1 = (this->ParameterCollectionValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UTextureCollection>,int>
            ((TSoftObjectPtr<UTextureCollection> *)
             (this->TextureCollectionValues).AllocatorInstance.Data,
             (this->TextureCollectionValues).ArrayNum);
  pFVar1 = (this->TextureCollectionValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UTexture>,int>
            ((TSoftObjectPtr<UTexture> *)(this->TextureValues).AllocatorInstance.Data,
             (this->TextureValues).ArrayNum);
  pFVar1 = (this->TextureValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DoubleVectorValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicSwitchValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticSwitchValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorPrimitiveDataIndexValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarPrimitiveDataIndexValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar3 = 10;
  pTVar2 = (TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)&this->ScalarPrimitiveDataIndexValues;
  do {
    lVar3 = lVar3 + -1;
    *(undefined4 *)((longlong)(pTVar2 + 0xffffffffffffffff) + 0x30) = 0;
    if (*(ForElementType<FSetElementId> *)((longlong)(pTVar2 + 0xffffffffffffffff) + 0x28) !=
        (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)*(ForElementType<FSetElementId> *)
                             ((longlong)(pTVar2 + 0xffffffffffffffff) + 0x28));
    }
    TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x20U));
    pTVar2 = (TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x20U);
  } while (lVar3 != 0);
  return;
}

// operator= @ 147ef29d0

FMaterialCachedExpressionData * __thiscall
FMaterialCachedExpressionData::operator=
          (FMaterialCachedExpressionData *this,FMaterialCachedExpressionData *param_1)

{
  int *piVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TSoftObjectPtr<UTexture>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TSoftObjectPtr<UTextureCollection>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TSoftObjectPtr<UMaterialParameterCollection>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TSoftObjectPtr<UFont>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TSoftObjectPtr<USparseVolumeTexture>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<TObjectPtr<UTextureCollection>,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<TObjectPtr<UClass>,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FMaterialFunctionInfo,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FMaterialParameterCollectionInfo,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<TObjectPtr<UMaterialCacheVirtualTextureTag>,TSizedDefaultAllocator<32>_> *pTVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FMaterialFunctionInfo *pFVar19;
  FMaterialParameterCollectionInfo *pFVar20;
  TReferenceControllerBase<1> *pTVar21;
  FMaterialLayerStackFunctionsCache *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  uint uVar24;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  ForElementType<FSetElementId> *pFVar25;
  longlong lVar26;
  TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  longlong lVar27;
  
  pFVar25 = &param_1->RuntimeEntries[0].ParameterInfoSet.Hash;
  lVar27 = (longlong)this - (longlong)param_1;
  lVar26 = 10;
  do {
    this_01 = (TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(lVar27 + -0x38 + (longlong)pFVar25);
    if (this_01 !=
        (TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)&pFVar25[-4].SecondaryData) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)((longlong)pFVar25 + lVar27),
                 (int *)(lVar27 + 0x10 + (longlong)pFVar25),pFVar25,*(int *)pFVar25[1].InlineData);
      iVar17 = *(int *)pFVar25[-3].InlineData;
      TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this_01,iVar17);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar17,(ForAnyElementType *)this_01,
                 (int *)(lVar27 + -0x30 + (longlong)pFVar25),
                 (int *)(lVar27 + -0x2c + (longlong)pFVar25));
      this_00 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar27 + -0x28 + (longlong)pFVar25);
      *(undefined4 *)(lVar27 + -8 + (longlong)pFVar25) = *(undefined4 *)&pFVar25[-1].SecondaryData;
      *(undefined4 *)(lVar27 + -4 + (longlong)pFVar25) =
           *(undefined4 *)&pFVar25[-1].SecondaryData.field_0x4;
      if (this_00 != (TBitArray<FDefaultBitArrayAllocator> *)&pFVar25[-3].SecondaryData) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  (this_00,(TBitArray<FDefaultBitArrayAllocator> *)&pFVar25[-3].SecondaryData);
      }
      if (iVar17 != 0) {
        memcpy(*(void **)this_01,(void *)pFVar25[-4].SecondaryData,(longlong)iVar17 * 0x18);
      }
    }
    pFVar25 = pFVar25 + 5;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ScalarPrimitiveDataIndexValues,&param_1->ScalarPrimitiveDataIndexValues);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->VectorPrimitiveDataIndexValues,&param_1->VectorPrimitiveDataIndexValues);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->ScalarValues,&param_1->ScalarValues);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (&this->StaticSwitchValues,&param_1->StaticSwitchValues);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (&this->DynamicSwitchValues,&param_1->DynamicSwitchValues);
  pTVar2 = &this->VectorValues;
  if (pTVar2 != &param_1->VectorValues) {
    iVar17 = (param_1->VectorValues).ArrayNum;
    piVar1 = &(this->VectorValues).ArrayMax;
    pFVar18 = (param_1->VectorValues).AllocatorInstance.Data;
    (this->VectorValues).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar17,*piVar1,&pTVar2->AllocatorInstance,iVar17,piVar1);
      if (iVar17 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar18,(longlong)iVar17 << 4);
      }
    }
  }
  pTVar3 = &this->DoubleVectorValues;
  if (pTVar3 != &param_1->DoubleVectorValues) {
    iVar17 = (param_1->DoubleVectorValues).ArrayNum;
    piVar1 = &(this->DoubleVectorValues).ArrayMax;
    pFVar18 = (param_1->DoubleVectorValues).AllocatorInstance.Data;
    (this->DoubleVectorValues).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,iVar17,*piVar1,&pTVar3->AllocatorInstance,iVar17,piVar1);
      if (iVar17 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar18,(longlong)iVar17 << 5);
      }
    }
  }
  pTVar4 = &this->TextureValues;
  if (pTVar4 != &param_1->TextureValues) {
    DestructItems<TSoftObjectPtr<UTexture>,int>
              ((TSoftObjectPtr<UTexture> *)(pTVar4->AllocatorInstance).Data,
               (this->TextureValues).ArrayNum);
    iVar17 = (param_1->TextureValues).ArrayNum;
    piVar1 = &(this->TextureValues).ArrayMax;
    pFVar18 = (param_1->TextureValues).AllocatorInstance.Data;
    (this->TextureValues).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar17,*piVar1,&pTVar4->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TSoftObjectPtr<UTexture>,TSoftObjectPtr<UTexture>,int>
                ((pTVar4->AllocatorInstance).Data,(TSoftObjectPtr<UTexture> *)pFVar18,iVar17);
    }
  }
  pTVar5 = &this->TextureCollectionValues;
  if (pTVar5 != &param_1->TextureCollectionValues) {
    DestructItems<TSoftObjectPtr<UTextureCollection>,int>
              ((TSoftObjectPtr<UTextureCollection> *)(pTVar5->AllocatorInstance).Data,
               (this->TextureCollectionValues).ArrayNum);
    iVar17 = (param_1->TextureCollectionValues).ArrayNum;
    piVar1 = &(this->TextureCollectionValues).ArrayMax;
    pFVar18 = (param_1->TextureCollectionValues).AllocatorInstance.Data;
    (this->TextureCollectionValues).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar17,*piVar1,&pTVar5->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TSoftObjectPtr<UTextureCollection>,TSoftObjectPtr<UTextureCollection>,int>
                ((pTVar5->AllocatorInstance).Data,(TSoftObjectPtr<UTextureCollection> *)pFVar18,
                 iVar17);
    }
  }
  pTVar6 = &this->ParameterCollectionValues;
  if (pTVar6 != &param_1->ParameterCollectionValues) {
    DestructItems<TSoftObjectPtr<UMaterialParameterCollection>,int>
              ((TSoftObjectPtr<UMaterialParameterCollection> *)(pTVar6->AllocatorInstance).Data,
               (this->ParameterCollectionValues).ArrayNum);
    iVar17 = (param_1->ParameterCollectionValues).ArrayNum;
    piVar1 = &(this->ParameterCollectionValues).ArrayMax;
    pFVar18 = (param_1->ParameterCollectionValues).AllocatorInstance.Data;
    (this->ParameterCollectionValues).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar17,*piVar1,&pTVar6->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TSoftObjectPtr<UMaterialParameterCollection>,TSoftObjectPtr<UMaterialParameterCollection>,int>
                ((pTVar6->AllocatorInstance).Data,
                 (TSoftObjectPtr<UMaterialParameterCollection> *)pFVar18,iVar17);
    }
  }
  pTVar7 = &this->FontValues;
  if (pTVar7 != &param_1->FontValues) {
    DestructItems<TSoftObjectPtr<UFont>,int>
              ((TSoftObjectPtr<UFont> *)(pTVar7->AllocatorInstance).Data,(this->FontValues).ArrayNum
              );
    iVar17 = (param_1->FontValues).ArrayNum;
    piVar1 = &(this->FontValues).ArrayMax;
    pFVar18 = (param_1->FontValues).AllocatorInstance.Data;
    (this->FontValues).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar17,*piVar1,&pTVar7->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TSoftObjectPtr<UFont>,TSoftObjectPtr<UFont>,int>
                ((pTVar7->AllocatorInstance).Data,(TSoftObjectPtr<UFont> *)pFVar18,iVar17);
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->FontPageValues,&param_1->FontPageValues)
  ;
  pTVar8 = &this->RuntimeVirtualTextureValues;
  if (pTVar8 != &param_1->RuntimeVirtualTextureValues) {
    DestructItems<TSoftObjectPtr<URuntimeVirtualTexture>,int>
              ((TSoftObjectPtr<URuntimeVirtualTexture> *)(pTVar8->AllocatorInstance).Data,
               (this->RuntimeVirtualTextureValues).ArrayNum);
    iVar17 = (param_1->RuntimeVirtualTextureValues).ArrayNum;
    piVar1 = &(this->RuntimeVirtualTextureValues).ArrayMax;
    pFVar18 = (param_1->RuntimeVirtualTextureValues).AllocatorInstance.Data;
    (this->RuntimeVirtualTextureValues).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar17,*piVar1,&pTVar8->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TSoftObjectPtr<URuntimeVirtualTexture>,TSoftObjectPtr<URuntimeVirtualTexture>,int>
                ((pTVar8->AllocatorInstance).Data,(TSoftObjectPtr<URuntimeVirtualTexture> *)pFVar18,
                 iVar17);
    }
  }
  pTVar9 = &this->SparseVolumeTextureValues;
  if (pTVar9 != &param_1->SparseVolumeTextureValues) {
    DestructItems<TSoftObjectPtr<USparseVolumeTexture>,int>
              ((TSoftObjectPtr<USparseVolumeTexture> *)(pTVar9->AllocatorInstance).Data,
               (this->SparseVolumeTextureValues).ArrayNum);
    iVar17 = (param_1->SparseVolumeTextureValues).ArrayNum;
    piVar1 = &(this->SparseVolumeTextureValues).ArrayMax;
    pFVar18 = (param_1->SparseVolumeTextureValues).AllocatorInstance.Data;
    (this->SparseVolumeTextureValues).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar17,*piVar1,&pTVar9->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TSoftObjectPtr<USparseVolumeTexture>,TSoftObjectPtr<USparseVolumeTexture>,int>
                ((pTVar9->AllocatorInstance).Data,(TSoftObjectPtr<USparseVolumeTexture> *)pFVar18,
                 iVar17);
    }
  }
  pTVar10 = &this->ReferencedTextures;
  if (pTVar10 != &param_1->ReferencedTextures) {
    iVar17 = (param_1->ReferencedTextures).ArrayNum;
    piVar1 = &(this->ReferencedTextures).ArrayMax;
    pFVar18 = (param_1->ReferencedTextures).AllocatorInstance.Data;
    (this->ReferencedTextures).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar17,*piVar1,&pTVar10->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                ((pTVar10->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar18,iVar17);
    }
  }
  pTVar11 = &this->ReferencedTextureCollections;
  if (pTVar11 != &param_1->ReferencedTextureCollections) {
    iVar17 = (param_1->ReferencedTextureCollections).ArrayNum;
    piVar1 = &(this->ReferencedTextureCollections).ArrayMax;
    pFVar18 = (param_1->ReferencedTextureCollections).AllocatorInstance.Data;
    (this->ReferencedTextureCollections).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar17,*piVar1,&pTVar11->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TObjectPtr<UTextureCollection>,TObjectPtr<UTextureCollection>,int>
                ((pTVar11->AllocatorInstance).Data,(TObjectPtr<UTextureCollection> *)pFVar18,iVar17)
      ;
    }
  }
  pTVar12 = &this->ReferencedExternalCodeExpressionClasses;
  if (pTVar12 != &param_1->ReferencedExternalCodeExpressionClasses) {
    iVar17 = (param_1->ReferencedExternalCodeExpressionClasses).ArrayNum;
    piVar1 = &(this->ReferencedExternalCodeExpressionClasses).ArrayMax;
    pFVar18 = (param_1->ReferencedExternalCodeExpressionClasses).AllocatorInstance.Data;
    (this->ReferencedExternalCodeExpressionClasses).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar17,*piVar1,&pTVar12->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TObjectPtr<UClass>,TObjectPtr<UClass>,int>
                ((pTVar12->AllocatorInstance).Data,(TObjectPtr<UClass> *)pFVar18,iVar17);
    }
  }
  pTVar13 = &this->FunctionInfos;
  if (pTVar13 != &param_1->FunctionInfos) {
    iVar17 = (param_1->FunctionInfos).ArrayNum;
    piVar1 = &(this->FunctionInfos).ArrayMax;
    pFVar19 = (FMaterialFunctionInfo *)(param_1->FunctionInfos).AllocatorInstance.Data;
    (this->FunctionInfos).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar17,*piVar1,&pTVar13->AllocatorInstance,iVar17,piVar1);
      ConstructItems<FMaterialFunctionInfo,FMaterialFunctionInfo,int>
                ((pTVar13->AllocatorInstance).Data,pFVar19,iVar17);
    }
  }
  pTVar14 = &this->ParameterCollectionInfos;
  this->FunctionInfosStateCRC = param_1->FunctionInfosStateCRC;
  if (pTVar14 != &param_1->ParameterCollectionInfos) {
    iVar17 = (param_1->ParameterCollectionInfos).ArrayNum;
    piVar1 = &(this->ParameterCollectionInfos).ArrayMax;
    pFVar20 = (FMaterialParameterCollectionInfo *)
              (param_1->ParameterCollectionInfos).AllocatorInstance.Data;
    (this->ParameterCollectionInfos).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar17,*piVar1,&pTVar14->AllocatorInstance,iVar17,piVar1);
      ConstructItems<FMaterialParameterCollectionInfo,FMaterialParameterCollectionInfo,int>
                ((pTVar14->AllocatorInstance).Data,pFVar20,iVar17);
    }
  }
  pTVar15 = &this->GrassTypes;
  if (pTVar15 != &param_1->GrassTypes) {
    iVar17 = (param_1->GrassTypes).ArrayNum;
    piVar1 = &(this->GrassTypes).ArrayMax;
    pFVar18 = (param_1->GrassTypes).AllocatorInstance.Data;
    (this->GrassTypes).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar17,*piVar1,&pTVar15->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TObjectPtr<ULandscapeGrassType>,TObjectPtr<ULandscapeGrassType>,int>
                ((pTVar15->AllocatorInstance).Data,(TObjectPtr<ULandscapeGrassType> *)pFVar18,iVar17
                );
    }
  }
  pTVar16 = &this->MaterialCacheTags;
  if (pTVar16 != &param_1->MaterialCacheTags) {
    iVar17 = (param_1->MaterialCacheTags).ArrayNum;
    piVar1 = &(this->MaterialCacheTags).ArrayMax;
    pFVar18 = (param_1->MaterialCacheTags).AllocatorInstance.Data;
    (this->MaterialCacheTags).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar17,*piVar1,&pTVar16->AllocatorInstance,iVar17,piVar1);
      ConstructItems<TObjectPtr<UMaterialCacheVirtualTextureTag>,TObjectPtr<UMaterialCacheVirtualTextureTag>,int>
                ((pTVar16->AllocatorInstance).Data,
                 (TObjectPtr<UMaterialCacheVirtualTextureTag> *)pFVar18,iVar17);
    }
  }
  TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MaterialLayers).Layers,&(param_1->MaterialLayers).Layers);
  TArray<TObjectPtr<UMaterialFunctionInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MaterialLayers).Blends,&(param_1->MaterialLayers).Blends);
  pTVar21 = (param_1->MaterialLayers).LayerStackCache.SharedReferenceCount.ReferenceController;
  pFVar22 = (param_1->MaterialLayers).LayerStackCache.Object;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar23 = (this->MaterialLayers).LayerStackCache.SharedReferenceCount.ReferenceController;
  (this->MaterialLayers).LayerStackCache.Object = pFVar22;
  (this->MaterialLayers).LayerStackCache.SharedReferenceCount.ReferenceController = pTVar21;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->DynamicParameterNames,&param_1->DynamicParameterNames);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (&this->QualityLevelsUsed,&param_1->QualityLevelsUsed);
  this->MaterialCacheUVCoordinatesUsedMask = param_1->MaterialCacheUVCoordinatesUsedMask;
  uVar24 = (ZPULL(*(undefined4 *)&this->field_0x4d0,0,1) ^ param_1->bHasMaterialLayers) & 1 ^
           *(undefined4 *)&this->field_0x4d0;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 2 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 4 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 8 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x10 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x20 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x40 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x80 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x100 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x200 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x400 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x800 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x1000 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  uVar24 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x2000 ^ uVar24;
  *(uint *)&this->field_0x4d0 = uVar24;
  *(uint *)&this->field_0x4d0 = (uVar24 ^ *(uint *)&param_1->field_0x4d0) & 0x4000 ^ uVar24;
  this->PropertyConnectedBitmask_DEPRECATED = param_1->PropertyConnectedBitmask_DEPRECATED;
  this->PropertyConnectedMask = param_1->PropertyConnectedMask;
  return this;
}

// AddReferencedObjects @ 147ef4a70

void __thiscall
FMaterialCachedExpressionData::AddReferencedObjects
          (FMaterialCachedExpressionData *this,FReferenceCollector *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(param_1->_padding_ + 0x20))(param_1,&this->ReferencedTextures);
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)
                     &this->ReferencedTextureCollections);
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)&this->GrassTypes);
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)&this->MaterialCacheTags);
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)&this->MaterialLayers);
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)
                     &(this->MaterialLayers).Blends);
  iVar2 = (this->FunctionInfos).ArrayNum;
  pFVar3 = (this->FunctionInfos).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->FunctionInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMaterialFunctionInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FReferenceCollector::AddStableReferenceFwd(param_1,(FObjectPtr *)(pFVar3 + 0x10));
    pFVar3 = pFVar3 + 0x18;
  }
  iVar2 = (this->ParameterCollectionInfos).ArrayNum;
  pFVar3 = (this->ParameterCollectionInfos).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->ParameterCollectionInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMaterialParameterCollectionInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FReferenceCollector::AddStableReferenceFwd(param_1,(FObjectPtr *)(pFVar3 + 0x10));
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

// AppendReferencedFunctionIdsTo @ 147ef5410

void __thiscall
FMaterialCachedExpressionData::AppendReferencedFunctionIdsTo
          (FMaterialCachedExpressionData *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  FGuid *pFVar1;
  int iVar2;
  FGuid *pFVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = (this->FunctionInfos).ArrayNum + param_1->ArrayNum;
  if (-1 < (int)uVar4) {
    if (param_1->ArrayMax < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar4,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    iVar2 = (this->FunctionInfos).ArrayNum;
    pFVar3 = (FGuid *)(this->FunctionInfos).AllocatorInstance.Data;
    pFVar1 = (FGuid *)((longlong)pFVar3 + (longlong)iVar2 * 0x18);
    while( true ) {
      if ((this->FunctionInfos).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FMaterialFunctionInfo_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>(param_1,pFVar3);
      pFVar3 = (FGuid *)&pFVar3[1].C;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// AppendReferencedParameterCollectionIdsTo @ 147ef54d0

void __thiscall
FMaterialCachedExpressionData::AppendReferencedParameterCollectionIdsTo
          (FMaterialCachedExpressionData *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  FGuid *pFVar1;
  int iVar2;
  FGuid *pFVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = (this->ParameterCollectionInfos).ArrayNum + param_1->ArrayNum;
  if (-1 < (int)uVar4) {
    if (param_1->ArrayMax < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar4,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    iVar2 = (this->ParameterCollectionInfos).ArrayNum;
    pFVar3 = (FGuid *)(this->ParameterCollectionInfos).AllocatorInstance.Data;
    pFVar1 = (FGuid *)((longlong)pFVar3 + (longlong)iVar2 * 0x18);
    while( true ) {
      if ((this->ParameterCollectionInfos).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FMaterialParameterCollectionInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>(param_1,pFVar3);
      pFVar3 = (FGuid *)&pFVar3[1].C;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// FindParameterIndex @ 147ef7b40

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

int __thiscall
FMaterialCachedExpressionData::FindParameterIndex
          (FMaterialCachedExpressionData *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2)

{
  undefined4 uVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<FSetElementId> FVar8;
  FMaterialCachedParameterEntry *pFVar9;
  int iVar10;
  FMaterialParameterInfo local_18;
  
  if (param_1 < NumRuntime) {
    pFVar9 = this->RuntimeEntries + param_1;
  }
  else {
    pFVar9 = &FMaterialCachedParameterEntry::EmptyData;
  }
  uVar1 = (param_2->Name).ComparisonIndex;
  uVar2 = (param_2->Association).Value;
  uVar3 = (param_2->Name).Number;
  iVar4 = param_2->Index;
  local_18.Name.Number = uVar3;
  local_18.Name.ComparisonIndex.Value = uVar1;
  local_18.Association.Value = uVar2;
  local_18.Index = iVar4;
  uVar6 = ::GetTypeHash(&local_18);
  if (*(int *)&(pFVar9->ParameterInfoSet).Elements.field_0x8 !=
      *(int *)&(pFVar9->ParameterInfoSet).Elements.field_0x34) {
    FVar8 = (pFVar9->ParameterInfoSet).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(pFVar9->ParameterInfoSet).Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 +
                     (ulonglong)((pFVar9->ParameterInfoSet).HashSize - 1U & uVar6) * 4);
    if (iVar10 != -1) {
      lVar5 = *(longlong *)&(pFVar9->ParameterInfoSet).Elements;
      do {
        lVar7 = (longlong)iVar10;
        if ((((*(uint *)(lVar5 + lVar7 * 0x18) == uVar1) &&
             (*(uint *)(lVar5 + 4 + lVar7 * 0x18) == uVar3)) &&
            (*(uchar *)(lVar5 + 8 + lVar7 * 0x18) == uVar2)) &&
           (*(int *)(lVar5 + 0xc + lVar7 * 0x18) == iVar4)) {
          return iVar10;
        }
        iVar10 = *(int *)(lVar5 + 0x10 + lVar7 * 0x18);
      } while (iVar10 != -1);
    }
  }
  return -1;
}

// GetAllGlobalParameterInfoOfType @ 147ef8040

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
FMaterialCachedExpressionData::GetAllGlobalParameterInfoOfType
          (FMaterialCachedExpressionData *this,EMaterialParameterType param_1,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  FMaterialCachedParameterEntry *pFVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  if (param_1 < NumRuntime) {
    pFVar13 = this->RuntimeEntries + param_1;
  }
  else {
    pFVar13 = &FMaterialCachedParameterEntry::EmptyData;
  }
  iVar12 = *(int *)&(pFVar13->ParameterInfoSet).Elements.field_0x8 -
           *(int *)&(pFVar13->ParameterInfoSet).Elements.field_0x34;
  uVar10 = param_2->ArrayNum + iVar12;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar10,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  uVar10 = param_3->ArrayNum + iVar12;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar2 = &param_3->ArrayMax;
  if (*piVar2 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar10,&param_3->AllocatorInstance,param_3->ArrayNum,piVar2);
  }
  iVar12 = *(int *)&(pFVar13->ParameterInfoSet).Elements.field_0x28;
  TStack_50.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar13->ParameterInfoSet).Elements.field_0x10;
  iVar14 = 0;
  uVar10 = 1;
  iVar15 = 0;
  TStack_50.CurrentBitIndex = 0;
  if (iVar12 != 0) {
    puVar16 = *(uint **)&(pFVar13->ParameterInfoSet).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_50.Array;
    }
    uVar5 = *puVar16;
    while (uVar5 == 0) {
      lVar11 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      TStack_50.CurrentBitIndex = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147ef8184;
      uVar5 = puVar16[lVar11 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = iVar15 + -1 + (int)lVar11;
    if (iVar12 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar12;
    }
  }
LAB_147ef8184:
  TStack_50._padding_ = CONCAT44(uVar10,iVar14);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar15;
  if (TStack_50.CurrentBitIndex < *(int *)&(pFVar13->ParameterInfoSet).Elements.field_0x28) {
    do {
      lVar11 = *(longlong *)&(pFVar13->ParameterInfoSet).Elements;
      if (*(char *)(lVar11 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18) == '\x02') {
        pFVar3 = (FScriptContainerElement *)(lVar11 + (longlong)TStack_50.CurrentBitIndex * 0x18);
        pFVar6 = (param_2->AllocatorInstance).Data;
        if (((pFVar6 <= pFVar3) && (pFVar3 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = param_2->ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar12 + 1;
        uVar8 = *(undefined8 *)(pFVar3 + 8);
        pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
        *(undefined8 *)pFVar6 = *(undefined8 *)pFVar3;
        *(undefined8 *)(pFVar6 + 8) = uVar8;
        pFVar3 = (param_3->AllocatorInstance).Data;
        if (((pFVar3 < (FScriptContainerElement *)0x15199b131) &&
            (&EmptyGuid < (FGuid *)(pFVar3 + (longlong)*piVar2 * 0x10))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = param_3->ArrayNum;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&param_3->AllocatorInstance,piVar2);
        }
        param_3->ArrayNum = iVar12 + 1;
        *(FGuid *)((param_3->AllocatorInstance).Data + (longlong)iVar12 * 0x10) = EmptyGuid;
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// GetAllGlobalParametersOfType @ 147ef83c0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
FMaterialCachedExpressionData::GetAllGlobalParametersOfType
          (FMaterialCachedExpressionData *this,EMaterialParameterType param_1,
          TMap<FMaterialParameterInfo,FMaterialParameterMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>_>
          *param_2)

{
  longlong lVar1;
  uint uVar2;
  FMaterialParameterMetadata *pFVar3;
  int iVar4;
  FMaterialParameterInfo *pFVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  FMaterialCachedParameterEntry *pFVar9;
  
  if (param_1 < NumRuntime) {
    pFVar9 = this->RuntimeEntries + param_1;
  }
  else {
    pFVar9 = &FMaterialCachedParameterEntry::EmptyData;
  }
  iVar4 = *(int *)&(pFVar9->ParameterInfoSet).Elements.field_0x8 -
          *(int *)&(pFVar9->ParameterInfoSet).Elements.field_0x34;
  TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
             *)param_2,(*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34) + iVar4);
  iVar7 = 0;
  lVar6 = (longlong)iVar4;
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      pFVar5 = (FMaterialParameterInfo *)(*(longlong *)&(pFVar9->ParameterInfoSet).Elements + lVar8)
      ;
      if ((pFVar5->Association).Value == '\x02') {
        uVar2 = ::GetTypeHash(pFVar5);
        iVar4 = TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FMaterialParameterInfo>
                          ((TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
                            *)param_2,uVar2,pFVar5);
        if ((iVar4 == -1) || (lVar1 = *(longlong *)param_2 + (longlong)iVar4 * 0x48, lVar1 == 0)) {
          pFVar3 = TMapBase<FMaterialParameterInfo,FMaterialParameterMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>_>
                   ::EmplaceByHash<FMaterialParameterInfo_const_&>
                             ((TMapBase<FMaterialParameterInfo,FMaterialParameterMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>_>
                               *)param_2,uVar2,pFVar5);
        }
        else {
          pFVar3 = (FMaterialParameterMetadata *)(lVar1 + 0x10);
        }
        if ((pFVar3->Value).Type == None) {
          GetParameterValueByIndex(this,param_1,iVar7,pFVar3);
        }
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 0x18;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// GetAllParameterInfoOfType @ 147ef84d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
FMaterialCachedExpressionData::GetAllParameterInfoOfType
          (FMaterialCachedExpressionData *this,EMaterialParameterType param_1,
          TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  FMaterialCachedParameterEntry *pFVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  if (param_1 < NumRuntime) {
    pFVar13 = this->RuntimeEntries + param_1;
  }
  else {
    pFVar13 = &FMaterialCachedParameterEntry::EmptyData;
  }
  iVar12 = *(int *)&(pFVar13->ParameterInfoSet).Elements.field_0x8 -
           *(int *)&(pFVar13->ParameterInfoSet).Elements.field_0x34;
  uVar10 = param_2->ArrayNum + iVar12;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar10,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  uVar10 = param_3->ArrayNum + iVar12;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar2 = &param_3->ArrayMax;
  if (*piVar2 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar10,&param_3->AllocatorInstance,param_3->ArrayNum,piVar2);
  }
  iVar12 = *(int *)&(pFVar13->ParameterInfoSet).Elements.field_0x28;
  TStack_50.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar13->ParameterInfoSet).Elements.field_0x10;
  iVar14 = 0;
  uVar10 = 1;
  iVar15 = 0;
  TStack_50.CurrentBitIndex = 0;
  if (iVar12 != 0) {
    puVar16 = *(uint **)&(pFVar13->ParameterInfoSet).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_50.Array;
    }
    uVar5 = *puVar16;
    while (uVar5 == 0) {
      lVar11 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      TStack_50.CurrentBitIndex = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147ef8614;
      uVar5 = puVar16[lVar11 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = iVar15 + -1 + (int)lVar11;
    if (iVar12 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar12;
    }
  }
LAB_147ef8614:
  TStack_50._padding_ = CONCAT44(uVar10,iVar14);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar15;
  if (TStack_50.CurrentBitIndex < *(int *)&(pFVar13->ParameterInfoSet).Elements.field_0x28) {
    do {
      pFVar3 = (FScriptContainerElement *)
               (*(longlong *)&(pFVar13->ParameterInfoSet).Elements +
               (longlong)TStack_50.CurrentBitIndex * 0x18);
      pFVar6 = (param_2->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar3) && (pFVar3 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar12 + 1;
      uVar8 = *(undefined8 *)(pFVar3 + 8);
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar6 + 8) = uVar8;
      pFVar3 = (param_3->AllocatorInstance).Data;
      if (((pFVar3 < (FScriptContainerElement *)0x15199b131) &&
          (&EmptyGuid < (FGuid *)(pFVar3 + (longlong)*piVar2 * 0x10))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = param_3->ArrayNum;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&param_3->AllocatorInstance,piVar2);
      }
      param_3->ArrayNum = iVar12 + 1;
      *(FGuid *)((param_3->AllocatorInstance).Data + (longlong)iVar12 * 0x10) = EmptyGuid;
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// GetAllParametersOfType @ 147ef8840

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
FMaterialCachedExpressionData::GetAllParametersOfType
          (FMaterialCachedExpressionData *this,EMaterialParameterType param_1,
          TMap<FMaterialParameterInfo,FMaterialParameterMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>_>
          *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  FMaterialCachedParameterEntry *pFVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int local_res10 [2];
  longlong local_res18;
  FSparseArrayAllocationInfo local_78 [3];
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (param_1 < NumRuntime) {
    pFVar9 = this->RuntimeEntries + param_1;
  }
  else {
    pFVar9 = &FMaterialCachedParameterEntry::EmptyData;
  }
  iVar10 = *(int *)&(pFVar9->ParameterInfoSet).Elements.field_0x8 -
           *(int *)&(pFVar9->ParameterInfoSet).Elements.field_0x34;
  TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
             *)param_2,(iVar10 - *(int *)&param_2->field_0x34) + *(int *)&param_2->field_0x8);
  iVar11 = 0;
  local_res18 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar12 = 0;
    do {
      lVar8 = *(longlong *)&(pFVar9->ParameterInfoSet).Elements;
      if (*(int *)&param_2->field_0x34 == 0) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x48,8,1,(ForAnyElementType *)param_2,(int *)&param_2->field_0x8,
                            (int *)&param_2->field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
      }
      else {
        iVar10 = *(int *)&param_2->field_0x30;
        iVar1 = *(int *)&param_2->field_0x34 + -1;
        iVar3 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar10 * 0x48);
        *(int *)&param_2->field_0x30 = iVar3;
        *(int *)&param_2->field_0x34 = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar3 * 0x48) = 0xffffffff;
        }
      }
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)param_2,local_78,iVar10);
      pvVar5 = local_78[0].Pointer;
      if (local_78[0].Pointer !=
          (TSparseSetElement<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>_> *)0x0) {
        puVar2 = (undefined8 *)(lVar8 + lVar12);
        uVar4 = puVar2[1];
        *(undefined8 *)local_78[0].Pointer = *puVar2;
        *(undefined8 *)((longlong)local_78[0].Pointer + 8) = uVar4;
        local_48 = 0xff;
        *(undefined8 *)((longlong)local_78[0].Pointer + 0x10) = 0;
        *(undefined8 *)((longlong)local_78[0].Pointer + 0x18) = 0;
        *(undefined8 *)((longlong)local_78[0].Pointer + 0x20) = 0;
        *(undefined8 *)((longlong)local_78[0].Pointer + 0x28) = 0;
        uStack_40 = 0xffffffff;
        *(undefined8 *)((longlong)local_78[0].Pointer + 0x30) = 0xff;
        *(undefined8 *)((longlong)local_78[0].Pointer + 0x38) = 0xffffffff;
        *(undefined4 *)((longlong)local_78[0].Pointer + 0x40) = 0xffffffff;
      }
      local_res10[0] = local_78[0].Index;
      uVar7 = ::GetTypeHash(local_78[0].Pointer);
      bVar6 = TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
              ::TryReplaceExisting
                        ((TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
                          *)param_2,uVar7,pvVar5,local_res10,(bool *)0x0);
      lVar8 = (longlong)local_res10[0];
      if (!bVar6) {
        TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
        ::RehashOrLink((TSet<TTuple<FMaterialParameterInfo,FMaterialParameterMetadata>,TDefaultMapHashableKeyFuncs<FMaterialParameterInfo,FMaterialParameterMetadata,0>,FDefaultSetAllocator>
                        *)param_2,uVar7,pvVar5,local_res10[0]);
      }
      GetParameterValueByIndex
                (this,param_1,iVar11,
                 (FMaterialParameterMetadata *)(*(longlong *)param_2 + (lVar8 * 9 + 2) * 8));
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 0x18;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  return;
}

// GetExpressionGuid @ 147efae70

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

FGuid * __thiscall
FMaterialCachedExpressionData::GetExpressionGuid
          (FMaterialCachedExpressionData *this,EMaterialParameterType param_1,int param_2)

{
  return &EmptyGuid;
}

// GetExternalCodeReferencesHash @ 147efae80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMaterialCachedExpressionData::GetExternalCodeReferencesHash
          (FMaterialCachedExpressionData *this,FSHAHash *param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  MaterialExternalCodeRegistry *this_00;
  FMaterialExternalCodeDeclaration *this_01;
  FString *pFVar7;
  FName *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  FString local_f0;
  FString local_e0;
  undefined4 local_d0;
  FSHA1 local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  FSHA1::FSHA1(&local_c8);
  pFVar11 = (this->ReferencedExternalCodeExpressionClasses).AllocatorInstance.Data;
  iVar3 = (this->ReferencedExternalCodeExpressionClasses).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ReferencedExternalCodeExpressionClasses).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UClass>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_f8);
    }
    if (pFVar11 == pFVar1) break;
    pUVar6 = *(UClass **)pFVar11;
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
    pUVar5 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar5 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UMaterialExpressionExternalCodeBase_NoRegister();
      iVar4 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) {
        pFVar7 = GetTypeName<UMaterialExpressionExternalCodeBase>(&local_f0);
        pwVar9 = L"";
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        pFVar7 = GetFullNameForCastLogError<UObject_const_>(&local_e0,pUVar5);
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar9,pwVar10);
      }
      pFVar8 = *(FName **)&pUVar5[4].field_0x10;
      iVar4 = *(int *)&pUVar5[4].field_0x18;
      pFVar2 = pFVar8 + iVar4;
      while( true ) {
        if (*(int *)&pUVar5[4].field_0x18 != iVar4) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_f8);
        }
        if (pFVar8 == pFVar2) break;
        this_00 = MaterialExternalCodeRegistry::Get();
        this_01 = MaterialExternalCodeRegistry::FindExternalCode(this_00,pFVar8);
        if (this_01 != (FMaterialExternalCodeDeclaration *)0x0) {
          FMaterialExternalCodeDeclaration::UpdateHash(this_01,&local_c8);
        }
        pFVar8 = pFVar8 + 1;
      }
    }
    pFVar11 = pFVar11 + 8;
  }
  FSHA1::Final(&local_c8);
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = 0;
  local_e0.Data.ArrayMax = 0;
  local_d0 = 0;
  FSHA1::GetHash(&local_c8,(uchar *)&local_e0);
  *(FScriptContainerElement **)local_f0.Data.AllocatorInstance.Data =
       local_e0.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_f0.Data.AllocatorInstance.Data + 8) = local_e0.Data._8_8_;
  *(undefined4 *)(local_f0.Data.AllocatorInstance.Data + 0x10) = local_d0;
  FSHA1::~FSHA1(&local_c8);
  return;
}

// GetParameterValue @ 147efc3e0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
FMaterialCachedExpressionData::GetParameterValue
          (FMaterialCachedExpressionData *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterMetadata *param_3)

{
  undefined4 uVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  FMaterialCachedParameterEntry *pFVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  FMaterialParameterInfo local_38;
  
  if (param_1 < NumRuntime) {
    pFVar8 = this->RuntimeEntries + param_1;
  }
  else {
    pFVar8 = &FMaterialCachedParameterEntry::EmptyData;
  }
  uVar1 = (param_2->Name).ComparisonIndex;
  uVar2 = (param_2->Association).Value;
  uVar3 = (param_2->Name).Number;
  iVar4 = param_2->Index;
  local_38.Name.Number = uVar3;
  local_38.Name.ComparisonIndex.Value = uVar1;
  local_38.Association.Value = uVar2;
  local_38.Index = iVar4;
  uVar6 = ::GetTypeHash(&local_38);
  if (*(int *)&(pFVar8->ParameterInfoSet).Elements.field_0x8 !=
      *(int *)&(pFVar8->ParameterInfoSet).Elements.field_0x34) {
    FVar10 = (pFVar8->ParameterInfoSet).Hash.SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&(pFVar8->ParameterInfoSet).Hash;
    }
    iVar9 = *(int *)((longlong)FVar10 +
                    (ulonglong)((pFVar8->ParameterInfoSet).HashSize - 1U & uVar6) * 4);
    if (iVar9 != -1) {
      lVar5 = *(longlong *)&(pFVar8->ParameterInfoSet).Elements;
      do {
        lVar7 = (longlong)iVar9;
        if ((((*(uint *)(lVar5 + lVar7 * 0x18) == uVar1) &&
             (*(uint *)(lVar5 + 4 + lVar7 * 0x18) == uVar3)) &&
            (*(uchar *)(lVar5 + 8 + lVar7 * 0x18) == uVar2)) &&
           (*(int *)(lVar5 + 0xc + lVar7 * 0x18) == iVar4)) {
          if (iVar9 == -1) {
            return false;
          }
          GetParameterValueByIndex(this,param_1,iVar9,param_3);
          return true;
        }
        iVar9 = *(int *)(lVar5 + 0x10 + lVar7 * 0x18);
      } while (iVar9 != -1);
    }
  }
  return false;
}

// GetParameterValueByIndex @ 147efc650

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
FMaterialCachedExpressionData::GetParameterValueByIndex
          (FMaterialCachedExpressionData *this,EMaterialParameterType param_1,int param_2,
          FMaterialParameterMetadata *param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  FName FVar9;
  bool bVar10;
  uint uVar11;
  UTexture *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  undefined8 local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double dStack_e0;
  uint7 uStack_d7;
  double local_c0;
  double dStack_b8;
  undefined7 uStack_af;
  undefined4 uStack_9c;
  double local_98;
  double dStack_90;
  undefined7 uStack_87;
  undefined7 uStack_7f;
  double dStack_78;
  double local_70;
  double dStack_68;
  undefined7 uStack_5f;
  undefined7 uStack_37;
  
  lVar14 = (longlong)param_2;
  switch(param_1) {
  case Scalar:
    uVar11 = 0;
    if (param_2 < (this->ScalarValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (param_3->Value).field0_0x0.Float[0] =
         *(float *)((this->ScalarValues).AllocatorInstance.Data + lVar14 * 4);
    (param_3->Value).field0_0x0.EnumEntry.Number = uStack_f4;
    (param_3->Value).field0_0x0.Font.Page = iStack_f0;
    *(undefined4 *)((longlong)&(param_3->Value).field0_0x0 + 0xc) = uStack_ec;
    (param_3->Value).field0_0x0.Double[2] = local_e8;
    (param_3->Value).field0_0x0.Double[3] = dStack_e0;
    *(ulonglong *)&(param_3->Value).Type = (ulonglong)uStack_d7 << 8;
    uVar11 = 0;
    if (param_2 < (this->ScalarPrimitiveDataIndexValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_3->PrimitiveDataIndex =
         *(int *)((this->ScalarPrimitiveDataIndexValues).AllocatorInstance.Data + lVar14 * 4);
    break;
  case Vector:
    uVar11 = 0;
    if (param_2 < (this->VectorValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->VectorValues).AllocatorInstance.Data + lVar14 * 0x10;
    dVar2 = *(double *)(pFVar6 + 8);
    (param_3->Value).field0_0x0.Double[0] = *(double *)pFVar6;
    (param_3->Value).field0_0x0.Double[1] = dVar2;
    (param_3->Value).field0_0x0.Double[2] = local_c0;
    (param_3->Value).field0_0x0.Double[3] = dStack_b8;
    *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_af,1);
    uVar11 = 0;
    if (param_2 < (this->VectorPrimitiveDataIndexValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_3->PrimitiveDataIndex =
         *(int *)((this->VectorPrimitiveDataIndexValues).AllocatorInstance.Data + lVar14 * 4);
    break;
  case DoubleVector:
    uVar11 = 0;
    if (param_2 < (this->DoubleVectorValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->DoubleVectorValues).AllocatorInstance.Data;
    lVar14 = lVar14 * 0x20;
    dVar8 = *(double *)(pFVar6 + lVar14 + 8);
    dVar2 = *(double *)(pFVar6 + lVar14 + 0x10);
    dVar3 = *(double *)(pFVar6 + lVar14 + 0x18);
    (param_3->Value).field0_0x0.Double[0] = *(double *)(pFVar6 + lVar14);
    (param_3->Value).field0_0x0.Double[1] = dVar8;
    (param_3->Value).field0_0x0.Double[2] = dVar2;
    (param_3->Value).field0_0x0.Double[3] = dVar3;
    *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_37,2);
    break;
  case Texture:
    uVar11 = 0;
    if (param_2 < (this->TextureValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
             ((this->TextureValues).AllocatorInstance.Data + lVar14 * 0x28);
    pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
    if (pUVar12 == (UTexture *)0x0) {
      if ((pTVar1->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&pTVar1->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
        goto LAB_147efc947;
      }
LAB_147efc96f:
      pUVar12 = (UTexture *)0x0;
    }
    else {
LAB_147efc947:
      if (pUVar12 == (UTexture *)0x0) goto LAB_147efc96f;
      pUVar13 = Z_Construct_UClass_UTexture_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar13->_padding_)) goto LAB_147efc96f;
    }
    (param_3->Value).field0_0x0.Texture = pUVar12;
    (param_3->Value).field0_0x0.Double[1] = (double)CONCAT44(uStack_ec,iStack_f0);
    (param_3->Value).field0_0x0.Double[2] = local_e8;
    (param_3->Value).field0_0x0.Double[3] = dStack_e0;
    *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_d7,3);
    break;
  case TextureCollection:
    uVar11 = 0;
    if (param_2 < (this->TextureCollectionValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
             ((this->TextureCollectionValues).AllocatorInstance.Data + lVar14 * 0x28);
    pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
    if (pUVar12 == (UTexture *)0x0) {
      if ((pTVar1->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&pTVar1->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
        goto LAB_147efca21;
      }
LAB_147efca49:
      pUVar12 = (UTexture *)0x0;
    }
    else {
LAB_147efca21:
      if (pUVar12 == (UTexture *)0x0) goto LAB_147efca49;
      pUVar13 = Z_Construct_UClass_UTextureCollection_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar13->_padding_)) goto LAB_147efca49;
    }
    (param_3->Value).field0_0x0.Texture = pUVar12;
    (param_3->Value).field0_0x0.Double[1] = (double)CONCAT44(uStack_ec,iStack_f0);
    (param_3->Value).field0_0x0.Double[2] = local_e8;
    (param_3->Value).field0_0x0.Double[3] = dStack_e0;
    *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_d7,4);
    break;
  case Font:
    uVar11 = 0;
    if (param_2 < (this->FontPageValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar5 = *(undefined4 *)((this->FontPageValues).AllocatorInstance.Data + lVar14 * 4);
    uVar11 = 0;
    if (param_2 < (this->FontValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
             ((this->FontValues).AllocatorInstance.Data + lVar14 * 0x28);
    pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
    if (pUVar12 == (UTexture *)0x0) {
      if ((pTVar1->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&pTVar1->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
        goto LAB_147efcde3;
      }
LAB_147efce0b:
      pUVar12 = (UTexture *)0x0;
    }
    else {
LAB_147efcde3:
      if (pUVar12 == (UTexture *)0x0) goto LAB_147efce0b;
      pUVar13 = Z_Construct_UClass_UFont_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar13->_padding_)) goto LAB_147efce0b;
    }
    (param_3->Value).field0_0x0.Texture = pUVar12;
    (param_3->Value).field0_0x0.Double[1] = (double)CONCAT44(uStack_9c,uVar5);
    (param_3->Value).field0_0x0.Double[2] = local_98;
    (param_3->Value).field0_0x0.Double[3] = dStack_90;
    *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_87,5);
    break;
  case RuntimeVirtualTexture:
    uVar11 = 0;
    if (param_2 < (this->RuntimeVirtualTextureValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
             ((this->RuntimeVirtualTextureValues).AllocatorInstance.Data + lVar14 * 0x28);
    pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
    if (pUVar12 == (UTexture *)0x0) {
      if ((pTVar1->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&pTVar1->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
        goto LAB_147efcbd5;
      }
LAB_147efcbfd:
      pUVar12 = (UTexture *)0x0;
    }
    else {
LAB_147efcbd5:
      if (pUVar12 == (UTexture *)0x0) goto LAB_147efcbfd;
      pUVar13 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar13->_padding_)) goto LAB_147efcbfd;
    }
    (param_3->Value).field0_0x0.Texture = pUVar12;
    (param_3->Value).field0_0x0.Double[1] = (double)CONCAT44(uStack_ec,iStack_f0);
    (param_3->Value).field0_0x0.Double[2] = local_e8;
    (param_3->Value).field0_0x0.Double[3] = dStack_e0;
    *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_d7,6);
    break;
  case SparseVolumeTexture:
    uVar11 = 0;
    if (param_2 < (this->SparseVolumeTextureValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
             ((this->SparseVolumeTextureValues).AllocatorInstance.Data + lVar14 * 0x28);
    pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
    if (pUVar12 == (UTexture *)0x0) {
      if ((pTVar1->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&pTVar1->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
        goto LAB_147efccaf;
      }
LAB_147efccd7:
      pUVar12 = (UTexture *)0x0;
    }
    else {
LAB_147efccaf:
      if (pUVar12 == (UTexture *)0x0) goto LAB_147efccd7;
      pUVar13 = Z_Construct_UClass_USparseVolumeTexture_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar13->_padding_)) goto LAB_147efccd7;
    }
    (param_3->Value).field0_0x0.Texture = pUVar12;
    (param_3->Value).field0_0x0.Double[1] = (double)CONCAT44(uStack_ec,iStack_f0);
    (param_3->Value).field0_0x0.Double[2] = local_e8;
    (param_3->Value).field0_0x0.Double[3] = dStack_e0;
    *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_d7,7);
    break;
  case StaticSwitch:
    uVar11 = 0;
    if (param_2 < (this->StaticSwitchValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar9._1_7_ = uStack_7f;
    FVar9.ComparisonIndex.Value._0_1_ = (this->StaticSwitchValues).AllocatorInstance.Data[lVar14];
    (param_3->Value).field0_0x0.EnumEntry = FVar9;
    (param_3->Value).field0_0x0.Double[1] = dStack_78;
    (param_3->Value).field0_0x0.Double[2] = local_70;
    (param_3->Value).field0_0x0.Double[3] = dStack_68;
    *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_5f,8);
    uVar11 = 0;
    if (param_2 < (this->DynamicSwitchValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_3->bDynamicSwitchParameter =
         (bool)(this->DynamicSwitchValues).AllocatorInstance.Data[lVar14];
    break;
  case ParameterCollection:
    uVar11 = 0;
    if (param_2 < (this->ParameterCollectionValues).ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
             ((this->ParameterCollectionValues).AllocatorInstance.Data + lVar14 * 0x28);
    pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
    if (pUVar12 == (UTexture *)0x0) {
      if ((pTVar1->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&pTVar1->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar12 = (UTexture *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar1);
        goto LAB_147efcafb;
      }
LAB_147efcb23:
      pUVar12 = (UTexture *)0x0;
    }
    else {
LAB_147efcafb:
      if (pUVar12 == (UTexture *)0x0) goto LAB_147efcb23;
      pUVar13 = Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar13->_padding_)) goto LAB_147efcb23;
    }
    (param_3->Value).field0_0x0.Texture = pUVar12;
    (param_3->Value).field0_0x0.Double[1] = (double)CONCAT44(uStack_ec,iStack_f0);
    (param_3->Value).field0_0x0.Double[2] = local_e8;
    (param_3->Value).field0_0x0.Double[3] = dStack_e0;
    *(ulonglong *)&(param_3->Value).Type = CONCAT71(uStack_d7,9);
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialCachedData.cpp"
                        ,0x3d2,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}

// PostSerialize @ 147f05710

void __thiscall
FMaterialCachedExpressionData::PostSerialize(FMaterialCachedExpressionData *this,FArchive *param_1)

{
  int iVar1;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if (iVar1 < 0x6f) {
      this->PropertyConnectedMask = (ulonglong)this->PropertyConnectedBitmask_DEPRECATED;
    }
  }
  return;
}

// Serialize @ 147f07210

bool __thiscall
FMaterialCachedExpressionData::Serialize(FMaterialCachedExpressionData *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  return false;
}

