// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 9

// ~FHairStrandsRootBulkData @ 14dfb0820

void __thiscall FHairStrandsRootBulkData::~FHairStrandsRootBulkData(FHairStrandsRootBulkData *this)

{
  FScriptContainerElement *pFVar1;
  
  FBulkData::~FBulkData((FBulkData *)&(this->Data).RestSamplePositionsBuffer.Data);
  FBulkData::~FBulkData((FBulkData *)&(this->Data).MeshSampleIndicesAndSectionsBuffer.Data);
  FBulkData::~FBulkData((FBulkData *)&(this->Data).MeshInterpolationWeightsBuffer.Data);
  FBulkData::~FBulkData((FBulkData *)&(this->Data).RestUniqueTrianglePositionBuffer.Data);
  FBulkData::~FBulkData((FBulkData *)&(this->Data).UniqueTriangleIndexBuffer.Data);
  FBulkData::~FBulkData((FBulkData *)&(this->Data).RootBarycentricBuffer.Data);
  FBulkData::~FBulkData((FBulkData *)&(this->Data).RootToUniqueTriangleIndexBuffer.Data);
  pFVar1 = (this->Header).UniqueSectionIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FHairStrandsBulkCommon__6B_;
  return;
}

// GetDataSize @ 14e09b670

uint __thiscall FHairStrandsRootBulkData::GetDataSize(FHairStrandsRootBulkData *this)

{
  long64 lVar1;
  long64 lVar2;
  long64 lVar3;
  long64 lVar4;
  long64 lVar5;
  long64 lVar6;
  long64 lVar7;
  
  lVar1 = FBulkData::GetBulkDataSize
                    ((FBulkData *)&(this->Data).RootToUniqueTriangleIndexBuffer.Data);
  lVar2 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).RootBarycentricBuffer.Data);
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).UniqueTriangleIndexBuffer.Data);
  lVar4 = FBulkData::GetBulkDataSize
                    ((FBulkData *)&(this->Data).RestUniqueTrianglePositionBuffer.Data);
  lVar5 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).MeshInterpolationWeightsBuffer.Data)
  ;
  lVar6 = FBulkData::GetBulkDataSize
                    ((FBulkData *)&(this->Data).MeshSampleIndicesAndSectionsBuffer.Data);
  lVar7 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).RestSamplePositionsBuffer.Data);
  return (int)lVar7 + (int)lVar6 + (int)lVar5 + (int)lVar4 + (int)lVar3 + (int)lVar2 + (int)lVar1;
}

// GetResourceCount @ 14e09cd30

uint __thiscall FHairStrandsRootBulkData::GetResourceCount(FHairStrandsRootBulkData *this)

{
  return 7;
}

// GetResources @ 14e09d290

void __thiscall
FHairStrandsRootBulkData::GetResources(FHairStrandsRootBulkData *this,FQuery *param_1)

