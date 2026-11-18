// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FDimensionSampler @ 149c499e0

FDimensionSampler * __thiscall
PCGSplineSamplerHelpers::FDimensionSampler::FDimensionSampler
          (FDimensionSampler *this,UPCGPolyLineData *param_1,UPCGSpatialData *param_2,
          UPCGSpatialData *param_3,FPCGProjectionParams *param_4,FPCGSplineSamplerParams *param_5,
          int param_6,UPCGBasePointData *param_7)

{
  UCurveFloat *pUVar1;
  UPCGMetadata *this_00;
  FName FVar2;
  code *pcVar3;
  FPCGSplineSamplerParams *pFVar4;
  bool bVar5;
  FDimensionSampler *pFVar6;
  FPCGMetadataDomain *pFVar7;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar8;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar9;
  float local_res8 [2];
  double local_res10;
  FPCGMetadataDomainID local_180;
  FName local_168;
  FPCGMetadataDomainID local_160;
  FName local_148;
  FPCGMetadataDomainID local_140;
  FName local_128;
  FPCGMetadataDomainID local_120;
  FName local_108;
  FPCGMetadataDomainID local_100;
  FName local_e8;
  FPCGMetadataDomainID local_e0;
  FName local_c8;
  FPCGMetadataDomainID local_c0;
  FName local_a8;
  FPCGMetadataDomainID local_a0;
  FName local_88;
  FPCGMetadataDomainID local_80;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  
  pFVar4 = param_5;
  this->_padding_ = (longlong)&___7FDimensionSampler_PCGSplineSamplerHelpers__6B_;
  (this->Params).Dimension = param_5->Dimension;
  (this->Params).Mode = param_5->Mode;
  (this->Params).Fill = param_5->Fill;
  (this->Params).SubdivisionsPerSegment = param_5->SubdivisionsPerSegment;
  (this->Params).DistanceIncrement = param_5->DistanceIncrement;
  (this->Params).NumSamples = param_5->NumSamples;
  (this->Params).NumPlanarSubdivisions = param_5->NumPlanarSubdivisions;
  (this->Params).NumHeightSubdivisions = param_5->NumHeightSubdivisions;
  (this->Params).StartOffset = param_5->StartOffset;
  (this->Params).EndOffset = param_5->EndOffset;
  (this->Params).MaxRandomOffsetNormalized = param_5->MaxRandomOffsetNormalized;
  (this->Params).bFitToCurve = param_5->bFitToCurve;
  (this->Params).InteriorSampleSpacing = param_5->InteriorSampleSpacing;
  (this->Params).InteriorBorderSampleSpacing = param_5->InteriorBorderSampleSpacing;
  (this->Params).bTreatSplineAsPolyline = param_5->bTreatSplineAsPolyline;
  (this->Params).InteriorOrientation = param_5->InteriorOrientation;
  (this->Params).bProjectOntoSurface = param_5->bProjectOntoSurface;
  FRichCurve::FRichCurve
            (&(this->Params).InteriorDensityFalloffCurve.EditorCurveData,
             &(param_5->InteriorDensityFalloffCurve).EditorCurveData);
  pUVar1 = (pFVar4->InteriorDensityFalloffCurve).ExternalCurve.field0_0x0.DebugPtr;
  (this->Params).InteriorDensityFalloffCurve.ExternalCurve.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Params).bComputeDirectionDelta = pFVar4->bComputeDirectionDelta;
  pFVar9 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  (this->Params).NextDirectionDeltaAttribute = pFVar4->NextDirectionDeltaAttribute;
  (this->Params).bComputeCurvature = pFVar4->bComputeCurvature;
  (this->Params).CurvatureAttribute = pFVar4->CurvatureAttribute;
  (this->Params).bComputeSegmentIndex = pFVar4->bComputeSegmentIndex;
  (this->Params).SegmentIndexAttribute = pFVar4->SegmentIndexAttribute;
  (this->Params).bComputeSubsegmentIndex = pFVar4->bComputeSubsegmentIndex;
  (this->Params).SubsegmentIndexAttribute = pFVar4->SubsegmentIndexAttribute;
  (this->Params).bComputeTangents = pFVar4->bComputeTangents;
  (this->Params).ArriveTangentAttribute = pFVar4->ArriveTangentAttribute;
  (this->Params).LeaveTangentAttribute = pFVar4->LeaveTangentAttribute;
  (this->Params).bComputeAlpha = pFVar4->bComputeAlpha;
  (this->Params).AlphaAttribute = pFVar4->AlphaAttribute;
  (this->Params).bComputeDistance = pFVar4->bComputeDistance;
  (this->Params).DistanceAttribute = pFVar4->DistanceAttribute;
  (this->Params).bComputeInputKey = pFVar4->bComputeInputKey;
  (this->Params).InputKeyAttribute = pFVar4->InputKeyAttribute;
  (this->Params).bUnbounded = pFVar4->bUnbounded;
  (this->Params).PointSteepness = pFVar4->PointSteepness;
  (this->Params).SeedingMode = pFVar4->SeedingMode;
  (this->Params).bSeedFromLocalPosition = pFVar4->bSeedFromLocalPosition;
  (this->Params).bSeedFrom2DPosition = pFVar4->bSeedFrom2DPosition;
  this->LineData = (UPCGPolyLineData *)0x0;
  this->BoundingShapeData = (UPCGSpatialData *)0x0;
  this->ProjectionTargetData = (UPCGSpatialData *)0x0;
  (this->ProjectionParams).bProjectPositions = true;
  (this->ProjectionParams).bProjectRotations = true;
  (this->ProjectionParams).bProjectScales = false;
  (this->ProjectionParams).ColorBlendMode = SourceValue;
  ::FString::FString(&(this->ProjectionParams).AttributeList,L"");
  (this->ProjectionParams).AttributeMode = ExcludeAttributes;
  (this->ProjectionParams).AttributeMergeOperation = TargetValue;
  (this->ProjectionParams).TagMergeOperation = Source;
  this->Seed = param_6;
  this->bSetMetadata = false;
  this->NextDirectionDeltaAttribute = (FPCGMetadataAttribute<double> *)0x0;
  this->CurvatureAttribute = (FPCGMetadataAttribute<double> *)0x0;
  this->SegmentIndexAttribute = (FPCGMetadataAttribute<int> *)0x0;
  this->SubsegmentIndexAttribute = (FPCGMetadataAttribute<int> *)0x0;
  this->LeaveTangentAttribute = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  this->ArriveTangentAttribute = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  this->AlphaAttribute = (FPCGMetadataAttribute<double> *)0x0;
  this->DistanceAttribute = (FPCGMetadataAttribute<double> *)0x0;
  this->InputKeyAttribute = (FPCGMetadataAttribute<float> *)0x0;
  if (param_1 == (UPCGPolyLineData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InLineData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
                       ,0x2a4,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FDimensionSampler *)(*pcVar3)();
      return pFVar6;
    }
  }
  this->LineData = param_1;
  this->BoundingShapeData = param_2;
  this->ProjectionTargetData = param_3;
  (this->ProjectionParams).bProjectPositions = param_4->bProjectPositions;
  (this->ProjectionParams).bProjectRotations = param_4->bProjectRotations;
  (this->ProjectionParams).bProjectScales = param_4->bProjectScales;
  (this->ProjectionParams).ColorBlendMode = param_4->ColorBlendMode;
  ::FString::operator=(&(this->ProjectionParams).AttributeList,&param_4->AttributeList);
  (this->ProjectionParams).AttributeMode = param_4->AttributeMode;
  (this->ProjectionParams).AttributeMergeOperation = param_4->AttributeMergeOperation;
  (this->ProjectionParams).TagMergeOperation = param_4->TagMergeOperation;
  if ((param_7 != (UPCGBasePointData *)0x0) &&
     (this_00 = (UPCGMetadata *)param_7->_padding_, this_00 != (UPCGMetadata *)0x0)) {
    this->bSetMetadata = false;
    local_res10 = 0.0;
    if ((this->Params).bComputeDirectionDelta != false) {
      FVar2 = (this->Params).NextDirectionDeltaAttribute;
      local_180.Flag = PCGMetadataDomainID::Default.Flag;
      local_180._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_180.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_180.DebugName = PCGMetadataDomainID::Default.DebugName;
      pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_180);
      pFVar8 = pFVar9;
      if (pFVar7 != (FPCGMetadataDomain *)0x0) {
        pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                 FPCGMetadataDomain::FindOrCreateAttribute<double>
                           (pFVar7,FVar2,&local_res10,true,true,true);
      }
      this->NextDirectionDeltaAttribute = (FPCGMetadataAttribute<double> *)pFVar8;
      this->bSetMetadata =
           (bool)(this->bSetMetadata |
                 pFVar8 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0);
    }
    if ((this->Params).bComputeCurvature != false) {
      local_168 = (this->Params).CurvatureAttribute;
      local_160.Flag = PCGMetadataDomainID::Default.Flag;
      local_160._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_160.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_160);
      pFVar8 = pFVar9;
      if (pFVar7 != (FPCGMetadataDomain *)0x0) {
        pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                 FPCGMetadataDomain::FindOrCreateAttribute<double>
                           (pFVar7,local_168,&local_res10,true,true,true);
      }
      this->CurvatureAttribute = (FPCGMetadataAttribute<double> *)pFVar8;
      this->bSetMetadata =
           (bool)(this->bSetMetadata |
                 pFVar8 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0);
    }
    pFVar4 = param_5;
    if ((this->Params).bComputeSegmentIndex != false) {
      local_148 = (this->Params).SegmentIndexAttribute;
      local_140.Flag = PCGMetadataDomainID::Default.Flag;
      local_140._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_140.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_140.DebugName = PCGMetadataDomainID::Default.DebugName;
      param_6 = 0;
      pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_140);
      pFVar8 = pFVar9;
      pFVar4 = param_5;
      if (pFVar7 != (FPCGMetadataDomain *)0x0) {
        pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                 FPCGMetadataDomain::FindOrCreateAttribute<int>
                           (pFVar7,local_148,&param_6,true,true,true);
        pFVar4 = param_5;
      }
      this->SegmentIndexAttribute = (FPCGMetadataAttribute<int> *)pFVar8;
      this->bSetMetadata =
           (bool)(this->bSetMetadata |
                 pFVar8 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0);
    }
    param_5._4_4_ = (undefined4)((ulonglong)pFVar4 >> 0x20);
    if (((this->Params).bComputeSubsegmentIndex != false) && ((this->Params).Mode == Subdivision)) {
      local_128 = (this->Params).SubsegmentIndexAttribute;
      local_120.Flag = PCGMetadataDomainID::Default.Flag;
      local_120._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_120.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_120.DebugName = PCGMetadataDomainID::Default.DebugName;
      param_5._0_4_ = 0;
      pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_120);
      pFVar8 = pFVar9;
      if (pFVar7 != (FPCGMetadataDomain *)0x0) {
        pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                 FPCGMetadataDomain::FindOrCreateAttribute<int>
                           (pFVar7,local_128,(int *)&param_5,true,true,true);
      }
      pFVar4 = (FPCGSplineSamplerParams *)CONCAT44(param_5._4_4_,param_5._0_4_);
      this->SubsegmentIndexAttribute = (FPCGMetadataAttribute<int> *)pFVar8;
      this->bSetMetadata =
           (bool)(this->bSetMetadata |
                 pFVar8 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0);
    }
    if ((this->Params).bComputeTangents != false) {
      local_108 = (this->Params).ArriveTangentAttribute;
      local_100.Flag = PCGMetadataDomainID::Default.Flag;
      local_100._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_100.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_100.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      param_5 = pFVar4;
      pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_100);
      pFVar8 = pFVar9;
      if (pFVar7 != (FPCGMetadataDomain *)0x0) {
        pFVar8 = FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector<double>_>
                           (pFVar7,local_108,(TVector<double> *)&local_68._s_0,true,true,true);
      }
      this->ArriveTangentAttribute = pFVar8;
      this->bSetMetadata =
           (bool)(this->bSetMetadata |
                 pFVar8 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0);
      local_e8 = (this->Params).LeaveTangentAttribute;
      local_e0.Flag = PCGMetadataDomainID::Default.Flag;
      local_e0._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_e0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_50._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_50._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_e0.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_50._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_e0);
      pFVar8 = pFVar9;
      pFVar4 = param_5;
      if (pFVar7 != (FPCGMetadataDomain *)0x0) {
        pFVar8 = FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector<double>_>
                           (pFVar7,local_e8,(TVector<double> *)&local_50._s_0,true,true,true);
        pFVar4 = param_5;
      }
      this->LeaveTangentAttribute = pFVar8;
      this->bSetMetadata =
           (bool)(this->bSetMetadata |
                 pFVar8 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0);
    }
    if ((this->Params).bComputeAlpha != false) {
      local_c8 = (this->Params).AlphaAttribute;
      local_c0.Flag = PCGMetadataDomainID::Default.Flag;
      local_c0._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_c0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_c0.DebugName = PCGMetadataDomainID::Default.DebugName;
      param_5 = pFVar4;
      pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_c0);
      pFVar8 = pFVar9;
      pFVar4 = param_5;
      if (pFVar7 != (FPCGMetadataDomain *)0x0) {
        pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                 FPCGMetadataDomain::FindOrCreateAttribute<double>
                           (pFVar7,local_c8,&local_res10,true,true,true);
        pFVar4 = param_5;
      }
      this->AlphaAttribute = (FPCGMetadataAttribute<double> *)pFVar8;
      this->bSetMetadata =
           (bool)(this->bSetMetadata |
                 pFVar8 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0);
    }
    if ((this->Params).bComputeDistance != false) {
      local_a8 = (this->Params).DistanceAttribute;
      local_a0.Flag = PCGMetadataDomainID::Default.Flag;
      local_a0._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_a0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_a0.DebugName = PCGMetadataDomainID::Default.DebugName;
      param_5 = pFVar4;
      pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_a0);
      pFVar8 = pFVar9;
      pFVar4 = param_5;
      if (pFVar7 != (FPCGMetadataDomain *)0x0) {
        pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                 FPCGMetadataDomain::FindOrCreateAttribute<double>
                           (pFVar7,local_a8,&local_res10,true,true,true);
        pFVar4 = param_5;
      }
      this->DistanceAttribute = (FPCGMetadataAttribute<double> *)pFVar8;
      this->bSetMetadata =
           (bool)(this->bSetMetadata |
                 pFVar8 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0);
    }
    if ((this->Params).bComputeInputKey != false) {
      local_88 = (this->Params).InputKeyAttribute;
      local_80.Flag = PCGMetadataDomainID::Default.Flag;
      local_80._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_80.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_res8[0] = 0.0;
      param_5 = pFVar4;
      pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_80);
      if (pFVar7 != (FPCGMetadataDomain *)0x0) {
        pFVar9 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                 FPCGMetadataDomain::FindOrCreateAttribute<float>
                           (pFVar7,local_88,local_res8,true,true,true);
      }
      this->InputKeyAttribute = (FPCGMetadataAttribute<float> *)pFVar9;
      this->bSetMetadata =
           (bool)(this->bSetMetadata |
                 pFVar9 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0);
    }
  }
  return this;
}

