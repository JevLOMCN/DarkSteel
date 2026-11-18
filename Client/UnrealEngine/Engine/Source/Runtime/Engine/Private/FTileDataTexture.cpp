// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FTileDataTexture @ 148712510

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FTileDataTexture * __thiscall
UE::SVT::FTileDataTexture::FTileDataTexture
          (FTileDataTexture *this,TIntVector3<int> *param_1,EPixelFormat param_2,
          EPixelFormat param_3,TVector4<float> *param_4,TVector4<float> *param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  FTileUploader *pFVar7;
  FTileUploader *pFVar8;
  FTileDataTexture *pFVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  TIntVector3<int>_u_0 local_38;
  undefined8 local_28;
  int local_20;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FTileDataTexture_SVT_UE__6B_;
  pFVar7 = ::operator_new(0x98);
  pFVar8 = (FTileUploader *)0x0;
  if (pFVar7 != (FTileUploader *)0x0) {
    (pFVar7->OccupancyBitsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar7->TileDataOffsetsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar7->DstTileCoordsUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar7->TileDataAUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar7->TileDataBUploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar7->TileDataOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->TileDataOffsets).ArrayNum = 0;
    (pFVar7->TileDataOffsets).ArrayMax = 0;
    pFVar7->OccupancyBitsAPtr = (uchar *)0x0;
    pFVar7->OccupancyBitsBPtr = (uchar *)0x0;
    pFVar7->TileDataOffsetsAPtr = (uchar *)0x0;
    pFVar7->TileDataOffsetsBPtr = (uchar *)0x0;
    pFVar7->TileCoordsPtr = (uchar *)0x0;
    pFVar7->TileDataAPtr = (uchar *)0x0;
    pFVar7->TileDataBPtr = (uchar *)0x0;
    pFVar7->MaxNumTiles = 0;
    pFVar7->MaxNumVoxelsA = 0;
    pFVar7->MaxNumVoxelsB = 0;
    pFVar7->FormatA = PF_Unknown;
    pFVar7->FormatB = PF_Unknown;
    pFVar7->FormatSizeA = 0;
    pFVar7->FormatSizeB = 0;
    pFVar7->NumWrittenTiles = 0;
    pFVar7->NumWrittenVoxelsA = 0;
    pFVar7->NumWrittenVoxelsB = 0;
    pFVar8 = pFVar7;
  }
  (this->TileUploader).Ptr = pFVar8;
  *(undefined8 *)&(this->ResolutionInTiles).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->ResolutionInTiles).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  iVar2 = (param_1->field0_0x0)._s_0.X;
  iVar12 = (param_1->field0_0x0)._s_0.Y;
  iVar3 = (param_1->field0_0x0)._s_0.Z;
  this->FormatA = param_2;
  this->FormatB = param_3;
  this->PhysicalTilesCapacity = iVar2 * iVar12 * iVar3;
  uVar1 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  *(undefined8 *)&(this->FallbackValueA).field0_0x0 = *(undefined8 *)&param_4->field0_0x0;
  *(undefined8 *)((longlong)&(this->FallbackValueA).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  *(undefined8 *)&(this->FallbackValueB).field0_0x0 = *(undefined8 *)&param_5->field0_0x0;
  *(undefined8 *)((longlong)&(this->FallbackValueB).field0_0x0 + 8) = uVar1;
  (this->TileDataTextureA).Reference = (IPooledRenderTarget *)0x0;
  (this->TileDataTextureB).Reference = (IPooledRenderTarget *)0x0;
  this->UploaderState = Ready;
  this->NumReservedUploadTiles = 0;
  this->NumReservedUploadVoxelsA = 0;
  this->NumReservedUploadVoxelsB = 0;
  iVar2 = GPixelFormats[param_3].BlockBytes;
  if (GPixelFormats[param_3].BlockBytes < GPixelFormats[param_2].BlockBytes) {
    iVar2 = GPixelFormats[param_2].BlockBytes;
  }
  GetLargestPossibleVolumeResolutionInTiles((TIntVector3<int> *)&local_38._s_0,iVar2);
  iVar12 = local_38._s_0.Z * local_38._s_0.Y * local_38._s_0.X;
  if ((((iVar12 < this->PhysicalTilesCapacity) ||
       (0x800 < (this->ResolutionInTiles).field0_0x0._s_0.X * 0x12)) ||
      (0x800 < (this->ResolutionInTiles).field0_0x0._s_0.Y * 0x12)) ||
     (0x800 < (this->ResolutionInTiles).field0_0x0._s_0.Z * 0x12)) {
    *(ulonglong *)&(this->ResolutionInTiles).field0_0x0 = CONCAT44(local_38._s_0.Y,local_38._s_0.X);
    (this->ResolutionInTiles).field0_0x0._s_0.Z = local_38._s_0.Z;
    this->PhysicalTilesCapacity = iVar12;
    if (2 < (byte)LogSparseVolumeTextureStreamingManager._0_1_) {
      Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogSparseVolumeTextureStreamingManager);
    }
  }
  local_20 = (this->ResolutionInTiles).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)&(this->ResolutionInTiles).field0_0x0;
  local_28._0_4_ = (int)uVar1;
  iVar12 = local_20 * 0x12;
  local_28._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  iVar3 = (int)local_28 * 0x12;
  iVar5 = local_28._4_4_ * 0x12;
  local_28 = uVar1;
  if ((((0x800 < iVar3) || (0x800 < iVar5)) || (0x800 < iVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resolution.X <= SVT::MaxVolumeTextureDim && Resolution.Y <= SVT::MaxVolumeTextureDim && Resolution.Z <= SVT::MaxVolumeTextureDim"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                         ,0x95,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FTileDataTexture *)(*pcVar4)();
    return pFVar9;
  }
  lVar11 = 0x80000000;
  if ((GRHIGlobals.ReservedResources.SupportsVolumeTextures != false) &&
     (GSVTStreamingReservedResources != 0)) {
    lVar10 = (longlong)iVar2 << 0x21;
    lVar11 = lVar10;
    if ((0 < GSVTStreamingReservedResourcesMemoryLimit) &&
       (lVar11 = (longlong)GSVTStreamingReservedResourcesMemoryLimit * 0x100000,
       lVar10 < (longlong)GSVTStreamingReservedResourcesMemoryLimit * 0x100000)) {
      lVar11 = lVar10;
    }
  }
  lVar10 = (longlong)GPixelFormats[this->FormatA].BlockBytes * (longlong)iVar3 * (longlong)iVar5 *
           (longlong)iVar12;
  if ((lVar10 - lVar11 != 0 && lVar11 <= lVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("((int64)Resolution.X * (int64)Resolution.Y * (int64)Resolution.Z * (int64)GPixelFormats[FormatA].BlockBytes) <= MaxTileDataTextureResourceSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                         ,0x97,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FTileDataTexture *)(*pcVar4)();
    return pFVar9;
  }
  lVar10 = (longlong)GPixelFormats[this->FormatB].BlockBytes * (longlong)iVar3 * (longlong)iVar5 *
           (longlong)iVar12;
  if ((lVar10 - lVar11 != 0 && lVar11 <= lVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("((int64)Resolution.X * (int64)Resolution.Y * (int64)Resolution.Z * (int64)GPixelFormats[FormatB].BlockBytes) <= MaxTileDataTextureResourceSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                         ,0x98,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FTileDataTexture *)(*pcVar4)();
    return pFVar9;
  }
  return this;
}

// AddUpload @ 1487204a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAddResult * __thiscall
UE::SVT::FTileDataTexture::AddUpload
          (FTileDataTexture *this,FAddResult *__return_storage_ptr__,int param_1,int param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  FAddResult *pFVar3;
  
  if (this->UploaderState != Uploading) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploaderState == EUploaderState::Uploading",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                       ,0xbe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAddResult *)(*pcVar1)();
      return pFVar3;
    }
  }
  FTileUploader::Add_GetRef((this->TileUploader).Ptr,__return_storage_ptr__,param_1,param_2,param_3)
  ;
  return __return_storage_ptr__;
}

// BeginReserveUpload @ 148722c40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UE::SVT::FTileDataTexture::BeginReserveUpload(FTileDataTexture *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->UploaderState != Ready) && (this->UploaderState != Reserved)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploaderState == EUploaderState::Ready || UploaderState == EUploaderState::Reserved"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->UploaderState = Reserving;
  this->NumReservedUploadTiles = 0;
  this->NumReservedUploadVoxelsA = 0;
  this->NumReservedUploadVoxelsB = 0;
  return;
}

// BeginUpload @ 148722ca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall UE::SVT::FTileDataTexture::BeginUpload(FTileDataTexture *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->UploaderState != Reserved) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploaderState == EUploaderState::Reserved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTileUploader::Init((this->TileUploader).Ptr,param_1,this->NumReservedUploadTiles,
                      this->NumReservedUploadVoxelsA,this->NumReservedUploadVoxelsB,this->FormatA,
                      this->FormatB);
  this->UploaderState = Uploading;
  return;
}

