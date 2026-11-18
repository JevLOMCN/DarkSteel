// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 7

// FHairGroupInstance @ 14dfee040

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHairGroupInstance * __thiscall FHairGroupInstance::FHairGroupInstance(FHairGroupInstance *this)

{
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(undefined ***)this = &___7FHairGroupInstance__6B_;
  *(undefined4 *)&this->field_0x8 = 0;
  (this->Guides).RestResource = (FHairStrandsRestResource *)0x0;
  (this->Guides).DeformedResource = (FHairStrandsDeformedResource *)0x0;
  (this->Guides).RestRootResource = (FHairStrandsRestRootResource *)0x0;
  (this->Guides).DeformedRootResource = (FHairStrandsDeformedRootResource *)0x0;
  (this->Guides).bIsSimulationEnable = false;
  (this->Guides).bIsDeformationEnable = false;
  (this->Guides).bHasGlobalInterpolation = false;
  (this->Guides).bIsSimulationCacheEnable = false;
  (this->Strands).RestResource = (FHairStrandsRestResource *)0x0;
  (this->Strands).DeformedResource = (FHairStrandsDeformedResource *)0x0;
  (this->Strands).InterpolationResource = (FHairStrandsInterpolationResource *)0x0;
  (this->Strands).ClusterResource = (FHairStrandsClusterResource *)0x0;
  (this->Strands).CullingResource = (FHairStrandsCullingResource *)0x0;
  (this->Strands).RestRootResource = (FHairStrandsRestRootResource *)0x0;
  (this->Strands).DeformedRootResource = (FHairStrandsDeformedRootResource *)0x0;
  (this->Strands).RenRaytracingResource = (FHairStrandsRaytracingResource *)0x0;
  (this->Strands).RenRaytracingResourceOwned = false;
  (this->Strands).ViewRayTracingMask = None;
  (this->Strands).CachedHairScaledRadius = 0.0;
  (this->Strands).CachedHairRootScale = 0.0;
  (this->Strands).CachedHairTipScale = 0.0;
  (this->Strands).CachedProceduralSplits = 0;
  (this->Strands).DebugCurveAttributeBuffer.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Strands).DebugCurveAttributeBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Strands).DebugCurveAttributeBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Strands).DebugCurveAttributeBuffer.Format = PF_Unknown;
  (this->Strands).Modifier.HairLength = 0.0;
  (this->Strands).Modifier.HairWidth = 0.1;
  (this->Strands).Modifier.HairWidth_Override = false;
  (this->Strands).Modifier.HairRootScale = 1.0;
  (this->Strands).Modifier.HairRootScale_Override = false;
  (this->Strands).Modifier.HairTipScale = 1.0;
  (this->Strands).Modifier.HairTipScale_Override = false;
  (this->Strands).Modifier.HairShadowDensity = 1.0;
  (this->Strands).Modifier.HairShadowDensity_Override = false;
  (this->Strands).Modifier.HairRaytracingRadiusScale = 1.0;
  (this->Strands).Modifier.HairRaytracingRadiusScale_Override = false;
  (this->Strands).Modifier.bUseHairRaytracingGeometry = false;
  (this->Strands).Modifier.bUseHairRaytracingGeometry_Override = false;
  (this->Strands).Modifier.LODBias = 0.0;
  (this->Strands).Modifier.bUseStableRasterization = false;
  (this->Strands).Modifier.bUseStableRasterization_Override = false;
  (this->Strands).Modifier.bScatterSceneLighting = false;
  (this->Strands).Modifier.bScatterSceneLighting_Override = false;
  (this->Strands).Modifier.bSupportVoxelization = true;
  (this->Strands).Modifier.bSupportVoxelization_Override = false;
  (this->Strands).Modifier.HairLengthScale = 1.0;
  (this->Strands).Modifier.HairLengthScale_Override = false;
  (this->Strands).UniformBuffer =
       (TUniformBufferRef<FHairStrandsVertexFactoryUniformShaderParameters>)0x0;
  (this->Strands).VertexFactory = (FHairStrandsVertexFactory *)0x0;
  (this->Strands).HairInterpolationType = NoneSkinning;
  (this->Strands).bCullingEnable = false;
  (this->Cards).LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cards).LODs.ArrayNum = 0;
  (this->Cards).LODs.ArrayMax = 0;
  (this->Meshes).LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).LODs.ArrayNum = 0;
  (this->Meshes).LODs.ArrayMax = 0;
  (this->Debug).GroomAssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Debug).GroomAssetName.Data.ArrayNum = 0;
  (this->Debug).GroomAssetName.Data.ArrayMax = 0;
  (this->Debug).MeshComponentName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Debug).MeshComponentName.Data.ArrayNum = 0;
  (this->Debug).MeshComponentName.Data.ArrayMax = 0;
  (this->Debug).MeshComponentId.PrimIDValue = 0;
  (this->Debug).CachedMeshPersistentPrimitiveIndex.Index = -1;
  (this->Debug).GroupIndex = 0xffffffff;
  (this->Debug).GroupCount = 0;
  (this->Debug).LastFrameIndex = 0xffffffff;
  (this->Debug).GroomAssetHash = 0;
  (this->Debug).GroomBindingAssetHash = 0;
  (this->Debug).LODPredictedIndex = -1.0;
  (this->Debug).LODForcedIndex = -1.0;
  (this->Debug).LODSelectionTypeForDebug = Immediate;
  (this->Debug).MeshLODIndex = -1;
  (this->Debug).Proxy = (FPrimitiveSceneProxy *)0x0;
  (this->Debug).MeshComponentForDebug = (UMeshComponent *)0x0;
  (this->Debug).GroomComponentForDebug = (UGroomComponent *)0x0;
  *&(this->Debug).RigidRestLocalToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Debug).RigidRestLocalToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Debug).RigidRestLocalToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Debug).RigidRestLocalToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Debug).RigidRestLocalToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Debug).RigidRestLocalToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Debug).RigidCurrentLocalToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Debug).RigidCurrentLocalToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Debug).RigidCurrentLocalToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Debug).RigidCurrentLocalToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Debug).RigidCurrentLocalToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Debug).RigidCurrentLocalToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Debug).SkinningRestLocalToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Debug).SkinningRestLocalToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Debug).SkinningRestLocalToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Debug).SkinningRestLocalToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Debug).SkinningRestLocalToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Debug).SkinningRestLocalToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Debug).SkinningCurrentLocalToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Debug).SkinningCurrentLocalToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Debug).SkinningCurrentLocalToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Debug).SkinningCurrentLocalToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Debug).SkinningCurrentLocalToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Debug).SkinningCurrentLocalToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Debug).RigidPreviousLocalToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Debug).RigidPreviousLocalToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Debug).RigidPreviousLocalToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Debug).RigidPreviousLocalToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Debug).RigidPreviousLocalToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Debug).RigidPreviousLocalToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Debug).SkinningPreviousLocalToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Debug).SkinningPreviousLocalToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Debug).SkinningPreviousLocalToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Debug).SkinningPreviousLocalToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Debug).SkinningPreviousLocalToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Debug).SkinningPreviousLocalToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Debug).GroomCacheBuffers.Object = (IGroomCacheBuffers *)0x0;
  (this->Debug).GroomCacheBuffers.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Debug).HairDebugResource = (FHairStrandsDebugResources *)0x0;
  *&(this->LocalToWorld).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalToWorld).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalToWorld).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalToWorld).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalToWorld).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalToWorld).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->HairGroupPublicData = (FHairGroupPublicData *)0x0;
  this->GeometryType = NoneGeometry;
  this->BindingType = NoneBinding;
  this->bForceCards = false;
  this->bUpdatePositionOffset = false;
  this->bSupportStreaming = true;
  this->DeformedComponent = (UMeshComponent *)0x0;
  this->DeformedSection = -1;
  return this;
}

