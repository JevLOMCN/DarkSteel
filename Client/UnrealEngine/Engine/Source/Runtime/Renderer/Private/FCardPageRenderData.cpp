// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FCardPageRenderData @ 144d3ed20

FCardPageRenderData * __thiscall
FCardPageRenderData::FCardPageRenderData(FCardPageRenderData *this,FCardPageRenderData *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar2;
  TArray<FNaniteShadingBin,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar3;
  int iVar4;
  uint *puVar5;
  FNaniteShadingBin *_Src;
  undefined8 uVar6;
  double dVar7;
  
  this->PrimitiveGroupIndex = param_1->PrimitiveGroupIndex;
  this->CardIndex = param_1->CardIndex;
  this->PageTableIndex = param_1->PageTableIndex;
  uVar6 = *(undefined8 *)((longlong)&(param_1->CardUVRect).field0_0x0 + 8);
  *(undefined8 *)&(this->CardUVRect).field0_0x0 = *(undefined8 *)&(param_1->CardUVRect).field0_0x0;
  *(undefined8 *)((longlong)&(this->CardUVRect).field0_0x0 + 8) = uVar6;
  (this->CardCaptureAtlasRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->CardCaptureAtlasRect).field0_0x0._s_0.Min.field0_0x0;
  (this->CardCaptureAtlasRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->CardCaptureAtlasRect).field0_0x0._s_0.Max.field0_0x0;
  (this->SurfaceCacheAtlasRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->SurfaceCacheAtlasRect).field0_0x0._s_0.Min.field0_0x0;
  (this->SurfaceCacheAtlasRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->SurfaceCacheAtlasRect).field0_0x0._s_0.Max.field0_0x0;
  dVar7 = (param_1->CardWorldOBB).Origin.field0_0x0._s_0.Y;
  (this->CardWorldOBB).Origin.field0_0x0._s_0.X = (param_1->CardWorldOBB).Origin.field0_0x0._s_0.X;
  (this->CardWorldOBB).Origin.field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->CardWorldOBB).AxisX.field0_0x0._s_0.X;
  (this->CardWorldOBB).Origin.field0_0x0._s_0.Z = (param_1->CardWorldOBB).Origin.field0_0x0._s_0.Z;
  (this->CardWorldOBB).AxisX.field0_0x0._s_0.X = dVar7;
  dVar7 = (param_1->CardWorldOBB).AxisX.field0_0x0._s_0.Z;
  (this->CardWorldOBB).AxisX.field0_0x0._s_0.Y = (param_1->CardWorldOBB).AxisX.field0_0x0._s_0.Y;
  (this->CardWorldOBB).AxisX.field0_0x0._s_0.Z = dVar7;
  dVar7 = (param_1->CardWorldOBB).AxisY.field0_0x0._s_0.Y;
  (this->CardWorldOBB).AxisY.field0_0x0._s_0.X = (param_1->CardWorldOBB).AxisY.field0_0x0._s_0.X;
  (this->CardWorldOBB).AxisY.field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->CardWorldOBB).AxisZ.field0_0x0._s_0.X;
  (this->CardWorldOBB).AxisY.field0_0x0._s_0.Z = (param_1->CardWorldOBB).AxisY.field0_0x0._s_0.Z;
  (this->CardWorldOBB).AxisZ.field0_0x0._s_0.X = dVar7;
  dVar7 = (param_1->CardWorldOBB).AxisZ.field0_0x0._s_0.Z;
  (this->CardWorldOBB).AxisZ.field0_0x0._s_0.Y = (param_1->CardWorldOBB).AxisZ.field0_0x0._s_0.Y;
  (this->CardWorldOBB).AxisZ.field0_0x0._s_0.Z = dVar7;
  dVar7 = (param_1->CardWorldOBB).Extent.field0_0x0._s_0.Y;
  (this->CardWorldOBB).Extent.field0_0x0._s_0.X = (param_1->CardWorldOBB).Extent.field0_0x0._s_0.X;
  (this->CardWorldOBB).Extent.field0_0x0._s_0.Y = dVar7;
  (this->CardWorldOBB).Extent.field0_0x0._s_0.Z = (param_1->CardWorldOBB).Extent.field0_0x0._s_0.Z;
  memcpy(&this->ViewMatrices,&param_1->ViewMatrices,0x880);
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[0][1];
  pTVar2 = &this->NaniteInstanceIds;
  (this->ProjectionMatrixUnadjustedForRHI).M[0][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[0][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][1] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[0][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[0][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][3] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[1][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[1][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][1] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[1][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[1][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[1][3] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[2][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[2][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][1] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[2][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[2][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[2][3] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[3][1];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][0] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[3][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][1] = dVar7;
  dVar7 = (param_1->ProjectionMatrixUnadjustedForRHI).M[3][3];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][2] =
       (param_1->ProjectionMatrixUnadjustedForRHI).M[3][2];
  (this->ProjectionMatrixUnadjustedForRHI).M[3][3] = dVar7;
  this->StartMeshDrawCommandIndex = param_1->StartMeshDrawCommandIndex;
  this->NumMeshDrawCommands = param_1->NumMeshDrawCommands;
  piVar1 = &(this->NaniteInstanceIds).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (uint *)0x0;
  iVar4 = (param_1->NaniteInstanceIds).ArrayNum;
  puVar5 = (param_1->NaniteInstanceIds).AllocatorInstance.Data;
  (this->NaniteInstanceIds).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,puVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &this->NaniteShadingBins;
  (pTVar3->AllocatorInstance).Data = (FNaniteShadingBin *)0x0;
  piVar1 = &(this->NaniteShadingBins).ArrayMax;
  iVar4 = (param_1->NaniteShadingBins).ArrayNum;
  _Src = (param_1->NaniteShadingBins).AllocatorInstance.Data;
  (this->NaniteShadingBins).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteShadingBin>_>
              (8,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
  }
  pTVar2 = &this->InstanceRuns;
  this->NaniteLODScaleFactor = param_1->NaniteLODScaleFactor;
  this->bHeightField = param_1->bHeightField;
  this->bResampleLastLighting = param_1->bResampleLastLighting;
  this->DilationMode = param_1->DilationMode;
  this->bAxisXFlipped = param_1->bAxisXFlipped;
  this->CopyCardIndex = param_1->CopyCardIndex;
  piVar1 = &(this->InstanceRuns).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (uint *)0x0;
  iVar4 = (param_1->InstanceRuns).ArrayNum;
  puVar5 = (param_1->InstanceRuns).AllocatorInstance.Data;
  (this->InstanceRuns).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,puVar5,(longlong)iVar4 << 2);
  }
  return this;
}

// FCardPageRenderData @ 144d3f000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FCardPageRenderData * __thiscall
FCardPageRenderData::FCardPageRenderData
          (FCardPageRenderData *this,FViewInfo *param_1,FLumenCard *param_2,TVector4<float> *param_3
          ,TIntRect<int> *param_4,TIntRect<int> *param_5,int param_6,int param_7,int param_8,
          bool param_9,bool param_10,int param_11)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  bool bVar5;
  FCardPageRenderData *pFVar6;
  TConsoleVariableData<float> *pTVar7;
  
  uVar2 = *(undefined8 *)&param_3->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  this->PrimitiveGroupIndex = param_6;
  this->CardIndex = param_7;
  this->PageTableIndex = param_8;
  *(undefined8 *)&(this->CardUVRect).field0_0x0 = uVar2;
  *(undefined8 *)((longlong)&(this->CardUVRect).field0_0x0 + 8) = uVar3;
  (this->CardCaptureAtlasRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_4->field0_0x0)._s_0.Min.field0_0x0;
  (this->CardCaptureAtlasRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_4->field0_0x0)._s_0.Max.field0_0x0;
  (this->SurfaceCacheAtlasRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_5->field0_0x0)._s_0.Min.field0_0x0;
  (this->SurfaceCacheAtlasRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_5->field0_0x0)._s_0.Max.field0_0x0;
  dVar4 = (param_2->WorldOBB).Origin.field0_0x0._s_0.Y;
  (this->CardWorldOBB).Origin.field0_0x0._s_0.X = (param_2->WorldOBB).Origin.field0_0x0._s_0.X;
  (this->CardWorldOBB).Origin.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_2->WorldOBB).AxisX.field0_0x0._s_0.X;
  (this->CardWorldOBB).Origin.field0_0x0._s_0.Z = (param_2->WorldOBB).Origin.field0_0x0._s_0.Z;
  (this->CardWorldOBB).AxisX.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_2->WorldOBB).AxisX.field0_0x0._s_0.Z;
  (this->CardWorldOBB).AxisX.field0_0x0._s_0.Y = (param_2->WorldOBB).AxisX.field0_0x0._s_0.Y;
  (this->CardWorldOBB).AxisX.field0_0x0._s_0.Z = dVar4;
  dVar4 = (param_2->WorldOBB).AxisY.field0_0x0._s_0.Y;
  (this->CardWorldOBB).AxisY.field0_0x0._s_0.X = (param_2->WorldOBB).AxisY.field0_0x0._s_0.X;
  (this->CardWorldOBB).AxisY.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_2->WorldOBB).AxisZ.field0_0x0._s_0.X;
  (this->CardWorldOBB).AxisY.field0_0x0._s_0.Z = (param_2->WorldOBB).AxisY.field0_0x0._s_0.Z;
  (this->CardWorldOBB).AxisZ.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_2->WorldOBB).AxisZ.field0_0x0._s_0.Z;
  (this->CardWorldOBB).AxisZ.field0_0x0._s_0.Y = (param_2->WorldOBB).AxisZ.field0_0x0._s_0.Y;
  (this->CardWorldOBB).AxisZ.field0_0x0._s_0.Z = dVar4;
  dVar4 = (param_2->WorldOBB).Extent.field0_0x0._s_0.Y;
  (this->CardWorldOBB).Extent.field0_0x0._s_0.X = (param_2->WorldOBB).Extent.field0_0x0._s_0.X;
  (this->CardWorldOBB).Extent.field0_0x0._s_0.Y = dVar4;
  (this->CardWorldOBB).Extent.field0_0x0._s_0.Z = (param_2->WorldOBB).Extent.field0_0x0._s_0.Z;
  FViewMatrices::FViewMatrices(&this->ViewMatrices);
  (this->NaniteInstanceIds).AllocatorInstance.Data = (uint *)0x0;
  (this->NaniteInstanceIds).ArrayNum = 0;
  (this->NaniteInstanceIds).ArrayMax = 0;
  (this->NaniteShadingBins).AllocatorInstance.Data = (FNaniteShadingBin *)0x0;
  (this->NaniteShadingBins).ArrayNum = 0;
  (this->NaniteShadingBins).ArrayMax = 0;
  this->NaniteLODScaleFactor = 1.0;
  this->StartMeshDrawCommandIndex = 0;
  this->NumMeshDrawCommands = 0;
  this->bHeightField = param_2->bHeightfield;
  this->bResampleLastLighting = param_9;
  this->DilationMode = param_2->DilationMode;
  this->bAxisXFlipped = param_10;
  this->CopyCardIndex = param_11;
  (this->InstanceRuns).AllocatorInstance.Data = (uint *)0x0;
  (this->InstanceRuns).ArrayNum = 0;
  (this->InstanceRuns).ArrayMax = 0;
  if ((this->CardIndex < 0) || (this->PageTableIndex < 0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4940274699021057392>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneCardCapture.cpp"
                       ,0x290,"CardIndex >= 0 && PageTableIndex >= 0");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FCardPageRenderData *)(*pcVar1)();
      return pFVar6;
    }
  }
  pTVar7 = GLumenSceneSurfaceCacheNaniteLandscapeLODScaleFactor.Ref;
  if (param_2->bHeightfield == false) {
    pTVar7 = GLumenSceneSurfaceCacheNaniteLODScaleFactor.Ref;
  }
  bVar5 = IsInParallelRenderingThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FCardPageRenderData *)(*pcVar1)();
      return pFVar6;
    }
  }
  this->NaniteLODScaleFactor = pTVar7->ShadowedValue[1];
  UpdateViewMatrices(this,param_1);
  return this;
}

