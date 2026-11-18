// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 3

// FSampleConverterParameters @ 14ea393e0

FSampleConverterParameters * __thiscall
FSampleConverterParameters::FSampleConverterParameters
          (FSampleConverterParameters *this,FSampleConverterParameters *param_1)

{
  (this->FrameInfo).CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameInfo).CompressionName.Data.AllocatorInstance.Data =
       (param_1->FrameInfo).CompressionName.Data.AllocatorInstance.Data;
  (param_1->FrameInfo).CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameInfo).CompressionName.Data.ArrayNum =
       (param_1->FrameInfo).CompressionName.Data.ArrayNum;
  (this->FrameInfo).CompressionName.Data.ArrayMax =
       (param_1->FrameInfo).CompressionName.Data.ArrayMax;
  (param_1->FrameInfo).CompressionName.Data.ArrayNum = 0;
  (param_1->FrameInfo).CompressionName.Data.ArrayMax = 0;
  (this->FrameInfo).Dim.field0_0x0 = (param_1->FrameInfo).Dim.field0_0x0;
  (this->FrameInfo).FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameInfo).FormatName.Data.AllocatorInstance.Data =
       (param_1->FrameInfo).FormatName.Data.AllocatorInstance.Data;
  (param_1->FrameInfo).FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameInfo).FormatName.Data.ArrayNum = (param_1->FrameInfo).FormatName.Data.ArrayNum;
  (this->FrameInfo).FormatName.Data.ArrayMax = (param_1->FrameInfo).FormatName.Data.ArrayMax;
  (param_1->FrameInfo).FormatName.Data.ArrayNum = 0;
  (param_1->FrameInfo).FormatName.Data.ArrayMax = 0;
  (this->FrameInfo).FrameRate = (param_1->FrameInfo).FrameRate;
  (this->FrameInfo).Srgb = (param_1->FrameInfo).Srgb;
  (this->FrameInfo).UncompressedSize = (param_1->FrameInfo).UncompressedSize;
  (this->FrameInfo).NumChannels = (param_1->FrameInfo).NumChannels;
  (this->FrameInfo).bHasTiles = (param_1->FrameInfo).bHasTiles;
  (this->FrameInfo).NumTiles.field0_0x0 = (param_1->FrameInfo).NumTiles.field0_0x0;
  (this->FrameInfo).TileDimensions.field0_0x0 = (param_1->FrameInfo).TileDimensions.field0_0x0;
  (this->FrameInfo).TileBorder = (param_1->FrameInfo).TileBorder;
  (this->FrameInfo).NumMipLevels = (param_1->FrameInfo).NumMipLevels;
  this->FrameId = param_1->FrameId;
  (this->FullResolution).field0_0x0 = (param_1->FullResolution).field0_0x0;
  (this->TileDimWithBorders).field0_0x0 = (param_1->TileDimWithBorders).field0_0x0;
  (this->Viewports).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Viewports).Pairs.AllocatorInstance.Data = (param_1->Viewports).Pairs.AllocatorInstance.Data
  ;
  (param_1->Viewports).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Viewports).Pairs.ArrayNum = (param_1->Viewports).Pairs.ArrayNum;
  (this->Viewports).Pairs.ArrayMax = (param_1->Viewports).Pairs.ArrayMax;
  (param_1->Viewports).Pairs.ArrayNum = 0;
  (param_1->Viewports).Pairs.ArrayMax = 0;
  (this->TileInfoPerMipLevel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileInfoPerMipLevel).AllocatorInstance.Data =
       (param_1->TileInfoPerMipLevel).AllocatorInstance.Data;
  (param_1->TileInfoPerMipLevel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileInfoPerMipLevel).ArrayNum = (param_1->TileInfoPerMipLevel).ArrayNum;
  (this->TileInfoPerMipLevel).ArrayMax = (param_1->TileInfoPerMipLevel).ArrayMax;
  (param_1->TileInfoPerMipLevel).ArrayNum = 0;
  (param_1->TileInfoPerMipLevel).ArrayMax = 0;
  this->NumMipLevels = param_1->NumMipLevels;
  this->PixelSize = param_1->PixelSize;
  this->bMipsInSeparateFiles = param_1->bMipsInSeparateFiles;
  this->UpscaleMip = param_1->UpscaleMip;
  (this->SourceColorSettings).Object = (param_1->SourceColorSettings).Object;
  (this->SourceColorSettings).SharedReferenceCount.ReferenceController =
       (param_1->SourceColorSettings).SharedReferenceCount.ReferenceController;
  (param_1->SourceColorSettings).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->SourceColorSettings).Object = (FNativeMediaSourceColorSettings *)0x0;
  return this;
}

