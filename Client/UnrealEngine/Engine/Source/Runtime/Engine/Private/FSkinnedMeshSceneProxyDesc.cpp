// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// FSkinnedMeshSceneProxyDesc @ 148693470

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedMeshSceneProxyDesc * __thiscall
FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc
          (FSkinnedMeshSceneProxyDesc *this,USkinnedMeshComponent *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)this);
  this->MaxDistanceFactor = 1.0;
  this->_padding_ = (longlong)&___7FSkinnedMeshSceneProxyDesc__6B_;
  (this->DebugDrawColor).bIsSet = false;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  (this->LODInfo).DataPtr = (FSkelMeshComponentLODInfo *)0x0;
  (this->LODInfo).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotsOverlayMaterial).ArrayNum = 0;
  (this->MaterialSlotsOverlayMaterial).ArrayMax = 0;
  (this->OverrideMaterials).DataPtr = (TObjectPtr<UMaterialInterface> *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->SkinCacheUsage).DataPtr = (ESkinCacheUsage *)0x0;
  (this->SkinCacheUsage).ArrayNum = 0;
  this->MeshObject = (FSkeletalMeshObject *)0x0;
  this->PreviousMeshObject = (FSkeletalMeshObject *)0x0;
  this->SkinnedAsset = (USkinnedAsset *)0x0;
  this->PhysicsAsset = (UPhysicsAsset *)0x0;
  this->OverlayMaterial = (UMaterialInterface *)0x0;
  this->MeshDeformerInstances = (FMeshDeformerInstanceSet *)0x0;
  this->PredictedLODLevel = 0;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ComponentScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ComponentScale).field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bSortTriangles = 0;
  this->bAllowAlwaysVisible = '\0';
  (this->ComponentScale).field0_0x0._s_0.Z = (double)uVar2;
  this->StreamingDistanceMultiplier = 1.0;
  this->NanitePixelProgrammableDistance = 0.0;
  this->CapsuleIndirectShadowMinVisibility = 0.0;
  this->OverlayMaterialMaxDrawDistance = 0.0;
  puVar1 = &this->field_0x180;
  this->bForceWireframe = '\0';
  this->bCPUSkinning = '\0';
  this->bDrawDebugSkeleton = '\0';
  this->bCastCapsuleIndirectShadow = '\0';
  this->bCastCapsuleDirectShadow = '\0';
  this->bPerBoneMotionBlur = '\0';
  this->bRenderStatic = '\0';
  this->bCanHighlightSelectedSections = '\0';
  InitializeFromSkinnedMeshComponent(this,param_1);
  return this;
}

// CreateMeshObject @ 1486ada40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSkeletalMeshObject * __cdecl
FSkinnedMeshSceneProxyDesc::CreateMeshObject(FSkinnedMeshSceneProxyDesc *param_1)