// ~FCardPageRenderData @ 144d42650

void __thiscall FCardPageRenderData::~FCardPageRenderData(FCardPageRenderData *this)

{
  uint *puVar1;
  FNaniteShadingBin *pFVar2;
  
  puVar1 = (this->InstanceRuns).AllocatorInstance.Data;
  if (puVar1 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar1);
  }
  pFVar2 = (this->NaniteShadingBins).AllocatorInstance.Data;
  if (pFVar2 != (FNaniteShadingBin *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  puVar1 = (this->NaniteInstanceIds).AllocatorInstance.Data;
  if (puVar1 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar1);
    return;
  }
  return;
}

// PatchView @ 144d8e720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FCardPageRenderData::PatchView(FCardPageRenderData *this,FScene *param_1,FViewInfo *param_2)

{
  double dVar1;
  undefined1 auStackY_b8 [32];
  TBox<double> local_88;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  dVar1 = (this->ProjectionMatrixUnadjustedForRHI).M[0][1];
  param_2->_padding_ = (longlong)(this->ProjectionMatrixUnadjustedForRHI).M[0][0];
  param_2->_padding_ = (longlong)dVar1;
  dVar1 = (this->ProjectionMatrixUnadjustedForRHI).M[0][3];
  param_2->_padding_ = (longlong)(this->ProjectionMatrixUnadjustedForRHI).M[0][2];
  param_2->_padding_ = (longlong)dVar1;
  dVar1 = (this->ProjectionMatrixUnadjustedForRHI).M[1][1];
  param_2->_padding_ = (longlong)(this->ProjectionMatrixUnadjustedForRHI).M[1][0];
  param_2->_padding_ = (longlong)dVar1;
  dVar1 = (this->ProjectionMatrixUnadjustedForRHI).M[1][3];
  param_2->_padding_ = (longlong)(this->ProjectionMatrixUnadjustedForRHI).M[1][2];
  param_2->_padding_ = (longlong)dVar1;
  dVar1 = (this->ProjectionMatrixUnadjustedForRHI).M[2][1];
  param_2->_padding_ = (longlong)(this->ProjectionMatrixUnadjustedForRHI).M[2][0];
  param_2->_padding_ = (longlong)dVar1;
  dVar1 = (this->ProjectionMatrixUnadjustedForRHI).M[2][3];
  param_2->_padding_ = (longlong)(this->ProjectionMatrixUnadjustedForRHI).M[2][2];
  param_2->_padding_ = (longlong)dVar1;
  dVar1 = (this->ProjectionMatrixUnadjustedForRHI).M[3][1];
  param_2->_padding_ = (longlong)(this->ProjectionMatrixUnadjustedForRHI).M[3][0];
  param_2->_padding_ = (longlong)dVar1;
  dVar1 = (this->ProjectionMatrixUnadjustedForRHI).M[3][3];
  param_2->_padding_ = (longlong)(this->ProjectionMatrixUnadjustedForRHI).M[3][2];
  param_2->_padding_ = (longlong)dVar1;
  memcpy(&param_2->_padding_,&this->ViewMatrices,0x880);
  (param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (this->CardCaptureAtlasRect).field0_0x0._s_0.Min.field0_0x0;
  (param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (this->CardCaptureAtlasRect).field0_0x0._s_0.Max.field0_0x0;
  local_88.IsValid = '\0';
  local_20 = 0;
  FViewInfo::SetupUniformBufferParameters
            (param_2,(FViewMatrices *)&param_2->_padding_,&param_2->PrevViewInfo->ViewMatrices,
             &local_88,2,(param_2->CachedViewUniformShaderParameters).Ptr);
  ((param_2->CachedViewUniformShaderParameters).Ptr)->NearPlane = 0.0;
  ((param_2->CachedViewUniformShaderParameters).Ptr)->FarShadowStaticMeshLODBias = 0;
  return;
}

// UpdateViewMatrices @ 144db0d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FCardPageRenderData::UpdateViewMatrices(FCardPageRenderData *this,FViewInfo *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FViewMatrices *_Src;
  double dVar6;
  double dVar7;
  undefined1 auStack_ba8 [32];
  undefined1 local_b88 [8];
  double local_b80;
  double local_b78;
  double local_b70;
  double local_b68;
  double local_b60;
  double local_b58;
  double local_b50;
  double local_b48;
  double local_b18;
  double dStack_b10;
  FMinimalInitializer local_a88;
  FViewMatrices local_938;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_ba8;
  dVar1 = (this->CardWorldOBB).AxisY.field0_0x0._s_0.X;
  dVar2 = (this->CardWorldOBB).AxisZ.field0_0x0._s_0.X;
  dVar6 = (this->CardWorldOBB).AxisY.field0_0x0._s_0.Z;
  dVar7 = (this->CardWorldOBB).AxisZ.field0_0x0._s_0.Z;
  dVar3 = (this->CardWorldOBB).AxisZ.field0_0x0._s_0.Y;
  if (0.0 <= (dVar2 * dVar6 - dVar1 * dVar7) * (this->CardWorldOBB).AxisX.field0_0x0._s_0.Y +
             ((this->CardWorldOBB).AxisY.field0_0x0._s_0.Y * dVar7 - dVar6 * dVar3) *
             (this->CardWorldOBB).AxisX.field0_0x0._s_0.X +
             (dVar1 * dVar3 - dVar2 * (this->CardWorldOBB).AxisY.field0_0x0._s_0.Y) *
             (this->CardWorldOBB).AxisX.field0_0x0._s_0.Z) {
    `FCardPageRenderData::UpdateViewMatrices'::__l2::<lambda_1>::operator()(local_b88);
  }
  local_b78 = (this->CardWorldOBB).Extent.field0_0x0._s_0.Z;
  local_b18 = (this->CardWorldOBB).Origin.field0_0x0._s_0.X;
  dStack_b10 = (this->CardWorldOBB).Origin.field0_0x0._s_0.Y;
  dVar1 = (this->CardWorldOBB).Extent.field0_0x0._s_0.X;
  dVar6 = (this->CardWorldOBB).Extent.field0_0x0._s_0.Y;
  local_b80 = *(double *)&(this->CardWorldOBB).AxisZ.field0_0x0;
  local_b70 = local_b78 * (this->CardWorldOBB).AxisZ.field0_0x0._s_0.Y + dStack_b10;
  local_b68 = local_b78 * (this->CardWorldOBB).AxisZ.field0_0x0._s_0.Z +
              (this->CardWorldOBB).Origin.field0_0x0._s_0.Z;
  dVar2 = (double)(float)((double)((float)((uint)(this->CardUVRect).field0_0x0._s_0.Y ^
                                          __xmm_80000000800000008000000080000000) - __real_bf000000)
                         * dVar6);
  dVar7 = (double)(float)((double)((float)((uint)(this->CardUVRect).field0_0x0._s_0.W ^
                                          __xmm_80000000800000008000000080000000) - __real_bf000000)
                         * dVar6);
  dVar6 = (double)(float)((double)((this->CardUVRect).field0_0x0._s_0.Z - __real_3f000000) * dVar1);
  dVar1 = (double)(float)((double)((this->CardUVRect).field0_0x0._s_0.X - __real_3f000000) * dVar1);
  local_b50 = (dVar1 + dVar6) / (dVar1 - dVar6);
  local_b48 = (dVar7 + dVar2) / (dVar7 - dVar2);
  local_b60 = __real_3ff0000000000000 / (dVar2 - dVar7);
  local_a88.ProjectionMatrix.M[0][0] = __real_3ff0000000000000 / (dVar6 - dVar1);
  local_b58 = (double)(__real_bf800000 / (float)(local_b78 * __real_4000000000000000));
  (this->ProjectionMatrixUnadjustedForRHI).M[0][0] = local_a88.ProjectionMatrix.M[0][0];
  (this->ProjectionMatrixUnadjustedForRHI).M[0][1] = 0.0;
  (this->ProjectionMatrixUnadjustedForRHI).M[0][2] = 0.0;
  (this->ProjectionMatrixUnadjustedForRHI).M[0][3] = 0.0;
  (this->ProjectionMatrixUnadjustedForRHI).M[1][0] = 0.0;
  (this->ProjectionMatrixUnadjustedForRHI).M[1][1] = local_b60;
  (this->ProjectionMatrixUnadjustedForRHI).M[1][2] = 0.0;
  (this->ProjectionMatrixUnadjustedForRHI).M[1][3] = 0.0;
  (this->ProjectionMatrixUnadjustedForRHI).M[2][0] = 0.0;
  (this->ProjectionMatrixUnadjustedForRHI).M[2][1] = 0.0;
  (this->ProjectionMatrixUnadjustedForRHI).M[2][2] = local_b58;
  (this->ProjectionMatrixUnadjustedForRHI).M[2][3] = 0.0;
  (this->ProjectionMatrixUnadjustedForRHI).M[3][0] = local_b50;
  (this->ProjectionMatrixUnadjustedForRHI).M[3][1] = local_b48;
  (this->ProjectionMatrixUnadjustedForRHI).M[3][2] = 1.0;
  (this->ProjectionMatrixUnadjustedForRHI).M[3][3] = 1.0;
  local_a88.ViewRotationMatrix.M[0][1]._0_4_ = *(undefined4 *)&(this->CardWorldOBB).AxisY.field0_0x0
  ;
  local_a88.ViewRotationMatrix.M[0][1]._4_4_ =
       *(undefined4 *)((longlong)&(this->CardWorldOBB).AxisY.field0_0x0 + 4);
  local_a88.ViewRotationMatrix.M[1][1]._0_4_ =
       *(undefined4 *)((longlong)&(this->CardWorldOBB).AxisY.field0_0x0 + 8);
  local_a88.ViewRotationMatrix.M[1][1]._4_4_ =
       *(undefined4 *)((longlong)&(this->CardWorldOBB).AxisY.field0_0x0 + 0xc);
  local_a88.ViewRotationMatrix.M[0][0] = (this->CardWorldOBB).AxisX.field0_0x0._s_0.X;
  local_a88.ViewRotationMatrix.M[1][0]._0_4_ =
       *(undefined4 *)((longlong)&(this->CardWorldOBB).AxisX.field0_0x0 + 8);
  local_a88.ViewRotationMatrix.M[1][0]._4_4_ =
       *(undefined4 *)((longlong)&(this->CardWorldOBB).AxisX.field0_0x0 + 0xc);
  local_a88.FirstPersonParams.Scale = 1.0;
  uVar4 = *(undefined8 *)((longlong)&(this->CardWorldOBB).AxisZ.field0_0x0 + 8);
  local_a88.ViewRotationMatrix.M[2][2]._0_4_ = (uint)__xmm_80000000000000008000000000000000;
  local_a88.ViewRotationMatrix.M[0][2]._0_4_ =
       SUB84(local_b80,0) ^ local_a88.ViewRotationMatrix.M[2][2]._0_4_;
  local_a88.ViewRotationMatrix.M[2][2]._4_4_ =
       (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a88.ViewRotationMatrix.M[0][2]._4_4_ =
       (uint)((ulonglong)local_b80 >> 0x20) ^ local_a88.ViewRotationMatrix.M[2][2]._4_4_;
  uVar5 = *(undefined8 *)((longlong)&(this->CardWorldOBB).AxisZ.field0_0x0 + 0x10);
  local_a88.ViewRotationMatrix.M[1][2]._0_4_ =
       (uint)uVar4 ^ local_a88.ViewRotationMatrix.M[2][2]._0_4_;
  local_a88.ViewRotationMatrix.M[1][2]._4_4_ =
       (uint)((ulonglong)uVar4 >> 0x20) ^ local_a88.ViewRotationMatrix.M[2][2]._4_4_;
  local_a88.ViewRotationMatrix.M[2][2]._0_4_ =
       (uint)uVar5 ^ local_a88.ViewRotationMatrix.M[2][2]._0_4_;
  local_a88.ViewRotationMatrix.M[2][2]._4_4_ =
       (uint)((ulonglong)uVar5 >> 0x20) ^ local_a88.ViewRotationMatrix.M[2][2]._4_4_;
  local_a88.FirstPersonParams.FOVCorrectionFactor = 1.0;
  local_a88.ViewRotationMatrix.M[2][0]._0_4_ =
       *(undefined4 *)((longlong)&(this->CardWorldOBB).AxisX.field0_0x0 + 0x10);
  local_a88.ViewRotationMatrix.M[2][0]._4_4_ =
       *(undefined4 *)((longlong)&(this->CardWorldOBB).AxisX.field0_0x0 + 0x14);
  uVar4 = *(undefined8 *)((longlong)&(this->CardWorldOBB).AxisY.field0_0x0 + 0x10);
  local_a88.CameraToViewTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_a88.CameraToViewTarget.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a88.FirstPersonParams.bUseParameters = false;
  local_a88.FirstPersonParams._9_3_ = 0;
  local_a88.CameraToViewTarget.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_a88.ViewOrigin.field0_0x0._s_0.X = local_b80 * local_b78 + local_b18;
  local_a88.ProjectionMatrix.M[2][0] = 0.0;
  local_a88.ProjectionMatrix.M[2][1] = 0.0;
  local_a88.ViewRotationMatrix.M[2][1]._0_4_ = (undefined4)uVar4;
  local_a88.ViewRotationMatrix.M[2][1]._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_a88.ProjectionMatrix.M[0][2] = 0.0;
  local_a88.ProjectionMatrix.M[0][3] = 0.0;
  local_a88.ProjectionMatrix.M[1][2] = 0.0;
  local_a88.ProjectionMatrix.M[1][3] = 0.0;
  local_a88.ProjectionMatrix.M[0][1] = 0.0;
  local_a88.ProjectionMatrix.M[1][0] = 0.0;
  local_a88.ProjectionMatrix.M[2][3] = 0.0;
  local_a88.ViewRotationMatrix.M[0][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_;
  local_a88.ViewRotationMatrix.M[0][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_;
  local_a88.ViewRotationMatrix.M[1][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_;
  local_a88.ViewRotationMatrix.M[1][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_;
  local_a88.ViewRotationMatrix.M[2][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_;
  local_a88.ViewRotationMatrix.M[2][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_;
  local_a88.ViewRotationMatrix.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_a88.ViewRotationMatrix.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_a88.ViewRotationMatrix.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_a88.ViewRotationMatrix.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_a88.ConstrainedViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)param_1->_padding_;
  local_a88.ConstrainedViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)param_1->_padding_;
  local_a88.StereoPass = (EStereoscopicPass)param_1->_padding_;
  local_a88.ProjectionMatrix.M[3][2] = ___xmm_3ff00000000000003ff0000000000000;
  local_a88.ProjectionMatrix.M[3][3] = _UNK_150689688;
  local_a88.ProjectionMatrix.M[1][1] = local_b60;
  local_a88.ProjectionMatrix.M[2][2] = local_b58;
  local_a88.ProjectionMatrix.M[3][0] = local_b50;
  local_a88.ProjectionMatrix.M[3][1] = local_b48;
  local_a88.ViewOrigin.field0_0x0._s_0.Y = local_b70;
  local_a88.ViewOrigin.field0_0x0._s_0.Z = local_b68;
  _Src = FViewMatrices::FViewMatrices(&local_938,&local_a88);
  memcpy(&this->ViewMatrices,_Src,0x880);
  return;
}

// operator() @ 1504c8300

bool __thiscall `FCardPageRenderData::UpdateViewMatrices'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4940274699021057379>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4940274699021057379>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

