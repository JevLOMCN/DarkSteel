// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// FInstancedSkeletalMeshObjectNanite @ 148691930

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInstancedSkeletalMeshObjectNanite * __thiscall
FInstancedSkeletalMeshObjectNanite::FInstancedSkeletalMeshObjectNanite
          (FInstancedSkeletalMeshObjectNanite *this,FInstancedSkinnedMeshSceneProxyDesc *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  TArray<FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD,TSizedDefaultAllocator<32>_>
  *pTVar1;
  undefined1 *puVar2;
  UTransformProviderData *pUVar3;
  FSkeletalMeshRenderData *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FInstancedSkeletalMeshObjectNanite *pFVar9;
  FSkeletalMeshObjectLOD *this_00;
  FSkelMeshComponentLODInfo *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  
  FSkeletalMeshObject::FSkeletalMeshObject
            ((FSkeletalMeshObject *)this,(FSkinnedMeshSceneProxyDesc *)param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FInstancedSkeletalMeshObjectNanite__6B_;
  pUVar3 = (param_1->TransformProvider).field0_0x0.DebugPtr;
  (this->TransformProvider).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  iVar14 = 0;
  (this->NaniteMaterials).AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->LODs;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LODs).ArrayNum = 0;
  (this->LODs).ArrayMax = 0;
  (this->NaniteMaterials).AssetName.Data.ArrayNum = 0;
  (this->NaniteMaterials).AssetName.Data.ArrayMax = 0;
  (this->NaniteMaterials).Entries.AllocatorInstance.SecondaryData =
       (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
  (this->NaniteMaterials).Entries.ArrayNum = 0;
  (this->NaniteMaterials).Entries.ArrayMax = 4;
  (this->NaniteMaterials).bHasAnyError = '\0';
  (this->NaniteMaterials).bCompatibleWithLumenCardSharing = '\0';
  (this->NaniteMaterials).bHasSky = '\0';
  (this->NaniteMaterials).bHasMasked = '\0';
  (this->NaniteMaterials).FallbackMaterial = (UMaterialInterface *)0x0;
  if (0 < (param_2->LODRenderData).Array.ArrayNum) {
    do {
      iVar7 = (this->LODs).ArrayNum;
      if (iVar7 == (this->LODs).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x240,8,&pTVar1->AllocatorInstance,&(this->LODs).ArrayMax);
      }
      (this->LODs).ArrayNum = iVar7 + 1;
      pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x240;
      *(FSkeletalMeshRenderData **)pFVar12 = param_2;
      FLocalVertexFactory::FLocalVertexFactory
                ((FLocalVertexFactory *)(pFVar12 + 8),param_3,
                 "FInstancedSkeletalMeshObjectNaniteLOD");
      *(int *)(pFVar12 + 0x238) = iVar14;
      iVar14 = iVar14 + 1;
      *(undefined2 *)(pFVar12 + 0x23c) = 0;
    } while (iVar14 < (param_2->LODRenderData).Array.ArrayNum);
  }
  Nanite::AuditMaterials((FSkinnedMeshSceneProxyDesc *)param_1,&this->NaniteMaterials,true);
  uVar11 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar13 = 0;
    lVar16 = 0;
    do {
      uVar15 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->LODs).ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FInstancedSkeletalMeshObjectNanite *)(*pcVar5)();
        return pFVar9;
      }
      this_00 = (FSkeletalMeshObjectLOD *)((pTVar1->AllocatorInstance).Data + lVar16);
      pFVar4 = this_00->RenderData;
      uVar8 = 0;
      if ((int)uVar11 < (pFVar4->LODRenderData).Array.ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FInstancedSkeletalMeshObjectNanite *)(*pcVar5)();
        return pFVar9;
      }
      if (*(int *)(*(longlong *)((pFVar4->LODRenderData).Array.AllocatorInstance.Data + lVar13 * 8)
                  + 300) != 0) {
        pFVar10 = (FSkelMeshComponentLODInfo *)0x0;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (int)param_1->_padding_)) {
          uVar8 = 0;
          if ((int)uVar11 < (int)param_1->_padding_) {
            uVar8 = uVar15;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FInstancedSkeletalMeshObjectNanite *)(*pcVar5)();
            return pFVar9;
          }
          pFVar10 = (FSkelMeshComponentLODInfo *)(param_1->_padding_ + (longlong)(int)uVar11 * 0x28)
          ;
        }
        FSkeletalMeshObjectLOD::InitResources(this_00,pFVar10);
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 1;
      lVar16 = lVar16 + 0x240;
    } while ((int)uVar11 < (this->LODs).ArrayNum);
  }
  return this;
}

// CreateSceneExtensionProxy @ 1486aee90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinningSceneExtensionProxy * __thiscall
FInstancedSkeletalMeshObjectNanite::CreateSceneExtensionProxy
          (FInstancedSkeletalMeshObjectNanite *this,USkinnedAsset *param_1,bool param_2)