{
  USkinnedAsset *pUVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  FSkeletalMeshRenderData *this;
  FSkeletalMeshObjectNanite *this_00;
  FSkeletalMeshObjectNanite *this_01;
  FSkeletalMeshObjectStatic *this_02;
  FSkeletalMeshObjectCPUSkin *this_03;
  FSkeletalMeshObjectGPUSkin *this_04;
  FSkeletalMeshObjectNanite *pFVar4;
  int iVar6;
  FName local_res8;
  FString local_48;
  FString local_38;
  FSkeletalMeshObjectNanite *pFVar5;
  
  this = (FSkeletalMeshRenderData *)(**(code **)(*(longlong *)param_1->SkinnedAsset + 0x398))();
  iVar6 = (this->LODRenderData).Array.ArrayNum + -1;
  EVar3 = GMaxRHIShaderPlatform;
  if ((FSceneInterface *)param_1->_padding_ != (FSceneInterface *)0x0) {
    EVar3 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1->_padding_);
  }
  bVar2 = USkinnedMeshComponent::ShouldRenderNaniteSkinnedMeshes();
  pFVar5 = (FSkeletalMeshObjectNanite *)0x0;
  pFVar4 = (FSkeletalMeshObjectNanite *)0x0;
  if ((((bVar2) && (bVar2 = UseNanite(EVar3,true,true), bVar2)) &&
      (bVar2 = FSkinnedMeshComponentHelper::HasValidNaniteData<FSkinnedMeshSceneProxyDesc>(param_1),
      bVar2)) && (!(bool)param_1->bCPUSkinning)) {
    this_00 = ::operator_new(0x2f0);
    this_01 = pFVar5;
    if (this_00 != (FSkeletalMeshObjectNanite *)0x0) {
      this_01 = FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite
                          (this_00,param_1,this,(Type)param_1->_padding_);
    }
    if (this_01->bHasValidMaterials != false) {
      return (FSkeletalMeshObject *)this_01;
    }
    FSkeletalMeshObjectNanite::~FSkeletalMeshObjectNanite(this_01);
    ::operator_delete(this_01,0x2f0);
  }
  if (param_1->bRenderStatic == '\0') {
    if ((bool)param_1->bCPUSkinning) {
      this_03 = ::operator_new(0xf0);
      pFVar4 = pFVar5;
      if (this_03 != (FSkeletalMeshObjectCPUSkin *)0x0) {
        pFVar4 = (FSkeletalMeshObjectNanite *)
                 FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectCPUSkin
                           (this_03,param_1,this,(Type)param_1->_padding_);
      }
    }
    else {
      bVar2 = FSkeletalMeshRenderData::RequiresCPUSkinning(this,(Type)param_1->_padding_,iVar6);
      if (bVar2) {
        FSkeletalMeshRenderData::GetMaxBonesPerSection(this,iVar6);
        FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
        FSkeletalMeshRenderData::GetNumBoneInfluences(this,iVar6);
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        GetFeatureLevelName((Type)param_1->_padding_,&local_48);
        if (2 < (byte)LogSkeletalMesh._0_1_) {
          pUVar1 = param_1->SkinnedAsset;
          if (pUVar1 == (USkinnedAsset *)0x0) {
            ::FString::FString(&local_38,L"None");
          }
          else {
            local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
            local_res8.Number = *(uint *)&pUVar1->field_0x1c;
            ::FName::ToString(&local_res8,&local_38);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pFVar4 = (FSkeletalMeshObjectNanite *)0x0;
      }
      else {
        this_04 = ::operator_new(0x208);
        if (this_04 != (FSkeletalMeshObjectGPUSkin *)0x0) {
          pFVar4 = (FSkeletalMeshObjectNanite *)
                   FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectGPUSkin
                             (this_04,param_1,this,(Type)param_1->_padding_);
        }
      }
    }
  }
  else {
    this_02 = ::operator_new(0xa8);
    pFVar4 = pFVar5;
    if (this_02 != (FSkeletalMeshObjectStatic *)0x0) {
      pFVar4 = (FSkeletalMeshObjectNanite *)
               FSkeletalMeshObjectStatic::FSkeletalMeshObjectStatic
                         (this_02,param_1,this,(Type)param_1->_padding_);
    }
  }
  return (FSkeletalMeshObject *)pFVar4;
}

// CreateSceneProxy @ 1486aeff0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxy * __cdecl
FSkinnedMeshSceneProxyDesc::CreateSceneProxy
          (FSkinnedMeshSceneProxyDesc *param_1,bool param_2,int param_3)

{
  FSkeletalMeshObject *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FSkeletalMeshRenderData *this;
  longlong lVar7;
  FPrimitiveSceneProxy *pFVar8;
  FSkinnedSceneProxy *this_00;
  FMaterialAudit *pFVar9;
  FSkeletalMeshSceneProxy *pFVar10;
  FSkeletalMeshSceneProxy *pFVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,SkeletalMesh,true);
  pFVar10 = (FSkeletalMeshSceneProxy *)0x0;
  pFVar11 = (FSkeletalMeshSceneProxy *)0x0;
  this = (FSkeletalMeshRenderData *)(**(code **)(*(longlong *)param_1->SkinnedAsset + 0x398))();
  pFVar1 = param_1->MeshObject;
  if ((((this != (FSkeletalMeshRenderData *)0x0) && (-1 < param_1->PredictedLODLevel)) &&
      (param_1->PredictedLODLevel < (this->LODRenderData).Array.ArrayNum)) &&
     ((pFVar10 = pFVar11, !param_2 && (pFVar1 != (FSkeletalMeshObject *)0x0)))) {
    iVar5 = FSkeletalMeshRenderData::GetMaxBonesPerSection(this,param_3);
    cVar3 = (**(code **)(pFVar1->_padding_ + 0x40))();
    if (cVar3 == '\0') {
      iVar6 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    }
    else {
      iVar6 = 0x7fffffff;
    }
    if (iVar5 <= iVar6) {
      cVar3 = (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1);
      if (cVar3 == '\0') {
        pFVar11 = ::operator_new(0x3d0);
        if (pFVar11 != (FSkeletalMeshSceneProxy *)0x0) {
          pFVar10 = FSkeletalMeshSceneProxy::FSkeletalMeshSceneProxy(pFVar11,param_1,this,0);
        }
      }
      else {
        lVar7 = (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1);
        if ((lVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("MeshObject->GetNaniteMaterials()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkinnedMeshSceneProxyDesc.cpp"
                               ,0x124,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FPrimitiveSceneProxy *)(*pcVar2)();
          return pFVar8;
        }
        this_00 = ::operator_new(0x360);
        if (this_00 != (FSkinnedSceneProxy *)0x0) {
          pFVar9 = (FMaterialAudit *)(**(code **)(pFVar1->_padding_ + 0x58))(pFVar1);
          pFVar10 = (FSkeletalMeshSceneProxy *)
                    Nanite::FSkinnedSceneProxy::FSkinnedSceneProxy(this_00,pFVar9,param_1,this,true)
          ;
        }
      }
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return (FPrimitiveSceneProxy *)pFVar10;
}

// GetBoneIndex @ 1486bb2d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FSkinnedMeshSceneProxyDesc::GetBoneIndex(FSkinnedMeshSceneProxyDesc *this,FName param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 != (FName)0x0) && (this->SkinnedAsset != (USkinnedAsset *)0x0)) {
    lVar1 = (**(code **)(*(longlong *)this->SkinnedAsset + 800))();
    iVar3 = -1;
    piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)(lVar1 + 0x90),param_1);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
    }
    return iVar3;
  }
  return -1;
}

