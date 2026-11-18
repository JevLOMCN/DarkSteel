// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FTileUploader @ 148712850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTileUploader * __thiscall UE::SVT::FTileUploader::FTileUploader(FTileUploader *this)

{
  (this->OccupancyBitsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->TileDataOffsetsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->DstTileCoordsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->TileDataAUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->TileDataBUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->TileDataOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileDataOffsets).ArrayNum = 0;
  (this->TileDataOffsets).ArrayMax = 0;
  this->OccupancyBitsAPtr = (uchar *)0x0;
  this->OccupancyBitsBPtr = (uchar *)0x0;
  this->TileDataOffsetsAPtr = (uchar *)0x0;
  this->TileDataOffsetsBPtr = (uchar *)0x0;
  this->TileCoordsPtr = (uchar *)0x0;
  this->TileDataAPtr = (uchar *)0x0;
  this->TileDataBPtr = (uchar *)0x0;
  this->MaxNumTiles = 0;
  this->MaxNumVoxelsA = 0;
  this->MaxNumVoxelsB = 0;
  this->FormatA = PF_Unknown;
  this->FormatB = PF_Unknown;
  this->FormatSizeA = 0;
  this->FormatSizeB = 0;
  this->NumWrittenTiles = 0;
  this->NumWrittenVoxelsA = 0;
  this->NumWrittenVoxelsB = 0;
  return this;
}

