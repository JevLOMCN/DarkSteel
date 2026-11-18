// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147eeb660

UScriptStruct * __cdecl FMaterialCachedExpressionEditorOnlyData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionEditorOnlyData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionEditorOnlyData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData,
                         (UObject *)pUVar1,L"MaterialCachedExpressionEditorOnlyData");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialCachedExpressionEditorOnlyData.OuterSingleton;
}

// FMaterialCachedExpressionEditorOnlyData @ 147eefe80

FMaterialCachedExpressionEditorOnlyData * __thiscall
FMaterialCachedExpressionEditorOnlyData::FMaterialCachedExpressionEditorOnlyData
          (FMaterialCachedExpressionEditorOnlyData *this)

{
  FMaterialCachedParameterEditorEntry *pFVar1;
  longlong lVar2;
  
  pFVar1 = this->EditorEntries;
  *(undefined8 *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements = 0;
  lVar2 = 0xb;
  *(undefined8 *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x8 = 0;
  *(undefined8 *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x20 = 0;
  *(undefined4 *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x28 = 0;
  *(undefined4 *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x34 = 0;
  this->EditorOnlyEntries[0].ParameterInfoSet.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  this->EditorOnlyEntries[0].ParameterInfoSet.HashSize = 0;
  do {
    (pFVar1->EditorInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->EditorInfo).ArrayNum = 0;
    (pFVar1->EditorInfo).ArrayMax = 0;
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (this->StaticSwitchValues_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticSwitchValues_DEPRECATED).ArrayNum = 0;
  (this->StaticSwitchValues_DEPRECATED).ArrayMax = 0;
  (this->StaticComponentMaskValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticComponentMaskValues).ArrayNum = 0;
  (this->StaticComponentMaskValues).ArrayMax = 0;
  (this->ScalarMinMaxValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarMinMaxValues).ArrayNum = 0;
  (this->ScalarMinMaxValues).ArrayMax = 0;
  (this->ScalarEnumerationValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarEnumerationValues).ArrayNum = 0;
  (this->ScalarEnumerationValues).ArrayMax = 0;
  (this->ScalarEnumerationIndexValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarEnumerationIndexValues).ArrayNum = 0;
  (this->ScalarEnumerationIndexValues).ArrayMax = 0;
  (this->ScalarCurveValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarCurveValues).ArrayNum = 0;
  (this->ScalarCurveValues).ArrayMax = 0;
  (this->ScalarCurveAtlasValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarCurveAtlasValues).ArrayNum = 0;
  (this->ScalarCurveAtlasValues).ArrayMax = 0;
  (this->VectorChannelNameValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorChannelNameValues).ArrayNum = 0;
  (this->VectorChannelNameValues).ArrayMax = 0;
  (this->VectorUsedAsChannelMaskValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorUsedAsChannelMaskValues).ArrayNum = 0;
  (this->VectorUsedAsChannelMaskValues).ArrayMax = 0;
  (this->TextureChannelNameValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureChannelNameValues).ArrayNum = 0;
  (this->TextureChannelNameValues).ArrayMax = 0;
  (this->MaterialLayers).LayerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialLayers).LayerStates.ArrayNum = 0;
  (this->MaterialLayers).LayerStates.ArrayMax = 0;
  (this->MaterialLayers).LayerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialLayers).LayerNames.ArrayNum = 0;
  (this->MaterialLayers).LayerNames.ArrayMax = 0;
  (this->MaterialLayers).RestrictToLayerRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayers).RestrictToLayerRelatives.ArrayNum = 0;
  (this->MaterialLayers).RestrictToLayerRelatives.ArrayMax = 0;
  (this->MaterialLayers).RestrictToBlendRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayers).RestrictToBlendRelatives.ArrayNum = 0;
  (this->MaterialLayers).RestrictToBlendRelatives.ArrayMax = 0;
  (this->MaterialLayers).LayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialLayers).LayerGuids.ArrayNum = 0;
  (this->MaterialLayers).LayerGuids.ArrayMax = 0;
  (this->MaterialLayers).LayerLinkStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialLayers).LayerLinkStates.ArrayNum = 0;
  (this->MaterialLayers).LayerLinkStates.ArrayMax = 0;
  (this->MaterialLayers).DeletedParentLayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialLayers).DeletedParentLayerGuids.ArrayNum = 0;
  (this->MaterialLayers).DeletedParentLayerGuids.ArrayMax = 0;
  (this->AssetPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetPaths).ArrayNum = 0;
  (this->AssetPaths).ArrayMax = 0;
  (this->LandscapeLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeLayerNames).ArrayNum = 0;
  (this->LandscapeLayerNames).ArrayMax = 0;
  *(undefined8 *)&(this->ExpressionIncludeFilePaths).Elements = 0;
  *(undefined8 *)&(this->ExpressionIncludeFilePaths).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExpressionIncludeFilePaths).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExpressionIncludeFilePaths).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExpressionIncludeFilePaths).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpressionIncludeFilePaths).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExpressionIncludeFilePaths).Elements.field_0x34 = 0;
  (this->ExpressionIncludeFilePaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExpressionIncludeFilePaths).HashSize = 0;
  *(undefined8 *)&(this->UserSceneTextureInputs).Elements = 0;
  *(undefined8 *)&(this->UserSceneTextureInputs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UserSceneTextureInputs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UserSceneTextureInputs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UserSceneTextureInputs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UserSceneTextureInputs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserSceneTextureInputs).Elements.field_0x34 = 0;
  (this->UserSceneTextureInputs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UserSceneTextureInputs).HashSize = 0;
  (this->ShaderTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderTags).ArrayNum = 0;
  (this->ShaderTags).ArrayMax = 0;
  return this;
}

