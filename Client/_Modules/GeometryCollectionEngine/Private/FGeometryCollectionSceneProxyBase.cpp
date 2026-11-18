// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 13

// FGeometryCollectionSceneProxyBase @ 1463a2220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FGeometryCollectionSceneProxyBase * __thiscall
FGeometryCollectionSceneProxyBase::FGeometryCollectionSceneProxyBase
          (FGeometryCollectionSceneProxyBase *this,UGeometryCollectionComponent *param_1,
          bool param_2)

{
  int *piVar1;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FGeometryCollectionRenderData *pFVar3;
  code *pcVar4;
  UGeometryCollection *pUVar5;
  FGeometryCollection *this_00;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  EShaderPlatform EVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FSceneInterface *pFVar16;
  FGeometryCollectionSceneProxyBase *pFVar17;
  UMaterial *pUVar18;
  FGeometryCollectionDynamicData *pFVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined8 local_48 [2];
  
  this->bIsNanite = param_2;
  this->_padding_ = (longlong)&___7FGeometryCollectionSceneProxyBase__6B_;
  pFVar16 = UActorComponent::GetScene((UActorComponent *)param_1);
  this->FeatureLevel = pFVar16->FeatureLevel;
  pFVar3 = (((param_1->RestCollection).field0_0x0.DebugPtr)->RenderData).Ptr;
  (this->MeshDescription).NumVertices = 0;
  (this->MeshDescription).NumTriangles = 0;
  this->MeshResource = &pFVar3->MeshResource;
  (this->MeshDescription).Sections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshDescription).Sections.ArrayNum = 0;
  (this->MeshDescription).Sections.ArrayMax = 0;
  (this->MeshDescription).SectionsNoInternal.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->MeshDescription).SectionsNoInternal.ArrayNum = 0;
  (this->MeshDescription).SectionsNoInternal.ArrayMax = 0;
  (this->MeshDescription).SubSections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshDescription).SubSections.ArrayNum = 0;
  (this->MeshDescription).SubSections.ArrayMax = 0;
  pcVar4 = *(code **)(*(longlong *)param_1 + 0xaa8);
  pFVar16 = UActorComponent::GetScene((UActorComponent *)param_1);
  FSceneInterface::GetShaderPlatform(pFVar16);
  (*pcVar4)(param_1,&this->MaterialRelevance);
  FGeometryCollectionVertexFactory::FGeometryCollectionVertexFactory
            (&this->VertexFactory,this->FeatureLevel,false);
  pFVar16 = UActorComponent::GetScene((UActorComponent *)param_1);
  EVar12 = FSceneInterface::GetShaderPlatform(pFVar16);
  bVar10 = FGeometryCollectionVertexFactory::UseShaderBoneTransform(EVar12);
  pTVar2 = &this->Materials;
  this->bUseShaderBoneTransform = bVar10;
  bVar10 = GRHIGlobals.SupportsMapWriteNoOverwrite;
  piVar1 = &(this->Materials).ArrayMax;
  *piVar1 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  this->NumTransforms = 0;
  this->DynamicData = (FGeometryCollectionDynamicData *)0x0;
  this->bSupportsTripleBufferVertexUpload = bVar10;
  FPositionVertexBuffer::FPositionVertexBuffer(&this->SkinnedPositionVertexBuffer);
  this->CurrentTransformBufferIndex = 0;
  (this->TransformBuffers).AllocatorInstance.SecondaryData =
       (ForElementType<FGeometryCollectionTransformBuffer>)0x0;
  (this->TransformBuffers).ArrayNum = 0;
  (this->TransformBuffers).ArrayMax = 3;
  bVar10 = IsRayTracingEnabled();
  if (((bVar10) &&
      (pFVar3 = (((param_1->RestCollection).field0_0x0.DebugPtr)->RenderData).Ptr,
      pFVar3->bHasMeshData != false)) && ((pFVar3->MeshDescription).NumVertices != 0)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  this->bHasRayTracingRepresentation = bVar10;
  FRayTracingGeometry::FRayTracingGeometry(&this->RayTracingGeometry);
  (this->RayTracingDynamicVertexBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->RayTracingDynamicVertexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->RayTracingDynamicVertexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->RayTracingDynamicVertexBuffer).NumBytes = 0;
  (this->RayTracingDynamicVertexBuffer).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->RayTracingDynamicVertexBuffer).ClassName.Number = 0;
  (this->RayTracingDynamicVertexBuffer).OwnerName.Number = 0;
  (this->PartRayTracingGeometries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartRayTracingGeometries).ArrayNum = 0;
  (this->PartRayTracingGeometries).ArrayMax = 0;
  this->bRenderResourcesCreated = false;
  if ((this->bIsNanite == false) || (this->bHasRayTracingRepresentation != false)) {
    lVar20 = *(longlong *)((longlong)(param_1->RestCollection).field0_0x0 + 0x60);
    (this->MeshDescription).NumVertices = *(uint *)(lVar20 + 0x1f8);
    (this->MeshDescription).NumTriangles = *(uint *)(lVar20 + 0x1fc);
    TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MeshDescription).Sections,
               (TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *)
               (lVar20 + 0x200));
    TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MeshDescription).SectionsNoInternal,
               (TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *)
               (lVar20 + 0x210));
    TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>::operator=
              (&(this->MeshDescription).SubSections,
               (TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *)
               (lVar20 + 0x220));
    pUVar5 = (param_1->RestCollection).field0_0x0.DebugPtr;
    this_00 = (pUVar5->GeometryCollection).Object;
    pTVar6 = (pUVar5->GeometryCollection).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FGeometryCollection *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar13 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)this_00,FTransformCollection::TransformGroup);
    }
    this->NumTransforms = iVar13;
    (this->Materials).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    uVar22 = 0;
    iVar13 = (**(code **)(*(longlong *)param_1 + 0x810))(param_1);
    if (0 < (longlong)iVar13) {
      lVar20 = 0;
      do {
        local_48[0] = (**(code **)(*(longlong *)param_1 + 0x690))(param_1,uVar22);
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 < pFVar7 + (longlong)*piVar1 * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          pFVar17 = (FGeometryCollectionSceneProxyBase *)(*pcVar4)();
          return pFVar17;
        }
        iVar14 = (this->Materials).ArrayNum;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->Materials).ArrayNum = iVar14 + 1;
        uVar21 = ~uVar22 >> 0x1f;
        *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_48[0];
        uVar15 = 0;
        if ((int)uVar22 < (this->Materials).ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          pFVar17 = (FGeometryCollectionSceneProxyBase *)(*pcVar4)();
          return pFVar17;
        }
        if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar20 * 8) == 0) {
LAB_1463a2610:
          pUVar18 = UMaterial::GetDefaultMaterial(MD_Surface);
          uVar15 = 0;
          if ((int)uVar22 < (this->Materials).ArrayNum) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            pFVar17 = (FGeometryCollectionSceneProxyBase *)(*pcVar4)();
            return pFVar17;
          }
          *(UMaterial **)((pTVar2->AllocatorInstance).Data + lVar20 * 8) = pUVar18;
        }
        else {
          uVar15 = 0;
          if ((int)uVar22 < (this->Materials).ArrayNum) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            pFVar17 = (FGeometryCollectionSceneProxyBase *)(*pcVar4)();
            return pFVar17;
          }
          plVar8 = *(longlong **)((pTVar2->AllocatorInstance).Data + lVar20 * 8);
          cVar11 = (**(code **)(*plVar8 + 0x378))(plVar8,8);
          if (cVar11 == '\0') goto LAB_1463a2610;
        }
        uVar22 = uVar22 + 1;
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar13);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  lVar20 = *(longlong *)((longlong)(param_1->RestCollection).field0_0x0 + 0x60);
  dVar9 = *(double *)(lVar20 + 0x240);
  (this->PreSkinnedBounds).Origin.field0_0x0._s_0.X = *(double *)(lVar20 + 0x238);
  (this->PreSkinnedBounds).Origin.field0_0x0._s_0.Y = dVar9;
  dVar9 = *(double *)(lVar20 + 0x250);
  (this->PreSkinnedBounds).Origin.field0_0x0._s_0.Z = *(double *)(lVar20 + 0x248);
  (this->PreSkinnedBounds).BoxExtent.field0_0x0._s_0.X = dVar9;
  dVar9 = *(double *)(lVar20 + 0x260);
  (this->PreSkinnedBounds).BoxExtent.field0_0x0._s_0.Y = *(double *)(lVar20 + 600);
  (this->PreSkinnedBounds).BoxExtent.field0_0x0._s_0.Z = dVar9;
  (this->PreSkinnedBounds).SphereRadius = *(double *)(lVar20 + 0x268);
  pFVar19 = UGeometryCollectionComponent::InitDynamicData(param_1,true);
  this->DynamicData = pFVar19;
  return this;
}

// ~FGeometryCollectionSceneProxyBase @ 1463a56e0

void __thiscall
FGeometryCollectionSceneProxyBase::~FGeometryCollectionSceneProxyBase
          (FGeometryCollectionSceneProxyBase *this)

{
  FScriptContainerElement *pFVar1;
  TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters> this_00;
  FRHIUniformBuffer *this_01;
  ForElementType<FGeometryCollectionTransformBuffer> FVar2;
  
  this->_padding_ = (longlong)&___7FGeometryCollectionSceneProxyBase__6B_;
  if (this->DynamicData != (FGeometryCollectionDynamicData *)0x0) {
    FGeometryCollectionDynamicDataPool::Release(&GDynamicDataPool,this->DynamicData);
    this->DynamicData = (FGeometryCollectionDynamicData *)0x0;
  }
  DestructItems<FRayTracingGeometry,int>
            ((FRayTracingGeometry *)(this->PartRayTracingGeometries).AllocatorInstance.Data,
             (this->PartRayTracingGeometries).ArrayNum);
  pFVar1 = (this->PartRayTracingGeometries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRWBuffer::~FRWBuffer(&this->RayTracingDynamicVertexBuffer);
  FRayTracingGeometry::~FRayTracingGeometry(&this->RayTracingGeometry);
  FVar2 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
    FVar2 = (ForElementType<FGeometryCollectionTransformBuffer>)&this->TransformBuffers;
  }
  DestructItems<FGeometryCollectionTransformBuffer,int>
            ((FGeometryCollectionTransformBuffer *)FVar2,(this->TransformBuffers).ArrayNum);
  FVar2 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FPositionVertexBuffer::~FPositionVertexBuffer(&this->SkinnedPositionVertexBuffer);
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->VertexFactory).UniformBuffer;
  if (this_00 != (TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->VertexFactory).LooseParameterUniformBuffer.Reference;
  if (this_01 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  pFVar1 = (this->MeshDescription).SubSections.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshDescription).SectionsNoInternal.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshDescription).Sections.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 1463a73a0