// ~FDimensionSampler @ 149c4d520

void __thiscall
PCGSplineSamplerHelpers::FDimensionSampler::~FDimensionSampler(FDimensionSampler *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ProjectionParams).AttributeList.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Params).InteriorDensityFalloffCurve.EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Params).InteriorDensityFalloffCurve.EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Params).InteriorDensityFalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Params).InteriorDensityFalloffCurve.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Params).InteriorDensityFalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Params).InteriorDensityFalloffCurve.EditorCurveData._padding_);
  return;
}

// Sample @ 149c86090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PCGSplineSamplerHelpers::FDimensionSampler::Sample
          (FDimensionSampler *this,FSamplerResult *param_1,UPCGBasePointData *param_2)

{
  bool bVar1;
  UPCGSpatialData *pUVar2;
  TVector<double> *pTVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  TTransform<double> *pTVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_4b8 [32];
  undefined1 *local_498;
  longlong local_490;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_470;
  FPCGPoint local_458;
  TTransform<double> local_388;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  double local_298;
  TVector<double> *local_288;
  double dStack_280;
  TVector<double> *local_278;
  double dStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258 [32];
  __m128d local_238;
  __m128d local_228;
  __m128d local_218;
  __m128d local_208;
  undefined4 local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  double local_1c8;
  TVector<double> *local_1b8;
  double dStack_1b0;
  TVector<double> *local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  TVector<double>_u_0 local_190 [8];
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  pTVar7 = (TTransform<double> *)
           (**(code **)(*(longlong *)this->LineData + 0x498))(this->LineData,local_c8);
  local_388.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_388.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_388.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_388.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_388.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_388.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_388.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_388.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_388.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_388.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_388.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_388.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_388.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_388.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_388.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_388.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_388.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_388.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_388,&param_1->LocalTransform,pTVar7);
  dVar4 = _UNK_150689688;
  pTVar3 = ___xmm_3ff00000000000003ff0000000000000;
  cVar5 = '\x01';
  local_458.Seed = 0;
  local_458.MetadataEntry = -1;
  local_458.Density = 1.0;
  local_458.Transform.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_458.Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_458.Transform.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_458.Transform.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_458.Transform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_458.Transform.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_458.Transform.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_458.Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_458.Transform.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_458.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_458.Transform.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_458.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_458.BoundsMin.field0_0x0._s_0.Z = (param_1->Box).Min.field0_0x0._s_0.Z;
  local_458.BoundsMax.field0_0x0._s_0.Z = (param_1->Box).Max.field0_0x0._s_0.Z;
  local_458.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_458.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_458.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_458.Color.field0_0x0._s_0.X = (double)___xmm_3ff00000000000003ff0000000000000;
  local_458.Color.field0_0x0._s_0.Y = _UNK_150689688;
  local_458.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_458.Transform.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
  ;
  local_458.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_458.BoundsMin.field0_0x0._s_0.X = (param_1->Box).Min.field0_0x0._s_0.X;
  local_458.BoundsMin.field0_0x0._s_0.Y = (param_1->Box).Min.field0_0x0._s_0.Y;
  local_458.Color.field0_0x0._s_0.Z = (double)___xmm_3ff00000000000003ff0000000000000;
  local_458.Color.field0_0x0._s_0.W = _UNK_150689688;
  local_458.BoundsMax.field0_0x0._s_0.X = (param_1->Box).Max.field0_0x0._s_0.X;
  local_458.BoundsMax.field0_0x0._s_0.Y = (param_1->Box).Max.field0_0x0._s_0.Y;
  local_458.Steepness = (this->Params).PointSteepness;
  (**(code **)(*(longlong *)this->LineData + 0x518))
            (this->LineData,param_1->InputKey,&local_458,param_2->_padding_);
  pUVar2 = this->ProjectionTargetData;
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (pUVar2 == (UPCGSpatialData *)0x0) {
    local_458.Transform.Rotation.XY.m128d_f64[0] = local_388.Rotation.XY.m128d_f64[0];
    local_458.Transform.Rotation.XY.m128d_f64[1] = local_388.Rotation.XY.m128d_f64[1];
    local_458.Transform.Rotation.ZW.m128d_f64[0] = local_388.Rotation.ZW.m128d_f64[0];
    local_458.Transform.Rotation.ZW.m128d_f64[1] = local_388.Rotation.ZW.m128d_f64[1];
    local_458.Transform.Scale3D.XY.m128d_f64[0]._0_4_ = local_388.Scale3D.XY.m128d_f64[0]._0_4_;
    local_458.Transform.Scale3D.XY.m128d_f64[0]._4_4_ = local_388.Scale3D.XY.m128d_f64[0]._4_4_;
    local_458.Transform.Scale3D.XY.m128d_f64[1]._0_4_ = local_388.Scale3D.XY.m128d_f64[1]._0_4_;
    local_458.Transform.Scale3D.XY.m128d_f64[1]._4_4_ = local_388.Scale3D.XY.m128d_f64[1]._4_4_;
    local_458.Transform.Scale3D.ZW.m128d_f64[0]._0_4_ = local_388.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_458.Transform.Scale3D.ZW.m128d_f64[0]._4_4_ = local_388.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_458.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = local_388.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_458.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = local_388.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_458.Transform.Translation.XY.m128d_f64[0]._0_4_ =
         local_388.Translation.XY.m128d_f64[0]._0_4_;
    local_458.Transform.Translation.XY.m128d_f64[0]._4_4_ =
         local_388.Translation.XY.m128d_f64[0]._4_4_;
    local_458.Transform.Translation.XY.m128d_f64[1]._0_4_ =
         local_388.Translation.XY.m128d_f64[1]._0_4_;
    local_458.Transform.Translation.XY.m128d_f64[1]._4_4_ =
         local_388.Translation.XY.m128d_f64[1]._4_4_;
    local_458.Transform.Translation.ZW.m128d_f64[0]._0_4_ =
         local_388.Translation.ZW.m128d_f64[0]._0_4_;
    local_458.Transform.Translation.ZW.m128d_f64[0]._4_4_ =
         local_388.Translation.ZW.m128d_f64[0]._4_4_;
    local_458.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
         local_388.Translation.ZW.m128d_f64[1]._0_4_;
    local_458.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
         local_388.Translation.ZW.m128d_f64[1]._4_4_;
  }
  else {
    local_1f8 = 0x3f800000;
    local_198._0_4_ = 0x3f000000;
    local_198._4_4_ = 0;
    local_190[0]._s_0.X = -NAN;
    local_258._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_258._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_258._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_258._24_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_258._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_258._28_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_238.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_238.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_238.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_218.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_218.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_218.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_228.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_228.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_228.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    uStack_1d0 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
    uStack_1cc = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
    local_208.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_208.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_208.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_1e8 = (double)CONCAT44(uStack_1cc ^ uVar16,uStack_1d0 ^ uVar15);
    local_1f0 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar16,
                                 UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar15);
    local_1e0 = (double)CONCAT44((uint)((ulonglong)
                                        UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                                       0x20) ^ uVar16,
                                 SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^
                                 uVar15);
    local_1d8 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
    uStack_1d4 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
    local_1c8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_1b8 = pTVar3;
    dStack_1b0 = dVar4;
    local_1a8 = pTVar3;
    dStack_1a0 = dVar4;
    local_490 = param_2->_padding_;
    local_498 = local_258;
    cVar5 = (**(code **)(pUVar2->_padding_ + 0x3d0))
                      (pUVar2,&local_388,&param_1->Box,&this->ProjectionParams);
    local_458.Transform.Rotation.XY.m128d_f64[0] = (double)local_258._0_8_;
    local_458.Transform.Rotation.XY.m128d_f64[1] = (double)local_258._8_8_;
    local_458.Transform.Rotation.ZW.m128d_f64[0] = (double)local_258._16_8_;
    local_458.Transform.Rotation.ZW.m128d_f64[1] = (double)local_258._24_8_;
    local_458.Transform.Scale3D.XY.m128d_f64[0]._0_4_ = local_218.m128d_f64[0]._0_4_;
    local_458.Transform.Scale3D.XY.m128d_f64[0]._4_4_ = local_218.m128d_f64[0]._4_4_;
    local_458.Transform.Scale3D.XY.m128d_f64[1]._0_4_ = local_218.m128d_f64[1]._0_4_;
    local_458.Transform.Scale3D.XY.m128d_f64[1]._4_4_ = local_218.m128d_f64[1]._4_4_;
    local_458.Transform.Scale3D.ZW.m128d_f64[0]._0_4_ = local_208.m128d_f64[0]._0_4_;
    local_458.Transform.Scale3D.ZW.m128d_f64[0]._4_4_ = local_208.m128d_f64[0]._4_4_;
    local_458.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = local_208.m128d_f64[1]._0_4_;
    local_458.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = local_208.m128d_f64[1]._4_4_;
    local_458.Transform.Translation.XY.m128d_f64[0]._0_4_ = local_238.m128d_f64[0]._0_4_;
    local_458.Transform.Translation.XY.m128d_f64[0]._4_4_ = local_238.m128d_f64[0]._4_4_;
    local_458.Transform.Translation.XY.m128d_f64[1]._0_4_ = local_238.m128d_f64[1]._0_4_;
    local_458.Transform.Translation.XY.m128d_f64[1]._4_4_ = local_238.m128d_f64[1]._4_4_;
    local_458.Transform.Translation.ZW.m128d_f64[0]._0_4_ = local_228.m128d_f64[0]._0_4_;
    local_458.Transform.Translation.ZW.m128d_f64[0]._4_4_ = local_228.m128d_f64[0]._4_4_;
    local_458.Transform.Translation.ZW.m128d_f64[1]._0_4_ = local_228.m128d_f64[1]._0_4_;
    local_458.Transform.Translation.ZW.m128d_f64[1]._4_4_ = local_228.m128d_f64[1]._4_4_;
  }
  local_2c8 = 0x3f800000;
  local_268 = 0x3f000000;
  local_260 = 0xffffffffffffffff;
  local_328._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_328._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_328._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_318._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_318._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_318._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_308._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_308._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_308._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_2e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_2e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_2f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_2f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  uStack_2a0 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  uStack_29c = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_2d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_2d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_2b8 = CONCAT44(uStack_29c ^ uVar16,uStack_2a0 ^ uVar15);
  local_2c0 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar16,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar15);
  local_288 = pTVar3;
  dStack_280 = dVar4;
  local_278 = pTVar3;
  dStack_270 = dVar4;
  local_2b0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar16,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar15);
  local_2a8 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_2a4 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_298 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  if (cVar5 == '\0') {
    return;
  }
  pUVar2 = this->BoundingShapeData;
  uVar9 = local_458.Transform.Translation.XY.m128d_f64[0]._0_4_;
  uVar10 = local_458.Transform.Translation.XY.m128d_f64[0]._4_4_;
  uVar11 = local_458.Transform.Translation.XY.m128d_f64[1]._0_4_;
  uVar12 = local_458.Transform.Translation.XY.m128d_f64[1]._4_4_;
  uVar13 = local_458.Transform.Translation.ZW.m128d_f64[0]._0_4_;
  uVar14 = local_458.Transform.Translation.ZW.m128d_f64[0]._4_4_;
  if (pUVar2 != (UPCGSpatialData *)0x0) {
    local_498 = (undefined1 *)param_2->_padding_;
    cVar5 = (**(code **)(pUVar2->_padding_ + 0x3c0))(pUVar2,&local_388,&param_1->Box,local_328);
    if (cVar5 == '\0') {
      return;
    }
    uVar9 = local_458.Transform.Translation.XY.m128d_f64[0]._0_4_;
    uVar10 = local_458.Transform.Translation.XY.m128d_f64[0]._4_4_;
    uVar11 = local_458.Transform.Translation.XY.m128d_f64[1]._0_4_;
    uVar12 = local_458.Transform.Translation.XY.m128d_f64[1]._4_4_;
    uVar13 = local_458.Transform.Translation.ZW.m128d_f64[0]._0_4_;
    uVar14 = local_458.Transform.Translation.ZW.m128d_f64[0]._4_4_;
  }
  local_488._s_0.X = (param_1->LocalTransform).Translation.XY.m128d_f64[0];
  local_488._s_0.Y = (param_1->LocalTransform).Translation.XY.m128d_f64[1];
  local_488._s_0.Z = (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
  if ((this->Params).SeedingMode == SeedFromPosition) {
    bVar1 = (this->Params).bSeedFrom2DPosition;
    if ((this->Params).bSeedFromLocalPosition == false) {
      if (bVar1 == false) {
        local_470._s_0.Z = (double)CONCAT44(uVar14,uVar13);
        local_470._0_4_ = uVar9;
        local_470._4_4_ = uVar10;
        local_470._8_4_ = uVar11;
        local_470._12_4_ = uVar12;
        local_458.Seed = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_470._s_0);
        goto LAB_149c8657a;
      }
      iVar6 = (int)(double)CONCAT44(uVar12,uVar11);
      iVar8 = (int)(double)CONCAT44(uVar10,uVar9);
    }
    else {
      if (bVar1 == false) {
        local_458.Seed = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_488._s_0);
        goto LAB_149c8657a;
      }
      iVar6 = (int)local_488._s_0.Y;
      iVar8 = (int)local_488._s_0.X;
    }
  }
  else {
    iVar6 = param_1->SampleIndex;
    iVar8 = this->Seed;
  }
  local_458.Seed = PCGHelpers::ComputeSeed(iVar8,iVar6);