{
  FHairBulkContainer *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((param_1->Type == ReadIO) ||
     (uVar4 = (this->Header).RootCount, (param_1->Type - ReadDDC & 0xfffffffb) == 0)) {
    if (param_1->StreamingRequest == (FHairStreamingRequest *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamingRequest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\HairStrandsDatas.h"
                         ,0x1d4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar4 = param_1->StreamingRequest->CurveCount;
    if ((this->Header).RootCount < uVar4) {
      uVar4 = (this->Header).RootCount;
    }
  }
  FHairStrandsBulkCommon::FQuery::Add
            (param_1,&(this->Data).RootToUniqueTriangleIndexBuffer,
             L"_RootToUniqueTriangleIndexBuffer",(uint *)&this->Data,
             uVar4 * (this->Header).Strides.RootToUniqueTriangleIndexBufferStride);
  pFVar1 = &(this->Data).RootBarycentricBuffer;
  FHairStrandsBulkCommon::FQuery::Add
            (param_1,pFVar1,L"_RootBarycentricBuffer",&pFVar1->LoadedSize,
             uVar4 * (this->Header).Strides.RootBarycentricBufferStride);
  pFVar1 = &(this->Data).UniqueTriangleIndexBuffer;
  FHairStrandsBulkCommon::FQuery::Add
            (param_1,pFVar1,L"_UniqueTriangleIndexBuffer",&pFVar1->LoadedSize,
             (this->Header).Strides.UniqueTriangleIndexBufferStride *
             (this->Header).UniqueTriangleCount);
  pFVar1 = &(this->Data).RestUniqueTrianglePositionBuffer;
  FHairStrandsBulkCommon::FQuery::Add
            (param_1,pFVar1,L"_RestUniqueTrianglePositionBuffer",&pFVar1->LoadedSize,
             (this->Header).Strides.RestUniqueTrianglePositionBufferStride *
             (this->Header).UniqueTriangleCount);
  uVar4 = (this->Header).SampleCount;
  if (uVar4 != 0) {
    uVar4 = FGroomRBFDeformer::GetWeightCount(uVar4);
    pFVar1 = &(this->Data).MeshInterpolationWeightsBuffer;
    FHairStrandsBulkCommon::FQuery::Add
              (param_1,pFVar1,L"_MeshInterpolationWeightsBuffer",&pFVar1->LoadedSize,
               uVar4 * (this->Header).Strides.MeshInterpolationWeightsBufferStride);
    pFVar1 = &(this->Data).MeshSampleIndicesAndSectionsBuffer;
    FHairStrandsBulkCommon::FQuery::Add
              (param_1,pFVar1,L"_MeshSampleIndicesAndSectionsBuffer",&pFVar1->LoadedSize,
               (this->Header).Strides.MeshSampleIndicesAndSectionsBufferStride *
               (this->Header).SampleCount);
    pFVar1 = &(this->Data).RestSamplePositionsBuffer;
    FHairStrandsBulkCommon::FQuery::Add
              (param_1,pFVar1,L"_RestSamplePositionsBuffer",&pFVar1->LoadedSize,
               (this->Header).Strides.RestSamplePositionsBufferStride * (this->Header).SampleCount);
  }
  return;
}

// GetValidSectionIndices @ 14e0a3c80

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
FHairStrandsRootBulkData::GetValidSectionIndices(FHairStrandsRootBulkData *this)

{
  return &(this->Header).UniqueSectionIndices;
}

// IsCookedBulkDataLoadedForCPUAccess @ 14e0a95d0

bool __thiscall
FHairStrandsRootBulkData::IsCookedBulkDataLoadedForCPUAccess(FHairStrandsRootBulkData *this)

{
  bool bVar1;
  bool bVar2;
  long64 lVar3;
  byte bVar4;
  byte bVar5;
  
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).RootBarycentricBuffer.Data);
  if (lVar3 == 0) {
LAB_14e0a9608:
    bVar5 = 1;
  }
  else {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).RootBarycentricBuffer.Data);
    if (bVar1) goto LAB_14e0a9608;
    bVar5 = 0;
  }
  lVar3 = FBulkData::GetBulkDataSize
                    ((FBulkData *)&(this->Data).RootToUniqueTriangleIndexBuffer.Data);
  if (lVar3 == 0) {
LAB_14e0a962a:
    bVar4 = 1;
  }
  else {
    bVar1 = FBulkData::IsBulkDataLoaded
                      ((FBulkData *)&(this->Data).RootToUniqueTriangleIndexBuffer.Data);
    if (bVar1) goto LAB_14e0a962a;
    bVar4 = 0;
  }
  bVar4 = bVar4 & bVar5;
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).UniqueTriangleIndexBuffer.Data);
  if (lVar3 != 0) {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).UniqueTriangleIndexBuffer.Data);
    if (!bVar1) {
      bVar4 = 0;
    }
  }
  lVar3 = FBulkData::GetBulkDataSize
                    ((FBulkData *)&(this->Data).RestUniqueTrianglePositionBuffer.Data);
  if (lVar3 == 0) {
LAB_14e0a9673:
    bVar5 = 1;
  }
  else {
    bVar1 = FBulkData::IsBulkDataLoaded
                      ((FBulkData *)&(this->Data).RestUniqueTrianglePositionBuffer.Data);
    bVar5 = 0;
    if (bVar1) goto LAB_14e0a9673;
  }
  bVar4 = bVar4 & bVar5;
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).MeshInterpolationWeightsBuffer.Data)
  ;
  if (lVar3 != 0) {
    bVar1 = FBulkData::IsBulkDataLoaded
                      ((FBulkData *)&(this->Data).MeshInterpolationWeightsBuffer.Data);
    if (!bVar1) {
      bVar4 = 0;
    }
  }
  lVar3 = FBulkData::GetBulkDataSize
                    ((FBulkData *)&(this->Data).MeshSampleIndicesAndSectionsBuffer.Data);
  if (lVar3 != 0) {
    bVar1 = FBulkData::IsBulkDataLoaded
                      ((FBulkData *)&(this->Data).MeshSampleIndicesAndSectionsBuffer.Data);
    if (!bVar1) goto LAB_14e0a96bd;
  }
  bVar1 = true;