// ~FTileUploader @ 148714a50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UE::SVT::FTileUploader::~FTileUploader(FTileUploader *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  
  pFVar2 = (this->TileDataOffsets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->TileDataBUploadBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->TileDataAUploadBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->DstTileCoordsUploadBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->TileDataOffsetsUploadBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->OccupancyBitsUploadBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

// Add_GetRef @ 1487207a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAddResult * __thiscall
UE::SVT::FTileUploader::Add_GetRef
          (FTileUploader *this,FAddResult *__return_storage_ptr__,int param_1,int param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  FAddResult *pFVar3;
  uchar *puVar4;
  uchar *puVar5;
  
  if ((this->MaxNumTiles < this->NumWrittenTiles + param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumWrittenTiles + InNumTiles) <= MaxNumTiles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0xbd,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAddResult *)(*pcVar1)();
    return pFVar3;
  }
  if ((this->MaxNumVoxelsA < this->NumWrittenVoxelsA + param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumWrittenVoxelsA + InNumVoxelsA) <= MaxNumVoxelsA",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0xbe,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAddResult *)(*pcVar1)();
    return pFVar3;
  }
  if ((this->MaxNumVoxelsB < this->NumWrittenVoxelsB + param_3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumWrittenVoxelsB + InNumVoxelsB) <= MaxNumVoxelsB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0xbf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAddResult *)(*pcVar1)();
    return pFVar3;
  }
  if ((this->TileCoordsPtr == (uchar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TileCoordsPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0xc0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAddResult *)(*pcVar1)();
    return pFVar3;
  }
  if (((0 < this->FormatSizeA) && (this->TileDataAPtr == (uchar *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FormatSizeA <= 0 || TileDataAPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0xc1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAddResult *)(*pcVar1)();
    return pFVar3;
  }
  if (((0 < this->FormatSizeB) && (this->TileDataBPtr == (uchar *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FormatSizeB <= 0 || TileDataBPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0xc2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAddResult *)(*pcVar1)();
    return pFVar3;
  }
  puVar5 = (uchar *)0x0;
  (__return_storage_ptr__->OccupancyBitsPtrs).Elements[0] = (uchar *)0x0;
  (__return_storage_ptr__->OccupancyBitsPtrs).Elements[1] = (uchar *)0x0;
  (__return_storage_ptr__->TileDataOffsetsPtrs).Elements[0] = (uchar *)0x0;
  (__return_storage_ptr__->TileDataOffsetsPtrs).Elements[1] = (uchar *)0x0;
  (__return_storage_ptr__->TileDataPtrs).Elements[0] = (uchar *)0x0;
  (__return_storage_ptr__->TileDataPtrs).Elements[1] = (uchar *)0x0;
  *(undefined8 *)(__return_storage_ptr__->TileDataBaseOffsets).Elements = 0;
  __return_storage_ptr__->PackedPhysicalTileCoordsPtr = (uchar *)0x0;
  puVar4 = puVar5;
  if (this->TileDataAPtr != (uchar *)0x0) {
    puVar4 = this->OccupancyBitsAPtr + (longlong)(this->NumWrittenTiles * 0xb7) * 4;
  }
  (__return_storage_ptr__->OccupancyBitsPtrs).Elements[0] = puVar4;
  puVar4 = puVar5;
  if (this->TileDataBPtr != (uchar *)0x0) {
    puVar4 = this->OccupancyBitsBPtr + (longlong)(this->NumWrittenTiles * 0xb7) * 4;
  }
  (__return_storage_ptr__->OccupancyBitsPtrs).Elements[1] = puVar4;
  puVar4 = puVar5;
  if (this->TileDataAPtr != (uchar *)0x0) {
    puVar4 = this->TileDataOffsetsAPtr + (longlong)this->NumWrittenTiles * 4;
  }
  (__return_storage_ptr__->TileDataOffsetsPtrs).Elements[0] = puVar4;
  puVar4 = puVar5;
  if (this->TileDataBPtr != (uchar *)0x0) {
    puVar4 = this->TileDataOffsetsBPtr + (longlong)this->NumWrittenTiles * 4;
  }
  (__return_storage_ptr__->TileDataOffsetsPtrs).Elements[1] = puVar4;
  puVar4 = puVar5;
  if (this->TileDataAPtr != (uchar *)0x0) {
    puVar4 = this->TileDataAPtr + this->FormatSizeA * this->NumWrittenVoxelsA;
  }
  (__return_storage_ptr__->TileDataPtrs).Elements[0] = puVar4;
  if (this->TileDataBPtr != (uchar *)0x0) {
    puVar5 = this->TileDataBPtr + this->NumWrittenVoxelsB * this->FormatSizeB;
  }
  (__return_storage_ptr__->TileDataPtrs).Elements[1] = puVar5;
  (__return_storage_ptr__->TileDataBaseOffsets).Elements[0] = this->NumWrittenVoxelsA;
  (__return_storage_ptr__->TileDataBaseOffsets).Elements[1] = this->NumWrittenVoxelsB;
  __return_storage_ptr__->PackedPhysicalTileCoordsPtr =
       this->TileCoordsPtr + (longlong)this->NumWrittenTiles * 4;
  this->NumWrittenVoxelsA = this->NumWrittenVoxelsA + param_2;
  this->NumWrittenTiles = this->NumWrittenTiles + param_1;
  this->NumWrittenVoxelsB = this->NumWrittenVoxelsB + param_3;
  return __return_storage_ptr__;
}

// Init @ 148743700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::SVT::FTileUploader::Init
          (FTileUploader *this,FRDGBuilder *param_1,int param_2,int param_3,int param_4,
          EPixelFormat param_5,EPixelFormat param_6)

{
  longlong *plVar1;
  int *piVar2;
  FRDGPooledBuffer *pFVar3;
  FRHICommandListBase *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uchar *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uStack_ac;
  FRDGBufferDesc local_a0;
  FRDGBufferDesc local_88;
  FRDGBufferDesc local_70;
  FRDGBufferDesc local_58;
  FRDGBufferDesc local_40;
  
  if ((param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMaxNumTiles >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0x68,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMaxNumVoxelsA >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0x69,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMaxNumVoxelsB >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0x6a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((param_5 == PF_Unknown) && (param_6 == PF_Unknown)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFormatA != PF_Unknown || InFormatB != PF_Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0x6b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->MaxNumTiles = param_2;
  this->FormatSizeA = 0;
  this->FormatSizeB = 0;
  this->OccupancyBitsAPtr = (uchar *)0x0;
  this->OccupancyBitsBPtr = (uchar *)0x0;
  this->TileDataOffsetsAPtr = (uchar *)0x0;
  this->TileDataOffsetsBPtr = (uchar *)0x0;
  this->TileCoordsPtr = (uchar *)0x0;
  this->TileDataAPtr = (uchar *)0x0;
  this->TileDataBPtr = (uchar *)0x0;
  this->NumWrittenTiles = 0;
  this->NumWrittenVoxelsA = 0;
  this->NumWrittenVoxelsB = 0;
  this->MaxNumVoxelsA = param_3;
  this->MaxNumVoxelsB = param_4;
  this->FormatA = param_5;
  this->FormatB = param_6;
  this->FormatSizeA = GPixelFormats[param_5].BlockBytes;
  this->FormatSizeB = GPixelFormats[param_6].BlockBytes;
  bVar6 = IsRegistered(param_1,&this->DstTileCoordsUploadBuffer);
  if (bVar6) {
    pFVar3 = (this->OccupancyBitsUploadBuffer).Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      (this->OccupancyBitsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    pFVar3 = (this->TileDataOffsetsUploadBuffer).Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      (this->TileDataOffsetsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    pFVar3 = (this->DstTileCoordsUploadBuffer).Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      (this->DstTileCoordsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    pFVar3 = (this->TileDataAUploadBuffer).Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      (this->TileDataAUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    pFVar3 = (this->TileDataBUploadBuffer).Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      (this->TileDataBUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  if ((this->FormatA == PF_Unknown) || (iVar7 = 2, this->FormatB == PF_Unknown)) {
    iVar7 = 1;
  }
  if (0 < this->MaxNumTiles) {
    this_00 = (FRHICommandListBase *)param_1->_padding_;
    lVar9 = 0;
    uVar11 = this->MaxNumTiles * iVar7 * 0x2dc;
    local_a0.Metadata = (FShaderParametersMetadata *)0x0;
    local_a0.NumElements = uVar11 >> 2;
    local_a0.BytesPerElement = 4;
    local_a0._12_4_ = uStack_ac;
    local_a0.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|Dynamic;
    AllocatePooledBuffer
              (&local_a0,&this->OccupancyBitsUploadBuffer,
               L"SparseVolumeTexture.OccupancyBitsUploadBuffer",Page);
    puVar8 = FRHICommandListBase::LockBuffer
                       (this_00,(((this->OccupancyBitsUploadBuffer).Reference)->Buffer).Reference,0,
                        uVar11,RLM_WriteOnly);
    this->OccupancyBitsAPtr = puVar8;
    lVar10 = lVar9;
    if (this->FormatA != PF_Unknown) {
      lVar10 = (longlong)(this->MaxNumTiles * 0xb7) << 2;
    }
    this->OccupancyBitsBPtr = puVar8 + lVar10;
    local_88.Metadata = (FShaderParametersMetadata *)0x0;
    local_88._0_8_ = CONCAT44(iVar7 * this->MaxNumTiles,4) & 0x3fffffffffffffff;
    local_88._12_4_ = uStack_ac;
    local_88.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|Dynamic;
    AllocatePooledBuffer
              (&local_88,&this->TileDataOffsetsUploadBuffer,
               L"SparseVolumeTexture.TileDataOffsetsUploadBuffer",Page);
    uVar11 = iVar7 * this->MaxNumTiles;
    piVar2 = &(this->TileDataOffsets).ArrayNum;
    iVar7 = *piVar2;
    if (iVar7 < (int)uVar11) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11 - iVar7,&(this->TileDataOffsets).AllocatorInstance,piVar2,
                 &(this->TileDataOffsets).ArrayMax);
    }
    else {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if ((int)uVar11 < iVar7) {
        uVar12 = iVar7 - uVar11;
        if (((int)(uVar12 | uVar11) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar12 != 0) {
          pFVar4 = (this->TileDataOffsets).AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
          iVar7 = (*piVar2 - uVar11) - uVar12;
          if (iVar7 != 0) {
            memmove(pFVar4,pFVar4 + (longlong)(int)uVar12 * 4,(longlong)iVar7 << 2);
          }
          *piVar2 = *piVar2 - uVar12;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&(this->TileDataOffsets).AllocatorInstance,*piVar2,
                     &(this->TileDataOffsets).ArrayMax);
        }
      }
    }
    pFVar4 = (this->TileDataOffsets).AllocatorInstance.Data;
    this->TileDataOffsetsAPtr = (uchar *)pFVar4;
    if (this->FormatA != PF_Unknown) {
      lVar9 = (longlong)this->MaxNumTiles << 2;
    }
    iVar7 = this->MaxNumTiles;
    this->TileDataOffsetsBPtr = (uchar *)(pFVar4 + lVar9);
    local_70._0_8_ = CONCAT44(iVar7,4) & 0x3fffffffffffffff;
    local_70._12_4_ = uStack_ac;
    local_70.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|Dynamic;
    local_70.Metadata = (FShaderParametersMetadata *)0x0;
    AllocatePooledBuffer
              (&local_70,&this->DstTileCoordsUploadBuffer,
               L"SparseVolumeTexture.TileCoordsUploadBuffer",Page);
    puVar8 = FRHICommandListBase::LockBuffer
                       (this_00,(((this->DstTileCoordsUploadBuffer).Reference)->Buffer).Reference,0,
                        iVar7 << 2,RLM_WriteOnly);
    this->TileCoordsPtr = puVar8;
    if (0 < this->FormatSizeA) {
      uVar11 = 1;
      if (1 < this->MaxNumVoxelsA) {
        uVar11 = this->MaxNumVoxelsA;
      }
      local_58.NumElements = uVar11;
      local_58.BytesPerElement = this->FormatSizeA;
      local_58.Metadata = (FShaderParametersMetadata *)0x0;
      local_58._12_4_ = uStack_ac;
      local_58.Usage = VertexBuffer|ShaderResource|Dynamic;
      AllocatePooledBuffer
                (&local_58,&this->TileDataAUploadBuffer,L"SparseVolumeTexture.TileDataAUploadBuffer"
                 ,Page);
      iVar7 = 1;
      if (1 < this->MaxNumVoxelsA) {
        iVar7 = this->MaxNumVoxelsA;
      }
      puVar8 = FRHICommandListBase::LockBuffer
                         (this_00,(((this->TileDataAUploadBuffer).Reference)->Buffer).Reference,0,
                          iVar7 * this->FormatSizeA,RLM_WriteOnly);
      this->TileDataAPtr = puVar8;
    }
    if (0 < this->FormatSizeB) {
      uVar11 = 1;
      if (1 < this->MaxNumVoxelsB) {
        uVar11 = this->MaxNumVoxelsB;
      }
      local_40.NumElements = uVar11;
      local_40.BytesPerElement = this->FormatSizeB;
      local_40.Metadata = (FShaderParametersMetadata *)0x0;
      local_40._12_4_ = uStack_ac;
      local_40.Usage = VertexBuffer|ShaderResource|Dynamic;
      AllocatePooledBuffer
                (&local_40,&this->TileDataBUploadBuffer,L"SparseVolumeTexture.TileDataBUploadBuffer"
                 ,Page);
      iVar7 = 1;
      if (1 < this->MaxNumVoxelsB) {
        iVar7 = this->MaxNumVoxelsB;
      }
      puVar8 = FRHICommandListBase::LockBuffer
                         (this_00,(((this->TileDataBUploadBuffer).Reference)->Buffer).Reference,0,
                          iVar7 * this->FormatSizeB,RLM_WriteOnly);
      this->TileDataBPtr = puVar8;
    }
  }
  return;
}

// Release @ 148751c00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UE::SVT::FTileUploader::Release(FTileUploader *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->OccupancyBitsUploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->OccupancyBitsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->TileDataOffsetsUploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->TileDataOffsetsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->DstTileCoordsUploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->DstTileCoordsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->TileDataAUploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->TileDataAUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->TileDataBUploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->TileDataBUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  (this->TileDataOffsets).ArrayNum = 0;
  if ((this->TileDataOffsets).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TileDataOffsets).AllocatorInstance,0,&(this->TileDataOffsets).ArrayMax)
    ;
  }
  this->OccupancyBitsAPtr = (uchar *)0x0;
  this->OccupancyBitsBPtr = (uchar *)0x0;
  this->TileDataOffsetsAPtr = (uchar *)0x0;
  this->TileDataOffsetsBPtr = (uchar *)0x0;
  this->TileCoordsPtr = (uchar *)0x0;
  this->TileDataAPtr = (uchar *)0x0;
  this->TileDataBPtr = (uchar *)0x0;
  this->MaxNumTiles = 0;
  this->MaxNumVoxelsA = 0;
  this->MaxNumVoxelsB = 0;
  this->FormatA = PF_Unknown;
  this->FormatB = PF_Unknown;
  this->FormatSizeA = 0;
  this->FormatSizeB = 0;
  this->NumWrittenTiles = 0;
  this->NumWrittenVoxelsA = 0;
  this->NumWrittenVoxelsB = 0;
  return;
}

// ResetState @ 148754ba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UE::SVT::FTileUploader::ResetState(FTileUploader *this)

{
  this->OccupancyBitsAPtr = (uchar *)0x0;
  this->OccupancyBitsBPtr = (uchar *)0x0;
  this->TileDataOffsetsAPtr = (uchar *)0x0;
  this->TileDataOffsetsBPtr = (uchar *)0x0;
  this->TileCoordsPtr = (uchar *)0x0;
  this->TileDataAPtr = (uchar *)0x0;
  this->TileDataBPtr = (uchar *)0x0;
  this->MaxNumTiles = 0;
  this->MaxNumVoxelsA = 0;
  this->MaxNumVoxelsB = 0;
  this->FormatA = PF_Unknown;
  this->FormatB = PF_Unknown;
  this->FormatSizeA = 0;
  this->FormatSizeB = 0;
  this->NumWrittenTiles = 0;
  this->NumWrittenVoxelsA = 0;
  this->NumWrittenVoxelsB = 0;
  return;
}

// ResourceUploadTo @ 148754ef0

/* WARNING: Removing unreachable block (ram,0x000148755a7e) */
/* WARNING: Removing unreachable block (ram,0x000148755a8e) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
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
UE::SVT::FTileUploader::ResourceUploadTo
          (FTileUploader *this,FRDGBuilder *param_1,TRefCountPtr<IPooledRenderTarget> *param_2,
          TRefCountPtr<IPooledRenderTarget> *param_3,TVector4<float> *param_4,
          TVector4<float> *param_5)

{
  int *piVar1;
  FRHICommandListBase *this_00;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  FRDGTexture *pFVar8;
  FRDGTexture *pFVar9;
  FRDGBuffer *pFVar10;
  FGlobalShaderMap *this_01;
  FShaderType *pFVar11;
  FName this_02;
  FRDGBufferSRV *pFVar12;
  FRDGBufferSRV *pFVar13;
  undefined8 *puVar14;
  FRDGBufferSRV *pFVar15;
  FRDGEventName *pFVar16;
  FShaderParametersMetadata *pFVar17;
  FRDGBufferSRVDesc *pFVar18;
  byte bVar19;
  int iVar20;
  ERDGPassFlags EVar21;
  int iVar22;
  undefined4 uVar23;
  longlong lVar24;
  int iVar25;
  int local_res8;
  int local_res18;
  int local_res20;
  int local_248;
  int local_244;
  int local_240;
  undefined8 *local_238;
  FRDGBuffer *local_230;
  longlong local_228;
  FRDGTexture *local_220;
  FRDGBuffer *local_218;
  FRDGTextureUAV *local_210;
  FRDGTextureUAV *local_208;
  FRDGBufferSRV *local_200;
  longlong local_1f8;
  FRDGTexture *local_1f0;
  TIntVector3<int>_u_0 local_1e8;
  FRDGTextureUAVDesc local_1d8;
  FRDGTextureUAVDesc local_1c0;
  FRDGBufferSRVDesc local_1a8;
  FRDGBufferSRVDesc local_188;
  FRDGBufferSRV *local_168;
  FRDGBufferSRV *local_160;
  FRDGBufferSRV *local_158;
  FRDGBufferSRVDesc local_150;
  FRDGBufferSRVDesc local_130;
  FRDGBufferSRVDesc local_110;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  FRDGBufferSRVDesc local_d8;
  FRDGBufferSRVDesc local_b8;
  undefined1 local_98 [8];
  FString local_90;
  TShaderRefBase<FSparseVolumeTextureUpdateFromSparseBufferCS,FShaderMapPointerTable> local_78;
  FRDGEventName local_68;
  
  if (((param_2->Reference == (IPooledRenderTarget *)0x0) && (0 < this->FormatSizeA)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDstTextureA || FormatSizeA <= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0xe3,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_3->Reference == (IPooledRenderTarget *)0x0) && (0 < this->FormatSizeB)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDstTextureB || FormatSizeB <= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                         ,0xe4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (0 < this->MaxNumTiles) {
    this_00 = (FRHICommandListBase *)param_1->_padding_;
    FRHICommandListBase::UnlockBuffer
              (this_00,(((this->OccupancyBitsUploadBuffer).Reference)->Buffer).Reference);
    FRHICommandListBase::UnlockBuffer
              (this_00,(((this->DstTileCoordsUploadBuffer).Reference)->Buffer).Reference);
    _Dst = FRHICommandListBase::LockBuffer
                     (this_00,(((this->TileDataOffsetsUploadBuffer).Reference)->Buffer).Reference,0,
                      (this->TileDataOffsets).ArrayNum << 2,RLM_WriteOnly);
    memcpy(_Dst,(this->TileDataOffsets).AllocatorInstance.Data,
           (longlong)(this->TileDataOffsets).ArrayNum << 2);
    FRHICommandListBase::UnlockBuffer
              (this_00,(((this->TileDataOffsetsUploadBuffer).Reference)->Buffer).Reference);
    if (this->TileDataAPtr != (uchar *)0x0) {
      FRHICommandListBase::UnlockBuffer
                (this_00,(((this->TileDataAUploadBuffer).Reference)->Buffer).Reference);
    }
    if (this->TileDataBPtr != (uchar *)0x0) {
      FRHICommandListBase::UnlockBuffer
                (this_00,(((this->TileDataBUploadBuffer).Reference)->Buffer).Reference);
    }
    if (0 < this->NumWrittenTiles) {
      pFVar9 = (FRDGTexture *)0x0;
      local_220 = (FRDGTexture *)0x0;
      local_1f0 = (FRDGTexture *)0x0;
      pFVar8 = pFVar9;
      if (param_2->Reference != (IPooledRenderTarget *)0x0) {
        pFVar8 = FRDGBuilder::RegisterExternalTexture(param_1,param_2,None);
        local_220 = pFVar8;
        FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)pFVar8);
      }
      if (param_3->Reference != (IPooledRenderTarget *)0x0) {
        pFVar9 = FRDGBuilder::RegisterExternalTexture(param_1,param_3,None);
        local_1f0 = pFVar9;
        FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)pFVar9);
      }
      if (this->FormatSizeA < 1) {
        pFVar10 = (FRDGBuffer *)0x0;
      }
      else {
        pFVar10 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->TileDataAUploadBuffer,None);
      }
      local_230 = (FRDGBuffer *)0x0;
      local_218 = pFVar10;
      if (0 < this->FormatSizeB) {
        local_230 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->TileDataBUploadBuffer,None);
      }
      if (((pFVar10 == (FRDGBuffer *)0x0) && (local_230 == (FRDGBuffer *)0x0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SrcBufferARDG || SrcBufferBRDG",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                             ,0x10b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pFVar8 == (FRDGTexture *)0x0) {
        local_210 = (FRDGTextureUAV *)0x0;
      }
      else {
        local_1d8._padding_._0_1_ = (pFVar8->Desc).field_0x34;
        local_1d8._padding_._1_1_ = 0;
        local_1d8._padding_._2_4_ = 0;
        local_1d8._padding_._6_1_ = 0;
        local_1d8._padding_._0_1_ = 0;
        local_1d8.Texture = pFVar8;
        local_210 = FRDGBuilder::CreateUAV(param_1,&local_1d8,None);
      }
      if (pFVar9 == (FRDGTexture *)0x0) {
        local_208 = (FRDGTextureUAV *)0x0;
      }
      else {
        local_1c0._padding_._0_1_ = (pFVar9->Desc).field_0x34;
        local_1c0._padding_._1_1_ = 0;
        local_1c0._padding_._2_4_ = 0;
        local_1c0._padding_._6_1_ = 0;
        local_1c0._padding_._0_1_ = 0;
        local_1c0.Texture = pFVar9;
        local_208 = FRDGBuilder::CreateUAV(param_1,&local_1c0,None);
      }
      local_150.Buffer =
           FRDGBuilder::RegisterExternalBuffer(param_1,&this->OccupancyBitsUploadBuffer,None);
      local_150._padding_._4_4_ = 0;
      local_150._padding_ = 0;
      local_150._padding_._0_4_ = 0xffffffff;
      local_150._padding_._0_1_ = 0;
      if ((((local_150.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_150._padding_._0_1_ = 0x1c;
      }
      local_168 = FRDGBuilder::CreateSRV(param_1,&local_150);
      local_130.Buffer =
           FRDGBuilder::RegisterExternalBuffer(param_1,&this->TileDataOffsetsUploadBuffer,None);
      local_130._padding_._0_1_ = 0;
      local_130._padding_._0_4_ = 0xffffffff;
      bVar19 = 0;
      local_130._padding_._4_4_ = 0;
      local_130._padding_ = 0;
      if ((((local_130.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_130._padding_._0_1_ = 0x1c;
      }
      local_160 = FRDGBuilder::CreateSRV(param_1,&local_130);
      local_110.Buffer =
           FRDGBuilder::RegisterExternalBuffer(param_1,&this->DstTileCoordsUploadBuffer,None);
      local_110._padding_._0_1_ = 0;
      local_110._padding_._4_4_ = 0;
      local_110._padding_._0_4_ = 0xffffffff;
      local_110._padding_ = 0;
      if ((((local_110.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_110._padding_._0_1_ = 0x1c;
      }
      local_158 = FRDGBuilder::CreateSRV(param_1,&local_110);
      if (pFVar10 == (FRDGBuffer *)0x0) {
        local_b8._padding_._0_1_ = this->FormatB;
        pFVar18 = &local_b8;
        local_b8.Buffer = local_230;
        local_b8._padding_._4_4_ = 0;
        local_b8._padding_._0_4_ = 0xffffffff;
        local_b8._padding_ = 0;
      }
      else {
        local_d8._padding_._0_1_ = this->FormatA;
        pFVar18 = &local_d8;
        local_d8._padding_._4_4_ = 0;
        local_d8._padding_._0_4_ = 0xffffffff;
        local_d8._padding_ = 0;
        local_d8.Buffer = pFVar10;
      }
      local_200 = FRDGBuilder::CreateSRV(param_1,pFVar18);
      if (0 < this->FormatSizeB) {
        bVar19 = 2;
      }
      bVar19 = bVar19 | 0 < this->FormatSizeA;
      if ((bVar19 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TextureUpdateMask != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                             ,0x119,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)GMaxRHIFeatureLevel]);
      if (bVar19 == 1) {
        iVar7 = 2;
      }
      else if (bVar19 == 2) {
        iVar7 = 1;
      }
      else {
        if ((bVar19 != 3) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                               ,0x90,L"Unknown shader permutation dimension value %i."), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = 0;
      }
      pFVar11 = (FShaderType *)FSparseVolumeTextureUpdateFromSparseBufferCS::GetStaticType();
      FGlobalShaderMap::GetShader(this_01,&local_e8,pFVar11,iVar7);
      if (local_e8.ShaderContent == (FShader *)0x0) {
        this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_98);
        ::FName::ToString((FName *)this_02,&local_90);
        FSparseVolumeTextureUpdateFromSparseBufferCS::GetStaticType();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FSparseVolumeTextureUpdateFromSparseBufferCS::GetStaticType();
      iVar7 = this->NumWrittenTiles;
      local_res20 = 0;
      local_244 = 0;
      local_248 = 0;
      local_res8 = 0;
      local_78.ShaderContent =
           (FSparseVolumeTextureUpdateFromSparseBufferCS *)local_e8.ShaderContent;
      local_78.ShaderMap = local_e8.ShaderMap;
      local_res18 = 0;
      local_240 = local_244;
      if (0 < iVar7) {
        local_1f8 = 0;
        do {
          local_res20 = 0;
          local_228 = 0;
          local_244 = 0;
          local_240 = 0;
          if (local_248 < iVar7) {
            lVar24 = local_1f8 * 4;
            iVar25 = local_248;
            do {
              iVar25 = iVar25 + 1;
              iVar6 = 0;
              if (this->FormatSizeA < 1) {
                iVar22 = 0;
              }
              else {
                iVar22 = *(int *)(this->TileDataOffsetsAPtr + lVar24);
              }
              if (0 < this->FormatSizeB) {
                iVar6 = *(int *)(this->TileDataOffsetsBPtr + lVar24);
              }
              if ((this->FormatSizeA < 1) || (iVar7 <= iVar25)) {
                iVar20 = this->NumWrittenVoxelsA;
              }
              else {
                iVar20 = *(int *)(this->TileDataOffsetsAPtr + lVar24 + 4);
              }
              if ((this->FormatSizeB < 1) || (iVar7 <= iVar25)) {
                iVar7 = this->NumWrittenVoxelsB;
              }
              else {
                iVar7 = *(int *)(this->TileDataOffsetsBPtr + lVar24 + 4);
              }
              iVar20 = iVar20 - iVar22;
              if (((iVar20 < 0) || (0x16c8 < iVar20)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TileNumVoxelsA >= 0 && TileNumVoxelsA <= SVT::NumVoxelsPerPaddedTile"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                                     ,0x136,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((0x16c8 < (uint)(iVar7 - iVar6)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TileNumVoxelsB >= 0 && TileNumVoxelsB <= SVT::NumVoxelsPerPaddedTile"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                                     ,0x137,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar20 = iVar20 + local_244;
              if ((0x8000000 < iVar20) || (iVar6 = (iVar7 - iVar6) + local_240, 0x8000000 < iVar6))
              break;
              local_res20 = local_res20 + 1;
              local_228 = local_228 + 1;
              lVar24 = lVar24 + 4;
              iVar7 = this->NumWrittenTiles;
              local_244 = iVar20;
              local_240 = iVar6;
            } while (iVar25 < iVar7);
          }
          pFVar13 = (FRDGBufferSRV *)0x0;
          pFVar12 = pFVar13;
          if ((this->FormatSizeA != 0) && (local_244 != 0)) {
            local_1a8._padding_._4_4_ = this->FormatSizeA * local_res8;
            local_1a8._padding_._0_4_ = CONCAT31(local_1a8._padding_._1_3_,this->FormatA);
            local_1a8._padding_._0_4_ = local_244;
            local_1a8._padding_ = 0;
            local_1a8.Buffer = local_218;
            FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_1a8);
            pFVar10 = local_1a8.Buffer;
            pFVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
            lVar24 = pFVar10->_padding_;
            piVar1 = &(param_1->Views).Array.ArrayMax;
            *(byte *)&pFVar12->_padding_ = (byte)pFVar12->_padding_ & 0xfe;
            *(undefined8 *)((longlong)&pFVar12->_padding_ + 4) = 0xffffffffffffffff;
            pFVar12->_padding_ = lVar24;
            pFVar12->_padding_ = 0;
            *(undefined1 *)&pFVar12->_padding_ = 3;
            pFVar12->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
            (pFVar12->Desc)._padding_ =
                 CONCAT44(local_1a8._padding_._4_4_,(undefined4)local_1a8._padding_);
            (pFVar12->Desc)._padding_ = CONCAT44(local_1a8._padding_._4_4_,(int)local_1a8._padding_)
            ;
            (pFVar12->Desc)._padding_ = local_1a8._padding_;
            (pFVar12->Desc).Buffer = local_1a8.Buffer;
            iVar7 = (param_1->Views).Array.ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                                (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
            }
            (param_1->Views).Array.ArrayNum = iVar7 + 1;
            (param_1->Views).Array.AllocatorInstance.Data[iVar7] = (FRDGView *)pFVar12;
            *(int *)((longlong)&pFVar12->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
            FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar12);
          }
          if ((this->FormatSizeB != 0) && (local_240 != 0)) {
            local_188._padding_._4_4_ = this->FormatSizeB * local_res18;
            local_188._padding_._0_4_ = CONCAT31(local_188._padding_._1_3_,this->FormatB);
            local_188._padding_._0_4_ = local_240;
            local_188._padding_ = 0;
            local_188.Buffer = local_230;
            FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_188);
            pFVar10 = local_188.Buffer;
            pFVar13 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
            lVar24 = pFVar10->_padding_;
            piVar1 = &(param_1->Views).Array.ArrayMax;
            *(byte *)&pFVar13->_padding_ = (byte)pFVar13->_padding_ & 0xfe;
            *(undefined8 *)((longlong)&pFVar13->_padding_ + 4) = 0xffffffffffffffff;
            pFVar13->_padding_ = lVar24;
            pFVar13->_padding_ = 0;
            *(undefined1 *)&pFVar13->_padding_ = 3;
            pFVar13->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
            (pFVar13->Desc)._padding_ =
                 CONCAT44(local_188._padding_._4_4_,(undefined4)local_188._padding_);
            (pFVar13->Desc)._padding_ = CONCAT44(local_188._padding_._4_4_,(int)local_188._padding_)
            ;
            (pFVar13->Desc)._padding_ = local_188._padding_;
            (pFVar13->Desc).Buffer = local_188.Buffer;
            iVar7 = (param_1->Views).Array.ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                                (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
            }
            (param_1->Views).Array.ArrayNum = iVar7 + 1;
            (param_1->Views).Array.AllocatorInstance.Data[iVar7] = (FRDGView *)pFVar13;
            *(int *)((longlong)&pFVar13->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
            FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar13);
          }
          puVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x90,0x10);
          if (puVar14 == (undefined8 *)0x0) {
            puVar14 = (undefined8 *)0x0;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                               ,0x61,L"");
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            *(undefined8 *)((longlong)puVar14 + 0x5c) = 0x3f800000;
            *puVar14 = &
                       ___7__TObject_VFParameters_FSparseVolumeTextureUpdateFromSparseBufferCS___FRDGAllocator__6B_
            ;
            puVar14[2] = 0;
            puVar14[3] = 0;
            puVar14[4] = 0;
            puVar14[5] = 0;
            puVar14[6] = 0;
            puVar14[7] = 0;
            puVar14[8] = 0;
            puVar14[10] = 0;
            *(undefined4 *)(puVar14 + 0xb) = 0;
            *(undefined8 *)((longlong)puVar14 + 100) = 0;
            *(undefined4 *)((longlong)puVar14 + 0x6c) = 0x3f800000;
          }
          local_238 = puVar14;
          if ((((undefined8 **)param_1->_padding_ <= &local_238) &&
              (&local_238 <
               (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = (int)param_1->_padding_;
          if (iVar7 == *(int *)((longlong)&param_1->_padding_ + 4)) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)&param_1->_padding_,
                               (int *)((longlong)&param_1->_padding_ + 4));
          }
          *(int *)&param_1->_padding_ = iVar7 + 1;
          *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_238;
          ((FParameters *)(puVar14 + 2))->DstPhysicalTileTextureA = local_210;
          puVar14[3] = local_208;
          pFVar15 = local_200;
          if (pFVar12 != (FRDGBufferSRV *)0x0) {
            pFVar15 = pFVar12;
          }
          puVar14[4] = pFVar15;
          pFVar12 = local_200;
          if (pFVar13 != (FRDGBufferSRV *)0x0) {
            pFVar12 = pFVar13;
          }
          puVar14[5] = pFVar12;
          puVar14[6] = local_168;
          puVar14[7] = local_160;
          puVar14[8] = local_158;
          uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
          puVar14[10] = *(undefined8 *)&param_4->field0_0x0;
          puVar14[0xb] = uVar3;
          uVar3 = *(undefined8 *)&param_5->field0_0x0;
          uVar4 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
          *(int *)(puVar14 + 0xe) = local_248;
          *(int *)((longlong)puVar14 + 0x74) = local_res8;
          *(int *)(puVar14 + 0xf) = local_res18;
          puVar14[0xc] = uVar3;
          puVar14[0xd] = uVar4;
          *(int *)((longlong)puVar14 + 0x7c) = local_res20;
          *(int *)(puVar14 + 0x10) = this->MaxNumTiles;
          uVar23 = GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X;
          *(undefined4 *)(puVar14 + 0x11) = 0x12;
          if (local_res20 < (int)uVar23) {
            uVar23 = local_res20;
          }
          *(undefined4 *)((longlong)puVar14 + 0x84) = uVar23;
          if (((GRHIGlobals.SupportsEfficientAsyncCompute == false) ||
              (GSVTStreamingAsyncCompute == 0)) || (GNumExplicitGPUsForRendering != 1)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          pFVar16 = FRDGEventName::FRDGEventName(&local_68,L"Upload SVT Tiles (TileCount: %u)");
          pFVar17 = FSparseVolumeTextureUpdateFromSparseBufferCS::FParameters::FTypeInfo::
                    GetStructMetadata();
          local_1e8._s_0.Y = 1;
          local_1e8._s_0.Z = 1;
          EVar21 = Compute;
          if (bVar5) {
            EVar21 = AsyncCompute;
          }
          local_1e8._s_0.X = uVar23;
          FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdateFromSparseBufferCS>
                    (param_1,pFVar16,EVar21,&local_78,pFVar17,(FParameters *)(puVar14 + 2),
                     (TIntVector3<int> *)&local_1e8._s_0);
          if (local_68.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
          }
          local_res20 = local_248 + local_res20;
          local_1f8 = local_1f8 + local_228;
          local_244 = local_res8 + local_244;
          local_240 = local_res18 + local_240;
          iVar7 = this->NumWrittenTiles;
          pFVar8 = local_220;
          local_res8 = local_244;
          local_res18 = local_240;
          local_248 = local_res20;
        } while (local_res20 < iVar7);
      }
      if ((local_res20 != iVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumUploadedTiles == NumWrittenTiles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                             ,0x179,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((local_244 != this->NumWrittenVoxelsA) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumUploadedVoxelsA == NumWrittenVoxelsA",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                             ,0x17a,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((local_240 != this->NumWrittenVoxelsB) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumUploadedVoxelsB == NumWrittenVoxelsB",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureUpload.cpp"
                             ,0x17b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pFVar8 != (FRDGTexture *)0x0) {
        FRDGBuilder::UseExternalAccessMode(param_1,(FRDGViewableResource *)pFVar8,SRVMask,All);
      }
      if (local_1f0 != (FRDGTexture *)0x0) {
        FRDGBuilder::UseExternalAccessMode(param_1,(FRDGViewableResource *)local_1f0,SRVMask,All);
      }
    }
  }
  Release(this);
  return;
}