// GetDebugDrawColor @ 1486bd490

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<FLinearColor> * __thiscall
FSkinnedMeshSceneProxyDesc::GetDebugDrawColor(FSkinnedMeshSceneProxyDesc *this)

{
  return &this->DebugDrawColor;
}

// GetMaterial @ 1486c0e90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInterface * __thiscall
FSkinnedMeshSceneProxyDesc::GetMaterial(FSkinnedMeshSceneProxyDesc *this,int param_1)

{
  USkinnedAsset *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar5;
  FObjectPtr_u_0 *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  UMaterialInterface *pUVar9;
  uint uVar10;
  
  if (((-1 < param_1) && (param_1 < (this->OverrideMaterials).ArrayNum)) &&
     (pTVar5 = &TArrayView<TObjectPtr<UMaterialInterface>_const_,int>::operator[]
                          (&this->OverrideMaterials,param_1)->field0_0x0,
     pTVar5->DebugPtr != (UMaterialInterface *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArrayView<TObjectPtr<UMaterialInterface>_const_,int>::operator[]
                       (&this->OverrideMaterials,param_1);
    return (UMaterialInterface *)(FObjectPtr)pFVar6->Handle;
  }
  pUVar1 = this->SkinnedAsset;
  pUVar9 = (UMaterialInterface *)0x0;
  if (((pUVar1 != (USkinnedAsset *)0x0) &&
      (cVar3 = (**(code **)(*(longlong *)&pUVar1->field_0xe0 + 0x10))(), cVar3 == '\0')) &&
     ((lVar7 = (**(code **)(*(longlong *)pUVar1 + 0x3c8))(pUVar1), -1 < param_1 &&
      (param_1 < *(int *)(lVar7 + 8))))) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar1 + 0x3c8))(pUVar1);
    uVar10 = 0;
    if (param_1 < (int)plVar8[1]) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pUVar9 = (UMaterialInterface *)(*pcVar2)();
      return pUVar9;
    }
    if (*(longlong *)(*plVar8 + (longlong)param_1 * 0x30) != 0) {
      plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar1 + 0x3c8))(pUVar1);
      uVar10 = 0;
      if (param_1 < (int)plVar8[1]) {
        uVar10 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UMaterialInterface *)(*pcVar2)();
        return pUVar9;
      }
      pUVar9 = *(UMaterialInterface **)(*plVar8 + (longlong)param_1 * 0x30);
    }
  }
  return pUVar9;
}

