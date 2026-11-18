// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 15

// FVirtualTextureSpace @ 1458cd810

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVirtualTextureSpace * __thiscall
FVirtualTextureSpace::FVirtualTextureSpace
          (FVirtualTextureSpace *this,FVirtualTextureSystem *param_1,uchar param_2,
          FVTSpaceDescription *param_3,uint param_4)

{
  byte bVar1;
  EVTPageTableFormat EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  undefined3 uVar8;
  bool bVar9;
  FVirtualTextureSpace *pFVar10;
  uchar uVar11;
  ForAnyElementType FVar12;
  FString *pFVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  FString local_48;
  FString local_38;
  ulonglong uVar16;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  uVar19 = 0;
  this->_padding_ = (longlong)&___7FVirtualTextureSpace__6B_;
  uVar14 = param_3->TileBorderSize;
  uVar11 = param_3->Dimensions;
  EVar2 = param_3->PageTableFormat;
  uVar5 = param_3->NumPageTableLayers;
  uVar6 = param_3->bPrivateSpace;
  uVar7 = param_3->bContinuousUpdate;
  uVar8 = *(undefined3 *)&param_3->field_0xd;
  (this->Description).TileSize = param_3->TileSize;
  (this->Description).TileBorderSize = uVar14;
  (this->Description).Dimensions = uVar11;
  (this->Description).PageTableFormat = EVar2;
  (this->Description).NumPageTableLayers = uVar5;
  (this->Description).bPrivateSpace = uVar6;
  (this->Description).bContinuousUpdate = uVar7;
  *(undefined3 *)&(this->Description).field_0xd = uVar8;
  uVar14 = param_3->IndirectionTextureSize;
  (this->Description).MaxSpaceSize = param_3->MaxSpaceSize;
  (this->Description).IndirectionTextureSize = uVar14;
  (this->Allocator).vDimensions = (uint)param_3->Dimensions;
  (this->Allocator).AllocatedWidth = 0;
  (this->Allocator).AllocatedHeight = 0;
  (this->Allocator).AddressBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocator).AddressBlocks.ArrayNum = 0;
  (this->Allocator).AddressBlocks.ArrayMax = 0;
  (this->Allocator).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocator).FreeList.ArrayNum = 0;
  (this->Allocator).FreeList.ArrayMax = 0;
  (this->Allocator).PartiallyFreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocator).PartiallyFreeList.ArrayNum = 0;
  (this->Allocator).PartiallyFreeList.ArrayMax = 0;
  (this->Allocator).SortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocator).SortedAddresses.ArrayNum = 0;
  (this->Allocator).SortedAddresses.ArrayMax = 0;
  (this->Allocator).SortedIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocator).SortedIndices.ArrayNum = 0;
  (this->Allocator).SortedIndices.ArrayMax = 0;
  FHashTable::FHashTable(&(this->Allocator).HashTable,0x400,0);
  (this->Allocator).NumAllocations = 0;
  (this->Allocator).NumAllocatedPages = 0;
  this->PhysicalPageMap[0].LayerIndex = 0;
  this->PhysicalPageMap[0].vDimensions = 0;
  this->PhysicalPageMap[0].Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[0].Pages.ArrayNum = 0;
  this->PhysicalPageMap[0].Pages.ArrayMax = 0;
  FHashTable::FHashTable(&this->PhysicalPageMap[0].HashTable,0x1000,0);
  uVar18 = 0;
  this->PhysicalPageMap[0].MappedPageCount = 0;
  this->PhysicalPageMap[0].UnsortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[0].UnsortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[0].UnsortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[0].UnsortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PhysicalPageMap[0].UnsortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[0].UnsortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[0].SortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[0].SortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[0].SortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[0].SortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[0].SortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[0].SortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[0].SortedKeysDirty = false;
  this->PhysicalPageMap[0].SortedSubIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[0].SortedSubIndexes.ArrayNum = 0;
  this->PhysicalPageMap[0].SortedSubIndexes.ArrayMax = 0;
  this->PhysicalPageMap[0].SortedAddIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[0].SortedAddIndexes.ArrayNum = 0;
  this->PhysicalPageMap[0].SortedAddIndexes.ArrayMax = 0;
  this->PhysicalPageMap[1].LayerIndex = 0;
  this->PhysicalPageMap[1].vDimensions = 0;
  this->PhysicalPageMap[1].Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[1].Pages.ArrayNum = 0;
  this->PhysicalPageMap[1].Pages.ArrayMax = 0;
  FHashTable::FHashTable(&this->PhysicalPageMap[1].HashTable,0x1000,0);
  this->PhysicalPageMap[1].MappedPageCount = 0;
  this->PhysicalPageMap[1].UnsortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[1].UnsortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[1].UnsortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[1].UnsortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PhysicalPageMap[1].UnsortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[1].UnsortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[1].SortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[1].SortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[1].SortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[1].SortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[1].SortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[1].SortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[1].SortedKeysDirty = false;
  this->PhysicalPageMap[1].SortedSubIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[1].SortedSubIndexes.ArrayNum = 0;
  this->PhysicalPageMap[1].SortedSubIndexes.ArrayMax = 0;
  this->PhysicalPageMap[1].SortedAddIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[1].SortedAddIndexes.ArrayNum = 0;
  this->PhysicalPageMap[1].SortedAddIndexes.ArrayMax = 0;
  this->PhysicalPageMap[2].LayerIndex = 0;
  this->PhysicalPageMap[2].vDimensions = 0;
  this->PhysicalPageMap[2].Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[2].Pages.ArrayNum = 0;
  this->PhysicalPageMap[2].Pages.ArrayMax = 0;
  FHashTable::FHashTable(&this->PhysicalPageMap[2].HashTable,0x1000,0);
  this->PhysicalPageMap[2].MappedPageCount = 0;
  this->PhysicalPageMap[2].UnsortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[2].UnsortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[2].UnsortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[2].UnsortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PhysicalPageMap[2].UnsortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[2].UnsortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[2].SortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[2].SortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[2].SortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[2].SortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[2].SortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[2].SortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[2].SortedKeysDirty = false;
  this->PhysicalPageMap[2].SortedSubIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[2].SortedSubIndexes.ArrayNum = 0;
  this->PhysicalPageMap[2].SortedSubIndexes.ArrayMax = 0;
  this->PhysicalPageMap[2].SortedAddIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[2].SortedAddIndexes.ArrayNum = 0;
  this->PhysicalPageMap[2].SortedAddIndexes.ArrayMax = 0;
  this->PhysicalPageMap[3].LayerIndex = 0;
  this->PhysicalPageMap[3].vDimensions = 0;
  this->PhysicalPageMap[3].Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[3].Pages.ArrayNum = 0;
  this->PhysicalPageMap[3].Pages.ArrayMax = 0;
  FHashTable::FHashTable(&this->PhysicalPageMap[3].HashTable,0x1000,0);
  this->PhysicalPageMap[3].MappedPageCount = 0;
  this->PhysicalPageMap[3].UnsortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[3].UnsortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[3].UnsortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[3].UnsortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PhysicalPageMap[3].UnsortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[3].UnsortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[3].SortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[3].SortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[3].SortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[3].SortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[3].SortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[3].SortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[3].SortedKeysDirty = false;
  this->PhysicalPageMap[3].SortedSubIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[3].SortedSubIndexes.ArrayNum = 0;
  this->PhysicalPageMap[3].SortedSubIndexes.ArrayMax = 0;
  this->PhysicalPageMap[3].SortedAddIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[3].SortedAddIndexes.ArrayNum = 0;
  this->PhysicalPageMap[3].SortedAddIndexes.ArrayMax = 0;
  this->PhysicalPageMap[4].LayerIndex = 0;
  this->PhysicalPageMap[4].vDimensions = 0;
  this->PhysicalPageMap[4].Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[4].Pages.ArrayNum = 0;
  this->PhysicalPageMap[4].Pages.ArrayMax = 0;
  FHashTable::FHashTable(&this->PhysicalPageMap[4].HashTable,0x1000,0);
  this->PhysicalPageMap[4].MappedPageCount = 0;
  this->PhysicalPageMap[4].UnsortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[4].UnsortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[4].UnsortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[4].UnsortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PhysicalPageMap[4].UnsortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[4].UnsortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[4].SortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[4].SortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[4].SortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[4].SortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[4].SortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[4].SortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[4].SortedKeysDirty = false;
  this->PhysicalPageMap[4].SortedSubIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[4].SortedSubIndexes.ArrayNum = 0;
  this->PhysicalPageMap[4].SortedSubIndexes.ArrayMax = 0;
  this->PhysicalPageMap[4].SortedAddIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[4].SortedAddIndexes.ArrayNum = 0;
  this->PhysicalPageMap[4].SortedAddIndexes.ArrayMax = 0;
  this->PhysicalPageMap[5].LayerIndex = 0;
  this->PhysicalPageMap[5].vDimensions = 0;
  this->PhysicalPageMap[5].Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[5].Pages.ArrayNum = 0;
  this->PhysicalPageMap[5].Pages.ArrayMax = 0;
  FHashTable::FHashTable(&this->PhysicalPageMap[5].HashTable,0x1000,0);
  this->PhysicalPageMap[5].MappedPageCount = 0;
  this->PhysicalPageMap[5].UnsortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[5].UnsortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[5].UnsortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[5].UnsortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PhysicalPageMap[5].UnsortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[5].UnsortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[5].SortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[5].SortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[5].SortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[5].SortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[5].SortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[5].SortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[5].SortedKeysDirty = false;
  this->PhysicalPageMap[5].SortedSubIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[5].SortedSubIndexes.ArrayNum = 0;
  this->PhysicalPageMap[5].SortedSubIndexes.ArrayMax = 0;
  this->PhysicalPageMap[5].SortedAddIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[5].SortedAddIndexes.ArrayNum = 0;
  this->PhysicalPageMap[5].SortedAddIndexes.ArrayMax = 0;
  this->PhysicalPageMap[6].LayerIndex = 0;
  this->PhysicalPageMap[6].vDimensions = 0;
  this->PhysicalPageMap[6].Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[6].Pages.ArrayNum = 0;
  this->PhysicalPageMap[6].Pages.ArrayMax = 0;
  FHashTable::FHashTable(&this->PhysicalPageMap[6].HashTable,0x1000,0);
  this->PhysicalPageMap[6].MappedPageCount = 0;
  this->PhysicalPageMap[6].UnsortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[6].UnsortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[6].UnsortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[6].UnsortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PhysicalPageMap[6].UnsortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[6].UnsortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[6].SortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[6].SortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[6].SortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[6].SortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[6].SortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[6].SortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[6].SortedKeysDirty = false;
  this->PhysicalPageMap[6].SortedSubIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[6].SortedSubIndexes.ArrayNum = 0;
  this->PhysicalPageMap[6].SortedSubIndexes.ArrayMax = 0;
  this->PhysicalPageMap[6].SortedAddIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[6].SortedAddIndexes.ArrayNum = 0;
  this->PhysicalPageMap[6].SortedAddIndexes.ArrayMax = 0;
  this->PhysicalPageMap[7].LayerIndex = 0;
  this->PhysicalPageMap[7].vDimensions = 0;
  this->PhysicalPageMap[7].Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[7].Pages.ArrayNum = 0;
  this->PhysicalPageMap[7].Pages.ArrayMax = 0;
  FHashTable::FHashTable(&this->PhysicalPageMap[7].HashTable,0x1000,0);
  this->PhysicalPageMap[7].MappedPageCount = 0;
  this->PhysicalPageMap[7].UnsortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[7].UnsortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[7].UnsortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[7].UnsortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PhysicalPageMap[7].UnsortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[7].UnsortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[7].SortedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[7].SortedKeys.ArrayNum = 0;
  this->PhysicalPageMap[7].SortedKeys.ArrayMax = 0;
  this->PhysicalPageMap[7].SortedAddresses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[7].SortedAddresses.ArrayNum = 0;
  this->PhysicalPageMap[7].SortedAddresses.ArrayMax = 0;
  this->PhysicalPageMap[7].SortedKeysDirty = false;
  this->PhysicalPageMap[7].SortedSubIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[7].SortedSubIndexes.ArrayNum = 0;
  this->PhysicalPageMap[7].SortedSubIndexes.ArrayMax = 0;
  this->PhysicalPageMap[7].SortedAddIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PhysicalPageMap[7].SortedAddIndexes.ArrayNum = 0;
  this->PhysicalPageMap[7].SortedAddIndexes.ArrayMax = 0;
  this->PageTable[0].RenderTarget.Reference = (IPooledRenderTarget *)0x0;
  this->PageTable[0].TextureReferenceRHI.Reference = (FRHITextureReference *)0x0;
  this->PageTable[1].RenderTarget.Reference = (IPooledRenderTarget *)0x0;
  this->PageTable[1].TextureReferenceRHI.Reference = (FRHITextureReference *)0x0;
  this->PageTableDebugNames[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PageTableDebugNames[0].Data.ArrayNum = 0;
  this->PageTableDebugNames[0].Data.ArrayMax = 0;
  this->PageTableDebugNames[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PageTableDebugNames[1].Data.ArrayNum = 0;
  this->PageTableDebugNames[1].Data.ArrayMax = 0;
  (this->PageTableIndirection).RenderTarget.Reference = (IPooledRenderTarget *)0x0;
  (this->PageTableIndirection).TextureReferenceRHI.Reference = (FRHITextureReference *)0x0;
  this->PageTableUpdates[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PageTableUpdates[0].ArrayNum = 0;
  this->PageTableUpdates[0].ArrayMax = 0;
  this->PageTableUpdates[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PageTableUpdates[1].ArrayNum = 0;
  this->PageTableUpdates[1].ArrayMax = 0;
  this->PageTableUpdates[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PageTableUpdates[2].ArrayNum = 0;
  this->PageTableUpdates[2].ArrayMax = 0;
  this->PageTableUpdates[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PageTableUpdates[3].ArrayNum = 0;
  this->PageTableUpdates[3].ArrayMax = 0;
  this->PageTableUpdates[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PageTableUpdates[4].ArrayNum = 0;
  this->PageTableUpdates[4].ArrayMax = 0;
  this->PageTableUpdates[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PageTableUpdates[5].ArrayNum = 0;
  this->PageTableUpdates[5].ArrayMax = 0;
  this->PageTableUpdates[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PageTableUpdates[6].ArrayNum = 0;
  this->PageTableUpdates[6].ArrayMax = 0;
  this->PageTableUpdates[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PageTableUpdates[7].ArrayNum = 0;
  this->PageTableUpdates[7].ArrayMax = 0;
  this->ID = param_2;
  this->NumRefs = 0;
  this->ReleasedFrame = 0;
  this->CachedPageTableWidth = 0;
  this->CachedPageTableHeight = 0;
  this->CachedNumPageTableLevels = 0;
  this->bNeedToAllocatePageTable = true;
  uVar14 = param_3->IndirectionTextureSize;
  this->bForceEntireUpdate = false;
  this->bNeedToAllocatePageTableIndirection = uVar14 != 0;
  uVar14 = (uint)GRHIGlobals.MaxTextureDimensions.Value /
           (param_3->TileSize + param_3->TileBorderSize * 2);
  bVar1 = 0;
  uVar16 = uVar19;
  if (param_3->NumPageTableLayers != '\0') {
    do {
      FTexturePageMap::Initialize
                (this->PhysicalPageMap + uVar16,uVar14 * uVar14,(uint)uVar16,
                 (uint)param_3->Dimensions);
      bVar1 = param_3->NumPageTableLayers;
      uVar15 = (uint)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < bVar1);
  }
  uVar14 = (uint)bVar1;
  this->TexturePixelFormat[0] = '\0';
  this->TexturePixelFormat[1] = '\0';
  if (bVar1 != 0) {
    do {
      EVar2 = param_3->PageTableFormat;
      uVar15 = 4;
      if (uVar14 < 4) {
        uVar15 = uVar14;
      }
      if (uVar15 == 1) {
        uVar11 = '\x1c';
        if (EVar2 == UInt16) {
          uVar11 = ' ';
        }
      }
      else if (uVar15 == 2) {
        uVar11 = 'D';
        if (EVar2 == UInt16) {
          uVar11 = '1';
        }
      }
      else if ((uVar15 == 3) || (uVar15 == 4)) {
        uVar11 = '0';
        if (EVar2 == UInt16) {
          uVar11 = '\"';
        }
      }
      else {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.cpp"
                           ,0x2e,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FVirtualTextureSpace *)(*pcVar4)();
          return pFVar10;
        }
        uVar11 = '\0';
      }
      uVar18 = (int)uVar19 + 1;
      this->TexturePixelFormat[uVar19].Value = uVar11;
      uVar14 = uVar14 - uVar15;
      uVar19 = (ulonglong)uVar18;
    } while (uVar14 != 0);
  }
  pFVar13 = this->PageTableDebugNames;
  uVar14 = (this->Description).NumPageTableLayers + 3;
  uVar15 = uVar14 >> 2;
  if ((uVar15 != uVar18) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumPageTableTextures == PageTableIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.cpp"
                         ,0x50,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FVirtualTextureSpace *)(*pcVar4)();
    return pFVar10;
  }
  pFVar17 = (FScriptContainerElement *)0x0;
  if (uVar14 >> 2 != 0) {
    do {
      if (uVar18 < 2) {
        ::FString::PrintfImpl(&local_38,L"VirtualTexture_PageTable (%s)");
        FVar12.Data = local_38.Data.AllocatorInstance.Data;
        if (pFVar13 != &local_38) {
          pFVar3 = (pFVar13->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pFVar13->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
          (pFVar13->Data).ArrayNum = local_38.Data.ArrayNum;
          (pFVar13->Data).ArrayMax = local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar12.Data = (FScriptContainerElement *)0x0;
        }
      }
      else {
        ::FString::PrintfImpl(&local_48,L"VirtualTexture_PageTable (%s) %d/%d");
        FVar12.Data = local_48.Data.AllocatorInstance.Data;
        if (pFVar13 != &local_48) {
          pFVar3 = (pFVar13->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pFVar13->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
          (pFVar13->Data).ArrayNum = local_48.Data.ArrayNum;
          (pFVar13->Data).ArrayMax = local_48.Data.ArrayMax;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar12.Data = (FScriptContainerElement *)0x0;
        }
      }
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
      uVar14 = (int)pFVar17 + 1;
      pFVar13 = pFVar13 + 1;
      pFVar17 = (FScriptContainerElement *)(ulonglong)uVar14;
    } while (uVar14 < uVar15);
  }
  FVirtualTextureAllocator::Initialize(&this->Allocator,(this->Description).MaxSpaceSize);
  return this;
}

// ~FVirtualTextureSpace @ 1458d13f0

void __thiscall FVirtualTextureSpace::~FVirtualTextureSpace(FVirtualTextureSpace *this)

{
  FScriptContainerElement *pFVar1;
  FRHITextureReference *pFVar2;
  IPooledRenderTarget *pIVar3;
  longlong lVar4;
  FTextureEntry *pFVar5;
  TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  
  this->_padding_ = (longlong)&___7FVirtualTextureSpace__6B_;
  pTVar6 = (TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *)&this->NumRefs;
  lVar4 = 8;
  do {
    pFVar1 = pTVar6[-1].AllocatorInstance.Data;
    pTVar6 = pTVar6 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pFVar5 = &this->PageTableIndirection;
  pFVar2 = (this->PageTableIndirection).TextureReferenceRHI.Reference;
  if (pFVar2 != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pIVar3 = (pFVar5->RenderTarget).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  lVar4 = 2;
  lVar7 = 2;
  do {
    pFVar1 = (((FString *)(pFVar5 + -1))->Data).AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar7 = lVar7 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar7 != 0);
  pFVar5 = (FTextureEntry *)this->TexturePixelFormat;
  do {
    pFVar2 = pFVar5[-1].TextureReferenceRHI.Reference;
    pFVar5 = pFVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar2 != (FRHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pIVar3 = (pFVar5->RenderTarget).Reference;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  } while (lVar4 != 0);
  FTexturePageMap::~FTexturePageMap(this->PhysicalPageMap + 7);
  FTexturePageMap::~FTexturePageMap(this->PhysicalPageMap + 6);
  FTexturePageMap::~FTexturePageMap(this->PhysicalPageMap + 5);
  FTexturePageMap::~FTexturePageMap(this->PhysicalPageMap + 4);
  FTexturePageMap::~FTexturePageMap(this->PhysicalPageMap + 3);
  FTexturePageMap::~FTexturePageMap(this->PhysicalPageMap + 2);
  FTexturePageMap::~FTexturePageMap(this->PhysicalPageMap + 1);
  FTexturePageMap::~FTexturePageMap(this->PhysicalPageMap);
  FVirtualTextureAllocator::~FVirtualTextureAllocator(&this->Allocator);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator() @ 1458d3f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
`FVirtualTextureSpace::ApplyUpdates'::__l84::<lambda_3>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  int iVar1;
  FShaderMapResource *this_00;
  longlong lVar2;
  FShader *this_01;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  atomic<FRHIShader_*> aVar6;
  FRHIVertexShader *pFVar7;
  FShaderParametersMetadata *pFVar8;
  IRHICommandContext *pIVar9;
  undefined8 *puVar10;
  undefined1 auStackY_178 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_138;
  FGraphicsPipelineStateInitializer local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FRHICommandList::SetViewport
            (param_2,0.0,0.0,0.0,(float)*(uint *)((longlong)this + 0x34),
             (float)*(uint *)((longlong)this + 0x38),__real_3f800000);
  aVar6 = (atomic<FRHIShader_*>)0x0;
  local_128.bAllowVariableRateShading = true;
  local_128.ShadingRate = VRSSR_1x1;
  local_128.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_128.RenderTargetsEnabled = 0;
  local_128.RenderTargetFormats.Elements[0] = '\0';
  local_128.RenderTargetFormats.Elements[1] = '\0';
  local_128.RenderTargetFormats.Elements[2] = '\0';
  local_128.RenderTargetFormats.Elements[3] = '\0';
  local_128.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_128.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_128.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_128.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_128.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_128.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_128.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_128.BlendState = (FRHIBlendState *)0x0;
  local_128.RasterizerState = (FRHIRasterizerState *)0x0;
  local_128.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_128.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_128.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_128.RenderTargetFlags.Elements[0] = None;
  local_128.RenderTargetFlags.Elements[1] = None;
  local_128.RenderTargetFlags.Elements[2] = None;
  local_128.RenderTargetFlags.Elements[3] = None;
  local_128.RenderTargetFlags.Elements[4] = None;
  local_128.RenderTargetFlags.Elements[5] = None;
  local_128.RenderTargetFlags.Elements[6] = None;
  local_128.RenderTargetFlags.Elements[7] = None;
  local_128.RenderTargetFormats.Elements[4] = '\0';
  local_128.RenderTargetFormats.Elements[5] = '\0';
  local_128.RenderTargetFormats.Elements[6] = '\0';
  local_128.RenderTargetFormats.Elements[7] = '\0';
  local_128.DepthStencilTargetFormat = PF_Unknown;
  local_128.DepthStencilTargetFlag = None;
  local_128.DepthTargetLoadAction = ENoAction;
  local_128.DepthTargetStoreAction = ENoAction;
  local_128.StencilTargetLoadAction = ENoAction;
  local_128.StencilTargetStoreAction = ENoAction;
  local_128.DepthStencilAccess.Value = DepthNop;
  local_128.NumSamples = 0;
  local_128.SubpassHint = None;
  local_128.SubpassIndex = '\0';
  local_128.ConservativeRasterization = Disabled;
  local_128.bDepthBounds = false;
  local_128.MultiViewCount = '\0';
  local_128.bHasFragmentDensityAttachment = false;
  local_128.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_128);
  local_128.BlendState = *(FRHIBlendState **)((longlong)this + 0x28);
  local_128.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GEmptyVertexDeclaration._32_8_;
  local_128.PrimitiveType = PT_TriangleList;
  local_128.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FPageTableUpdateVS,FShaderMapPointerTable>::GetVertexShader
                 ((TShaderRefBase<FPageTableUpdateVS,FShaderMapPointerTable> *)((longlong)this + 8),
                  true);
  if (*(longlong *)((longlong)this + 0x18) != 0) {
    this_00 = *(FShaderMapResource **)(*(longlong *)((longlong)this + 0x20) + 8);
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar1 = *(int *)(*(longlong *)((longlong)this + 0x18) + 0xd4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          lVar2 = *(longlong *)((longlong)this + 0x20);
          this_01 = *(FShader **)((longlong)this + 0x18);
          if (*(longlong *)(lVar2 + 0x18) == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FShader::GetType(this_01,*(FShaderMapPointerTable **)(lVar2 + 0x18));
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGlobalShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  local_128.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar6;
  SetGraphicsPipelineState(param_2,&local_128,0,CheckApply,true);
  pvVar3 = *(void **)this;
  pFVar7 = TShaderRefBase<FPageTableUpdateVS,FShaderMapPointerTable>::GetVertexShader
                     ((TShaderRefBase<FPageTableUpdateVS,FShaderMapPointerTable> *)
                      ((longlong)this + 8),true);
  pFVar8 = FPageTableUpdateVS::FParameters::FTypeInfo::GetStructMetadata();
  local_138.ShaderContent = *(FShader **)((longlong)this + 8);
  local_138.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x10);
  ValidateShaderParameters(&local_138,pFVar8,pvVar3);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar7,*(FShaderParameterBindings **)((longlong)this + 8)
             ,pFVar8,pvVar3);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
    puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x28,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar10;
    *(undefined8 **)&param_2->field_0x30 = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &___7FRHICommandSetStreamSource__6B_;
    *(undefined4 *)(puVar10 + 2) = 0;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
  }
  else {
    pIVar9 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_2);
    (**(code **)(pIVar9->_padding_ + 0x198))(pIVar9,0);
  }
  FRHICommandList::DrawIndexedPrimitive
            (param_2,(FRHIBuffer *)GQuadIndexBuffer._32_8_,0,0,0x20,0,0x10,
             *(int *)((longlong)this + 0x30) + 7U >> 3);
  return;
}

// AllocateTextures @ 1458dbde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVirtualTextureSpace::AllocateTextures(FVirtualTextureSpace *this,FRDGBuilder *param_1)

{
  byte bVar1;
  IPooledRenderTarget *pIVar2;
  IPooledRenderTarget *pIVar3;
  FRHIComputeCommandList *this_00;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  FRDGTexture *pFVar7;
  FRDGTexture *pFVar8;
  TRefCountPtr<IPooledRenderTarget> *pTVar9;
  FRDGTextureUAV *pFVar10;
  byte bVar11;
  uint uVar12;
  TRHIGlobal<int> TVar13;
  FRHIGPUMask FVar14;
  ulonglong uVar15;
  int *piVar16;
  int iVar17;
  FTextureEntry *pFVar18;
  bool bVar19;
  undefined1 auStackY_1a8 [32];
  wchar_t *local_160;
  uint local_158;
  uint uStack_154;
  uint local_150;
  TIntVector4<unsigned_int>_u_0 local_148;
  FRDGTextureUAVDesc local_138;
  TIntVector3<int>_u_0 local_120;
  undefined8 local_114;
  int local_10c;
  undefined8 local_108;
  int local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  uint local_e8;
  wchar_t **local_e0;
  undefined1 *local_d8;
  wchar_t **local_d0;
  undefined1 *local_c8;
  wchar_t **local_c0;
  undefined1 *local_b8;
  wchar_t **local_b0;
  undefined1 *local_a8;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  uint local_74;
  uint uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  ForElementType<EPixelFormat> local_60;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar15 = 0;
  if (this->bNeedToAllocatePageTable != false) {
    local_148._0_8_ = param_1->_padding_;
    FVar14.GPUMask = *(uint *)&((FRHIComputeCommandList *)local_148._0_8_)->field_0x29c;
    local_138._padding_._0_4_ = FVar14.GPUMask;
    FRHIComputeCommandList::SetGPUMask
              ((FRHIComputeCommandList *)local_148._0_8_,
               (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    bVar19 = (this->Description).bPrivateSpace == '\0';
    lVar6 = 0x30;
    if (bVar19) {
      lVar6 = 0x3c;
    }
    iVar5 = *(int *)((longlong)&this->_padding_ + lVar6);
    uVar4 = 0x30;
    if (bVar19) {
      uVar4 = 0x40;
    }
    iVar17 = *(int *)((longlong)&this->_padding_ + (ulonglong)uVar4);
    uVar12 = iVar5 + 0x1fU & 0xffffffe0;
    this->CachedPageTableWidth = uVar12;
    uVar4 = iVar17 + 0x1fU & 0xffffffe0;
    this->CachedPageTableHeight = uVar4;
    if (uVar4 < uVar12) {
      iVar17 = iVar5;
    }
    uVar4 = iVar17 + 0x1fU & 0xffffffe0;
    iVar5 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar17 = 0;
    if (uVar4 != 0) {
      iVar17 = iVar5;
    }
    bVar1 = (this->Description).NumPageTableLayers;
    this->CachedNumPageTableLevels = iVar17 + 1;
    if ((bVar1 + 3 & 0xfffffffc) != 0) {
      do {
        piVar16 = &(param_1->Textures).Array.ArrayMax;
        uVar4 = this->CachedPageTableWidth;
        uStack_154 = this->CachedPageTableHeight;
        local_74 = this->CachedPageTableWidth;
        uStack_70 = this->CachedPageTableHeight;
        bVar1 = (byte)this->CachedNumPageTableLevels;
        local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
        local_160 = L"VirtualTexture_PageTable";
        local_80 = FClearValueBinding::None.Value.Color[3];
        pFVar18 = this->PageTable + uVar15;
        local_60.SecondaryData = (ForElementType<EPixelFormat>)0x0;
        local_4c = 1;
        local_68._1_2_ = 1;
        local_68._0_1_ = bVar1;
        local_68._3_1_ = this->TexturePixelFormat[uVar15].Value;
        local_98._0_8_ = 9;
        local_64 = 0xff00;
        local_6c = 0x10001;
        local_98._8_8_ = FClearValueBinding::None._0_8_;
        local_98._16_8_ = FClearValueBinding::None.Value._4_8_;
        local_78 = 0;
        local_50 = 0;
        local_158 = uVar4;
        local_150 = uStack_154;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
                  (1,1,0,1,&local_60,0,&local_4c);
        if ((int)local_74 < 1) {
          local_e0 = &local_160;
          local_d8 = local_98;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_e0);
        }
        if ((int)uStack_70 < 1) {
          local_d0 = &local_160;
          local_c8 = local_98;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_d0);
        }
        uVar12 = uStack_70;
        if ((uint)GRHIGlobals.MaxTextureDimensions.Value < local_74) {
          local_c0 = &local_160;
          local_b8 = local_98;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_c0);
          uVar12 = uStack_70;
        }
        if ((uint)GRHIGlobals.MaxTextureDimensions.Value < uVar12) {
          local_b0 = &local_160;
          local_a8 = local_98;
          `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_b0);
          uVar12 = uStack_70;
        }
        TVar13.Value = GRHIGlobals.MaxTextureDimensions.Value;
        if ((int)local_74 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar13.Value = local_74;
        }
        local_74 = 1;
        if (1 < TVar13.Value) {
          local_74 = TVar13.Value;
        }
        TVar13.Value = GRHIGlobals.MaxTextureDimensions.Value;
        if ((int)uVar12 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar13.Value = uVar12;
        }
        uStack_70 = 1;
        if (1 < TVar13.Value) {
          uStack_70 = TVar13.Value;
        }
        FRDGUserValidation::ValidateCreateTexture
                  (&param_1->UserValidation,(FRDGTextureDesc *)local_98,local_160,None);
        pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x158,8);
        pFVar7 = FRDGTexture::FRDGTexture(pFVar7,local_160,(FRDGTextureDesc *)local_98,None);
        iVar5 = (param_1->Textures).Array.ArrayNum;
        if (iVar5 == *piVar16) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                            (0x808,(ForElementType<FRDGTexture_*> *)&param_1->Textures,piVar16);
        }
        (param_1->Textures).Array.ArrayNum = iVar5 + 1;
        (param_1->Textures).Array.AllocatorInstance.Data[iVar5] = pFVar7;
        (pFVar7->Handle).Index = (param_1->Textures).Array.ArrayNum - 1;
        FRDGUserValidation::ValidateCreateTexture(&param_1->UserValidation,pFVar7);
        FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar7);
        if (local_60.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
          FMemory::Free((void *)local_60.SecondaryData);
        }
        if ((pFVar18->RenderTarget).Reference != (IPooledRenderTarget *)0x0) {
          pFVar8 = FRDGBuilder::RegisterExternalTexture(param_1,&pFVar18->RenderTarget,None);
          local_fc = 0;
          local_ec = 0;
          local_10c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_100 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
          local_114 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_108 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_f4 = 1;
          local_120._s_0.X = *(undefined4 *)&(pFVar8->Desc).field_0x24;
          if ((int)uVar4 < local_120._s_0.X) {
            local_120._s_0.X = uVar4;
          }
          local_120._s_0.Y = *(undefined4 *)&(pFVar8->Desc).field_0x28;
          local_120._s_0.Z = 1;
          if ((int)local_150 < local_120._s_0.Y) {
            local_120._s_0.Y = local_150;
          }
          bVar11 = (pFVar8->Desc).field_0x30;
          if (bVar1 < bVar11) {
            bVar11 = bVar1;
          }
          local_e8 = (uint)bVar11;
          FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)pFVar8);
          AddCopyTexturePass(param_1,pFVar8,pFVar7,(FRHICopyTextureInfo *)&local_120._s_0);
        }
        pTVar9 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar7);
        pIVar2 = (pFVar18->RenderTarget).Reference;
        pIVar3 = pTVar9->Reference;
        if (pIVar2 != pIVar3) {
          (pFVar18->RenderTarget).Reference = pIVar3;
          if (pIVar3 != (IPooledRenderTarget *)0x0) {
            (**(code **)(pIVar3->_padding_ + 0x30))();
          }
          if (pIVar2 != (IPooledRenderTarget *)0x0) {
            (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2);
          }
        }
        FRDGBuilder::UseExternalAccessMode(param_1,(FRDGViewableResource *)pFVar7,SRVMask,All);
        FRHICommandListBase::UpdateTextureReference
                  ((FRHICommandListBase *)param_1->_padding_,
                   (pFVar18->TextureReferenceRHI).Reference,
                   (((pFVar18->RenderTarget).Reference)->RenderTargetItem).TargetableTexture.
                   Reference);
        uVar4 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar4;
        FVar14.GPUMask = (uint)local_138._padding_;
      } while (uVar4 < (this->Description).NumPageTableLayers + 3 >> 2);
    }
    this->bNeedToAllocatePageTable = false;
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)local_148._0_8_,FVar14);
  }
  if (this->bNeedToAllocatePageTableIndirection != false) {
    this_00 = (FRHIComputeCommandList *)param_1->_padding_;
    FVar14.GPUMask = *(uint *)&this_00->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    uVar4 = (this->Description).IndirectionTextureSize;
    if (uVar4 != 0) {
      local_80 = FClearValueBinding::None.Value.Color[3];
      local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_98._0_8_ = 0x20008;
      uStack_70 = uVar4;
      local_74 = uVar4;
      local_98._8_8_ = FClearValueBinding::None._0_8_;
      local_98._16_8_ = FClearValueBinding::None.Value._4_8_;
      local_78 = 0;
      local_6c = 0x10001;
      local_68 = 0x1c000101;
      local_64 = 0xff00;
      local_60.SecondaryData = (ForElementType<EPixelFormat>)0x0;
      local_50 = 0;
      local_4c = 1;
      local_158 = uVar4;
      uStack_154 = uVar4;
      pFVar7 = FRDGBuilder::CreateTexture
                         (param_1,(FRDGTextureDesc *)local_98,
                          L"VirtualTexture_PageTableAdaptiveIndirection",None);
      local_148._0_8_ = (FRHIComputeCommandList *)0x0;
      local_148._8_8_ = 0;
      local_138._padding_._1_1_ = 0;
      local_138._padding_._0_1_ = (pFVar7->Desc).field_0x34;
      local_138._padding_._2_4_ = 0;
      local_138._padding_._6_1_ = 0;
      local_138._padding_._0_4_ = (uint)local_138._padding_ & 0xffffff00;
      local_138.Texture = pFVar7;
      pFVar10 = FRDGBuilder::CreateUAV(param_1,&local_138,None);
      AddClearUAVPass(param_1,pFVar10,(TIntVector4<unsigned_int> *)&local_148._s_0,Compute);
      pTVar9 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar7);
      pIVar2 = (this->PageTableIndirection).RenderTarget.Reference;
      pIVar3 = pTVar9->Reference;
      if (pIVar2 != pIVar3) {
        (this->PageTableIndirection).RenderTarget.Reference = pIVar3;
        if (pIVar3 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar3->_padding_ + 0x30))();
        }
        if (pIVar2 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2);
        }
      }
      FRDGBuilder::UseExternalAccessMode(param_1,(FRDGViewableResource *)pFVar7,SRVMask,All);
      FRHICommandListBase::UpdateTextureReference
                ((FRHICommandListBase *)param_1->_padding_,
                 (this->PageTableIndirection).TextureReferenceRHI.Reference,
                 (((this->PageTableIndirection).RenderTarget.Reference)->RenderTargetItem).
                 TargetableTexture.Reference);
      if (local_60.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_60.SecondaryData);
      }
    }
    this->bNeedToAllocatePageTableIndirection = false;
    FRHIComputeCommandList::SetGPUMask(this_00,FVar14);
  }
  return;
}