LAB_14e0a96bd:
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).RestSamplePositionsBuffer.Data);
  if (lVar3 != 0) {
    bVar2 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).RestSamplePositionsBuffer.Data);
    if (!bVar2) {
      return false;
    }
  }
  return (bool)(bVar4 & bVar1);
}

// Reset @ 14e0aace0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FHairStrandsRootBulkData::Reset(FHairStrandsRootBulkData *this)

{
  int *piVar1;
  undefined1 auStackY_98 [32];
  FAllocation local_60;
  undefined5 local_58;
  undefined4 uStack_53;
  undefined1 uStack_4f;
  undefined6 uStack_4e;
  uchar local_48 [8];
  uchar local_40 [4];
  undefined4 local_3c;
  FChunk *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  (this->Header).LODIndex = -1;
  (this->Header).RootCount = 0;
  (this->Header).PointCount = 0;
  (this->Header).SampleCount = 0;
  (this->Header).MeshSectionCount = 0;
  piVar1 = &(this->Header).UniqueSectionIndices.ArrayMax;
  (this->Header).UniqueTriangleCount = 0;
  (this->Header).UniqueSectionIndices.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Header).UniqueSectionIndices.AllocatorInstance,0,piVar1);
  }
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).RootBarycentricBuffer.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).RootToUniqueTriangleIndexBuffer.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).UniqueTriangleIndexBuffer.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).RestUniqueTrianglePositionBuffer.Data);
  local_58 = 0;
  uStack_4e = 0;
  local_3c = 0;
  local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_60.RawData = (void *)0x0;
  uStack_53 = 0xffffffff;
  uStack_4f = 0xff;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_38 = (FChunk *)0x0;
  (this->Data).RootBarycentricBuffer.LoadedSize = 0;
  FBulkData::operator=((FBulkData *)&(this->Data).RootBarycentricBuffer.Data,(FBulkData *)&local_60)
  ;
  (this->Data).RootBarycentricBuffer.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  local_58 = 0;
  uStack_4e = 0;
  local_3c = 0;
  local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_60.RawData = (void *)0x0;
  uStack_53 = 0xffffffff;
  uStack_4f = 0xff;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_38 = (FChunk *)0x0;
  (this->Data).RootToUniqueTriangleIndexBuffer.LoadedSize = 0;
  FBulkData::operator=
            ((FBulkData *)&(this->Data).RootToUniqueTriangleIndexBuffer.Data,(FBulkData *)&local_60)
  ;
  (this->Data).RootToUniqueTriangleIndexBuffer.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  local_58 = 0;
  uStack_4e = 0;
  local_3c = 0;
  local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_60.RawData = (void *)0x0;
  uStack_53 = 0xffffffff;
  uStack_4f = 0xff;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_38 = (FChunk *)0x0;
  (this->Data).UniqueTriangleIndexBuffer.LoadedSize = 0;
  FBulkData::operator=
            ((FBulkData *)&(this->Data).UniqueTriangleIndexBuffer.Data,(FBulkData *)&local_60);
  (this->Data).UniqueTriangleIndexBuffer.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  local_58 = 0;
  uStack_4e = 0;
  local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_3c = 0;
  local_60.RawData = (void *)0x0;
  uStack_53 = 0xffffffff;
  uStack_4f = 0xff;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_38 = (FChunk *)0x0;
  (this->Data).RestUniqueTrianglePositionBuffer.LoadedSize = 0;
  FBulkData::operator=
            ((FBulkData *)&(this->Data).RestUniqueTrianglePositionBuffer.Data,(FBulkData *)&local_60
            );
  (this->Data).RestUniqueTrianglePositionBuffer.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).MeshInterpolationWeightsBuffer.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).MeshSampleIndicesAndSectionsBuffer.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).RestSamplePositionsBuffer.Data);
  local_58 = 0;
  uStack_4e = 0;
  local_3c = 0;
  local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_60.RawData = (void *)0x0;
  uStack_53 = 0xffffffff;
  uStack_4f = 0xff;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_38 = (FChunk *)0x0;
  (this->Data).MeshInterpolationWeightsBuffer.LoadedSize = 0;
  FBulkData::operator=
            ((FBulkData *)&(this->Data).MeshInterpolationWeightsBuffer.Data,(FBulkData *)&local_60);
  (this->Data).MeshInterpolationWeightsBuffer.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  local_58 = 0;
  uStack_4e = 0;
  local_3c = 0;
  local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_60.RawData = (void *)0x0;
  uStack_53 = 0xffffffff;
  uStack_4f = 0xff;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_38 = (FChunk *)0x0;
  (this->Data).MeshSampleIndicesAndSectionsBuffer.LoadedSize = 0;
  FBulkData::operator=
            ((FBulkData *)&(this->Data).MeshSampleIndicesAndSectionsBuffer.Data,
             (FBulkData *)&local_60);
  (this->Data).MeshSampleIndicesAndSectionsBuffer.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  local_58 = 0;
  uStack_4e = 0;
  local_3c = 0;
  local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_60.RawData = (void *)0x0;
  uStack_53 = 0xffffffff;
  uStack_4f = 0xff;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_38 = (FChunk *)0x0;
  (this->Data).RestSamplePositionsBuffer.LoadedSize = 0;
  FBulkData::operator=
            ((FBulkData *)&(this->Data).RestSamplePositionsBuffer.Data,(FBulkData *)&local_60);
  (this->Data).RestSamplePositionsBuffer.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  return;
}