LAB_149c8657a:
  (**(code **)(this->_padding_ + 8))(this,param_1,&local_458,param_2->_padding_);
  iVar6 = (**(code **)(param_2->_padding_ + 0x488))(param_2);
  (**(code **)(param_2->_padding_ + 0x490))(param_2,iVar6 + 1,1);
  (**(code **)(param_2->_padding_ + 0x498))(param_2,0xff);
  FPCGPointValueRanges::FPCGPointValueRanges((FPCGPointValueRanges *)local_258,param_2,false);
  FPCGPointValueRanges::SetFromPoint((FPCGPointValueRanges *)local_258,iVar6,&local_458);
  return;
}

// SetMetadata @ 149c8c640

void __thiscall
PCGSplineSamplerHelpers::FDimensionSampler::SetMetadata
          (FDimensionSampler *this,FSamplerResult *param_1,FPCGPoint *param_2,UPCGMetadata *param_3)

{
  long64 *plVar1;
  
  if (this->bSetMetadata != false) {
    plVar1 = &param_2->MetadataEntry;
    UPCGMetadata::InitializeOnSet(param_3,plVar1,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
    if (this->NextDirectionDeltaAttribute != (FPCGMetadataAttribute<double> *)0x0) {
      FPCGMetadataAttribute<double>::SetValue
                (this->NextDirectionDeltaAttribute,*plVar1,&param_1->NextDeltaAngle);
    }
    if (this->CurvatureAttribute != (FPCGMetadataAttribute<double> *)0x0) {
      FPCGMetadataAttribute<double>::SetValue(this->CurvatureAttribute,*plVar1,&param_1->Curvature);
    }
    if (this->SegmentIndexAttribute != (FPCGMetadataAttribute<int> *)0x0) {
      FPCGMetadataAttribute<int>::SetValue
                (this->SegmentIndexAttribute,*plVar1,&param_1->SegmentIndex);
    }
    if (this->SubsegmentIndexAttribute != (FPCGMetadataAttribute<int> *)0x0) {
      FPCGMetadataAttribute<int>::SetValue
                (this->SubsegmentIndexAttribute,*plVar1,&param_1->SubsegmentIndex);
    }
    if (this->ArriveTangentAttribute != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
      FPCGMetadataAttribute<UE::Math::TVector<double>_>::SetValue
                (this->ArriveTangentAttribute,*plVar1,&param_1->ArriveTangent);
    }
    if (this->LeaveTangentAttribute != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
      FPCGMetadataAttribute<UE::Math::TVector<double>_>::SetValue
                (this->LeaveTangentAttribute,*plVar1,&param_1->LeaveTangent);
    }
    if (this->AlphaAttribute != (FPCGMetadataAttribute<double> *)0x0) {
      FPCGMetadataAttribute<double>::SetValue(this->AlphaAttribute,*plVar1,&param_1->Alpha);
    }
    if (this->DistanceAttribute != (FPCGMetadataAttribute<double> *)0x0) {
      FPCGMetadataAttribute<double>::SetValue(this->DistanceAttribute,*plVar1,&param_1->Distance);
    }
    if (this->InputKeyAttribute != (FPCGMetadataAttribute<float> *)0x0) {
      FPCGMetadataAttribute<float>::SetValue(this->InputKeyAttribute,*plVar1,&param_1->InputKey);
    }
  }
  return;
}