// ~FMaterialCachedExpressionEditorOnlyData @ 147ef2420

void __thiscall
FMaterialCachedExpressionEditorOnlyData::~FMaterialCachedExpressionEditorOnlyData
          (FMaterialCachedExpressionEditorOnlyData *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  FMaterialCachedParameterEditorEntry *pFVar3;
  longlong lVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pFVar1 = (this->ShaderTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->UserSceneTextureInputs).HashSize = 0;
  FVar2 = (this->UserSceneTextureInputs).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UserSceneTextureInputs).Elements);
  (this->ExpressionIncludeFilePaths).HashSize = 0;
  FVar2 = (this->ExpressionIncludeFilePaths).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExpressionIncludeFilePaths).Elements);
  pFVar1 = (this->LandscapeLayerNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AssetPaths).AllocatorInstance.Data,(this->AssetPaths).ArrayNum);
  pFVar1 = (this->AssetPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMaterialLayersFunctionsEditorOnlyData::~FMaterialLayersFunctionsEditorOnlyData
            (&this->MaterialLayers);
  DestructItems<FParameterChannelNames,int>
            ((FParameterChannelNames *)(this->TextureChannelNameValues).AllocatorInstance.Data,
             (this->TextureChannelNameValues).ArrayNum);
  pFVar1 = (this->TextureChannelNameValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorUsedAsChannelMaskValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FParameterChannelNames,int>
            ((FParameterChannelNames *)(this->VectorChannelNameValues).AllocatorInstance.Data,
             (this->VectorChannelNameValues).ArrayNum);
  pFVar1 = (this->VectorChannelNameValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UCurveLinearColorAtlas>,int>
            ((TSoftObjectPtr<UCurveLinearColorAtlas> *)
             (this->ScalarCurveAtlasValues).AllocatorInstance.Data,
             (this->ScalarCurveAtlasValues).ArrayNum);
  pFVar1 = (this->ScalarCurveAtlasValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UCurveLinearColor>,int>
            ((TSoftObjectPtr<UCurveLinearColor> *)(this->ScalarCurveValues).AllocatorInstance.Data,
             (this->ScalarCurveValues).ArrayNum);
  pFVar1 = (this->ScalarCurveValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarEnumerationIndexValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UObject>,int>
            ((TSoftObjectPtr<UObject> *)(this->ScalarEnumerationValues).AllocatorInstance.Data,
             (this->ScalarEnumerationValues).ArrayNum);
  pFVar1 = (this->ScalarEnumerationValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarMinMaxValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticComponentMaskValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar5 = &this->StaticSwitchValues_DEPRECATED;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar4 = 0xb;
  do {
    pFVar3 = (FMaterialCachedParameterEditorEntry *)(pTVar5 + -1);
    pTVar5 = pTVar5 + -1;
    lVar4 = lVar4 + -1;
    DestructItems<FMaterialCachedParameterEditorInfo,int>
              ((FMaterialCachedParameterEditorInfo *)
               (((TArray<FMaterialCachedParameterEditorInfo,TSizedDefaultAllocator<32>_> *)
                &pTVar5->AllocatorInstance)->AllocatorInstance).Data,(pFVar3->EditorInfo).ArrayNum);
    pFVar1 = (((TArray<FMaterialCachedParameterEditorInfo,TSizedDefaultAllocator<32>_> *)
              &pTVar5->AllocatorInstance)->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  this->EditorOnlyEntries[0].ParameterInfoSet.HashSize = 0;
  FVar2 = this->EditorOnlyEntries[0].ParameterInfoSet.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 147ef3330

FMaterialCachedExpressionEditorOnlyData * __thiscall
FMaterialCachedExpressionEditorOnlyData::operator=
          (FMaterialCachedExpressionEditorOnlyData *this,
          FMaterialCachedExpressionEditorOnlyData *param_1)

{
  TArray<FMaterialCachedParameterEditorInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TArray<FStaticComponentMaskValue,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TSoftObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TSoftObjectPtr<UCurveLinearColor>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<TSoftObjectPtr<UCurveLinearColorAtlas>,TSizedDefaultAllocator<32>_> *pTVar8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  int iVar9;
  FMaterialCachedParameterEditorInfo *pFVar10;
  FScriptContainerElement *pFVar11;
  int *piVar12;
  longlong lVar13;
  TArray<FMaterialCachedParameterEditorInfo,TSizedDefaultAllocator<32>_> *pTVar14;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->EditorOnlyEntries[0].ParameterInfoSet.Hash,
               &this->EditorOnlyEntries[0].ParameterInfoSet.HashSize,
               &param_1->EditorOnlyEntries[0].ParameterInfoSet.Hash,
               param_1->EditorOnlyEntries[0].ParameterInfoSet.HashSize);
    iVar9 = *(int *)&param_1->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x8;
    TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,iVar9);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar9,(ForAnyElementType *)this,
               (int *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x8,
               (int *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0xc);
    puVar2 = &param_1->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x10;
    puVar3 = &this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x10;
    *(undefined4 *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x30 =
         *(undefined4 *)&param_1->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x30;
    *(undefined4 *)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x34 =
         *(undefined4 *)&param_1->EditorOnlyEntries[0].ParameterInfoSet.Elements.field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar9 != 0) {
      memcpy(*(void **)&this->EditorOnlyEntries[0].ParameterInfoSet.Elements,
             *(void **)&param_1->EditorOnlyEntries[0].ParameterInfoSet.Elements,
             (longlong)iVar9 * 0x18);
    }
  }
  piVar12 = &this->EditorEntries[0].EditorInfo.ArrayMax;
  lVar13 = 0xb;
  do {
    pTVar14 = (TArray<FMaterialCachedParameterEditorInfo,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + (-0xc - (longlong)this) + (longlong)piVar12);
    pTVar1 = (TArray<FMaterialCachedParameterEditorInfo,TSizedDefaultAllocator<32>_> *)
             (piVar12 + -3);
    if (pTVar1 != pTVar14) {
      DestructItems<FMaterialCachedParameterEditorInfo,int>
                ((FMaterialCachedParameterEditorInfo *)(pTVar1->AllocatorInstance).Data,piVar12[-1])
      ;
      iVar9 = *(int *)((longlong)piVar12 + (longlong)param_1 + (-4 - (longlong)this));
      pFVar10 = (FMaterialCachedParameterEditorInfo *)(pTVar14->AllocatorInstance).Data;
      piVar12[-1] = iVar9;
      if ((iVar9 == 0) && (*piVar12 == 0)) {
        *piVar12 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar9,*piVar12,(ForAnyElementType *)pTVar1,iVar9,piVar12);
        ConstructItems<FMaterialCachedParameterEditorInfo,FMaterialCachedParameterEditorInfo,int>
                  ((pTVar1->AllocatorInstance).Data,pFVar10,iVar9);
      }
    }
    piVar12 = piVar12 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (&this->StaticSwitchValues_DEPRECATED,&param_1->StaticSwitchValues_DEPRECATED);
  pTVar4 = &this->StaticComponentMaskValues;
  if (pTVar4 != &param_1->StaticComponentMaskValues) {
    iVar9 = (param_1->StaticComponentMaskValues).ArrayNum;
    piVar12 = &(this->StaticComponentMaskValues).ArrayMax;
    pFVar11 = (param_1->StaticComponentMaskValues).AllocatorInstance.Data;
    (this->StaticComponentMaskValues).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar12 == 0)) {
      *piVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,1,iVar9,*piVar12,&pTVar4->AllocatorInstance,iVar9,piVar12);
      if (iVar9 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar11,(longlong)iVar9 << 2);
      }
    }
  }
  pTVar5 = &this->ScalarMinMaxValues;
  if (pTVar5 != &param_1->ScalarMinMaxValues) {
    iVar9 = (param_1->ScalarMinMaxValues).ArrayNum;
    piVar12 = &(this->ScalarMinMaxValues).ArrayMax;
    pFVar11 = (param_1->ScalarMinMaxValues).AllocatorInstance.Data;
    (this->ScalarMinMaxValues).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar12 == 0)) {
      *piVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,*piVar12,&pTVar5->AllocatorInstance,iVar9,piVar12);
      if (iVar9 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar11,(longlong)iVar9 << 4);
      }
    }
  }
  pTVar6 = &this->ScalarEnumerationValues;
  if (pTVar6 != &param_1->ScalarEnumerationValues) {
    DestructItems<TSoftObjectPtr<UObject>,int>
              ((TSoftObjectPtr<UObject> *)(pTVar6->AllocatorInstance).Data,
               (this->ScalarEnumerationValues).ArrayNum);
    iVar9 = (param_1->ScalarEnumerationValues).ArrayNum;
    piVar12 = &(this->ScalarEnumerationValues).ArrayMax;
    pFVar11 = (param_1->ScalarEnumerationValues).AllocatorInstance.Data;
    (this->ScalarEnumerationValues).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar12 == 0)) {
      *piVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar9,*piVar12,&pTVar6->AllocatorInstance,iVar9,piVar12);
      ConstructItems<TSoftObjectPtr<UObject>,TSoftObjectPtr<UObject>,int>
                ((pTVar6->AllocatorInstance).Data,(TSoftObjectPtr<UObject> *)pFVar11,iVar9);
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ScalarEnumerationIndexValues,&param_1->ScalarEnumerationIndexValues);
  pTVar7 = &this->ScalarCurveValues;
  if (pTVar7 != &param_1->ScalarCurveValues) {
    DestructItems<TSoftObjectPtr<UCurveLinearColor>,int>
              ((TSoftObjectPtr<UCurveLinearColor> *)(pTVar7->AllocatorInstance).Data,
               (this->ScalarCurveValues).ArrayNum);
    iVar9 = (param_1->ScalarCurveValues).ArrayNum;
    piVar12 = &(this->ScalarCurveValues).ArrayMax;
    pFVar11 = (param_1->ScalarCurveValues).AllocatorInstance.Data;
    (this->ScalarCurveValues).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar12 == 0)) {
      *piVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar9,*piVar12,&pTVar7->AllocatorInstance,iVar9,piVar12);
      ConstructItems<TSoftObjectPtr<UCurveLinearColor>,TSoftObjectPtr<UCurveLinearColor>,int>
                ((pTVar7->AllocatorInstance).Data,(TSoftObjectPtr<UCurveLinearColor> *)pFVar11,iVar9
                );
    }
  }
  pTVar8 = &this->ScalarCurveAtlasValues;
  if (pTVar8 != &param_1->ScalarCurveAtlasValues) {
    DestructItems<TSoftObjectPtr<UCurveLinearColorAtlas>,int>
              ((TSoftObjectPtr<UCurveLinearColorAtlas> *)(pTVar8->AllocatorInstance).Data,
               (this->ScalarCurveAtlasValues).ArrayNum);
    iVar9 = (param_1->ScalarCurveAtlasValues).ArrayNum;
    piVar12 = &(this->ScalarCurveAtlasValues).ArrayMax;
    pFVar11 = (param_1->ScalarCurveAtlasValues).AllocatorInstance.Data;
    (this->ScalarCurveAtlasValues).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar12 == 0)) {
      *piVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar9,*piVar12,&pTVar8->AllocatorInstance,iVar9,piVar12);
      ConstructItems<TSoftObjectPtr<UCurveLinearColorAtlas>,TSoftObjectPtr<UCurveLinearColorAtlas>,int>
                ((pTVar8->AllocatorInstance).Data,(TSoftObjectPtr<UCurveLinearColorAtlas> *)pFVar11,
                 iVar9);
    }
  }
  TArray<FParameterChannelNames,TSizedDefaultAllocator<32>_>::operator=
            (&this->VectorChannelNameValues,&param_1->VectorChannelNameValues);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (&this->VectorUsedAsChannelMaskValues,&param_1->VectorUsedAsChannelMaskValues);
  TArray<FParameterChannelNames,TSizedDefaultAllocator<32>_>::operator=
            (&this->TextureChannelNameValues,&param_1->TextureChannelNameValues);
  FMaterialLayersFunctionsEditorOnlyData::operator=(&this->MaterialLayers,&param_1->MaterialLayers);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->AssetPaths,&param_1->AssetPaths);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->LandscapeLayerNames,&param_1->LandscapeLayerNames);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&this->ExpressionIncludeFilePaths,&param_1->ExpressionIncludeFilePaths);
  this_00 = &this->UserSceneTextureInputs;
  if (this_00 != &param_1->UserSceneTextureInputs) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->UserSceneTextureInputs).Hash,&(this->UserSceneTextureInputs).HashSize,
               &(param_1->UserSceneTextureInputs).Hash,(param_1->UserSceneTextureInputs).HashSize);
    iVar9 = *(int *)&(param_1->UserSceneTextureInputs).Elements.field_0x8;
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,iVar9);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar9,(ForAnyElementType *)this_00,
               (int *)&(this->UserSceneTextureInputs).Elements.field_0x8,
               (int *)&(this->UserSceneTextureInputs).Elements.field_0xc);
    puVar2 = &(param_1->UserSceneTextureInputs).Elements.field_0x10;
    puVar3 = &(this->UserSceneTextureInputs).Elements.field_0x10;
    *(undefined4 *)&(this->UserSceneTextureInputs).Elements.field_0x30 =
         *(undefined4 *)&(param_1->UserSceneTextureInputs).Elements.field_0x30;
    *(undefined4 *)&(this->UserSceneTextureInputs).Elements.field_0x34 =
         *(undefined4 *)&(param_1->UserSceneTextureInputs).Elements.field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar9 != 0) {
      memcpy(*(void **)&this_00->Elements,*(void **)&(param_1->UserSceneTextureInputs).Elements,
             (longlong)iVar9 << 4);
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->ShaderTags,&param_1->ShaderTags);
  return this;
}