// AllocateVirtualTexture @ 1458dc890

uint __thiscall
FVirtualTextureSpace::AllocateVirtualTexture
          (FVirtualTextureSpace *this,FAllocatedVirtualTexture *param_1)

{
  uchar uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = FVirtualTextureAllocator::Alloc(&this->Allocator,param_1);
  uVar1 = (this->Description).bPrivateSpace;
  lVar4 = 0x30;
  if (uVar1 == '\0') {
    lVar4 = 0x40;
  }
  lVar3 = 0x30;
  if (uVar1 == '\0') {
    lVar3 = 0x3c;
  }
  if ((this->CachedPageTableWidth <
       (*(int *)((longlong)&this->_padding_ + lVar3) + 0x1fU & 0xffffffe0)) ||
     (this->CachedPageTableHeight <
      (*(int *)((longlong)&this->_padding_ + lVar4) + 0x1fU & 0xffffffe0))) {
    this->bNeedToAllocatePageTable = true;
  }
  return uVar2;
}

// ApplyUpdates @ 1458dd290

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualTextureSpace::ApplyUpdates
          (FVirtualTextureSpace *this,FVirtualTextureSystem *param_1,FRDGBuilder *param_2,
          FRDGExternalAccessQueue *param_3)

{
  byte *pbVar1;
  FPageTableUpdateParameters *pFVar2;
  byte bVar3;
  char cVar4;
  FUploadedBuffer *pFVar5;
  IPooledRenderTarget *pIVar6;
  IPooledRenderTarget *pIVar7;
  code *pcVar8;
  TConsoleVariableData<int> *pTVar9;
  FShaderMapBase *pFVar10;
  FRDGTexture *pFVar11;
  bool bVar12;
  int iVar13;
  Type TVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  FRDGTexture *pFVar18;
  FRDGBuffer *pFVar19;
  FRDGScope *this_00;
  FGlobalShaderMap *this_01;
  FGlobalShaderType *pFVar20;
  FShaderType *pFVar21;
  FName FVar22;
  undefined8 *puVar23;
  FRDGEventName *pFVar24;
  TRefCountPtr<IPooledRenderTarget> *pTVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  FRHIGPUMask FVar31;
  TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *pTVar32;
  FTexturePageMap *this_02;
  uint uVar33;
  uint uVar34;
  undefined1 local_res20 [8];
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304;
  undefined1 local_303;
  undefined1 local_302;
  undefined1 local_301;
  FShaderMapBase *local_300;
  uint local_2f8;
  longlong local_2f0;
  uint local_2e8;
  FShader *local_2e0;
  FRDGTexture *local_2d8;
  uint local_2d0;
  FRHIBlendState *local_2c8;
  undefined8 *local_2c0;
  uint local_2b8;
  uint uStack_2b4;
  FShader *local_2b0;
  FShaderMapBase *local_2a8;
  FRDGBufferSRVDesc local_2a0;
  FRenderTargetBinding local_280;
  FRDGBufferSRV *local_268;
  FTextureEntry *local_260;
  FGlobalShaderMap *local_258;
  FRHIComputeCommandList *local_250;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_248;
  TRDGEventScopeGuard<FRDGScope_RHI> local_238;
  char local_228;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_220;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_210;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_200;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1d0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1c0;
  FVirtualTextureSpace *local_1b0;
  FRDGBuilder *local_1a8;
  FRDGExternalAccessQueue *local_1a0;
  <lambda_3> local_198;
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_> local_130;
  FString local_120;
  undefined1 local_110 [8];
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  FRDGBufferDesc local_98;
  FString local_80;
  uint uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  FRDGEventName local_50;
  
  local_2d0 = 0;
  local_1b0 = this;
  local_1a8 = param_2;
  local_1a0 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FVirtualTextureSpace::ApplyUpdates'::__l2::
           _dynamic_atexit_destructor_for__ExpandedUpdates__);
    _Init_thread_footer(&::_TSS0);
  }
  if (this->bNeedToAllocatePageTable == false) {
    local_250 = (FRHIComputeCommandList *)param_2->_padding_;
    FVar31.GPUMask = *(uint *)&local_250->field_0x29c;
    local_2e8 = FVar31.GPUMask;
    FRHIComputeCommandList::SetGPUMask
              (local_250,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    local_2f8 = 0;
    bVar3 = 0;
    if ((this->Description).NumPageTableLayers != '\0') {
      do {
        uVar33 = local_2f8;
        pTVar9 = CVarVTRefreshEntirePageTable.Ref;
        uVar30 = (ulonglong)local_2f8;
        this_02 = this->PhysicalPageMap + uVar30;
        if (this->bForceEntireUpdate == false) {
          bVar12 = IsInParallelRenderingThread();
          if ((!bVar12) &&
             (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6409875433831007955>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (pTVar9->ShadowedValue[1] != 0) goto LAB_1458dd4c7;
          iVar13 = this->PageTableUpdates[uVar30].ArrayNum;
          uVar27 = (ulonglong)iVar13;
          pFVar18 = (FRDGTexture *)this->PageTableUpdates[uVar30].AllocatorInstance.Data;
          local_300 = (FShaderMapBase *)CONCAT44(local_300._4_4_,iVar13);
          local_2d8 = (FRDGTexture *)(&pFVar18->_padding_ + uVar27);
          while( true ) {
            pFVar11 = local_2d8;
            if (this->PageTableUpdates[uVar30].ArrayNum != (int)uVar27) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FPageTableUpdate,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res20);
            }
            pTVar9 = CVarVTMaskedPageTableUpdates.Ref;
            uVar33 = local_2f8;
            if (pFVar18 == pFVar11) break;
            bVar12 = IsInParallelRenderingThread();
            if ((!bVar12) &&
               (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<6409875433831007955>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (pTVar9->ShadowedValue[1] == 0) {
              FTexturePageMap::ExpandPageTableUpdatePainters
                        (this_02,param_1,(FPageTableUpdate)pFVar18->_padding_,
                         ExpandedUpdates[uVar30]);
              uVar27 = (ulonglong)local_300 & 0xffffffff;
              pFVar18 = (FRDGTexture *)&pFVar18->_padding_;
            }
            else {
              FTexturePageMap::ExpandPageTableUpdateMasked
                        (this_02,param_1,(FPageTableUpdate)pFVar18->_padding_,
                         ExpandedUpdates[uVar30]);
              uVar27 = (ulonglong)local_300 & 0xffffffff;
              pFVar18 = (FRDGTexture *)&pFVar18->_padding_;
            }
          }
        }
        else {
LAB_1458dd4c7:
          FTexturePageMap::RefreshEntirePageTable(this_02,param_1,ExpandedUpdates[uVar30]);
        }
        pTVar32 = this->PageTableUpdates + uVar33;
        pTVar32->ArrayNum = 0;
        if (pTVar32->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&pTVar32->AllocatorInstance,0,&pTVar32->ArrayMax);
        }
        bVar3 = (this->Description).NumPageTableLayers;
        local_2f8 = uVar33 + 1;
        FVar31.GPUMask = local_2e8;
      } while (local_2f8 < bVar3);
    }
    uVar33 = 0;
    uVar30 = 0;
    this->bForceEntireUpdate = false;
    if (bVar3 != 0) {
      do {
        if (this->CachedNumPageTableLevels != 0) {
          piVar17 = &ExpandedUpdates[uVar30][0].ArrayNum;
          uVar27 = (ulonglong)this->CachedNumPageTableLevels;
          do {
            uVar33 = uVar33 + *piVar17;
            piVar17 = piVar17 + 4;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
        uVar29 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar29;
      } while (uVar29 < bVar3);
      if (uVar33 != 0) {
        pFVar18 = FMemStackBase::Alloc
                            ((FMemStackBase *)&param_2->_padding_,(ulonglong)uVar33 << 3,0x10);
        uVar30 = 0;
        local_2d8 = pFVar18;
        if ((this->Description).NumPageTableLayers != '\0') {
          do {
            uVar29 = 0;
            if (this->CachedNumPageTableLevels != 0) {
              do {
                uVar26 = ExpandedUpdates[uVar30][uVar29].ArrayNum;
                if (uVar26 != 0) {
                  memcpy(pFVar18,ExpandedUpdates[uVar30][uVar29].AllocatorInstance.Data,
                         (ulonglong)uVar26 * 8);
                  pFVar18 = (FRDGTexture *)(&pFVar18->_padding_ + uVar26);
                }
                uVar29 = uVar29 + 1;
              } while (uVar29 < this->CachedNumPageTableLevels);
            }
            uVar29 = (int)uVar30 + 1;
            uVar30 = (ulonglong)uVar29;
            FVar31.GPUMask = local_2e8;
          } while (uVar29 < (this->Description).NumPageTableLayers);
        }
        pFVar18 = local_2d8;
        local_2a0._padding_._0_4_ = 0x4109;
        local_2a0._padding_._0_4_ = 8;
        local_98.NumElements = uVar33;
        local_98.BytesPerElement = 8;
        local_98._12_4_ = local_2a0._padding_._4_4_;
        local_98.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
        local_2a0._padding_ = 0;
        local_98.Metadata = (FShaderParametersMetadata *)0x0;
        local_2a0._padding_._4_4_ = uVar33;
        pFVar19 = FRDGBuilder::CreateBuffer
                            (param_2,&local_98,L"VirtualTexture_PageTableUpdateBuffer",None);
        FRDGUserValidation::ValidateUploadBuffer
                  (&param_2->UserValidation,pFVar19,pFVar18,(ulonglong)uVar33 << 3);
        iVar13 = (param_2->UploadedBuffers).ArrayNum;
        piVar17 = &(param_2->UploadedBuffers).ArrayMax;
        if (iVar13 == *piVar17) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                             (0x10e0,&(param_2->UploadedBuffers).AllocatorInstance,piVar17);
        }
        local_2a0._padding_._0_4_ = CONCAT31(local_2a0._padding_._1_3_,0x22);
        local_2a0._padding_._4_4_ = 0;
        (param_2->UploadedBuffers).ArrayNum = iVar13 + 1;
        pFVar5 = (param_2->UploadedBuffers).AllocatorInstance.Data;
        local_2a0._padding_._0_4_ = 0xffffffff;
        local_2a0._padding_ = 0;
        pFVar5[iVar13].bUseDataCallbacks = false;
        pFVar5[iVar13].bUseFreeCallbacks = false;
        pFVar5[iVar13].Buffer = pFVar19;
        pFVar5[iVar13].Data = pFVar18;
        pFVar5[iVar13].DataSize = (ulonglong)uVar33 << 3;
        *(undefined8 *)&pFVar5[iVar13].DataCallback = 0;
        *(undefined8 *)&pFVar5[iVar13].DataCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar5[iVar13].DataSizeCallback = 0;
        *(undefined8 *)&pFVar5[iVar13].DataSizeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar5[iVar13].DataFreeCallback = 0;
        *(undefined8 *)&pFVar5[iVar13].DataFreeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar5[iVar13].DataFillCallback = 0;
        *(undefined8 *)&pFVar5[iVar13].DataFillCallback.field_0x28 = 0;
        pbVar1 = (byte *)((longlong)&pFVar19->_padding_ + 1);
        *pbVar1 = *pbVar1 | 0x80;
        local_2a0.Buffer = pFVar19;
        local_268 = FRDGBuilder::CreateSRV(param_2,&local_2a0);
        cVar4 = *(char *)((longlong)&param_2->_padding_ + 6);
        local_228 = '\0';
        if ((cVar4 != '\0') && ((cVar4 != '\x01' || ((param_2->_padding_ & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_60 = 0;
            uStack_5c = 0;
            ::Desc._12_8_ = ZEXT48(uStack_64);
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)u_PageTableUpdate;
            ::Desc._padding_ = (longlong)u_PageTableUpdate;
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            ::Desc._padding_._0_4_ = 0x191;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FVirtualTextureSpace::ApplyUpdates'::__l40::<lambda_2>::operator()<>'::__l3::
                   <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_130._Myfirst._Val = &::Desc;
          local_238.State = (FRDGScopeState *)param_2;
          this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&param_2->_padding_,(FRDGScope **)param_2);
          param_2->_padding_ = (longlong)this_00;
          local_238.Scope = this_00;
          TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
          Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_>_>
                    (&(this_00->Impl).Impl,(FRDGScopeState *)param_2,&local_130);
          if (*(char *)((longlong)&param_2->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_2->_padding_,false);
            FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_2->_padding_);
          }
          local_228 = '\x01';
        }
        bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
        TVar14 = (uint)bVar3;
        if (bVar3 == 5) {
          TVar14 = GMaxRHIFeatureLevel;
        }
        this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar14]);
        local_258 = this_01;
        if ((this->Description).PageTableFormat == UInt16) {
          pFVar20 = TPageTableUpdateVS<1>::GetStaticType();
          if (*(int *)&pFVar20->field_0x50 != 1) {
            local_308 = 0;
            `FGlobalShaderMap::GetShader<TPageTableUpdateVS<1>_>'::__l2::<lambda_1>::operator()
                      (&local_308);
          }
          pFVar21 = (FShaderType *)TPageTableUpdateVS<1>::GetStaticType();
          FGlobalShaderMap::GetShader(this_01,&local_210,pFVar21,0);
          if (local_210.ShaderContent == (FShader *)0x0) {
            FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_158);
            ::FName::ToString((FName *)FVar22,&local_120);
            TPageTableUpdateVS<1>::GetStaticType();
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          TPageTableUpdateVS<1>::GetStaticType();
          local_2a8 = local_210.ShaderMap;
        }
        else {
          pFVar20 = TPageTableUpdateVS<0>::GetStaticType();
          if (*(int *)&pFVar20->field_0x50 != 1) {
            local_307 = 0;
            `FGlobalShaderMap::GetShader<TPageTableUpdateVS<0>_>'::__l2::<lambda_1>::operator()
                      (&local_307);
          }
          pFVar21 = (FShaderType *)TPageTableUpdateVS<0>::GetStaticType();
          FGlobalShaderMap::GetShader(this_01,&local_200,pFVar21,0);
          if (local_200.ShaderContent == (FShader *)0x0) {
            FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_150);
            ::FName::ToString((FName *)FVar22,&local_80);
            TPageTableUpdateVS<0>::GetStaticType();
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          TPageTableUpdateVS<0>::GetStaticType();
          local_2a8 = local_200.ShaderMap;
          local_210.ShaderContent = local_200.ShaderContent;
        }
        local_2b0 = local_210.ShaderContent;
        if ((local_210.ShaderContent == (FShader *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("VertexShader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.cpp"
                                ,0x19d,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar13 = 0;
        local_2f8 = 0;
        if ((this->Description).NumPageTableLayers != '\0') {
          do {
            uVar29 = local_2f8;
            uVar30 = 0;
            uVar33 = local_2f8 >> 2;
            local_260 = this->PageTable + uVar33;
            local_2d8 = FRDGBuilder::RegisterExternalTexture
                                  (param_2,&local_260->RenderTarget,ForceImmediateFirstBarrier);
            FRDGBuilder::UseInternalAccessMode(param_2,(FRDGViewableResource *)local_2d8);
            local_2c8 = (FRHIBlendState *)0x0;
            uVar26 = uVar29 & 3;
            if (uVar26 == 0) {
              local_2c8 = TStaticStateRHI<TStaticBlendState<1,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                          ::StaticResource.StateRHI.Reference;
            }
            else if (uVar26 == 1) {
              local_2c8 = TStaticStateRHI<TStaticBlendState<2,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                          ::StaticResource.StateRHI.Reference;
            }
            else if (uVar26 == 2) {
              local_2c8 = TStaticStateRHI<TStaticBlendState<4,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                          ::StaticResource.StateRHI.Reference;
            }
            else if (uVar26 == 3) {
              local_2c8 = TStaticStateRHI<TStaticBlendState<8,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                          ::StaticResource.StateRHI.Reference;
            }
            else {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.cpp"
                                  ,0x1b3,L"");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            local_2e0 = (FShader *)0x0;
            local_300 = (FShaderMapBase *)0x0;
            switch(this->TexturePixelFormat[uVar33].Value) {
            case '\x1c':
              pFVar20 = TPageTableUpdatePS<28>::GetStaticType();
              if (*(int *)&pFVar20->field_0x50 != 1) {
                local_303 = 0;
                `FGlobalShaderMap::GetShader<TPageTableUpdatePS<28>_>'::__l2::<lambda_1>::operator()
                          (&local_303);
              }
              pFVar21 = (FShaderType *)TPageTableUpdatePS<28>::GetStaticType();
              FGlobalShaderMap::GetShader(this_01,&local_1d0,pFVar21,0);
              if (local_1d0.ShaderContent == (FShader *)0x0) {
                FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a0);
                ::FName::ToString((FName *)FVar22,&local_d8);
                TPageTableUpdatePS<28>::GetStaticType();
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Shader.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                    ,0xc0,L"Failed to find shader type %s in Platform %s");
                if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                }
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              TPageTableUpdatePS<28>::GetStaticType();
              local_300 = local_1d0.ShaderMap;
              local_2e0 = local_1d0.ShaderContent;
              break;
            default:
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.cpp"
                                  ,0x1bf,L"");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              goto LAB_1458de00d;
            case ' ':
              pFVar20 = TPageTableUpdatePS<32>::GetStaticType();
              if (*(int *)&pFVar20->field_0x50 != 1) {
                local_306 = 0;
                `FGlobalShaderMap::GetShader<TPageTableUpdatePS<32>_>'::__l2::<lambda_1>::operator()
                          (&local_306);
              }
              pFVar21 = (FShaderType *)TPageTableUpdatePS<32>::GetStaticType();
              FGlobalShaderMap::GetShader(this_01,&local_1f0,pFVar21,0);
              if (local_1f0.ShaderContent == (FShader *)0x0) {
                FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a8);
                ::FName::ToString((FName *)FVar22,&local_108);
                TPageTableUpdatePS<32>::GetStaticType();
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Shader.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                    ,0xc0,L"Failed to find shader type %s in Platform %s");
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              TPageTableUpdatePS<32>::GetStaticType();
              local_300 = local_1f0.ShaderMap;
              local_2e0 = local_1f0.ShaderContent;
              break;
            case '\"':
              pFVar20 = TPageTableUpdatePS<34>::GetStaticType();
              if (*(int *)&pFVar20->field_0x50 != 1) {
                local_304 = 0;
                `FGlobalShaderMap::GetShader<TPageTableUpdatePS<34>_>'::__l2::<lambda_1>::operator()
                          (&local_304);
              }
              pFVar21 = (FShaderType *)TPageTableUpdatePS<34>::GetStaticType();
              FGlobalShaderMap::GetShader(this_01,&local_1e0,pFVar21,0);
              if (local_1e0.ShaderContent == (FShader *)0x0) {
                FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_138);
                ::FName::ToString((FName *)FVar22,&local_e8);
                TPageTableUpdatePS<34>::GetStaticType();
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Shader.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                    ,0xc0,L"Failed to find shader type %s in Platform %s");
                if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                }
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              TPageTableUpdatePS<34>::GetStaticType();
              local_300 = local_1e0.ShaderMap;
              local_2e0 = local_1e0.ShaderContent;
              break;
            case '0':
              pFVar20 = TPageTableUpdatePS<48>::GetStaticType();
              if (*(int *)&pFVar20->field_0x50 != 1) {
                local_301 = 0;
                `FGlobalShaderMap::GetShader<TPageTableUpdatePS<48>_>'::__l2::<lambda_1>::operator()
                          (&local_301);
              }
              pFVar21 = (FShaderType *)TPageTableUpdatePS<48>::GetStaticType();
              FGlobalShaderMap::GetShader(this_01,&local_248,pFVar21,0);
              if (local_248.ShaderContent == (FShader *)0x0) {
                FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_140);
                ::FName::ToString((FName *)FVar22,&local_b8);
                TPageTableUpdatePS<48>::GetStaticType();
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Shader.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                    ,0xc0,L"Failed to find shader type %s in Platform %s");
                if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                }
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              TPageTableUpdatePS<48>::GetStaticType();
              local_300 = local_248.ShaderMap;
              local_2e0 = local_248.ShaderContent;
              break;
            case '1':
              pFVar20 = TPageTableUpdatePS<49>::GetStaticType();
              if (*(int *)&pFVar20->field_0x50 != 1) {
                local_305 = 0;
                `FGlobalShaderMap::GetShader<TPageTableUpdatePS<49>_>'::__l2::<lambda_1>::operator()
                          (&local_305);
              }
              pFVar21 = (FShaderType *)TPageTableUpdatePS<49>::GetStaticType();
              FGlobalShaderMap::GetShader(this_01,&local_220,pFVar21,0);
              if (local_220.ShaderContent == (FShader *)0x0) {
                FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_110);
                ::FName::ToString((FName *)FVar22,&local_f8);
                TPageTableUpdatePS<49>::GetStaticType();
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Shader.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                    ,0xc0,L"Failed to find shader type %s in Platform %s");
                if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                }
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              TPageTableUpdatePS<49>::GetStaticType();
              local_300 = local_220.ShaderMap;
              local_2e0 = local_220.ShaderContent;
              break;
            case 'D':
              pFVar20 = TPageTableUpdatePS<68>::GetStaticType();
              if (*(int *)&pFVar20->field_0x50 != 1) {
                local_302 = 0;
                `FGlobalShaderMap::GetShader<TPageTableUpdatePS<68>_>'::__l2::<lambda_1>::operator()
                          (&local_302);
              }
              pFVar21 = (FShaderType *)TPageTableUpdatePS<68>::GetStaticType();
              FGlobalShaderMap::GetShader(this_01,&local_1c0,pFVar21,0);
              if (local_1c0.ShaderContent == (FShader *)0x0) {
                FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_148);
                ::FName::ToString((FName *)FVar22,&local_c8);
                TPageTableUpdatePS<68>::GetStaticType();
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Shader.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                    ,0xc0,L"Failed to find shader type %s in Platform %s");
                if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                }
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              TPageTableUpdatePS<68>::GetStaticType();
              local_300 = local_1c0.ShaderMap;
              local_2e0 = local_1c0.ShaderContent;
            }
            if (local_2e0 == (FShader *)0x0) {
LAB_1458de00d:
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PixelShader.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.cpp"
                                  ,0x1c1,L"");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            pFVar10 = local_300;
            uVar33 = this->CachedPageTableWidth;
            uVar26 = this->CachedPageTableHeight;
            if (this->CachedNumPageTableLevels != 0) {
              lVar28 = (ulonglong)uVar29 << 4;
              local_2f0 = lVar28;
              do {
                iVar15 = ExpandedUpdates[0][uVar30 + lVar28].ArrayNum;
                local_300 = (FShaderMapBase *)CONCAT44(local_300._4_4_,iVar15);
                iVar16 = 0;
                if (iVar15 != 0) {
                  puVar23 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x130,0x10);
                  if (puVar23 == (undefined8 *)0x0) {
                    puVar23 = (undefined8 *)0x0;
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Object",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                        ,0x61,L"");
                    if (bVar12) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                  }
                  else {
                    puVar23[2] = 0;
                    *puVar23 = &___7__TObject_VFPageTableUpdateParameters___FRDGAllocator__6B_;
                    FRenderTargetBindingSlots::FRenderTargetBindingSlots
                              ((FRenderTargetBindingSlots *)(puVar23 + 6));
                  }
                  local_2c0 = puVar23;
                  if ((((undefined8 **)param_2->_padding_ <= &local_2c0) &&
                      (&local_2c0 <
                       (undefined8 **)param_2->_padding_ +
                       *(int *)((longlong)&param_2->_padding_ + 4))) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar15 = (int)param_2->_padding_;
                  piVar17 = (int *)((longlong)&param_2->_padding_ + 4);
                  if (iVar15 == *piVar17) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,(ForAnyElementType *)&param_2->_padding_,piVar17);
                  }
                  *(int *)&param_2->_padding_ = iVar15 + 1;
                  pFVar2 = (FPageTableUpdateParameters *)(puVar23 + 2);
                  local_280.ResolveTexture = (FRDGTexture *)0x0;
                  local_280.LoadAction = ELoad;
                  local_280.MipIndex = (uchar)uVar30;
                  *(undefined8 **)(param_2->_padding_ + (longlong)iVar15 * 8) = local_2c0;
                  (pFVar2->VS).UpdateBuffer = local_268;
                  local_2b8 = this->CachedPageTableWidth;
                  uStack_2b4 = this->CachedPageTableHeight;
                  puVar23[3] = *(undefined8 *)&this->CachedPageTableWidth;
                  *(int *)(puVar23 + 4) = iVar13;
                  *(uint *)((longlong)puVar23 + 0x24) = (uint)local_300;
                  local_280.Texture = local_2d8;
                  local_280.ArraySlice = -1;
                  bVar12 = FRenderTargetBinding::Validate(&local_280);
                  if ((!bVar12) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Validate()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                          ,0x216,L""), bVar12)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar29 = local_2d0;
                  local_198.VertexShader.ShaderContent = (FPageTableUpdateVS *)local_2b0;
                  local_198.VertexShader.ShaderMap = local_2a8;
                  local_198.PixelShader.ShaderContent = (FGlobalShader *)local_2e0;
                  local_198.BlendStateRHI = local_2c8;
                  puVar23[6] = local_280.Texture;
                  puVar23[7] = local_280.ResolveTexture;
                  local_198.NumUpdates = (uint)local_300;
                  puVar23[8] = CONCAT44(local_280._20_4_,
                                        CONCAT22(local_280.ArraySlice,
                                                 CONCAT11(local_280.MipIndex,local_280.LoadAction)))
                  ;
                  local_198.PixelShader.ShaderMap = pFVar10;
                  local_198.PassParameters = pFVar2;
                  local_198.MipWidth = uVar33;
                  local_198.MipHeight = uVar26;
                  pFVar24 = FRDGEventName::FRDGEventName(&local_50,L"PageTableUpdate (Mip: %d)");
                  FRDGBuilder::
                  AddPass<FPageTableUpdateParameters,_FVirtualTextureSpace::ApplyUpdates_::__l84::<lambda_3>_>
                            (param_2,pFVar24,pFVar2,Raster,&local_198);
                  if (((uVar29 & 2) != 0) &&
                     (uVar29 = uVar29 & 0xfffffffd, param_2 != (FRDGBuilder *)0x0)) {
                    FMemory::Free(param_2);
                  }
                  local_2d0 = uVar29 & 0xfffffffe;
                  if (local_50.FormattedEventName.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_50.FormattedEventName.Data.AllocatorInstance.Data);
                  }
                  lVar28 = uVar30 + local_2f0;
                  iVar15 = ExpandedUpdates[0][lVar28].ArrayMax;
                  ExpandedUpdates[0][lVar28].ArrayNum = 0;
                  if (iVar15 < 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,4,0,&ExpandedUpdates[0][lVar28].AllocatorInstance,0,
                               &ExpandedUpdates[0][lVar28].ArrayMax);
                  }
                  lVar28 = local_2f0;
                  iVar16 = (uint)local_300;
                }
                uVar29 = uVar33 >> 1;
                iVar13 = iVar13 + iVar16;
                uVar33 = 1;
                if (1 < uVar29) {
                  uVar33 = uVar29;
                }
                uVar29 = uVar26 >> 1;
                uVar26 = 1;
                if (1 < uVar29) {
                  uVar26 = uVar29;
                }
                uVar34 = (int)uVar30 + 1;
                uVar30 = (ulonglong)uVar34;
                uVar29 = local_2f8;
              } while (uVar34 < this->CachedNumPageTableLevels);
            }
            pTVar25 = FRDGBuilder::ConvertToExternalTexture(param_2,local_2d8);
            pIVar6 = pTVar25->Reference;
            pIVar7 = (local_260->RenderTarget).Reference;
            if (pIVar7 != pIVar6) {
              (local_260->RenderTarget).Reference = pIVar6;
              if (pIVar6 != (IPooledRenderTarget *)0x0) {
                (**(code **)(pIVar6->_padding_ + 0x30))();
              }
              if (pIVar7 != (IPooledRenderTarget *)0x0) {
                (**(code **)(pIVar7->_padding_ + 0x38))(pIVar7);
              }
            }
            local_2f8 = uVar29 + 1;
            this_01 = local_258;
            FVar31.GPUMask = local_2e8;
          } while (local_2f8 < (this->Description).NumPageTableLayers);
        }
        if (local_228 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_238);
        }
      }
    }
    FRHIComputeCommandList::SetGPUMask(local_250,FVar31);
  }
  ScopeExitSupport::TScopeGuard<`FVirtualTextureSpace::ApplyUpdates'::__l2::<lambda_1>_>::
  ~TScopeGuard<_FVirtualTextureSpace::ApplyUpdates_::__l2::<lambda_1>_>(&local_1b0);
  return;
}

// DumpToConsole @ 1458ebf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVirtualTextureSpace::DumpToConsole(FVirtualTextureSpace *this,bool param_1)

{
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  FVirtualTextureAllocator::DumpToConsole(&this->Allocator,param_1);
  return;
}

// FinalizeTextures @ 1458f6440

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureSpace::FinalizeTextures
          (FVirtualTextureSpace *this,FRDGBuilder *param_1,FRDGExternalAccessQueue *param_2)

{
  int *piVar1;
  IPooledRenderTarget *pIVar2;
  FResource *pFVar3;
  int iVar4;
  FRDGTexture *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  if ((this->Description).NumPageTableLayers != '\0') {
    do {
      pIVar2 = this->PageTable[uVar7 >> 2].RenderTarget.Reference;
      if ((pIVar2 != (IPooledRenderTarget *)0x0) &&
         (pFVar5 = FRDGBuilder::FindExternalTexture
                             (param_1,(pIVar2->RenderTargetItem).TargetableTexture.Reference),
         pFVar5 != (FRDGTexture *)0x0)) {
        iVar4 = (param_2->Resources).ArrayNum;
        piVar1 = &(param_2->Resources).ArrayMax;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                            (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,
                             piVar1);
        }
        (param_2->Resources).ArrayNum = iVar4 + 1;
        pFVar3 = (param_2->Resources).AllocatorInstance.Data;
        pFVar3[iVar4].Resource = (FRDGViewableResource *)pFVar5;
        pFVar3[iVar4].Access = SRVMask;
        pFVar3[iVar4].Pipelines = All;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < (this->Description).NumPageTableLayers);
  }
  return;
}

// FreeVirtualTexture @ 1458f9790

void __thiscall
FVirtualTextureSpace::FreeVirtualTexture
          (FVirtualTextureSpace *this,FAllocatedVirtualTexture *param_1)

{
  FVirtualTextureAllocator::Free(&this->Allocator,param_1);
  return;
}

// GetRequiredPageTableAllocationSize @ 145902de0

TIntPoint<unsigned_int> __thiscall
FVirtualTextureSpace::GetRequiredPageTableAllocationSize(FVirtualTextureSpace *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  TIntPoint<unsigned_int>_u_0 in_RDX;
  bool bVar4;
  
  bVar4 = (this->Description).bPrivateSpace == '\0';
  lVar3 = 0x30;
  if (bVar4) {
    lVar3 = 0x40;
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + lVar3);
  uVar2 = 0x30;
  if (bVar4) {
    uVar2 = 0x3c;
  }
  *(uint *)in_RDX = *(int *)((longlong)&this->_padding_ + (ulonglong)uVar2) + 0x1fU & 0xffffffe0;
  *(uint *)((longlong)in_RDX + 4) = iVar1 + 0x1fU & 0xffffffe0;
  return (TIntPoint<unsigned_int>)in_RDX;
}

// GetSizeInBytes @ 1459030d0

uint __thiscall FVirtualTextureSpace::GetSizeInBytes(FVirtualTextureSpace *this)

{
  longlong lVar1;
  ulong64 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  bVar10 = (this->Description).bPrivateSpace == '\0';
  lVar1 = 0x30;
  if (bVar10) {
    lVar1 = 0x40;
  }
  iVar5 = 0;
  uVar3 = 0;
  iVar6 = *(int *)((longlong)&this->_padding_ + lVar1);
  uVar8 = 0x30;
  if (bVar10) {
    uVar8 = 0x3c;
  }
  iVar4 = *(int *)((longlong)&this->_padding_ + (ulonglong)uVar8);
  uVar9 = iVar6 + 0x1fU & 0xffffffe0;
  uVar8 = iVar4 + 0x1fU & 0xffffffe0;
  if (uVar9 < uVar8) {
    iVar6 = iVar4;
  }
  uVar7 = iVar6 + 0x1fU & 0xffffffe0;
  iVar6 = 0x1f;
  if (uVar7 != 0) {
    for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar4 = 0;
  if (uVar7 != 0) {
    iVar4 = iVar6;
  }
  if (((this->Description).NumPageTableLayers + 3 & 0xfffffffc) != 0) {
    do {
      uVar2 = CalcTextureSize(uVar8,uVar9,this->TexturePixelFormat[uVar3].Value,iVar4 + 1);
      iVar5 = iVar5 + (int)uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (this->Description).NumPageTableLayers + 3 >> 2);
  }
  uVar8 = (this->Description).IndirectionTextureSize;
  uVar2 = CalculateImageBytes(uVar8,uVar8,0,'\x1c');
  return (int)uVar2 + iVar5;
}

// InitRHI @ 14590d4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureSpace::InitRHI(FVirtualTextureSpace *this,FRHICommandListBase *param_1)

{
  FRHITextureReference *pFVar1;
  TRefCountPtr<FRHITextureReference> *pTVar2;
  uint uVar3;
  TRefCountPtr<FRHITextureReference> local_18;
  TRefCountPtr<FRHITextureReference> local_10;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (((this->Description).NumPageTableLayers + 3 & 0xfffffffc) != 0) {
    do {
      (**(code **)(GDynamicRHI->_padding_ + 0x1a8))
                (GDynamicRHI,&local_18,param_1,(GBlackUintTexture->TextureRHI).Reference);
      pTVar2 = &this->PageTable[uVar4].TextureReferenceRHI;
      if (pTVar2 == &local_18) {
LAB_14590d537:
        if (local_18.Reference != (FRHITextureReference *)0x0) {
          FRHIResource::Release((FRHIResource *)local_18.Reference);
        }
      }
      else {
        pFVar1 = pTVar2->Reference;
        pTVar2->Reference = local_18.Reference;
        local_18.Reference = (FRHITextureReference *)0x0;
        if (pFVar1 != (FRHITextureReference *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar1);
          goto LAB_14590d537;
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (this->Description).NumPageTableLayers + 3 >> 2);
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1a8))
            (GDynamicRHI,&local_10,param_1,(GBlackUintTexture->TextureRHI).Reference);
  pTVar2 = &(this->PageTableIndirection).TextureReferenceRHI;
  if (pTVar2 != &local_10) {
    pFVar1 = pTVar2->Reference;
    pTVar2->Reference = local_10.Reference;
    local_10.Reference = (FRHITextureReference *)0x0;
    if (pFVar1 == (FRHITextureReference *)0x0) {
      return;
    }
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  if (local_10.Reference != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)local_10.Reference);
  }
  return;
}

// QueueUpdate @ 145913dc0

void __thiscall
FVirtualTextureSpace::QueueUpdate
          (FVirtualTextureSpace *this,uchar param_1,uchar param_2,uint param_3,uchar param_4,
          FPhysicalTileLocation *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *pTVar5;
  uint local_18;
  ushort uStack_14;
  uchar uStack_12;
  uchar uStack_11;
  
  uStack_14 = param_5->Packed;
  uStack_12 = param_4;
  local_18 = param_3;
  uStack_11 = param_2;
  if ((param_3 & (1 << ((this->Description).Dimensions * param_2 & 0x1f)) - 1U) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(vAddress & LowBitMask) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureShared.h"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = this->PageTableUpdates + param_1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(ulonglong *)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       CONCAT17(uStack_11,CONCAT16(uStack_12,CONCAT24(uStack_14,local_18)));
  return;
}

// QueueUpdateEntirePageTable @ 145913ef0

void __thiscall FVirtualTextureSpace::QueueUpdateEntirePageTable(FVirtualTextureSpace *this)

{
  this->bForceEntireUpdate = true;
  return;
}

// ReleaseRHI @ 145916a40

void __thiscall FVirtualTextureSpace::ReleaseRHI(FVirtualTextureSpace *this)

{
  FRHITextureReference *pFVar1;
  
  pFVar1 = this->PageTable[0].TextureReferenceRHI.Reference;
  if (pFVar1 != (FRHITextureReference *)0x0) {
    this->PageTable[0].TextureReferenceRHI.Reference = (FRHITextureReference *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRenderTargetPool::FreeUnusedResource
            ((FRenderTargetPool *)&GRenderTargetPool,&this->PageTable[0].RenderTarget);
  pFVar1 = this->PageTable[1].TextureReferenceRHI.Reference;
  if (pFVar1 != (FRHITextureReference *)0x0) {
    this->PageTable[1].TextureReferenceRHI.Reference = (FRHITextureReference *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRenderTargetPool::FreeUnusedResource
            ((FRenderTargetPool *)&GRenderTargetPool,&this->PageTable[1].RenderTarget);
  pFVar1 = (this->PageTableIndirection).TextureReferenceRHI.Reference;
  if (pFVar1 != (FRHITextureReference *)0x0) {
    (this->PageTableIndirection).TextureReferenceRHI.Reference = (FRHITextureReference *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRenderTargetPool::FreeUnusedResource
            ((FRenderTargetPool *)&GRenderTargetPool,&(this->PageTableIndirection).RenderTarget);
  return;
}

