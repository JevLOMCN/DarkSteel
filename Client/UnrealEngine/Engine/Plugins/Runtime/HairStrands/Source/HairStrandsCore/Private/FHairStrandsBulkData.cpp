// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 11

// FHairStrandsBulkData @ 14dfadb40

FHairStrandsBulkData * __thiscall
FHairStrandsBulkData::FHairStrandsBulkData(FHairStrandsBulkData *this,FHairStrandsBulkData *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  undefined8 uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  this->_padding_ = (longlong)&___7FHairStrandsBulkData__6B_;
  pTVar2 = &(this->Header).CurveToPointCount;
  (this->Header).CurveCount = (param_1->Header).CurveCount;
  (this->Header).PointCount = (param_1->Header).PointCount;
  (this->Header).MinPointPerCurve = (param_1->Header).MinPointPerCurve;
  (this->Header).MaxPointPerCurve = (param_1->Header).MaxPointPerCurve;
  (this->Header).AvgPointPerCurve = (param_1->Header).AvgPointPerCurve;
  (this->Header).MaxLength = (param_1->Header).MaxLength;
  (this->Header).MaxRadius = (param_1->Header).MaxRadius;
  dVar6 = (param_1->Header).BoundingBox.Min.field0_0x0._s_0.Y;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.X =
       (param_1->Header).BoundingBox.Min.field0_0x0._s_0.X;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->Header).BoundingBox.Max.field0_0x0._s_0.X;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.Z =
       (param_1->Header).BoundingBox.Min.field0_0x0._s_0.Z;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.X = dVar6;
  dVar6 = (param_1->Header).BoundingBox.Max.field0_0x0._s_0.Z;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.Y =
       (param_1->Header).BoundingBox.Max.field0_0x0._s_0.Y;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.Z = dVar6;
  uVar8 = (param_1->Header).BoundingBox.Pad[0];
  uVar9 = (param_1->Header).BoundingBox.Pad[1];
  uVar10 = (param_1->Header).BoundingBox.Pad[2];
  uVar11 = (param_1->Header).BoundingBox.Pad[3];
  uVar12 = (param_1->Header).BoundingBox.Pad[4];
  uVar13 = (param_1->Header).BoundingBox.Pad[5];
  uVar14 = (param_1->Header).BoundingBox.Pad[6];
  (this->Header).BoundingBox.IsValid = (param_1->Header).BoundingBox.IsValid;
  (this->Header).BoundingBox.Pad[0] = uVar8;
  (this->Header).BoundingBox.Pad[1] = uVar9;
  (this->Header).BoundingBox.Pad[2] = uVar10;
  (this->Header).BoundingBox.Pad[3] = uVar11;
  (this->Header).BoundingBox.Pad[4] = uVar12;
  (this->Header).BoundingBox.Pad[5] = uVar13;
  (this->Header).BoundingBox.Pad[6] = uVar14;
  (this->Header).Flags = (param_1->Header).Flags;
  uVar7 = *(undefined8 *)((param_1->Header).CurveAttributeOffsets + 2);
  *(undefined8 *)(this->Header).CurveAttributeOffsets =
       *(undefined8 *)(param_1->Header).CurveAttributeOffsets;
  *(undefined8 *)((this->Header).CurveAttributeOffsets + 2) = uVar7;
  (this->Header).CurveAttributeOffsets[4] = (param_1->Header).CurveAttributeOffsets[4];
  *(undefined8 *)(this->Header).PointAttributeOffsets =
       *(undefined8 *)(param_1->Header).PointAttributeOffsets;
  (this->Header).PointAttributeOffsets[2] = (param_1->Header).PointAttributeOffsets[2];
  (this->Header).ImportedAttributes = (param_1->Header).ImportedAttributes;
  (this->Header).ImportedAttributeFlags = (param_1->Header).ImportedAttributeFlags;
  (this->Header).SourceCurveCount = (param_1->Header).SourceCurveCount;
  (this->Header).SourcePointCount = (param_1->Header).SourcePointCount;
  piVar1 = &(this->Header).CurveToPointCount.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Header).CurveToPointCount.ArrayNum;
  pFVar5 = (param_1->Header).CurveToPointCount.AllocatorInstance.Data;
  (this->Header).CurveToPointCount.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &(this->Header).CoverageScales;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Header).CoverageScales.ArrayMax;
  iVar4 = (param_1->Header).CoverageScales.ArrayNum;
  pFVar5 = (param_1->Header).CoverageScales.AllocatorInstance.Data;
  (this->Header).CoverageScales.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  uVar7 = *(undefined8 *)((longlong)&(param_1->Header).Transcoding.PositionOffset.field0_0x0 + 8);
  *(undefined8 *)&(this->Header).Transcoding.PositionOffset.field0_0x0 =
       *(undefined8 *)&(param_1->Header).Transcoding.PositionOffset.field0_0x0;
  *(undefined8 *)((longlong)&(this->Header).Transcoding.PositionOffset.field0_0x0 + 8) = uVar7;
  *(undefined8 *)((longlong)&(this->Header).Transcoding.PositionScale.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->Header).Transcoding.PositionScale.field0_0x0 + 4);
  uVar15 = (param_1->Header).Strides.CurveStride;
  uVar16 = (param_1->Header).Strides.PointToCurveChunkStride;
  uVar17 = (param_1->Header).Strides.CurveAttributeChunkStride;
  (this->Header).Strides.PositionStride = (param_1->Header).Strides.PositionStride;
  (this->Header).Strides.CurveStride = uVar15;
  (this->Header).Strides.PointToCurveChunkStride = uVar16;
  (this->Header).Strides.CurveAttributeChunkStride = uVar17;
  uVar15 = (param_1->Header).Strides.TranscodedPositionChunkStride;
  uVar16 = (param_1->Header).Strides.CurveMappingStride;
  uVar17 = (param_1->Header).Strides.PointMappingStride;
  (this->Header).Strides.PointAttributeChunkStride =
       (param_1->Header).Strides.PointAttributeChunkStride;
  (this->Header).Strides.TranscodedPositionChunkStride = uVar15;
  (this->Header).Strides.CurveMappingStride = uVar16;
  (this->Header).Strides.PointMappingStride = uVar17;
  uVar15 = (param_1->Header).Strides.CurveAttributeChunkElementCount;
  uVar16 = (param_1->Header).Strides.PointAttributeChunkElementCount;
  uVar17 = (param_1->Header).Strides.TranscodedPositionChunkElementCount;
  (this->Header).Strides.PointToCurveChunkElementCount =
       (param_1->Header).Strides.PointToCurveChunkElementCount;
  (this->Header).Strides.CurveAttributeChunkElementCount = uVar15;
  (this->Header).Strides.PointAttributeChunkElementCount = uVar16;
  (this->Header).Strides.TranscodedPositionChunkElementCount = uVar17;
  (this->Data).Positions.LoadedSize = (param_1->Data).Positions.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Data).Positions.Data,(FBulkData *)&(param_1->Data).Positions.Data)
  ;
  (this->Data).Positions.ChunkRequest = (param_1->Data).Positions.ChunkRequest;
  (this->Data).TranscodedPositions.LoadedSize = (param_1->Data).TranscodedPositions.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Data).TranscodedPositions.Data,
             (FBulkData *)&(param_1->Data).TranscodedPositions.Data);
  (this->Data).TranscodedPositions.ChunkRequest = (param_1->Data).TranscodedPositions.ChunkRequest;
  (this->Data).CurveAttributes.LoadedSize = (param_1->Data).CurveAttributes.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Data).CurveAttributes.Data,
             (FBulkData *)&(param_1->Data).CurveAttributes.Data);
  (this->Data).CurveAttributes.ChunkRequest = (param_1->Data).CurveAttributes.ChunkRequest;
  (this->Data).PointAttributes.LoadedSize = (param_1->Data).PointAttributes.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Data).PointAttributes.Data,
             (FBulkData *)&(param_1->Data).PointAttributes.Data);
  (this->Data).PointAttributes.ChunkRequest = (param_1->Data).PointAttributes.ChunkRequest;
  (this->Data).PointToCurve.LoadedSize = (param_1->Data).PointToCurve.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Data).PointToCurve.Data,
             (FBulkData *)&(param_1->Data).PointToCurve.Data);
  (this->Data).PointToCurve.ChunkRequest = (param_1->Data).PointToCurve.ChunkRequest;
  (this->Data).Curves.LoadedSize = (param_1->Data).Curves.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Data).Curves.Data,(FBulkData *)&(param_1->Data).Curves.Data);
  (this->Data).Curves.ChunkRequest = (param_1->Data).Curves.ChunkRequest;
  (this->Data).CurveMapping.LoadedSize = (param_1->Data).CurveMapping.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Data).CurveMapping.Data,
             (FBulkData *)&(param_1->Data).CurveMapping.Data);
  (this->Data).CurveMapping.ChunkRequest = (param_1->Data).CurveMapping.ChunkRequest;
  (this->Data).PointMapping.LoadedSize = (param_1->Data).PointMapping.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Data).PointMapping.Data,
             (FBulkData *)&(param_1->Data).PointMapping.Data);
  (this->Data).PointMapping.ChunkRequest = (param_1->Data).PointMapping.ChunkRequest;
  return this;
}