void __thiscall
`FGeometryCollectionSceneProxyBase::UpdateSkinnedPositions'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  
  uVar20 = **(uint **)this;
  uVar23 = uVar20 * param_1;
  if (*(uint *)(*(longlong *)((longlong)this + 8) + 0x18) < uVar23 + uVar20) {
    uVar20 = **(int **)((longlong)this + 0x10) - uVar23;
  }
  if (uVar20 != 0) {
    lVar9 = **(longlong **)((longlong)this + 0x18);
    if (bGeometryCollection_SetDynamicData_ISPC_Enabled) {
      SetDynamicData_RenderThread
                ((ulonglong)(**(int **)((longlong)this + 0x28) * uVar23) +
                 **(longlong **)((longlong)this + 0x20),uVar20,**(int **)((longlong)this + 0x28),
                 (ulonglong)(uVar23 * 2) +
                 *(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x40),lVar9,
                 (ulonglong)(uVar23 * *(int *)(*(longlong *)((longlong)this + 0x38) + 0x40)) +
                 *(longlong *)(*(longlong *)((longlong)this + 0x38) + 0x38));
      return;
    }
    uVar1 = uVar20 + uVar23;
    if (uVar23 < uVar1) {
      if (3 < uVar20) {
        iVar21 = uVar23 + 2;
        do {
          uVar18 = (ulonglong)(uVar23 * *(int *)(*(longlong *)((longlong)this + 0x38) + 0x40));
          lVar19 = *(longlong *)(*(longlong *)((longlong)this + 0x38) + 0x38);
          fVar6 = *(float *)(uVar18 + lVar19);
          fVar7 = *(float *)(uVar18 + 4 + lVar19);
          fVar8 = *(float *)(uVar18 + 8 + lVar19);
          lVar19 = (ulonglong)
                   *(ushort *)
                    (*(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x40) +
                    (ulonglong)(uVar23 * 2)) * 0x40;
          pfVar3 = (float *)(lVar19 + 0x10 + lVar9);
          fVar10 = pfVar3[1];
          fVar11 = pfVar3[2];
          pfVar4 = (float *)(lVar19 + 0x30 + lVar9);
          fVar12 = pfVar4[1];
          fVar13 = pfVar4[2];
          pfVar2 = (float *)(lVar19 + lVar9);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          pfVar5 = (float *)(lVar19 + 0x20 + lVar9);
          fVar16 = pfVar5[1];
          fVar17 = pfVar5[2];
          uVar18 = (ulonglong)(uVar23 * **(int **)((longlong)this + 0x28));
          lVar19 = **(longlong **)((longlong)this + 0x20);
          *(float *)(uVar18 + lVar19) =
               fVar7 * *pfVar3 + fVar6 * *pfVar2 + fVar8 * *pfVar5 + *pfVar4 * 1.0;
          *(float *)(uVar18 + 4 + lVar19) =
               fVar7 * fVar10 + fVar6 * fVar14 + fVar8 * fVar16 + fVar12 * 1.0;
          *(float *)(uVar18 + 8 + lVar19) =
               fVar7 * fVar11 + fVar6 * fVar15 + fVar8 * fVar17 + fVar13 * 1.0;
          uVar18 = (ulonglong)
                   (uint)((iVar21 + -1) * *(int *)(*(longlong *)((longlong)this + 0x38) + 0x40));
          lVar19 = *(longlong *)(*(longlong *)((longlong)this + 0x38) + 0x38);
          fVar6 = *(float *)(uVar18 + lVar19);
          fVar7 = *(float *)(uVar18 + 4 + lVar19);
          fVar8 = *(float *)(uVar18 + 8 + lVar19);
          lVar19 = (ulonglong)
                   *(ushort *)
                    ((ulonglong)(uVar23 * 2 + 2) +
                    *(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x40)) * 0x40;
          pfVar3 = (float *)(lVar19 + 0x10 + lVar9);
          fVar10 = pfVar3[1];
          fVar11 = pfVar3[2];
          pfVar2 = (float *)(lVar19 + lVar9);
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          pfVar4 = (float *)(lVar19 + 0x20 + lVar9);
          fVar14 = pfVar4[1];
          fVar15 = pfVar4[2];
          pfVar5 = (float *)(lVar19 + 0x30 + lVar9);
          fVar16 = pfVar5[1];
          fVar17 = pfVar5[2];
          uVar18 = (ulonglong)(uint)((iVar21 + -1) * **(int **)((longlong)this + 0x28));
          lVar19 = **(longlong **)((longlong)this + 0x20);
          *(float *)(uVar18 + lVar19) =
               fVar7 * *pfVar3 + fVar6 * *pfVar2 + fVar8 * *pfVar4 + *pfVar5 * 1.0;
          *(float *)(uVar18 + 4 + lVar19) =
               fVar7 * fVar10 + fVar6 * fVar12 + fVar8 * fVar14 + fVar16 * 1.0;
          *(float *)(uVar18 + 8 + lVar19) =
               fVar7 * fVar11 + fVar6 * fVar13 + fVar8 * fVar15 + fVar17 * 1.0;
          iVar22 = iVar21 + 1;
          uVar18 = (ulonglong)(uint)(iVar21 * *(int *)(*(longlong *)((longlong)this + 0x38) + 0x40))
          ;
          lVar19 = *(longlong *)(*(longlong *)((longlong)this + 0x38) + 0x38);
          fVar6 = *(float *)(uVar18 + lVar19);
          fVar7 = *(float *)(uVar18 + 4 + lVar19);
          fVar8 = *(float *)(uVar18 + 8 + lVar19);
          lVar19 = (ulonglong)
                   *(ushort *)
                    ((ulonglong)(uint)(iVar21 * 2) +
                    *(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x40)) * 0x40;
          pfVar3 = (float *)(lVar19 + 0x10 + lVar9);
          fVar10 = pfVar3[1];
          fVar11 = pfVar3[2];
          pfVar4 = (float *)(lVar19 + 0x30 + lVar9);
          fVar12 = pfVar4[1];
          fVar13 = pfVar4[2];
          pfVar2 = (float *)(lVar19 + lVar9);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          pfVar5 = (float *)(lVar19 + 0x20 + lVar9);
          fVar16 = pfVar5[1];
          fVar17 = pfVar5[2];
          uVar18 = (ulonglong)(uint)(iVar21 * **(int **)((longlong)this + 0x28));
          lVar19 = **(longlong **)((longlong)this + 0x20);
          *(float *)(uVar18 + lVar19) =
               fVar7 * *pfVar3 + fVar6 * *pfVar2 + fVar8 * *pfVar5 + *pfVar4 * 1.0;
          *(float *)(uVar18 + 4 + lVar19) =
               fVar7 * fVar10 + fVar6 * fVar14 + fVar8 * fVar16 + fVar12 * 1.0;
          *(float *)(uVar18 + 8 + lVar19) =
               fVar7 * fVar11 + fVar6 * fVar15 + fVar8 * fVar17 + fVar13 * 1.0;
          uVar18 = (ulonglong)(uint)(iVar22 * *(int *)(*(longlong *)((longlong)this + 0x38) + 0x40))
          ;
          lVar19 = *(longlong *)(*(longlong *)((longlong)this + 0x38) + 0x38);
          fVar6 = *(float *)(uVar18 + lVar19);
          fVar7 = *(float *)(uVar18 + 8 + lVar19);
          fVar8 = *(float *)(uVar18 + 4 + lVar19);
          lVar19 = (ulonglong)
                   *(ushort *)
                    ((ulonglong)(uint)(iVar22 * 2) +
                    *(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x40)) * 0x40;
          pfVar3 = (float *)(lVar19 + 0x10 + lVar9);
          fVar10 = pfVar3[1];
          fVar11 = pfVar3[2];
          pfVar2 = (float *)(lVar19 + lVar9);
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          uVar23 = uVar23 + 4;
          pfVar4 = (float *)(lVar19 + 0x20 + lVar9);
          fVar14 = pfVar4[1];
          fVar15 = pfVar4[2];
          iVar21 = iVar21 + 4;
          pfVar5 = (float *)(lVar19 + 0x30 + lVar9);
          fVar16 = pfVar5[1];
          fVar17 = pfVar5[2];
          uVar18 = (ulonglong)(uint)(iVar22 * **(int **)((longlong)this + 0x28));
          lVar19 = **(longlong **)((longlong)this + 0x20);
          *(float *)(uVar18 + lVar19) =
               fVar8 * *pfVar3 + fVar6 * *pfVar2 + fVar7 * *pfVar4 + *pfVar5 * 1.0;
          *(float *)(uVar18 + 4 + lVar19) =
               fVar8 * fVar10 + fVar6 * fVar12 + fVar7 * fVar14 + fVar16 * 1.0;
          *(float *)(uVar18 + 8 + lVar19) =
               fVar8 * fVar11 + fVar6 * fVar13 + fVar7 * fVar15 + fVar17 * 1.0;
        } while (uVar23 < uVar1 - 3);
        if (uVar1 <= uVar23) {
          return;
        }
      }
      do {
        uVar18 = (ulonglong)(uVar23 * *(int *)(*(longlong *)((longlong)this + 0x38) + 0x40));
        lVar19 = *(longlong *)(*(longlong *)((longlong)this + 0x38) + 0x38);
        fVar6 = *(float *)(uVar18 + lVar19);
        fVar7 = *(float *)(uVar18 + 4 + lVar19);
        fVar8 = *(float *)(uVar18 + 8 + lVar19);
        lVar19 = (ulonglong)
                 *(ushort *)
                  ((ulonglong)(uVar23 * 2) +
                  *(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x40)) * 0x40;
        uVar20 = uVar23 + 1;
        pfVar3 = (float *)(lVar19 + 0x10 + lVar9);
        fVar10 = pfVar3[1];
        fVar11 = pfVar3[2];
        pfVar2 = (float *)(lVar19 + lVar9);
        fVar12 = pfVar2[1];
        fVar13 = pfVar2[2];
        pfVar4 = (float *)(lVar19 + 0x20 + lVar9);
        fVar14 = pfVar4[1];
        fVar15 = pfVar4[2];
        pfVar5 = (float *)(lVar19 + 0x30 + lVar9);
        fVar16 = pfVar5[1];
        fVar17 = pfVar5[2];
        uVar18 = (ulonglong)(uVar23 * **(int **)((longlong)this + 0x28));
        lVar19 = **(longlong **)((longlong)this + 0x20);
        *(float *)(uVar18 + lVar19) =
             fVar7 * *pfVar3 + fVar6 * *pfVar2 + fVar8 * *pfVar4 + *pfVar5 * 1.0;
        *(float *)(uVar18 + 4 + lVar19) =
             fVar7 * fVar10 + fVar6 * fVar12 + fVar8 * fVar14 + fVar16 * 1.0;
        *(float *)(uVar18 + 8 + lVar19) =
             fVar7 * fVar11 + fVar6 * fVar13 + fVar8 * fVar15 + fVar17 * 1.0;
        uVar23 = uVar20;
      } while (uVar20 < uVar1);
    }
  }
  return;
}

// CreateRenderThreadResources @ 1463af390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCollectionSceneProxyBase::CreateRenderThreadResources
          (FGeometryCollectionSceneProxyBase *this,FRHICommandListBase *param_1)

{
  TArray<FGeometryCollectionTransformBuffer,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FGeometryCollectionTransformBuffer> FVar4;
  FGeometryCollectionTransformBuffer *this_01;
  EResourceLockMode EVar5;
  
  if ((this->bIsNanite != false) && (this->bHasRayTracingRepresentation == false)) {
    this->bRenderResourcesCreated = true;
    return;
  }
  if (this->bUseShaderBoneTransform == false) {
    FPositionVertexBuffer::Init
              (&this->SkinnedPositionVertexBuffer,
               (this->MeshResource->PositionVertexBuffer).NumVertices,false);
    (**(code **)((this->SkinnedPositionVertexBuffer)._padding_ + 0x18))
              (&this->SkinnedPositionVertexBuffer,param_1);
    UpdateSkinnedPositions(this,param_1,&this->DynamicData->Transforms);
  }
  else {
    this_00 = &this->TransformBuffers;
    EVar5 = RLM_WriteOnly;
    TArray<FGeometryCollectionTransformBuffer,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
    ::AddDefaulted(this_00,1);
    iVar1 = this->NumTransforms;
    if ((this->TransformBuffers).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar4 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
      FVar4 = (ForElementType<FGeometryCollectionTransformBuffer>)this_00;
    }
    *(int *)((longlong)FVar4 + 0x28) = iVar1;
    if ((this->TransformBuffers).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar4 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
      FVar4 = (ForElementType<FGeometryCollectionTransformBuffer>)this_00;
    }
    (**(code **)(*(longlong *)FVar4 + 0x18))(FVar4,param_1);
    if ((GGeometryCollectionTripleBufferUploads != 0) &&
       (this->bSupportsTripleBufferVertexUpload != false)) {
      EVar5 = RLM_WriteOnly_NoOverwrite;
    }
    this_01 = GetCurrentTransformBuffer(this);
    FGeometryCollectionTransformBuffer::UpdateDynamicData
              (this_01,param_1,&this->DynamicData->Transforms,EVar5);
  }
  SetupVertexFactory(this,param_1,&this->VertexFactory,(FColorVertexBuffer *)0x0);
  this->bRenderResourcesCreated = true;
  return;
}

// DestroyRenderThreadResources @ 1463b0440

void __thiscall
FGeometryCollectionSceneProxyBase::DestroyRenderThreadResources
          (FGeometryCollectionSceneProxyBase *this)

{
  TArray<FGeometryCollectionTransformBuffer,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIShaderResourceView *this_02;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<FGeometryCollectionTransformBuffer> FVar7;
  ForElementType<FGeometryCollectionTransformBuffer> FVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  
  uVar10 = 0;
  this->bRenderResourcesCreated = false;
  if ((this->bIsNanite == false) || (this->bHasRayTracingRepresentation != false)) {
    if (this->bUseShaderBoneTransform == false) {
      (**(code **)((this->SkinnedPositionVertexBuffer)._padding_ + 0x20))();
    }
    else {
      pTVar1 = &this->TransformBuffers;
      uVar13 = uVar10;
      if (0 < (this->TransformBuffers).ArrayNum) {
        do {
          uVar9 = (uint)uVar10;
          uVar6 = 0;
          if ((int)uVar9 < (this->TransformBuffers).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar7 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
          FVar8 = (ForElementType<FGeometryCollectionTransformBuffer>)pTVar1;
          if (FVar7 != (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
            FVar8 = FVar7;
          }
          (**(code **)(*(longlong *)(uVar13 + (longlong)FVar8) + 0x20))
                    ((longlong)(int)uVar9 * 0x38 + (longlong)FVar8);
          uVar10 = (ulonglong)(uVar9 + 1);
          uVar13 = uVar13 + 0x38;
        } while ((int)(uVar9 + 1) < (this->TransformBuffers).ArrayNum);
      }
      iVar3 = (this->TransformBuffers).ArrayNum;
      piVar2 = &(this->TransformBuffers).ArrayMax;
      FVar7 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
      if (*piVar2 < 0) {
        if (FVar7 == (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
          FVar7 = (ForElementType<FGeometryCollectionTransformBuffer>)pTVar1;
        }
        DestructItems<FGeometryCollectionTransformBuffer,int>
                  ((FGeometryCollectionTransformBuffer *)FVar7,iVar3);
        (this->TransformBuffers).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FGeometryCollectionTransformBuffer>_>
                    (0x38,8,0,&pTVar1->AllocatorInstance,0,piVar2);
        }
      }
      else {
        if (FVar7 == (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
          FVar7 = (ForElementType<FGeometryCollectionTransformBuffer>)pTVar1;
        }
        DestructItems<FGeometryCollectionTransformBuffer,int>
                  ((FGeometryCollectionTransformBuffer *)FVar7,iVar3);
        (this->TransformBuffers).ArrayNum = 0;
      }
    }
  }
  (**(code **)((this->VertexFactory)._padding_ + 0x20))();
  if (this->bHasRayTracingRepresentation != false) {
    pFVar12 = (this->PartRayTracingGeometries).AllocatorInstance.Data;
    iVar3 = (this->PartRayTracingGeometries).ArrayNum;
    pFVar11 = pFVar12 + (longlong)iVar3 * 0x100;
    while( true ) {
      if ((this->PartRayTracingGeometries).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FRayTracingGeometry,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar12 == pFVar11) break;
      (**(code **)(*(longlong *)pFVar12 + 0x20))(pFVar12);
      pFVar12 = pFVar12 + 0x100;
    }
    DestructItems<FRayTracingGeometry,int>
              ((FRayTracingGeometry *)(this->PartRayTracingGeometries).AllocatorInstance.Data,
               (this->PartRayTracingGeometries).ArrayNum);
    piVar2 = &(this->PartRayTracingGeometries).ArrayMax;
    (this->PartRayTracingGeometries).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,8,0,&(this->PartRayTracingGeometries).AllocatorInstance,0,piVar2);
    }
    (**(code **)((this->RayTracingGeometry)._padding_ + 0x20))();
    (this->RayTracingDynamicVertexBuffer).NumBytes = 0;
    this_00 = (this->RayTracingDynamicVertexBuffer).Buffer.Reference;
    if (this_00 != (FRHIBuffer *)0x0) {
      (this->RayTracingDynamicVertexBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    this_01 = (this->RayTracingDynamicVertexBuffer).UAV.Reference;
    if (this_01 != (FRHIUnorderedAccessView *)0x0) {
      (this->RayTracingDynamicVertexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)this_01);
    }
    this_02 = (this->RayTracingDynamicVertexBuffer).SRV.Reference;
    if (this_02 != (FRHIShaderResourceView *)0x0) {
      (this->RayTracingDynamicVertexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)this_02);
    }
  }
  return;
}

// GetAllocatedSize @ 1463b2c20

uint __thiscall
FGeometryCollectionSceneProxyBase::GetAllocatedSize(FGeometryCollectionSceneProxyBase *this)

{
  bool bVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->PartRayTracingGeometries).ArrayNum;
  pFVar3 = (this->PartRayTracingGeometries).AllocatorInstance.Data;
  iVar5 = *(int *)((longlong)&(this->RayTracingGeometry).RawData._padding_ + 4);
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x100;
  while( true ) {
    if ((this->PartRayTracingGeometries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRayTracingGeometry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar5 = iVar5 + *(int *)(pFVar3 + 0x4c);
    pFVar3 = pFVar3 + 0x100;
  }
  bVar1 = FPositionVertexBuffer::GetAllowCPUAccess(&this->SkinnedPositionVertexBuffer);
  if (bVar1) {
    iVar2 = (this->SkinnedPositionVertexBuffer).NumVertices *
            (this->SkinnedPositionVertexBuffer).Stride;
  }
  else {
    iVar2 = 0;
  }
  return iVar2 + (this->Materials).ArrayMax * 8 +
         ((this->MeshDescription).SubSections.ArrayMax + (this->MeshDescription).Sections.ArrayMax)
         * 0x14 + iVar5;
}

// GetCurrentPrevTransformBuffer @ 1463b30a0

FGeometryCollectionTransformBuffer * __thiscall
FGeometryCollectionSceneProxyBase::GetCurrentPrevTransformBuffer
          (FGeometryCollectionSceneProxyBase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FGeometryCollectionTransformBuffer *pFVar5;
  ForElementType<FGeometryCollectionTransformBuffer> FVar6;
  uint uVar7;
  
  iVar1 = (this->TransformBuffers).ArrayNum;
  uVar7 = (this->CurrentTransformBufferIndex + -1 + iVar1) % iVar1;
  uVar4 = 0;
  if ((int)uVar7 < iVar1) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FGeometryCollectionTransformBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar6 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
    FVar6 = (ForElementType<FGeometryCollectionTransformBuffer>)&this->TransformBuffers;
  }
  return (FGeometryCollectionTransformBuffer *)((longlong)FVar6 + (longlong)(int)uVar7 * 0x38);
}

// GetCurrentTransformBuffer @ 1463b3150

FGeometryCollectionTransformBuffer * __thiscall
FGeometryCollectionSceneProxyBase::GetCurrentTransformBuffer
          (FGeometryCollectionSceneProxyBase *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FGeometryCollectionTransformBuffer *pFVar5;
  ForElementType<FGeometryCollectionTransformBuffer> FVar6;
  
  uVar1 = this->CurrentTransformBufferIndex;
  uVar4 = 0;
  if ((int)uVar1 < (this->TransformBuffers).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FGeometryCollectionTransformBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar6 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
    FVar6 = (ForElementType<FGeometryCollectionTransformBuffer>)&this->TransformBuffers;
  }
  return (FGeometryCollectionTransformBuffer *)((longlong)FVar6 + (longlong)(int)uVar1 * 0x38);
}

// GetDynamicRayTracingInstances @ 1463b4630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
FGeometryCollectionSceneProxyBase::GetDynamicRayTracingInstances
          (FGeometryCollectionSceneProxyBase *this,FRayTracingInstanceCollector *param_1,
          TMatrix<double> *param_2,FRHIUniformBuffer *param_3,bool param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement FVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  Type TVar9;
  longlong *plVar10;
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIShaderResourceView *this_02;
  FGeometryCollectionDynamicData *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  double dVar14;
  bool bVar15;
  TConsoleVariableData<int> *pTVar16;
  ForAnyElementType FVar17;
  void *pvVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<_protected:_void___cdecl_FGeometryCollectionSceneProxyBase::GetDynamicRayTracingInstances(FRayTracingInstanceCollector_&,UE::Math::TMatrix<double>_const_&,FRHIUniformBuffer_*,bool)_::_2_::FStat_STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances>
  FVar25;
  undefined8 *puVar26;
  FGeometryCollectionVertexFactory *pFVar27;
  FRHICommandListBase *pFVar28;
  UMaterial *pUVar29;
  ForElementType<FMaterialRenderProxy_*> FVar30;
  longlong lVar31;
  TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *pTVar32;
  FName FVar33;
  uint uVar34;
  uint uVar35;
  ForElementType<FMeshBatchElement> FVar36;
  FRWBuffer *pFVar37;
  uint uVar38;
  ulonglong uVar39;
  FRayTracingGeometry *this_03;
  FRayTracingInstanceCollector *pFVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong uVar43;
  FScriptContainerElement *pFVar44;
  undefined1 auStackY_668 [32];
  uint local_5e8;
  longlong local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  FRayTracingInstanceCollector *local_5c8;
  TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *local_5c0;
  FName local_5b8;
  FColor_u_0 local_5b0 [2];
  FRayTracingGeometry *local_5a8;
  ForAnyElementType local_5a0;
  undefined8 local_598;
  FMeshBatch *local_590;
  int iStack_588;
  undefined4 uStack_584;
  undefined8 local_580;
  void *local_578;
  undefined8 local_570;
  uint *local_568;
  int iStack_560;
  undefined4 uStack_55c;
  ForAnyElementType local_558;
  undefined8 local_550;
  TMatrix<double> *local_548;
  int iStack_540;
  undefined4 uStack_53c;
  FRayTracingGeometry *local_538;
  ForAnyElementType local_530;
  undefined8 local_528;
  FMeshBatch *local_520;
  int iStack_518;
  undefined4 uStack_514;
  undefined8 local_510;
  void *local_508;
  undefined8 local_500;
  uint *local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  ForAnyElementType local_4e8;
  undefined8 local_4e0;
  TMatrix<double> *local_4d8;
  int iStack_4d0;
  undefined4 uStack_4cc;
  FName local_4c8;
  TMatrix<double> *local_4c0;
  FRHIUniformBuffer *local_4b8;
  FName local_4b0;
  uint local_4a0;
  FRayTracingGeometry *local_498;
  FRayTracingInstance local_488;
  FRayTracingInstance local_418;
  FGeometryCollectionMeshElement *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  FName local_398;
  FName local_390;
  TArrayView<FGeometryCollectionMeshElement_const_,int> local_388;
  FRayTracingDynamicGeometryUpdateParams local_378;
  ForAnyElementType local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  FRayTracingGeometry *local_2c8;
  FRWBuffer *local_2c0;
  undefined1 local_2b8;
  undefined4 local_2b4;
  float local_2a8 [2];
  float afStack_2a0 [2];
  float local_298 [2];
  float afStack_290 [2];
  float local_288 [2];
  float afStack_280 [2];
  float local_278 [2];
  float afStack_270 [2];
  undefined1 local_268;
  FRHIResource *local_260;
  ForElementType<FMaterialRenderProxy_*> local_258;
  int local_150;
  int local_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_668;
  local_5c8 = param_1;
  local_4c0 = param_2;
  local_4b8 = param_3;
  if ((this->bHasRayTracingRepresentation == false) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("bHasRayTracingRepresentation",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                          ,0x228,
                          L"Shouldn\'t try to get ray tracing instances from proxy that doesn\'t have a ray tracing representation."
                         ), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (GRayTracingGeometryCollection == 0) {
    return;
  }
  if ((this->MeshDescription).Sections.ArrayNum == 0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FGeometryCollectionSceneProxyBase::GetDynamicRayTracingInstances(FRayTracingInstanceCollector_&,UE::Math::TMatrix<double>_const_&,FRHIUniformBuffer_*,bool)_::_2_::FStat_STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances>
         )0x0) {
      pFVar24 = ::FName::FName(&local_398,
                               "STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances"
                              );
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances,
                 *pFVar24,L"STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar25 = StatPtr_STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances;
  if (StatPtr_STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FGeometryCollectionSceneProxyBase::GetDynamicRayTracingInstances(FRayTracingInstanceCollector_&,UE::Math::TMatrix<double>_const_&,FRHIUniformBuffer_*,bool)_::_2_::FStat_STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances>
       )0x0) {
    pFVar24 = ::FName::FName(&local_390,
                             "STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances");
    FVar25 = (FThreadSafeStaticStat<_protected:_void___cdecl_FGeometryCollectionSceneProxyBase::GetDynamicRayTracingInstances(FRayTracingInstanceCollector_&,UE::Math::TMatrix<double>_const_&,FRHIUniformBuffer_*,bool)_::_2_::FStat_STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &
                          StatPtr_STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances
                          ,*pFVar24,
                          L"STAT_GeometryCollectionSceneProxyBase_GetDynamicRayTracingInstances",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar25;
  bVar20 = false;
  bVar15 = false;
  local_4b0.ComparisonIndex.Value = 0;
  local_4b0.Number = 0;
  bVar19 = false;
  bVar21 = false;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_1463b484a:
    bVar15 = bVar21;
    bVar20 = bVar19;
    bVar19 = false;
    local_5b8 = local_4b0;
    FVar33 = local_4b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5b0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5b0[0]._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar20 = false;
      bVar15 = true;
      bVar19 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_4c8.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_4c8.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_4c8,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                   ,0x234);
        bVar20 = true;
        bVar15 = true;
        bVar19 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1463b484a;
    local_5b8 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar19 = true;
  }
  iVar7 = (param_1->Views).ArrayNum;
  if ((iVar7 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar21)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar8 = param_1->VisibilityMap;
  local_4a0 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> local_4a0 & 1) == 0; local_4a0 = local_4a0 + 1) {
    }
  }
  uVar35 = 0x20;
  if (uVar8 != 0) {
    uVar35 = local_4a0;
  }
  local_5d0 = CONCAT44(local_5d0._4_4_,uVar35);
  if ((((int)uVar35 < 0) || (iVar7 <= (int)uVar35)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Views.IsValidIndex(FirstActiveViewIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                          ,0x23c,
                          L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                         ), bVar21)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar34 = 0;
  if ((int)uVar35 < iVar7) {
    uVar34 = ~uVar35 >> 0x1f;
  }
  if ((uVar34 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar21)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  plVar10 = (longlong *)param_1->_padding_;
  if (GRayTracingGeometryCollectionWPO == false) {
    param_4 = false;
  }
  puVar26 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x250,8);
  puVar26[1] = 0;
  *puVar26 = &
             ___7__TObject_VFGeometryCollectionMeshCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  plVar1 = puVar26 + 2;
  lVar42 = *plVar10;
  do {
    puVar26[1] = lVar42;
    LOCK();
    lVar31 = *plVar10;
    bVar21 = lVar42 == lVar31;
    if (bVar21) {
      *plVar10 = (longlong)puVar26;
      lVar31 = lVar42;
    }
    UNLOCK();
    lVar42 = lVar31;
  } while (!bVar21);
  TVar9 = this->FeatureLevel;
  *plVar1 = (longlong)&___7FGeometryCollectionMeshCollectorResources__6B_;
  FGeometryCollectionVertexFactory::FGeometryCollectionVertexFactory
            ((FGeometryCollectionVertexFactory *)(puVar26 + 3),TVar9,true);
  pFVar27 = (FGeometryCollectionVertexFactory *)(**(code **)(*plVar1 + 8))(plVar1);
  pFVar28 = (FRHICommandListBase *)
            FMeshElementCollector::GetRHICommandList((FMeshElementCollector *)param_1);
  SetupVertexFactory(this,pFVar28,pFVar27,(FColorVertexBuffer *)0x0);
  pTVar16 = CVarRayTracingGeometryCollectionCombinedBLAS.Ref;
  if (((this->MeshDescription).SubSections.ArrayNum == 0) || (param_4 != false)) {
LAB_1463b4a14:
    bVar21 = false;
  }
  else {
    bVar21 = IsInParallelRenderingThread();
    if ((!bVar21) &&
       (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if (pTVar16->ShadowedValue[1] != 0) goto LAB_1463b4a14;
    bVar21 = true;
  }
  pTVar32 = &(this->MeshDescription).Sections + (ulonglong)bVar21 * 2;
  local_3a8 = (FGeometryCollectionMeshElement *)(pTVar32->AllocatorInstance).Data;
  iVar23 = pTVar32->ArrayNum;
  local_5c0 = pTVar32;
  if ((iVar23 < 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar22)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iStack_3a0 = iVar23;
  pFVar28 = (FRHICommandListBase *)
            FMeshElementCollector::GetRHICommandList((FMeshElementCollector *)local_5c8);
  local_388._12_4_ = uStack_39c;
  local_388.ArrayNum = iStack_3a0;
  local_388.DataPtr = local_3a8;
  UpdatingRayTracingGeometry_RenderingThread(this,pFVar28,&local_388,bVar21);
  iVar23 = pTVar32->ArrayNum;
  uVar34 = 0;
  local_258.SecondaryData = (ForElementType<FMaterialRenderProxy_*>)0x0;
  local_150 = 0;
  local_14c = 0x20;
  if (0 < iVar23) {
    lVar42 = 0;
    do {
      uVar38 = 0;
      if ((int)uVar34 < iVar23) {
        uVar38 = ~uVar34 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar5 = (pTVar32->AllocatorInstance).Data[lVar42 + 2];
      if (((this->Materials).ArrayNum <= (int)(uint)(byte)FVar5) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_5d8 = (**(code **)(**(longlong **)
                                 ((this->Materials).AllocatorInstance.Data +
                                 (ulonglong)(byte)FVar5 * 8) + 0x310))();
      if (local_5d8 == 0) {
        pUVar29 = UMaterial::GetDefaultMaterial(MD_Surface);
        local_5d8 = (**(code **)(pUVar29->_padding_ + 0x310))(pUVar29);
      }
      FVar30 = (ForElementType<FMaterialRenderProxy_*>)&local_258;
      if (local_258.SecondaryData != (ForElementType<FMaterialRenderProxy_*>)0x0) {
        FVar30 = local_258.SecondaryData;
      }
      if ((ulonglong)FVar30 <= &local_5d8) {
        FVar30 = (ForElementType<FMaterialRenderProxy_*>)&local_258;
        if (local_258.SecondaryData != (ForElementType<FMaterialRenderProxy_*>)0x0) {
          FVar30 = local_258.SecondaryData;
        }
        if ((&local_5d8 < (longlong *)((longlong)FVar30 + (longlong)local_14c * 8)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (local_150 == local_14c) {
        local_150 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_>
                              (0x808,&local_258,&local_14c);
      }
      FVar30 = (ForElementType<FMaterialRenderProxy_*>)&local_258;
      if (local_258.SecondaryData != (ForElementType<FMaterialRenderProxy_*>)0x0) {
        FVar30 = local_258.SecondaryData;
      }
      lVar31 = (longlong)local_150;
      uVar34 = uVar34 + 1;
      lVar42 = lVar42 + 0x14;
      local_150 = local_150 + 1;
      *(longlong *)((longlong)FVar30 + lVar31 * 8) = local_5d8;
      iVar23 = pTVar32->ArrayNum;
      FVar33 = local_5b8;
    } while ((int)uVar34 < iVar23);
  }
  uVar39 = 0;
  this_03 = &this->RayTracingGeometry;
  local_498 = this_03;
  bVar21 = FRayTracingGeometry::IsValid(this_03);
  if (bVar21) {
    lVar42 = (**(code **)(pFVar27->_padding_ + 0x30))();
    if ((*(uint *)(lVar42 + 0x38) & 0x400) == 0) goto LAB_1463b5aa5;
    local_5a0.Data = (FScriptContainerElement *)0x0;
    local_598 = 0;
    local_590 = (FMeshBatch *)0x0;
    uVar34 = 0;
    iStack_588 = 0;
    local_580 = 0x1000000;
    local_578 = (void *)0x0;
    local_570 = 0;
    local_568 = (uint *)0x0;
    iStack_560 = 0;
    local_558.Data = (FScriptContainerElement *)0x0;
    local_550 = 0;
    local_548 = (TMatrix<double> *)0x0;
    iStack_540 = 0;
    local_5a8 = this_03;
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1080,&local_558,(int *)((longlong)&local_550 + 4));
    local_5e8 = 0;
    dVar14 = local_4c0->M[0][1];
    local_550 = CONCAT44(local_550._4_4_,iVar23 + 1);
    lVar42 = (longlong)iVar23 * 0x80;
    *(double *)(local_558.Data + lVar42) = local_4c0->M[0][0];
    *(double *)(local_558.Data + lVar42 + 8) = dVar14;
    dVar14 = local_4c0->M[0][3];
    *(double *)(local_558.Data + lVar42 + 0x10) = local_4c0->M[0][2];
    *(double *)(local_558.Data + lVar42 + 0x10 + 8) = dVar14;
    dVar14 = local_4c0->M[1][1];
    *(double *)(local_558.Data + lVar42 + 0x20) = local_4c0->M[1][0];
    *(double *)(local_558.Data + lVar42 + 0x20 + 8) = dVar14;
    dVar14 = local_4c0->M[1][3];
    *(double *)(local_558.Data + lVar42 + 0x30) = local_4c0->M[1][2];
    *(double *)(local_558.Data + lVar42 + 0x30 + 8) = dVar14;
    dVar14 = local_4c0->M[2][1];
    *(double *)(local_558.Data + lVar42 + 0x40) = local_4c0->M[2][0];
    *(double *)(local_558.Data + lVar42 + 0x40 + 8) = dVar14;
    dVar14 = local_4c0->M[2][3];
    *(double *)(local_558.Data + lVar42 + 0x50) = local_4c0->M[2][2];
    *(double *)(local_558.Data + lVar42 + 0x50 + 8) = dVar14;
    dVar14 = local_4c0->M[3][1];
    *(double *)(local_558.Data + lVar42 + 0x60) = local_4c0->M[3][0];
    *(double *)(local_558.Data + lVar42 + 0x60 + 8) = dVar14;
    dVar14 = local_4c0->M[3][3];
    *(double *)(local_558.Data + lVar42 + 0x70) = local_4c0->M[3][2];
    *(double *)(local_558.Data + lVar42 + 0x70 + 8) = dVar14;
    iVar23 = local_5c0->ArrayNum;
    uVar41 = uVar39;
    uVar43 = uVar39;
    if (0 < iVar23) {
      do {
        pTVar32 = local_5c0;
        uVar38 = (uint)uVar43;
        uVar35 = 0;
        if ((int)uVar38 < iVar23) {
          uVar35 = ~uVar38 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar44 = (pTVar32->AllocatorInstance).Data;
        iVar23 = (int)local_598;
        if ((int)local_598 == local_598._4_4_) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8e0,&local_5a0,(int *)((longlong)&local_598 + 4));
        }
        local_598 = CONCAT44(local_598._4_4_,iVar23 + 1);
        FVar36 = (ForElementType<FMeshBatchElement>)
                 ((longlong)iVar23 * 0xe0 + (longlong)local_5a0.Data);
        DefaultConstructItems<FMeshBatch,int>((void *)FVar36,1);
        *(uint *)((longlong)FVar36 + 0xd4) = *(uint *)((longlong)FVar36 + 0xd4) & 0xffffffbf;
        *(FGeometryCollectionVertexFactory **)((longlong)FVar36 + 0xa8) = pFVar27;
        *(uint *)((longlong)FVar36 + 0xcc) = uVar38;
        uVar35 = 0;
        if ((int)uVar38 < local_150) {
          uVar35 = ~uVar38 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar30 = (ForElementType<FMaterialRenderProxy_*>)&local_258;
        if (local_258.SecondaryData != (ForElementType<FMaterialRenderProxy_*>)0x0) {
          FVar30 = local_258.SecondaryData;
        }
        *(FMaterialRenderProxy **)((longlong)FVar36 + 0xb0) =
             *(FMaterialRenderProxy **)((longlong)FVar30 + uVar39 * 8);
        *(schar *)((longlong)FVar36 + 0xd2) = '\0';
        *(uint *)((longlong)FVar36 + 0xd4) =
             *(uint *)((longlong)FVar36 + 0xd4) & 0xffffe07f | 0x2002;
        if ((*(int *)((longlong)FVar36 + 0xa0) < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98) !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar36 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98);
        }
        *(FGeometryCollectionMeshResources **)((longlong)FVar36 + 0x18) = this->MeshResource;
        *(FRHIUniformBuffer **)FVar36 = local_4b8;
        *(int *)((longlong)FVar36 + 0x58) = *(int *)(pFVar44 + uVar41 + 4) * 3;
        *(undefined4 *)((longlong)FVar36 + 0x5c) = *(undefined4 *)(pFVar44 + uVar41 + 8);
        *(undefined4 *)((longlong)FVar36 + 0x68) = *(undefined4 *)(pFVar44 + uVar41 + 0xc);
        *(undefined4 *)((longlong)FVar36 + 0x6c) = *(undefined4 *)(pFVar44 + uVar41 + 0x10);
        *(undefined4 *)((longlong)FVar36 + 0x60) = 1;
        uVar34 = *(uint *)(pFVar44 + uVar41 + 0x10);
        if (*(uint *)(pFVar44 + uVar41 + 0x10) < local_5e8) {
          uVar34 = local_5e8;
        }
        uVar39 = uVar39 + 1;
        iVar23 = local_5c0->ArrayNum;
        uVar41 = uVar41 + 0x14;
        uVar43 = (ulonglong)(uVar38 + 1);
        local_5e8 = uVar34;
      } while ((int)(uVar38 + 1) < iVar23);
      FVar33 = local_5b8;
      this_03 = local_498;
      uVar35 = (uint)local_5d0;
    }
    pTVar16 = CVarRayTracingGeometryCollectionForceUpdate.Ref;
    if (param_4 == false) {
      bVar21 = IsInParallelRenderingThread();
      if ((!bVar21) &&
         (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (pTVar16->ShadowedValue[1] != 0) goto LAB_1463b500f;
      bVar21 = false;
      if ((((this->RayTracingGeometry).DynamicGeometrySharedBufferGenerationID != -1) ||
          (bVar22 = FRayTracingGeometry::IsEvicted(this_03), bVar22)) ||
         (pFVar40 = local_5c8, ((this->RayTracingGeometry).GeometryState & RequiresBuild) != Invalid
         )) goto LAB_1463b5017;
    }
    else {
LAB_1463b500f:
      bVar21 = true;
LAB_1463b5017:
      pFVar37 = &this->RayTracingDynamicVertexBuffer;
      if (bVar21) {
        (this->RayTracingDynamicVertexBuffer).NumBytes = 0;
        this_00 = (pFVar37->Buffer).Reference;
        if (this_00 != (FRHIBuffer *)0x0) {
          (pFVar37->Buffer).Reference = (FRHIBuffer *)0x0;
          FRHIResource::Release((FRHIResource *)this_00);
        }
        this_01 = (this->RayTracingDynamicVertexBuffer).UAV.Reference;
        if (this_01 != (FRHIUnorderedAccessView *)0x0) {
          (this->RayTracingDynamicVertexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
          FRHIResource::Release((FRHIResource *)this_01);
        }
        this_02 = (this->RayTracingDynamicVertexBuffer).SRV.Reference;
        if (this_02 != (FRHIShaderResourceView *)0x0) {
          (this->RayTracingDynamicVertexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
          FRHIResource::Release((FRHIResource *)this_02);
        }
        pFVar37 = (FRWBuffer *)0x0;
      }
      FVar17.Data = local_5a0.Data;
      iVar23 = (int)local_598;
      uVar34 = uVar34 + 1;
      local_2e8.Data = (FScriptContainerElement *)0x0;
      local_2e0._0_4_ = (int)local_598;
      if ((int)local_598 == 0) {
        local_378.MeshBatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_378.MeshBatches.ArrayNum = (int)local_598;
        local_378.MeshBatches.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,(int)local_598,0,&local_2e8,(int)local_598,
                   (int *)((longlong)&local_2e0 + 4));
        ConstructItems<FMeshBatch,FMeshBatch,int>(local_2e8.Data,(FMeshBatch *)FVar17.Data,iVar23);
        local_378.MeshBatches.AllocatorInstance.Data = local_2e8.Data;
        local_378.MeshBatches.ArrayNum = (int)local_2e0;
        local_378.MeshBatches.ArrayMax = local_2e0._4_4_;
      }
      pFVar40 = local_5c8;
      local_378.VertexBufferSize = uVar34 * 0xc;
      local_378.NumTriangles = (this->RayTracingGeometry).Initializer.TotalPrimitiveCount;
      local_2d8 = 0;
      local_2b8 = 1;
      local_2b4 = 0;
      local_2a8[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_2a8[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      afStack_2a0[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
      afStack_2a0[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_298[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_298[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      afStack_290[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
      afStack_290[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_288[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_288[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      afStack_280[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
      afStack_280[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_278[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_278[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      afStack_270[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
      afStack_270[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_268 = 0;
      local_2e8.Data = (FScriptContainerElement *)0x0;
      local_2e0 = 0;
      local_378.bUsingIndirectDraw = false;
      local_378.bApplyWorldPositionOffset = true;
      local_378.InstanceId = 0;
      local_378.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_378.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      local_378.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
      local_378.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_378.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_378.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      local_378.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
      local_378.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_378.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_378.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      local_378.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
      local_378.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_378.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_378.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      local_378.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
      local_378.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_378.bAlphaMasked = false;
      local_378.IndexBuffer.Reference = (FRHIBuffer *)0x0;
      local_260 = (FRHIResource *)0x0;
      local_378.NumVertices = uVar34;
      local_378.Geometry = this_03;
      local_378.Buffer = pFVar37;
      local_2d4 = uVar34;
      local_2d0 = local_378.VertexBufferSize;
      local_2cc = local_378.NumTriangles;
      local_2c8 = this_03;
      local_2c0 = pFVar37;
      FRayTracingInstanceCollector::AddRayTracingGeometryUpdate(local_5c8,uVar35,&local_378);
      if (local_260 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_260);
      }
      DestructItems<FMeshBatch,int>((FMeshBatch *)local_2e8.Data,(int)local_2e0);
      if ((FMeshBatch *)local_2e8.Data != (FMeshBatch *)0x0) {
        FMemory::Free(local_2e8.Data);
      }
    }
    uVar35 = 0;
    if (0 < iVar7) {
      do {
        FVar17.Data = local_5a0.Data;
        if ((uVar8 >> (uVar35 & 0x1f) & 1) != 0) {
          iVar23 = (int)local_598;
          local_488.Geometry = local_5a8;
          local_488.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_488.Materials.ArrayNum = (int)local_598;
          if ((int)local_598 == 0) {
            local_488.Materials.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(int)local_598,0,&local_488.Materials.AllocatorInstance,(int)local_598
                       ,&local_488.Materials.ArrayMax);
            ConstructItems<FMeshBatch,FMeshBatch,int>
                      (local_488.Materials.AllocatorInstance.Data,(FMeshBatch *)FVar17.Data,iVar23);
          }
          pvVar18 = local_578;
          lVar42 = (longlong)(int)local_570;
          local_488.bApplyLocalBoundsTransform = (bool)(undefined1)local_580;
          local_488.bThinGeometry = (bool)local_580._1_1_;
          local_488.InstanceLayer = local_580._2_1_;
          local_488.bInstanceMaskAndFlagsDirty = (bool)local_580._3_1_;
          local_488.NumTransforms = local_580._4_4_;
          local_488.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          local_488.PrimitiveInstanceIndices.ArrayNum = (int)local_570;
          local_488.MaterialsView._12_4_ = uStack_584;
          local_488.MaterialsView.ArrayNum = iStack_588;
          local_488.MaterialsView.DataPtr = local_590;
          if ((int)local_570 == 0) {
            local_488.PrimitiveInstanceIndices.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(int)local_570,0,&local_488.PrimitiveInstanceIndices.AllocatorInstance,
                       (int)local_570,&local_488.PrimitiveInstanceIndices.ArrayMax);
            memcpy(local_488.PrimitiveInstanceIndices.AllocatorInstance.Data,pvVar18,lVar42 << 2);
          }
          FVar17.Data = local_558.Data;
          lVar42 = (longlong)(int)local_550;
          local_488.PrimitiveInstanceIndicesView._12_4_ = uStack_55c;
          local_488.PrimitiveInstanceIndicesView.ArrayNum = iStack_560;
          local_488.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_488.InstanceTransforms.ArrayNum = (int)local_550;
          local_488.PrimitiveInstanceIndicesView.DataPtr = local_568;
          if ((int)local_550 == 0) {
            local_488.InstanceTransforms.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x10,(int)local_550,0,&local_488.InstanceTransforms.AllocatorInstance,
                       (int)local_550,&local_488.InstanceTransforms.ArrayMax);
            memcpy(local_488.InstanceTransforms.AllocatorInstance.Data,FVar17.Data,lVar42 << 7);
          }
          local_488.InstanceTransformsView._12_4_ = uStack_53c;
          local_488.InstanceTransformsView.ArrayNum = iStack_540;
          local_488.InstanceTransformsView.DataPtr = local_548;
          FRayTracingInstanceCollector::AddRayTracingInstance(pFVar40,uVar35,&local_488);
        }
        uVar35 = uVar35 + 1;
      } while ((int)uVar35 < iVar7);
    }
    if (local_558.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data);
    }
    if (local_578 != (void *)0x0) {
      FMemory::Free(local_578);
    }
    DestructItems<FMeshBatch,int>((FMeshBatch *)local_5a0.Data,(int)local_598);
    if ((FMeshBatch *)local_5a0.Data != (FMeshBatch *)0x0) {
      FMemory::Free(local_5a0.Data);
    }
  }
  uVar39 = 0;
  if (0 < (this->PartRayTracingGeometries).ArrayNum) {
    local_5e0 = 0;
    local_5d0 = 0;
    pTVar32 = local_5c0;
    uVar41 = uVar39;
    do {
      lVar42 = local_5d0;
      uVar38 = (uint)uVar39;
      uVar34 = ~uVar38 >> 0x1f;
      uVar35 = 0;
      if ((int)uVar38 < pTVar32->ArrayNum) {
        uVar35 = uVar34;
      }
      if ((uVar35 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar44 = (pTVar32->AllocatorInstance).Data + lVar42;
      local_530.Data = (FScriptContainerElement *)0x0;
      local_528 = 0;
      uVar35 = 0;
      if ((int)uVar38 < (this->PartRayTracingGeometries).ArrayNum) {
        uVar35 = uVar34;
      }
      local_520 = (FMeshBatch *)0x0;
      iStack_518 = 0;
      local_510 = 0x1000000;
      local_508 = (void *)0x0;
      local_500 = 0;
      local_4f8 = (uint *)0x0;
      iStack_4f0 = 0;
      local_4e8.Data = (FScriptContainerElement *)0x0;
      local_4e0 = 0;
      local_4d8 = (TMatrix<double> *)0x0;
      iStack_4d0 = 0;
      if ((uVar35 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_538 = (FRayTracingGeometry *)
                  ((this->PartRayTracingGeometries).AllocatorInstance.Data + local_5e0);
      pFVar11 = this->DynamicData;
      sVar6 = *(short *)pFVar44;
      uVar35 = 0;
      if ((int)sVar6 < (pFVar11->Transforms).ArrayNum) {
        uVar35 = (uint)~(int)sVar6 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar12 = (pFVar11->Transforms).AllocatorInstance.Data;
      lVar42 = (longlong)sVar6 * 0x40;
      pFVar2 = pFVar12 + lVar42;
      pFVar3 = pFVar12 + lVar42 + 0x10;
      pFVar4 = pFVar12 + lVar42 + 0x20;
      pFVar12 = pFVar12 + lVar42 + 0x30;
      local_148._8_4_ = SUB84((double)*(float *)(pFVar2 + 4),0);
      local_148._0_8_ = (double)*(float *)pFVar2;
      local_148._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar2 + 4) >> 0x20);
      local_138._8_4_ = SUB84((double)*(float *)(pFVar2 + 0xc),0);
      local_138._0_8_ = (double)*(float *)(pFVar2 + 8);
      local_138._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar2 + 0xc) >> 0x20);
      local_128._8_4_ = SUB84((double)*(float *)(pFVar3 + 4),0);
      local_128._0_8_ = (double)*(float *)pFVar3;
      local_128._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar3 + 4) >> 0x20);
      local_118._8_4_ = SUB84((double)*(float *)(pFVar3 + 0xc),0);
      local_118._0_8_ = (double)*(float *)(pFVar3 + 8);
      local_118._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar3 + 0xc) >> 0x20);
      local_108._8_4_ = SUB84((double)*(float *)(pFVar4 + 4),0);
      local_108._0_8_ = (double)*(float *)pFVar4;
      local_108._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar4 + 4) >> 0x20);
      local_f8._8_4_ = SUB84((double)*(float *)(pFVar4 + 0xc),0);
      local_f8._0_8_ = (double)*(float *)(pFVar4 + 8);
      local_f8._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar4 + 0xc) >> 0x20);
      local_e8._8_4_ = SUB84((double)*(float *)(pFVar12 + 4),0);
      local_e8._0_8_ = (double)*(float *)pFVar12;
      local_e8._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar12 + 4) >> 0x20);
      local_d8._8_4_ = SUB84((double)*(float *)(pFVar12 + 0xc),0);
      local_d8._0_8_ = (double)*(float *)(pFVar12 + 8);
      local_d8._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar12 + 0xc) >> 0x20);
      VectorMatrixMultiply(&local_c8,(TMatrix<double> *)local_148,local_4c0);
      iVar23 = (int)local_4e0;
      if ((int)local_4e0 == local_4e0._4_4_) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1080,&local_4e8,(int *)((longlong)&local_4e0 + 4));
      }
      local_4e0 = CONCAT44(local_4e0._4_4_,iVar23 + 1);
      lVar42 = (longlong)iVar23 * 0x80;
      *(double *)(local_4e8.Data + lVar42) = local_c8.M[0][0];
      *(double *)(local_4e8.Data + lVar42 + 8) = local_c8.M[0][1];
      *(double *)(local_4e8.Data + lVar42 + 0x10) = local_c8.M[0][2];
      *(double *)(local_4e8.Data + lVar42 + 0x10 + 8) = local_c8.M[0][3];
      *(double *)(local_4e8.Data + lVar42 + 0x20) = local_c8.M[1][0];
      *(double *)(local_4e8.Data + lVar42 + 0x20 + 8) = local_c8.M[1][1];
      *(double *)(local_4e8.Data + lVar42 + 0x30) = local_c8.M[1][2];
      *(double *)(local_4e8.Data + lVar42 + 0x30 + 8) = local_c8.M[1][3];
      *(double *)(local_4e8.Data + lVar42 + 0x40) = local_c8.M[2][0];
      *(double *)(local_4e8.Data + lVar42 + 0x40 + 8) = local_c8.M[2][1];
      *(double *)(local_4e8.Data + lVar42 + 0x50) = local_c8.M[2][2];
      *(double *)(local_4e8.Data + lVar42 + 0x50 + 8) = local_c8.M[2][3];
      *(double *)(local_4e8.Data + lVar42 + 0x60) = local_c8.M[3][0];
      *(double *)(local_4e8.Data + lVar42 + 0x60 + 8) = local_c8.M[3][1];
      *(double *)(local_4e8.Data + lVar42 + 0x70) = local_c8.M[3][2];
      *(double *)(local_4e8.Data + lVar42 + 0x70 + 8) = local_c8.M[3][3];
      iVar23 = (int)local_528;
      if ((int)local_528 == local_528._4_4_) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8e0,&local_530,(int *)((longlong)&local_528 + 4));
      }
      local_528 = CONCAT44(local_528._4_4_,iVar23 + 1);
      FVar36 = (ForElementType<FMeshBatchElement>)
               ((longlong)iVar23 * 0xe0 + (longlong)local_530.Data);
      DefaultConstructItems<FMeshBatch,int>((void *)FVar36,1);
      *(uint *)((longlong)FVar36 + 0xd4) = *(uint *)((longlong)FVar36 + 0xd4) & 0xffffffbf;
      *(FGeometryCollectionVertexFactory **)((longlong)FVar36 + 0xa8) = pFVar27;
      *(int *)((longlong)FVar36 + 0xcc) = 0;
      uVar35 = 0;
      if ((int)uVar38 < local_150) {
        uVar35 = uVar34;
      }
      if ((uVar35 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar30 = (ForElementType<FMaterialRenderProxy_*>)&local_258;
      if (local_258.SecondaryData != (ForElementType<FMaterialRenderProxy_*>)0x0) {
        FVar30 = local_258.SecondaryData;
      }
      *(FMaterialRenderProxy **)((longlong)FVar36 + 0xb0) =
           *(FMaterialRenderProxy **)((longlong)FVar30 + uVar41 * 8);
      *(schar *)((longlong)FVar36 + 0xd2) = '\0';
      *(uint *)((longlong)FVar36 + 0xd4) = *(uint *)((longlong)FVar36 + 0xd4) & 0xffffe07f | 0x2002;
      if ((*(int *)((longlong)FVar36 + 0xa0) < 1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar40 = local_5c8;
      if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98) !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar36 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98);
      }
      uVar35 = 0;
      *(FGeometryCollectionMeshResources **)((longlong)FVar36 + 0x18) = this->MeshResource;
      *(FRHIUniformBuffer **)FVar36 = local_4b8;
      *(int *)((longlong)FVar36 + 0x58) = *(int *)(pFVar44 + 4) * 3;
      *(undefined4 *)((longlong)FVar36 + 0x5c) = *(undefined4 *)(pFVar44 + 8);
      *(undefined4 *)((longlong)FVar36 + 0x68) = *(undefined4 *)(pFVar44 + 0xc);
      *(undefined4 *)((longlong)FVar36 + 0x6c) = *(undefined4 *)(pFVar44 + 0x10);
      *(undefined4 *)((longlong)FVar36 + 0x60) = 1;
      if (0 < iVar7) {
        do {
          FVar17.Data = local_530.Data;
          if ((uVar8 >> (uVar35 & 0x1f) & 1) != 0) {
            iVar23 = (int)local_528;
            local_418.Geometry = local_538;
            local_418.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_418.Materials.ArrayNum = (int)local_528;
            if ((int)local_528 == 0) {
              local_418.Materials.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xe0,8,(int)local_528,0,&local_418.Materials.AllocatorInstance,
                         (int)local_528,&local_418.Materials.ArrayMax);
              ConstructItems<FMeshBatch,FMeshBatch,int>
                        (local_418.Materials.AllocatorInstance.Data,(FMeshBatch *)FVar17.Data,iVar23
                        );
            }
            pvVar18 = local_508;
            lVar42 = (longlong)(int)local_500;
            local_418.bApplyLocalBoundsTransform = (bool)(undefined1)local_510;
            local_418.bThinGeometry = (bool)local_510._1_1_;
            local_418.InstanceLayer = local_510._2_1_;
            local_418.bInstanceMaskAndFlagsDirty = (bool)local_510._3_1_;
            local_418.NumTransforms = local_510._4_4_;
            local_418.PrimitiveInstanceIndices.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_418.PrimitiveInstanceIndices.ArrayNum = (int)local_500;
            local_418.MaterialsView._12_4_ = uStack_514;
            local_418.MaterialsView.ArrayNum = iStack_518;
            local_418.MaterialsView.DataPtr = local_520;
            if ((int)local_500 == 0) {
              local_418.PrimitiveInstanceIndices.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(int)local_500,0,&local_418.PrimitiveInstanceIndices.AllocatorInstance,
                         (int)local_500,&local_418.PrimitiveInstanceIndices.ArrayMax);
              memcpy(local_418.PrimitiveInstanceIndices.AllocatorInstance.Data,pvVar18,lVar42 << 2);
            }
            FVar17.Data = local_4e8.Data;
            lVar42 = (longlong)(int)local_4e0;
            local_418.PrimitiveInstanceIndicesView._12_4_ = uStack_4ec;
            local_418.PrimitiveInstanceIndicesView.ArrayNum = iStack_4f0;
            local_418.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_418.InstanceTransforms.ArrayNum = (int)local_4e0;
            local_418.PrimitiveInstanceIndicesView.DataPtr = local_4f8;
            if ((int)local_4e0 == 0) {
              local_418.InstanceTransforms.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x80,0x10,(int)local_4e0,0,&local_418.InstanceTransforms.AllocatorInstance,
                         (int)local_4e0,&local_418.InstanceTransforms.ArrayMax);
              memcpy(local_418.InstanceTransforms.AllocatorInstance.Data,FVar17.Data,lVar42 << 7);
            }
            local_418.InstanceTransformsView._12_4_ = uStack_4cc;
            local_418.InstanceTransformsView.ArrayNum = iStack_4d0;
            local_418.InstanceTransformsView.DataPtr = local_4d8;
            FRayTracingInstanceCollector::AddRayTracingInstance(pFVar40,uVar35,&local_418);
          }
          uVar35 = uVar35 + 1;
          pTVar32 = local_5c0;
        } while ((int)uVar35 < iVar7);
      }
      if (local_4e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data);
      }
      if (local_508 != (void *)0x0) {
        FMemory::Free(local_508);
      }
      DestructItems<FMeshBatch,int>((FMeshBatch *)local_530.Data,(int)local_528);
      if ((FMeshBatch *)local_530.Data != (FMeshBatch *)0x0) {
        FMemory::Free(local_530.Data);
      }
      uVar39 = (ulonglong)(uVar38 + 1);
      local_5e0 = local_5e0 + 0x100;
      local_5d0 = local_5d0 + 0x14;
      uVar41 = uVar41 + 1;
      FVar33 = local_5b8;
    } while ((int)(uVar38 + 1) < (this->PartRayTracingGeometries).ArrayNum);
  }
LAB_1463b5aa5:
  if (local_258.SecondaryData != (ForElementType<FMaterialRenderProxy_*>)0x0) {
    FMemory::Free((void *)local_258.SecondaryData);
  }
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  return;
}

// SetDynamicData_RenderThread @ 1463c88d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCollectionSceneProxyBase::SetDynamicData_RenderThread
          (FGeometryCollectionSceneProxyBase *this,FRHICommandListBase *param_1,
          FGeometryCollectionDynamicData *param_2)

{
  TArray<FGeometryCollectionTransformBuffer,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  TRefCountPtr<FRHIUniformBuffer> *pTVar1;
  EGeometryStateFlags *pEVar2;
  int iVar3;
  ForElementType<FGeometryCollectionTransformBuffer> FVar4;
  FRHIUniformBuffer *this_01;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FGeometryCollectionTransformBuffer *this_02;
  FGeometryCollectionTransformBuffer *pFVar8;
  TUniformBufferRef<FGCBoneLooseParameters> TVar9;
  ForElementType<FGeometryCollectionTransformBuffer> FVar10;
  uint uVar11;
  FGeometryCollectionDynamicData *pFVar12;
  EResourceLockMode EVar13;
  longlong lVar14;
  FRHIShaderResourceView *local_res8;
  FRHIShaderResourceView *local_48;
  FRHIShaderResourceView *local_40;
  FRHIShaderResourceView *local_38;
  
  pFVar12 = this->DynamicData;
  if (param_2 != pFVar12) {
    if (pFVar12 != (FGeometryCollectionDynamicData *)0x0) {
      FGeometryCollectionDynamicDataPool::Release(&GDynamicDataPool,pFVar12);
    }
    this->DynamicData = param_2;
    pFVar12 = param_2;
  }
  if ((((this->MeshDescription).NumVertices != 0) &&
      (pFVar12 != (FGeometryCollectionDynamicData *)0x0)) &&
     (this->bRenderResourcesCreated != false)) {
    if ((this->bIsNanite == false) || (this->bHasRayTracingRepresentation != false)) {
      if (this->bUseShaderBoneTransform == false) {
        UpdateSkinnedPositions(this,param_1,&pFVar12->Transforms);
      }
      else {
        if ((GGeometryCollectionTripleBufferUploads == 0) ||
           (this->bSupportsTripleBufferVertexUpload == false)) {
          EVar13 = RLM_WriteOnly;
        }
        else {
          this_00 = &this->TransformBuffers;
          if ((this->TransformBuffers).ArrayNum == 1) {
            TArray<FGeometryCollectionTransformBuffer,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
            ::AddDefaulted(this_00,2);
            if (((this->TransformBuffers).ArrayNum != 3) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TransformBuffers.Num() == 3",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                                   ,0x158,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar11 = 1;
            if (1 < (this->TransformBuffers).ArrayNum) {
              lVar14 = 0x38;
              do {
                iVar3 = this->NumTransforms;
                uVar7 = 0;
                if ((int)uVar11 < (this->TransformBuffers).ArrayNum) {
                  uVar7 = ~uVar11 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                FVar4 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
                FVar10 = (ForElementType<FGeometryCollectionTransformBuffer>)this_00;
                if (FVar4 != (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
                  FVar10 = FVar4;
                }
                *(int *)(lVar14 + 0x28 + (longlong)FVar10) = iVar3;
                uVar7 = 0;
                if ((int)uVar11 < (this->TransformBuffers).ArrayNum) {
                  uVar7 = ~uVar11 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                FVar4 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
                FVar10 = (ForElementType<FGeometryCollectionTransformBuffer>)this_00;
                if (FVar4 != (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
                  FVar10 = FVar4;
                }
                (**(code **)(*(longlong *)(lVar14 + (longlong)FVar10) + 0x18))
                          ((longlong)(int)uVar11 * 0x38 + (longlong)FVar10,param_1);
                uVar11 = uVar11 + 1;
                lVar14 = lVar14 + 0x38;
              } while ((int)uVar11 < (this->TransformBuffers).ArrayNum);
            }
          }
          EVar13 = RLM_WriteOnly_NoOverwrite;
          this->CurrentTransformBufferIndex =
               (this->CurrentTransformBufferIndex + 1) % (this->TransformBuffers).ArrayNum;
        }
        this_02 = GetCurrentTransformBuffer(this);
        pFVar8 = GetCurrentPrevTransformBuffer(this);
        (this->VertexFactory).Data.BoneTransformSRV = (this_02->VertexBufferSRV).Reference;
        (this->VertexFactory).Data.BonePrevTransformSRV = (pFVar8->VertexBufferSRV).Reference;
        FGeometryCollectionTransformBuffer::UpdateDynamicData
                  (this_02,param_1,&this->DynamicData->Transforms,EVar13);
        local_40 = (pFVar8->VertexBufferSRV).Reference;
        local_48 = (this_02->VertexBufferSRV).Reference;
        local_38 = (this->MeshResource->BoneMapVertexBuffer).VertexBufferSRV.Reference;
        TVar9 = TUniformBufferRef<FGCBoneLooseParameters>::CreateUniformBufferImmediate
                          ((FGCBoneLooseParameters *)&local_res8,(EUniformBufferUsage)&local_48,
                           2 - ((this->VertexFactory).EnableLooseParameter != false));
        pTVar1 = &(this->VertexFactory).LooseParameterUniformBuffer;
        if ((TUniformBufferRef<FGCBoneLooseParameters>)pTVar1 != TVar9) {
          this_01 = pTVar1->Reference;
          pTVar1->Reference = *(FRHIUniformBuffer **)TVar9;
          *(undefined8 *)TVar9 = 0;
          if (this_01 != (FRHIUniformBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)this_01);
          }
        }
        if (local_res8 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)local_res8);
        }
      }
    }
    if ((int)(this->RayTracingGeometry)._padding_ != -1) {
      pEVar2 = &(this->RayTracingGeometry).GeometryState;
      *pEVar2 = *pEVar2 | RequiresBuild;
    }
  }
  return;
}

// SetupVertexFactory @ 1463c9710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCollectionSceneProxyBase::SetupVertexFactory
          (FGeometryCollectionSceneProxyBase *this,FRHICommandListBase *param_1,
          FGeometryCollectionVertexFactory *param_2,FColorVertexBuffer *param_3)

{
  Type TVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  FGeometryCollectionTransformBuffer *pFVar8;
  FPositionVertexBuffer *this_00;
  uint uVar9;
  ForElementType<FGeometryCollectionTransformBuffer> FVar10;
  char cVar11;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  FDataType local_118;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_148;
  TVar1 = this->FeatureLevel;
  lVar7 = (**(code **)((this->VertexFactory)._padding_ + 0x30))();
  if ((*(uint *)(lVar7 + 0x38) & 0x4000) == 0) {
LAB_1463c976a:
    cVar11 = '\0';
  }
  else {
    bVar5 = FVertexFactoryType::CheckManualVertexFetchSupport(TVar1);
    if (!bVar5) goto LAB_1463c976a;
    cVar11 = '\x01';
  }
  TVar1 = this->FeatureLevel;
  lVar7 = (**(code **)(param_2->_padding_ + 0x30))(param_2);
  if ((*(uint *)(lVar7 + 0x38) & 0x4000) != 0) {
    bVar5 = FVertexFactoryType::CheckManualVertexFetchSupport(TVar1);
    if (bVar5) {
      cVar6 = '\x01';
      goto LAB_1463c9793;
    }
  }
  cVar6 = '\0';
LAB_1463c9793:
  if (cVar6 != cVar11) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryCollectionVertexFactory.SupportsManualVertexFetch(FeatureLevel) == VertexFactory.SupportsManualVertexFetch(FeatureLevel)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                       ,0x115,
                       L"Setting up vertex factory for manual vertex fetch but provided type doesn\'t support it."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_118._padding_._4_4_ = 4;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._0_4_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._0_4_ = 0xffffffff;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._4_2_ = 0xff;
  local_118._padding_._6_1_ = 0;
  local_118.BoneTransformSRV = (FRHIShaderResourceView *)0x0;
  local_118.BonePrevTransformSRV = (FRHIShaderResourceView *)0x0;
  local_118.BoneMapSRV = (FRHIShaderResourceView *)0x0;
  if (this->bUseShaderBoneTransform == false) {
    this_00 = &this->SkinnedPositionVertexBuffer;
  }
  else {
    this_00 = &this->MeshResource->PositionVertexBuffer;
  }
  FPositionVertexBuffer::BindPositionVertexBuffer
            (this_00,(FVertexFactory *)param_2,(FStaticMeshDataType *)&local_118);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (&this->MeshResource->StaticMeshVertexBuffer,(FVertexFactory *)param_2,
             (FStaticMeshDataType *)&local_118);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (&this->MeshResource->StaticMeshVertexBuffer,(FVertexFactory *)param_2,
             (FStaticMeshDataType *)&local_118,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            (&this->MeshResource->StaticMeshVertexBuffer,(FVertexFactory *)param_2,
             (FStaticMeshDataType *)&local_118,0);
  if (param_3 == (FColorVertexBuffer *)0x0) {
    param_3 = &this->MeshResource->ColorVertexBuffer;
  }
  FColorVertexBuffer::BindColorVertexBuffer
            (param_3,(FVertexFactory *)param_2,(FStaticMeshDataType *)&local_118);
  if (this->bUseShaderBoneTransform == false) {
    local_118.BoneMapSRV = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
    local_118.BoneTransformSRV = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
    local_118.BonePrevTransformSRV = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
  }
  else {
    uVar2 = this->CurrentTransformBufferIndex;
    local_118.BoneMapSRV = (this->MeshResource->BoneMapVertexBuffer).VertexBufferSRV.Reference;
    iVar3 = (this->TransformBuffers).ArrayNum;
    uVar9 = 0;
    if ((int)uVar2 < iVar3) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_128 = (longlong)(int)uVar2;
      local_120 = (longlong)iVar3;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar10 = (this->TransformBuffers).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FGeometryCollectionTransformBuffer>)0x0) {
      FVar10 = (ForElementType<FGeometryCollectionTransformBuffer>)&this->TransformBuffers;
    }
    local_118.BoneTransformSRV =
         *(FRHIShaderResourceView **)
          ((uchar *)((longlong)FVar10 + 0x30) + (longlong)(int)uVar2 * 0x38);
    pFVar8 = GetCurrentPrevTransformBuffer(this);
    local_118.BonePrevTransformSRV = (pFVar8->VertexBufferSRV).Reference;
  }
  FGeometryCollectionVertexFactory::FDataType::operator=(&param_2->Data,&local_118);
  FRenderResource::UpdateRHI((FRenderResource *)param_2,param_1);
  if ((int)param_2->_padding_ == -1) {
    (**(code **)(param_2->_padding_ + 0x18))();
  }
  else {
    FRenderResource::UpdateRHI((FRenderResource *)param_2,param_1);
  }
  return;
}

// UpdateSkinnedPositions @ 1463cf7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCollectionSceneProxyBase::UpdateSkinnedPositions
          (FGeometryCollectionSceneProxyBase *this,FRHICommandListBase *param_1,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  FGeometryCollectionMeshResources *pFVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  int iVar5;
  uint local_res8 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  void *local_98;
  TArrayView<std::nullptr_t,int> local_90;
  code *local_80;
  uint **local_78;
  uint *local_68;
  FGeometryCollectionSceneProxyBase *local_60;
  uint *local_58;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *local_50;
  void **local_48;
  uint *local_40;
  FBoneMapVertexBuffer *local_38;
  FPositionVertexBuffer *local_30;
  
  local_res20[0] = (this->SkinnedPositionVertexBuffer).Stride;
  local_res8[0] = (this->SkinnedPositionVertexBuffer).NumVertices;
  if (local_res8[0] != (this->MeshDescription).NumVertices) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexCount == MeshDescription.NumVertices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                       ,0x184,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_98 = FRHICommandListBase::LockBuffer
                       (param_1,(FRHIBuffer *)(this->SkinnedPositionVertexBuffer)._padding_,0,
                        local_res8[0] * local_res20[0],RLM_WriteOnly);
  if (local_98 == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBufferData != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                       ,0x187,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar3 = CVarParallelGeometryCollectionBatchSize.Ref;
  pFVar1 = this->MeshResource;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res18[0] = pTVar3->ShadowedValue[1];
  iVar5 = (int)local_res8[0] / (int)local_res18[0];
  if (local_res8[0] != local_res18[0]) {
    iVar5 = iVar5 + 1;
  }
  bVar4 = (int)local_res8[0] < (int)local_res18[0];
  if (bVar4) {
    local_res18[0] = local_res8[0];
  }
  local_68 = local_res18;
  local_58 = local_res8;
  local_48 = &local_98;
  local_90.DataPtr = (void **)0x0;
  local_40 = local_res20;
  local_38 = &pFVar1->BoneMapVertexBuffer;
  local_30 = &pFVar1->PositionVertexBuffer;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`FGeometryCollectionSceneProxyBase::UpdateSkinnedPositions'::__l2::<lambda_1>,void,int>
             ::Call;
  local_78 = &local_68;
  local_90.ArrayNum = 0;
  local_60 = this;
  local_50 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_80,
             local_res8[0]._0_1_,(uint)bVar4,&local_90);
  FRHICommandListBase::UnlockBuffer
            (param_1,(FRHIBuffer *)(this->SkinnedPositionVertexBuffer)._padding_);
  return;
}

