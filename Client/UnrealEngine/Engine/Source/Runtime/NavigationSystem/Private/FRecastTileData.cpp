// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// FRecastTileData @ 146e36330

FRecastTileData * __thiscall
FRecastTileData::FRecastTileData
          (FRecastTileData *this,int param_1,uchar *param_2,int param_3,uchar *param_4)

{
  FRawData *pFVar1;
  FRawData *pFVar2;
  TRawPtrProxy<FRecastTileData::FRawData> local_res8;
  
  pFVar2 = (FRawData *)0x0;
  this->TileDataSize = param_1;
  this->OriginalX = 0;
  this->OriginalY = 0;
  this->X = 0;
  this->Y = 0;
  this->Layer = 0;
  (this->TileRawData).Object = (FRawData *)0x0;
  (this->TileRawData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TileCacheRawData).Object = (FRawData *)0x0;
  (this->TileCacheRawData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bAttached = false;
  this->TileCacheDataSize = param_3;
  pFVar1 = ::operator_new(8);
  local_res8.Object = pFVar2;
  if (pFVar1 != (FRawData *)0x0) {
    pFVar1->RawData = param_2;
    local_res8.Object = pFVar1;
  }
  TSharedPtr<FRecastTileData::FRawData,1>::operator=<FRecastTileData::FRawData>
            (&this->TileRawData,&local_res8);
  pFVar1 = ::operator_new(8);
  if (pFVar1 != (FRawData *)0x0) {
    pFVar1->RawData = param_4;
    pFVar2 = pFVar1;
  }
  local_res8.Object = pFVar2;
  TSharedPtr<FRecastTileData::FRawData,1>::operator=<FRecastTileData::FRawData>
            (&this->TileCacheRawData,&local_res8);
  return this;
}

// FRecastTileData @ 146e363f0

FRecastTileData * __thiscall FRecastTileData::FRecastTileData(FRecastTileData *this)

{
  this->OriginalX = 0;
  this->OriginalY = 0;
  this->X = 0;
  this->Y = 0;
  this->Layer = 0;
  this->TileDataSize = 0;
  (this->TileRawData).Object = (FRawData *)0x0;
  (this->TileRawData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->TileCacheDataSize = 0;
  (this->TileCacheRawData).Object = (FRawData *)0x0;
  (this->TileCacheRawData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bAttached = false;
  return this;
}