// ~FSampleConverterParameters @ 14ea3b320

void __thiscall
FSampleConverterParameters::~FSampleConverterParameters(FSampleConverterParameters *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceColorSettings).SharedReferenceCount.ReferenceController);
  DestructItems<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *)
             (this->TileInfoPerMipLevel).AllocatorInstance.Data,(this->TileInfoPerMipLevel).ArrayNum
            );
  pFVar1 = (this->TileInfoPerMipLevel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *)
             (this->Viewports).Pairs.AllocatorInstance.Data,(this->Viewports).Pairs.ArrayNum);
  pFVar1 = (this->Viewports).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrameInfo).FormatName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrameInfo).CompressionName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14ea3bd80

FSampleConverterParameters * __thiscall
FSampleConverterParameters::operator=
          (FSampleConverterParameters *this,FSampleConverterParameters *param_1)

{
  int *piVar1;
  TSortedMap<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  *pTVar2;
  TArray<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int iVar4;
  int iVar5;
  TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FNativeMediaSourceColorSettings *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  
  FImgMediaFrameInfo::operator=(&this->FrameInfo,&param_1->FrameInfo);
  this->FrameId = param_1->FrameId;
  pTVar2 = &this->Viewports;
  (this->FullResolution).field0_0x0 = (param_1->FullResolution).field0_0x0;
  (this->TileDimWithBorders).field0_0x0 = (param_1->TileDimWithBorders).field0_0x0;
  if (pTVar2 != &param_1->Viewports) {
    DestructItems<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,int>
              ((TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *)
               (pTVar2->Pairs).AllocatorInstance.Data,(this->Viewports).Pairs.ArrayNum);
    iVar4 = (param_1->Viewports).Pairs.ArrayNum;
    piVar1 = &(this->Viewports).Pairs.ArrayMax;
    pTVar6 = (TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *)
             (param_1->Viewports).Pairs.AllocatorInstance.Data;
    iVar5 = *piVar1;
    (this->Viewports).Pairs.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar4,iVar5,(ForAnyElementType *)pTVar2,iVar4,piVar1);
      ConstructItems<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,int>
                ((pTVar2->Pairs).AllocatorInstance.Data,pTVar6,iVar4);
    }
  }
  pTVar3 = &this->TileInfoPerMipLevel;
  if (pTVar3 != &param_1->TileInfoPerMipLevel) {
    DestructItems<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *)
               (pTVar3->AllocatorInstance).Data,(this->TileInfoPerMipLevel).ArrayNum);
    iVar4 = (param_1->TileInfoPerMipLevel).ArrayNum;
    piVar1 = &(this->TileInfoPerMipLevel).ArrayMax;
    pTVar7 = (TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *)
             (param_1->TileInfoPerMipLevel).AllocatorInstance.Data;
    (this->TileInfoPerMipLevel).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      ConstructItems<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,int>
                ((pTVar3->AllocatorInstance).Data,pTVar7,iVar4);
    }
  }
  this->NumMipLevels = param_1->NumMipLevels;
  this->PixelSize = param_1->PixelSize;
  this->bMipsInSeparateFiles = param_1->bMipsInSeparateFiles;
  this->UpscaleMip = param_1->UpscaleMip;
  pTVar8 = (param_1->SourceColorSettings).SharedReferenceCount.ReferenceController;
  pFVar9 = (param_1->SourceColorSettings).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (this->SourceColorSettings).SharedReferenceCount.ReferenceController;
  (this->SourceColorSettings).Object = pFVar9;
  (this->SourceColorSettings).SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return this;
}