// ~FHairGroupInstance @ 14dff1db0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FHairGroupInstance::~FHairGroupInstance(FHairGroupInstance *this)

{
  FHairStrandsDeformedRootResource *pFVar1;
  FScriptContainerElement *pFVar2;
  FHairStrandsDeformedResource *pFVar3;
  FHairStrandsCullingResource *pFVar4;
  FHairStrandsRaytracingResource *pFVar5;
  FHairStrandsVertexFactory *pFVar6;
  undefined8 *puVar7;
  FHairGroupPublicData *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  
  uVar13 = 0;
  *(undefined ***)this = &___7FHairGroupInstance__6B_;
  if ((this->Guides).RestResource != (FHairStrandsRestResource *)0x0) {
    pFVar1 = (this->Guides).DeformedRootResource;
    if (pFVar1 != (FHairStrandsDeformedRootResource *)0x0) {
      FHairStrandsDeformedRootResource::ReleaseResource(pFVar1);
      pFVar1 = (this->Guides).DeformedRootResource;
      if (pFVar1 != (FHairStrandsDeformedRootResource *)0x0) {
        pFVar2 = (pFVar1->LODs).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar1,0x18);
      }
      (this->Guides).DeformedRootResource = (FHairStrandsDeformedRootResource *)0x0;
    }
    pFVar3 = (this->Guides).DeformedResource;
    if (pFVar3 != (FHairStrandsDeformedResource *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x20))();
      pFVar3 = (this->Guides).DeformedResource;
      if (pFVar3 != (FHairStrandsDeformedResource *)0x0) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
      (this->Guides).DeformedResource = (FHairStrandsDeformedResource *)0x0;
    }
  }
  if ((this->Strands).RestResource != (FHairStrandsRestResource *)0x0) {
    pFVar1 = (this->Strands).DeformedRootResource;
    if (pFVar1 != (FHairStrandsDeformedRootResource *)0x0) {
      FHairStrandsDeformedRootResource::ReleaseResource(pFVar1);
      pFVar1 = (this->Strands).DeformedRootResource;
      if (pFVar1 != (FHairStrandsDeformedRootResource *)0x0) {
        pFVar2 = (pFVar1->LODs).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pFVar1,0x18);
      }
      (this->Strands).DeformedRootResource = (FHairStrandsDeformedRootResource *)0x0;
    }
    pFVar3 = (this->Strands).DeformedResource;
    if (pFVar3 != (FHairStrandsDeformedResource *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x20))();
      pFVar3 = (this->Strands).DeformedResource;
      if (pFVar3 != (FHairStrandsDeformedResource *)0x0) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
      (this->Strands).DeformedResource = (FHairStrandsDeformedResource *)0x0;
    }
    pFVar4 = (this->Strands).CullingResource;
    if (pFVar4 != (FHairStrandsCullingResource *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x20))();
      pFVar4 = (this->Strands).CullingResource;
      if (pFVar4 != (FHairStrandsCullingResource *)0x0) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
      (this->Strands).CullingResource = (FHairStrandsCullingResource *)0x0;
    }
    if (((this->Strands).RenRaytracingResourceOwned != false) &&
       (pFVar5 = (this->Strands).RenRaytracingResource,
       pFVar5 != (FHairStrandsRaytracingResource *)0x0)) {
      (**(code **)(pFVar5->_padding_ + 0x20))();
      pFVar5 = (this->Strands).RenRaytracingResource;
      if (pFVar5 != (FHairStrandsRaytracingResource *)0x0) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
      (this->Strands).RenRaytracingResource = (FHairStrandsRaytracingResource *)0x0;
    }
    FRDGExternalBuffer::Release(&(this->Strands).DebugCurveAttributeBuffer);
    pFVar6 = (this->Strands).VertexFactory;
    if (pFVar6 != (FHairStrandsVertexFactory *)0x0) {
      (**(code **)(pFVar6->_padding_ + 0x20))();
      pFVar6 = (this->Strands).VertexFactory;
      if (pFVar6 != (FHairStrandsVertexFactory *)0x0) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
      (this->Strands).VertexFactory = (FHairStrandsVertexFactory *)0x0;
    }
  }
  uVar14 = (this->Cards).LODs.ArrayNum;
  if (uVar14 != 0) {
    do {
      if ((-1 < (int)uVar13) && ((int)uVar13 < (this->Cards).LODs.ArrayNum)) {
        uVar12 = ~uVar13 >> 0x1f;
        if (((int)uVar13 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar16 = (longlong)(int)uVar13 * 0x68;
        if (*(longlong *)((this->Cards).LODs.AllocatorInstance.Data + lVar16) != 0) {
          uVar11 = 0;
          if ((int)uVar13 < (this->Cards).LODs.ArrayNum) {
            uVar11 = uVar12;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar2 = (this->Cards).LODs.AllocatorInstance.Data;
          if (*(FHairStrandsDeformedRootResource **)(pFVar2 + lVar16 + 0x40) !=
              (FHairStrandsDeformedRootResource *)0x0) {
            FHairStrandsDeformedRootResource::ReleaseResource
                      (*(FHairStrandsDeformedRootResource **)(pFVar2 + lVar16 + 0x40));
            puVar7 = *(undefined8 **)(pFVar2 + lVar16 + 0x40);
            if (puVar7 != (undefined8 *)0x0) {
              if ((void *)*puVar7 != (void *)0x0) {
                FMemory::Free((void *)*puVar7);
              }
              ::operator_delete(puVar7,0x18);
            }
            *(undefined8 *)(pFVar2 + lVar16 + 0x40) = 0;
          }
          uVar15 = 0;
          uVar11 = uVar15;
          if ((int)uVar13 < (this->Cards).LODs.ArrayNum) {
            uVar11 = uVar12;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar2 = (this->Cards).LODs.AllocatorInstance.Data;
          if (*(longlong **)(pFVar2 + lVar16 + 0x30) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pFVar2 + lVar16 + 0x30) + 0x20))();
            puVar7 = *(undefined8 **)(pFVar2 + lVar16 + 0x30);
            if (puVar7 != (undefined8 *)0x0) {
              (**(code **)*puVar7)(puVar7,1);
            }
            *(undefined8 *)(pFVar2 + lVar16 + 0x30) = 0;
          }
          uVar11 = uVar15;
          if ((int)uVar13 < (this->Cards).LODs.ArrayNum) {
            uVar11 = uVar12;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar2 = (this->Cards).LODs.AllocatorInstance.Data;
          if (*(longlong **)(pFVar2 + lVar16 + 8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pFVar2 + lVar16 + 8) + 0x20))();
            puVar7 = *(undefined8 **)(pFVar2 + lVar16 + 8);
            if (puVar7 != (undefined8 *)0x0) {
              (**(code **)*puVar7)(puVar7,1);
            }
            *(undefined8 *)(pFVar2 + lVar16 + 8) = 0;
          }
          if ((int)uVar13 < (this->Cards).LODs.ArrayNum) {
            uVar15 = uVar12;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((this->Cards).LODs.AllocatorInstance.Data[lVar16 + 0x20] !=
              (FScriptContainerElement)0x0) {
            uVar11 = 0;
            if ((int)uVar13 < (this->Cards).LODs.ArrayNum) {
              uVar11 = uVar12;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar2 = (this->Cards).LODs.AllocatorInstance.Data;
            if (*(longlong **)(pFVar2 + lVar16 + 0x18) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(pFVar2 + lVar16 + 0x18) + 0x20))();
              puVar7 = *(undefined8 **)(pFVar2 + lVar16 + 0x18);
              if (puVar7 != (undefined8 *)0x0) {
                (**(code **)*puVar7)(puVar7,1);
              }
              *(undefined8 *)(pFVar2 + lVar16 + 0x18) = 0;
            }
          }
          uVar11 = 0;
          if ((int)uVar13 < (this->Cards).LODs.ArrayNum) {
            uVar11 = uVar12;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar2 = (this->Cards).LODs.AllocatorInstance.Data;
          if (*(longlong **)(pFVar2 + lVar16 + 0x60) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pFVar2 + lVar16 + 0x60) + 0x20))();
            puVar7 = *(undefined8 **)(pFVar2 + lVar16 + 0x60);
            if (puVar7 != (undefined8 *)0x0) {
              (**(code **)*puVar7)(puVar7,1);
            }
            *(undefined8 *)(pFVar2 + lVar16 + 0x60) = 0;
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar14);
  }
  uVar13 = (this->Meshes).LODs.ArrayNum;
  uVar14 = 0;
  if (uVar13 != 0) {
    do {
      if ((-1 < (int)uVar14) && ((int)uVar14 < (this->Meshes).LODs.ArrayNum)) {
        uVar12 = ~uVar14 >> 0x1f;
        if (((int)uVar14 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar16 = (longlong)(int)uVar14 * 0x30;
        if (*(longlong *)((this->Meshes).LODs.AllocatorInstance.Data + lVar16) != 0) {
          uVar11 = 0;
          if ((int)uVar14 < (this->Meshes).LODs.ArrayNum) {
            uVar11 = uVar12;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar2 = (this->Meshes).LODs.AllocatorInstance.Data;
          if (*(longlong **)(pFVar2 + lVar16 + 8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pFVar2 + lVar16 + 8) + 0x20))();
            puVar7 = *(undefined8 **)(pFVar2 + lVar16 + 8);
            if (puVar7 != (undefined8 *)0x0) {
              (**(code **)*puVar7)(puVar7,1);
            }
            *(undefined8 *)(pFVar2 + lVar16 + 8) = 0;
          }
          uVar11 = 0;
          if ((int)uVar14 < (this->Meshes).LODs.ArrayNum) {
            uVar11 = uVar12;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((this->Meshes).LODs.AllocatorInstance.Data[lVar16 + 0x18] !=
              (FScriptContainerElement)0x0) {
            uVar11 = 0;
            if ((int)uVar14 < (this->Meshes).LODs.ArrayNum) {
              uVar11 = uVar12;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar2 = (this->Meshes).LODs.AllocatorInstance.Data;
            if (*(longlong **)(pFVar2 + lVar16 + 0x10) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(pFVar2 + lVar16 + 0x10) + 0x20))();
              puVar7 = *(undefined8 **)(pFVar2 + lVar16 + 0x10);
              if (puVar7 != (undefined8 *)0x0) {
                (**(code **)*puVar7)(puVar7,1);
              }
              *(undefined8 *)(pFVar2 + lVar16 + 0x10) = 0;
            }
          }
          uVar11 = 0;
          if ((int)uVar14 < (this->Meshes).LODs.ArrayNum) {
            uVar11 = uVar12;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar2 = (this->Meshes).LODs.AllocatorInstance.Data;
          if (*(longlong **)(pFVar2 + lVar16 + 0x28) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pFVar2 + lVar16 + 0x28) + 0x20))();
            puVar7 = *(undefined8 **)(pFVar2 + lVar16 + 0x28);
            if (puVar7 != (undefined8 *)0x0) {
              (**(code **)*puVar7)(puVar7,1);
            }
            *(undefined8 *)(pFVar2 + lVar16 + 0x28) = 0;
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar13);
  }
  pFVar8 = this->HairGroupPublicData;
  if (pFVar8 != (FHairGroupPublicData *)0x0) {
    pFVar2 = (pFVar8->BindingTypes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar8->LODGeometryTypes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar8->LODGlobalInterpolations).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar8->LODSimulations).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar8->LODScreenSizes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar8->LODVisibilities).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FHairGroupPublicData::FVertexFactoryInput::FStrands::~FStrands(&(pFVar8->VFInput).Strands);
    ::operator_delete(pFVar8,0x5a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Debug).GroomCacheBuffers.SharedReferenceCount.ReferenceController);
  pFVar2 = (this->Debug).MeshComponentName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Debug).GroomAssetName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FHairGroupInstance::FMeshes::FLOD,int>
            ((FLOD *)(this->Meshes).LODs.AllocatorInstance.Data,(this->Meshes).LODs.ArrayNum);
  pFVar2 = (this->Meshes).LODs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FHairGroupInstance::FCards::FLOD,int>
            ((FLOD *)(this->Cards).LODs.AllocatorInstance.Data,(this->Cards).LODs.ArrayNum);
  pFVar2 = (this->Cards).LODs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FStrands::~FStrands(&this->Strands);
  return;
}