// FHairStrandsBulkData @ 14dfadea0

FHairStrandsBulkData * __thiscall
FHairStrandsBulkData::FHairStrandsBulkData(FHairStrandsBulkData *this)

{
  this->_padding_ = (longlong)&___7FHairStrandsBulkData__6B_;
  (this->Header).CurveCount = 0;
  (this->Header).PointCount = 0;
  (this->Header).MinPointPerCurve = 0;
  (this->Header).MaxPointPerCurve = 0;
  (this->Header).AvgPointPerCurve = 0;
  (this->Header).MaxLength = 0.0;
  (this->Header).MaxRadius = 0.0;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.X = 0.0;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.Y = 0.0;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.Z = 0.0;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.X = 0.0;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.Y = 0.0;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.Z = 0.0;
  (this->Header).BoundingBox.IsValid = '\0';
  (this->Header).BoundingBox.Pad[0] = '\0';
  (this->Header).BoundingBox.Pad[1] = '\0';
  (this->Header).BoundingBox.Pad[2] = '\0';
  (this->Header).BoundingBox.Pad[3] = '\0';
  (this->Header).BoundingBox.Pad[4] = '\0';
  (this->Header).BoundingBox.Pad[5] = '\0';
  (this->Header).BoundingBox.Pad[6] = '\0';
  (this->Header).Flags = 0;
  (this->Header).CurveAttributeOffsets[0] = 0;
  (this->Header).CurveAttributeOffsets[1] = 0;
  (this->Header).CurveAttributeOffsets[2] = 0;
  (this->Header).CurveAttributeOffsets[3] = 0;
  (this->Header).CurveAttributeOffsets[4] = 0;
  (this->Header).PointAttributeOffsets[0] = 0;
  (this->Header).PointAttributeOffsets[1] = 0;
  *(undefined8 *)((this->Header).PointAttributeOffsets + 2) = 0;
  (this->Header).ImportedAttributeFlags = 0;
  (this->Header).SourceCurveCount = 0;
  (this->Header).SourcePointCount = 0;
  (this->Header).CurveToPointCount.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).CurveToPointCount.ArrayNum = 0;
  (this->Header).CurveToPointCount.ArrayMax = 0;
  (this->Header).CoverageScales.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).CoverageScales.ArrayNum = 0;
  (this->Header).CoverageScales.ArrayMax = 0;
  *(undefined8 *)&(this->Header).Transcoding.PositionOffset.field0_0x0 =
       UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  (this->Header).Transcoding.PositionOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Header).Transcoding.PositionScale.field0_0x0 =
       UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  (this->Header).Transcoding.PositionScale.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  (this->Header).Strides.PositionStride = 0;
  (this->Header).Strides.CurveStride = 0;
  (this->Header).Strides.PointToCurveChunkStride = 0;
  (this->Header).Strides.CurveAttributeChunkStride = 0;
  (this->Header).Strides.PointAttributeChunkStride = 0;
  (this->Header).Strides.TranscodedPositionChunkStride = 0;
  (this->Header).Strides.CurveMappingStride = 0;
  (this->Header).Strides.PointMappingStride = 0;
  (this->Header).Strides.PointToCurveChunkElementCount = 0;
  (this->Header).Strides.CurveAttributeChunkElementCount = 0;
  (this->Header).Strides.PointAttributeChunkElementCount = 0;
  (this->Header).Strides.TranscodedPositionChunkElementCount = 0;
  FData::FData(&this->Data);
  return this;
}