// GetMaterialRelevance @ 1486c1020

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
FSkinnedMeshSceneProxyDesc::GetMaterialRelevance
          (FSkinnedMeshSceneProxyDesc *this,EShaderPlatform param_1)

{
  FMaterialRelevance_u_0 FVar1;
  undefined6 in_register_00000012;
  
  *(FMaterialRelevance_u_0 *)CONCAT62(in_register_00000012,param_1) =
       (this->MaterialRelevance).field0_0x0;
  FVar1.Raw._2_6_ = in_register_00000012;
  FVar1.Raw._0_2_ = param_1;
  return (FMaterialRelevance)FVar1;
}

// GetMaterialRelevance @ 1486c1040

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMaterialRelevance __thiscall
FSkinnedMeshSceneProxyDesc::GetMaterialRelevance(FSkinnedMeshSceneProxyDesc *this,Type param_1)

{
  FMaterialRelevance_u_0 FVar1;
  undefined4 in_register_00000014;
  
  *(FMaterialRelevance_u_0 *)CONCAT44(in_register_00000014,param_1) =
       (this->MaterialRelevance).field0_0x0;
  FVar1.Raw._4_4_ = in_register_00000014;
  FVar1.Raw._0_4_ = param_1;
  return (FMaterialRelevance)FVar1;
}

// GetMeshDeformerInstance @ 1486c16b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshDeformerInstance * __thiscall
FSkinnedMeshSceneProxyDesc::GetMeshDeformerInstance(FSkinnedMeshSceneProxyDesc *this)

{
  FMeshDeformerInstanceSet *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = this->MeshDeformerInstances;
  if ((pFVar1 != (FMeshDeformerInstanceSet *)0x0) && (0 < (pFVar1->DeformerInstances).ArrayNum)) {
    pUVar2 = *(UObject **)(pFVar1->DeformerInstances).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    return (UMeshDeformerInstance *)pUVar2;
  }
  return (UMeshDeformerInstance *)0x0;
}

// GetMeshDeformerInstanceForLOD @ 1486c1710

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshDeformerInstance * __thiscall
FSkinnedMeshSceneProxyDesc::GetMeshDeformerInstanceForLOD
          (FSkinnedMeshSceneProxyDesc *this,int param_1)

{
  FScriptContainerElement FVar1;
  FMeshDeformerInstanceSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  UMeshDeformerInstance *pUVar5;
  uint uVar6;
  
  pFVar2 = this->MeshDeformerInstances;
  if (((pFVar2 != (FMeshDeformerInstanceSet *)0x0) && (-1 < param_1)) &&
     (param_1 < (pFVar2->InstanceIndexForLOD).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pFVar2->InstanceIndexForLOD).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UMeshDeformerInstance *)(*pcVar3)();
      return pUVar5;
    }
    FVar1 = (pFVar2->InstanceIndexForLOD).AllocatorInstance.Data[param_1];
    if (FVar1 != (FScriptContainerElement)0xff) {
      if ((((char)FVar1 < '\0') ||
          ((this->MeshDeformerInstances->DeformerInstances).ArrayNum <= (int)(char)FVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("MeshDeformerInstances->DeformerInstances.IsValidIndex(InstanceIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkinnedMeshSceneProxyDesc.cpp"
                             ,0x76,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UMeshDeformerInstance *)(*pcVar3)();
        return pUVar5;
      }
      pFVar2 = this->MeshDeformerInstances;
      uVar6 = 0;
      if ((int)(char)FVar1 < (pFVar2->DeformerInstances).ArrayNum) {
        uVar6 = (uint)~(int)(char)FVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UMeshDeformerInstance *)(*pcVar3)();
        return pUVar5;
      }
      return *(UMeshDeformerInstance **)
              ((pFVar2->DeformerInstances).AllocatorInstance.Data + (longlong)(char)FVar1 * 8);
    }
  }
  return (UMeshDeformerInstance *)0x0;
}