// ResetLoadedSize @ 14e0ab210

void __thiscall FHairStrandsRootBulkData::ResetLoadedSize(FHairStrandsRootBulkData *this)

{
  (this->Data).RootBarycentricBuffer.LoadedSize = 0;
  (this->Data).RootToUniqueTriangleIndexBuffer.LoadedSize = 0;
  (this->Data).UniqueTriangleIndexBuffer.LoadedSize = 0;
  (this->Data).RestUniqueTrianglePositionBuffer.LoadedSize = 0;
  (this->Data).MeshInterpolationWeightsBuffer.LoadedSize = 0;
  (this->Data).MeshSampleIndicesAndSectionsBuffer.LoadedSize = 0;
  (this->Data).RestSamplePositionsBuffer.LoadedSize = 0;
  return;
}

// SerializeHeader @ 14e0ad5b0

void __thiscall
FHairStrandsRootBulkData::SerializeHeader
          (FHairStrandsRootBulkData *this,FArchive *param_1,UObject *param_2)

{
  FHeader *pFVar1;
  FStrides *pFVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  
  puVar5 = &(this->Header).RootCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar5 = &(this->Header).PointCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar1 = &this->Header;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
    }
  }
  else {
    pFVar1->LODIndex = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar5 = &(this->Header).UniqueTriangleCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar5 = &(this->Header).SampleCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&(this->Header).UniqueSectionIndices);
  puVar5 = &(this->Header).MeshSectionCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar2 = &(this->Header).Strides;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar2->RootToUniqueTriangleIndexBufferStride);
    }
  }
  else {
    pFVar2->RootToUniqueTriangleIndexBufferStride = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar5 = &(this->Header).Strides.RootBarycentricBufferStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar5 = &(this->Header).Strides.UniqueTriangleIndexBufferStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar5 = &(this->Header).Strides.RestUniqueTrianglePositionBufferStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar5 = &(this->Header).Strides.MeshInterpolationWeightsBufferStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar5 = &(this->Header).Strides.MeshSampleIndicesAndSectionsBufferStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar5 = &(this->Header).Strides.RestSamplePositionsBufferStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar5 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014e0ad959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar5);
  return;
}