// GetCoverageScale @ 14e09b310

float __thiscall FHairStrandsBulkData::GetCoverageScale(FHairStrandsBulkData *this,float param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  
  fVar7 = __real_3f800000;
  uVar1 = (this->Header).CoverageScales.ArrayNum;
  if (0 < (int)uVar1) {
    uVar5 = uVar1 - 1;
    fVar9 = (float)uVar1 * param_1;
    if ((float)uVar5 <= (float)uVar1 * param_1) {
      fVar9 = (float)uVar5;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    auVar8 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),1);
    uVar1 = (uint)(longlong)auVar8._0_4_;
    if (uVar1 + 1 < uVar5) {
      uVar5 = uVar1 + 1;
    }
    uVar6 = 0;
    if ((int)uVar5 < (this->Header).CoverageScales.ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    fVar9 = fVar9 - (float)((longlong)auVar8._0_4_ & 0xffffffff);
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar7 = (float)(*pcVar3)();
        return fVar7;
      }
    }
    pFVar2 = (this->Header).CoverageScales.AllocatorInstance.Data;
    uVar6 = 0;
    if ((int)uVar1 < (this->Header).CoverageScales.ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar7 = (float)(*pcVar3)();
        return fVar7;
      }
    }
    fVar7 = (fVar7 - fVar9) *
            *(float *)((this->Header).CoverageScales.AllocatorInstance.Data +
                      (longlong)(int)uVar1 * 4) +
            fVar9 * *(float *)(pFVar2 + (longlong)(int)uVar5 * 4);
  }
  return fVar7;
}