// GetBounds @ 14e013820

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall FHairGroupInstance::GetBounds(FHairGroupInstance *this)

{
  return &((this->Debug).Proxy)->Bounds;
}

// GetHairData @ 14e017100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHairGroupPublicData * __thiscall FHairGroupInstance::GetHairData(FHairGroupInstance *this)

{
  return this->HairGroupPublicData;
}

// GetHairGeometry @ 14e017120

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EHairGeometryType __thiscall FHairGroupInstance::GetHairGeometry(FHairGroupInstance *this)

{
  return this->GeometryType;
}

// GetLocalBounds @ 14e018110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
FHairGroupInstance::GetLocalBounds(FHairGroupInstance *this)

{
  return &((this->Debug).Proxy)->LocalBounds;
}

// GetHairStandsUniformShaderParameters @ 14e09bd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FHairStrandsVertexFactoryUniformShaderParameters * __thiscall
FHairGroupInstance::GetHairStandsUniformShaderParameters
          (FHairGroupInstance *this,
          FHairStrandsVertexFactoryUniformShaderParameters *__return_storage_ptr__,
          EGroomViewMode param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FHairStrandsInstanceCommonParameters *pFVar18;
  FHairStrandsVertexFactoryUniformShaderParameters *pFVar19;
  uint uVar20;
  FHairStrandsInstanceCommonParameters *pFVar21;
  FHairStrandsVertexFactoryUniformShaderParameters *pFVar22;
  longlong lVar23;
  undefined1 auStack_4b8 [32];
  FVertexFactoryInput local_498;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  InternalComputeHairStrandsVertexInputData(&local_498,(FRDGBuilder *)0x0,this,param_1);
  (__return_storage_ptr__->Culling).CullingIndexBuffer = (FRHIShaderResourceView *)0x0;
  lVar23 = 2;
  pFVar18 = &local_498.Strands.Common;
  pFVar19 = __return_storage_ptr__;
  do {
    pFVar22 = pFVar19;
    pFVar21 = pFVar18;
    pFVar19 = (FHairStrandsVertexFactoryUniformShaderParameters *)
              ((pFVar22->Common).LocalToWorldPrimitiveTransform.M + 1);
    fVar5 = pFVar21->Radius;
    fVar6 = pFVar21->RootScale;
    fVar7 = pFVar21->TipScale;
    fVar8 = pFVar21->Length;
    fVar9 = pFVar21->LengthScale;
    fVar10 = pFVar21->RaytracingRadiusScale;
    uVar20 = pFVar21->RegisteredIndex;
    pFVar18 = (FHairStrandsInstanceCommonParameters *)
              ((pFVar21->LocalToWorldPrimitiveTransform).M + 1);
    (pFVar22->Common).Density = pFVar21->Density;
    (pFVar22->Common).Radius = fVar5;
    (pFVar22->Common).RootScale = fVar6;
    (pFVar22->Common).TipScale = fVar7;
    uVar11 = pFVar21->GroupIndex;
    uVar12 = pFVar21->GroupCount;
    uVar13 = pFVar21->PointCount;
    uVar14 = pFVar21->CurveCount;
    (pFVar22->Common).Length = fVar8;
    (pFVar22->Common).LengthScale = fVar9;
    (pFVar22->Common).RaytracingRadiusScale = fVar10;
    (pFVar22->Common).RegisteredIndex = uVar20;
    uVar20 = pFVar21->RaytracingProceduralSplits;
    uVar15 = pFVar21->Flags;
    uVar16 = pFVar21->bSimulation;
    uVar17 = pFVar21->bSingleGuide;
    (pFVar22->Common).GroupIndex = uVar11;
    (pFVar22->Common).GroupCount = uVar12;
    (pFVar22->Common).PointCount = uVar13;
    (pFVar22->Common).CurveCount = uVar14;
    uVar11 = pFVar21->bPointRemapping;
    uVar12 = pFVar21->bCurveRemapping;
    uVar13 = pFVar21->SourcePointCount;
    uVar14 = pFVar21->SourceCurveCount;
    (pFVar22->Common).RaytracingProceduralSplits = uVar20;
    (pFVar22->Common).Flags = uVar15;
    (pFVar22->Common).bSimulation = uVar16;
    (pFVar22->Common).bSingleGuide = uVar17;
    uVar1 = *(undefined8 *)&(pFVar21->PositionOffset).field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(pFVar21->PositionOffset).field0_0x0 + 8);
    (pFVar22->Common).bPointRemapping = uVar11;
    (pFVar22->Common).bCurveRemapping = uVar12;
    (pFVar22->Common).SourcePointCount = uVar13;
    (pFVar22->Common).SourceCurveCount = uVar14;
    uVar3 = *(undefined8 *)&(pFVar21->PrevPositionOffset).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(pFVar21->PrevPositionOffset).field0_0x0 + 8);
    *(undefined8 *)&(pFVar22->Common).PositionOffset.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(pFVar22->Common).PositionOffset.field0_0x0 + 8) = uVar2;
    uVar1 = *(undefined8 *)(pFVar21->LocalToWorldPrimitiveTransform).M[0];
    uVar2 = *(undefined8 *)((pFVar21->LocalToWorldPrimitiveTransform).M[0] + 2);
    *(undefined8 *)&(pFVar22->Common).PrevPositionOffset.field0_0x0 = uVar3;
    *(undefined8 *)((longlong)&(pFVar22->Common).PrevPositionOffset.field0_0x0 + 8) = uVar4;
    *(undefined8 *)(pFVar22->Common).LocalToWorldPrimitiveTransform.M[0] = uVar1;
    *(undefined8 *)((pFVar22->Common).LocalToWorldPrimitiveTransform.M[0] + 2) = uVar2;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  fVar5 = pFVar18->Radius;
  uVar1 = *(undefined8 *)((pFVar21->LocalToWorldPrimitiveTransform).M[1] + 2);
  uVar2 = *(undefined8 *)(pFVar21->LocalToWorldPrimitiveTransform).M[2];
  uVar3 = *(undefined8 *)((pFVar21->LocalToWorldPrimitiveTransform).M[2] + 2);
  (pFVar19->Common).Density = pFVar18->Density;
  (pFVar19->Common).Radius = fVar5;
  *(undefined8 *)((pFVar22->Common).LocalToWorldPrimitiveTransform.M[1] + 2) = uVar1;
  (__return_storage_ptr__->Resources).PointAttributeBuffer =
       local_498.Strands.PointAttributeBufferRHISRV.Reference;
  uVar1 = *(undefined8 *)(pFVar21->LocalToWorldPrimitiveTransform).M[3];
  uVar4 = *(undefined8 *)((pFVar21->LocalToWorldPrimitiveTransform).M[3] + 2);
  (__return_storage_ptr__->Resources).CurveAttributeBuffer =
       local_498.Strands.CurveAttributeBufferRHISRV.Reference;
  *(undefined8 *)(pFVar22->Common).LocalToWorldPrimitiveTransform.M[2] = uVar2;
  *(undefined8 *)((pFVar22->Common).LocalToWorldPrimitiveTransform.M[2] + 2) = uVar3;
  (__return_storage_ptr__->Resources).CurveBuffer = local_498.Strands.CurveBufferRHISRV.Reference;
  uVar2 = *(undefined8 *)(pFVar21->LocalToTranslatedWorldPrimitiveTransform).M[0];
  uVar3 = *(undefined8 *)((pFVar21->LocalToTranslatedWorldPrimitiveTransform).M[0] + 2);
  (__return_storage_ptr__->Resources).PositionBuffer =
       local_498.Strands.PositionBufferRHISRV.Reference;
  (__return_storage_ptr__->Resources).PointToCurveBuffer =
       local_498.Strands.PointToCurveBufferRHISRV.Reference;
  (__return_storage_ptr__->Resources).TangentBuffer =
       local_498.Strands.TangentBufferRHISRV.Reference;
  (__return_storage_ptr__->PrevResources).PreviousPositionBuffer =
       local_498.Strands.PrevPositionBufferRHISRV.Reference;
  (__return_storage_ptr__->PrevResources).PreviousPositionOffsetBuffer =
       local_498.Strands.PrevPositionOffsetBufferRHISRV.Reference;
  *(undefined8 *)(pFVar22->Common).LocalToWorldPrimitiveTransform.M[3] = uVar1;
  *(undefined8 *)((pFVar22->Common).LocalToWorldPrimitiveTransform.M[3] + 2) = uVar4;
  *(undefined8 *)(pFVar22->Common).LocalToTranslatedWorldPrimitiveTransform.M[0] = uVar2;
  *(undefined8 *)((pFVar22->Common).LocalToTranslatedWorldPrimitiveTransform.M[0] + 2) = uVar3;
  (__return_storage_ptr__->Resources).PositionOffsetBuffer =
       local_498.Strands.PositionOffsetBufferRHISRV.Reference;
  if (local_498.Strands.PositionBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
    (__return_storage_ptr__->Resources).PositionBuffer =
         (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
  }
  if (local_498.Strands.PositionOffsetBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
    (__return_storage_ptr__->Resources).PositionOffsetBuffer =
         (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._48_8_;
  }
  if (local_498.Strands.CurveAttributeBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
    (__return_storage_ptr__->Resources).CurveAttributeBuffer =
         (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
  }
  if (local_498.Strands.PointAttributeBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
    (__return_storage_ptr__->Resources).PointAttributeBuffer =
         (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
  }
  if (local_498.Strands.CurveBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
    (__return_storage_ptr__->Resources).CurveBuffer =
         (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
  }
  if (local_498.Strands.PointToCurveBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
    (__return_storage_ptr__->Resources).PointToCurveBuffer =
         (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
  }
  if (local_498.Strands.TangentBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
    (__return_storage_ptr__->Resources).TangentBuffer =
         (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._48_8_;
  }
  if (local_498.Strands.PrevPositionBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
    (__return_storage_ptr__->PrevResources).PreviousPositionBuffer =
         (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._72_8_;
  }
  if (local_498.Strands.PrevPositionOffsetBufferRHISRV.Reference == (FRHIShaderResourceView *)0x0) {
    (__return_storage_ptr__->PrevResources).PreviousPositionOffsetBuffer =
         (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._48_8_;
  }
  uVar20 = (uint)this->HairGroupPublicData->Culling->bCullingResultAvailable;
  (__return_storage_ptr__->Culling).bCullingEnable = uVar20;
  if (uVar20 == 0) {
    (__return_storage_ptr__->Culling).CullingIndexBuffer =
         (FRHIShaderResourceView *)GDummyCulledDispatchVertexIdsBuffer._40_8_;
  }
  else {
    (__return_storage_ptr__->Culling).CullingIndexBuffer =
         (this->HairGroupPublicData->Culling->CulledVertexIdBuffer).SRV.Reference;
  }
  FHairGroupPublicData::FVertexFactoryInput::FStrands::~FStrands(&local_498.Strands);
  return __return_storage_ptr__;
}