// EndReserveUpload @ 148730b80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UE::SVT::FTileDataTexture::EndReserveUpload(FTileDataTexture *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->UploaderState == Reserving) {
    this->UploaderState = Reserved;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("UploaderState == EUploaderState::Reserving",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                     ,0xb1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->UploaderState = Reserved;
  return;
}

// EndUpload @ 148730be0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall UE::SVT::FTileDataTexture::EndUpload(FTileDataTexture *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->UploaderState != Uploading) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploaderState == EUploaderState::Uploading",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                       ,0xc4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTileUploader::ResourceUploadTo
            ((this->TileUploader).Ptr,param_1,&this->TileDataTextureA,&this->TileDataTextureB,
             &this->FallbackValueA,&this->FallbackValueB);
  this->UploaderState = Ready;
  return;
}

// GetLargestPossibleVolumeResolutionInTiles @ 14873c3b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TIntVector3<int> * __cdecl
UE::SVT::FTileDataTexture::GetLargestPossibleVolumeResolutionInTiles
          (TIntVector3<int> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TIntVector3<int> *pTVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int local_28;
  int iStack_24;
  
  lVar6 = 0x80000000;
  if ((GRHIGlobals.ReservedResources.SupportsVolumeTextures) &&
     (GSVTStreamingReservedResources != 0)) {
    lVar5 = (longlong)param_1 << 0x21;
    lVar6 = lVar5;
    if ((0 < GSVTStreamingReservedResourcesMemoryLimit) &&
       (lVar6 = (longlong)GSVTStreamingReservedResourcesMemoryLimit * 0x100000,
       lVar5 < (longlong)GSVTStreamingReservedResourcesMemoryLimit * 0x100000)) {
      lVar6 = lVar5;
    }
  }
  iVar7 = 1;
  lVar5 = lVar6 / (longlong)(param_1 * 0x16c8);
  if (7 < lVar5) {
    iVar4 = 2;
    do {
      if (0x71 < iVar4) break;
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar4 * iVar4 * iVar4 <= lVar5);
  }
  iVar4 = iVar7 + 1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar7;
  iVar8 = iVar7;
  if ((iVar4 * iVar7 * iVar7 <= lVar5) && (iVar4 < 0x72)) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = iVar4;
    iVar8 = iVar4;
  }
  if ((iVar4 * iVar8 * iVar7 <= lVar5) && (iVar4 < 0x72)) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar4;
    iVar7 = iVar4;
  }
  if ((iVar4 * iVar8 * iVar7 <= lVar5) && (iVar4 < 0x72)) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar4;
  }
  local_28 = (int)*(undefined8 *)&__return_storage_ptr__->field0_0x0;
  iVar7 = (__return_storage_ptr__->field0_0x0)._s_0.Z * 0x12;
  iStack_24 = (int)((ulonglong)*(undefined8 *)&__return_storage_ptr__->field0_0x0 >> 0x20);
  local_28 = local_28 * 0x12;
  iStack_24 = iStack_24 * 0x12;
  if ((((((local_28 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
         (iStack_24 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
        (iVar7 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) ||
       ((0x800 < local_28 || (0x800 < iStack_24)))) || (0x800 < iVar7)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInBounds(ResolutionInVoxels, FIntVector3::ZeroValue, FIntVector3(SVT::MaxVolumeTextureDim + 1))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                         ,0x72,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TIntVector3<int> *)(*pcVar1)();
    return pTVar3;
  }
  if ((((0x800 < local_28) || (0x800 < iStack_24)) || (0x800 < iVar7)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResolutionInVoxels.X <= SVT::MaxVolumeTextureDim && ResolutionInVoxels.Y <= SVT::MaxVolumeTextureDim && ResolutionInVoxels.Z <= SVT::MaxVolumeTextureDim"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                         ,0x73,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TIntVector3<int> *)(*pcVar1)();
    return pTVar3;
  }
  lVar5 = (longlong)iVar7 * (longlong)iStack_24 * (longlong)local_28 * (longlong)param_1;
  if ((lVar5 - lVar6 != 0 && lVar6 <= lVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("((int64)ResolutionInVoxels.X * (int64)ResolutionInVoxels.Y * (int64)ResolutionInVoxels.Z * (int64)InVoxelMemSize) <= MaxStreamingPoolResourceSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                         ,0x74,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TIntVector3<int> *)(*pcVar1)();
    return pTVar3;
  }
  return __return_storage_ptr__;
}

// GetMaxTileDataTextureResourceSize @ 14873c950

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

long64 __cdecl UE::SVT::FTileDataTexture::GetMaxTileDataTextureResourceSize(int param_1)

{
  long64 lVar1;
  longlong lVar2;
  
  lVar1 = 0x80000000;
  if ((GRHIGlobals.ReservedResources.SupportsVolumeTextures) &&
     (GSVTStreamingReservedResources != 0)) {
    lVar1 = (longlong)param_1 << 0x21;
    if (0 < GSVTStreamingReservedResourcesMemoryLimit) {
      lVar2 = (longlong)GSVTStreamingReservedResourcesMemoryLimit * 0x100000;
      if (lVar1 < (longlong)GSVTStreamingReservedResourcesMemoryLimit * 0x100000) {
        lVar2 = lVar1;
      }
      return lVar2;
    }
  }
  return lVar1;
}

// GetVolumeResolutionInTiles @ 148741d50

TIntVector3<int> * __cdecl
UE::SVT::FTileDataTexture::GetVolumeResolutionInTiles
          (TIntVector3<int> *__return_storage_ptr__,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = 1;
  if (1 < param_1) {
    do {
      iVar2 = iVar2 + 1;
    } while (iVar2 * iVar2 * iVar2 < param_1);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar2;
  iVar5 = iVar2 + -1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar2;
  iVar3 = iVar2;
  if (param_1 < iVar5 * iVar2 * iVar2) {
    iVar6 = (iVar2 + -2) * iVar2 * iVar2;
    do {
      iVar3 = iVar3 + -1;
      bVar1 = param_1 < iVar6;
      iVar6 = iVar6 - iVar2 * iVar2;
    } while (bVar1);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar3;
  }
  iVar6 = iVar2;
  if (param_1 < iVar2 * iVar5 * iVar3) {
    iVar4 = iVar3 * (iVar2 + -2) * iVar2;
    do {
      iVar6 = iVar6 + -1;
      bVar1 = param_1 < iVar4;
      iVar4 = iVar4 - iVar3 * iVar2;
    } while (bVar1);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar6;
  }
  if (param_1 < iVar5 * iVar6 * iVar3) {
    iVar3 = (__return_storage_ptr__->field0_0x0)._s_0.Y *
            (__return_storage_ptr__->field0_0x0)._s_0.Z;
    iVar5 = (iVar2 + -2) * iVar3;
    do {
      iVar2 = iVar2 + -1;
      bVar1 = param_1 < iVar5;
      iVar5 = iVar5 - iVar3;
    } while (bVar1);
    (__return_storage_ptr__->field0_0x0)._s_0.X = iVar2;
  }
  return __return_storage_ptr__;
}

// InitRHI @ 148746890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::SVT::FTileDataTexture::InitRHI(FTileDataTexture *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  undefined8 uVar2;
  EPixelFormat EVar3;
  IPooledRenderTarget *pIVar4;
  uchar *puVar5;
  FTaggedMemory *pFVar6;
  uchar auVar7 [8];
  FName FVar8;
  code *pcVar9;
  int iVar10;
  EClearBinding EVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  FRHITextureDesc *pFVar17;
  TRefCountPtr<IPooledRenderTarget> TVar18;
  uchar (*pauVar19) [8];
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory> FVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal> FVar24;
  FActivatePipelineCommand *pFVar25;
  undefined1 auStackY_308 [32];
  int local_268;
  int iStack_264;
  undefined1 local_258 [32];
  FName local_238;
  FName local_230;
  FStatMessage local_228;
  FStatMessage local_218;
  FStatMessage local_208;
  FStatMessage local_1f8;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FSharedReferencer<1> local_1c8;
  FRHIParallelRenderPassInfo *pFStack_1c0;
  FSharedReferencer<1> local_1b8;
  uchar auStack_1b0 [8];
  FRHITextureDesc local_1a8;
  FRHITextureDesc local_158;
  FRHITextureDesc local_108;
  FRHITextureDesc local_b8;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  FRHITexture *local_48;
  
  uVar15 = FClearValueBinding::Black.Value.Color[3];
  uVar14 = FClearValueBinding::Black.Value.Color[2];
  uVar13 = FClearValueBinding::Black.Value.Color[1];
  uVar12 = FClearValueBinding::Black.Value.Color[0];
  EVar11 = FClearValueBinding::Black.ColorBinding;
  local_48 = (FRHITexture *)(__security_cookie.value ^ (ulonglong)auStackY_308);
  uVar2 = *(undefined8 *)&(this->ResolutionInTiles).field0_0x0;
  local_268 = (int)uVar2;
  iVar10 = (this->ResolutionInTiles).field0_0x0._s_0.Z * 0x12;
  iStack_264 = (int)((ulonglong)uVar2 >> 0x20);
  if ((GRHIGlobals.ReservedResources.SupportsVolumeTextures) &&
     (GSVTStreamingReservedResources != 0)) {
    bVar16 = true;
  }
  else {
    bVar16 = false;
  }
  EVar3 = this->FormatA;
  pFVar25 = (FActivatePipelineCommand *)0x6080020808;
  if (!bVar16) {
    pFVar25 = (FActivatePipelineCommand *)0x80020808;
  }
  if (EVar3 != PF_Unknown) {
    if ((0xffff < iVar10) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                            ,0x29e,L"Depth parameter (Size.Z) exceeds valid range"), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_108.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_108.ClearValue.Value.Color[3] = (float)uVar15;
    local_108.AliasableFormats.ArrayMax = 1;
    local_108.Extent.field0_0x0._s_0.Y = iStack_264 * 0x12;
    local_108.Extent.field0_0x0._s_0.X = local_268 * 0x12;
    local_108.ClearValue.ColorBinding = EVar11;
    local_108.ClearValue.Value.Color[0] = (float)uVar12;
    local_108.ClearValue.Value.Color[1] = (float)uVar13;
    local_108.ClearValue.Value.Color[2] = (float)uVar14;
    local_108.ExtData = 0;
    local_108.ArraySize = 1;
    local_108.NumMips = 1;
    local_108.NumSamples = 1;
    local_108.Dimension = Texture3D;
    local_108.UAVFormat = 0;
    local_108.FastVRAMPercentage = 0xff;
    local_108.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_108.AliasableFormats.ArrayNum = 0;
    local_108.Flags = (ETextureCreateFlags)pFVar25;
    local_108.Depth = (ushort)iVar10;
    local_108.Format = EVar3;
    pFVar17 = FRHITextureDesc::FRHITextureDesc(&local_1a8,&local_108);
    TVar18 = FRenderTargetPool::FindFreeElement
                       ((FRenderTargetPool *)&GRenderTargetPool,(FRHICommandListBase *)local_258,
                        (FRHITextureDesc *)param_1,(wchar_t *)pFVar17);
    pTVar1 = &this->TileDataTextureA;
    if ((IPooledRenderTarget *)pTVar1 != TVar18.Reference) {
      pIVar4 = pTVar1->Reference;
      pTVar1->Reference = (IPooledRenderTarget *)(TVar18.Reference)->_padding_;
      (TVar18.Reference)->_padding_ = 0;
      if (pIVar4 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar4->_padding_ + 0x38))();
      }
    }
    if ((longlong *)local_258._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_258._0_8_ + 0x38))();
    }
    if (local_108.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_108.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    pFVar17 = (FRHITextureDesc *)
              (**(code **)(((pTVar1->Reference->RenderTargetItem).TargetableTexture.Reference)->
                           _padding_ + 0x20))();
    bVar16 = FRHITextureDesc::Validate(pFVar17,L"",false);
    if (bVar16) {
      pauVar19 = (uchar (*) [8])
                 (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,local_68,pFVar17,0);
      auVar7 = *pauVar19;
      auStack_1b0 = pauVar19[1];
      local_1b8.ReferenceController = (TReferenceControllerBase<1> *)auVar7;
      if (auVar7 != (uchar  [8])0x0) {
        FVar21 = StatPtr_STAT_SVTTileDataMemory;
        if (StatPtr_STAT_SVTTileDataMemory ==
            (FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory>)0x0) {
          pFVar20 = ::FName::FName(&local_1e8,"STAT_SVTTileDataMemory");
          FVar21 = (FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTTileDataMemory,*pFVar20,
                              L"TileData GPU Memory","STATGROUP_SparseVolumeTextureMemory",
                              "STATCAT_Advanced",L"SparseVolumeTexture Memory",true,false,ST_int64,
                              false,false,MCR_GPU);
        }
        puVar5 = *(uchar **)FVar21;
        if (((puVar5 != (uchar *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar22 == (FThreadStats *)0x0) {
            pFVar23 = FThreadStatsPool::Get();
            pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
          }
          local_228.NameAndInfo.Number = (uint)((ulonglong)puVar5 >> 0x20) & 0xffffafff | 0xa000;
          local_258._8_8_ = puVar5;
          local_228.StatData.Pad = auVar7;
          local_228.NameAndInfo.Index.Value = (uint)puVar5;
          FThreadStats::AddStatMessage(pFVar22,&local_228);
          FStatsTrace::Add((FName *)(local_258 + 8),(long64)auVar7);
          if (pFVar22->ScopeCount == 0) {
            FThreadStats::Flush(pFVar22,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar22,false,false);
          }
        }
        FVar24 = StatPtr_STAT_SVTGPUMemoryTotal;
        if (StatPtr_STAT_SVTGPUMemoryTotal ==
            (FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal>)0x0) {
          pFVar20 = ::FName::FName(&local_1e0,"STAT_SVTGPUMemoryTotal");
          FVar24 = (FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTGPUMemoryTotal,*pFVar20,
                              L"Total GPU Memory","STATGROUP_SparseVolumeTextureMemory",
                              "STATCAT_Advanced",L"SparseVolumeTexture Memory",true,false,ST_int64,
                              false,false,MCR_GPU);
        }
        pFVar6 = *(FTaggedMemory **)FVar24;
        if (((pFVar6 != (FTaggedMemory *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar22 == (FThreadStats *)0x0) {
            pFVar23 = FThreadStatsPool::Get();
            pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
          }
          local_218.NameAndInfo.Number = (uint)((ulonglong)pFVar6 >> 0x20) & 0xffffafff | 0xa000;
          local_258._16_8_ = pFVar6;
          local_218.StatData.Pad = auVar7;
          local_218.NameAndInfo.Index.Value = (uint)pFVar6;
          FThreadStats::AddStatMessage(pFVar22,&local_218);
          FStatsTrace::Add((FName *)(local_258 + 0x10),(long64)auVar7);
          if (pFVar22->ScopeCount == 0) {
            FThreadStats::Flush(pFVar22,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar22,false,false);
          }
        }
      }
    }
    else {
      local_1c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFStack_1c0 = (FRHIParallelRenderPassInfo *)0x0;
    }
  }
  uVar15 = FClearValueBinding::Black.Value.Color[3];
  uVar14 = FClearValueBinding::Black.Value.Color[2];
  uVar13 = FClearValueBinding::Black.Value.Color[1];
  uVar12 = FClearValueBinding::Black.Value.Color[0];
  EVar11 = FClearValueBinding::Black.ColorBinding;
  EVar3 = this->FormatB;
  if (EVar3 != PF_Unknown) {
    if ((0xffff < iVar10) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                            ,0x29e,L"Depth parameter (Size.Z) exceeds valid range"), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_b8.ClearValue.Value.Color[3] = (float)uVar15;
    local_b8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_b8.AliasableFormats.ArrayMax = 1;
    local_b8.Extent.field0_0x0._s_0.Y = iStack_264 * 0x12;
    local_b8.Extent.field0_0x0._s_0.X = local_268 * 0x12;
    local_b8.ClearValue.ColorBinding = EVar11;
    local_b8.ClearValue.Value.Color[0] = (float)uVar12;
    local_b8.ClearValue.Value.Color[1] = (float)uVar13;
    local_b8.ClearValue.Value.Color[2] = (float)uVar14;
    local_b8.ExtData = 0;
    local_b8._46_4_ = 0x1010001;
    local_b8.Dimension = Texture3D;
    local_b8.UAVFormat = PF_Unknown;
    local_b8.FastVRAMPercentage = 0xff;
    local_b8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_b8.AliasableFormats.ArrayNum = 0;
    local_b8.Flags = (ETextureCreateFlags)pFVar25;
    local_b8.Depth = (ushort)iVar10;
    local_b8.Format = EVar3;
    pFVar17 = FRHITextureDesc::FRHITextureDesc(&local_158,&local_b8);
    TVar18 = FRenderTargetPool::FindFreeElement
                       ((FRenderTargetPool *)&GRenderTargetPool,
                        (FRHICommandListBase *)(local_258 + 0x18),(FRHITextureDesc *)param_1,
                        (wchar_t *)pFVar17);
    pTVar1 = &this->TileDataTextureB;
    if ((IPooledRenderTarget *)pTVar1 != TVar18.Reference) {
      pIVar4 = pTVar1->Reference;
      pTVar1->Reference = (IPooledRenderTarget *)(TVar18.Reference)->_padding_;
      (TVar18.Reference)->_padding_ = 0;
      if (pIVar4 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar4->_padding_ + 0x38))();
      }
    }
    if ((FMemMark *)local_258._24_8_ != (FMemMark *)0x0) {
      (*(code *)(*(FMemStackBase **)local_258._24_8_)[1].TopChunk)();
    }
    if (local_b8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_b8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    pFVar17 = (FRHITextureDesc *)
              (**(code **)(((pTVar1->Reference->RenderTargetItem).TargetableTexture.Reference)->
                           _padding_ + 0x20))();
    bVar16 = FRHITextureDesc::Validate(pFVar17,L"",false);
    if (bVar16) {
      pauVar19 = (uchar (*) [8])
                 (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,local_58,pFVar17,0);
      auVar7 = *pauVar19;
      if (auVar7 != (uchar  [8])0x0) {
        FVar21 = StatPtr_STAT_SVTTileDataMemory;
        if (StatPtr_STAT_SVTTileDataMemory ==
            (FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory>)0x0) {
          pFVar20 = ::FName::FName(&local_1d8,"STAT_SVTTileDataMemory");
          FVar21 = (FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTTileDataMemory,*pFVar20,
                              L"TileData GPU Memory","STATGROUP_SparseVolumeTextureMemory",
                              "STATCAT_Advanced",L"SparseVolumeTexture Memory",true,false,ST_int64,
                              false,false,MCR_GPU);
        }
        FVar8 = *(FName *)FVar21;
        if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar22 == (FThreadStats *)0x0) {
            pFVar23 = FThreadStatsPool::Get();
            pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
          }
          local_208.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
          local_238 = FVar8;
          local_208.StatData.Pad = auVar7;
          local_208.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar22,&local_208);
          FStatsTrace::Add(&local_238,(long64)auVar7);
          if (pFVar22->ScopeCount == 0) {
            FThreadStats::Flush(pFVar22,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar22,false,false);
          }
        }
        FVar24 = StatPtr_STAT_SVTGPUMemoryTotal;
        if (StatPtr_STAT_SVTGPUMemoryTotal ==
            (FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal>)0x0) {
          pFVar20 = ::FName::FName(&local_1d0,"STAT_SVTGPUMemoryTotal");
          FVar24 = (FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTGPUMemoryTotal,*pFVar20,
                              L"Total GPU Memory","STATGROUP_SparseVolumeTextureMemory",
                              "STATCAT_Advanced",L"SparseVolumeTexture Memory",true,false,ST_int64,
                              false,false,MCR_GPU);
        }
        FVar8 = *(FName *)FVar24;
        if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar22 == (FThreadStats *)0x0) {
            pFVar23 = FThreadStatsPool::Get();
            pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
          }
          local_1f8.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
          local_230 = FVar8;
          local_1f8.StatData.Pad = auVar7;
          local_1f8.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar22,&local_1f8);
          FStatsTrace::Add(&local_230,(long64)auVar7);
          if (pFVar22->ScopeCount == 0) {
            FThreadStats::Flush(pFVar22,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar22,false,false);
          }
        }
      }
    }
  }
  return;
}