// GetResourceCount @ 14e09cd00

uint __thiscall FHairStrandsBulkData::GetResourceCount(FHairStrandsBulkData *this)

{
  return 7;
}

// GetResourceVersion @ 14e09cd40

void __thiscall
FHairStrandsBulkData::GetResourceVersion(FHairStrandsBulkData *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
                    /* WARNING: Could not recover jumptable at 0x00014e09cd6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  return;
}

// GetResources @ 14e09cd80

void __thiscall FHairStrandsBulkData::GetResources(FHairStrandsBulkData *this,FQuery *param_1)

{
  FHairBulkContainer *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  
  uVar8 = 0;
  uVar9 = 0;
  uVar5 = 0;
  uVar11 = 0;
  if ((param_1->Type == ReadIO) || ((param_1->Type - ReadDDC & 0xfffffffb) == 0)) {
    if (param_1->StreamingRequest == (FHairStreamingRequest *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamingRequest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\HairStrandsDatas.h"
                         ,0x1d4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar11 = param_1->StreamingRequest->CurveCount;
    if ((this->Header).CurveCount < uVar11) {
      uVar11 = (this->Header).CurveCount;
    }
    if (uVar11 == 0) goto LAB_14e09ce83;
    uVar10 = uVar11 - 1;
    uVar5 = 0;
    if ((int)uVar10 < (this->Header).CurveToPointCount.ArrayNum) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar5 = *(uint *)((this->Header).CurveToPointCount.AllocatorInstance.Data +
                     (longlong)(int)uVar10 * 4);
    if (uVar5 == 0) goto LAB_14e09ce83;
    uVar8 = (this->Header).Strides.PointAttributeChunkElementCount;
    uVar10 = uVar5;
    if ((this->Header).PointCount < uVar5) {
      uVar10 = (this->Header).PointCount;
    }
    uVar10 = (((uVar10 - 1) + uVar8) / uVar8) * (this->Header).Strides.PointAttributeChunkStride;
  }
  else {
LAB_14e09ce83:
    uVar10 = 0;
    if (uVar11 == 0) {
      uVar13 = 0;
      goto LAB_14e09ceb8;
    }
  }
  uVar8 = (this->Header).Strides.CurveAttributeChunkElementCount;
  uVar13 = uVar11;
  if ((this->Header).CurveCount < uVar11) {
    uVar13 = (this->Header).CurveCount;
  }
  uVar13 = (((uVar13 - 1) + uVar8) / uVar8) * (this->Header).Strides.CurveAttributeChunkStride;
  uVar8 = uVar10;
LAB_14e09ceb8:
  if (uVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar9 = (this->Header).PointCount;
    uVar10 = (this->Header).Strides.PointToCurveChunkElementCount;
    uVar6 = uVar5;
    if (uVar9 < uVar5) {
      uVar6 = uVar9;
    }
    uVar2 = (this->Header).Strides.TranscodedPositionChunkElementCount;
    uVar10 = (((uVar6 - 1) + uVar10) / uVar10) * (this->Header).Strides.PointToCurveChunkStride;
    uVar6 = uVar5;
    if (uVar9 < uVar5) {
      uVar6 = uVar9;
    }
    uVar9 = (((uVar2 - 1) + uVar6) / uVar2) * (this->Header).Strides.TranscodedPositionChunkStride;
  }
  uVar6 = (this->Header).Flags;
  if ((uVar6 & 1) != 0) {
    if ((uVar6 & 4) == 0) {
      pwVar12 = L"_Positions";
      uVar9 = uVar5 * (this->Header).Strides.PositionStride;
      lVar7 = 0x100;
    }
    else {
      pwVar12 = L"_TranscodedPositions";
      lVar7 = 0x138;
    }
    pFVar1 = (FHairBulkContainer *)((this->Header).BoundingBox.Pad + lVar7 + -0x59);
    FHairStrandsBulkCommon::FQuery::Add(param_1,pFVar1,pwVar12,(uint *)pFVar1,uVar9);
    pFVar1 = &(this->Data).CurveAttributes;
    FHairStrandsBulkCommon::FQuery::Add
              (param_1,pFVar1,L"_CurveAttributes",&pFVar1->LoadedSize,uVar13);
    if (((this->Header).Flags & 2) != 0) {
      pFVar1 = &(this->Data).PointAttributes;
      FHairStrandsBulkCommon::FQuery::Add
                (param_1,pFVar1,L"_PointAttributes",&pFVar1->LoadedSize,uVar8);
    }
    pFVar1 = &(this->Data).PointToCurve;
    FHairStrandsBulkCommon::FQuery::Add(param_1,pFVar1,L"_PointToCurve",&pFVar1->LoadedSize,uVar10);
    pFVar1 = &(this->Data).Curves;
    FHairStrandsBulkCommon::FQuery::Add
              (param_1,pFVar1,L"_Curves",&pFVar1->LoadedSize,
               uVar11 * (this->Header).Strides.CurveStride);
    if (((this->Header).Flags & 0x20) != 0) {
      pFVar1 = &(this->Data).PointMapping;
      FHairStrandsBulkCommon::FQuery::Add
                (param_1,pFVar1,L"_PointMapping",&pFVar1->LoadedSize,
                 uVar5 * (this->Header).Strides.PointMappingStride);
    }
    if (((this->Header).Flags & 0x40) != 0) {
      pFVar1 = &(this->Data).CurveMapping;
      FHairStrandsBulkCommon::FQuery::Add
                (param_1,pFVar1,L"_CurveMapping",&pFVar1->LoadedSize,
                 uVar11 * (this->Header).Strides.CurveMappingStride);
    }
  }
  return;
}

// GetSize @ 14e09d420

uint __thiscall FHairStrandsBulkData::GetSize(FHairStrandsBulkData *this)

{
  long64 lVar1;
  long64 lVar2;
  long64 lVar3;
  long64 lVar4;
  long64 lVar5;
  long64 lVar6;
  long64 lVar7;
  long64 lVar8;
  
  lVar1 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).Positions.Data);
  lVar2 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).TranscodedPositions.Data);
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).CurveAttributes.Data);
  lVar4 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PointAttributes.Data);
  lVar5 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PointToCurve.Data);
  lVar6 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).Curves.Data);
  lVar7 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).CurveMapping.Data);
  lVar8 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PointMapping.Data);
  return (int)lVar8 + (int)lVar7 + (int)lVar6 + (int)lVar5 + (int)lVar4 + (int)lVar3 + (int)lVar2 +
         (int)lVar1;
}

// IsCookedBulkDataLoadedForCPUAccess @ 14e0a9340

bool __thiscall FHairStrandsBulkData::IsCookedBulkDataLoadedForCPUAccess(FHairStrandsBulkData *this)

{
  bool bVar1;
  bool bVar2;
  long64 lVar3;
  byte bVar4;
  byte bVar5;
  
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).Positions.Data);
  if (lVar3 == 0) {
LAB_14e0a9378:
    bVar5 = 1;
  }
  else {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).Positions.Data);
    if (bVar1) goto LAB_14e0a9378;
    bVar5 = 0;
  }
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).TranscodedPositions.Data);
  if (lVar3 == 0) {
LAB_14e0a93a0:
    bVar4 = 1;
  }
  else {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).TranscodedPositions.Data);
    if (bVar1) goto LAB_14e0a93a0;
    bVar4 = 0;
  }
  bVar4 = bVar4 & bVar5;
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).CurveAttributes.Data);
  if (lVar3 != 0) {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).CurveAttributes.Data);
    if (!bVar1) {
      bVar4 = 0;
    }
  }
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PointAttributes.Data);
  if (lVar3 == 0) {
LAB_14e0a93e9:
    bVar5 = 1;
  }
  else {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).PointAttributes.Data);
    bVar5 = 0;
    if (bVar1) goto LAB_14e0a93e9;
  }
  bVar4 = bVar4 & bVar5;
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PointToCurve.Data);
  if (lVar3 != 0) {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).PointToCurve.Data);
    if (!bVar1) {
      bVar4 = 0;
    }
  }
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).Curves.Data);
  if (lVar3 != 0) {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).Curves.Data);
    if (!bVar1) goto LAB_14e0a9433;
  }
  bVar1 = true;
LAB_14e0a9433:
  bVar1 = (bool)(bVar4 & bVar1);
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).CurveMapping.Data);
  if (lVar3 != 0) {
    bVar2 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).CurveMapping.Data);
    if (!bVar2) {
      bVar1 = false;
    }
  }
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PointMapping.Data);
  if (lVar3 != 0) {
    bVar2 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).PointMapping.Data);
    if (!bVar2) {
      return false;
    }
  }
  return bVar1;
}

// Reset @ 14e0a9ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FHairStrandsBulkData::Reset(FHairStrandsBulkData *this)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_198 [128];
  undefined1 local_118;
  undefined4 uStack_117;
  undefined2 uStack_113;
  undefined1 uStack_111;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 local_d8 [2];
  undefined8 local_c8 [2];
  undefined8 local_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
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
  
  fStack_b0 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_b8 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_30 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_a0 = 0;
  local_118 = 0;
  local_fc = 0;
  uStack_f0 = 0;
  pTVar1 = &(this->Header).CurveToPointCount;
  uStack_117 = 0;
  uStack_113 = 0;
  uStack_111 = 0;
  (this->Header).MaxLength = 0.0;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.X = 0.0;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.Y = 0.0;
  (this->Header).CurveCount = 0;
  (this->Header).PointCount = 0;
  (this->Header).MaxRadius = 0.0;
  (this->Header).BoundingBox.Min.field0_0x0._s_0.Z = 0.0;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.X = 0.0;
  (this->Header).MinPointPerCurve = 0;
  (this->Header).MaxPointPerCurve = 0;
  (this->Header).AvgPointPerCurve = 0;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.Y = 0.0;
  (this->Header).BoundingBox.Max.field0_0x0._s_0.Z = 0.0;
  (this->Header).Flags = 0;
  uStack_ac = (undefined4)local_b8;
  uStack_a8 = (undefined4)((ulonglong)local_b8 >> 0x20);
  (this->Header).BoundingBox.IsValid = '\0';
  (this->Header).BoundingBox.Pad[0] = '\0';
  (this->Header).BoundingBox.Pad[1] = '\0';
  (this->Header).BoundingBox.Pad[2] = '\0';
  (this->Header).BoundingBox.Pad[3] = '\0';
  (this->Header).BoundingBox.Pad[4] = '\0';
  (this->Header).BoundingBox.Pad[5] = '\0';
  (this->Header).BoundingBox.Pad[6] = '\0';
  (this->Header).CurveAttributeOffsets[0] = 0;
  fStack_a4 = fStack_b0;
  (this->Header).CurveAttributeOffsets[1] = 0;
  (this->Header).CurveAttributeOffsets[2] = 0;
  (this->Header).CurveAttributeOffsets[3] = 0;
  *(undefined8 *)((this->Header).CurveAttributeOffsets + 4) = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  (this->Header).PointAttributeOffsets[1] = 0;
  *(undefined8 *)((this->Header).PointAttributeOffsets + 2) = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  (this->Header).ImportedAttributeFlags = 0;
  (this->Header).SourceCurveCount = 0;
  (this->Header).SourcePointCount = 0;
  if (pTVar1 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_d8) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Header).CurveToPointCount.ArrayNum = 0;
    (this->Header).CurveToPointCount.ArrayMax = 0;
  }
  pTVar2 = &(this->Header).CoverageScales;
  if (pTVar2 != (TArray<float,TSizedDefaultAllocator<32>_> *)local_c8) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Header).CoverageScales.ArrayNum = 0;
    (this->Header).CoverageScales.ArrayMax = 0;
  }
  *(undefined8 *)&(this->Header).Transcoding.PositionOffset.field0_0x0 = local_b8;
  *(ulonglong *)((longlong)&(this->Header).Transcoding.PositionOffset.field0_0x0 + 8) =
       CONCAT44(uStack_ac,fStack_b0);
  *(ulonglong *)((longlong)&(this->Header).Transcoding.PositionScale.field0_0x0 + 4) =
       CONCAT44(fStack_a4,uStack_a8);
  (this->Header).Strides.PositionStride = (undefined4)local_a0;
  (this->Header).Strides.CurveStride = local_a0._4_4_;
  (this->Header).Strides.PointToCurveChunkStride = (undefined4)uStack_98;
  (this->Header).Strides.CurveAttributeChunkStride = uStack_98._4_4_;
  (this->Header).Strides.PointAttributeChunkStride = (undefined4)local_90;
  (this->Header).Strides.TranscodedPositionChunkStride = local_90._4_4_;
  (this->Header).Strides.CurveMappingStride = (undefined4)uStack_88;
  uVar7 = _UNK_15060db2c;
  uVar6 = _UNK_15060db28;
  uVar5 = _UNK_15060db24;
  uVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
  (this->Header).Strides.PointMappingStride = uStack_88._4_4_;
  (this->Header).Strides.PointToCurveChunkElementCount = (undefined4)local_80;
  (this->Header).Strides.CurveAttributeChunkElementCount = local_80._4_4_;
  (this->Header).Strides.PointAttributeChunkElementCount = (undefined4)uStack_78;
  (this->Header).Strides.TranscodedPositionChunkElementCount = uStack_78._4_4_;
  (this->Header).CurveAttributeOffsets[0] = uVar4;
  (this->Header).CurveAttributeOffsets[1] = uVar5;
  (this->Header).CurveAttributeOffsets[2] = uVar6;
  (this->Header).CurveAttributeOffsets[3] = uVar7;
  (this->Header).CurveAttributeOffsets[4] = uVar4;
  (this->Header).PointAttributeOffsets[0] = 0xffffffff;
  (this->Header).PointAttributeOffsets[1] = 0xffffffff;
  (this->Header).PointAttributeOffsets[2] = 0xffffffff;
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).Positions.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).TranscodedPositions.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).CurveAttributes.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).PointAttributes.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).PointToCurve.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).Curves.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).CurveMapping.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).PointMapping.Data);
  uVar8 = FIoChunkId::InvalidChunkId.Id._0_8_;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_68 = 0;
  local_58 = 0;
  uStack_4e = 0;
  local_3c = 0;
  (this->Data).Positions.LoadedSize = 0;
  uVar9 = FIoChunkId::InvalidChunkId.Id._0_8_;
  local_60.RawData = (void *)0x0;
  local_38 = (FChunk *)0x0;
  uStack_53 = 0xffffffff;
  uStack_4f = 0xff;
  FIoChunkId::InvalidChunkId.Id[0] = (uchar)uVar8;
  FIoChunkId::InvalidChunkId.Id[1] = SUB81(uVar8,1);
  FIoChunkId::InvalidChunkId.Id[2] = SUB81(uVar8,2);
  FIoChunkId::InvalidChunkId.Id[3] = SUB81(uVar8,3);
  FIoChunkId::InvalidChunkId.Id[4] = SUB81(uVar8,4);
  FIoChunkId::InvalidChunkId.Id[5] = SUB81(uVar8,5);
  FIoChunkId::InvalidChunkId.Id[6] = SUB81(uVar8,6);
  FIoChunkId::InvalidChunkId.Id[7] = SUB81(uVar8,7);
  local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
  FIoChunkId::InvalidChunkId.Id._0_8_ = uVar9;
  FBulkData::operator=((FBulkData *)&(this->Data).Positions.Data,(FBulkData *)&local_60);
  (this->Data).Positions.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  uVar8 = FIoChunkId::InvalidChunkId.Id._0_8_;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_68 = 0;
  local_58 = 0;
  uStack_4e = 0;
  local_3c = 0;
  (this->Data).TranscodedPositions.LoadedSize = 0;
  uVar9 = FIoChunkId::InvalidChunkId.Id._0_8_;
  local_60.RawData = (void *)0x0;
  local_38 = (FChunk *)0x0;
  uStack_53 = 0xffffffff;
  uStack_4f = 0xff;
  FIoChunkId::InvalidChunkId.Id[0] = (uchar)uVar8;
  FIoChunkId::InvalidChunkId.Id[1] = SUB81(uVar8,1);
  FIoChunkId::InvalidChunkId.Id[2] = SUB81(uVar8,2);
  FIoChunkId::InvalidChunkId.Id[3] = SUB81(uVar8,3);
  FIoChunkId::InvalidChunkId.Id[4] = SUB81(uVar8,4);
  FIoChunkId::InvalidChunkId.Id[5] = SUB81(uVar8,5);
  FIoChunkId::InvalidChunkId.Id[6] = SUB81(uVar8,6);
  FIoChunkId::InvalidChunkId.Id[7] = SUB81(uVar8,7);
  local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
  FIoChunkId::InvalidChunkId.Id._0_8_ = uVar9;
  FBulkData::operator=((FBulkData *)&(this->Data).TranscodedPositions.Data,(FBulkData *)&local_60);
  (this->Data).TranscodedPositions.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  uVar8 = FIoChunkId::InvalidChunkId.Id._0_8_;
  local_68 = 0;
  local_58 = 0;
  uStack_4e = 0;
  uStack_53 = 0xffffffff;
  uStack_4f = 0xff;
  local_3c = 0;
  local_60.RawData = (void *)0x0;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->Data).CurveAttributes.LoadedSize = 0;
  uVar9 = FIoChunkId::InvalidChunkId.Id._0_8_;
  FIoChunkId::InvalidChunkId.Id[0] = (uchar)uVar8;
  FIoChunkId::InvalidChunkId.Id[1] = SUB81(uVar8,1);
  FIoChunkId::InvalidChunkId.Id[2] = SUB81(uVar8,2);
  FIoChunkId::InvalidChunkId.Id[3] = SUB81(uVar8,3);
  FIoChunkId::InvalidChunkId.Id[4] = SUB81(uVar8,4);
  FIoChunkId::InvalidChunkId.Id[5] = SUB81(uVar8,5);
  FIoChunkId::InvalidChunkId.Id[6] = SUB81(uVar8,6);
  FIoChunkId::InvalidChunkId.Id[7] = SUB81(uVar8,7);
  local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_38 = (FChunk *)0x0;
  FIoChunkId::InvalidChunkId.Id._0_8_ = uVar9;
  FBulkData::operator=((FBulkData *)&(this->Data).CurveAttributes.Data,(FBulkData *)&local_60);
  (this->Data).CurveAttributes.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  local_68 = 0;
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
  (this->Data).PointAttributes.LoadedSize = 0;
  FBulkData::operator=((FBulkData *)&(this->Data).PointAttributes.Data,(FBulkData *)&local_60);
  (this->Data).PointAttributes.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  local_68 = 0;
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
  (this->Data).PointToCurve.LoadedSize = 0;
  FBulkData::operator=((FBulkData *)&(this->Data).PointToCurve.Data,(FBulkData *)&local_60);
  (this->Data).PointToCurve.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  local_68 = 0;
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
  (this->Data).Curves.LoadedSize = 0;
  FBulkData::operator=((FBulkData *)&(this->Data).Curves.Data,(FBulkData *)&local_60);
  (this->Data).Curves.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  local_68 = 0;
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
  (this->Data).CurveMapping.LoadedSize = 0;
  local_38 = (FChunk *)0x0;
  FBulkData::operator=((FBulkData *)&(this->Data).CurveMapping.Data,(FBulkData *)&local_60);
  (this->Data).CurveMapping.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  local_68 = 0;
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
  (this->Data).PointMapping.LoadedSize = 0;
  FBulkData::operator=((FBulkData *)&(this->Data).PointMapping.Data,(FBulkData *)&local_60);
  (this->Data).PointMapping.ChunkRequest = local_38;
  FBulkData::~FBulkData((FBulkData *)&local_60);
  return;
}

// ResetLoadedSize @ 14e0ab1a0

void __thiscall FHairStrandsBulkData::ResetLoadedSize(FHairStrandsBulkData *this)

{
  (this->Data).Positions.LoadedSize = 0;
  (this->Data).TranscodedPositions.LoadedSize = 0;
  (this->Data).CurveAttributes.LoadedSize = 0;
  (this->Data).PointAttributes.LoadedSize = 0;
  (this->Data).PointToCurve.LoadedSize = 0;
  (this->Data).Curves.LoadedSize = 0;
  (this->Data).CurveMapping.LoadedSize = 0;
  (this->Data).PointMapping.LoadedSize = 0;
  return;
}

// SerializeHeader @ 14e0ac530

void __thiscall
FHairStrandsBulkData::SerializeHeader(FHairStrandsBulkData *this,FArchive *param_1,UObject *param_2)

{
  float *pfVar1;
  FStrides *pFVar2;
  uint *puVar3;
  float *pfVar4;
  longlong lVar5;
  uint *puVar6;
  
  (**(code **)(this->_padding_ + 0x20))();
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Header,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&(this->Header).CurveCount);
    }
  }
  else {
    (this->Header).CurveCount = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).PointCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(this->Header).MaxLength;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(this->Header).MaxRadius;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&(this->Header).BoundingBox);
  puVar6 = &(this->Header).MinPointPerCurve;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).MaxPointPerCurve;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).AvgPointPerCurve;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Flags;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = (this->Header).CurveAttributeOffsets;
  lVar5 = 5;
  do {
    puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar6);
      }
    }
    else {
      *puVar6 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar6 = puVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar6 = (this->Header).PointAttributeOffsets;
  lVar5 = 3;
  do {
    puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar6);
      }
    }
    else {
      *puVar6 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar6 = puVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar6 = &(this->Header).ImportedAttributes;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).ImportedAttributeFlags;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).SourceCurveCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).SourcePointCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&(this->Header).CurveToPointCount);
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
            (param_1,&(this->Header).CoverageScales);
  pFVar2 = &(this->Header).Strides;
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar2->PositionStride);
    }
  }
  else {
    pFVar2->PositionStride = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.CurveStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.PointToCurveChunkStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.CurveAttributeChunkStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.PointAttributeChunkStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.TranscodedPositionChunkStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.CurveMappingStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.PointMappingStride;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.PointToCurveChunkElementCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.CurveAttributeChunkElementCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.PointAttributeChunkElementCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &(this->Header).Strides.TranscodedPositionChunkElementCount;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&(this->Header).Transcoding.PositionOffset);
  UE::Math::operator<<(param_1,&(this->Header).Transcoding.PositionScale);
  return;
}