{
  UTransformProviderData *pUVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FGuid FVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  char cVar9;
  ushort uVar10;
  FSkinningSceneExtensionProxy *this_00;
  undefined4 *puVar11;
  longlong lVar12;
  
  this_00 = ::operator_new(0x60);
  if (this_00 == (FSkinningSceneExtensionProxy *)0x0) {
    this_00 = (FSkinningSceneExtensionProxy *)0x0;
  }
  else {
    pUVar1 = (this->TransformProvider).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UTransformProviderData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FSkinningSceneExtensionProxy::FSkinningSceneExtensionProxy
              (this_00,(FSkeletalMeshObject *)this,param_1,param_2);
    this_00->_padding_ = (longlong)&___7FInstancedSkinningSceneExtensionProxy__6B_;
    this_00[1]._padding_ = (longlong)pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UTransformProviderData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    lVar12 = 0;
    this_00[1].MeshObject = (FSkeletalMeshObject *)0x0;
    this_00[1].BoneHierarchy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->bUseInstancing = '\x01';
    this_00[1].SkinnedAsset = (USkinnedAsset *)0x0;
    pTVar7 = CVarInstancedSkinnedMeshesForceRefPose.Ref;
    bVar8 = IsInParallelGameThread();
    if ((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) {
      lVar12 = 4;
    }
    if ((((*(int *)((longlong)pTVar7->ShadowedValue + lVar12) == 0) &&
         (this_00->SkinnedAsset != (USkinnedAsset *)0x0)) &&
        ((longlong *)this_00[1]._padding_ != (longlong *)0x0)) &&
       (cVar9 = (**(code **)(*(longlong *)this_00[1]._padding_ + 0x2b0))(), cVar9 != '\0')) {
      puVar11 = (undefined4 *)(**(code **)(*(longlong *)this_00[1]._padding_ + 0x2b8))();
      plVar2 = (longlong *)this_00[1]._padding_;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      *(undefined4 *)&this_00[1].MeshObject = *puVar11;
      *(undefined4 *)((longlong)&this_00[1].MeshObject + 4) = uVar3;
      *(undefined4 *)&this_00[1].BoneHierarchy.AllocatorInstance.Data = uVar4;
      *(undefined4 *)((longlong)&this_00[1].BoneHierarchy.AllocatorInstance.Data + 4) = uVar5;
      uVar10 = (**(code **)(*plVar2 + 0x2c0))();
      plVar2 = (longlong *)this_00[1]._padding_;
      this_00->UniqueAnimationCount = uVar10;
      cVar9 = (**(code **)(*plVar2 + 0x2c8))();
      this_00->field_0x3e = this_00->field_0x3e ^ (cVar9 * '\x02' ^ this_00->field_0x3e) & 2U;
      return this_00;
    }
    FVar6 = RefPoseProviderId;
    this_00->bUseSkeletonBatching = '\0';
    this_00->UniqueAnimationCount = 1;
    *(FGuid *)&this_00[1].MeshObject = FVar6;
  }
  return this_00;
}

// GetComponentSpaceTransforms @ 1486bbf30

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FInstancedSkeletalMeshObjectNanite::GetComponentSpaceTransforms
          (FInstancedSkeletalMeshObjectNanite *this)

{
  return (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetLOD @ 1486c07e0

int __thiscall FInstancedSkeletalMeshObjectNanite::GetLOD(FInstancedSkeletalMeshObjectNanite *this)

{
  return 0;
}

// GetNaniteMaterials @ 1486c1dd0

FMaterialAudit * __thiscall
FInstancedSkeletalMeshObjectNanite::GetNaniteMaterials(FInstancedSkeletalMeshObjectNanite *this)

{
  return &this->NaniteMaterials;
}

// GetPrevReferenceToLocalMatrices @ 1486c3b10

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FInstancedSkeletalMeshObjectNanite::GetPrevReferenceToLocalMatrices
          (FInstancedSkeletalMeshObjectNanite *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TMatrix<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetReferenceToLocalMatrices @ 1486c60d0

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FInstancedSkeletalMeshObjectNanite::GetReferenceToLocalMatrices
          (FInstancedSkeletalMeshObjectNanite *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TMatrix<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 1486c6670

void __thiscall
FInstancedSkeletalMeshObjectNanite::GetResourceSizeEx
          (FInstancedSkeletalMeshObjectNanite *this,FResourceSizeEx *param_1)

{
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x1b0);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(this->LODs).ArrayMax * 0x240);
  return;
}

// GetSkinVertexFactory @ 1486c7900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FVertexFactory * __thiscall
FInstancedSkeletalMeshObjectNanite::GetSkinVertexFactory
          (FInstancedSkeletalMeshObjectNanite *this,FSceneView *param_1,int param_2,int param_3,
          ESkinVertexFactoryMode param_4)

{
  return (FVertexFactory *)0x0;
}

// GetStaticRayTracingGeometry @ 1486c86d0

FRayTracingGeometry * __thiscall
FInstancedSkeletalMeshObjectNanite::GetStaticRayTracingGeometry
          (FInstancedSkeletalMeshObjectNanite *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRayTracingGeometry *pFVar5;
  uint uVar6;
  
  uVar4 = (**(code **)(this->_padding_ + 0xe8))();
  uVar6 = 0;
  if ((int)uVar4 < (this->LODs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRayTracingGeometry *)(*pcVar2)();
      return pFVar5;
    }
  }
  plVar1 = *(longlong **)((this->LODs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x240);
  uVar6 = 0;
  if ((int)uVar4 < (int)plVar1[1]) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRayTracingGeometry *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FRayTracingGeometry *)(*(longlong *)(*plVar1 + (longlong)(int)uVar4 * 8) + 0x668);
}

// GetStaticSkinVertexFactory @ 1486c87d0

FVertexFactory * __thiscall
FInstancedSkeletalMeshObjectNanite::GetStaticSkinVertexFactory
          (FInstancedSkeletalMeshObjectNanite *this,int param_1,int param_2,
          ESkinVertexFactoryMode param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexFactory *pFVar4;
  
  if ((param_1 < 0) || ((this->LODs).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODs.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.h"
                       ,0x10b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexFactory *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexFactory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FVertexFactory *)((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 0x240 + 8);
}

// HaveValidDynamicData @ 1486cb760

bool __thiscall
FInstancedSkeletalMeshObjectNanite::HaveValidDynamicData(FInstancedSkeletalMeshObjectNanite *this)

{
  return false;
}

// InitResources @ 1486ce940

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
FInstancedSkeletalMeshObjectNanite::InitResources
          (FInstancedSkeletalMeshObjectNanite *this,FSkinnedMeshSceneProxyDesc *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkelMeshComponentLODInfo *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FSkeletalMeshObjectLOD *this_00;
  longlong lVar9;
  
  uVar6 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < (this->LODs).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FSkeletalMeshObjectLOD *)((this->LODs).AllocatorInstance.Data + lVar9);
      pFVar1 = this_00->RenderData;
      uVar4 = 0;
      if ((int)uVar6 < (pFVar1->LODRenderData).Array.ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)((pFVar1->LODRenderData).Array.AllocatorInstance.Data + lVar7 * 8) +
                  300) != 0) {
        pFVar5 = (FSkelMeshComponentLODInfo *)0x0;
        if ((-1 < (int)uVar6) && ((int)uVar6 < (param_1->LODInfo).ArrayNum)) {
          uVar4 = 0;
          if ((int)uVar6 < (param_1->LODInfo).ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar5 = (param_1->LODInfo).DataPtr + (int)uVar6;
        }
        FSkeletalMeshObjectLOD::InitResources(this_00,pFVar5);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x240;
    } while ((int)uVar6 < (this->LODs).ArrayNum);
  }
  return;
}

// IsNaniteMesh @ 1486d1410

bool __thiscall
FInstancedSkeletalMeshObjectNanite::IsNaniteMesh(FInstancedSkeletalMeshObjectNanite *this)

{
  return true;
}

// ReleaseResources @ 1486e6740

void __thiscall
FInstancedSkeletalMeshObjectNanite::ReleaseResources(FInstancedSkeletalMeshObjectNanite *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LODs).ArrayNum;
  pFVar4 = (this->LODs).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x240;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                         ,0x3c8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4[0x23c] = (FScriptContainerElement)0x0;
    BeginReleaseResource((FRenderResource *)(pFVar4 + 8),&UE::RenderCommandPipe::SkeletalMesh);
    if (pFVar4[0x23d] != (FScriptContainerElement)0x0) {
      FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry
                (*(FSkeletalMeshRenderData **)pFVar4,*(int *)(pFVar4 + 0x238));
    }
    pFVar4 = pFVar4 + 0x240;
  }
  return;
}

// Update @ 1486f3bc0

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
FInstancedSkeletalMeshObjectNanite::Update
          (FInstancedSkeletalMeshObjectNanite *this,int param_1,
          FSkinnedMeshSceneProxyDynamicData *param_2,FPrimitiveSceneProxy *param_3,
          USkinnedAsset *param_4,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_5,TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          EPreviousBoneTransformUpdateMode param_7,FExternalMorphWeightData *param_8)

{
  return;
}

// UpdateSkinWeightBuffer @ 1486f6120

void __thiscall
FInstancedSkeletalMeshObjectNanite::UpdateSkinWeightBuffer
          (FInstancedSkeletalMeshObjectNanite *this,
          TArrayView<FSkelMeshComponentLODInfo_const_,int> *param_1)

{
  return;
}