// ReleaseRHI @ 148751f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::SVT::FTileDataTexture::ReleaseRHI(FTileDataTexture *this)

{
  uchar auVar1 [8];
  FName FVar2;
  bool bVar3;
  FRHITextureDesc *pFVar4;
  uchar (*pauVar5) [8];
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal> FVar10;
  undefined1 auStackY_a8 [32];
  FName local_48;
  FStatMessage local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (this->FormatA != PF_Unknown) {
    pFVar4 = (FRHITextureDesc *)
             (**(code **)(((((this->TileDataTextureA).Reference)->RenderTargetItem).
                           TargetableTexture.Reference)->_padding_ + 0x20))();
    bVar3 = FRHITextureDesc::Validate(pFVar4,L"",false);
    if (bVar3) {
      pauVar5 = (uchar (*) [8])
                (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,&local_40,pFVar4,0);
      auVar1 = *pauVar5;
      if (auVar1 != (uchar  [8])0x0) {
        FVar7 = StatPtr_STAT_SVTTileDataMemory;
        if (StatPtr_STAT_SVTTileDataMemory ==
            (FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory>)0x0) {
          pFVar6 = ::FName::FName(&local_48,"STAT_SVTTileDataMemory");
          FVar7 = (FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTTileDataMemory,*pFVar6,
                             L"TileData GPU Memory","STATGROUP_SparseVolumeTextureMemory",
                             "STATCAT_Advanced",L"SparseVolumeTexture Memory",true,false,ST_int64,
                             false,false,MCR_GPU);
        }
        FVar2 = *(FName *)FVar7;
        local_48 = FVar2;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar8 == (FThreadStats *)0x0) {
            pFVar9 = FThreadStatsPool::Get();
            pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
          }
          local_40.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
          local_48 = FVar2;
          local_40.StatData.Pad = auVar1;
          local_40.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar8,&local_40);
          FStatsTrace::Add(&local_48,-(longlong)auVar1);
          if (pFVar8->ScopeCount == 0) {
            FThreadStats::Flush(pFVar8,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar8,false,false);
          }
        }
        FVar10 = StatPtr_STAT_SVTGPUMemoryTotal;
        if (StatPtr_STAT_SVTGPUMemoryTotal ==
            (FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal>)0x0) {
          pFVar6 = ::FName::FName(&local_48,"STAT_SVTGPUMemoryTotal");
          FVar10 = (FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTGPUMemoryTotal,*pFVar6,
                              L"Total GPU Memory","STATGROUP_SparseVolumeTextureMemory",
                              "STATCAT_Advanced",L"SparseVolumeTexture Memory",true,false,ST_int64,
                              false,false,MCR_GPU);
        }
        FVar2 = *(FName *)FVar10;
        local_48 = FVar2;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar8 == (FThreadStats *)0x0) {
            pFVar9 = FThreadStatsPool::Get();
            pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
          }
          local_40.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
          local_48 = FVar2;
          local_40.StatData.Pad = auVar1;
          local_40.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar8,&local_40);
          FStatsTrace::Add(&local_48,-(longlong)auVar1);
          if (pFVar8->ScopeCount == 0) {
            FThreadStats::Flush(pFVar8,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar8,false,false);
          }
        }
      }
    }
  }
  if (this->FormatB != PF_Unknown) {
    pFVar4 = (FRHITextureDesc *)
             (**(code **)(((((this->TileDataTextureB).Reference)->RenderTargetItem).
                           TargetableTexture.Reference)->_padding_ + 0x20))();
    bVar3 = FRHITextureDesc::Validate(pFVar4,L"",false);
    if (bVar3) {
      pauVar5 = (uchar (*) [8])
                (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,&local_40,pFVar4,0);
      auVar1 = *pauVar5;
      if (auVar1 != (uchar  [8])0x0) {
        FVar7 = StatPtr_STAT_SVTTileDataMemory;
        if (StatPtr_STAT_SVTTileDataMemory ==
            (FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory>)0x0) {
          pFVar6 = ::FName::FName(&local_48,"STAT_SVTTileDataMemory");
          FVar7 = (FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTTileDataMemory,*pFVar6,
                             L"TileData GPU Memory","STATGROUP_SparseVolumeTextureMemory",
                             "STATCAT_Advanced",L"SparseVolumeTexture Memory",true,false,ST_int64,
                             false,false,MCR_GPU);
        }
        FVar2 = *(FName *)FVar7;
        local_48 = FVar2;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar8 == (FThreadStats *)0x0) {
            pFVar9 = FThreadStatsPool::Get();
            pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
          }
          local_40.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
          local_48 = FVar2;
          local_40.StatData.Pad = auVar1;
          local_40.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar8,&local_40);
          FStatsTrace::Add(&local_48,-(longlong)auVar1);
          if (pFVar8->ScopeCount == 0) {
            FThreadStats::Flush(pFVar8,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar8,false,false);
          }
        }
        FVar10 = StatPtr_STAT_SVTGPUMemoryTotal;
        if (StatPtr_STAT_SVTGPUMemoryTotal ==
            (FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal>)0x0) {
          pFVar6 = ::FName::FName(&local_48,"STAT_SVTGPUMemoryTotal");
          FVar10 = (FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTGPUMemoryTotal,*pFVar6,
                              L"Total GPU Memory","STATGROUP_SparseVolumeTextureMemory",
                              "STATCAT_Advanced",L"SparseVolumeTexture Memory",true,false,ST_int64,
                              false,false,MCR_GPU);
        }
        FVar2 = *(FName *)FVar10;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          local_48 = FVar2;
          pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar8 == (FThreadStats *)0x0) {
            pFVar9 = FThreadStatsPool::Get();
            pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
          }
          local_40.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
          local_48 = FVar2;
          local_40.StatData.Pad = auVar1;
          local_40.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar8,&local_40);
          FStatsTrace::Add(&local_48,-(longlong)auVar1);
          if (pFVar8->ScopeCount == 0) {
            FThreadStats::Flush(pFVar8,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar8,false,false);
          }
        }
      }
    }
  }
  return;
}

// ReserveUpload @ 148754520

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UE::SVT::FTileDataTexture::ReserveUpload(FTileDataTexture *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->UploaderState != Reserving) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UploaderState == EUploaderState::Reserving",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                       ,0xa6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NumReservedUploadTiles + param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(NumReservedUploadTiles + NumTiles) >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                       ,0xa7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NumReservedUploadVoxelsA + param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(NumReservedUploadVoxelsA + NumVoxelsA) >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                       ,0xa8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NumReservedUploadVoxelsB + param_3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(NumReservedUploadVoxelsB + NumVoxelsB) >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureTileDataTexture.cpp"
                       ,0xa9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->NumReservedUploadTiles = this->NumReservedUploadTiles + param_1;
  this->NumReservedUploadVoxelsA = this->NumReservedUploadVoxelsA + param_2;
  this->NumReservedUploadVoxelsB = this->NumReservedUploadVoxelsB + param_3;
  return;
}

// ShouldUseReservedResources @ 14875c840

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl UE::SVT::FTileDataTexture::ShouldUseReservedResources(void)

{
  if ((GRHIGlobals.ReservedResources.SupportsVolumeTextures) &&
     (GSVTStreamingReservedResources != 0)) {
    return true;
  }
  return false;
}