// GetOverlayMaterial @ 1486c3510

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInterface * __thiscall
FSkinnedMeshSceneProxyDesc::GetOverlayMaterial(FSkinnedMeshSceneProxyDesc *this)

{
  return this->OverlayMaterial;
}

// GetOverlayMaterialMaxDrawDistance @ 1486c3550

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall
FSkinnedMeshSceneProxyDesc::GetOverlayMaterialMaxDrawDistance(FSkinnedMeshSceneProxyDesc *this)

{
  return this->OverlayMaterialMaxDrawDistance;
}

// GetPhysicsAsset @ 1486c36f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPhysicsAsset * __thiscall
FSkinnedMeshSceneProxyDesc::GetPhysicsAsset(FSkinnedMeshSceneProxyDesc *this)

{
  return this->PhysicsAsset;
}

// GetPreSkinnedLocalBounds @ 1486c3a40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkinnedMeshSceneProxyDesc::GetPreSkinnedLocalBounds
          (FSkinnedMeshSceneProxyDesc *this,TBoxSphereBounds<double,double> *param_1)

{
  USkinnedAsset *pUVar1;
  double dVar2;
  double *pdVar3;
  undefined1 local_48 [64];
  
  pUVar1 = this->SkinnedAsset;
  if (pUVar1 != (USkinnedAsset *)0x0) {
    pdVar3 = (double *)(**(code **)(*(longlong *)pUVar1 + 0x3e0))(pUVar1,local_48);
    dVar2 = pdVar3[1];
    (param_1->Origin).field0_0x0._s_0.X = *pdVar3;
    (param_1->Origin).field0_0x0._s_0.Y = dVar2;
    dVar2 = pdVar3[3];
    (param_1->Origin).field0_0x0._s_0.Z = pdVar3[2];
    (param_1->BoxExtent).field0_0x0._s_0.X = dVar2;
    dVar2 = pdVar3[5];
    (param_1->BoxExtent).field0_0x0._s_0.Y = pdVar3[4];
    (param_1->BoxExtent).field0_0x0._s_0.Z = dVar2;
    param_1->SphereRadius = pdVar3[6];
    return;
  }
  (param_1->Origin).field0_0x0._s_0.X = 0.0;
  (param_1->Origin).field0_0x0._s_0.Y = 0.0;
  (param_1->Origin).field0_0x0._s_0.Z = 0.0;
  (param_1->BoxExtent).field0_0x0._s_0.X = 0.0;
  (param_1->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (param_1->BoxExtent).field0_0x0._s_0.Z = 0.0;
  param_1->SphereRadius = 0.0;
  return;
}

// GetSkinnedAsset @ 1486c7ba0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USkinnedAsset * __thiscall
FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(FSkinnedMeshSceneProxyDesc *this)

{
  return this->SkinnedAsset;
}

// GetUsedMaterials @ 1486c8e50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkinnedMeshSceneProxyDesc::GetUsedMaterials
          (FSkinnedMeshSceneProxyDesc *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  USkinnedAsset *pUVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined7 in_register_00000081;
  undefined1 local_res8 [8];
  UMaterialInterface *local_38;
  longlong local_30;
  UMaterialInterface *local_28 [2];
  
  pUVar1 = this->SkinnedAsset;
  if (pUVar1 != (USkinnedAsset *)0x0) {
    iVar8 = (this->OverrideMaterials).ArrayNum;
    lVar9 = (**(code **)(*(longlong *)pUVar1 + 0x3c8))
                      (pUVar1,param_1,CONCAT71(in_register_00000081,param_2));
    if (iVar8 < *(int *)(lVar9 + 8)) {
      iVar8 = *(int *)(lVar9 + 8);
    }
    iVar10 = 0;
    if (0 < iVar8) {
      do {
        local_38 = GetMaterial(this,iVar10);
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        iVar10 = iVar10 + 1;
        param_1->ArrayNum = iVar7 + 1;
        *(UMaterialInterface **)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38
        ;
      } while (iVar10 < iVar8);
    }
    pFVar11 = (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
    bVar5 = false;
    iVar8 = (this->MaterialSlotsOverlayMaterial).ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar8 * 8;
    while( true ) {
      if ((this->MaterialSlotsOverlayMaterial).ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar11 == pFVar2) break;
      lVar9 = *(longlong *)pFVar11;
      if (lVar9 == 0) {
        bVar5 = true;
        pFVar11 = pFVar11 + 8;
      }
      else {
        pFVar3 = (param_1->AllocatorInstance).Data;
        local_30 = lVar9;
        if (((pFVar3 <= (FScriptContainerElement *)&local_30) &&
            ((FScriptContainerElement *)&local_30 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        pFVar11 = pFVar11 + 8;
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_30;
      }
    }
    if ((bVar5) && (local_28[0] = this->OverlayMaterial, local_28[0] != (UMaterialInterface *)0x0))
    {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
         (((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar8 + 1;
      *(UMaterialInterface **)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_28[0];
    }
  }
  return;
}

// HasValidNaniteData @ 1486cb700

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSkinnedMeshSceneProxyDesc::HasValidNaniteData(FSkinnedMeshSceneProxyDesc *this)

{
  longlong lVar1;
  
  if (this->SkinnedAsset != (USkinnedAsset *)0x0) {
    lVar1 = (**(code **)(*(longlong *)this->SkinnedAsset + 0x398))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*(longlong *)this->SkinnedAsset + 0x398))();
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        return 0 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0x70);
      }
    }
  }
  return false;
}

// InitializeFromSkinnedMeshComponent @ 1486cff10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSkinnedMeshSceneProxyDesc::InitializeFromSkinnedMeshComponent
          (FSkinnedMeshSceneProxyDesc *this,USkinnedMeshComponent *param_1)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  FSkelMeshComponentLODInfo *pFVar5;
  TObjectPtr<UMaterialInterface> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  EShaderPlatform EVar12;
  FMaterialRelevance_u_0 *pFVar13;
  USkinnedAsset *pUVar14;
  UPhysicsAsset *pUVar15;
  UMaterialInterface *pUVar16;
  byte bVar17;
  float fVar18;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  FPrimitiveSceneProxyDesc::InitializeFromPrimitiveComponent
            ((FPrimitiveSceneProxyDesc *)this,(UPrimitiveComponent *)param_1);
  bVar17 = (param_1->bForceWireframe ^ this->bForceWireframe) & 1 ^ this->field_0x180;
  this->field_0x180 = bVar17;
  bVar17 = ((byte)param_1->field_0x808 >> 4 ^ bVar17) & 2 ^ bVar17;
  this->field_0x180 = bVar17;
  bVar17 = ((byte)param_1->field_0x809 >> 3 ^ bVar17) & 4 ^ bVar17;
  this->field_0x180 = bVar17;
  bVar17 = (param_1->field_0x808 << 2 ^ bVar17) & 8 ^ bVar17;
  this->field_0x180 = bVar17;
  bVar17 = ((byte)param_1->field_0x808 >> 3 ^ bVar17) & 0x10 ^ bVar17;
  this->field_0x180 = bVar17;
  bVar17 = (param_1->field_0x809 << 5 ^ bVar17) & 0x20 ^ bVar17;
  this->field_0x180 = bVar17;
  this->bAllowAlwaysVisible = param_1->VisibilityBasedAnimTickOption != OnlyTickPoseWhenRendered;
  this->field_0x180 = (param_1->field_0x80b * '\x02' ^ bVar17) & 0x40 ^ bVar17;
  cVar10 = (**(code **)(param_1->_padding_ + 0xb60))(param_1);
  this->bCPUSkinning = '\0';
  this->field_0x180 = this->field_0x180 | cVar10 << 7;
  if (&param_1->DebugDrawColor != &this->DebugDrawColor) {
    if ((param_1->DebugDrawColor).bIsSet == false) {
      if ((this->DebugDrawColor).bIsSet != false) {
        (this->DebugDrawColor).bIsSet = false;
      }
    }
    else {
      uVar8 = *(undefined8 *)((longlong)&(param_1->DebugDrawColor).TypedValue.field0_0x0 + 8);
      *(undefined8 *)&(this->DebugDrawColor).TypedValue.field0_0x0 =
           *(undefined8 *)&(param_1->DebugDrawColor).TypedValue.field0_0x0;
      *(undefined8 *)((longlong)&(this->DebugDrawColor).TypedValue.field0_0x0 + 8) = uVar8;
      (this->DebugDrawColor).bIsSet = true;
    }
  }
  if ((FSceneInterface *)this->_padding_ != (FSceneInterface *)0x0) {
    pcVar4 = *(code **)(param_1->_padding_ + 0xaa8);
    EVar12 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
    pFVar13 = (FMaterialRelevance_u_0 *)(*pcVar4)(param_1,local_res8,EVar12);
    (this->MaterialRelevance).field0_0x0 = *pFVar13;
  }
  this->StreamingDistanceMultiplier = param_1->StreamingDistanceMultiplier;
  this->NanitePixelProgrammableDistance = param_1->NanitePixelProgrammableDistance;
  this->CapsuleIndirectShadowMinVisibility = param_1->CapsuleIndirectShadowMinVisibility;
  fVar18 = UMeshComponent::GetOverlayMaterialMaxDrawDistance((UMeshComponent *)param_1);
  this->OverlayMaterialMaxDrawDistance = fVar18;
  this->PredictedLODLevel = param_1->PredictedLODLevel;
  this->MaxDistanceFactor = param_1->MaxDistanceFactor;
  dVar9 = (double)param_1->_padding_;
  dVar1 = (double)param_1->_padding_;
  (this->ComponentScale).field0_0x0._s_0.X = (double)param_1->_padding_;
  (this->ComponentScale).field0_0x0._s_0.Y = dVar9;
  (this->ComponentScale).field0_0x0._s_0.Z = dVar1;
  pFVar5 = (FSkelMeshComponentLODInfo *)(param_1->LODInfo).AllocatorInstance.Data;
  iVar2 = (param_1->LODInfo).ArrayNum;
  if (iVar2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->LODInfo).DataPtr = pFVar5;
  *(ulonglong *)&(this->LODInfo).ArrayNum = CONCAT44(uStack_2c,iVar2);
  this->MeshObject = param_1->MeshObject;
  this->PreviousMeshObject = param_1->PreviousMeshObject;
  pUVar14 = USkinnedMeshComponent::GetSkinnedAsset(param_1);
  this->SkinnedAsset = pUVar14;
  pUVar15 = USkinnedMeshComponent::GetPhysicsAsset(param_1);
  this->PhysicsAsset = pUVar15;
  pUVar16 = UMeshComponent::GetOverlayMaterial((UMeshComponent *)param_1);
  this->OverlayMaterial = pUVar16;
  UMeshComponent::GetMaterialSlotsOverlayMaterial
            ((UMeshComponent *)param_1,&this->MaterialSlotsOverlayMaterial);
  this->MeshDeformerInstances = &param_1->MeshDeformerInstances;
  pTVar6 = (TObjectPtr<UMaterialInterface> *)param_1->_padding_;
  iVar2 = (int)param_1->_padding_;
  if (iVar2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->OverrideMaterials).DataPtr = pTVar6;
  *(ulonglong *)&(this->OverrideMaterials).ArrayNum = CONCAT44(uStack_2c,iVar2);
  pFVar7 = (param_1->SkinCacheUsage).AllocatorInstance.Data;
  iVar2 = (param_1->SkinCacheUsage).ArrayNum;
  if (iVar2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->SkinCacheUsage).DataPtr = (ESkinCacheUsage *)pFVar7;
  *(ulonglong *)&(this->SkinCacheUsage).ArrayNum = CONCAT44(uStack_2c,iVar2);
  this->bSortTriangles = param_1->bSortTriangles;
  return;
}

// IsSkinCacheAllowed @ 1486d1c90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkinnedMeshSceneProxyDesc::IsSkinCacheAllowed(FSkinnedMeshSceneProxyDesc *this,int param_1)

{
  FScriptContainerElement FVar1;
  FMeshDeformerInstanceSet *pFVar2;
  code *pcVar3;
  ESkinCacheDefaultBehavior EVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  ESkinCacheUsage *pEVar8;
  uint uVar9;
  bool bVar10;
  
  EVar4 = GetSkinCacheDefaultBehavior();
  bVar10 = EVar4 == Inclusive;
  if (((GEnableGPUSkinCache == 0) || ((longlong *)this->_padding_ == (longlong *)0x0)) ||
     (lVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x458))(), lVar7 == 0)) {
LAB_1486d1e97:
    bVar10 = false;
  }
  else {
    pFVar2 = this->MeshDeformerInstances;
    if (((pFVar2 != (FMeshDeformerInstanceSet *)0x0) && (-1 < param_1)) &&
       (param_1 < (pFVar2->InstanceIndexForLOD).ArrayNum)) {
      uVar9 = 0;
      if (param_1 < (pFVar2->InstanceIndexForLOD).ArrayNum) {
        uVar9 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      FVar1 = (pFVar2->InstanceIndexForLOD).AllocatorInstance.Data[param_1];
      if (FVar1 != (FScriptContainerElement)0xff) {
        if ((((char)FVar1 < '\0') ||
            ((this->MeshDeformerInstances->DeformerInstances).ArrayNum <= (int)(char)FVar1)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("MeshDeformerInstances->DeformerInstances.IsValidIndex(InstanceIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkinnedMeshSceneProxyDesc.cpp"
                               ,0x76,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar2 = this->MeshDeformerInstances;
        uVar9 = 0;
        if ((int)(char)FVar1 < (pFVar2->DeformerInstances).ArrayNum) {
          uVar9 = (uint)~(int)(char)FVar1 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (*(longlong *)
             ((pFVar2->DeformerInstances).AllocatorInstance.Data + (longlong)(char)FVar1 * 8) != 0)
        goto LAB_1486d1e97;
      }
    }
    if (this->SkinnedAsset != (USkinnedAsset *)0x0) {
      lVar7 = (**(code **)(*(longlong *)this->SkinnedAsset + 0x398))();
      if (((lVar7 == 0) || (*(char *)(lVar7 + 0x1e) == '\0')) ||
         ((bVar5 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported(), !bVar5 ||
          (bVar5 = IsRayTracingEnabled(), !bVar5)))) {
        lVar7 = (**(code **)(*(longlong *)this->SkinnedAsset + 0x330))(this->SkinnedAsset,param_1);
        if (lVar7 != 0) {
          if (*(char *)(lVar7 + 0xb8) != '\0') {
            bVar10 = *(char *)(lVar7 + 0xb8) == '\x01';
          }
          if (((-1 < param_1) && (param_1 < (this->SkinCacheUsage).ArrayNum)) &&
             (pEVar8 = TArrayView<enum_ESkinCacheUsage_const_,int>::operator[]
                                 (&this->SkinCacheUsage,param_1), *pEVar8 != Auto)) {
            pEVar8 = TArrayView<enum_ESkinCacheUsage_const_,int>::operator[]
                               (&this->SkinCacheUsage,param_1);
            bVar10 = *pEVar8 == Enabled;
          }
        }
      }
      else {
        bVar10 = true;
      }
    }
  }
  return bVar10;
}

// ShouldDrawDebugSkeleton @ 1486f0e70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkinnedMeshSceneProxyDesc::ShouldDrawDebugSkeleton(FSkinnedMeshSceneProxyDesc *this)

{
  return this->bDrawDebugSkeleton;
}

// ShouldNaniteSkin @ 1486f0ea0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FSkinnedMeshSceneProxyDesc::ShouldNaniteSkin(FSkinnedMeshSceneProxyDesc *this)

{
  bool bVar1;
  EShaderPlatform EVar2;
  
  EVar2 = GMaxRHIShaderPlatform;
  if ((FSceneInterface *)this->_padding_ != (FSceneInterface *)0x0) {
    EVar2 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  }
  bVar1 = USkinnedMeshComponent::ShouldRenderNaniteSkinnedMeshes();
  if (((bVar1) && (bVar1 = UseNanite(EVar2,true,true), bVar1)) &&
     (bVar1 = FSkinnedMeshComponentHelper::HasValidNaniteData<FSkinnedMeshSceneProxyDesc>(this),
     bVar1)) {
    return true;
  }
  return false;
}

