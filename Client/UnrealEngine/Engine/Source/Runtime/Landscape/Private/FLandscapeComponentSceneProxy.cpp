// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 34

// GetStaticMeshElement<TArray<FLandscapeBatchElementParams,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 145f73570

bool __thiscall
FLandscapeComponentSceneProxy::
GetStaticMeshElement<TArray<FLandscapeBatchElementParams,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (FLandscapeComponentSceneProxy *this,int param_1,bool param_2,FMeshBatch *param_3,
          TArray<FLandscapeBatchElementParams,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_4)

{
  uchar *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  FScriptContainerElement FVar4;
  int iVar5;
  FMaterialRenderProxy *pFVar6;
  FLandscapeRenderSystem *pFVar7;
  FRHIUniformBuffer *this_00;
  FRHIUniformBuffer *this_01;
  ForElementType<FMeshBatchElement> FVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  EShadingPath EVar12;
  uint uVar13;
  int iVar14;
  FLandscapeRenderSystem **ppFVar15;
  uint uVar16;
  FLandscapeBatchElementParams *pFVar17;
  ForElementType<FMeshBatchElement> FVar18;
  
  uVar13 = 0;
  if (param_1 < (this->LODIndexToMaterialIndex).ArrayNum) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  FVar4 = (this->LODIndexToMaterialIndex).AllocatorInstance.Data[param_1];
  uVar13 = 0;
  if ((int)(char)FVar4 < (this->AvailableMaterials).ArrayNum) {
    uVar13 = (uint)~(int)(char)FVar4 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  pFVar6 = *(FMaterialRenderProxy **)
            ((this->AvailableMaterials).AllocatorInstance.Data + (longlong)(char)FVar4 * 8);
  if (pFVar6 == (FMaterialRenderProxy *)0x0) {
    return false;
  }
  param_3->VertexFactory = (FVertexFactory *)this->VertexFactory;
  param_3->MaterialRenderProxy = pFVar6;
  param_3->LCI = (FLightCacheInterface *)(this->ComponentLightInfo).Ptr;
  *(uint *)&param_3->field_0xd4 =
       ((byte)this->field_0x78 & 1 ^ *(uint *)&param_3->field_0xd4 & 0xfffffffe) & 0xfffffffb |
       (param_2 ^ 1 | 4) << 2;
  if ((this->field_0x85 & 0x10) != 0) {
    EVar12 = FSceneInterface::GetShadingPath(*(Type *)(*(longlong *)&this->field_0x220 + 8));
    if (((EVar12 == Deferred) && (this->field_0x68 != '\x02')) && (this->field_0x68 != '\x01')) {
      uVar13 = 0x20;
      goto LAB_145f736de;
    }
  }
  uVar13 = 0;
LAB_145f736de:
  param_3->LODIndex = (byte)param_1;
  puVar3 = &param_3->field_0xd4;
  param_3->bUseForMaterial = 1;
  param_3->bDitheredLODTransition = 0;
  param_3->DepthPriorityGroup = 0;
  param_3->Type = 0;
  param_3->bUseAsOccluder = uVar13 >> 5;
  ppFVar15 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
             ::FindChecked((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                            *)&LandscapeRenderSystems,*(uint *)&this->field_0x298);
  pFVar7 = *ppFVar15;
  uVar13 = param_4->ArrayNum;
  if (uVar13 == param_4->ArrayMax) {
    uVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLandscapeBatchElementParams>_>
                       (0x830,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = uVar13 + 1;
  uVar16 = 0;
  if ((int)uVar13 < (int)(uVar13 + 1)) {
    uVar16 = ~uVar13 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  pFVar17 = (param_4->AllocatorInstance).Data + (int)uVar13;
  if (pFVar17 == (FLandscapeBatchElementParams *)0x0) {
    pFVar17 = (FLandscapeBatchElementParams *)0x0;
  }
  else {
    (pFVar17->LandscapeSectionLODUniformParameters).Reference = (FRHIUniformBuffer *)0x0;
  }
  pFVar17->LandscapeUniformShaderParametersResource = &this->LandscapeUniformShaderParameters;
  pFVar17->FixedGridUniformShaderParameters =
       &this->SharedBuffers->LandscapeFixedGridUniformShaderParameters;
  this_00 = (pFVar7->SectionLODUniformBuffer).Reference;
  this_01 = (pFVar17->LandscapeSectionLODUniformParameters).Reference;
  if (this_01 != this_00) {
    (pFVar17->LandscapeSectionLODUniformParameters).Reference = this_00;
    if (this_00 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  pFVar17->SceneProxy = this;
  pFVar17->CurrentLOD = param_1;
  if ((param_3->Elements).ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
  }
  FVar8 = (param_3->Elements).AllocatorInstance.SecondaryData;
  FVar18 = (ForElementType<FMeshBatchElement>)param_3;
  if (FVar8 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar18 = FVar8;
  }
  *(FLandscapeBatchElementParams **)((longlong)FVar18 + 0x38) = pFVar17;
  *(undefined8 *)FVar18 = *(undefined8 *)&this->field_0x258;
  *(FIndexBuffer **)((longlong)FVar18 + 0x18) = this->SharedBuffers->IndexBuffers[param_1];
  iVar5 = this->NumSubsections;
  iVar14 = (this->SubsectionSizeVerts >> ((byte)param_1 & 0x1f)) + -1;
  puVar1 = (uchar *)((longlong)FVar18 + 0x58);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(int *)((longlong)FVar18 + 0x5c) = iVar5 * iVar5 * iVar14 * iVar14 * 2;
  *(int *)((longlong)FVar18 + 0x68) = this->SharedBuffers->IndexRanges[param_1].MinIndexFull;
  *(int *)((longlong)FVar18 + 0x6c) = this->SharedBuffers->IndexRanges[param_1].MaxIndexFull;
  if ((!param_2) && (this->bUsesLandscapeCulling != false)) {
    UE::Landscape::Culling::SetupMeshBatch(this->SharedBuffers,param_3);
  }
  return true;
}

// GetStaticMeshElement<TArray<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_>_> @ 145f73900

bool __thiscall
FLandscapeComponentSceneProxy::
GetStaticMeshElement<TArray<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_>_>
          (FLandscapeComponentSceneProxy *this,int param_1,bool param_2,FMeshBatch *param_3,
          TArray<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_> *param_4)

{
  uchar *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  FScriptContainerElement FVar4;
  int iVar5;
  FMaterialRenderProxy *pFVar6;
  FLandscapeRenderSystem *pFVar7;
  FRHIUniformBuffer *this_00;
  FRHIUniformBuffer *this_01;
  ForElementType<FMeshBatchElement> FVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  EShadingPath EVar12;
  int iVar13;
  FLandscapeRenderSystem **ppFVar14;
  void *pvVar15;
  ForElementType<FMeshBatchElement> FVar16;
  uint uVar17;
  
  uVar17 = 0;
  if (param_1 < (this->LODIndexToMaterialIndex).ArrayNum) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar4 = (this->LODIndexToMaterialIndex).AllocatorInstance.Data[param_1];
  uVar17 = 0;
  if ((int)(char)FVar4 < (this->AvailableMaterials).ArrayNum) {
    uVar17 = (uint)~(int)(char)FVar4 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pFVar6 = *(FMaterialRenderProxy **)
            ((this->AvailableMaterials).AllocatorInstance.Data + (longlong)(char)FVar4 * 8);
  if (pFVar6 == (FMaterialRenderProxy *)0x0) {
    return false;
  }
  param_3->VertexFactory = (FVertexFactory *)this->VertexFactory;
  param_3->MaterialRenderProxy = pFVar6;
  param_3->LCI = (FLightCacheInterface *)(this->ComponentLightInfo).Ptr;
  *(uint *)&param_3->field_0xd4 =
       ((byte)this->field_0x78 & 1 ^ *(uint *)&param_3->field_0xd4 & 0xfffffffe) & 0xfffffffb |
       (param_2 ^ 1 | 4) << 2;
  if (((((this->field_0x85 & 0x10) == 0) ||
       (EVar12 = FSceneInterface::GetShadingPath(*(Type *)(*(longlong *)&this->field_0x220 + 8)),
       EVar12 != Deferred)) || (this->field_0x68 == '\x02')) || (this->field_0x68 == '\x01')) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x20;
  }
  param_3->LODIndex = (byte)param_1;
  puVar3 = &param_3->field_0xd4;
  param_3->bUseForMaterial = 1;
  param_3->bDitheredLODTransition = 0;
  param_3->DepthPriorityGroup = 0;
  param_3->Type = 0;
  param_3->bUseAsOccluder = uVar17 >> 5;
  ppFVar14 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
             ::FindChecked((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                            *)&LandscapeRenderSystems,*(uint *)&this->field_0x298);
  pFVar7 = *ppFVar14;
  pvVar15 = operator_new<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_>(0x30,param_4);
  if (pvVar15 == (void *)0x0) {
    pvVar15 = (void *)0x0;
  }
  else {
    *(undefined8 *)((longlong)pvVar15 + 0x18) = 0;
  }
  *(TUniformBuffer<FLandscapeUniformShaderParameters> **)((longlong)pvVar15 + 8) =
       &this->LandscapeUniformShaderParameters;
  *(TArray<TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>,TSizedDefaultAllocator<32>_>
    **)((longlong)pvVar15 + 0x10) = &this->SharedBuffers->LandscapeFixedGridUniformShaderParameters;
  this_00 = (pFVar7->SectionLODUniformBuffer).Reference;
  this_01 = *(FRHIUniformBuffer **)((longlong)pvVar15 + 0x18);
  if (this_01 != this_00) {
    *(FRHIUniformBuffer **)((longlong)pvVar15 + 0x18) = this_00;
    if (this_00 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  *(FLandscapeComponentSceneProxy **)((longlong)pvVar15 + 0x20) = this;
  *(int *)((longlong)pvVar15 + 0x28) = param_1;
  if (((param_3->Elements).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar8 = (param_3->Elements).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<FMeshBatchElement>)param_3;
  if (FVar8 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar16 = FVar8;
  }
  *(void **)((longlong)FVar16 + 0x38) = pvVar15;
  *(undefined8 *)FVar16 = *(undefined8 *)&this->field_0x258;
  *(FIndexBuffer **)((longlong)FVar16 + 0x18) = this->SharedBuffers->IndexBuffers[param_1];
  iVar5 = this->NumSubsections;
  iVar13 = (this->SubsectionSizeVerts >> ((byte)param_1 & 0x1f)) + -1;
  puVar1 = (uchar *)((longlong)FVar16 + 0x58);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(int *)((longlong)FVar16 + 0x5c) = iVar5 * iVar5 * iVar13 * iVar13 * 2;
  *(int *)((longlong)FVar16 + 0x68) = this->SharedBuffers->IndexRanges[param_1].MinIndexFull;
  *(int *)((longlong)FVar16 + 0x6c) = this->SharedBuffers->IndexRanges[param_1].MaxIndexFull;
  if ((!param_2) && (this->bUsesLandscapeCulling != false)) {
    UE::Landscape::Culling::SetupMeshBatch(this->SharedBuffers,param_3);
  }
  return true;
}

// FLandscapeComponentSceneProxy @ 145f76e40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FLandscapeComponentSceneProxy * __thiscall
FLandscapeComponentSceneProxy::FLandscapeComponentSceneProxy
          (FLandscapeComponentSceneProxy *this,ULandscapeComponent *param_1)

{
  TArray<FMaterialRenderProxy_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TUniquePtr<FLandscapeComponentSceneProxy::FLandscapeLCI,TDefaultDelete<FLandscapeComponentSceneProxy::FLandscapeLCI>_>
  *pTVar3;
  TArray<FMaterialRelevance,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  UObject *pUVar10;
  FScriptContainerElement *pFVar11;
  UMaterialInstance *this_00;
  code *pcVar12;
  undefined1 auVar13 [12];
  uint uVar14;
  undefined8 uVar15;
  FString *pFVar16;
  float fVar17;
  TConsoleVariableData<float> *pTVar18;
  ULandscapeComponent *pUVar19;
  Type TVar20;
  bool bVar21;
  uchar uVar22;
  undefined1 uVar23;
  schar sVar24;
  bool bVar25;
  char cVar26;
  byte bVar27;
  EShaderPlatform EVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  ALandscapeProxy *pAVar34;
  UWorld *pUVar35;
  TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> *pTVar36;
  UTexture2D *pUVar37;
  FLandscapeComponentSceneProxy *pFVar38;
  TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_> *pTVar39;
  FQualityLevels *pFVar40;
  ALandscape *pAVar41;
  FName *pFVar42;
  FLandscapeLCI *pFVar43;
  UMaterialInterface *pUVar44;
  UClass *pUVar45;
  UMaterial *pUVar46;
  undefined8 uVar47;
  FName FVar48;
  FLandscapeLCI *pFVar49;
  ulonglong uVar50;
  byte bVar51;
  uint uVar52;
  FScriptContainerElement *pFVar53;
  longlong lVar54;
  FWeightmapLayerAllocationInfo *this_01;
  schar sVar55;
  ForAnyElementType FVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  double dVar61;
  float fVar62;
  float fVar63;
  uint local_res8 [2];
  ULandscapeComponent *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257 [3];
  Type local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  UMaterial *local_238;
  undefined8 local_230;
  undefined8 local_228;
  double local_220;
  ForAnyElementType local_218;
  int local_210;
  int local_20c;
  int local_208;
  int iStack_204;
  FString local_200;
  undefined4 local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  FName local_1e4;
  FName local_1dc;
  FName local_1d4;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FName local_188;
  undefined8 local_180 [3];
  FGuid local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  double local_138;
  FQualityLevels local_120 [2];
  
  local_res8[0] = 0;
  local_res10 = param_1;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,
             NAME_LandscapeResourceNameForDebugging);
  pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
  uVar47._0_4_ = (pAVar34->LandscapeGuid).A;
  uVar47._4_4_ = (pAVar34->LandscapeGuid).B;
  uVar15._0_4_ = (pAVar34->LandscapeGuid).C;
  uVar15._4_4_ = (pAVar34->LandscapeGuid).D;
  uVar52 = pAVar34->LODGroupKey;
  pUVar35 = AActor::GetWorld((AActor *)pAVar34);
  local_168._0_8_ = uVar47;
  local_168._8_8_ = uVar15;
  uVar29 = ALandscapeProxy::ComputeLandscapeKey(pUVar35,uVar52,&local_168);
  pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
  uVar52 = pAVar34->LODGroupKey;
  local_208 = param_1->SectionBaseX / param_1->ComponentSizeQuads;
  iStack_204 = param_1->SectionBaseY / param_1->ComponentSizeQuads;
  pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
  (**(code **)(pAVar34->_padding_ + 0x10))();
  pUVar35 = (UWorld *)param_1->_padding_;
  if (pUVar35 == (UWorld *)0x0) {
    pUVar35 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  *(undefined8 *)&this->field_0x288 = 0;
  *(undefined ***)&this->field_0x280 = &___7FLandscapeSectionInfo__6B_;
  *(undefined8 *)&this->field_0x290 = 0;
  *(undefined4 *)&this->field_0x2a0 = 0x80000000;
  *(undefined4 *)&this->field_0x2a4 = 0x80000000;
  *(ulonglong *)&this->field_0x2a8 = CONCAT44(iStack_204,local_208);
  *(uint *)&this->field_0x298 = uVar29;
  *(uint *)&this->field_0x29c = uVar52;
  *(FSceneInterface **)&this->field_0x2b0 = pUVar35->Scene;
  *(undefined2 *)&this->field_0x2b8 = 0;
  *(undefined ***)this = &_vftable__for__FPrimitiveSceneProxy__;
  *(undefined ***)&this->field_0x280 = &_vftable__for__FLandscapeSectionInfo__;
  (this->RayTracingImpl).Ptr = (FLandscapeRayTracingImpl *)0x0;
  iVar30 = param_1->SubsectionSizeQuads + 1;
  iVar31 = 1;
  if (iVar30 != 0) {
    iVar31 = iVar30;
  }
  uVar50 = (ulonglong)(iVar31 - 1) * 2 + 1;
  lVar54 = 0x3f;
  if (uVar50 != 0) {
    for (; uVar50 >> lVar54 == 0; lVar54 = lVar54 + -1) {
    }
  }
  local_1f0 = (undefined4)lVar54;
  this->MaxLOD = (char)lVar54 + -1;
  pTVar36 = ULandscapeComponent::GetWeightmapLayerAllocations(param_1,false);
  this->NumWeightmapLayerAllocations = (schar)pTVar36->ArrayNum;
  pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
  this->StaticLightingLOD = (uchar)pAVar34->StaticLightingLOD;
  fVar63 = param_1->WeightmapSubsectionOffset;
  (this->LODScreenRatioSquared).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODScreenRatioSquared).ArrayNum = 0;
  (this->LODScreenRatioSquared).ArrayMax = 0;
  this->WeightmapSubsectionOffset = fVar63;
  this->LastLOD = (int)this->MaxLOD;
  this->FirstLOD = 0;
  this->ComponentMaxExtend = 0.0;
  fVar63 = GLandscapeLODBlendRangeOverride;
  if (GLandscapeLODBlendRangeOverride <= 0.0) {
    pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
    fVar63 = pAVar34->LODBlendRange;
  }
  fVar62 = __real_3f800000;
  if (fVar63 <= __real_3c23d70a) {
    fVar63 = __real_3c23d70a;
  }
  this->InvLODBlendRange = __real_3f800000 / fVar63;
  this->NumSubsections = param_1->NumSubsections;
  this->SubsectionSizeQuads = param_1->SubsectionSizeQuads;
  this->SubsectionSizeVerts = param_1->SubsectionSizeQuads + 1;
  this->ComponentSizeQuads = param_1->ComponentSizeQuads;
  this->ComponentSizeVerts = param_1->ComponentSizeQuads + 1;
  this->NumRayTracingSections = GLandscapeRayTracingSections;
  iVar31 = param_1->SectionBaseX;
  (this->SectionBase).field0_0x0._s_0.Y = param_1->SectionBaseY;
  (this->SectionBase).field0_0x0._s_0.X = iVar31;
  (this->StaticBatchParamArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticBatchParamArray).ArrayNum = 0;
  (this->StaticBatchParamArray).ArrayMax = 0;
  this->bUsesLandscapeCulling = false;
  FMeshBatch::FMeshBatch(&this->GrassMeshBatch);
  (this->GrassBatchParams).ArrayNum = 0;
  (this->GrassBatchParams).ArrayMax = 0;
  dVar61 = (param_1->WeightmapScaleBias).field0_0x0._s_0.W;
  dVar6 = (param_1->WeightmapScaleBias).field0_0x0._s_0.Z;
  dVar7 = (param_1->WeightmapScaleBias).field0_0x0._s_0.Y;
  dVar8 = (param_1->WeightmapScaleBias).field0_0x0._s_0.X;
  (this->GrassBatchParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightmapTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightmapTextures).ArrayNum = 0;
  (this->WeightmapTextures).ArrayMax = 0;
  (this->WeightmapScaleBias).field0_0x0._s_0.W = (float)dVar61;
  (this->WeightmapScaleBias).field0_0x0._s_0.Z = (float)dVar6;
  (this->WeightmapScaleBias).field0_0x0._s_0.Y = (float)dVar7;
  (this->WeightmapScaleBias).field0_0x0._s_0.X = (float)dVar8;
  this->VisibilityWeightmapTexture = (UTexture2D *)0x0;
  this->VisibilityWeightmapChannel = -1;
  pUVar37 = ULandscapeComponent::GetHeightmap(param_1,false);
  this->HeightmapTexture = pUVar37;
  pTVar1 = &this->AvailableMaterials;
  dVar61 = (param_1->HeightmapScaleBias).field0_0x0._s_0.W;
  dVar6 = (param_1->HeightmapScaleBias).field0_0x0._s_0.Z;
  dVar7 = (param_1->HeightmapScaleBias).field0_0x0._s_0.Y;
  dVar8 = (param_1->HeightmapScaleBias).field0_0x0._s_0.X;
  this->SharedBuffers = (FLandscapeSharedBuffers *)0x0;
  this->VertexFactory = (FLandscapeVertexFactory *)0x0;
  this->FixedGridVertexFactory = (FLandscapeVertexFactory *)0x0;
  (this->HeightmapScaleBias).field0_0x0._s_0.Y = (float)dVar7;
  (this->HeightmapScaleBias).field0_0x0._s_0.X = (float)dVar8;
  (this->HeightmapScaleBias).field0_0x0._s_0.Z = (float)dVar6;
  (this->HeightmapScaleBias).field0_0x0._s_0.W = (float)dVar61;
  this->SharedBuffersKey = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AvailableMaterials).ArrayNum = 0;
  (this->AvailableMaterials).ArrayMax = 0;
  (this->ComponentLightInfo).Ptr = (FLandscapeLCI *)0x0;
  (this->LODIndexToMaterialIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODIndexToMaterialIndex).ArrayNum = 0;
  (this->LODIndexToMaterialIndex).ArrayMax = 0;
  (this->MaterialIndexToStaticMeshBatchLOD).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialIndexToStaticMeshBatchLOD).ArrayNum = 0;
  (this->MaterialIndexToStaticMeshBatchLOD).ArrayMax = 0;
  (this->MaterialRelevances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialRelevances).ArrayNum = 0;
  (this->MaterialRelevances).ArrayMax = 0;
  iVar31 = ULandscapeComponent::GetNumRelevantMips(param_1);
  this->NumRelevantMips = iVar31;
  (this->WorldSpaceMipToMipMaxDeltas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldSpaceMipToMipMaxDeltas).ArrayNum = 0;
  (this->WorldSpaceMipToMipMaxDeltas).ArrayMax = 0;
  this->CollisionMipLevel = param_1->CollisionMipLevel;
  this->SimpleCollisionMipLevel = param_1->SimpleCollisionMipLevel;
  pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
  uVar47 = *(undefined8 *)
            ((longlong)&(pAVar34->BodyInstance).CollisionResponses.ResponseToChannels.field0_0x0 + 8
            );
  *(undefined8 *)&(this->CollisionResponse).field0_0x0 =
       *(undefined8 *)&(pAVar34->BodyInstance).CollisionResponses.ResponseToChannels.field0_0x0;
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 8) = uVar47;
  *(undefined1 (*) [16])((longlong)&(this->CollisionResponse).field0_0x0 + 0x10) =
       *(undefined1 (*) [16])
        ((longlong)&(pAVar34->BodyInstance).CollisionResponses.ResponseToChannels.field0_0x0 + 0x10)
  ;
  iVar31 = (**(code **)(param_1->_padding_ + 0x7c0))(param_1);
  this->LightMapResolution = iVar31;
  FRenderResource::FRenderResource((FRenderResource *)&this->LandscapeUniformShaderParameters);
  (this->LandscapeUniformShaderParameters).BufferUsage = UniformBuffer_MultiFrame;
  (this->LandscapeUniformShaderParameters)._padding_ =
       (longlong)&___7__TUniformBuffer_VFLandscapeUniformShaderParameters____6B_;
  (this->LandscapeUniformShaderParameters).UniformBufferRHI =
       (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0;
  (this->LandscapeUniformShaderParameters).Contents = (uchar *)0x0;
  this->field_0x81 = this->field_0x81 & 0x7f;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  this->field_0x83 = this->field_0x83 | 8;
  this->field_0x7c = this->field_0x7c | 1;
  bVar21 = param_1->bNaniteActive;
  this->bNaniteActive = bVar21;
  if (bVar21 == false) {
    EVar28 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
    bVar21 = UE::Landscape::Culling::UseCulling(EVar28);
    if (!bVar21) goto LAB_145f77343;
    bVar21 = true;
  }
  else {
LAB_145f77343:
    bVar21 = false;
  }
  this->field_0x85 = this->field_0x85 | 4;
  this->bUsesLandscapeCulling = bVar21;
  FPrimitiveSceneProxy::EnableGPUSceneSupportFlags((FPrimitiveSceneProxy *)this);
  local_254 = *(Type *)(*(longlong *)&this->field_0x220 + 8);
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  if (local_254 == ES3_1) {
    TArray<UTexture2D_*,TSizedDefaultAllocator<32>_>::operator=
              (&this->WeightmapTextures,
               (TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *)&param_1->MobileWeightmapTextures
              );
    pFVar53 = (param_1->MobileMaterialInterfaces).AllocatorInstance.Data;
    iVar31 = (param_1->MobileMaterialInterfaces).ArrayNum;
    pFVar11 = pFVar53 + (longlong)iVar31 * 8;
    while( true ) {
      if ((param_1->MobileMaterialInterfaces).ArrayNum != iVar31) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar53 == pFVar11) break;
      if (*(longlong **)pFVar53 == (longlong *)0x0) {
        local_250 = 0;
      }
      else {
        local_250 = (**(code **)(**(longlong **)pFVar53 + 0x310))();
      }
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_250) &&
          ((FScriptContainerElement *)&local_250 <
           pFVar9 + (longlong)(this->AvailableMaterials).ArrayMax * 8)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
        return pFVar38;
      }
      iVar30 = (this->AvailableMaterials).ArrayNum;
      if (iVar30 == (this->AvailableMaterials).ArrayMax) {
        iVar30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,&(this->AvailableMaterials).ArrayMax);
      }
      pFVar53 = pFVar53 + 8;
      (this->AvailableMaterials).ArrayNum = iVar30 + 1;
      *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 8) = local_250;
    }
    if (((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&local_268 ==
         &param_1->MobileMaterialInterfaces) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar21)) {
      pcVar12 = (code *)swi(3);
      pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
      return pFVar38;
    }
    iVar31 = (param_1->MobileMaterialInterfaces).ArrayNum;
    if (iVar31 != 0) {
      iVar30 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar31,&local_268,(int *)&local_260,(int *)((longlong)&local_260 + 4))
      ;
      ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInterface>,int>
                (local_268.Data + (longlong)iVar30 * 8,
                 (TObjectPtr<UMaterialInterface> *)
                 (param_1->MobileMaterialInterfaces).AllocatorInstance.Data,iVar31);
    }
  }
  else {
    pTVar39 = ULandscapeComponent::GetWeightmapTextures(param_1,false);
    TArray<UTexture2D_*,TSizedDefaultAllocator<32>_>::operator=
              (&this->WeightmapTextures,(TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *)pTVar39)
    ;
    pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
    if (pAVar34->bUseDynamicMaterialInstance == false) {
      pFVar53 = (param_1->MaterialInstances).AllocatorInstance.Data;
      iVar31 = (param_1->MaterialInstances).ArrayNum;
      pFVar11 = pFVar53 + (longlong)iVar31 * 8;
      while( true ) {
        if ((param_1->MaterialInstances).ArrayNum != iVar31) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMaterialInstanceConstant>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar53 == pFVar11) break;
        pUVar10 = *(UObject **)pFVar53;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar10 == (UObject *)0x0) goto LAB_145f77746;
          local_240 = (**(code **)(*(longlong *)pUVar10 + 0x310))(pUVar10);
        }
        else if (pUVar10 == (UObject *)0x0) {
LAB_145f77746:
          local_240 = 0;
        }
        else {
          UE::GC::MarkAsReachable(pUVar10);
          local_240 = (**(code **)(*(longlong *)pUVar10 + 0x310))(pUVar10);
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_240) &&
            ((FScriptContainerElement *)&local_240 <
             pFVar9 + (longlong)(this->AvailableMaterials).ArrayMax * 8)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
          return pFVar38;
        }
        iVar30 = (this->AvailableMaterials).ArrayNum;
        if (iVar30 == (this->AvailableMaterials).ArrayMax) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,&(this->AvailableMaterials).ArrayMax)
          ;
        }
        pFVar53 = pFVar53 + 8;
        (this->AvailableMaterials).ArrayNum = iVar30 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 8) = local_240;
      }
      if (((TArray<TObjectPtr<UMaterialInstanceConstant>,TSizedDefaultAllocator<32>_> *)&local_268
           == &param_1->MaterialInstances) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
        return pFVar38;
      }
      iVar31 = (param_1->MaterialInstances).ArrayNum;
      if (iVar31 != 0) {
        iVar30 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar31,&local_268,(int *)&local_260,
                            (int *)((longlong)&local_260 + 4));
        ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceConstant>,int>
                  (local_268.Data + (longlong)iVar30 * 8,
                   (TObjectPtr<UMaterialInstanceConstant> *)
                   (param_1->MaterialInstances).AllocatorInstance.Data,iVar31);
      }
    }
    else {
      pFVar53 = (param_1->MaterialInstancesDynamic).AllocatorInstance.Data;
      iVar31 = (param_1->MaterialInstancesDynamic).ArrayNum;
      pFVar11 = pFVar53 + (longlong)iVar31 * 8;
      while( true ) {
        if ((param_1->MaterialInstancesDynamic).ArrayNum != iVar31) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMaterialInstanceDynamic>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar53 == pFVar11) break;
        pUVar10 = *(UObject **)pFVar53;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar10 == (UObject *)0x0) goto LAB_145f775a6;
          local_248 = (**(code **)(*(longlong *)pUVar10 + 0x310))(pUVar10);
        }
        else if (pUVar10 == (UObject *)0x0) {
LAB_145f775a6:
          local_248 = 0;
        }
        else {
          UE::GC::MarkAsReachable(pUVar10);
          local_248 = (**(code **)(*(longlong *)pUVar10 + 0x310))(pUVar10);
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_248) &&
            ((FScriptContainerElement *)&local_248 <
             pFVar9 + (longlong)(this->AvailableMaterials).ArrayMax * 8)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
          return pFVar38;
        }
        iVar30 = (this->AvailableMaterials).ArrayNum;
        if (iVar30 == (this->AvailableMaterials).ArrayMax) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,&(this->AvailableMaterials).ArrayMax)
          ;
        }
        pFVar53 = pFVar53 + 8;
        (this->AvailableMaterials).ArrayNum = iVar30 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 8) = local_248;
      }
      if (((TArray<TObjectPtr<UMaterialInstanceDynamic>,TSizedDefaultAllocator<32>_> *)&local_268 ==
           &param_1->MaterialInstancesDynamic) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
        return pFVar38;
      }
      iVar31 = (param_1->MaterialInstancesDynamic).ArrayNum;
      if (iVar31 != 0) {
        iVar30 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar31,&local_268,(int *)&local_260,
                            (int *)((longlong)&local_260 + 4));
        ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceDynamic>,int>
                  (local_268.Data + (longlong)iVar30 * 8,
                   (TObjectPtr<UMaterialInstanceDynamic> *)
                   (param_1->MaterialInstancesDynamic).AllocatorInstance.Data,iVar31);
      }
    }
  }
  sVar55 = -1;
  pTVar2 = &this->LODIndexToMaterialIndex;
  if (pTVar2 != &param_1->LODIndexToMaterialIndex) {
    iVar31 = (param_1->LODIndexToMaterialIndex).ArrayNum;
    pFVar11 = (param_1->LODIndexToMaterialIndex).AllocatorInstance.Data;
    iVar30 = (this->LODIndexToMaterialIndex).ArrayMax;
    (this->LODIndexToMaterialIndex).ArrayNum = iVar31;
    if ((iVar31 == 0) && (iVar30 == 0)) {
      (this->LODIndexToMaterialIndex).ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar31,iVar30,&pTVar2->AllocatorInstance,iVar31,
                 &(this->LODIndexToMaterialIndex).ArrayMax);
      if (iVar31 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar11,(longlong)iVar31);
      }
    }
  }
  if (((this->LODIndexToMaterialIndex).ArrayNum != this->MaxLOD + 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODIndexToMaterialIndex.Num() == MaxLOD + 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                          ,0x5b2,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
    return pFVar38;
  }
  this->HeightmapSubsectionOffsetU = 0.0;
  this->HeightmapSubsectionOffsetV = 0.0;
  if (this->HeightmapTexture != (UTexture2D *)0x0) {
    iVar31 = UTexture2D::GetSizeX(this->HeightmapTexture);
    if (iVar31 < 1) {
      iVar31 = 1;
    }
    this->HeightmapSubsectionOffsetU = (float)(param_1->SubsectionSizeQuads + 1) / (float)iVar31;
    iVar31 = UTexture2D::GetSizeY(this->HeightmapTexture);
    if (iVar31 < 1) {
      iVar31 = 1;
    }
    this->HeightmapSubsectionOffsetV = (float)(param_1->SubsectionSizeQuads + 1) / (float)iVar31;
  }
  pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
  this->VirtualShadowMapConstantDepthBias = pAVar34->NonNaniteVirtualShadowMapConstantDepthBias;
  this->VirtualShadowMapInvalidationHeightErrorThreshold =
       pAVar34->NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold;
  fVar63 = pAVar34->NonNaniteVirtualShadowMapInvalidationScreenSizeLimit;
  if (pAVar34->bUseScalableLODSettings == false) {
    fVar58 = GLandscapeLOD0DistributionScale * pAVar34->LOD0DistributionSetting;
    fVar59 = GLandscapeLODDistributionScale * pAVar34->LODDistributionSetting;
    fVar57 = pAVar34->LOD0ScreenSize;
  }
  else {
    pFVar40 = Scalability::GetQualityLevels(local_120);
    iVar31 = pFVar40->LandscapeQuality;
    if (local_120[0].GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120[0].GPUBenchmarkSteps.AllocatorInstance.Data);
    }
    if (local_120[0].CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120[0].CPUBenchmarkSteps.AllocatorInstance.Data);
    }
    fVar57 = FPerQualityLevelProperty<FPerQualityLevelFloat,float,4>::GetValue
                       ((FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *)
                        &pAVar34->ScalableLOD0ScreenSize,iVar31);
    fVar58 = FPerQualityLevelProperty<FPerQualityLevelFloat,float,4>::GetValue
                       ((FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *)
                        &pAVar34->ScalableLOD0DistributionSetting,iVar31);
    fVar59 = FPerQualityLevelProperty<FPerQualityLevelFloat,float,4>::GetValue
                       ((FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *)
                        &pAVar34->ScalableLODDistributionSetting,iVar31);
  }
  if (0.0 < GLandscapeLOD0ScreenSizeOverride) {
    fVar57 = GLandscapeLOD0ScreenSizeOverride;
  }
  if (0.0 < GLandscapeLOD0DistributionOverride) {
    fVar58 = GLandscapeLOD0DistributionOverride;
  }
  if (0.0 < GLandscapeLODDistributionOverride) {
    fVar59 = GLandscapeLODDistributionOverride;
  }
  if (0.0 < GLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverride) {
    this->VirtualShadowMapConstantDepthBias =
         GLandscapeNonNaniteVirtualShadowMapConstantDepthBiasOverride;
  }
  if (0.0 < GLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride) {
    this->VirtualShadowMapInvalidationHeightErrorThreshold =
         GLandscapeNonNaniteVirtualShadowMapInvalidationHeightErrorThresholdOverride;
  }
  if (0.0 < GLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride) {
    fVar63 = GLandscapeNonNaniteVirtualShadowMapInvalidationScreenSizeLimitOverride;
  }
  pAVar41 = ULandscapeComponent::GetLandscapeActor(param_1);
  bVar21 = pAVar41 == (ALandscape *)0x0;
  if (bVar21) {
    local_1dc = (FName)pAVar34->_padding_;
    ::FName::ToString(&local_1dc,&local_200);
    pFVar16 = &local_200;
    FVar56.Data = local_200.Data.AllocatorInstance.Data;
  }
  else {
    pAVar41 = ULandscapeComponent::GetLandscapeActor(param_1);
    local_1e4.ComparisonIndex.Value = *(uint *)&pAVar41->field_0x18;
    local_1e4.Number = *(uint *)&pAVar41->field_0x1c;
    ::FName::ToString(&local_1e4,&local_1c8);
    pFVar16 = &local_1c8;
    FVar56.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  local_210 = (pFVar16->Data).ArrayNum;
  lVar54 = (longlong)local_210;
  local_218.Data = (FScriptContainerElement *)0x0;
  if (local_210 == 0) {
    local_20c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_210,0,&local_218,local_210,&local_20c);
    memcpy(local_218.Data,FVar56.Data,lVar54 * 2);
  }
  if ((bVar21) && (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  if ((!bVar21) && (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  local_1d4 = (FName)param_1->_padding_;
  ::FName::ToString(&local_1d4,&local_198);
  ::FString::PrintfImpl(&local_1a8,L"X=%d Y=%d");
  ::FString::PrintfImpl(&local_1b8,L" Landscape: %s, Component: %s [%s]");
  uVar52 = 0;
  if (local_1b8.Data.ArrayNum != 0) {
    uVar52 = local_1b8.Data.ArrayNum - 1;
  }
  pFVar42 = ::FName::FName(&local_188,uVar52,(wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                           FNAME_Add);
  this->DebugName = *pFVar42;
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  pTVar18 = CVarStaticMeshLODDistanceScale.Ref;
  fVar17 = __real_3f8147ae;
  if (fVar58 <= __real_3f8147ae) {
    fVar58 = __real_3f8147ae;
  }
  bVar21 = IsInParallelGameThread();
  if (bVar21) {
LAB_145f77ca8:
    lVar54 = 0;
  }
  else {
    bVar21 = IsInGameThread();
    lVar54 = 4;
    if (bVar21) goto LAB_145f77ca8;
  }
  fVar57 = fVar57 / *(float *)((longlong)pTVar18->ShadowedValue + lVar54);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,this->MaxLOD + 1,&(this->LODScreenRatioSquared).AllocatorInstance,
             &(this->LODScreenRatioSquared).ArrayNum,&(this->LODScreenRatioSquared).ArrayMax);
  if (((this->LODScreenRatioSquared).ArrayNum < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar12 = (code *)swi(3);
    pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
    return pFVar38;
  }
  if (fVar59 <= fVar17) {
    fVar59 = fVar17;
  }
  fVar58 = fVar57 / fVar58;
  uVar29 = 1;
  uVar52 = 1;
  *(float *)(this->LODScreenRatioSquared).AllocatorInstance.Data = fVar57 * fVar57;
  cVar26 = this->MaxLOD;
  (this->LODSettings).LOD0ScreenSizeSquared = fVar57 * fVar57;
  (this->LODSettings).LOD1ScreenSizeSquared = fVar58 * fVar58;
  (this->LODSettings).LODOnePlusDistributionScalarSquared = fVar59 * fVar59;
  if ('\0' < cVar26) {
    lVar54 = 4;
    do {
      fVar57 = fVar58 * fVar58;
      uVar32 = 0;
      if ((int)uVar52 < (this->LODScreenRatioSquared).ArrayNum) {
        uVar32 = ~uVar52 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
        return pFVar38;
      }
      uVar52 = uVar52 + 1;
      fVar58 = fVar58 * (fVar62 / fVar59);
      *(float *)((this->LODScreenRatioSquared).AllocatorInstance.Data + lVar54) = fVar57;
      lVar54 = lVar54 + 4;
      cVar26 = this->MaxLOD;
    } while ((int)uVar52 <= (int)cVar26);
  }
  this->FirstLOD = 0;
  pUVar37 = this->HeightmapTexture;
  this->LastLOD = (int)cVar26;
  if (pUVar37 == (UTexture2D *)0x0) {
    iVar31 = 0;
  }
  else {
    iVar31 = 1;
    if (this->SubsectionSizeVerts != 0) {
      iVar31 = this->SubsectionSizeVerts;
    }
    uVar50 = (ulonglong)(iVar31 - 1) * 2 + 1;
    lVar54 = 0x3f;
    if (uVar50 != 0) {
      for (; uVar50 >> lVar54 == 0; lVar54 = lVar54 + -1) {
      }
    }
    local_1ec = (int)lVar54;
    iVar31 = local_1ec + -1;
    iVar30 = UTexture2D::GetNumResidentMips(pUVar37);
    iVar33 = UTexture2D::GetNumMips(pUVar37);
    if (iVar33 - iVar30 < iVar31) {
      iVar31 = iVar33 - iVar30;
    }
  }
  iVar30 = this->LastLOD;
  if (this->LastLOD < iVar31) {
    iVar30 = iVar31;
  }
  this->LastLOD = iVar30;
  pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
  uVar52 = this->LastLOD;
  uVar32 = pAVar34->MaxLODLevel;
  if (-1 < (int)uVar32) {
    cVar26 = this->MaxLOD;
    if ((char)uVar32 < this->MaxLOD) {
      cVar26 = (char)uVar32;
    }
    this->MaxLOD = cVar26;
    if ((int)uVar32 < (int)uVar52) {
      uVar52 = uVar32;
    }
    this->LastLOD = uVar52;
  }
  cVar26 = (char)param_1->ForcedLOD;
  if (cVar26 < '\0') {
LAB_145f77ece:
    iVar31 = this->FirstLOD;
  }
  else {
    uVar32 = uVar52;
    if ((int)cVar26 < (int)uVar52) {
      uVar32 = (int)cVar26;
    }
    uVar14 = this->FirstLOD;
    if (this->FirstLOD < (int)uVar32) {
      uVar14 = uVar32;
    }
    cVar26 = (char)uVar14;
    if (cVar26 < '\0') goto LAB_145f77ece;
    iVar31 = (int)cVar26;
    uVar52 = (uint)cVar26;
  }
  this->FirstLOD = iVar31;
  this->LastLOD = uVar52;
  (this->LODSettings).LastLODIndex = (schar)uVar52;
  uVar32 = 0;
  if ((int)uVar52 < (this->LODScreenRatioSquared).ArrayNum) {
    uVar32 = ~uVar52 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar12 = (code *)swi(3);
    pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
    return pFVar38;
  }
  (this->LODSettings).LastLODScreenSizeSquared =
       *(float *)((this->LODScreenRatioSquared).AllocatorInstance.Data + (longlong)(int)uVar52 * 4);
  (this->LODSettings).ForcedLOD = cVar26;
  pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
  bVar51 = (GLandscapeRuntimeVirtualTextureRenderWithQuad == 1 |
           pAVar34->bVirtualTextureRenderWithQuad) &
           GLandscapeRuntimeVirtualTextureRenderWithQuad != 2;
  pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
  uVar22 = '\0';
  if (bVar51 != 0) {
    uVar22 = (pAVar34->bVirtualTextureRenderWithQuadHQ != false) + '\x01';
  }
  this->LastVirtualTextureLOD = (int)this->MaxLOD;
  this->VirtualTexturePerPixelHeight = uVar22;
  if (bVar51 == 0) {
    pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
    iVar30 = (int)this->MaxLOD - pAVar34->VirtualTextureNumLods;
    iVar31 = 0;
    if (0 < iVar30) {
      iVar31 = iVar30;
    }
    this->FirstVirtualTextureLOD = iVar31;
    pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
    uVar23 = (undefined1)pAVar34->VirtualTextureLodBias;
  }
  else {
    this->FirstVirtualTextureLOD = (int)this->MaxLOD;
    uVar23 = 0;
  }
  this->field_0xa9 = uVar23;
  sVar24 = -1;
  if ((this->CollisionResponse).field0_0x0._s_0.Pawn != '\0') {
    sVar24 = (schar)this->SimpleCollisionMipLevel;
  }
  (this->LODSettings).DrawCollisionPawnLOD = sVar24;
  if ((this->CollisionResponse).field0_0x0._s_0.Visibility != '\0') {
    sVar55 = (schar)this->CollisionMipLevel;
  }
  (this->LODSettings).DrawCollisionVisibilityLOD = sVar55;
  if (0.0 < fVar63) {
    cVar26 = this->MaxLOD;
    (this->LODSettings).VirtualShadowMapInvalidationLimitLOD = 0.0;
    fVar63 = fVar63 * fVar63;
    uVar52 = 0;
    if ((int)cVar26 < (this->LODScreenRatioSquared).ArrayNum) {
      uVar52 = (uint)~(int)cVar26 >> 0x1f;
    }
    if ((uVar52 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar12 = (code *)swi(3);
      pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
      return pFVar38;
    }
    pFVar11 = (this->LODScreenRatioSquared).AllocatorInstance.Data + (longlong)cVar26 * 4;
    if (*(float *)pFVar11 <= fVar63 && fVar63 != *(float *)pFVar11) {
      if (((this->LODScreenRatioSquared).ArrayNum < 1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
        return pFVar38;
      }
      if ('\x01' < this->MaxLOD) {
        lVar54 = 4;
        fVar62 = *(float *)(this->LODScreenRatioSquared).AllocatorInstance.Data;
        do {
          uVar52 = 0;
          if ((int)uVar29 < (this->LODScreenRatioSquared).ArrayNum) {
            uVar52 = ~uVar29 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar12 = (code *)swi(3);
            pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
            return pFVar38;
          }
          fVar57 = *(float *)((this->LODScreenRatioSquared).AllocatorInstance.Data + lVar54);
          if ((fVar57 < fVar63) && (fVar63 <= fVar62)) {
            (this->LODSettings).VirtualShadowMapInvalidationLimitLOD =
                 (fVar62 - fVar63) / (fVar62 - fVar57) + (float)(int)uVar29;
            break;
          }
          uVar29 = uVar29 + 1;
          lVar54 = lVar54 + 4;
          fVar62 = fVar57;
        } while ((int)uVar29 < (int)this->MaxLOD);
      }
    }
    else {
      (this->LODSettings).VirtualShadowMapInvalidationLimitLOD = (float)(int)this->MaxLOD;
    }
  }
  else {
    (this->LODSettings).VirtualShadowMapInvalidationLimitLOD = -1.0;
  }
  local_148._0_8_ = param_1->_padding_;
  local_148._8_8_ = param_1->_padding_;
  local_138 = (double)param_1->_padding_;
  auVar13._4_8_ = param_1->_padding_;
  auVar13._0_4_ = (int)((ulonglong)local_148._0_8_ >> 0x20);
  auVar60._0_8_ = auVar13._0_8_ << 0x20;
  auVar60._8_4_ = (int)local_148._8_8_;
  auVar60._12_4_ = (int)((ulonglong)local_148._8_8_ >> 0x20);
  dVar61 = (double)local_148._0_8_;
  if ((double)local_148._0_8_ <= auVar60._8_8_) {
    dVar61 = auVar60._8_8_;
  }
  this->ComponentMaxExtend = (float)(dVar61 * (double)this->SubsectionSizeQuads);
  fVar63 = param_1->StaticLightingResolution;
  if (fVar63 <= 0.0) {
    pAVar34 = ULandscapeComponent::GetLandscapeProxy(param_1);
    fVar63 = pAVar34->StaticLightingResolution;
  }
  TVar20 = local_254;
  this->StaticLightingResolution = fVar63;
  if ((this->bUsesLandscapeCulling == false) && (local_254 != ES3_1)) {
    bVar51 = 0;
  }
  else {
    bVar51 = 0x40;
  }
  bVar51 = (this->field_0x80 & 0x40 | bVar51) ^ this->field_0x80 & 0xbf;
  this->field_0x80 = bVar51;
  pFVar43 = ::operator_new(0x40);
  if (pFVar43 == (FLandscapeLCI *)0x0) {
    pFVar43 = (FLandscapeLCI *)0x0;
  }
  else {
    pFVar43 = FLandscapeLCI::FLandscapeLCI(pFVar43,param_1,TVar20,(bool)(bVar51 >> 6 & 1));
  }
  pTVar3 = &this->ComponentLightInfo;
  if (pTVar3 == (TUniquePtr<FLandscapeComponentSceneProxy::FLandscapeLCI,TDefaultDelete<FLandscapeComponentSceneProxy::FLandscapeLCI>_>
                 *)local_180) {
    if (pFVar43 == (FLandscapeLCI *)0x0) goto LAB_145f782fc;
    pFVar11 = (pFVar43->IrrelevantLights).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    pFVar43->_padding_ = (longlong)&___7FLightCacheInterface__6B_;
    pFVar49 = pFVar43;
    if ((FRHIResource *)pFVar43->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar43->_padding_);
    }
  }
  else {
    pFVar49 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar43;
    if (pFVar49 == (FLandscapeLCI *)0x0) goto LAB_145f782fc;
    pFVar11 = (pFVar49->IrrelevantLights).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    pFVar49->_padding_ = (longlong)&___7FLightCacheInterface__6B_;
    if ((FRHIResource *)pFVar49->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar49->_padding_);
    }
  }
  ::operator_delete(pFVar49,0x40);
LAB_145f782fc:
  if (((this->ComponentLightInfo).Ptr == (FLandscapeLCI *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComponentLightInfo",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                          ,0x669,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
    return pFVar38;
  }
  pFVar43 = (this->ComponentLightInfo).Ptr;
  if ((pFVar43->_padding_ == 0) && (pFVar43->_padding_ == 0)) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  if ((uint)local_260 != (this->AvailableMaterials).ArrayNum) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("AvailableMaterialInterfaces.Num() == AvailableMaterials.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                        ,0x66d,L"");
    if (bVar25) {
      pcVar12 = (code *)swi(3);
      pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
      return pFVar38;
    }
  }
  if ((int)(uint)local_260 < 1) {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6122070139182515823>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                        ,0x66f,"AvailableMaterialInterfaces.Num() > 0");
    if (bVar21) {
      pcVar12 = (code *)swi(3);
      pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
      return pFVar38;
    }
    local_238 = UMaterial::GetDefaultMaterial(MD_Surface);
    if (((local_268.Data <= (FScriptContainerElement *)&local_238) &&
        ((FScriptContainerElement *)&local_238 < local_268.Data + (longlong)(int)local_260._4_4_ * 8
        )) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar21)) {
      pcVar12 = (code *)swi(3);
      pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
      return pFVar38;
    }
    uVar52 = (uint)local_260;
    if ((uint)local_260 == local_260._4_4_) {
      uVar52 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_268,(int *)((longlong)&local_260 + 4));
    }
    iVar31 = uVar52 + 1;
    local_260 = CONCAT44(local_260._4_4_,iVar31);
    pTVar1 = &this->AvailableMaterials;
    *(UMaterial **)(local_268.Data + (longlong)(int)uVar52 * 8) = local_238;
    uVar29 = 0;
    if ((int)uVar52 < iVar31) {
      uVar29 = ~uVar52 >> 0x1f;
    }
    if (uVar29 == 0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar12 = (code *)swi(3);
        pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
        return pFVar38;
      }
      iVar31 = (int)local_260;
    }
    local_230 = (**(code **)(**(longlong **)(local_268.Data + (longlong)(iVar31 + -1) * 8) + 0x310))
                          ();
    pFVar11 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_230) &&
        ((FScriptContainerElement *)&local_230 <
         pFVar11 + (longlong)(this->AvailableMaterials).ArrayMax * 8)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar12 = (code *)swi(3);
      pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
      return pFVar38;
    }
    iVar31 = (this->AvailableMaterials).ArrayNum;
    if (iVar31 == (this->AvailableMaterials).ArrayMax) {
      iVar31 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,&(this->AvailableMaterials).ArrayMax);
    }
    (this->AvailableMaterials).ArrayNum = iVar31 + 1;
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar31 * 8) = local_230;
  }
  else {
    uVar52 = 0;
    if (0 < (int)(uint)local_260) {
      lVar54 = 0;
      iVar31 = (uint)local_260;
      do {
        uVar29 = 0;
        if ((int)uVar52 < iVar31) {
          uVar29 = ~uVar52 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
          return pFVar38;
        }
        this_00 = *(UMaterialInstance **)(local_268.Data + lVar54);
        if (this_00 == (UMaterialInstance *)0x0) {
LAB_145f78654:
          pUVar46 = UMaterial::GetDefaultMaterial(MD_Surface);
          uVar29 = 0;
          if ((int)uVar52 < (int)(uint)local_260) {
            uVar29 = ~uVar52 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
            return pFVar38;
          }
          *(UMaterial **)(local_268.Data + lVar54) = pUVar46;
          uVar47 = (**(code **)(pUVar46->_padding_ + 0x310))();
          uVar29 = 0;
          if ((int)uVar52 < (this->AvailableMaterials).ArrayNum) {
            uVar29 = ~uVar52 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
            return pFVar38;
          }
          *(undefined8 *)((this->AvailableMaterials).AllocatorInstance.Data + lVar54) = uVar47;
        }
        else {
          local_158 = 0;
          uStack_150 = 0;
          pUVar44 = (UMaterialInterface *)
                    (**(code **)(this_00->_padding_ + 0x2e0))(this_00,&local_158);
          pUVar45 = Z_Construct_UClass_UMaterialInstance_NoRegister();
          iVar31 = (int)pUVar45->_padding_;
          if (((*(int *)(this_00->_padding_ + 0x38) < iVar31) ||
              ((longlong *)
               *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar31 * 8) !=
               &pUVar45->_padding_)) ||
             (bVar25 = UMaterialInstance::IsChildOf(this_00,pUVar44), bVar25)) {
            bVar51 = 1;
          }
          else {
            bVar51 = 0;
          }
          if (bVar21) {
            cVar26 = (**(code **)(this_00->_padding_ + 0x378))(this_00,4);
            bVar27 = 0;
            if (cVar26 != '\0') goto LAB_145f78649;
          }
          else {
LAB_145f78649:
            bVar27 = 1;
          }
          if (!(bool)(bVar27 & bVar51)) goto LAB_145f78654;
        }
        uVar52 = uVar52 + 1;
        lVar54 = lVar54 + 8;
        iVar31 = (uint)local_260;
      } while ((int)uVar52 < (int)(uint)local_260);
    }
  }
  FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  iVar31 = (uint)local_260;
  uVar50 = (ulonglong)(int)(uint)local_260;
  pTVar4 = &this->MaterialRelevances;
  pFVar11 = local_268.Data + uVar50 * 8;
  FVar56.Data = local_268.Data;
  while( true ) {
    if ((int)uVar50 != iVar31) {
      local_258 = 0;
      `TCheckedPointerIterator<UMaterialInterface_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_258);
    }
    pUVar19 = local_res10;
    if (FVar56.Data == pFVar11) break;
    pUVar46 = *(UMaterial **)FVar56.Data;
    if ((pUVar46 == (UMaterial *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InMaterialInterface != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                            ,0x695,L""), bVar21)) {
      pcVar12 = (code *)swi(3);
      pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
      return pFVar38;
    }
    UMaterialInterface::GetRelevance_Concurrent
              ((UMaterialInterface *)pUVar46,(EShaderPlatform)&local_228);
    pFVar53 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar53 <= (FScriptContainerElement *)&local_228) &&
        ((FScriptContainerElement *)&local_228 <
         pFVar53 + (longlong)(this->MaterialRelevances).ArrayMax * 8)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar12 = (code *)swi(3);
      pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
      return pFVar38;
    }
    iVar30 = (this->MaterialRelevances).ArrayNum;
    if (iVar30 == (this->MaterialRelevances).ArrayMax) {
      iVar30 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar4->AllocatorInstance,&(this->MaterialRelevances).ArrayMax);
    }
    FVar56.Data = FVar56.Data + 8;
    (this->MaterialRelevances).ArrayNum = iVar30 + 1;
    *(undefined8 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar30 * 8) = local_228;
    uVar50 = local_260 & 0xffffffff;
  }
  iVar30 = local_res10->SubsectionSizeQuads + 1;
  iVar31 = 1;
  if (iVar30 != 0) {
    iVar31 = iVar30;
  }
  this->field_0x83 = this->field_0x83 | 2;
  uVar50 = (ulonglong)(iVar31 - 1) * 2 + 1;
  lVar54 = 0x3f;
  if (uVar50 != 0) {
    for (; uVar50 >> lVar54 == 0; lVar54 = lVar54 + -1) {
    }
  }
  local_1e8 = (undefined4)lVar54;
  this->SharedBuffersKey =
       ((this->NumRayTracingSections & 0xfU) << 4 | this->NumSubsections & 0xfU) << 4 |
       (int)(char)lVar54 & 0xfU;
  if ((1 < (int)local_254) && (uVar52 = 0, 0 < (local_res10->WeightmapLayerAllocations).ArrayNum)) {
    lVar54 = 0;
    do {
      uVar29 = 0;
      if ((int)uVar52 < (pUVar19->WeightmapLayerAllocations).ArrayNum) {
        uVar29 = ~uVar52 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
        return pFVar38;
      }
      this_01 = (FWeightmapLayerAllocationInfo *)
                ((pUVar19->WeightmapLayerAllocations).AllocatorInstance.Data + lVar54);
      FVar48 = FWeightmapLayerAllocationInfo::GetLayerName(this_01);
      if ((*(FName *)FVar48 == UMaterialExpressionLandscapeVisibilityMask::ParameterName) &&
         (this_01->WeightmapTextureChannel != 0xff)) {
        bVar51 = this_01->WeightmapTextureIndex;
        if (bVar51 != 0xff) {
          if (((this->WeightmapTextures).ArrayNum <= (int)(uint)bVar51) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar12 = (code *)swi(3);
            pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
            return pFVar38;
          }
          this->VisibilityWeightmapTexture =
               *(UTexture2D **)
                ((this->WeightmapTextures).AllocatorInstance.Data + (ulonglong)bVar51 * 8);
          this->VisibilityWeightmapChannel = (uint)this_01->WeightmapTextureChannel;
          break;
        }
      }
      uVar52 = uVar52 + 1;
      lVar54 = lVar54 + 0x10;
    } while ((int)uVar52 < (pUVar19->WeightmapLayerAllocations).ArrayNum);
  }
  this->field_0x7c = this->field_0x7c | 8;
  FPrimitiveSceneProxy::UpdateVisibleInLumenScene((FPrimitiveSceneProxy *)this);
  uVar52 = (pUVar19->MipToMipMaxDeltas).ArrayNum;
  if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
  }
  if ((this->WorldSpaceMipToMipMaxDeltas).ArrayMax < (int)uVar52) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar52,&(this->WorldSpaceMipToMipMaxDeltas).AllocatorInstance,
               (this->WorldSpaceMipToMipMaxDeltas).ArrayNum,
               &(this->WorldSpaceMipToMipMaxDeltas).ArrayMax);
  }
  dVar61 = local_138;
  pFVar53 = (pUVar19->MipToMipMaxDeltas).AllocatorInstance.Data;
  pTVar5 = &this->WorldSpaceMipToMipMaxDeltas;
  iVar31 = (pUVar19->MipToMipMaxDeltas).ArrayNum;
  pFVar11 = pFVar53 + (longlong)iVar31 * 8;
  while( true ) {
    if ((pUVar19->MipToMipMaxDeltas).ArrayNum != iVar31) {
      local_257[0] = 0;
      `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_257);
    }
    if (pFVar53 == pFVar11) break;
    pFVar9 = (pTVar5->AllocatorInstance).Data;
    local_220 = dVar61 * *(double *)pFVar53;
    if (((pFVar9 <= (FScriptContainerElement *)&local_220) &&
        ((FScriptContainerElement *)&local_220 <
         pFVar9 + (longlong)(this->WorldSpaceMipToMipMaxDeltas).ArrayMax * 8)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar12 = (code *)swi(3);
      pFVar38 = (FLandscapeComponentSceneProxy *)(*pcVar12)();
      return pFVar38;
    }
    iVar30 = (this->WorldSpaceMipToMipMaxDeltas).ArrayNum;
    if (iVar30 == (this->WorldSpaceMipToMipMaxDeltas).ArrayMax) {
      iVar30 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar5->AllocatorInstance,
                          &(this->WorldSpaceMipToMipMaxDeltas).ArrayMax);
    }
    (this->WorldSpaceMipToMipMaxDeltas).ArrayNum = iVar30 + 1;
    pFVar53 = pFVar53 + 8;
    *(double *)((pTVar5->AllocatorInstance).Data + (longlong)iVar30 * 8) = local_220;
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data);
  }
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  return this;
}