// UpdatingRayTracingGeometry_RenderingThread @ 1463cfd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FGeometryCollectionSceneProxyBase::UpdatingRayTracingGeometry_RenderingThread
          (FGeometryCollectionSceneProxyBase *this,FRHICommandListBase *param_1,
          TArrayView<FGeometryCollectionMeshElement_const_,int> *param_2,bool param_3)

{
  int *piVar1;
  int *piVar2;
  TArray<FRayTracingGeometry,TSizedDefaultAllocator<32>_> *pTVar3;
  FRHIBuffer *pFVar4;
  FGeometryCollectionMeshElement *pFVar5;
  FRHIResource *this_00;
  code *pcVar6;
  FGeometryCollectionSceneProxyBase *pFVar7;
  longlong lVar8;
  FRHIBuffer *pFVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  FDebugName *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FRayTracingGeometry *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStackY_378 [32];
  undefined1 local_328 [8];
  FRHIResource *local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined2 local_300;
  FScriptContainerElement local_2fe;
  FRayTracingGeometrySegment local_2f8;
  FGeometryCollectionSceneProxyBase *local_2d0;
  FRayTracingGeometry *local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  TArrayView<FGeometryCollectionMeshElement_const_,int> *local_2b0;
  FRHICommandListBase *local_2a8;
  FRayTracingGeometryInitializer local_2a0;
  FRayTracingGeometryInitializer local_230;
  FRayTracingGeometryInitializer local_1c0;
  FName local_150;
  FName local_148;
  FDebugName local_140 [2];
  FRHIBuffer *local_128;
  uint local_120;
  ERayTracingGeometryType EStack_11c;
  uint local_118;
  undefined4 local_114;
  ERayTracingGeometryInitializerType local_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  FResourceArrayUploadInterface *local_f8;
  uint local_f0 [6];
  FRHIRayTracingGeometry *local_d8;
  FDebugName local_d0;
  FName local_c4;
  FRHIBuffer *local_b8;
  uint local_b0;
  ERayTracingGeometryType EStack_ac;
  uint local_a8;
  undefined4 local_a4;
  ERayTracingGeometryInitializerType local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FResourceArrayUploadInterface *local_88;
  uint local_80 [6];
  FRHIRayTracingGeometry *local_68;
  FDebugName local_60;
  FName local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pTVar3 = &this->PartRayTracingGeometries;
  piVar1 = &(this->PartRayTracingGeometries).ArrayNum;
  local_2d0 = this;
  local_2b0 = param_2;
  local_2a8 = param_1;
  if (param_3) {
    (**(code **)((this->RayTracingGeometry)._padding_ + 0x20))();
    if (*piVar1 == 0) {
      uVar13 = param_2->ArrayNum;
      uVar17 = (ulonglong)uVar13;
      if ((int)uVar13 < 1) {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar17);
        }
      }
      else {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x100,8,uVar13,&pTVar3->AllocatorInstance,piVar1,
                            &(this->PartRayTracingGeometries).ArrayMax);
        DefaultConstructItems<FRayTracingGeometry,int>
                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x100,uVar13);
      }
      uVar21 = 0;
      if (0 < (int)uVar13) {
        local_2c0 = 0;
        local_2c8 = (FRayTracingGeometry *)0x0;
        local_2b8 = 0;
        do {
          local_b8 = (FRHIBuffer *)0x0;
          local_b0 = 0;
          EStack_ac = 0;
          local_a8 = 0;
          local_a4 = 0x10000;
          local_a0 = Rendering;
          local_98.Data = (FScriptContainerElement *)0x0;
          local_90 = 0;
          local_88 = (FResourceArrayUploadInterface *)0x0;
          local_80[0] = 0xffffffff;
          local_80[1] = 0xffffffff;
          local_80[2] = 0xffffffff;
          local_80[3] = 0xffffffff;
          local_80[4] = 0xffffffff;
          local_80[5] = 0xffffffff;
          local_68 = (FRHIRayTracingGeometry *)0x0;
          FDebugName::FDebugName(&local_60);
          local_54.ComparisonIndex.Value = 0;
          local_54.Number = 0;
          pFVar14 = ::FName::FName(&local_150,L"GeometryCollectionPart");
          pFVar15 = FDebugName::FDebugName(local_140,*pFVar14,uVar21);
          pFVar9 = local_b8;
          local_60.Name = pFVar15->Name;
          local_60.Number = pFVar15->Number;
          EStack_ac = RTGT_Triangles;
          local_a8 = 0;
          local_a4 = CONCAT22(local_a4._2_2_,1);
          pFVar4 = (FRHIBuffer *)(this->MeshResource->IndexBuffer)._padding_;
          if (local_b8 != pFVar4) {
            local_b8 = pFVar4;
            if (pFVar4 != (FRHIBuffer *)0x0) {
              FRHIResource::AddRef((FRHIResource *)pFVar4);
            }
            if (pFVar9 != (FRHIBuffer *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar9);
            }
          }
          uVar18 = ~uVar21 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar21 < (int)uVar17) {
            uVar13 = uVar18;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar8 = local_2b8;
          pFVar5 = param_2->DataPtr;
          local_320 = (FRHIResource *)0x0;
          local_318 = 3;
          local_310 = 0xc;
          local_300 = 0x100;
          local_2fe = (FScriptContainerElement)0x1;
          local_308 = (ulonglong)*(uint *)((longlong)&pFVar5->TriangleStart + local_2b8);
          this_00 = (FRHIResource *)(local_2d0->MeshResource->PositionVertexBuffer)._padding_;
          if (this_00 != (FRHIResource *)0x0) {
            local_320 = this_00;
            FRHIResource::AddRef(this_00);
          }
          local_308 = CONCAT44(*(undefined4 *)((longlong)&pFVar5->TriangleCount + lVar8),
                               (undefined4)local_308);
          local_310 = CONCAT44(*(undefined4 *)((longlong)&pFVar5->VertexEnd + lVar8),
                               (undefined4)local_310);
          if (((local_98.Data <= (FScriptContainerElement *)&local_320) &&
              ((FScriptContainerElement *)&local_320 <
               local_98.Data + (longlong)local_90._4_4_ * 0x28)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = (int)local_90;
          if ((int)local_90 == local_90._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&local_98,(int *)((longlong)&local_90 + 4));
          }
          local_90 = CONCAT44(local_90._4_4_,iVar12 + 1);
          pFVar16 = local_98.Data + (longlong)iVar12 * 0x28;
          *(undefined8 *)pFVar16 = 0;
          *(FRHIResource **)pFVar16 = local_320;
          if (local_320 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(local_320);
          }
          *(undefined4 *)(pFVar16 + 8) = (undefined4)local_318;
          *(undefined4 *)(pFVar16 + 0xc) = local_318._4_4_;
          *(undefined4 *)(pFVar16 + 0x10) = (undefined4)local_310;
          *(undefined4 *)(pFVar16 + 0x14) = local_310._4_4_;
          *(undefined4 *)(pFVar16 + 0x18) = (undefined4)local_308;
          *(undefined4 *)(pFVar16 + 0x1c) = local_308._4_4_;
          pFVar16[0x20] = local_300._0_1_;
          pFVar16[0x21] = local_300._1_1_;
          pFVar16[0x22] = local_2fe;
          local_a8 = local_a8 + *(int *)((longlong)&pFVar5->TriangleCount + lVar8);
          if (local_320 != (FRHIResource *)0x0) {
            FRHIResource::Release(local_320);
          }
          lVar8 = local_2c0;
          uVar13 = 0;
          if ((int)uVar21 < *piVar1) {
            uVar13 = uVar18;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar20 = local_2c8;
          local_230.IndexBuffer.Reference = local_b8;
          local_230.IndexBufferOffset = local_b0;
          local_230.GeometryType = EStack_ac;
          local_230.TotalPrimitiveCount = local_a8;
          local_230.bFastBuild = (bool)(undefined1)local_a4;
          local_230.bAllowUpdate = (bool)local_a4._1_1_;
          local_230.bAllowCompaction = (bool)local_a4._2_1_;
          local_230.bTemplate = (bool)local_a4._3_1_;
          local_230.Type = local_a0;
          local_230.Segments.AllocatorInstance.Data = local_98.Data;
          local_230.Segments.ArrayNum = (int)local_90;
          local_230.Segments.ArrayMax = local_90._4_4_;
          local_230.OfflineData = local_88;
          local_230.SourceGeometry = local_68;
          local_230.DebugName.Number = local_60.Number;
          local_230.OfflineDataHeader.Reserved[0] = local_80[0];
          local_230.OfflineDataHeader.Reserved[1] = local_80[1];
          local_230.OfflineDataHeader.Reserved[2] = local_80[2];
          local_230.OfflineDataHeader.Reserved[3] = local_80[3];
          local_230.OwnerName = local_54;
          local_b8 = (FRHIBuffer *)0x0;
          local_98.Data = (FScriptContainerElement *)0x0;
          local_90 = 0;
          local_230.OfflineDataHeader.Reserved[4] = local_80[4];
          local_230.OfflineDataHeader.Reserved[5] = local_80[5];
          local_230.DebugName.Name = local_60.Name;
          FRayTracingGeometry::SetInitializer
                    ((FRayTracingGeometry *)((pTVar3->AllocatorInstance).Data + (longlong)local_2c8)
                     ,&local_230);
          uVar13 = 0;
          if ((int)uVar21 < *piVar1) {
            uVar13 = uVar18;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar16 = (pTVar3->AllocatorInstance).Data + (longlong)pFVar20;
          (**(code **)(*(longlong *)pFVar16 + 0x18))(pFVar16,local_2a8);
          DestructItems<FRayTracingGeometrySegment,int>
                    ((FRayTracingGeometrySegment *)local_98.Data,(int)local_90);
          if ((FRayTracingGeometrySegment *)local_98.Data != (FRayTracingGeometrySegment *)0x0) {
            FMemory::Free(local_98.Data);
          }
          if (local_b8 != (FRHIBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)local_b8);
          }
          local_2b8 = local_2b8 + 0x14;
          local_2c0 = lVar8 + 1;
          local_2c8 = (FRayTracingGeometry *)((longlong)pFVar20 + 0x100);
          uVar21 = uVar21 + 1;
          uVar17 = (ulonglong)(uint)local_2b0->ArrayNum;
          this = local_2d0;
          param_2 = local_2b0;
        } while ((int)uVar21 < local_2b0->ArrayNum);
      }
    }
  }
  else {
    iVar12 = *piVar1;
    pFVar16 = (pTVar3->AllocatorInstance).Data;
    pFVar19 = pFVar16 + (longlong)iVar12 * 0x100;
    while( true ) {
      if (*piVar1 != iVar12) {
        local_328[0] = 0;
        `TCheckedPointerIterator<FRayTracingGeometry,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_328);
      }
      if (pFVar16 == pFVar19) break;
      (**(code **)(*(longlong *)pFVar16 + 0x20))(pFVar16);
      pFVar16 = pFVar16 + 0x100;
    }
    DestructItems<FRayTracingGeometry,int>
              ((FRayTracingGeometry *)(pTVar3->AllocatorInstance).Data,*piVar1);
    uVar17 = 0;
    piVar2 = &(this->PartRayTracingGeometries).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,8,0,&pTVar3->AllocatorInstance,0,piVar2);
    }
    pFVar7 = local_2d0;
    pFVar20 = &local_2d0->RayTracingGeometry;
    if ((int)(local_2d0->RayTracingGeometry)._padding_ == -1) {
      local_128 = (FRHIBuffer *)0x0;
      local_120 = 0;
      EStack_11c = 0;
      local_118 = 0;
      local_114 = 0x10000;
      local_110 = Rendering;
      local_108.Data = (FScriptContainerElement *)0x0;
      local_100 = 0;
      local_f8 = (FResourceArrayUploadInterface *)0x0;
      local_f0[0] = 0xffffffff;
      local_f0[1] = 0xffffffff;
      local_f0[2] = 0xffffffff;
      local_f0[3] = 0xffffffff;
      local_f0[4] = 0xffffffff;
      local_f0[5] = 0xffffffff;
      local_d8 = (FRHIRayTracingGeometry *)0x0;
      local_2c8 = pFVar20;
      FDebugName::FDebugName(&local_d0);
      local_c4.ComparisonIndex.Value = 0;
      local_c4.Number = 0;
      pFVar14 = ::FName::FName(&local_148,L"GeometryCollection");
      FDebugName::operator=(&local_d0,*pFVar14);
      pFVar9 = local_128;
      EStack_11c = RTGT_Triangles;
      local_118 = 0;
      local_114 = CONCAT22(local_114._2_2_,1);
      pFVar4 = (FRHIBuffer *)(pFVar7->MeshResource->IndexBuffer)._padding_;
      if (local_128 != pFVar4) {
        local_128 = pFVar4;
        if (pFVar4 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar4);
        }
        if (pFVar9 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar9);
        }
      }
      local_2a0.IndexBuffer.Reference = local_128;
      if (local_128 != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_128);
      }
      FVar10.Data = local_108.Data;
      iVar12 = (int)local_100;
      local_2a0.IndexBufferOffset = local_120;
      local_2a0.GeometryType = EStack_11c;
      local_2a0.TotalPrimitiveCount = local_118;
      local_2a0.bFastBuild = (bool)(undefined1)local_114;
      local_2a0.bAllowUpdate = (bool)local_114._1_1_;
      local_2a0.bAllowCompaction = (bool)local_114._2_1_;
      local_2a0.bTemplate = (bool)local_114._3_1_;
      local_2a0.Type = local_110;
      local_2a0.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.Segments.ArrayNum = (int)local_100;
      if ((int)local_100 == 0) {
        local_2a0.Segments.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,(int)local_100,0,&local_2a0.Segments.AllocatorInstance,(int)local_100,
                   &local_2a0.Segments.ArrayMax);
        ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                  (local_2a0.Segments.AllocatorInstance.Data,
                   (FRayTracingGeometrySegment *)FVar10.Data,iVar12);
      }
      local_2a0.OfflineData = local_f8;
      local_2a0.SourceGeometry = local_d8;
      local_2a0.DebugName.Number = local_d0.Number;
      local_2a0.OfflineDataHeader.Reserved[0] = local_f0[0];
      local_2a0.OfflineDataHeader.Reserved[1] = local_f0[1];
      local_2a0.OfflineDataHeader.Reserved[2] = local_f0[2];
      local_2a0.OfflineDataHeader.Reserved[3] = local_f0[3];
      local_2a0.OwnerName = local_c4;
      local_2a0.OfflineDataHeader.Reserved[4] = local_f0[4];
      local_2a0.OfflineDataHeader.Reserved[5] = local_f0[5];
      local_2a0.DebugName.Name = local_d0.Name;
      FRayTracingGeometry::SetInitializer(pFVar20,&local_2a0);
      (**(code **)(pFVar20->_padding_ + 0x18))(pFVar20,param_1);
      pFVar7 = local_2d0;
      iVar12 = param_2->ArrayNum;
      uVar22 = uVar17;
      if (0 < iVar12) {
        do {
          uVar21 = (uint)uVar17;
          uVar13 = 0;
          if ((int)uVar21 < iVar12) {
            uVar13 = ~uVar21 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = param_2->DataPtr;
          local_2f8.VertexBuffer.Reference = (FRHIBuffer *)0x0;
          local_2f8.VertexBufferElementType = VET_Float3;
          local_2f8.VertexBufferOffset = 0;
          local_2f8.VertexBufferStride = 0xc;
          local_2f8.MaxVertices = 0;
          local_2f8.bForceOpaque = false;
          local_2f8.bAllowDuplicateAnyHitShaderInvocation = true;
          local_2f8.bEnabled = true;
          local_2f8.NumPrimitives = 0;
          local_2f8.FirstPrimitive = *(uint *)((longlong)&pFVar5->TriangleStart + uVar22);
          pFVar4 = (FRHIBuffer *)(pFVar7->MeshResource->PositionVertexBuffer)._padding_;
          if (pFVar4 != (FRHIBuffer *)0x0) {
            local_2f8.VertexBuffer.Reference = pFVar4;
            FRHIResource::AddRef((FRHIResource *)pFVar4);
          }
          local_2f8.NumPrimitives = *(uint *)((longlong)&pFVar5->TriangleCount + uVar22);
          local_2f8.MaxVertices = *(uint *)((longlong)&pFVar5->VertexEnd + uVar22);
          if (((local_108.Data <= &local_2f8) &&
              (&local_2f8 <
               (FRayTracingGeometrySegment *)(local_108.Data + (longlong)local_100._4_4_ * 0x28)))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar12 + 1);
          pFVar16 = local_108.Data + (longlong)iVar12 * 0x28;
          *(undefined8 *)&pFVar16->field_0x0 = 0;
          *(FRHIBuffer **)&pFVar16->field_0x0 = local_2f8.VertexBuffer.Reference;
          if (local_2f8.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_2f8.VertexBuffer.Reference);
          }
          *(EVertexElementType *)(pFVar16 + 8) = local_2f8.VertexBufferElementType;
          *(uint *)(pFVar16 + 0xc) = local_2f8.VertexBufferOffset;
          *(uint *)(pFVar16 + 0x10) = local_2f8.VertexBufferStride;
          *(uint *)(pFVar16 + 0x14) = local_2f8.MaxVertices;
          *(uint *)(pFVar16 + 0x18) = local_2f8.FirstPrimitive;
          *(uint *)(pFVar16 + 0x1c) = local_2f8.NumPrimitives;
          pFVar16[0x20] = (FScriptContainerElement)local_2f8.bForceOpaque;
          pFVar16[0x21] = (FScriptContainerElement)local_2f8.bAllowDuplicateAnyHitShaderInvocation;
          pFVar16[0x22] = (FScriptContainerElement)local_2f8.bEnabled;
          local_118 = local_118 + *(int *)((longlong)&pFVar5->TriangleCount + uVar22);
          if (local_2f8.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)local_2f8.VertexBuffer.Reference);
          }
          iVar12 = param_2->ArrayNum;
          uVar17 = (ulonglong)(uVar21 + 1);
          pFVar20 = local_2c8;
          param_1 = local_2a8;
          uVar22 = uVar22 + 0x14;
        } while ((int)(uVar21 + 1) < iVar12);
      }
      local_1c0.IndexBuffer.Reference = local_128;
      local_1c0.IndexBufferOffset = local_120;
      local_1c0.GeometryType = EStack_11c;
      local_1c0.TotalPrimitiveCount = local_118;
      local_1c0.bFastBuild = (bool)(undefined1)local_114;
      local_1c0.bAllowUpdate = (bool)local_114._1_1_;
      local_1c0.bAllowCompaction = (bool)local_114._2_1_;
      local_1c0.bTemplate = (bool)local_114._3_1_;
      local_1c0.Type = local_110;
      local_1c0.Segments.AllocatorInstance.Data = local_108.Data;
      local_1c0.Segments.ArrayNum = (int)local_100;
      local_1c0.Segments.ArrayMax = local_100._4_4_;
      local_1c0.OfflineData = local_f8;
      local_1c0.SourceGeometry = local_d8;
      local_1c0.DebugName.Number = local_d0.Number;
      local_1c0.OfflineDataHeader.Reserved[0] = local_f0[0];
      local_1c0.OfflineDataHeader.Reserved[1] = local_f0[1];
      local_1c0.OfflineDataHeader.Reserved[2] = local_f0[2];
      local_1c0.OfflineDataHeader.Reserved[3] = local_f0[3];
      local_1c0.OwnerName = local_c4;
      local_128 = (FRHIBuffer *)0x0;
      local_108.Data = (FScriptContainerElement *)0x0;
      local_100 = 0;
      local_1c0.OfflineDataHeader.Reserved[4] = local_f0[4];
      local_1c0.OfflineDataHeader.Reserved[5] = local_f0[5];
      local_1c0.DebugName.Name = local_d0.Name;
      FRayTracingGeometry::SetInitializer(pFVar20,&local_1c0);
      FRayTracingGeometry::CreateRayTracingGeometry(pFVar20,param_1,Skip);
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_108.Data,(int)local_100);
      if ((FRayTracingGeometrySegment *)local_108.Data != (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_108.Data);
      }
      if (local_128 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_128);
      }
    }
  }
  return;
}