// ~FLandscapeComponentSceneProxy @ 145f7c930

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLandscapeComponentSceneProxy::~FLandscapeComponentSceneProxy(FLandscapeComponentSceneProxy *this)

{
  longlong *plVar1;
  TUniformBuffer<FLandscapeUniformShaderParameters> *this_00;
  int iVar2;
  FLandscapeSharedBuffers *pFVar3;
  uchar *puVar4;
  TUniformBufferRef<FLandscapeUniformShaderParameters> this_01;
  FScriptContainerElement *pFVar5;
  FLandscapeLCI *pFVar6;
  FLandscapeRayTracingImpl *pFVar7;
  code *pcVar8;
  bool bVar9;
  ForElementType<FMeshBatchElement> FVar10;
  longlong lVar11;
  
  this_00 = &this->LandscapeUniformShaderParameters;
  *(undefined ***)this = &_vftable__for__FPrimitiveSceneProxy__;
  *(undefined ***)&this->field_0x280 = &_vftable__for__FLandscapeSectionInfo__;
  (**(code **)(this_00->_padding_ + 0x20))(this_00);
  if (this->SharedBuffers != (FLandscapeSharedBuffers *)0x0) {
    if (SharedBuffersMap._8_4_ != SharedBuffersMap._52_4_) {
      lVar11 = 0x154bed438;
      if (SharedBuffersMap._64_8_ != 0) {
        lVar11 = SharedBuffersMap._64_8_;
      }
      iVar2 = *(int *)(lVar11 + (ulonglong)(SharedBuffersMap._72_4_ - 1 & this->SharedBuffersKey) *
                                4);
      while (iVar2 != -1) {
        lVar11 = SharedBuffersMap._0_8_ + (longlong)iVar2 * 0x18;
        if (*(uint *)(SharedBuffersMap._0_8_ + (longlong)iVar2 * 0x18) == this->SharedBuffersKey) {
          if ((lVar11 != 0) && (this->SharedBuffers == *(FLandscapeSharedBuffers **)(lVar11 + 8)))
          goto LAB_145f7ca0b;
          break;
        }
        iVar2 = *(int *)(lVar11 + 0x10);
      }
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SharedBuffers == FLandscapeComponentSceneProxy::SharedBuffersMap.FindRef(SharedBuffersKey)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                       ,0x7ac,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
LAB_145f7ca0b:
    pFVar3 = this->SharedBuffers;
    plVar1 = &pFVar3->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
    this->SharedBuffers = (FLandscapeSharedBuffers *)0x0;
  }
  puVar4 = (this->LandscapeUniformShaderParameters).Contents;
  this_00->_padding_ = (longlong)&___7__TUniformBuffer_VFLandscapeUniformShaderParameters____6B_;
  if (puVar4 != (uchar *)0x0) {
    FMemory::Free(puVar4);
  }
  this_01 = (this->LandscapeUniformShaderParameters).UniformBufferRHI;
  if (this_01 != (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this_00);
  pFVar5 = (this->WorldSpaceMipToMipMaxDeltas).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->MaterialRelevances).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->MaterialIndexToStaticMeshBatchLOD).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->LODIndexToMaterialIndex).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar6 = (this->ComponentLightInfo).Ptr;
  if (pFVar6 != (FLandscapeLCI *)0x0) {
    pFVar5 = (pFVar6->IrrelevantLights).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar6->_padding_ = (longlong)&___7FLightCacheInterface__6B_;
    if ((FRHIResource *)pFVar6->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar6->_padding_);
    }
    ::operator_delete(pFVar6,0x40);
  }
  pFVar5 = (this->AvailableMaterials).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->WeightmapTextures).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FLandscapeBatchElementParams,int>
            ((FLandscapeBatchElementParams *)(this->GrassBatchParams).AllocatorInstance.Data,
             (this->GrassBatchParams).ArrayNum);
  pFVar5 = (this->GrassBatchParams).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FVar10 = (this->GrassMeshBatch).Elements.AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<FMeshBatchElement>)0x0) {
    FVar10 = (ForElementType<FMeshBatchElement>)&this->GrassMeshBatch;
  }
  DestructItems<FMeshBatchElement,int>
            ((FMeshBatchElement *)FVar10,(this->GrassMeshBatch).Elements.ArrayNum);
  FVar10 = (this->GrassMeshBatch).Elements.AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<FMeshBatchElement>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  DestructItems<FLandscapeBatchElementParams,int>
            ((FLandscapeBatchElementParams *)(this->StaticBatchParamArray).AllocatorInstance.Data,
             (this->StaticBatchParamArray).ArrayNum);
  pFVar5 = (this->StaticBatchParamArray).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->LODScreenRatioSquared).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar7 = (this->RayTracingImpl).Ptr;
  if (pFVar7 != (FLandscapeRayTracingImpl *)0x0) {
    (*(code *)pFVar7[-1].PerViewRayTracingState.AllocatorInstance.Data)(pFVar7 + -1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// ApplyViewDependentMeshArguments @ 145f821d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLandscapeComponentSceneProxy::ApplyViewDependentMeshArguments
          (FLandscapeComponentSceneProxy *this,FSceneView *param_1,FMeshBatch *param_2)

{
  uchar *puVar1;
  ForElementType<FMeshBatchElement> FVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FMeshBatchElement> FVar5;
  FArguments local_28;
  
  local_28.IndirectArgsOffset = 0;
  local_28.TileDataOffset = 0;
  local_28.IndirectArgsBuffer = (FRHIBuffer *)0x0;
  local_28.TileDataVertexBuffer = (FRHIBuffer *)0x0;
  if (*(int *)&this->field_0x2a0 < -0x7fffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderCoord.X > (-2147483647i32 - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                       ,0xbbe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = UE::Landscape::Culling::GetViewArguments
                    (param_1,*(uint *)&this->field_0x298,
                     (TIntPoint<int>)*(TIntPoint<int>_u_0 *)&this->field_0x2a0,
                     (int)param_2->LODIndex,&local_28);
  if (bVar4) {
    if ((param_2->Elements).ArrayNum < 1) {
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
    FVar2 = (param_2->Elements).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<FMeshBatchElement>)param_2;
    if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar5 = FVar2;
    }
    puVar1 = (uchar *)((longlong)FVar5 + 0x5c);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    if ((param_2->Elements).ArrayNum < 1) {
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
    FVar2 = (param_2->Elements).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<FMeshBatchElement>)param_2;
    if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar5 = FVar2;
    }
    puVar1 = (uchar *)((longlong)FVar5 + 0x60);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    if ((param_2->Elements).ArrayNum < 1) {
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
    FVar2 = (param_2->Elements).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<FMeshBatchElement>)param_2;
    if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar5 = FVar2;
    }
    *(FRHIBuffer **)((longlong)FVar5 + 0x48) = local_28.IndirectArgsBuffer;
    if ((param_2->Elements).ArrayNum < 1) {
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
    FVar2 = (param_2->Elements).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
      param_2 = (FMeshBatch *)FVar2;
    }
    *(uint *)((longlong)param_2 + 0x50) = local_28.IndirectArgsOffset;
  }
  return;
}

// CanBeOccluded @ 145f843d0

bool __thiscall FLandscapeComponentSceneProxy::CanBeOccluded(FLandscapeComponentSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if ((this->field_0x78 & 0x20) == 0) {
    pFVar4 = (this->MaterialRelevances).AllocatorInstance.Data;
    iVar2 = (this->MaterialRelevances).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->MaterialRelevances).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FMaterialRelevance_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar1) goto LAB_145f84427;
      if (((byte)pFVar4[7] & 4) == 0) break;
      pFVar4 = pFVar4 + 8;
    }
    bVar3 = true;
  }
  else {
LAB_145f84427:
    bVar3 = false;
  }
  return bVar3;
}

// ComputeLODBias @ 145f85fd0

float __thiscall FLandscapeComponentSceneProxy::ComputeLODBias(FLandscapeComponentSceneProxy *this)

{
  longlong lVar1;
  FTextureResource *pFVar2;
  
  if (*(UTexture **)&this->field_0x280 != (UTexture *)0x0) {
    pFVar2 = UTexture::GetResource(*(UTexture **)&this->field_0x280);
    if (pFVar2 != (FTextureResource *)0x0) {
      lVar1 = pFVar2[1]._padding_;
      if (lVar1 != 0) {
        return (float)(int)(((uint)((ulonglong)lVar1 >> 0x18) & 0xff) -
                           ((uint)((ulonglong)lVar1 >> 0x28) & 0xff));
      }
      return 0.0;
    }
  }
  return 0.0;
}

// ComputeLODForView @ 145f86040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
FLandscapeComponentSceneProxy::ComputeLODForView
          (FLandscapeComponentSceneProxy *this,FSceneView *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FSceneView *pFVar11;
  FSceneView *pFVar12;
  FLandscapeRenderSystem **ppFVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TVector4<double>_u_0 local_78;
  TVector4<double>_u_0 local_58 [2];
  
  iVar10 = GetViewLodOverride(param_1,*(uint *)&this->field_0x18);
  fVar15 = param_1->LODDistanceFactor;
  pFVar11 = GetLODView(param_1);
  pFVar12 = GetLODView(param_1);
  pTVar7 = CVarStaticMeshLODDistanceScale.Ref;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
    pcVar5 = (code *)swi(3);
    fVar15 = (float)(*pcVar5)();
    return fVar15;
  }
  fVar15 = fVar15 * pTVar7->ShadowedValue[1];
  ppFVar13 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
             ::FindChecked((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                            *)&LandscapeRenderSystems,*(uint *)&this->field_0x18);
  cVar9 = (*ppFVar13)->ForcedLODOverride;
  if (cVar9 < '\0') {
    cVar9 = this->field_0x8d;
  }
  cVar3 = this->field_0x8f;
  iVar14 = (int)cVar9;
  if (-1 < iVar10) {
    iVar14 = iVar10;
  }
  if ((param_1->Family->EngineShowFlags).CollisionPawn == 0) {
    iVar10 = -1;
    if ((param_1->Family->EngineShowFlags).CollisionVisibility != 0) {
      iVar10 = (int)cVar3;
    }
  }
  else {
    iVar10 = (int)cVar3;
    if (cVar3 < (char)this->field_0x8e) {
      iVar10 = (int)(char)this->field_0x8e;
    }
  }
  if (-1 < iVar10) {
    iVar14 = iVar10;
  }
  iVar10 = (int)(char)this->field_0x8c;
  if (iVar14 < (char)this->field_0x8c) {
    iVar10 = iVar14;
  }
  fVar17 = (float)iVar10;
  if (iVar10 < 0) {
    local_78._s_0.X = (pFVar11->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
    local_78._s_0.Y = (pFVar11->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
    local_78._s_0.Z = (pFVar11->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
    local_58[0]._0_8_ = *(double *)((longlong)&this[-1].CollisionResponse.field0_0x0 + 8);
    local_58[0]._8_8_ = *(double *)((longlong)&this[-1].CollisionResponse.field0_0x0 + 0x10);
    local_58[0]._16_8_ = *(double *)((longlong)&this[-1].CollisionResponse.field0_0x0 + 0x18);
    local_78._s_0.W = __real_3ff0000000000000;
    local_58[0]._s_0.W = __real_3ff0000000000000;
    fVar17 = ComputeBoundsScreenRadiusSquared
                       ((TVector4<double> *)&local_58[0]._s_0,
                        (float)(double)this[-1].LandscapeUniformShaderParameters._padding_,
                        (TVector4<double> *)&local_78._s_0,&(pFVar12->ViewMatrices).ProjectionMatrix
                       );
    fVar15 = fVar15 * fVar15;
    if (fVar15 <= __real_322bcc77) {
      fVar15 = __real_322bcc77;
    }
    fVar17 = fVar17 / fVar15;
    if (*(float *)&this->field_0x84 <= fVar17 && fVar17 != *(float *)&this->field_0x84) {
      fVar15 = *(float *)&this->field_0x7c;
      if (fVar17 <= fVar15) {
        fVar15 = logf(fVar15 / fVar17);
        fVar17 = logf(*(float *)&this->field_0x80);
        fVar17 = fVar15 / fVar17 + __real_3f800000;
      }
      else {
        fVar2 = *(float *)&this->field_0x78;
        fVar16 = fVar2;
        if (fVar17 <= fVar2) {
          fVar16 = fVar17;
        }
        fVar17 = (fVar2 - fVar16) / (fVar2 - fVar15);
      }
    }
    else {
      fVar17 = (float)(int)(char)this->field_0x8c;
    }
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  return fVar17;
}

// ComputeSectionResolution @ 145f86460

double __thiscall
FLandscapeComponentSceneProxy::ComputeSectionResolution(FLandscapeComponentSceneProxy *this)

{
  return (double)*(float *)&this->field_0x70 /
         ((double)*(int *)&this->field_0xa0 - __real_3ff0000000000000);
}

// CreateRenderThreadResources @ 145f879a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FLandscapeComponentSceneProxy::CreateRenderThreadResources
          (FLandscapeComponentSceneProxy *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  uchar *puVar4;
  uint *puVar5;
  FMeshBatch *this_00;
  TArray<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  FScriptContainerElement FVar10;
  Type TVar11;
  int iVar12;
  FMaterialRenderProxy *pFVar13;
  FScriptContainerElement *pFVar14;
  FRHIResource *pFVar15;
  ForElementType<FMeshBatchElement> FVar16;
  FRHIResource *this_01;
  ForElementType<int> FVar17;
  ulonglong uVar18;
  code *pcVar19;
  undefined8 uVar20;
  bool bVar21;
  bool bVar22;
  FStaticShaderPlatform FVar23;
  int iVar24;
  int iVar25;
  FLandscapeSharedBuffers *pFVar26;
  FLandscapeVertexFactory *pFVar27;
  FLandscapeVertexFactory *this_02;
  IConsoleManager *pIVar28;
  uint uVar29;
  ForElementType<FMeshBatchElement> FVar30;
  FLandscapeVertexFactory *pFVar31;
  ForElementType<FMeshBatchElement> FVar32;
  uint uVar33;
  longlong lVar34;
  uint uVar35;
  FLandscapeSharedBuffers **ppFVar36;
  FScriptContainerElement *pFVar37;
  ForElementType<int> FVar38;
  FLLMScope local_res8 [2];
  longlong local_80;
  longlong local_78;
  FName local_70;
  FRHIResource *local_68;
  ulonglong local_60;
  FMemScope local_58;
  uint *local_50;
  FLandscapeSharedBuffers **local_48;
  
  FLLMScope::FLLMScope(local_res8,Landscape,false,None,Default,true);
  FMemScope::FMemScope(&local_58,Landscape,true);
  if ((this->HeightmapTexture == (UTexture2D *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("HeightmapTexture != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                          ,0x6c5,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pFVar31 = (FLandscapeVertexFactory *)0x0;
  pFVar27 = (FLandscapeVertexFactory *)&this->field_0x280;
  if (this == (FLandscapeComponentSceneProxy *)0x0) {
    pFVar27 = pFVar31;
  }
  FLandscapeRenderSystem::CreateResources(param_1,(FLandscapeSectionInfo *)pFVar27);
  if ((this->field_0x7b & 0x10) == 0) {
    FLandscapeRenderSystem::RegisterSection((FLandscapeSectionInfo *)pFVar27);
  }
  puVar5 = &this->SharedBuffersKey;
  uVar33 = 1;
  TVar11 = *(Type *)(*(longlong *)&this->field_0x220 + 8);
  if (SharedBuffersMap._8_4_ != SharedBuffersMap._52_4_) {
    lVar34 = 0x154bed438;
    if (SharedBuffersMap._64_8_ != 0) {
      lVar34 = SharedBuffersMap._64_8_;
    }
    iVar25 = *(int *)(lVar34 + (ulonglong)(SharedBuffersMap._72_4_ - 1 & *puVar5) * 4);
    while (iVar25 != -1) {
      lVar34 = SharedBuffersMap._0_8_ + (longlong)iVar25 * 0x18;
      if (*(uint *)(SharedBuffersMap._0_8_ + (longlong)iVar25 * 0x18) == *puVar5) {
        if (lVar34 != 0) {
          pFVar26 = *(FLandscapeSharedBuffers **)(lVar34 + 8);
          this->SharedBuffers = pFVar26;
          if (pFVar26 != (FLandscapeSharedBuffers *)0x0) goto LAB_145f87c85;
          goto LAB_145f87ac5;
        }
        break;
      }
      iVar25 = *(int *)(lVar34 + 0x10);
    }
  }
  this->SharedBuffers = (FLandscapeSharedBuffers *)0x0;
LAB_145f87ac5:
  ppFVar36 = &this->SharedBuffers;
  local_70 = this->DebugName;
  pFVar26 = ::operator_new(200);
  pFVar27 = pFVar31;
  if (pFVar26 != (FLandscapeSharedBuffers *)0x0) {
    pFVar27 = (FLandscapeVertexFactory *)
              FLandscapeSharedBuffers::FLandscapeSharedBuffers
                        (pFVar26,param_1,*puVar5,this->SubsectionSizeQuads,this->NumSubsections,
                         this->NumRayTracingSections,TVar11,&local_70);
  }
  *ppFVar36 = (FLandscapeSharedBuffers *)pFVar27;
  local_50 = puVar5;
  local_48 = ppFVar36;
  TSet<TTuple<unsigned_int,FLandscapeSharedBuffers_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeSharedBuffers_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FLandscapeSharedBuffers_*_const_&>_>
            ((TSet<TTuple<unsigned_int,FLandscapeSharedBuffers_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeSharedBuffers_*,0>,FDefaultSetAllocator>
              *)&SharedBuffersMap,
             (TPairInitializer<unsigned_int_const_&,FLandscapeSharedBuffers_*_const_&> *)
             &stack0x00000020,(bool *)&local_50);
  this_02 = ::operator_new(0x150);
  pFVar27 = pFVar31;
  if (this_02 != (FLandscapeVertexFactory *)0x0) {
    pFVar27 = FLandscapeVertexFactory::FLandscapeVertexFactory(this_02,TVar11);
  }
  (pFVar27->Data).PositionComponent.VertexBuffer = (FVertexBuffer *)(*ppFVar36)->VertexBuffer;
  (pFVar27->Data).PositionComponent.StreamOffset = 0;
  (pFVar27->Data).PositionComponent.Offset = '\0';
  (pFVar27->Data).PositionComponent.Stride = '\x04';
  (pFVar27->Data).PositionComponent.Type = '\x06';
  (pFVar27->Data).PositionComponent.VertexStreamUsage = Default;
  (**(code **)(pFVar27->_padding_ + 0x18))(pFVar27);
  (*ppFVar36)->VertexFactory = pFVar27;
  FVar23.Platform = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  bVar21 = UseVirtualTexturing(FVar23);
  bVar22 = DoesPlatformSupportLumenGI(FVar23.Platform,false);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar28 = IConsoleManager::Get();
    lVar34 = (**(code **)((longlong)*pIVar28 + 0xc0))(pIVar28,L"r.Water.WaterInfo.RenderMethod",1);
    bWaterPluginLoaded = lVar34 != 0;
    _Init_thread_footer(&::_TSS0);
  }
  if (((*ppFVar36)->GrassIndexBuffer != (FIndexBuffer *)0x0 || (bVar22 || bVar21)) ||
      bWaterPluginLoaded != false) {
    pFVar27 = ::operator_new(0x150);
    if (pFVar27 != (FLandscapeVertexFactory *)0x0) {
      FLandscapeVertexFactory::FLandscapeVertexFactory(pFVar27,TVar11);
      pFVar27->_padding_ = (longlong)&___7FLandscapeFixedGridVertexFactory__6B_;
      pFVar31 = pFVar27;
    }
    (pFVar31->Data).PositionComponent.VertexBuffer = (FVertexBuffer *)(*ppFVar36)->VertexBuffer;
    (pFVar31->Data).PositionComponent.StreamOffset = 0;
    (pFVar31->Data).PositionComponent.Offset = '\0';
    (pFVar31->Data).PositionComponent.Stride = '\x04';
    (pFVar31->Data).PositionComponent.Type = '\x06';
    (pFVar31->Data).PositionComponent.VertexStreamUsage = Default;
    (**(code **)(pFVar31->_padding_ + 0x18))(pFVar31,param_1);
    (*ppFVar36)->FixedGridVertexFactory = pFVar31;
  }
LAB_145f87c85:
  plVar1 = &this->SharedBuffers->_padding_;
  *(int *)plVar1 = (int)*plVar1 + 1;
  pFVar26 = this->SharedBuffers;
  this->VertexFactory = pFVar26->VertexFactory;
  this->FixedGridVertexFactory = pFVar26->FixedGridVertexFactory;
  if (this->bUsesLandscapeCulling != false) {
    UE::Landscape::Culling::RegisterLandscape
              (param_1,pFVar26,TVar11,*(uint *)&this->field_0x298,this->SubsectionSizeVerts,
               this->NumSubsections);
  }
  (**(code **)((this->LandscapeUniformShaderParameters)._padding_ + 0x18))
            (&this->LandscapeUniformShaderParameters,param_1);
  iVar25 = 1;
  if (this->SubsectionSizeVerts != 0) {
    iVar25 = this->SubsectionSizeVerts;
  }
  uVar8 = (ulonglong)(iVar25 - 1) * 2 + 1;
  uVar18 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> uVar18 == 0; uVar18 = uVar18 - 1) {
    }
  }
  iVar25 = (int)uVar18;
  local_60 = uVar18;
  if (this->SharedBuffers->GrassIndexBuffer != (FIndexBuffer *)0x0) {
    if ((this->FixedGridVertexFactory == (FLandscapeVertexFactory *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("FixedGridVertexFactory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                            ,0x702,L""), bVar21)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    this_00 = &this->GrassMeshBatch;
    TArray<FMeshBatchElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty
              (&this_00->Elements,iVar25);
    iVar24 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                       (0x98,8,iVar25,(ForElementType<FMeshBatchElement> *)this_00,
                        &(this->GrassMeshBatch).Elements.ArrayNum,
                        &(this->GrassMeshBatch).Elements.ArrayMax);
    FVar30 = (this->GrassMeshBatch).Elements.AllocatorInstance.SecondaryData;
    if (FVar30 == (ForElementType<FMeshBatchElement>)0x0) {
      FVar30 = (ForElementType<FMeshBatchElement>)this_00;
    }
    DefaultConstructItems<FMeshBatchElement,int>
              ((void *)((longlong)FVar30 + (longlong)iVar24 * 0x98),iVar25);
    pTVar6 = &this->GrassBatchParams;
    if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar18 & 0xffffffff);
    }
    piVar2 = &(this->GrassBatchParams).ArrayNum;
    DestructItems<FLandscapeBatchElementParams,int>
              ((FLandscapeBatchElementParams *)(pTVar6->AllocatorInstance).Data,
               (this->GrassBatchParams).ArrayNum);
    piVar3 = &(this->GrassBatchParams).ArrayMax;
    *piVar2 = 0;
    local_78 = 0x30;
    if (*piVar3 != iVar25) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar25,&pTVar6->AllocatorInstance,0,piVar3);
    }
    iVar24 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x30,8,iVar25,&pTVar6->AllocatorInstance,piVar2,piVar3);
    DefaultConstructItems<FLandscapeBatchElementParams,int>
              ((pTVar6->AllocatorInstance).Data + (longlong)iVar24 * 0x30,iVar25);
    if (((this->LODIndexToMaterialIndex).ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    FVar10 = *(this->LODIndexToMaterialIndex).AllocatorInstance.Data;
    uVar29 = 0;
    if ((int)(char)FVar10 < (this->AvailableMaterials).ArrayNum) {
      uVar29 = (uint)~(int)(char)FVar10 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar13 = *(FMaterialRenderProxy **)
               ((this->AvailableMaterials).AllocatorInstance.Data + (longlong)(char)FVar10 * 8);
    (this->GrassMeshBatch).VertexFactory = (FVertexFactory *)this->FixedGridVertexFactory;
    (this->GrassMeshBatch).MaterialRenderProxy = pFVar13;
    (this->GrassMeshBatch).LCI = (FLightCacheInterface *)0x0;
    *(uint *)&(this->GrassMeshBatch).field_0xd4 =
         *(uint *)&(this->GrassMeshBatch).field_0xd4 & 0xffffe27a | 0x200;
    if (((this->GrassMeshBatch).Elements.ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    FVar30 = (this->GrassMeshBatch).Elements.AllocatorInstance.SecondaryData;
    if (FVar30 == (ForElementType<FMeshBatchElement>)0x0) {
      FVar30 = (ForElementType<FMeshBatchElement>)&this->GrassMeshBatch;
    }
    if (((this->GrassBatchParams).ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar14 = (this->GrassBatchParams).AllocatorInstance.Data;
    *(TUniformBuffer<FLandscapeUniformShaderParameters> **)(pFVar14 + 8) =
         &this->LandscapeUniformShaderParameters;
    *(TArray<TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>,TSizedDefaultAllocator<32>_>
      **)(pFVar14 + 0x10) = &this->SharedBuffers->LandscapeFixedGridUniformShaderParameters;
    pFVar15 = *(FRHIResource **)(pFVar14 + 0x18);
    if (pFVar15 != (FRHIResource *)0x0) {
      *(undefined8 *)(pFVar14 + 0x18) = 0;
      FRHIResource::Release(pFVar15);
    }
    *(FLandscapeComponentSceneProxy **)(pFVar14 + 0x20) = this;
    *(undefined4 *)(pFVar14 + 0x28) = 0;
    *(FScriptContainerElement **)((longlong)FVar30 + 0x38) = pFVar14;
    *(undefined8 *)FVar30 = *(undefined8 *)&this->field_0x258;
    *(FIndexBuffer **)((longlong)FVar30 + 0x18) = this->SharedBuffers->GrassIndexBuffer;
    iVar24 = this->NumSubsections;
    iVar12 = this->SubsectionSizeVerts;
    puVar4 = (uchar *)((longlong)FVar30 + 0x58);
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    puVar4 = (uchar *)((longlong)FVar30 + 0x68);
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    *(int *)((longlong)FVar30 + 0x5c) = iVar12 * iVar12 * iVar24 * iVar24;
    *(int *)((longlong)FVar30 + 0x6c) = this->SharedBuffers->NumVertices + -1;
    if (1 < iVar25) {
      local_80 = 1;
      lVar34 = 0x98;
      do {
        iVar25 = this->SubsectionSizeVerts >> ((byte)uVar33 & 0x1f);
        uVar35 = ~uVar33 >> 0x1f;
        uVar29 = 0;
        if ((int)uVar33 < (this->GrassMeshBatch).Elements.ArrayNum) {
          uVar29 = uVar35;
        }
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        FVar16 = (this->GrassMeshBatch).Elements.AllocatorInstance.SecondaryData;
        FVar32 = (ForElementType<FMeshBatchElement>)&this->GrassMeshBatch;
        if (FVar16 != (ForElementType<FMeshBatchElement>)0x0) {
          FVar32 = FVar16;
        }
        *(undefined8 *)(lVar34 + (longlong)FVar32) = *(undefined8 *)FVar30;
        *(undefined8 *)(lVar34 + 8 + (longlong)FVar32) = *(undefined8 *)((longlong)FVar30 + 8);
        pFVar15 = *(FRHIResource **)((longlong)FVar30 + 0x10);
        this_01 = *(FRHIResource **)(lVar34 + 0x10 + (longlong)FVar32);
        if (this_01 != pFVar15) {
          *(FRHIResource **)(lVar34 + 0x10 + (longlong)FVar32) = pFVar15;
          if (pFVar15 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(pFVar15);
          }
          if (this_01 != (FRHIResource *)0x0) {
            FRHIResource::Release(this_01);
          }
        }
        *(undefined8 *)(lVar34 + 0x18 + (longlong)FVar32) = *(undefined8 *)((longlong)FVar30 + 0x18)
        ;
        uVar20 = *(undefined8 *)((longlong)FVar30 + 0x28);
        puVar9 = (undefined8 *)(lVar34 + 0x20 + (longlong)FVar32);
        *puVar9 = *(undefined8 *)((longlong)FVar30 + 0x20);
        puVar9[1] = uVar20;
        *(undefined8 *)(lVar34 + 0x30 + (longlong)FVar32) = *(undefined8 *)((longlong)FVar30 + 0x30)
        ;
        *(undefined8 *)(lVar34 + 0x30 + (longlong)FVar32) = *(undefined8 *)((longlong)FVar30 + 0x30)
        ;
        *(undefined8 *)(lVar34 + 0x38 + (longlong)FVar32) = *(undefined8 *)((longlong)FVar30 + 0x38)
        ;
        *(undefined8 *)(lVar34 + 0x40 + (longlong)FVar32) = *(undefined8 *)((longlong)FVar30 + 0x40)
        ;
        *(undefined8 *)(lVar34 + 0x48 + (longlong)FVar32) = *(undefined8 *)((longlong)FVar30 + 0x48)
        ;
        *(undefined4 *)(lVar34 + 0x50 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x50)
        ;
        *(uint *)(lVar34 + 0x54 + (longlong)FVar32) =
             (*(uint *)((longlong)FVar30 + 0x54) ^ *(uint *)(lVar34 + 0x54 + (longlong)FVar32)) &
             0xfffffff8 ^ *(uint *)((longlong)FVar30 + 0x54);
        *(undefined4 *)(lVar34 + 0x58 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x58)
        ;
        *(undefined4 *)(lVar34 + 0x5c + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x5c)
        ;
        *(undefined4 *)(lVar34 + 0x60 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x60)
        ;
        *(undefined4 *)(lVar34 + 100 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 100);
        *(undefined4 *)(lVar34 + 0x68 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x68)
        ;
        *(undefined4 *)(lVar34 + 0x6c + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x6c)
        ;
        *(undefined4 *)(lVar34 + 0x70 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x70)
        ;
        *(undefined4 *)(lVar34 + 0x74 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x74)
        ;
        *(undefined4 *)(lVar34 + 0x78 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x78)
        ;
        uVar29 = (*(uint *)(lVar34 + 0x7c + (longlong)FVar32) ^ *(uint *)((longlong)FVar30 + 0x7c))
                 & 0xf ^ *(uint *)(lVar34 + 0x7c + (longlong)FVar32);
        *(uint *)(lVar34 + 0x7c + (longlong)FVar32) = uVar29;
        uVar29 = (uVar29 ^ *(uint *)((longlong)FVar30 + 0x7c)) & 0xf0 ^ uVar29;
        *(uint *)(lVar34 + 0x7c + (longlong)FVar32) = uVar29;
        uVar29 = (uVar29 ^ *(uint *)((longlong)FVar30 + 0x7c)) & 0x100 ^ uVar29;
        *(uint *)(lVar34 + 0x7c + (longlong)FVar32) = uVar29;
        uVar29 = (uVar29 ^ *(uint *)((longlong)FVar30 + 0x7c)) & 0x200 ^ uVar29;
        *(uint *)(lVar34 + 0x7c + (longlong)FVar32) = uVar29;
        uVar29 = (uVar29 ^ *(uint *)((longlong)FVar30 + 0x7c)) & 0x400 ^ uVar29;
        *(uint *)(lVar34 + 0x7c + (longlong)FVar32) = uVar29;
        uVar29 = (uVar29 ^ *(uint *)((longlong)FVar30 + 0x7c)) & 0x800 ^ uVar29;
        *(uint *)(lVar34 + 0x7c + (longlong)FVar32) = uVar29;
        uVar29 = (uVar29 ^ *(uint *)((longlong)FVar30 + 0x7c)) & 0x1000 ^ uVar29;
        *(uint *)(lVar34 + 0x7c + (longlong)FVar32) = uVar29;
        uVar29 = (uVar29 ^ *(uint *)((longlong)FVar30 + 0x7c)) & 0x2000 ^ uVar29;
        *(uint *)(lVar34 + 0x7c + (longlong)FVar32) = uVar29;
        *(uint *)(lVar34 + 0x7c + (longlong)FVar32) =
             (uVar29 ^ *(uint *)((longlong)FVar30 + 0x7c)) & 0xffc03fff ^
             *(uint *)((longlong)FVar30 + 0x7c);
        *(undefined4 *)(lVar34 + 0x80 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x80)
        ;
        *(undefined8 *)(lVar34 + 0x88 + (longlong)FVar32) = *(undefined8 *)((longlong)FVar30 + 0x88)
        ;
        *(undefined4 *)(lVar34 + 0x90 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x90)
        ;
        *(undefined4 *)(lVar34 + 0x94 + (longlong)FVar32) = *(undefined4 *)((longlong)FVar30 + 0x94)
        ;
        uVar29 = 0;
        if ((int)uVar33 < (this->GrassBatchParams).ArrayNum) {
          uVar29 = uVar35;
        }
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        pFVar37 = (this->GrassBatchParams).AllocatorInstance.Data + local_78;
        *(undefined8 *)pFVar37 = *(undefined8 *)pFVar14;
        *(undefined8 *)(pFVar37 + 8) = *(undefined8 *)(pFVar14 + 8);
        *(undefined8 *)(pFVar37 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
        local_68 = *(FRHIResource **)(pFVar37 + 0x18);
        pFVar15 = *(FRHIResource **)(pFVar14 + 0x18);
        if (local_68 != pFVar15) {
          *(FRHIResource **)(pFVar37 + 0x18) = pFVar15;
          if (pFVar15 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(pFVar15);
          }
          if (local_68 != (FRHIResource *)0x0) {
            FRHIResource::Release(local_68);
          }
        }
        *(undefined8 *)(pFVar37 + 0x20) = *(undefined8 *)(pFVar14 + 0x20);
        *(uint *)(pFVar37 + 0x28) = uVar33;
        *(FScriptContainerElement **)(lVar34 + 0x38 + (longlong)FVar32) = pFVar37;
        *(int *)(lVar34 + 0x5c + (longlong)FVar32) =
             this->NumSubsections * this->NumSubsections * iVar25 * iVar25;
        pFVar26 = this->SharedBuffers;
        uVar29 = 0;
        if ((int)uVar33 < (pFVar26->GrassIndexMipOffsets).ArrayNum) {
          uVar29 = uVar35;
        }
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        FVar17 = (pFVar26->GrassIndexMipOffsets).AllocatorInstance.SecondaryData;
        FVar38 = (ForElementType<int>)&pFVar26->GrassIndexMipOffsets;
        if (FVar17 != (ForElementType<int>)0x0) {
          FVar38 = FVar17;
        }
        local_78 = local_78 + 0x30;
        uVar33 = uVar33 + 1;
        lVar7 = local_80 * 4;
        local_80 = local_80 + 1;
        *(undefined4 *)(lVar34 + 0x58 + (longlong)FVar32) =
             *(undefined4 *)((longlong)FVar38 + lVar7);
        lVar34 = lVar34 + 0x98;
      } while ((int)uVar33 < (int)local_60);
    }
  }
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// DestroyRenderThreadResources @ 145f8a2d0

void __thiscall
FLandscapeComponentSceneProxy::DestroyRenderThreadResources(FLandscapeComponentSceneProxy *this)

{
  FLandscapeSectionInfo *pFVar1;
  
  pFVar1 = (FLandscapeSectionInfo *)&this->field_0x280;
  if (this == (FLandscapeComponentSceneProxy *)0x0) {
    pFVar1 = (FLandscapeSectionInfo *)0x0;
  }
  FLandscapeRenderSystem::UnregisterSection(pFVar1);
  FLandscapeRenderSystem::DestroyResources(pFVar1);
  UE::Landscape::Culling::UnregisterLandscape(*(uint *)&this->field_0x298);
  return;
}

// DrawStaticElements @ 145f8ad60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FLandscapeComponentSceneProxy::DrawStaticElements
          (FLandscapeComponentSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  float fVar4;
  byte *pbVar5;
  bool bVar6;
  ulonglong uVar7;
  ForElementType<FMeshBatchElement> FVar8;
  ForElementType<FMeshBatchElement> FVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  byte *pbVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStackY_428 [32];
  undefined1 local_3f8;
  byte local_3f7;
  uint uStack_3f4;
  uint local_3f0;
  byte *local_3e8;
  int local_3e0;
  byte *local_3d8;
  FMeshBatch local_3d0;
  FMeshBatch local_2f0;
  FMeshBatch local_210;
  FMeshBatch local_130;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_428;
  if ((this->AvailableMaterials).ArrayNum != 0) {
    iVar11 = this->LastLOD - this->FirstLOD;
    uVar12 = iVar11 + 1;
    if (this->FixedGridVertexFactory != (FLandscapeVertexFactory *)0x0) {
      uVar12 = iVar11 + 3 +
               ((this->LastVirtualTextureLOD - this->FirstVirtualTextureLOD) + 1) *
               *(int *)&this->field_0xd8;
    }
    uStack_3f4 = uVar12;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    DestructItems<FLandscapeBatchElementParams,int>
              ((FLandscapeBatchElementParams *)(this->StaticBatchParamArray).AllocatorInstance.Data,
               (this->StaticBatchParamArray).ArrayNum);
    piVar1 = &(this->StaticBatchParamArray).ArrayMax;
    (this->StaticBatchParamArray).ArrayNum = 0;
    if (*piVar1 != uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar12,&(this->StaticBatchParamArray).AllocatorInstance,0,piVar1);
    }
    (**(code **)((longlong)*param_1 + 0x10))(param_1,uVar12);
    fVar4 = __real_7f7fffff;
    if (this->FixedGridVertexFactory != (FLandscapeVertexFactory *)0x0) {
      local_3f0 = *(uint *)&this->field_0xd8;
      uVar7 = (ulonglong)(int)local_3f0;
      pbVar14 = *(byte **)&this->field_0xd0;
      local_3d8 = pbVar14 + uVar7;
      while( true ) {
        pbVar5 = local_3d8;
        local_3e8 = pbVar14;
        if (*(int *)&this->field_0xd8 != (int)uVar7) {
          local_3f8 = 0;
          `TCheckedPointerIterator<enum_ERuntimeVirtualTextureMaterialType,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_3f8);
        }
        if (pbVar14 == pbVar5) break;
        uVar12 = this->FirstLOD;
        local_3f7 = *pbVar14;
        uVar10 = 0;
        if ((int)uVar12 < (this->LODIndexToMaterialIndex).ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar2 = (this->LODIndexToMaterialIndex).AllocatorInstance.Data[(int)uVar12];
        iVar11 = this->FirstVirtualTextureLOD;
        if (iVar11 <= this->LastVirtualTextureLOD) {
          do {
            local_2f0.Elements.AllocatorInstance.SecondaryData =
                 (ForElementType<FMeshBatchElement>)0x0;
            local_2f0.bUseForLumenSurfaceCacheCapture = 0;
            local_2f0.bUseForWaterInfoTextureDepth = 0;
            local_2f0.bViewDependentArguments = 0;
            local_2f0.bForceTwoSidedInRayTracing = 0;
            local_2f0.CastRayTracedShadow = 1;
            local_2f0.bOverlayMaterial = 0;
            local_2f0.RuntimeVirtualTextureMaterialType = 0;
            local_2f0.bRenderToVirtualTexture = 0;
            local_2f0.bDitheredLODTransition = 0;
            local_2f0.bSelectable = 1;
            local_2f0.bUseSelectionOutline = 1;
            local_2f0.bUseWireframeSelectionColoring = 0;
            local_2f0.bCanApplyViewModeOverrides = 0;
            local_2f0.DepthPriorityGroup = 0;
            local_2f0.Type = 0;
            local_2f0.bWireframe = 0;
            local_2f0.bUseAsOccluder = 1;
            local_2f0.bUseForDepthPass = 1;
            local_2f0.bUseForMaterial = 1;
            local_2f0.CastShadow = 1;
            local_2f0.bDisableBackfaceCulling = 0;
            local_2f0.ReverseCulling = 0;
            local_2f0.Elements.ArrayMax = 1;
            local_2f0.LCI = (FLightCacheInterface *)0x0;
            local_2f0.VertexFactory = (FVertexFactory *)0x0;
            local_2f0.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
            local_2f0.BatchHitProxyId.Index = -1;
            local_2f0.DynamicMeshBoundsIndex = -1;
            local_2f0.TessellationDisablingShadowMapMeshSize = 0.0;
            local_2f0.SegmentIndex = -1;
            local_2f0.MeshIdInPrimitive = 0;
            local_2f0.LODIndex = -1;
            local_2f0.VisualizeHLODIndex = -1;
            local_2f0.VisualizeLODIndex = -1;
            local_2f0.Elements.ArrayNum = 1;
            DefaultConstructItems<FMeshBatchElement,int>(&local_2f0,1);
            uVar12 = 0;
            if ((int)(char)FVar2 < (this->AvailableMaterials).ArrayNum) {
              uVar12 = (uint)~(int)(char)FVar2 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            bVar6 = GetMeshElementForFixedGrid
                              (this,iVar11,
                               *(FMaterialRenderProxy **)
                                ((this->AvailableMaterials).AllocatorInstance.Data +
                                (longlong)(char)FVar2 * 8),&local_2f0,&this->StaticBatchParamArray);
            if (bVar6) {
              local_2f0.RuntimeVirtualTextureMaterialType = (uint)local_3f7;
              local_2f0.bRenderToVirtualTexture = 1;
              (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_2f0,fVar4);
            }
            FVar8 = (ForElementType<FMeshBatchElement>)&local_2f0;
            if (local_2f0.Elements.AllocatorInstance.SecondaryData !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FVar8 = local_2f0.Elements.AllocatorInstance.SecondaryData;
            }
            DestructItems<FMeshBatchElement,int>
                      ((FMeshBatchElement *)FVar8,local_2f0.Elements.ArrayNum);
            if (local_2f0.Elements.AllocatorInstance.SecondaryData !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FMemory::Free((void *)local_2f0.Elements.AllocatorInstance.SecondaryData);
            }
            iVar11 = iVar11 + 1;
            pbVar14 = local_3e8;
          } while (iVar11 <= this->LastVirtualTextureLOD);
        }
        pbVar14 = pbVar14 + 1;
        uVar7 = (ulonglong)local_3f0;
      }
      if (((this->LODIndexToMaterialIndex).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = *(this->LODIndexToMaterialIndex).AllocatorInstance.Data;
      FMeshBatch::FMeshBatch(&local_130);
      uVar12 = 0;
      if ((int)(char)FVar2 < (this->AvailableMaterials).ArrayNum) {
        uVar12 = (uint)~(int)(char)FVar2 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar6 = GetMeshElementForFixedGrid
                        (this,0,*(FMaterialRenderProxy **)
                                 ((this->AvailableMaterials).AllocatorInstance.Data +
                                 (longlong)(char)FVar2 * 8),&local_130,&this->StaticBatchParamArray)
      ;
      if (bVar6) {
        local_130.bUseForWaterInfoTextureDepth = 1;
        (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_130,fVar4);
      }
      FVar8 = (ForElementType<FMeshBatchElement>)&local_130;
      if (local_130.Elements.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar8 = local_130.Elements.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar8,local_130.Elements.ArrayNum);
      if (local_130.Elements.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FMemory::Free((void *)local_130.Elements.AllocatorInstance.SecondaryData);
      }
      FMeshBatch::FMeshBatch(&local_3d0);
      bVar6 = GetStaticMeshElement<TArray<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_>_>
                        (this,0,false,&local_3d0,&this->StaticBatchParamArray);
      if (bVar6) {
        local_3d0.VertexFactory = (FVertexFactory *)this->FixedGridVertexFactory;
        local_3d0.bUseForLumenSurfaceCacheCapture = 1;
        local_3d0.bRenderToVirtualTexture = 0;
        local_3d0.bDitheredLODTransition = 0;
        local_3d0.bUseAsOccluder = 0;
        local_3d0.bUseForDepthPass = 0;
        local_3d0.bUseForMaterial = 0;
        local_3d0.CastShadow = 0;
        (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_3d0,fVar4);
      }
      FVar8 = (ForElementType<FMeshBatchElement>)&local_3d0;
      if (local_3d0.Elements.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar8 = local_3d0.Elements.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar8,local_3d0.Elements.ArrayNum);
      if (local_3d0.Elements.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FMemory::Free((void *)local_3d0.Elements.AllocatorInstance.SecondaryData);
      }
    }
    uVar7 = 0;
    if ((this->SharedBuffers->GrassIndexBuffer != (FIndexBuffer *)0x0) &&
       ((this->field_0x80 & 0x40) != 0)) {
      iVar11 = 1;
      if (this->SubsectionSizeVerts != 0) {
        iVar11 = this->SubsectionSizeVerts;
      }
      uVar15 = (ulonglong)(iVar11 - 1) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (int)lVar13;
      uVar15 = uVar7;
      local_3e0 = iVar11;
      if (0 < iVar11) {
        do {
          uVar10 = (uint)uVar7;
          uVar12 = 0;
          if ((int)uVar10 < (this->GrassMeshBatch).Elements.ArrayNum) {
            uVar12 = ~uVar10 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar8 = (this->GrassMeshBatch).Elements.AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<FMeshBatchElement>)&this->GrassMeshBatch;
          if (FVar8 != (ForElementType<FMeshBatchElement>)0x0) {
            FVar9 = FVar8;
          }
          uVar7 = (ulonglong)(uVar10 + 1);
          *(undefined8 *)(uVar15 + (longlong)FVar9) = *(undefined8 *)&this->field_0x258;
          uVar15 = uVar15 + 0x98;
        } while ((int)(uVar10 + 1) < iVar11);
      }
    }
    uVar7 = (ulonglong)this->FirstLOD;
    if (this->FirstLOD <= this->LastLOD) {
      lVar13 = uVar7 * 4;
      do {
        local_210.Elements.AllocatorInstance.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
        local_210.bUseForLumenSurfaceCacheCapture = 0;
        local_210.bUseForWaterInfoTextureDepth = 0;
        local_210.bViewDependentArguments = 0;
        local_210.bForceTwoSidedInRayTracing = 0;
        local_210.CastRayTracedShadow = 1;
        local_210.bOverlayMaterial = 0;
        local_210.RuntimeVirtualTextureMaterialType = 0;
        local_210.bRenderToVirtualTexture = 0;
        local_210.bDitheredLODTransition = 0;
        local_210.bSelectable = 1;
        local_210.bUseSelectionOutline = 1;
        local_210.bUseWireframeSelectionColoring = 0;
        local_210.bCanApplyViewModeOverrides = 0;
        local_210.DepthPriorityGroup = 0;
        local_210.Type = 0;
        local_210.bWireframe = 0;
        local_210.bUseAsOccluder = 1;
        local_210.bUseForDepthPass = 1;
        local_210.bUseForMaterial = 1;
        local_210.CastShadow = 1;
        local_210.bDisableBackfaceCulling = 0;
        local_210.ReverseCulling = 0;
        local_210.Elements.ArrayMax = 1;
        local_210.LCI = (FLightCacheInterface *)0x0;
        local_210.VertexFactory = (FVertexFactory *)0x0;
        local_210.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
        local_210.BatchHitProxyId.Index = -1;
        local_210.DynamicMeshBoundsIndex = -1;
        local_210.TessellationDisablingShadowMapMeshSize = 0.0;
        local_210.SegmentIndex = -1;
        local_210.MeshIdInPrimitive = 0;
        local_210.LODIndex = -1;
        local_210.VisualizeHLODIndex = -1;
        local_210.VisualizeLODIndex = -1;
        local_210.Elements.ArrayNum = 1;
        DefaultConstructItems<FMeshBatchElement,int>(&local_210,1);
        uVar12 = (uint)uVar7;
        bVar6 = GetStaticMeshElement<TArray<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_>_>
                          (this,uVar12,false,&local_210,&this->StaticBatchParamArray);
        if (bVar6) {
          pcVar3 = *(code **)((longlong)*param_1 + 0x18);
          fVar16 = fVar4;
          if (uVar12 != this->FirstLOD) {
            uVar10 = 0;
            if ((int)uVar12 < (this->LODScreenRatioSquared).ArrayNum) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar16 = SQRT(*(float *)((this->LODScreenRatioSquared).AllocatorInstance.Data + lVar13))
            ;
            fVar16 = fVar16 + fVar16;
          }
          (*pcVar3)(param_1,&local_210,fVar16);
        }
        FVar8 = (ForElementType<FMeshBatchElement>)&local_210;
        if (local_210.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar8 = local_210.Elements.AllocatorInstance.SecondaryData;
        }
        DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar8,local_210.Elements.ArrayNum)
        ;
        if (local_210.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FMemory::Free((void *)local_210.Elements.AllocatorInstance.SecondaryData);
        }
        uVar7 = (ulonglong)(uVar12 + 1);
        lVar13 = lVar13 + 4;
      } while ((int)(uVar12 + 1) <= this->LastLOD);
    }
    if (((int)uStack_3f4 < (this->StaticBatchParamArray).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StaticBatchParamArray.Num() <= TotalBatchCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                           ,0x9f0,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// GetComponentResolution @ 145f8e920

int __thiscall
FLandscapeComponentSceneProxy::GetComponentResolution(FLandscapeComponentSceneProxy *this)

{
  return *(int *)&this->field_0xa0;
}

// GetDynamicMeshElements @ 145f8e960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeComponentSceneProxy::GetDynamicMeshElements
          (FLandscapeComponentSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  TArray<FLandscapeBatchElementParams,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  undefined4 uVar5;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar6;
  FSceneView *pFVar7;
  UTexture *this_00;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  FName FVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  FNameEntryId FVar20;
  uint uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLandscapeComponentSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_FLandscapeComponentSceneProxy_GetMeshElements>
  FVar23;
  FThreadSafeStaticStat<FStat_STAT_LandscapeDynamicDrawTime> FVar24;
  FLandscapeRenderSystem **ppFVar25;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar26;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar27;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar28;
  FColoredMaterialRenderProxy *this_01;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar29;
  FColoredMaterialRenderProxy *pFVar30;
  FPrimitiveDrawInterface *pFVar31;
  FThreadSafeStaticStat<FStat_STAT_LandscapeComponentRenderPasses> FVar32;
  FThreadStats *pFVar33;
  FThreadStatsPool *pFVar34;
  FThreadSafeStaticStat<FStat_STAT_LandscapeDrawCalls> FVar35;
  FThreadSafeStaticStat<FStat_STAT_LandscapeTriangles> FVar36;
  FTextureResource *pFVar37;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  int iVar42;
  FMeshBatch *this_02;
  uchar auVar43 [8];
  FScriptContainerElement *pFVar44;
  FColoredMaterialRenderProxy *pFVar45;
  FName FVar46;
  FColoredMaterialRenderProxy *pFVar47;
  FName FVar48;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar49;
  uint uVar50;
  FColoredMaterialRenderProxy *pFVar51;
  FName FVar52;
  bool bVar53;
  float fVar54;
  float fVar55;
  undefined1 auStackY_298 [32];
  int local_234;
  int local_230;
  undefined1 local_22c;
  undefined1 local_22b [3];
  uint local_228;
  FName local_220;
  uint local_218;
  int local_214;
  uint local_210;
  FMeshElementCollector *local_208;
  uint local_200;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FColor_u_0 local_1d8;
  FColor_u_0 local_1d4;
  FSceneView *local_1d0;
  FString local_1c8;
  FName local_1b8;
  FNameEntryId local_1b0;
  uint uStack_1ac;
  FName local_1a8;
  FName local_1a0;
  FName local_190;
  FLinearColor_u_0 local_180;
  FName local_170;
  FName local_168;
  FName local_160;
  undefined1 local_158 [8];
  FStatMessage local_150;
  FStatMessage local_140;
  FStatMessage local_130;
  FString local_120;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FLinearColor_u_0 local_e0;
  FString local_d0;
  FString local_c0;
  TVector<double>_u_0 local_b0;
  double local_98;
  double local_90;
  double local_88;
  undefined1 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar51 = (FColoredMaterialRenderProxy *)0x0;
  local_208 = param_4;
  uVar50 = 0;
  local_210 = param_3;
  local_1f8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FLandscapeComponentSceneProxy_GetMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLandscapeComponentSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_FLandscapeComponentSceneProxy_GetMeshElements>
         )0x0) {
      pFVar22 = ::FName::FName(&local_110,"STAT_FLandscapeComponentSceneProxy_GetMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FLandscapeComponentSceneProxy_GetMeshElements,*pFVar22,
                 L"STAT_FLandscapeComponentSceneProxy_GetMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar23 = StatPtr_STAT_FLandscapeComponentSceneProxy_GetMeshElements;
  if (StatPtr_STAT_FLandscapeComponentSceneProxy_GetMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLandscapeComponentSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_FLandscapeComponentSceneProxy_GetMeshElements>
       )0x0) {
    pFVar22 = ::FName::FName(&local_108,"STAT_FLandscapeComponentSceneProxy_GetMeshElements");
    FVar23 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FLandscapeComponentSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_FLandscapeComponentSceneProxy_GetMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FLandscapeComponentSceneProxy_GetMeshElements,*pFVar22,
                          L"STAT_FLandscapeComponentSceneProxy_GetMeshElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar46 = *(FName *)FVar23;
  bVar12 = false;
  bVar14 = false;
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  bVar18 = false;
  bVar11 = false;
  if ((FVar46.ComparisonIndex.Value.Value == 0) && (FVar46.Number == 0)) {
LAB_145f8eb0c:
    bVar14 = bVar11;
    bVar12 = bVar18;
    bVar18 = false;
    local_1e0 = local_1a0;
    FVar46 = local_1a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d8._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar12 = false;
      bVar14 = true;
      bVar18 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a8.ComparisonIndex.Value = FVar46.ComparisonIndex.Value.Value;
        local_1a8.Number = FVar46.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a8,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                   ,0xa0f);
        bVar12 = true;
        bVar14 = true;
        bVar18 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145f8eb0c;
    local_1e0 = FVar46;
    FThreadStats::AddMessage(FVar46,CycleScopeStart);
    bVar18 = true;
  }
  FVar24 = StatPtr_STAT_LandscapeDynamicDrawTime;
  if (StatPtr_STAT_LandscapeDynamicDrawTime ==
      (FThreadSafeStaticStat<FStat_STAT_LandscapeDynamicDrawTime>)0x0) {
    pFVar22 = ::FName::FName(&local_100,"STAT_LandscapeDynamicDrawTime");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_LandscapeDynamicDrawTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeDynamicDrawTime,*pFVar22
                        ,L"Dynamic Draw Time","STATGROUP_Landscape","STATCAT_Advanced",L"Landscape",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar48 = *(FName *)FVar24;
  bVar11 = false;
  bVar13 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar17 = false;
  bVar53 = false;
  if ((FVar48.ComparisonIndex.Value.Value != 0) || (FVar48.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d4._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar11 = false;
      bVar13 = true;
      bVar17 = false;
      bVar53 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar48.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar48.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                   ,0xa10);
        bVar11 = true;
        bVar13 = true;
        bVar17 = true;
        bVar53 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1e8 = FVar48;
      FThreadStats::AddMessage(FVar48,CycleScopeStart);
      bVar17 = true;
      goto LAB_145f8ec4b;
    }
  }
  bVar13 = bVar53;
  bVar11 = bVar17;
  bVar17 = false;
  local_1e8 = local_190;
  FVar48 = local_190;
LAB_145f8ec4b:
  if (this->field_0x2b9 != '\0') {
    local_234 = 0;
    local_230 = 0;
    local_214 = 0;
    ppFVar25 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
               ::FindChecked((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                              *)&LandscapeRenderSystems,*(uint *)&this->field_0x298);
    local_218 = 0;
    local_1d0 = (FSceneView *)*ppFVar25;
    if (0 < local_1f8->ArrayNum) {
      local_228 = 1;
      local_1f0.ComparisonIndex.Value = 0;
      local_1f0.Number = 0;
      pFVar45 = pFVar51;
      pFVar47 = pFVar51;
      pTVar49 = local_1f8;
      pFVar30 = pFVar51;
      uVar41 = local_210;
      do {
        uVar21 = (uint)pFVar30;
        if ((uVar41 & local_228) != 0) {
          paVar6 = &param_4->OneFrameResources->Next;
          aVar26 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x28,8);
          *(undefined8 *)((longlong)aVar26 + 8) = 0;
          *(undefined ***)aVar26 =
               &
               ___7__TObject_VFLandscapeElementParamArray_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar27.Next = *paVar6;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar26 + 8) = TVar27.Next;
            LOCK();
            aVar28 = *paVar6;
            bVar53 = TVar27.Next == aVar28;
            if (bVar53) {
              *paVar6 = aVar26;
              aVar28 = TVar27.Next;
            }
            UNLOCK();
            TVar27.Next = aVar28;
          } while (!bVar53);
          pTVar1 = (TArray<FLandscapeBatchElementParams,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                    *)((longlong)aVar26 + 0x18);
          (pTVar1->AllocatorInstance).Data = (FLandscapeBatchElementParams *)0x0;
          *(undefined ***)((longlong)aVar26 + 0x10) = &___7FLandscapeElementParamArray__6B_;
          *(int *)((longlong)aVar26 + 0x20) = 0;
          *(int *)((longlong)aVar26 + 0x24) = 0;
          iVar19 = UE::Core::Private::
                   ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLandscapeBatchElementParams>_>
                             (0x30,8,1,(ForElementType<FLandscapeBatchElementParams> *)pTVar1,
                              (int *)((longlong)aVar26 + 0x20),(int *)((longlong)aVar26 + 0x24));
          DefaultConstructItems<FLandscapeBatchElementParams,int>
                    ((pTVar1->AllocatorInstance).Data + iVar19,1);
          pTVar49 = local_1f8;
          uVar41 = uVar50;
          if ((int)uVar21 < local_1f8->ArrayNum) {
            uVar41 = ~uVar21 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar53)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = *(FSceneView **)((pTVar49->AllocatorInstance).Data + (longlong)local_1f0);
          local_220 = (FName)pFVar7->Family;
          local_200 = CONCAT31((uint3)(*(uint *)((longlong)local_220 + 0x58) >> 9),
                               (char)(*(uint *)((longlong)local_220 + 0x58) >> 1)) & 0xffffff01;
          fVar54 = FLandscapeRenderSystem::GetSectionLODValue
                             ((FLandscapeRenderSystem *)local_1d0,pFVar7,
                              (TIntPoint<int>)*(TIntPoint<int>_u_0 *)&this->field_0x2a0);
          iVar19 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                   ::Add(&local_208->MeshBatchStorage,1);
          uVar41 = iVar19 / 0x49;
          uVar21 = 0;
          if ((int)uVar41 < (local_208->MeshBatchStorage).Chunks.Array.ArrayNum) {
            uVar21 = ~uVar41 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar53)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          this_02 = (FMeshBatch *)
                    ((longlong)
                     (local_208->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar41]
                    + (ulonglong)(uint)(iVar19 % 0x49) * 0xe0);
          GetStaticMeshElement<TArray<FLandscapeBatchElementParams,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    (this,(int)fVar54,false,this_02,pTVar1);
          bVar53 = AllowDebugViewmodes();
          FVar46 = local_220;
          if ((bVar53) &&
             ((pFVar7->Family->EngineShowFlags).CollisionVisibility != 0 ||
              (pFVar7->Family->EngineShowFlags).CollisionPawn != 0)) {
            if (((pFVar7->Family->EngineShowFlags).CollisionPawn == 0) ||
               ((this->CollisionResponse).field0_0x0._s_0.Pawn == '\0')) {
              bVar53 = false;
            }
            else {
              bVar53 = true;
            }
            if (((pFVar7->Family->EngineShowFlags).CollisionVisibility == 0) ||
               ((this->CollisionResponse).field0_0x0._s_0.Visibility == '\0')) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            if ((bVar53) || (uVar21 = local_218, bVar10)) {
              this_01 = ::operator_new(0xe0);
              pFVar30 = pFVar51;
              if (this_01 != (FColoredMaterialRenderProxy *)0x0) {
                FVar20 = FNameEntryId::FromValidEName((EName)local_158);
                local_e0._s_0.R = (float)*(undefined4 *)&this->field_0x30;
                local_e0._s_0.G = (float)*(undefined4 *)&this->field_0x34;
                local_e0._s_0.B = (float)*(undefined4 *)&this->field_0x38;
                local_e0._s_0.A = (float)*(undefined4 *)&this->field_0x3c;
                uStack_1ac = 0;
                local_1b0.Value = *(uint *)CONCAT44(extraout_var,FVar20.Value);
                pFVar29 = (FMaterialRenderProxy *)
                          (**(code **)(((GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0.
                                       DebugPtr)->_padding_ + 0x310))();
                FVar46.Number = uStack_1ac;
                FVar46.ComparisonIndex.Value = local_1b0.Value;
                pFVar30 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                    (this_01,pFVar29,(FLinearColor *)&local_e0._s_0,FVar46);
              }
              FMeshElementCollector::RegisterOneFrameMaterialProxy
                        (local_208,(FMaterialRenderProxy *)pFVar30);
              uVar21 = local_218;
              this_02->bCanApplyViewModeOverrides = 1;
              this_02->MaterialRenderProxy = (FMaterialRenderProxy *)pFVar30;
              this_02->bUseWireframeSelectionColoring = -(uint)((this->field_0x79 & 6) != 0) >> 0xe;
              FMeshElementCollector::AddMesh(local_208,local_218,this_02);
              pFVar47 = (FColoredMaterialRenderProxy *)(ulonglong)((int)pFVar47 + 1);
              iVar19 = FMeshBatch::GetNumPrimitives(this_02);
              pFVar45 = (FColoredMaterialRenderProxy *)(ulonglong)(uint)((int)pFVar45 + iVar19);
              local_214 = local_214 + (this_02->Elements).ArrayNum;
              FVar46 = local_220;
            }
          }
          else {
            bVar53 = IsRichView((FSceneViewFamily *)local_220);
            if ((bVar53) ||
               ((((GLandscapeDebugOptions.bDisableStatic != false || ((char)local_200 != '\0')) ||
                 ((this->field_0x79 & 6) != 0)) ||
                ((uVar21 = local_218, pFVar7->CustomRenderPass != (FCustomRenderPassBase *)0x0 &&
                 (iVar19 = GetViewLodOverride(pFVar7,*(uint *)&this->field_0x298),
                 uVar21 = local_218, -1 < iVar19)))))) {
              uVar21 = local_218;
              this_02->bCanApplyViewModeOverrides = 1;
              this_02->bUseWireframeSelectionColoring = -(uint)((this->field_0x79 & 6) != 0) >> 0xe;
              FMeshElementCollector::AddMesh(local_208,local_218,this_02);
              pFVar47 = (FColoredMaterialRenderProxy *)(ulonglong)((int)pFVar47 + 1);
              iVar19 = FMeshBatch::GetNumPrimitives(this_02);
              pFVar45 = (FColoredMaterialRenderProxy *)(ulonglong)(uint)((int)pFVar45 + iVar19);
              local_214 = local_214 + (this_02->Elements).ArrayNum;
            }
          }
          if (GLandscapeDebugOptions.bShowPatches != false) {
            local_b0._s_0.Y = *(double *)&this->field_0x198 - *(double *)&this->field_0x1b0;
            local_90 = *(double *)&this->field_0x198 + *(double *)&this->field_0x1b0;
            local_180._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
            local_180._s_0.G = FLinearColor::sRGBToLinearTable[0xff];
            local_180._s_0.B = FLinearColor::sRGBToLinearTable[0];
            local_b0._s_0.X = *(double *)&this->field_0x190 - *(double *)&this->field_0x1a8;
            local_98 = *(double *)&this->field_0x190 + *(double *)&this->field_0x1a8;
            local_180._s_0.A = 1.0;
            local_80 = 1;
            local_b0._s_0.Z = *(double *)&this->field_0x1a0 - *(double *)&this->field_0x1b8;
            local_88 = *(double *)&this->field_0x1a0 + *(double *)&this->field_0x1b8;
            pFVar31 = FMeshElementCollector::GetPDI(local_208,uVar21);
            DrawWireBox(pFVar31,(TBox<double> *)&local_b0._s_0,(FLinearColor *)&local_180._s_0,'\0',
                        0.0,0.0,false);
          }
          pTVar49 = local_1f8;
          param_4 = local_208;
          uVar41 = local_210;
          if ((*(uint *)((longlong)FVar46 + 0x54) & 0x10000000) != 0) {
            bVar4 = this->field_0x79;
            pFVar31 = FMeshElementCollector::GetPDI(local_208,uVar21);
            FPrimitiveSceneProxy::RenderBounds
                      ((FPrimitiveSceneProxy *)this,pFVar31,
                       (FEngineShowFlags *)((longlong)FVar46 + 0x48),
                       (TBoxSphereBounds<double,double> *)&this->field_0x190,(bVar4 & 6) != 0);
            pTVar49 = local_1f8;
            param_4 = local_208;
            uVar41 = local_210;
          }
        }
        FVar46 = local_1e0;
        FVar48 = local_1e8;
        local_218 = uVar21 + 1;
        pFVar30 = (FColoredMaterialRenderProxy *)(ulonglong)local_218;
        local_228 = local_228 << 1 | (uint)((int)local_228 < 0);
        local_1f0 = (FName)((longlong)local_1f0 + 8);
      } while ((int)local_218 < pTVar49->ArrayNum);
      local_234 = (int)pFVar47;
      local_230 = (int)pFVar45;
      if ((local_234 != 0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar32 = StatPtr_STAT_LandscapeComponentRenderPasses;
        if (StatPtr_STAT_LandscapeComponentRenderPasses ==
            (FThreadSafeStaticStat<FStat_STAT_LandscapeComponentRenderPasses>)0x0) {
          pFVar22 = ::FName::FName(&local_f8,"STAT_LandscapeComponentRenderPasses");
          FVar32 = (FThreadSafeStaticStat<FStat_STAT_LandscapeComponentRenderPasses>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_LandscapeComponentRenderPasses,*pFVar22,L"Render Passes"
                              ,"STATGROUP_Landscape","STATCAT_Advanced",L"Landscape",true,true,
                              ST_int64,false,false,MCR_Invalid);
        }
        FVar52 = *(FName *)FVar32;
        local_220 = FVar52;
        if (((FVar52 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar33 == (FThreadStats *)0x0) {
            pFVar34 = FThreadStatsPool::Get();
            pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
          }
          local_150.NameAndInfo.Number = FVar52.Number & 0xffffafff | 0xa000;
          local_170 = FVar52;
          local_150.StatData.Pad = (uchar  [8])(longlong)local_234;
          local_150.NameAndInfo.Index.Value = FVar52.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar33,&local_150);
          FStatsTrace::Add(&local_170,(longlong)local_234);
          if (pFVar33->ScopeCount == 0) {
            FThreadStats::Flush(pFVar33,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar33,false,false);
          }
        }
      }
      if ((local_214 != 0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar35 = StatPtr_STAT_LandscapeDrawCalls;
        if (StatPtr_STAT_LandscapeDrawCalls ==
            (FThreadSafeStaticStat<FStat_STAT_LandscapeDrawCalls>)0x0) {
          pFVar22 = ::FName::FName(&local_f0,"STAT_LandscapeDrawCalls");
          FVar35 = (FThreadSafeStaticStat<FStat_STAT_LandscapeDrawCalls>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeDrawCalls,*pFVar22
                              ,L"DrawCalls","STATGROUP_Landscape","STATCAT_Advanced",L"Landscape",
                              true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar52 = *(FName *)FVar35;
        local_220 = FVar52;
        if (((FVar52 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar33 == (FThreadStats *)0x0) {
            pFVar34 = FThreadStatsPool::Get();
            pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
          }
          local_140.NameAndInfo.Number = FVar52.Number & 0xffffafff | 0xa000;
          auVar43 = (uchar  [8])(longlong)local_214;
          local_168 = FVar52;
          local_140.StatData.Pad = auVar43;
          local_140.NameAndInfo.Index.Value = FVar52.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar33,&local_140);
          FStatsTrace::Add(&local_168,(long64)auVar43);
          if (pFVar33->ScopeCount == 0) {
            FThreadStats::Flush(pFVar33,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar33,false,false);
          }
        }
      }
    }
    local_230 = local_230 * local_234;
    if ((local_230 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar36 = StatPtr_STAT_LandscapeTriangles;
      if (StatPtr_STAT_LandscapeTriangles ==
          (FThreadSafeStaticStat<FStat_STAT_LandscapeTriangles>)0x0) {
        pFVar22 = ::FName::FName(&local_e8,"STAT_LandscapeTriangles");
        FVar36 = (FThreadSafeStaticStat<FStat_STAT_LandscapeTriangles>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeTriangles,*pFVar22,
                            L"Processed Triangles","STATGROUP_Landscape","STATCAT_Advanced",
                            L"Landscape",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar52 = *(FName *)FVar36;
      local_220 = FVar52;
      if (((FVar52 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar33 == (FThreadStats *)0x0) {
          pFVar34 = FThreadStatsPool::Get();
          pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
        }
        local_130.NameAndInfo.Number = FVar52.Number & 0xffffafff | 0xa000;
        local_160 = FVar52;
        local_130.StatData.Pad = (uchar  [8])(longlong)local_230;
        local_130.NameAndInfo.Index.Value = FVar52.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar33,&local_130);
        FStatsTrace::Add(&local_160,(longlong)local_230);
        if (pFVar33->ScopeCount == 0) {
          FThreadStats::Flush(pFVar33,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar33,false,false);
        }
      }
    }
    fVar54 = __real_3f000000;
    if (GVarDumpLandscapeLODsCurrentFrame == GFrameNumberRenderThread) {
      uVar41 = local_1f8->ArrayNum;
      uVar40 = (ulonglong)(int)uVar41;
      FVar52 = (FName)(local_1f8->AllocatorInstance).Data;
      local_1f0 = (FName)((longlong)FVar52 + uVar40 * 8);
LAB_145f8f634:
      FVar16 = local_1f0;
      local_220 = FVar52;
      if (local_1f8->ArrayNum != (int)uVar40) {
        local_22c = 0;
        `TCheckedPointerIterator<FSceneView_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_22c);
      }
      FVar46 = local_1e0;
      FVar48 = local_1e8;
      if (FVar52 != FVar16) {
        local_1d0 = *(FSceneView **)FVar52;
        fVar55 = (float)(**(code **)(*(longlong *)&this->field_0x280 + 8))();
        local_210 = (int)ROUND((fVar55 + fVar55) - fVar54) >> 1;
        local_200 = this->ComponentSizeQuads + 1 >> ((byte)local_210 & 0x1f);
        if ((this->HeightmapTexture != (UTexture2D *)0x0) &&
           (pFVar37 = UTexture::GetResource((UTexture *)this->HeightmapTexture),
           pFVar37 != (FTextureResource *)0x0)) {
          pFVar37 = UTexture::GetResource((UTexture *)this->HeightmapTexture);
          if ((longlong *)pFVar37->_padding_ != (longlong *)0x0) {
            lVar38 = (**(code **)(*(longlong *)pFVar37->_padding_ + 0x20))();
            if (*(char *)(lVar38 + 0x30) != '\0') {
              local_228 = 1 << (*(char *)(lVar38 + 0x30) - 1U & 0x1f);
              goto LAB_145f8f6e4;
            }
          }
        }
        local_228 = 0;
LAB_145f8f6e4:
        pFVar44 = (this->WeightmapTextures).AllocatorInstance.Data;
        iVar19 = (this->WeightmapTextures).ArrayNum;
        pFVar3 = pFVar44 + (longlong)iVar19 * 8;
        pFVar45 = pFVar51;
LAB_145f8f700:
        do {
          if ((this->WeightmapTextures).ArrayNum != iVar19) {
            local_22b[0] = 0;
            `TCheckedPointerIterator<UTexture2D_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_22b);
          }
          uVar21 = (uint)pFVar45;
          if (pFVar44 == pFVar3) goto LAB_145f8f785;
          this_00 = *(UTexture **)pFVar44;
          if ((this_00 != (UTexture *)0x0) &&
             (pFVar37 = UTexture::GetResource(this_00), pFVar37 != (FTextureResource *)0x0)) {
            pFVar37 = UTexture::GetResource(this_00);
            if ((longlong *)pFVar37->_padding_ != (longlong *)0x0) {
              lVar38 = (**(code **)(*(longlong *)pFVar37->_padding_ + 0x20))();
              uVar39 = (uint)*(byte *)(lVar38 + 0x30);
              if (*(byte *)(lVar38 + 0x30) < uVar21) {
                uVar39 = uVar21;
              }
              pFVar44 = pFVar44 + 8;
              pFVar45 = (FColoredMaterialRenderProxy *)(ulonglong)uVar39;
              goto LAB_145f8f700;
            }
            uVar39 = 0;
            if (uVar21 != 0) {
              uVar39 = uVar21;
            }
            pFVar45 = (FColoredMaterialRenderProxy *)(ulonglong)uVar39;
          }
          pFVar44 = pFVar44 + 8;
        } while( true );
      }
      if (GVarDumpLandscapeLODsDetails != false) {
        iVar19 = this->NumRelevantMips;
        local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = 0;
        local_1c8.Data.ArrayMax = 0;
        if (0 < iVar19 + -1) {
          do {
            iVar9 = (int)pFVar51;
            iVar42 = iVar9 + 1;
            if (iVar42 < iVar19) {
              do {
                uVar21 = UE::Landscape::Private::ComputeMipToMipMaxDeltasIndex(iVar9,iVar42,iVar19);
                uVar41 = uVar50;
                if ((int)uVar21 < (this->WorldSpaceMipToMipMaxDeltas).ArrayNum) {
                  uVar41 = ~uVar21 >> 0x1f;
                }
                if ((uVar41 == 0) &&
                   (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar53)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                ::FString::PrintfImpl(&local_120,L"- %i->%i: %f\n");
                uVar41 = local_120.Data.ArrayNum - 1;
                if (local_120.Data.ArrayNum == 0) {
                  uVar41 = uVar50;
                }
                ::FString::AppendChars
                          (&local_1c8,(wchar_t *)local_120.Data.AllocatorInstance.Data,uVar41);
                if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_120.Data.AllocatorInstance.Data);
                }
                iVar19 = this->NumRelevantMips;
                iVar42 = iVar42 + 1;
              } while (iVar42 < iVar19);
            }
            pFVar51 = (FColoredMaterialRenderProxy *)(ulonglong)(iVar9 + 1U);
          } while ((int)(iVar9 + 1U) < iVar19 + -1);
        }
        if (3 < (byte)LogLandscape._0_1_) {
          ::FName::ToString(&this->DebugName,&local_c0);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar48,CycleScopeEnd);
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar46,CycleScopeEnd);
  }
  return;
LAB_145f8f785:
  if (3 < (byte)LogLandscape._0_1_) {
    ::FName::ToString(&this->DebugName,&local_d0);
    FSceneView::GetViewKey(local_1d0);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  uVar40 = (ulonglong)uVar41;
  FVar52 = (FName)((longlong)local_220 + 8);
  goto LAB_145f8f634;
}

// GetDynamicRayTracingInstances @ 145f8fb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FLandscapeComponentSceneProxy::GetDynamicRayTracingInstances
          (FLandscapeComponentSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  ForElementType<FLandscapeBatchElementParams> *pFVar1;
  TPimplPtr<FLandscapeRayTracingImpl,0> *pTVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FSceneView *pFVar7;
  FLandscapeRayTracingImpl *pFVar8;
  FSceneViewStateInterface *pFVar9;
  longlong *plVar10;
  FRHIUniformBuffer *this_00;
  FRHIUniformBuffer *this_01;
  FLandscapeSharedBuffers *pFVar11;
  FRHIBuffer *this_02;
  FRHIResource *pFVar12;
  code *pcVar13;
  undefined8 uVar14;
  uint uVar15;
  TConsoleVariableData<int> *pTVar16;
  ForAnyElementType FVar17;
  FLandscapeRenderSystem *this_03;
  bool bVar18;
  bool bVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  FLandscapeRenderSystem **ppFVar25;
  FLandscapeRayTracingImpl *pFVar26;
  FLandscapeRayTracingState *pFVar27;
  undefined8 *puVar28;
  longlong lVar29;
  FMaterial *this_04;
  FMaterialShaderMap *pFVar30;
  ForElementType<FMeshBatchElement> FVar31;
  longlong lVar32;
  ForElementType<FMeshBatchElement> FVar33;
  int iVar34;
  FRHIBuffer *pFVar35;
  int iVar36;
  uint uVar37;
  FLandscapeBatchElementParams *pFVar38;
  undefined1 uVar39;
  byte bVar40;
  FMaterialRenderProxy *this_05;
  FRayTracingGeometry *this_06;
  bool bVar41;
  float fVar42;
  undefined1 auStackY_5b8 [32];
  int local_560;
  int local_558;
  uint local_554;
  longlong local_550;
  int local_540;
  int local_53c;
  ForAnyElementType local_510;
  undefined8 local_508;
  FMeshBatch *local_500;
  int iStack_4f8;
  undefined4 uStack_4f4;
  undefined8 local_4f0;
  FScriptContainerElement *local_4e8;
  undefined8 local_4e0;
  uint *local_4d8;
  int iStack_4d0;
  undefined4 uStack_4cc;
  ForAnyElementType local_4c8;
  undefined8 local_4c0;
  TMatrix<double> *local_4b8;
  int iStack_4b0;
  undefined4 uStack_4ac;
  int local_4a8;
  FLandscapeRayTracingState *local_4a0;
  FMaterialRenderProxy *local_498;
  ForElementType<FLandscapeBatchElementParams> *local_490;
  FLandscapeRenderSystem *local_488;
  FMaterial *local_480;
  FMeshBatchElement local_478;
  FRayTracingInstance local_3d8;
  longlong local_368 [2];
  FRayTracingDynamicGeometryUpdateParams local_358;
  FMaterialRenderContext local_2c8;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  undefined1 local_298;
  uint local_294;
  uint local_290;
  uint local_28c;
  FRayTracingGeometry *local_288;
  FRayTracingGeometry *local_280;
  undefined1 local_278;
  uint local_274;
  float local_268 [2];
  float afStack_260 [2];
  float local_258 [2];
  float afStack_250 [2];
  float local_248 [2];
  float afStack_240 [2];
  float local_238 [2];
  float afStack_230 [2];
  undefined1 local_228;
  FRHIBuffer *local_220;
  FMeshBatch local_218;
  FMeshBatch local_138;
  ulonglong local_58;
  
  pTVar16 = CVarRayTracingLandscape.Ref;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  if (this->field_0x2b9 != '\0') {
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if ((pTVar16->ShadowedValue[1] != 0) && ((this->AvailableMaterials).ArrayNum != 0)) {
      pFVar6 = (param_1->Views).AllocatorInstance.Data;
      iVar4 = (param_1->Views).ArrayNum;
      if ((iVar4 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      uVar5 = param_1->VisibilityMap;
      local_558 = 0;
      if (0 < iVar4) {
        local_554 = 1;
        local_550 = 0;
        do {
          if ((uVar5 & local_554) != 0) {
            if ((local_558 < 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar7 = *(FSceneView **)(pFVar6 + local_550 * 8);
            ppFVar25 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                       ::FindChecked((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                                      *)&LandscapeRenderSystems,*(uint *)&this->field_0x298);
            iVar24 = GLandscapeRayTracingLODBias;
            local_488 = *ppFVar25;
            fVar42 = FLandscapeRenderSystem::GetSectionLODValue
                               (local_488,pFVar7,
                                (TIntPoint<int>)*(TIntPoint<int>_u_0 *)&this->field_0x2a0);
            iVar34 = (int)fVar42 + iVar24;
            bVar40 = (byte)this->LastLOD;
            if (iVar34 < this->LastLOD) {
              bVar40 = (byte)iVar34;
            }
            if ((-1 < (char)bVar40) &&
               ((int)(char)bVar40 < (this->LODIndexToMaterialIndex).ArrayNum)) {
              uVar21 = 0;
              if ((int)(char)bVar40 < (this->LODIndexToMaterialIndex).ArrayNum) {
                uVar21 = (uint)~(int)(char)bVar40 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              FVar3 = (this->LODIndexToMaterialIndex).AllocatorInstance.Data[(char)bVar40];
              if (FVar3 != (FScriptContainerElement)0xff) {
                uVar21 = 0;
                if ((int)(char)FVar3 < (this->AvailableMaterials).ArrayNum) {
                  uVar21 = (uint)~(int)(char)FVar3 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                this_05 = *(FMaterialRenderProxy **)
                           ((this->AvailableMaterials).AllocatorInstance.Data +
                           (longlong)(char)FVar3 * 8);
                if (this_05 != (FMaterialRenderProxy *)0x0) {
                  uVar21 = (uint)this->SubsectionSizeVerts / (uint)this->NumRayTracingSections >>
                           (bVar40 & 0x1f);
                  local_4a8 = uVar21 + 1;
                  if (0 < local_4a8) {
                    pTVar2 = &this->RayTracingImpl;
                    if (pTVar2->Ptr == (FLandscapeRayTracingImpl *)0x0) {
                      pFVar26 = ::operator_new(0x20);
                      if (pFVar26 == (FLandscapeRayTracingImpl *)0x0) {
                        pFVar26 = (FLandscapeRayTracingImpl *)0x0;
                      }
                      else {
                        (pFVar26->PerViewRayTracingState).AllocatorInstance.Data =
                             (FScriptContainerElement *)
                             UE::Core::Private::PimplPtr::DeleterFunc<FLandscapeRayTracingImpl>;
                        (pFVar26->PerViewRayTracingState).ArrayNum = 0;
                        (pFVar26->PerViewRayTracingState).ArrayMax = 0;
                        pFVar26[1].PerViewRayTracingState.AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        pFVar26[1].PerViewRayTracingState.ArrayNum = 0;
                        pFVar26[1].PerViewRayTracingState.ArrayMax = 0;
                      }
                      if ((TPimplPtr<FLandscapeRayTracingImpl,0> *)local_368 == pTVar2) {
                        if (pFVar26 + 1 != (FLandscapeRayTracingImpl *)0x0) goto LAB_145f8fe5a;
                      }
                      else {
                        pFVar8 = pTVar2->Ptr;
                        pTVar2->Ptr = pFVar26 + 1;
                        if (pFVar8 != (FLandscapeRayTracingImpl *)0x0) {
                          pFVar26 = pFVar8 + -1;
LAB_145f8fe5a:
                          (*(code *)(pFVar26->PerViewRayTracingState).AllocatorInstance.Data)();
                        }
                      }
                    }
                    uVar22 = this->SubsectionSizeVerts;
                    uVar23 = this->NumRayTracingSections;
                    pFVar26 = pTVar2->Ptr;
                    iVar34 = this->NumSubsections;
                    pFVar9 = pFVar7->State;
                    if ((param_1->_padding_ == 0) &&
                       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("RHICmdList",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                            ,0x46,L""), bVar18)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    pFVar27 = FLandscapeRayTracingImpl::FindOrCreateRayTracingState
                                        (pFVar26,(FRHICommandListBase *)param_1->_padding_,pFVar9,
                                         iVar34,uVar23,uVar22 / uVar23 + 1);
                    plVar10 = (longlong *)param_1->_padding_;
                    local_4a0 = pFVar27;
                    puVar28 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc
                                        (0x28,8);
                    puVar28[1] = 0;
                    *puVar28 = &
                               ___7__TObject_VFLandscapeElementParamArray_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
                    ;
                    lVar32 = *plVar10;
                    do {
                      puVar28[1] = lVar32;
                      LOCK();
                      lVar29 = *plVar10;
                      bVar18 = lVar32 == lVar29;
                      if (bVar18) {
                        *plVar10 = (longlong)puVar28;
                        lVar29 = lVar32;
                      }
                      UNLOCK();
                      lVar32 = lVar29;
                    } while (!bVar18);
                    pFVar1 = (ForElementType<FLandscapeBatchElementParams> *)(puVar28 + 3);
                    *(undefined4 *)((longlong)puVar28 + 0x24) = 0;
                    *(int *)(puVar28 + 4) = 0;
                    puVar28[2] = &___7FLandscapeElementParamArray__6B_;
                    pFVar1->Data = (FLandscapeBatchElementParams *)0x0;
                    iVar36 = this->NumSubsections * this->NumRayTracingSections;
                    iVar36 = iVar36 * iVar36;
                    local_490 = pFVar1;
                    iVar34 = UE::Core::Private::
                             ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLandscapeBatchElementParams>_>
                                       (0x30,8,iVar36,pFVar1,(int *)(puVar28 + 4),
                                        (int *)((longlong)puVar28 + 0x24));
                    DefaultConstructItems<FLandscapeBatchElementParams,int>
                              (pFVar1->Data + iVar34,iVar36);
                    FMeshBatch::FMeshBatch(&local_218);
                    local_218.VertexFactory = (FVertexFactory *)this->VertexFactory;
                    local_218.CastRayTracedShadow = 1;
                    local_218.bUseForMaterial = 1;
                    local_218.CastShadow = 1;
                    local_218.LCI = (FLightCacheInterface *)(this->ComponentLightInfo).Ptr;
                    local_218.SegmentIndex = 0;
                    FVar31 = (ForElementType<FMeshBatchElement>)&local_218;
                    if (local_218.Elements.AllocatorInstance.SecondaryData !=
                        (ForElementType<FMeshBatchElement>)0x0) {
                      FVar31 = local_218.Elements.AllocatorInstance.SecondaryData;
                    }
                    local_218.MaterialRenderProxy = this_05;
                    DestructItems<FMeshBatchElement,int>
                              ((FMeshBatchElement *)FVar31,local_218.Elements.ArrayNum);
                    local_218.Elements.ArrayNum = 0;
                    if (local_218.Elements.ArrayMax != 0) {
                      UE::Core::Private::
                      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                (0x98,8,0,(ForElementType<FMeshBatchElement> *)&local_218,0,
                                 &local_218.Elements.ArrayMax);
                    }
                    this_03 = local_488;
                    uVar21 = uVar21 * uVar21 * 2;
                    if ((GLandscapeRayTracingGeometryLODsThatUpdateEveryFrame < 0) ||
                       (GLandscapeRayTracingGeometryLODsThatUpdateEveryFrame + iVar24 <
                        (int)(char)bVar40)) {
                      bVar18 = false;
                    }
                    else {
                      bVar18 = true;
                    }
                    bVar41 = pFVar27->CurrentLOD != bVar40;
                    if (bVar41) {
                      bVar18 = true;
                      pFVar27->CurrentLOD = bVar40;
                    }
                    fVar42 = FLandscapeRenderSystem::GetSectionLODBias
                                       (local_488,
                                        (TIntPoint<int>)*(TIntPoint<int>_u_0 *)&this->field_0x2a0);
                    if (fVar42 != pFVar27->HeightmapLODBias) {
                      bVar18 = true;
                      fVar42 = FLandscapeRenderSystem::GetSectionLODBias
                                         (this_03,(TIntPoint<int>)
                                                  *(TIntPoint<int>_u_0 *)&this->field_0x2a0);
                      pFVar27->HeightmapLODBias = fVar42;
                    }
                    fVar42 = FLandscapeRenderSystem::GetSectionLODValue
                                       (this_03,pFVar7,
                                        (TIntPoint<int>)*(TIntPoint<int>_u_0 *)&this->field_0x2a0);
                    if (GLandscapeRayTracingGeometryFractionalLODUpdateThreshold <
                        (float)((uint)(pFVar27->FractionalLOD - fVar42) & uVar15)) {
                      pFVar27->FractionalLOD = fVar42;
                      bVar18 = true;
                    }
                    local_498 = (FMaterialRenderProxy *)0x0;
                    this_04 = FMaterialRenderProxy::GetMaterialWithFallback
                                        (this_05,*(Type *)(*(longlong *)&this->field_0x220 + 8),
                                         &local_498);
                    local_480 = this_04;
                    if ((0 < GLandscapeRayTracingGeometryDetectTextureStreaming) &&
                       (pFVar30 = FMaterial::GetRenderingThreadShaderMap(this_04),
                       (*(byte *)(pFVar30->_padding_ + 0x266) & 0x10) != 0)) {
                      if (local_498 != (FMaterialRenderProxy *)0x0) {
                        this_05 = local_498;
                      }
                      FMaterialRenderContext::FMaterialRenderContext
                                (&local_2c8,this_05,this_04,pFVar7);
                      pFVar30 = FMaterial::GetRenderingThreadShaderMap(this_04);
                      uVar22 = FUniformExpressionSet::GetReferencedTexture2DRHIHash
                                         ((FUniformExpressionSet *)(pFVar30->_padding_ + 0x70),
                                          &local_2c8);
                      if (pFVar27->ReferencedTextureRHIHash != uVar22) {
                        bVar18 = true;
                        pFVar27->ReferencedTextureRHIHash = uVar22;
                      }
                    }
                    iVar24 = this->NumSubsections;
                    iVar34 = 0;
                    if (0 < iVar24) {
                      do {
                        local_560 = (int)(char)bVar40;
                        local_53c = 0;
                        if (0 < iVar24) {
                          do {
                            iVar24 = this->NumRayTracingSections;
                            local_540 = 0;
                            if (0 < iVar24) {
                              do {
                                uVar22 = (uint)(char)bVar40;
                                iVar36 = 0;
                                if (0 < iVar24) {
                                  do {
                                    uVar37 = ((iVar34 * this->NumSubsections + local_53c) * iVar24 +
                                             local_540) * iVar24 + iVar36;
                                    uVar23 = 0;
                                    if ((int)uVar37 < (pFVar27->Sections).ArrayNum) {
                                      uVar23 = ~uVar37 >> 0x1f;
                                    }
                                    if ((uVar23 == 0) &&
                                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar19)) {
                                      pcVar13 = (code *)swi(3);
                                      (*pcVar13)();
                                      return;
                                    }
                                    this_06 = (FRayTracingGeometry *)
                                              ((local_4a0->Sections).AllocatorInstance.Data +
                                              (longlong)(int)uVar37 * 0x138);
                                    uVar23 = 0;
                                    if ((int)uVar37 < *(int *)&local_490[1].Data) {
                                      uVar23 = ~uVar37 >> 0x1f;
                                    }
                                    if ((uVar23 == 0) &&
                                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar19)) {
                                      pcVar13 = (code *)swi(3);
                                      (*pcVar13)();
                                      return;
                                    }
                                    pFVar38 = local_490->Data + (int)uVar37;
                                    pFVar38->LandscapeUniformShaderParametersResource =
                                         &this->LandscapeUniformShaderParameters;
                                    pFVar38->FixedGridUniformShaderParameters =
                                         &this->SharedBuffers->
                                          LandscapeFixedGridUniformShaderParameters;
                                    this_00 = (pFVar38->LandscapeSectionLODUniformParameters).
                                              Reference;
                                    this_01 = (local_488->SectionLODUniformBuffer).Reference;
                                    if (this_00 != this_01) {
                                      (pFVar38->LandscapeSectionLODUniformParameters).Reference =
                                           this_01;
                                      if (this_01 != (FRHIUniformBuffer *)0x0) {
                                        FRHIResource::AddRef((FRHIResource *)this_01);
                                      }
                                      if (this_00 != (FRHIUniformBuffer *)0x0) {
                                        FRHIResource::Release((FRHIResource *)this_00);
                                      }
                                    }
                                    uVar39 = 0;
                                    pFVar38->LandscapeVertexFactoryMVFUniformBuffer =
                                         *(FRHIUniformBuffer **)
                                          (this_06[1].RawDataHeader.Reserved + 4);
                                    pFVar38->CurrentLOD = local_560;
                                    pFVar38->SceneProxy = this;
                                    local_478.PrimitiveIdMode = PrimID_FromPrimitiveSceneInfo;
                                    local_478.VisualizeElementIndex = -1;
                                    local_478.bFetchInstanceCountFromScene = 0;
                                    local_478.bPreserveInstanceOrder = 0;
                                    local_478.bForceInstanceCulling = 0;
                                    local_478.bIsInstanceRuns = 0;
                                    local_478.bIsSplineProxy = 0;
                                    local_478.bUserDataIsColorVertexBuffer = 0;
                                    local_478.InstancedLODRange = 0;
                                    local_478.InstancedLODIndex = 0;
                                    pFVar11 = this->SharedBuffers;
                                    local_478.SkinCacheDebugColor.field0_0x0._s_0 =
                                         FColor::White.field0_0x0;
                                    local_478.PrimitiveUniformBuffer =
                                         *(FRHIUniformBuffer **)&this->field_0x258;
                                    local_478.PrimitiveUniformBufferResource =
                                         (TUniformBuffer<FPrimitiveUniformShaderParameters> *)0x0;
                                    local_478.LooseParametersUniformBuffer.Reference =
                                         (FRHIUniformBuffer *)0x0;
                                    local_478.IndexBuffer = (FIndexBuffer *)0x0;
                                    local_478.DynamicIndexBuffer.IndexBuffer = (FIndexBuffer *)0x0;
                                    local_478.field5_0x30.InstanceRuns = (uint *)0x0;
                                    local_478.VertexFactoryUserData = (void *)0x0;
                                    local_478.IndirectArgsBuffer = (FRHIBuffer *)0x0;
                                    local_478.IndirectArgsOffset = 0;
                                    local_478.NumInstances = 1;
                                    local_478.BaseVertexIndex = 0;
                                    local_478.UserIndex = -1;
                                    local_478.MinScreenSize = 0.0;
                                    local_478.MaxScreenSize = 1.0;
                                    local_478.DynamicPrimitiveData =
                                         (FMeshBatchDynamicPrimitiveData *)0x0;
                                    local_478.DynamicPrimitiveIndex = 0xffffffff;
                                    local_478.DynamicPrimitiveInstanceSceneDataOffset = 0xffffffff;
                                    uVar23 = 0;
                                    if (local_560 < (pFVar11->ZeroOffsetIndexBuffers).ArrayNum) {
                                      uVar23 = ~uVar22 >> 0x1f;
                                    }
                                    local_478.UserData = pFVar38;
                                    if ((uVar23 == 0) &&
                                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar19)) {
                                      pcVar13 = (code *)swi(3);
                                      (*pcVar13)();
                                      return;
                                    }
                                    iVar24 = local_218.Elements.ArrayNum;
                                    local_478.IndexBuffer =
                                         *(FIndexBuffer **)
                                          ((pFVar11->ZeroOffsetIndexBuffers).AllocatorInstance.Data
                                          + (longlong)(int)uVar22 * 8);
                                    local_478.FirstIndex = 0;
                                    FVar31 = (ForElementType<FMeshBatchElement>)&local_218;
                                    if (local_218.Elements.AllocatorInstance.SecondaryData !=
                                        (ForElementType<FMeshBatchElement>)0x0) {
                                      FVar31 = local_218.Elements.AllocatorInstance.SecondaryData;
                                    }
                                    local_478.MinVertexIndex = 0;
                                    local_478.MaxVertexIndex = 0;
                                    local_138.Elements.AllocatorInstance.SecondaryData =
                                         (ForElementType<FMeshBatchElement>)0x0;
                                    local_138.Elements.ArrayNum = local_218.Elements.ArrayNum;
                                    local_478.NumPrimitives = uVar21;
                                    if (local_218.Elements.ArrayNum == 0) {
                                      local_138.Elements.ArrayMax = 1;
                                    }
                                    else {
                                      UE::Core::Private::
                                      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                                (0x98,8,local_218.Elements.ArrayNum,0,
                                                 (ForElementType<FMeshBatchElement> *)&local_138,
                                                 local_218.Elements.ArrayNum,
                                                 &local_138.Elements.ArrayMax);
                                      FVar33 = (ForElementType<FMeshBatchElement>)&local_138;
                                      if (local_138.Elements.AllocatorInstance.SecondaryData !=
                                          (ForElementType<FMeshBatchElement>)0x0) {
                                        FVar33 = local_138.Elements.AllocatorInstance.SecondaryData;
                                      }
                                      ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                                                ((void *)FVar33,(FMeshBatchElement *)FVar31,iVar24);
                                    }
                                    local_138.VertexFactory = local_218.VertexFactory;
                                    local_138.MaterialRenderProxy = local_218.MaterialRenderProxy;
                                    local_138.LCI = local_218.LCI;
                                    local_138.BatchHitProxyId.Index =
                                         local_218.BatchHitProxyId.Index;
                                    local_138.DynamicMeshBoundsIndex =
                                         local_218.DynamicMeshBoundsIndex;
                                    local_138.SegmentIndex = local_218.SegmentIndex;
                                    local_138.MeshIdInPrimitive = local_218.MeshIdInPrimitive;
                                    local_138.LODIndex = local_218.LODIndex;
                                    local_138.TessellationDisablingShadowMapMeshSize =
                                         local_218.TessellationDisablingShadowMapMeshSize;
                                    local_138._212_4_ =
                                         local_218._212_4_ & 0xfffffff |
                                         local_138._212_4_ & 0xf0000000;
                                    local_138.VisualizeHLODIndex = local_218.VisualizeHLODIndex;
                                    local_138.VisualizeLODIndex = local_218.VisualizeLODIndex;
                                    FVar31 = (ForElementType<FMeshBatchElement>)&local_138;
                                    if (local_138.Elements.AllocatorInstance.SecondaryData !=
                                        (ForElementType<FMeshBatchElement>)0x0) {
                                      FVar31 = local_138.Elements.AllocatorInstance.SecondaryData;
                                    }
                                    if ((ulonglong)FVar31 <= &local_478) {
                                      FVar31 = (ForElementType<FMeshBatchElement>)&local_138;
                                      if (local_138.Elements.AllocatorInstance.SecondaryData !=
                                          (ForElementType<FMeshBatchElement>)0x0) {
                                        FVar31 = local_138.Elements.AllocatorInstance.SecondaryData;
                                      }
                                      if ((&local_478 <
                                           (FMeshBatchElement *)
                                           ((longlong)local_138.Elements.ArrayMax * 0x98 +
                                           (longlong)FVar31)) &&
                                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                             (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar19)) {
                                        pcVar13 = (code *)swi(3);
                                        (*pcVar13)();
                                        return;
                                      }
                                    }
                                    if (local_138.Elements.ArrayNum == local_138.Elements.ArrayMax)
                                    {
                                      local_138.Elements.ArrayNum =
                                           UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                                     (0x898,(ForElementType<FMeshBatchElement> *)
                                                            &local_138,&local_138.Elements.ArrayMax)
                                      ;
                                    }
                                    lVar32 = (longlong)local_138.Elements.ArrayNum;
                                    local_138.Elements.ArrayNum = local_138.Elements.ArrayNum + 1;
                                    FVar31 = (ForElementType<FMeshBatchElement>)&local_138;
                                    if (local_138.Elements.AllocatorInstance.SecondaryData !=
                                        (ForElementType<FMeshBatchElement>)0x0) {
                                      FVar31 = local_138.Elements.AllocatorInstance.SecondaryData;
                                    }
                                    FMeshBatchElement::FMeshBatchElement
                                              ((FMeshBatchElement *)
                                               (lVar32 * 0x98 + (longlong)FVar31),&local_478);
                                    bVar19 = FRayTracingGeometry::IsValid(this_06);
                                    if (((!bVar19) && (!bVar18)) &&
                                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                           (
                                                  "SectionRayTracingState.Geometry.IsValid() || bNeedsRayTracingGeometryUpdate"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                                                  ,0xc62,L""), bVar19)) {
                                      pcVar13 = (code *)swi(3);
                                      (*pcVar13)();
                                      return;
                                    }
                                    local_510.Data = (FScriptContainerElement *)0x0;
                                    local_508 = 0;
                                    local_500 = (FMeshBatch *)0x0;
                                    iStack_4f8 = 0;
                                    local_4f0 = 0x1000000;
                                    local_4e8 = (FScriptContainerElement *)0x0;
                                    local_4e0 = 0;
                                    local_4d8 = (uint *)0x0;
                                    iStack_4d0 = 0;
                                    local_4c8.Data = (FScriptContainerElement *)0x0;
                                    local_4c0 = 0;
                                    local_4b8 = (TMatrix<double> *)0x0;
                                    iStack_4b0 = 0;
                                    iVar24 = UE::Core::Private::
                                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                       (0x1080,&local_4c8,
                                                        (int *)((longlong)&local_4c0 + 4));
                                    uVar14 = *(undefined8 *)&this->field_0x118;
                                    local_4c0 = CONCAT44(local_4c0._4_4_,iVar24 + 1);
                                    lVar32 = (longlong)iVar24 * 0x80;
                                    *(undefined8 *)(local_4c8.Data + lVar32) =
                                         *(undefined8 *)&this->field_0x110;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 8) = uVar14;
                                    uVar14 = *(undefined8 *)&this->field_0x128;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x10) =
                                         *(undefined8 *)&this->field_0x120;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x10 + 8) = uVar14;
                                    uVar14 = *(undefined8 *)&this->field_0x138;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x20) =
                                         *(undefined8 *)&this->field_0x130;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x20 + 8) = uVar14;
                                    uVar14 = *(undefined8 *)&this->field_0x148;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x30) =
                                         *(undefined8 *)&this->field_0x140;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x30 + 8) = uVar14;
                                    uVar14 = *(undefined8 *)&this->field_0x158;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x40) =
                                         *(undefined8 *)&this->field_0x150;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x40 + 8) = uVar14;
                                    uVar14 = *(undefined8 *)&this->field_0x168;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x50) =
                                         *(undefined8 *)&this->field_0x160;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x50 + 8) = uVar14;
                                    uVar14 = *(undefined8 *)&this->field_0x178;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x60) =
                                         *(undefined8 *)&this->field_0x170;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x60 + 8) = uVar14;
                                    uVar14 = *(undefined8 *)&this->field_0x188;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x70) =
                                         *(undefined8 *)&this->field_0x180;
                                    *(undefined8 *)(local_4c8.Data + lVar32 + 0x70 + 8) = uVar14;
                                    if (((local_510.Data <= &local_138) &&
                                        (&local_138 <
                                         (FMeshBatch *)
                                         (local_510.Data + (longlong)local_508._4_4_ * 0xe0))) &&
                                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                           (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar19)) {
                                      pcVar13 = (code *)swi(3);
                                      (*pcVar13)();
                                      return;
                                    }
                                    iVar24 = (int)local_508;
                                    if ((int)local_508 == local_508._4_4_) {
                                      iVar24 = UE::Core::Private::
                                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                         (0x8e0,&local_510,
                                                          (int *)((longlong)&local_508 + 4));
                                    }
                                    local_508 = CONCAT44(local_508._4_4_,iVar24 + 1);
                                    FMeshBatch::FMeshBatch
                                              ((FMeshBatch *)
                                               (local_510.Data + (longlong)iVar24 * 0xe0),&local_138
                                              );
                                    bVar19 = FRayTracingGeometry::IsEvicted(this_06);
                                    if (((bVar18) || (bVar19)) &&
                                       (lVar32 = (**(code **)(this->VertexFactory->_padding_ + 0x30)
                                                 )(), (*(uint *)(lVar32 + 0x38) & 0x400) != 0)) {
                                      pFVar35 = (this_06->Initializer).IndexBuffer.Reference;
                                      this_02 = ((local_478.IndexBuffer)->IndexBufferRHI).Reference;
                                      if (pFVar35 != this_02) {
                                        (this_06->Initializer).IndexBuffer.Reference = this_02;
                                        if (this_02 != (FRHIBuffer *)0x0) {
                                          FRHIResource::AddRef((FRHIResource *)this_02);
                                        }
                                        if (pFVar35 != (FRHIBuffer *)0x0) {
                                          FRHIResource::Release((FRHIResource *)pFVar35);
                                        }
                                      }
                                      if (bVar41) {
                                        *(undefined4 *)&this_06[1]._padding_ = 0;
                                        pFVar12 = (FRHIResource *)this_06[1]._padding_;
                                        if (pFVar12 != (FRHIResource *)0x0) {
                                          this_06[1]._padding_ = 0;
                                          FRHIResource::Release(pFVar12);
                                        }
                                        pFVar12 = (FRHIResource *)this_06[1]._padding_;
                                        if (pFVar12 != (FRHIResource *)0x0) {
                                          this_06[1]._padding_ = 0;
                                          FRHIResource::Release(pFVar12);
                                        }
                                        pFVar12 = (FRHIResource *)this_06[1]._padding_;
                                        if (pFVar12 != (FRHIResource *)0x0) {
                                          this_06[1]._padding_ = 0;
                                          FRHIResource::Release(pFVar12);
                                        }
                                      }
                                      cVar20 = (**(code **)(local_480->_padding_ + 0x250))();
                                      pTVar16 = CVarRayTracingLandscapeVertexMask.Ref;
                                      if (cVar20 != '\0') {
                                        bVar19 = IsInParallelRenderingThread();
                                        if ((!bVar19) &&
                                           (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                                               (&
                                                  bGEnsureHasExecuted<6409875433831007955>,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                                  ,0x6d3,"IsInParallelRenderingThread()"), bVar19))
                                        {
                                          pcVar13 = (code *)swi(3);
                                          (*pcVar13)();
                                          return;
                                        }
                                        if (pTVar16->ShadowedValue[1] != 0) {
                                          uVar39 = 1;
                                        }
                                      }
                                      FVar17.Data = local_510.Data;
                                      iVar24 = (int)local_508;
                                      local_2a8.Data = (FScriptContainerElement *)0x0;
                                      local_2a0 = CONCAT44(local_2a0._4_4_,(int)local_508);
                                      if ((int)local_508 == 0) {
                                        local_2a0 = local_508 & 0xffffffff;
                                      }
                                      else {
                                        UE::Core::Private::
                                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                  (0xe0,8,(int)local_508,0,&local_2a8,(int)local_508
                                                   ,(int *)((longlong)&local_2a0 + 4));
                                        ConstructItems<FMeshBatch,FMeshBatch,int>
                                                  (local_2a8.Data,(FMeshBatch *)FVar17.Data,iVar24);
                                      }
                                      pFVar11 = this->SharedBuffers;
                                      local_294 = local_4a8 * local_4a8;
                                      local_268[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
                                      local_268[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
                                      afStack_260[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
                                      afStack_260[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
                                      local_258[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
                                      local_258[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
                                      afStack_250[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
                                      afStack_250[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
                                      local_298 = 0;
                                      local_290 = local_294 * 0xc;
                                      local_280 = this_06 + 1;
                                      local_278 = 1;
                                      local_274 = 0;
                                      local_248[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
                                      local_248[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
                                      afStack_240[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
                                      afStack_240[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
                                      local_238[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
                                      local_238[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
                                      afStack_230[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
                                      afStack_230[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
                                      uVar23 = 0;
                                      if (local_560 < (pFVar11->ZeroOffsetIndexBuffers).ArrayNum) {
                                        uVar23 = ~uVar22 >> 0x1f;
                                      }
                                      local_28c = uVar21;
                                      local_288 = this_06;
                                      local_228 = uVar39;
                                      if ((uVar23 == 0) &&
                                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar19)) {
                                        pcVar13 = (code *)swi(3);
                                        (*pcVar13)();
                                        return;
                                      }
                                      local_220 = *(FRHIBuffer **)
                                                   (*(longlong *)
                                                     ((pFVar11->ZeroOffsetIndexBuffers).
                                                      AllocatorInstance.Data +
                                                     (longlong)(int)uVar22 * 8) + 0x20);
                                      pFVar35 = local_220;
                                      if (local_220 != (FRHIBuffer *)0x0) {
                                        FRHIResource::AddRef((FRHIResource *)local_220);
                                        pFVar35 = local_220;
                                      }
                                      local_358.MeshBatches.AllocatorInstance.Data = local_2a8.Data;
                                      local_358.MeshBatches.ArrayNum = (int)local_2a0;
                                      local_358.MeshBatches.ArrayMax = local_2a0._4_4_;
                                      local_358.bUsingIndirectDraw = (bool)local_298;
                                      local_358.NumVertices = local_294;
                                      local_358.VertexBufferSize = local_290;
                                      local_358.NumTriangles = local_28c;
                                      local_358.Geometry = local_288;
                                      local_358.Buffer = (FRWBuffer *)local_280;
                                      local_358.bApplyWorldPositionOffset = (bool)local_278;
                                      local_358.InstanceId = local_274;
                                      local_358.WorldToInstance.M[0][0] = local_268[0];
                                      local_358.WorldToInstance.M[0][1] = local_268[1];
                                      local_358.WorldToInstance.M[0][2] = afStack_260[0];
                                      local_358.WorldToInstance.M[0][3] = afStack_260[1];
                                      local_358.WorldToInstance.M[1][0] = local_258[0];
                                      local_358.WorldToInstance.M[1][1] = local_258[1];
                                      local_358.WorldToInstance.M[1][2] = afStack_250[0];
                                      local_358.WorldToInstance.M[1][3] = afStack_250[1];
                                      local_358.bAlphaMasked = (bool)local_228;
                                      local_2a8.Data = (FScriptContainerElement *)0x0;
                                      local_2a0 = 0;
                                      local_358.WorldToInstance.M[2][0] = local_248[0];
                                      local_358.WorldToInstance.M[2][1] = local_248[1];
                                      local_358.WorldToInstance.M[2][2] = afStack_240[0];
                                      local_358.WorldToInstance.M[2][3] = afStack_240[1];
                                      local_358.WorldToInstance.M[3][0] = local_238[0];
                                      local_358.WorldToInstance.M[3][1] = local_238[1];
                                      local_358.WorldToInstance.M[3][2] = afStack_230[0];
                                      local_358.WorldToInstance.M[3][3] = afStack_230[1];
                                      local_220 = (FRHIBuffer *)0x0;
                                      local_358.IndexBuffer.Reference = pFVar35;
                                      FRayTracingInstanceCollector::AddRayTracingGeometryUpdate
                                                (param_1,local_558,&local_358);
                                      if (local_220 != (FRHIBuffer *)0x0) {
                                        FRHIResource::Release((FRHIResource *)local_220);
                                      }
                                      DestructItems<FMeshBatch,int>
                                                ((FMeshBatch *)local_2a8.Data,(int)local_2a0);
                                      if ((FMeshBatch *)local_2a8.Data != (FMeshBatch *)0x0) {
                                        FMemory::Free(local_2a8.Data);
                                      }
                                    }
                                    local_3d8.MaterialsView._12_4_ = uStack_4f4;
                                    local_3d8.MaterialsView.ArrayNum = iStack_4f8;
                                    local_3d8.Materials.AllocatorInstance.Data = local_510.Data;
                                    local_3d8.Materials.ArrayNum = (int)local_508;
                                    local_3d8.Materials.ArrayMax = local_508._4_4_;
                                    local_3d8.bApplyLocalBoundsTransform =
                                         (bool)(undefined1)local_4f0;
                                    local_3d8.bThinGeometry = (bool)local_4f0._1_1_;
                                    local_3d8.InstanceLayer = local_4f0._2_1_;
                                    local_3d8.bInstanceMaskAndFlagsDirty = (bool)local_4f0._3_1_;
                                    local_3d8.NumTransforms = local_4f0._4_4_;
                                    local_3d8.PrimitiveInstanceIndices.AllocatorInstance.Data =
                                         local_4e8;
                                    local_3d8.PrimitiveInstanceIndices.ArrayNum = (int)local_4e0;
                                    local_3d8.PrimitiveInstanceIndices.ArrayMax = local_4e0._4_4_;
                                    local_3d8.MaterialsView.DataPtr = local_500;
                                    local_3d8.InstanceTransforms.AllocatorInstance.Data =
                                         local_4c8.Data;
                                    local_3d8.PrimitiveInstanceIndicesView._12_4_ = uStack_4cc;
                                    local_3d8.PrimitiveInstanceIndicesView.ArrayNum = iStack_4d0;
                                    local_3d8.PrimitiveInstanceIndicesView.DataPtr = local_4d8;
                                    local_3d8.InstanceTransforms.ArrayNum = (int)local_4c0;
                                    local_3d8.InstanceTransformsView._12_4_ = uStack_4ac;
                                    local_3d8.InstanceTransformsView.ArrayNum = iStack_4b0;
                                    local_3d8.InstanceTransforms.ArrayMax = local_4c0._4_4_;
                                    local_4c0 = 0;
                                    local_510.Data = (FScriptContainerElement *)0x0;
                                    local_508 = 0;
                                    local_4e8 = (void *)0x0;
                                    local_4e0 = 0;
                                    local_4c8.Data = (FScriptContainerElement *)0x0;
                                    local_3d8.InstanceTransformsView.DataPtr = local_4b8;
                                    local_3d8.Geometry = this_06;
                                    FRayTracingInstanceCollector::AddRayTracingInstance
                                              (param_1,local_558,&local_3d8);
                                    if (local_4c8.Data != (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_4c8.Data);
                                    }
                                    if (local_4e8 != (void *)0x0) {
                                      FMemory::Free(local_4e8);
                                    }
                                    DestructItems<FMeshBatch,int>
                                              ((FMeshBatch *)local_510.Data,(int)local_508);
                                    if ((FMeshBatch *)local_510.Data != (FMeshBatch *)0x0) {
                                      FMemory::Free(local_510.Data);
                                    }
                                    FVar31 = (ForElementType<FMeshBatchElement>)&local_138;
                                    if (local_138.Elements.AllocatorInstance.SecondaryData !=
                                        (ForElementType<FMeshBatchElement>)0x0) {
                                      FVar31 = local_138.Elements.AllocatorInstance.SecondaryData;
                                    }
                                    DestructItems<FMeshBatchElement,int>
                                              ((FMeshBatchElement *)FVar31,
                                               local_138.Elements.ArrayNum);
                                    if (local_138.Elements.AllocatorInstance.SecondaryData !=
                                        (ForElementType<FMeshBatchElement>)0x0) {
                                      FMemory::Free((void *)local_138.Elements.AllocatorInstance.
                                                            SecondaryData);
                                    }
                                    if (local_478.LooseParametersUniformBuffer.Reference !=
                                        (FRHIUniformBuffer *)0x0) {
                                      FRHIResource::Release
                                                ((FRHIResource *)
                                                 local_478.LooseParametersUniformBuffer.Reference);
                                    }
                                    iVar24 = this->NumRayTracingSections;
                                    iVar36 = iVar36 + 1;
                                    pFVar27 = local_4a0;
                                  } while (iVar36 < iVar24);
                                }
                                local_540 = local_540 + 1;
                              } while (local_540 < iVar24);
                            }
                            iVar24 = this->NumSubsections;
                            local_53c = local_53c + 1;
                          } while (local_53c < iVar24);
                        }
                        iVar34 = iVar34 + 1;
                      } while (iVar34 < iVar24);
                    }
                    FVar31 = (ForElementType<FMeshBatchElement>)&local_218;
                    if (local_218.Elements.AllocatorInstance.SecondaryData !=
                        (ForElementType<FMeshBatchElement>)0x0) {
                      FVar31 = local_218.Elements.AllocatorInstance.SecondaryData;
                    }
                    DestructItems<FMeshBatchElement,int>
                              ((FMeshBatchElement *)FVar31,local_218.Elements.ArrayNum);
                    if (local_218.Elements.AllocatorInstance.SecondaryData !=
                        (ForElementType<FMeshBatchElement>)0x0) {
                      FMemory::Free((void *)local_218.Elements.AllocatorInstance.SecondaryData);
                    }
                  }
                }
              }
            }
          }
          local_558 = local_558 + 1;
          local_554 = local_554 << 1 | (uint)((int)local_554 < 0);
          local_550 = local_550 + 1;
        } while (local_558 < iVar4);
      }
    }
  }
  return;
}

// GetHeightfieldRepresentation @ 145f92350

void __thiscall
FLandscapeComponentSceneProxy::GetHeightfieldRepresentation
          (FLandscapeComponentSceneProxy *this,UTexture2D **param_1,UTexture2D **param_2,
          FHeightfieldComponentDescription *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  TIntPoint<int>_u_0 TVar8;
  int iVar9;
  float fVar10;
  
  *param_1 = this->HeightmapTexture;
  *param_2 = this->VisibilityWeightmapTexture;
  uVar7 = *(undefined8 *)((longlong)&(this->HeightmapScaleBias).field0_0x0 + 8);
  *(undefined8 *)&(param_3->HeightfieldScaleBias).field0_0x0 =
       *(undefined8 *)&(this->HeightmapScaleBias).field0_0x0;
  *(undefined8 *)((longlong)&(param_3->HeightfieldScaleBias).field0_0x0 + 8) = uVar7;
  iVar5 = this->SubsectionSizeVerts;
  iVar6 = this->NumSubsections;
  fVar1 = (this->HeightmapScaleBias).field0_0x0._s_0.X;
  fVar2 = (this->HeightmapScaleBias).field0_0x0._s_0.Z;
  fVar3 = (this->HeightmapScaleBias).field0_0x0._s_0.Y;
  fVar4 = (this->HeightmapScaleBias).field0_0x0._s_0.W;
  (param_3->MinMaxUV).field0_0x0._s_0.X = fVar2;
  (param_3->MinMaxUV).field0_0x0._s_0.Y = fVar4;
  fVar10 = (float)(iVar5 * iVar6);
  (param_3->MinMaxUV).field0_0x0._s_0.Z = (fVar10 * fVar1 + fVar2) - fVar1;
  (param_3->MinMaxUV).field0_0x0._s_0.W = (fVar3 * fVar10 + fVar4) - fVar3;
  iVar5 = (this->SectionBase).field0_0x0._s_0.X;
  iVar6 = (this->SectionBase).field0_0x0._s_0.Y;
  iVar9 = this->SubsectionSizeQuads * this->NumSubsections;
  (param_3->HeightfieldRect).field0_0x0._s_0.Min.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)(this->SectionBase).field0_0x0;
  TVar8._s_0.Y = iVar9 + iVar6;
  TVar8._s_0.X = iVar5 + iVar9;
  (param_3->HeightfieldRect).field0_0x0._s_0.Max.field0_0x0 = TVar8;
  param_3->NumSubsections = this->NumSubsections;
  iVar5 = this->SubsectionSizeQuads;
  fVar1 = this->HeightmapSubsectionOffsetU;
  fVar2 = this->HeightmapSubsectionOffsetV;
  (param_3->SubsectionScaleAndBias).field0_0x0._s_0.X = (double)iVar5;
  (param_3->SubsectionScaleAndBias).field0_0x0._s_0.Y = (double)iVar5;
  (param_3->SubsectionScaleAndBias).field0_0x0._s_0.Z = (double)fVar1;
  (param_3->SubsectionScaleAndBias).field0_0x0._s_0.W = (double)fVar2;
  param_3->VisibilityChannel = this->VisibilityWeightmapChannel;
  return;
}

// GetLCIs @ 145f924d0

void __thiscall
FLandscapeComponentSceneProxy::GetLCIs
          (FLandscapeComponentSceneProxy *this,
          TArray<FLightCacheInterface_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  ForElementType<FLightCacheInterface_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FLightCacheInterface_*> FVar5;
  FLandscapeLCI *local_18 [2];
  
  local_18[0] = (this->ComponentLightInfo).Ptr;
  if (local_18[0] != (FLandscapeLCI *)0x0) {
    FVar1 = (param_1->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<FLightCacheInterface_*>)param_1;
    if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= local_18) {
      FVar5 = (ForElementType<FLightCacheInterface_*>)param_1;
      if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
        FVar5 = FVar1;
      }
      if ((local_18 < (FLandscapeLCI **)((longlong)FVar5 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightCacheInterface_*>_>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    FVar1 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
      param_1 = (TArray<FLightCacheInterface_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar1;
    }
    *(FLandscapeLCI **)((longlong)param_1 + (longlong)iVar4 * 8) = local_18[0];
  }
  return;
}

// GetLightMapResolution @ 145f92ce0

int __thiscall
FLandscapeComponentSceneProxy::GetLightMapResolution(FLandscapeComponentSceneProxy *this)

{
  return this->LightMapResolution;
}

// GetLightRelevance @ 145f92cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FLandscapeComponentSceneProxy::GetLightRelevance
          (FLandscapeComponentSceneProxy *this,FLightSceneProxy *param_1,bool *param_2,bool *param_3
          ,bool *param_4,bool *param_5)

{
  FLandscapeLCI *this_00;
  ELightInteractionType EVar1;
  
  *param_2 = true;
  *param_3 = false;
  *param_4 = true;
  *param_5 = true;
  this_00 = (this->ComponentLightInfo).Ptr;
  if (this_00 == (FLandscapeLCI *)0x0) {
    *param_3 = true;
    *param_4 = false;
    return;
  }
  EVar1 = FLightCacheInterface::GetStaticInteraction
                    ((FLightCacheInterface *)this_00,param_1,&this_00->IrrelevantLights);
  if (EVar1 == LIT_MAX) {
    EVar1 = LIT_Dynamic;
  }
  else if (EVar1 == LIT_CachedIrrelevant) goto LAB_145f92d4b;
  *param_3 = true;
LAB_145f92d4b:
  if (((LIT_CachedLightMap < EVar1) && (*param_4 = false, EVar1 == LIT_Dynamic)) ||
     (*param_2 = false, EVar1 != LIT_CachedSignedDistanceFieldShadowMap2D)) {
    *param_5 = false;
  }
  return;
}

// GetMemoryFootprint @ 145f92db0

uint __thiscall
FLandscapeComponentSceneProxy::GetMemoryFootprint(FLandscapeComponentSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x6b0;
}

// GetMeshElementForFixedGrid @ 145f92dd0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FLandscapeComponentSceneProxy::GetMeshElementForFixedGrid
          (FLandscapeComponentSceneProxy *this,int param_1,FMaterialRenderProxy *param_2,
          FMeshBatch *param_3,
          TArray<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  byte bVar2;
  ForElementType<FMeshBatchElement> FVar3;
  FLandscapeRenderSystem *pFVar4;
  FRHIUniformBuffer *this_00;
  FRHIUniformBuffer *this_01;
  FLandscapeSharedBuffers *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FLandscapeRenderSystem **ppFVar10;
  void *pvVar11;
  ForElementType<FMeshBatchElement> FVar12;
  void *pvVar13;
  FMeshBatchElement local_c8;
  
  if ((this->FixedGridVertexFactory == (FLandscapeVertexFactory *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FixedGridVertexFactory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x929,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (param_2 == (FMaterialRenderProxy *)0x0) {
    return false;
  }
  param_3->VertexFactory = (FVertexFactory *)this->FixedGridVertexFactory;
  param_3->MaterialRenderProxy = param_2;
  bVar2 = this->field_0x78;
  param_3->LODIndex = (byte)param_1;
  *(uint *)&param_3->field_0xd4 =
       (bVar2 & 1 ^ *(uint *)&param_3->field_0xd4 & 0xfffffffe) & 0xfffde043;
  FVar3 = (param_3->Elements).AllocatorInstance.SecondaryData;
  FVar12 = (ForElementType<FMeshBatchElement>)param_3;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar12 = FVar3;
  }
  DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar12,(param_3->Elements).ArrayNum);
  pvVar13 = (void *)0x0;
  piVar1 = &(param_3->Elements).ArrayMax;
  (param_3->Elements).ArrayNum = 0;
  if (*piVar1 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
              (0x98,8,1,(ForElementType<FMeshBatchElement> *)param_3,0,piVar1);
  }
  ppFVar10 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
             ::FindChecked((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                            *)&LandscapeRenderSystems,*(uint *)&this->field_0x298);
  pFVar4 = *ppFVar10;
  pvVar11 = operator_new<FLandscapeBatchElementParams,TSizedDefaultAllocator<32>_>(0x30,param_4);
  if (pvVar11 != (void *)0x0) {
    *(undefined8 *)((longlong)pvVar11 + 0x18) = 0;
    pvVar13 = pvVar11;
  }
  *(FLandscapeComponentSceneProxy **)((longlong)pvVar13 + 0x20) = this;
  *(TUniformBuffer<FLandscapeUniformShaderParameters> **)((longlong)pvVar13 + 8) =
       &this->LandscapeUniformShaderParameters;
  *(TArray<TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>,TSizedDefaultAllocator<32>_>
    **)((longlong)pvVar13 + 0x10) = &this->SharedBuffers->LandscapeFixedGridUniformShaderParameters;
  this_00 = (pFVar4->SectionLODUniformBuffer).Reference;
  this_01 = *(FRHIUniformBuffer **)((longlong)pvVar13 + 0x18);
  if (this_01 != this_00) {
    *(FRHIUniformBuffer **)((longlong)pvVar13 + 0x18) = this_00;
    if (this_00 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  *(int *)((longlong)pvVar13 + 0x28) = param_1;
  local_c8.PrimitiveIdMode = PrimID_FromPrimitiveSceneInfo;
  pFVar5 = this->SharedBuffers;
  local_c8.VisualizeElementIndex = -1;
  local_c8.bFetchInstanceCountFromScene = 0;
  local_c8.bPreserveInstanceOrder = 0;
  local_c8.bForceInstanceCulling = 0;
  local_c8.bIsInstanceRuns = 0;
  local_c8.bIsSplineProxy = 0;
  local_c8.bUserDataIsColorVertexBuffer = 0;
  local_c8.InstancedLODRange = 0;
  local_c8.InstancedLODIndex = 0;
  local_c8.SkinCacheDebugColor.field0_0x0._s_0 = FColor::White.field0_0x0;
  local_c8.PrimitiveUniformBuffer = *(FRHIUniformBuffer **)&this->field_0x258;
  local_c8.PrimitiveUniformBufferResource = (TUniformBuffer<FPrimitiveUniformShaderParameters> *)0x0
  ;
  local_c8.LooseParametersUniformBuffer.Reference = (FRHIUniformBuffer *)0x0;
  local_c8.DynamicIndexBuffer.IndexBuffer = (FIndexBuffer *)0x0;
  local_c8.field5_0x30.InstanceRuns = (uint *)0x0;
  local_c8.IndirectArgsOffset = 0;
  local_c8.MinScreenSize = 0.0;
  local_c8.DynamicPrimitiveData = (FMeshBatchDynamicPrimitiveData *)0x0;
  local_c8.VertexFactoryUserData = (void *)0x0;
  local_c8.IndirectArgsBuffer = (FRHIBuffer *)0x0;
  local_c8.NumInstances = 1;
  local_c8.BaseVertexIndex = 0;
  local_c8.UserIndex = -1;
  local_c8.MaxScreenSize = 1.0;
  local_c8.DynamicPrimitiveIndex = 0xffffffff;
  local_c8.DynamicPrimitiveInstanceSceneDataOffset = 0xffffffff;
  local_c8.IndexBuffer = pFVar5->IndexBuffers[param_1];
  iVar9 = (this->SubsectionSizeVerts >> ((byte)param_1 & 0x1f)) + -1;
  local_c8.FirstIndex = 0;
  local_c8.NumPrimitives = this->NumSubsections * this->NumSubsections * iVar9 * iVar9 * 2;
  local_c8.MinVertexIndex = pFVar5->IndexRanges[param_1].MinIndexFull;
  local_c8.MaxVertexIndex = pFVar5->IndexRanges[param_1].MaxIndexFull;
  FVar3 = (param_3->Elements).AllocatorInstance.SecondaryData;
  FVar12 = (ForElementType<FMeshBatchElement>)param_3;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar12 = FVar3;
  }
  local_c8.UserData = pvVar13;
  if ((ulonglong)FVar12 <= &local_c8) {
    FVar12 = (ForElementType<FMeshBatchElement>)param_3;
    if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar12 = FVar3;
    }
    if ((&local_c8 < (FMeshBatchElement *)((longlong)*piVar1 * 0x98 + (longlong)FVar12)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  iVar9 = (param_3->Elements).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                      (0x898,(ForElementType<FMeshBatchElement> *)param_3,piVar1);
  }
  (param_3->Elements).ArrayNum = iVar9 + 1;
  FVar3 = (param_3->Elements).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    param_3 = (FMeshBatch *)FVar3;
  }
  FMeshBatchElement::FMeshBatchElement
            ((FMeshBatchElement *)((longlong)iVar9 * 0x98 + (longlong)param_3),&local_c8);
  if (local_c8.LooseParametersUniformBuffer.Reference != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c8.LooseParametersUniformBuffer.Reference);
  }
  return true;
}

// GetPrimitiveSceneInfo @ 145f93740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneInfo * __thiscall
FLandscapeComponentSceneProxy::GetPrimitiveSceneInfo(FLandscapeComponentSceneProxy *this)

{
  return (FPrimitiveSceneInfo *)this[-1].WorldToLocal.M[1][3];
}

// GetSectionBoundsAndLocalToWorld @ 145f93d30

void __thiscall
FLandscapeComponentSceneProxy::GetSectionBoundsAndLocalToWorld
          (FLandscapeComponentSceneProxy *this,TBoxSphereBounds<double,double> *param_1,
          TMatrix<double> *param_2)

{
  double dVar1;
  uchar *puVar2;
  FScriptContainerElement *pFVar3;
  FLandscapeLCI *pFVar4;
  
  dVar1 = *(double *)&this[-1].LandscapeUniformShaderParameters.BufferUsage;
  (param_1->Origin).field0_0x0._s_0.X = (double)this[-1].LandscapeUniformShaderParameters._padding_;
  (param_1->Origin).field0_0x0._s_0.Y = dVar1;
  puVar2 = this[-1].LandscapeUniformShaderParameters.Contents;
  (param_1->Origin).field0_0x0._s_0.Z =
       (double)this[-1].LandscapeUniformShaderParameters.UniformBufferRHI;
  (param_1->BoxExtent).field0_0x0._s_0.X = (double)puVar2;
  dVar1 = this[-1].WorldToLocal.M[0][0];
  (param_1->BoxExtent).field0_0x0._s_0.Y = *(double *)&this[-1].field_0x618;
  (param_1->BoxExtent).field0_0x0._s_0.Z = dVar1;
  param_1->SphereRadius = this[-1].WorldToLocal.M[0][1];
  pFVar3 = this[-1].AvailableMaterials.AllocatorInstance.Data;
  param_2->M[0][0] = (double)this[-1].FixedGridVertexFactory;
  param_2->M[0][1] = (double)pFVar3;
  pFVar4 = this[-1].ComponentLightInfo.Ptr;
  param_2->M[0][2] = *(double *)&this[-1].AvailableMaterials.ArrayNum;
  param_2->M[0][3] = (double)pFVar4;
  dVar1 = *(double *)&this[-1].LODIndexToMaterialIndex.ArrayNum;
  param_2->M[1][0] = (double)this[-1].LODIndexToMaterialIndex.AllocatorInstance.Data;
  param_2->M[1][1] = dVar1;
  dVar1 = *(double *)&this[-1].MaterialIndexToStaticMeshBatchLOD.ArrayNum;
  param_2->M[1][2] = (double)this[-1].MaterialIndexToStaticMeshBatchLOD.AllocatorInstance.Data;
  param_2->M[1][3] = dVar1;
  dVar1 = *(double *)&this[-1].MaterialRelevances.ArrayNum;
  param_2->M[2][0] = (double)this[-1].MaterialRelevances.AllocatorInstance.Data;
  param_2->M[2][1] = dVar1;
  pFVar3 = this[-1].WorldSpaceMipToMipMaxDeltas.AllocatorInstance.Data;
  param_2->M[2][2] = *(double *)&this[-1].NumRelevantMips;
  param_2->M[2][3] = (double)pFVar3;
  dVar1 = *(double *)&this[-1].VirtualShadowMapConstantDepthBias;
  param_2->M[3][0] = *(double *)&this[-1].WorldSpaceMipToMipMaxDeltas.ArrayNum;
  param_2->M[3][1] = dVar1;
  dVar1 = *(double *)&this[-1].CollisionResponse.field0_0x0;
  param_2->M[3][2] = *(double *)&this[-1].CollisionMipLevel;
  param_2->M[3][3] = dVar1;
  return;
}

// GetSectionCenterAndVectors @ 145f93e60

void __thiscall
FLandscapeComponentSceneProxy::GetSectionCenterAndVectors
          (FLandscapeComponentSceneProxy *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  TUniformBufferRef<FLandscapeUniformShaderParameters> TVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  FLandscapeVertexFactory *pFVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar17 = (double)this[-1].LandscapeUniformShaderParameters._padding_;
  dVar18 = *(double *)&this[-1].LandscapeUniformShaderParameters.BufferUsage;
  TVar5 = this[-1].LandscapeUniformShaderParameters.UniformBufferRHI;
  pFVar6 = this[-1].MaterialIndexToStaticMeshBatchLOD.AllocatorInstance.Data;
  pFVar7 = this[-1].MaterialRelevances.AllocatorInstance.Data;
  dVar8 = *(double *)&this[-1].MaterialRelevances.ArrayNum;
  pFVar9 = this[-1].FixedGridVertexFactory;
  pFVar10 = this[-1].AvailableMaterials.AllocatorInstance.Data;
  dVar11 = *(double *)&this[-1].WorldSpaceMipToMipMaxDeltas.ArrayNum;
  dVar12 = *(double *)&this[-1].VirtualShadowMapConstantDepthBias;
  dVar3 = *(double *)&this[-1].NumRelevantMips;
  dVar4 = *(double *)&this[-1].AvailableMaterials.ArrayNum;
  dVar13 = *(double *)&this[-1].CollisionMipLevel;
  pFVar14 = this[-1].LODIndexToMaterialIndex.AllocatorInstance.Data;
  dVar15 = *(double *)&this[-1].LODIndexToMaterialIndex.ArrayNum;
  iVar16 = (**(code **)(*(longlong *)this + 0x40))();
  dVar20 = __real_3ff0000000000000;
  dVar19 = dVar12 * __real_3ff0000000000000;
  (param_1->field0_0x0)._s_0.X =
       (double)pFVar14 * dVar18 + (double)pFVar9 * dVar17 + (double)pFVar7 * (double)TVar5 +
       dVar11 * __real_3ff0000000000000;
  (param_1->field0_0x0)._s_0.Y =
       dVar15 * dVar18 + (double)pFVar10 * dVar17 + dVar8 * (double)TVar5 + dVar19;
  (param_1->field0_0x0)._s_0.Z =
       (double)pFVar6 * dVar18 + dVar4 * dVar17 + dVar3 * (double)TVar5 + dVar13 * dVar20;
  dVar17 = dVar3 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  dVar20 = (double)pFVar6 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  dVar19 = dVar4 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  dVar21 = (double)iVar16;
  dVar18 = dVar21 * (dVar15 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y +
                     (double)pFVar10 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X +
                     dVar8 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z + dVar12 * 0.0
                    );
  auVar1._8_4_ = SUB84(dVar18,0);
  auVar1._0_8_ = dVar21 * ((double)pFVar14 *
                           UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y +
                           (double)pFVar9 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X
                           + (double)pFVar7 *
                             UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z + dVar11 * 0.0
                          );
  auVar1._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])&param_2->field0_0x0 = auVar1;
  (param_2->field0_0x0)._s_0.Z = dVar21 * (dVar20 + dVar19 + dVar17 + dVar13 * 0.0);
  dVar3 = dVar3 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
  dVar17 = (double)pFVar6 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
  dVar4 = dVar4 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
  dVar19 = dVar21 * (dVar15 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y +
                     (double)pFVar10 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X +
                     dVar8 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z + dVar12 * 0.0
                    );
  auVar2._8_4_ = SUB84(dVar19,0);
  auVar2._0_8_ = dVar21 * ((double)pFVar14 *
                           UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y +
                           (double)pFVar9 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X
                           + (double)pFVar7 *
                             UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z + dVar11 * 0.0
                          );
  auVar2._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])&param_3->field0_0x0 = auVar2;
  (param_3->field0_0x0)._s_0.Z = dVar21 * (dVar17 + dVar4 + dVar3 + dVar13 * 0.0);
  return;
}

// GetTypeHash @ 145f95b60

ulong64 __thiscall FLandscapeComponentSceneProxy::GetTypeHash(FLandscapeComponentSceneProxy *this)

{
  return 0x15519aff0;
}

// GetViewRelevance @ 145f969e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FLandscapeComponentSceneProxy::GetViewRelevance
          (FLandscapeComponentSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  FStaticShaderPlatform FVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar7 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  if (((bVar7) ||
      ((param_1->Family->EngineShowFlags).CollisionVisibility != 0 ||
       (param_1->Family->EngineShowFlags).CollisionPawn != 0)) &&
     ((param_1->Family->EngineShowFlags).Landscape != 0)) {
    uVar10 = 4;
  }
  else {
    uVar10 = 0;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar10
  ;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 ^
       ((uint)(byte)this->field_0x7b << 4 ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x80;
  bVar7 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  uVar10 = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar7 << 5;
  if (this->field_0x89 != '\x01') {
    uVar10 = 0x2000;
  }
  uVar10 = uVar10 | *(uint *)&__return_storage_ptr__->field_0x8 & 0xffffdfff;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar10;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       ((uint)(byte)this->field_0x7f << 0xe ^ uVar10) & 0x4000 ^ uVar10;
  FSceneView::GetShaderPlatform(param_1);
  this_00 = (this->MaterialRelevances).AllocatorInstance.Data;
  iVar9 = (this->MaterialRelevances).ArrayNum;
  pFVar3 = this_00 + (longlong)iVar9 * 8;
  while( true ) {
    if ((this->MaterialRelevances).ArrayNum != iVar9) {
      `TCheckedPointerIterator<FMaterialRelevance_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    FMaterialRelevance::SetPrimitiveViewRelevance
              ((FMaterialRelevance *)this_00,__return_storage_ptr__);
    this_00 = this_00 + 8;
  }
  bVar7 = IsRichView(param_1->Family);
  if ((((bVar7) ||
       ((param_1->Family->EngineShowFlags).CollisionVisibility != 0 ||
        (param_1->Family->EngineShowFlags).CollisionPawn != 0)) ||
      ((GLandscapeDebugOptions.bDisableStatic != false ||
       (((param_1->Family->EngineShowFlags).Wireframe != 0 || ((this->field_0x79 & 6) != 0)))))) ||
     ((param_1->CustomRenderPass != (FCustomRenderPassBase *)0x0 &&
      (iVar9 = GetViewLodOverride(param_1,*(uint *)&this->field_0x298), -1 < iVar9)))) {
    __return_storage_ptr__->bDynamicRelevance = 1;
  }
  else {
    __return_storage_ptr__->bStaticRelevance = 1;
  }
  FVar8.Platform = FSceneView::GetShaderPlatform(param_1);
  bVar7 = VelocityIncludeStationaryPrimitives(FVar8);
  if ((((((bVar7) || (this->field_0x68 == '\x02')) || (this->field_0x68 == '\x01')) ||
       (((this->field_0x86 & 1) != 0 || ((char)this->field_0x82 < '\0')))) ||
      ((this->field_0x82 & 0x72) != 0)) &&
     (((__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = 0;
  }
  __return_storage_ptr__->bVelocityRelevance = uVar10 >> 4;
  if (((GAllowLandscapeShadows < 1) ||
      (bVar7 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1), !bVar7)) ||
     ((param_1->Family->EngineShowFlags).Landscape == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = 8;
  }
  uVar5 = *(uint *)&__return_storage_ptr__->field_0x8;
  __return_storage_ptr__->bShadowRelevance = uVar10 >> 3;
  if (GVarDumpLandscapeLODsCurrentFrame != 0) {
    if (GVarDumpLandscapeLODsCurrentFrame == GFrameNumberRenderThread) {
      *(uint *)&__return_storage_ptr__->field_0x8 = uVar5 & 0xfffffff7 | uVar10 | 2;
    }
    else if (GVarDumpLandscapeLODsCurrentFrame < GFrameNumberRenderThread) {
      GVarDumpLandscapeLODsCurrentFrame = 0;
    }
  }
  if (((this->bNaniteActive != false) && ((param_1->Family->EngineShowFlags).NaniteMeshes != 0)) &&
     (param_1->CustomRenderPass == (FCustomRenderPassBase *)0x0)) {
    __return_storage_ptr__->bShadowRelevance = 0;
    __return_storage_ptr__->bTranslucentSelfShadow = 0;
    __return_storage_ptr__->bRenderInMainPass = 0;
    __return_storage_ptr__->bRenderCustomDepth = 0;
    __return_storage_ptr__->bVelocityRelevance = 0;
  }
  return __return_storage_ptr__;
}

// HasRayTracingRepresentation @ 145f96d70

bool __thiscall
FLandscapeComponentSceneProxy::HasRayTracingRepresentation(FLandscapeComponentSceneProxy *this)

{
  return true;
}

// HeightfieldHasPendingStreaming @ 145f96de0

bool __thiscall
FLandscapeComponentSceneProxy::HeightfieldHasPendingStreaming(FLandscapeComponentSceneProxy *this)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (this->HeightmapTexture != (UTexture2D *)0x0) {
    bVar2 = (byte)this->HeightmapTexture->_padding_ >> 2 & 1;
  }
  bVar1 = 0;
  if (this->VisibilityWeightmapTexture != (UTexture2D *)0x0) {
    bVar1 = (byte)this->VisibilityWeightmapTexture->_padding_ >> 2 & 1;
  }
  if ((bVar2 == 0) && (bVar1 == 0)) {
    return false;
  }
  return true;
}

// IsRayTracingRelevant @ 145f97f70

bool __thiscall
FLandscapeComponentSceneProxy::IsRayTracingRelevant(FLandscapeComponentSceneProxy *this)

{
  return true;
}

// OnForceHiddenChanged @ 145f99fe0

void __thiscall
FLandscapeComponentSceneProxy::OnForceHiddenChanged(FLandscapeComponentSceneProxy *this)

{
  FLandscapeSectionInfo *pFVar1;
  
  if ((this->field_0x7b & 0x10) != 0) {
    pFVar1 = (FLandscapeSectionInfo *)&this->field_0x280;
    if (this == (FLandscapeComponentSceneProxy *)0x0) {
      pFVar1 = (FLandscapeSectionInfo *)0x0;
    }
    FLandscapeRenderSystem::UnregisterSection(pFVar1);
    return;
  }
  pFVar1 = (FLandscapeSectionInfo *)&this->field_0x280;
  if (this == (FLandscapeComponentSceneProxy *)0x0) {
    pFVar1 = (FLandscapeSectionInfo *)0x0;
  }
  FLandscapeRenderSystem::RegisterSection(pFVar1);
  return;
}

// OnRenderCoordsChanged @ 145f9a200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeComponentSceneProxy::OnRenderCoordsChanged
          (FLandscapeComponentSceneProxy *this,FRHICommandListBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145f9a20a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this[-1].GrassMeshBatch.Elements.AllocatorInstance.InlineData + 0x58) +
              0x130))();
  return;
}

// OnTransformChanged @ 145f9a230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeComponentSceneProxy::OnTransformChanged
          (FLandscapeComponentSceneProxy *this,FRHICommandListBase *param_1)

{
  TMatrix<double> *this_00;
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FTextureResource *pFVar13;
  uchar *puVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_368 [32];
  float local_328;
  float local_324;
  float local_320 [2];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  int local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  uint local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  undefined8 local_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  FRHITexture *local_1f8;
  FRHISamplerState *local_1f0;
  FRHITexture *local_1e8;
  FRHISamplerState *local_1e0;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  if (this->field_0x2b8 == '\0') {
    return;
  }
  if ((*(int *)&this->field_0x2a0 < -0x7fffffff) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("RenderCoord.X > (-2147483647i32 - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                          ,0x8cb,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar2 = this->SubsectionSizeQuads;
  bVar1 = this->StaticLightingLOD;
  local_328 = 0.0;
  local_324 = 0.0;
  local_320[0] = 1.4013e-45;
  fVar19 = ::`anonymous_namespace'::GetTerrainExpandPatchCount
                     (this->StaticLightingResolution,(int *)&local_328,(int *)&local_324,
                      this->ComponentSizeQuads,(iVar2 + 1) * this->NumSubsections,(int *)local_320,
                      (uint)bVar1);
  fVar9 = __real_3f800000;
  dVar8 = __real_3e45798ee0000000;
  local_1d8.M[0][0]._0_4_ = *(uint *)&this->field_0x110;
  local_1d8.M[0][0]._4_4_ = *(uint *)&this->field_0x114;
  local_1d8.M[0][1]._0_4_ = *(uint *)&this->field_0x118;
  local_1d8.M[0][1]._4_4_ = *(uint *)&this->field_0x11c;
  local_1d8.M[1][2]._0_4_ = *(uint *)&this->field_0x140;
  local_1d8.M[1][2]._4_4_ = *(uint *)&this->field_0x144;
  local_1d8.M[1][3]._0_4_ = *(undefined4 *)&this->field_0x148;
  local_1d8.M[1][3]._4_4_ = *(undefined4 *)&this->field_0x14c;
  local_1d8.M[2][0]._0_4_ = *(uint *)&this->field_0x150;
  local_1d8.M[2][0]._4_4_ = *(uint *)&this->field_0x154;
  local_1d8.M[2][1]._0_4_ = *(uint *)&this->field_0x158;
  local_1d8.M[2][1]._4_4_ = *(uint *)&this->field_0x15c;
  local_1d8.M[2][2]._0_4_ = *(uint *)&this->field_0x160;
  local_1d8.M[2][2]._4_4_ = *(uint *)&this->field_0x164;
  local_1d8.M[2][3]._0_4_ = *(undefined4 *)&this->field_0x168;
  local_1d8.M[2][3]._4_4_ = *(undefined4 *)&this->field_0x16c;
  iVar16 = this->ComponentSizeVerts >> (bVar1 & 0x1f);
  fVar22 = fVar19 / (float)(iVar16 + (int)local_328 * 2);
  fVar20 = (float)(int)local_328 * fVar22;
  fVar19 = fVar19 / (float)(iVar16 + (int)local_324 * 2);
  local_320[0] = (float)(int)local_324 * fVar19;
  local_1d8.M[1][0]._0_4_ = *(uint *)&this->field_0x130;
  local_1d8.M[1][0]._4_4_ = *(uint *)&this->field_0x134;
  local_1d8.M[1][1]._0_4_ = *(uint *)&this->field_0x138;
  local_1d8.M[1][1]._4_4_ = *(uint *)&this->field_0x13c;
  fVar21 = __real_3f800000 / (float)this->ComponentSizeQuads;
  local_328 = (float)iVar2;
  local_1d8.M[0][2]._0_4_ = *(uint *)&this->field_0x120;
  local_1d8.M[0][2]._4_4_ = *(uint *)&this->field_0x124;
  local_1d8.M[0][3]._0_4_ = *(undefined4 *)&this->field_0x128;
  local_1d8.M[0][3]._4_4_ = *(undefined4 *)&this->field_0x12c;
  local_2f8 = *(double *)&this->field_0x170;
  dStack_2f0 = *(double *)&this->field_0x178;
  local_2e8 = *(double *)&this->field_0x180;
  dStack_2e0 = *(double *)&this->field_0x188;
  fVar22 = (float)(iVar16 + -1) * fVar22 * fVar21;
  fVar21 = (float)(iVar16 + -1) * fVar19 * fVar21;
  local_324 = fVar20;
  local_1d8.M[3][0] = local_2f8;
  local_1d8.M[3][1] = dStack_2f0;
  local_1d8.M[3][2] = local_2e8;
  local_1d8.M[3][3] = dStack_2e0;
  if ((((((__real_3e45798ee0000000 <
           (double)CONCAT44(local_1d8.M[0][0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_1d8.M[0][0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
         || (__real_3e45798ee0000000 <
             (double)CONCAT44(local_1d8.M[0][1]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
                              ,local_1d8.M[0][1]._0_4_ &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
        (__real_3e45798ee0000000 <
         (double)CONCAT44(local_1d8.M[0][2]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_1d8.M[0][2]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
       || ((__real_3e45798ee0000000 <
            (double)CONCAT44(local_1d8.M[1][0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_1d8.M[1][0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
           || (__real_3e45798ee0000000 <
               (double)CONCAT44(local_1d8.M[1][1]._4_4_ &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_1d8.M[1][1]._0_4_ &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) ||
      ((__real_3e45798ee0000000 <
        (double)CONCAT44(local_1d8.M[1][2]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_1d8.M[1][2]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       ((__real_3e45798ee0000000 <
         (double)CONCAT44(local_1d8.M[2][0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_1d8.M[2][0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
        (__real_3e45798ee0000000 <
         (double)CONCAT44(local_1d8.M[2][1]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_1d8.M[2][1]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))
       ))) || (__real_3e45798ee0000000 <
               (double)CONCAT44(local_1d8.M[2][2]._4_4_ &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_1d8.M[2][2]._0_4_ &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    FMath::MatrixInverse(&local_158,&local_1d8);
    local_318 = local_158.M[3][0];
    dStack_310 = local_158.M[3][1];
    local_308 = local_158.M[3][2];
    dStack_300 = local_158.M[3][3];
  }
  else {
    local_318 = UE::Math::TMatrix<double>::Identity.M[3][0];
    dStack_310 = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_308 = UE::Math::TMatrix<double>::Identity.M[3][2];
    dStack_300 = UE::Math::TMatrix<double>::Identity.M[3][3];
    local_158.M[1][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_;
    local_158.M[1][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_;
    local_158.M[1][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_;
    local_158.M[1][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_;
    local_158.M[1][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_;
    local_158.M[1][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_;
    local_158.M[1][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_;
    local_158.M[1][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_;
    local_158.M[2][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_;
    local_158.M[2][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_;
    local_158.M[2][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_;
    local_158.M[2][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_;
    local_158.M[2][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_;
    local_158.M[2][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_;
    local_158.M[2][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_;
    local_158.M[2][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_;
    local_158.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_158.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_158.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_158.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  }
  (this->WorldToLocal).M[0][0] = local_158.M[0][0];
  (this->WorldToLocal).M[0][1] = local_158.M[0][1];
  this_00 = &this->LocalToWorldNoScaling;
  (this->WorldToLocal).M[0][2] = local_158.M[0][2];
  (this->WorldToLocal).M[0][3] = local_158.M[0][3];
  *(uint *)this_00->M[0] = local_1d8.M[0][0]._0_4_;
  *(uint *)((longlong)(this->LocalToWorldNoScaling).M[0] + 4) = local_1d8.M[0][0]._4_4_;
  *(uint *)((this->LocalToWorldNoScaling).M[0] + 1) = local_1d8.M[0][1]._0_4_;
  *(uint *)((longlong)(this->LocalToWorldNoScaling).M[0] + 0xc) = local_1d8.M[0][1]._4_4_;
  *(uint *)((this->LocalToWorldNoScaling).M[0] + 2) = local_1d8.M[0][2]._0_4_;
  *(uint *)((longlong)(this->LocalToWorldNoScaling).M[0] + 0x14) = local_1d8.M[0][2]._4_4_;
  *(undefined4 *)((this->LocalToWorldNoScaling).M[0] + 3) = local_1d8.M[0][3]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldNoScaling).M[0] + 0x1c) = local_1d8.M[0][3]._4_4_;
  *(undefined4 *)(this->WorldToLocal).M[1] = local_158.M[1][0]._0_4_;
  *(undefined4 *)((longlong)(this->WorldToLocal).M[1] + 4) = local_158.M[1][0]._4_4_;
  *(undefined4 *)((this->WorldToLocal).M[1] + 1) = local_158.M[1][1]._0_4_;
  *(undefined4 *)((longlong)(this->WorldToLocal).M[1] + 0xc) = local_158.M[1][1]._4_4_;
  *(uint *)(this->LocalToWorldNoScaling).M[1] = local_1d8.M[1][0]._0_4_;
  *(uint *)((longlong)(this->LocalToWorldNoScaling).M[1] + 4) = local_1d8.M[1][0]._4_4_;
  *(uint *)((this->LocalToWorldNoScaling).M[1] + 1) = local_1d8.M[1][1]._0_4_;
  *(uint *)((longlong)(this->LocalToWorldNoScaling).M[1] + 0xc) = local_1d8.M[1][1]._4_4_;
  *(undefined4 *)((this->WorldToLocal).M[1] + 2) = local_158.M[1][2]._0_4_;
  *(undefined4 *)((longlong)(this->WorldToLocal).M[1] + 0x14) = local_158.M[1][2]._4_4_;
  *(undefined4 *)((this->WorldToLocal).M[1] + 3) = local_158.M[1][3]._0_4_;
  *(undefined4 *)((longlong)(this->WorldToLocal).M[1] + 0x1c) = local_158.M[1][3]._4_4_;
  *(uint *)((this->LocalToWorldNoScaling).M[1] + 2) = local_1d8.M[1][2]._0_4_;
  *(uint *)((longlong)(this->LocalToWorldNoScaling).M[1] + 0x14) = local_1d8.M[1][2]._4_4_;
  *(undefined4 *)((this->LocalToWorldNoScaling).M[1] + 3) = local_1d8.M[1][3]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldNoScaling).M[1] + 0x1c) = local_1d8.M[1][3]._4_4_;
  *(undefined4 *)(this->WorldToLocal).M[2] = local_158.M[2][0]._0_4_;
  *(undefined4 *)((longlong)(this->WorldToLocal).M[2] + 4) = local_158.M[2][0]._4_4_;
  *(undefined4 *)((this->WorldToLocal).M[2] + 1) = local_158.M[2][1]._0_4_;
  *(undefined4 *)((longlong)(this->WorldToLocal).M[2] + 0xc) = local_158.M[2][1]._4_4_;
  *(uint *)(this->LocalToWorldNoScaling).M[2] = local_1d8.M[2][0]._0_4_;
  *(uint *)((longlong)(this->LocalToWorldNoScaling).M[2] + 4) = local_1d8.M[2][0]._4_4_;
  *(uint *)((this->LocalToWorldNoScaling).M[2] + 1) = local_1d8.M[2][1]._0_4_;
  *(uint *)((longlong)(this->LocalToWorldNoScaling).M[2] + 0xc) = local_1d8.M[2][1]._4_4_;
  *(undefined4 *)((this->WorldToLocal).M[2] + 2) = local_158.M[2][2]._0_4_;
  *(undefined4 *)((longlong)(this->WorldToLocal).M[2] + 0x14) = local_158.M[2][2]._4_4_;
  *(undefined4 *)((this->WorldToLocal).M[2] + 3) = local_158.M[2][3]._0_4_;
  *(undefined4 *)((longlong)(this->WorldToLocal).M[2] + 0x1c) = local_158.M[2][3]._4_4_;
  (this->WorldToLocal).M[3][0] = local_318;
  (this->WorldToLocal).M[3][1] = dStack_310;
  (this->WorldToLocal).M[3][2] = local_308;
  (this->WorldToLocal).M[3][3] = dStack_300;
  *(uint *)((this->LocalToWorldNoScaling).M[2] + 2) = local_1d8.M[2][2]._0_4_;
  *(uint *)((longlong)(this->LocalToWorldNoScaling).M[2] + 0x14) = local_1d8.M[2][2]._4_4_;
  *(undefined4 *)((this->LocalToWorldNoScaling).M[2] + 3) = local_1d8.M[2][3]._0_4_;
  *(undefined4 *)((longlong)(this->LocalToWorldNoScaling).M[2] + 0x1c) = local_1d8.M[2][3]._4_4_;
  (this->LocalToWorldNoScaling).M[3][0] = local_1d8.M[3][0];
  (this->LocalToWorldNoScaling).M[3][1] = local_1d8.M[3][1];
  (this->LocalToWorldNoScaling).M[3][2] = local_1d8.M[3][2];
  (this->LocalToWorldNoScaling).M[3][3] = local_1d8.M[3][3];
  local_2f8 = local_1d8.M[3][0];
  dStack_2f0 = local_1d8.M[3][1];
  local_2e8 = local_1d8.M[3][2];
  dStack_2e0 = local_1d8.M[3][3];
  UE::Math::TMatrix<double>::RemoveScaling(this_00,dVar8);
  iStack_2d0 = this->SubsectionSizeVerts;
  local_2d8 = *(undefined4 *)&this->field_0x2a0;
  uStack_2d4 = *(undefined4 *)&this->field_0x2a4;
  iStack_2cc = this->NumSubsections;
  local_298 = *(undefined8 *)&(this->HeightmapScaleBias).field0_0x0;
  uStack_290 = *(undefined8 *)((longlong)&(this->HeightmapScaleBias).field0_0x0 + 8);
  local_288 = *(undefined8 *)&(this->WeightmapScaleBias).field0_0x0;
  uStack_280 = *(undefined8 *)((longlong)&(this->WeightmapScaleBias).field0_0x0 + 8);
  iStack_2c4 = this->NumRayTracingSections;
  local_2c8 = iStack_2d0 / this->NumRayTracingSections;
  iStack_2c0 = GLandscapeRayTracingLODBias;
  iStack_2bc = this->LastLOD;
  local_2b8 = (uint)this->VirtualTexturePerPixelHeight;
  local_238 = (float)this_00->M[0][0];
  fStack_234 = (float)(this->LocalToWorldNoScaling).M[0][1];
  fStack_230 = (float)(this->LocalToWorldNoScaling).M[0][2];
  fStack_22c = (float)(this->LocalToWorldNoScaling).M[0][3];
  local_228 = (float)(this->LocalToWorldNoScaling).M[1][0];
  fStack_224 = (float)(this->LocalToWorldNoScaling).M[1][1];
  fStack_220 = (float)(this->LocalToWorldNoScaling).M[1][2];
  fStack_21c = (float)(this->LocalToWorldNoScaling).M[1][3];
  fStack_2b4 = this->InvLODBlendRange;
  fStack_270 = local_320[0];
  fStack_2b0 = this->VirtualShadowMapConstantDepthBias;
  local_278 = fVar22;
  fStack_274 = fVar21;
  local_218 = (float)(this->LocalToWorldNoScaling).M[2][0];
  fStack_214 = (float)(this->LocalToWorldNoScaling).M[2][1];
  fStack_210 = (float)(this->LocalToWorldNoScaling).M[2][2];
  fStack_20c = (float)(this->LocalToWorldNoScaling).M[2][3];
  local_208 = (float)(this->LocalToWorldNoScaling).M[3][0];
  fStack_204 = (float)(this->LocalToWorldNoScaling).M[3][1];
  fStack_200 = (float)(this->LocalToWorldNoScaling).M[3][2];
  fStack_1fc = (float)(this->LocalToWorldNoScaling).M[3][3];
  fStack_26c = local_324;
  local_240 = 0;
  local_268 = (float)iStack_2d0;
  local_24c = (float)this->SubsectionSizeQuads;
  fStack_264 = fVar9 / (float)this->SubsectionSizeQuads;
  fStack_260 = (float)(this->SectionBase).field0_0x0._s_0.X;
  local_258 = this->HeightmapSubsectionOffsetU;
  local_250 = this->WeightmapSubsectionOffset;
  fStack_25c = (float)(this->SectionBase).field0_0x0._s_0.Y;
  local_254 = this->HeightmapSubsectionOffsetV;
  local_248 = local_328 * fVar22;
  local_244 = local_328 * fVar21;
  if ((this->HeightmapTexture == (UTexture2D *)0x0) ||
     (pFVar13 = UTexture::GetResource((UTexture *)this->HeightmapTexture),
     pFVar13 == (FTextureResource *)0x0)) {
    local_2a8 = ___xmm_3f8000003f8000003f8000003f800000;
    uStack_2a0 = _UNK_15076b1f8;
    local_1f0 = (GBlackTexture->SamplerStateRHI).Reference;
    local_1e8 = (GBlackTexture->TextureRHI).Reference;
    local_1e0 = local_1f0;
  }
  else {
    uVar11 = (**(code **)(pFVar13->_padding_ + 0x30))(pFVar13);
    uVar15 = 1;
    if (1 < uVar11) {
      uVar15 = uVar11;
    }
    uVar12 = (**(code **)(pFVar13->_padding_ + 0x38))(pFVar13);
    uVar11 = 1;
    if (1 < uVar12) {
      uVar11 = uVar12;
    }
    local_1f0 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                ::StaticResource.StateRHI.Reference;
    local_1e8 = *(FRHITexture **)(this->HeightmapTexture->_padding_ + 0x20);
    local_1e0 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                ::StaticResource.StateRHI.Reference;
    local_2a8 = CONCAT44((float)uVar11,(float)uVar15);
    uStack_2a0 = CONCAT44(fVar9 / (float)uVar11,fVar9 / (float)uVar15);
  }
  puVar14 = (this->LandscapeUniformShaderParameters).Contents;
  local_1f8 = local_1e8;
  if (puVar14 == (uchar *)0x0) {
    puVar14 = FMemory::Malloc(0x100,0x10);
    (this->LandscapeUniformShaderParameters).Contents = puVar14;
  }
  lVar18 = 2;
  puVar17 = (undefined8 *)&local_2d8;
  do {
    uVar4 = puVar17[1];
    uVar5 = puVar17[2];
    uVar6 = puVar17[3];
    *(undefined8 *)puVar14 = *puVar17;
    *(undefined8 *)(puVar14 + 8) = uVar4;
    uVar4 = puVar17[4];
    uVar7 = puVar17[5];
    *(undefined8 *)(puVar14 + 0x10) = uVar5;
    *(undefined8 *)(puVar14 + 0x18) = uVar6;
    uVar5 = puVar17[6];
    uVar6 = puVar17[7];
    *(undefined8 *)(puVar14 + 0x20) = uVar4;
    *(undefined8 *)(puVar14 + 0x28) = uVar7;
    uVar4 = puVar17[8];
    uVar7 = puVar17[9];
    *(undefined8 *)(puVar14 + 0x30) = uVar5;
    *(undefined8 *)(puVar14 + 0x38) = uVar6;
    uVar5 = puVar17[10];
    uVar6 = puVar17[0xb];
    *(undefined8 *)(puVar14 + 0x40) = uVar4;
    *(undefined8 *)(puVar14 + 0x48) = uVar7;
    uVar4 = puVar17[0xc];
    uVar7 = puVar17[0xd];
    *(undefined8 *)(puVar14 + 0x50) = uVar5;
    *(undefined8 *)(puVar14 + 0x58) = uVar6;
    uVar5 = puVar17[0xe];
    uVar6 = puVar17[0xf];
    *(undefined8 *)(puVar14 + 0x60) = uVar4;
    *(undefined8 *)(puVar14 + 0x68) = uVar7;
    *(undefined8 *)(puVar14 + 0x70) = uVar5;
    *(undefined8 *)(puVar14 + 0x78) = uVar6;
    lVar18 = lVar18 + -1;
    puVar14 = puVar14 + 0x80;
    puVar17 = puVar17 + 0x10;
  } while (lVar18 != 0);
  FRenderResource::UpdateRHI((FRenderResource *)&this->LandscapeUniformShaderParameters,param_1);
  (**(code **)(**(longlong **)&this->field_0x220 + 0x288))(*(longlong **)&this->field_0x220,this);
  return;
}

// RayTracingNotifyViewDeleted @ 145f9cdc0

void __thiscall
FLandscapeComponentSceneProxy::RayTracingNotifyViewDeleted
          (FLandscapeComponentSceneProxy *this,uint param_1)

{
  code *pcVar1;
  ForAnyElementType *pFVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FLandscapeRayTracingState,TSizedDefaultAllocator<32>_> *this_00;
  
  this_00 = *(TArray<FLandscapeRayTracingState,TSizedDefaultAllocator<32>_> **)&this->field_0x40;
  if ((this_00 != (TArray<FLandscapeRayTracingState,TSizedDefaultAllocator<32>_> *)0x0) &&
     (uVar5 = 0, 0 < this_00->ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < this_00->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar2 = &this_00->AllocatorInstance;
      this_00 = *(TArray<FLandscapeRayTracingState,TSizedDefaultAllocator<32>_> **)&this->field_0x40
      ;
      if (*(uint *)(pFVar2->Data + lVar6) == param_1) {
        uVar4 = 0;
        if ((int)uVar5 < this_00->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<FLandscapeRayTracingState,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&this_00->AllocatorInstance,this_00->ArrayNum,&this_00->ArrayMax);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while ((int)uVar5 < this_00->ArrayNum);
  }
  return;
}

// ShouldInvalidateShadows @ 145fa2fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FLandscapeComponentSceneProxy::ShouldInvalidateShadows
          (FLandscapeComponentSceneProxy *this,FSceneView *param_1,float param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  uint uVar14;
  double dVar15;
  float fVar16;
  FString local_e8 [11];
  
  fVar10 = __real_3f000000;
  if ((((this->ComponentSizeVerts == 0) || (!GLandscapeAllowNonNaniteVirtualShadowMapInvalidation))
      || ((this->field_0x150 != '\0' && ((param_1->Family->EngineShowFlags).NaniteMeshes != 0)))) ||
     (*(float *)&(this->SectionBase).field0_0x0 <= 0.0)) {
    bVar3 = false;
  }
  else {
    fVar11 = (float)(this->NumSubsections + -1) - __real_38d1b717;
    fVar12 = fVar11;
    if (param_3 <= fVar11) {
      fVar12 = param_3;
    }
    if (param_2 <= fVar11) {
      fVar11 = param_2;
    }
    fVar16 = fVar12;
    if (fVar11 <= fVar12) {
      fVar16 = fVar11;
    }
    if (fVar12 <= fVar11) {
      fVar12 = fVar11;
    }
    iVar6 = (int)ROUND((fVar16 + fVar16) - __real_3f000000) >> 1;
    if ((this->NumSubsections <= iVar6 + 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceMipIndex + 1 < NumRelevantMips",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                           ,0x11ed,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar7 = (int)ROUND((fVar12 + fVar12) - fVar10) >> 1;
    iVar1 = iVar7 + 1;
    if ((this->NumSubsections <= iVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DestinationMipIndex + 1 < NumRelevantMips",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                           ,0x11ef,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar5 = UE::Landscape::Private::ComputeMipToMipMaxDeltasIndex
                      (iVar6,iVar6 + 1,this->NumSubsections);
    uVar14 = 0;
    if ((int)uVar5 < this->ComponentSizeVerts) {
      uVar14 = ~uVar5 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    dVar15 = *(double *)(*(longlong *)&this->SubsectionSizeVerts + (longlong)(int)uVar5 * 8);
    uVar5 = UE::Landscape::Private::ComputeMipToMipMaxDeltasIndex(iVar6,iVar1,this->NumSubsections);
    uVar14 = 0;
    if ((int)uVar5 < this->ComponentSizeVerts) {
      uVar14 = ~uVar5 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    dVar13 = *(double *)(*(longlong *)&this->SubsectionSizeVerts + (longlong)(int)uVar5 * 8);
    if ((iVar1 <= iVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceMipIndex < DestinationMipIndex + 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                           ,0x11fc,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar8 = (undefined4)__real_3ff0000000000000;
    uVar9 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar15 = ((double)(fVar12 - (float)iVar6) * dVar13) / (double)((iVar7 - iVar6) + 1) -
             (double)(fVar16 - (float)iVar6) * dVar15;
    uVar14 = SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)dVar15 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (0.0 < *(float *)&this->field_0x88) {
      fVar10 = __real_3f800000 - fVar16 / *(float *)&this->field_0x88;
      if (__real_3f800000 <= fVar10) {
        fVar10 = __real_3f800000;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      dVar15 = pow((double)fVar10,
                   (double)GLandscapeNonNaniteVirtualShadowMapInvalidationLODAttenuationExponent);
      uVar8 = SUB84(dVar15,0);
      uVar9 = (undefined4)((ulonglong)dVar15 >> 0x20);
    }
    dVar15 = (double)*(float *)&(this->SectionBase).field0_0x0;
    dVar13 = (double)CONCAT44(uVar9,uVar8) * (double)CONCAT44(uVar5,uVar14);
    bVar3 = dVar15 < dVar13;
    if ((dVar15 < dVar13) && (5 < (byte)LogLandscape._0_1_)) {
      ::FName::ToString((FName *)((this->GrassMeshBatch).Elements.AllocatorInstance.InlineData +
                                 0x48),local_e8);
      FSceneView::GetViewKey(param_1);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return bVar3;
}

