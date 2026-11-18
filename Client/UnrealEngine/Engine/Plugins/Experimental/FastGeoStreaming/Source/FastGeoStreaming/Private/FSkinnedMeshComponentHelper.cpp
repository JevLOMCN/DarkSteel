// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 15

// ComputeMinLOD<FFastGeoInstancedSkinnedMeshComponent> @ 14da0df40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
FSkinnedMeshComponentHelper::ComputeMinLOD<FFastGeoInstancedSkinnedMeshComponent>
          (FFastGeoInstancedSkinnedMeshComponent *param_1)

{
  int iVar1;
  FSkinnedMeshSceneProxyDesc *this;
  USkinnedAsset *pUVar2;
  FSkeletalMeshRenderData *pFVar3;
  int iVar4;
  int iVar5;
  
  this = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))();
  pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this);
  iVar1 = (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,0);
  if (((param_1->_padding_ & 1) != 0) &&
     (iVar4 = *(int *)((longlong)&param_1->_padding_ + 4), iVar1 < iVar4)) {
    iVar1 = iVar4;
  }
  iVar4 = 0;
  pFVar3 = GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent>(param_1);
  if (pFVar3 != (FSkeletalMeshRenderData *)0x0) {
    iVar4 = (pFVar3->LODRenderData).Array.ArrayNum;
  }
  pFVar3 = GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent>(param_1);
  if (pFVar3 == (FSkeletalMeshRenderData *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FSkeletalMeshRenderData::GetFirstValidLODIdx(pFVar3,iVar1);
  }
  iVar5 = iVar4 + -1;
  if (iVar1 < iVar4 + -1) {
    iVar5 = iVar1;
  }
  iVar1 = 0;
  if (0 < iVar5) {
    iVar1 = iVar5;
  }
  return iVar1;
}

// ComputeMinLOD<FFastGeoSkinnedMeshComponent> @ 14da0dff0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
FSkinnedMeshComponentHelper::ComputeMinLOD<FFastGeoSkinnedMeshComponent>
          (FFastGeoSkinnedMeshComponent *param_1)

{
  int iVar1;
  FSkinnedMeshSceneProxyDesc *this;
  USkinnedAsset *pUVar2;
  FSkeletalMeshRenderData *pFVar3;
  int iVar4;
  int iVar5;
  
  this = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))();
  pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this);
  iVar1 = (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,0);
  if (((param_1->_padding_ & 1) != 0) &&
     (iVar4 = *(int *)((longlong)&param_1->_padding_ + 4), iVar1 < iVar4)) {
    iVar1 = iVar4;
  }
  iVar4 = 0;
  pFVar3 = GetSkeletalMeshRenderData<FFastGeoSkinnedMeshComponent>(param_1);
  if (pFVar3 != (FSkeletalMeshRenderData *)0x0) {
    iVar4 = (pFVar3->LODRenderData).Array.ArrayNum;
  }
  pFVar3 = GetSkeletalMeshRenderData<FFastGeoSkinnedMeshComponent>(param_1);
  if (pFVar3 == (FSkeletalMeshRenderData *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FSkeletalMeshRenderData::GetFirstValidLODIdx(pFVar3,iVar1);
  }
  iVar5 = iVar4 + -1;
  if (iVar1 < iVar4 + -1) {
    iVar5 = iVar1;
  }
  iVar1 = 0;
  if (0 < iVar5) {
    iVar1 = iVar5;
  }
  return iVar1;
}

// GetDefaultMaterialSlotsOverlayMaterial<FFastGeoSkinnedMeshComponentBase> @ 14da12920

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FSkinnedMeshComponentHelper::
GetDefaultMaterialSlotsOverlayMaterial<FFastGeoSkinnedMeshComponentBase>
          (FFastGeoSkinnedMeshComponentBase *param_1,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FSkinnedMeshSceneProxyDesc *this;
  USkinnedAsset *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  this = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
  pUVar8 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this);
  if (pUVar8 != (USkinnedAsset *)0x0) {
    plVar9 = (longlong *)(**(code **)(*(longlong *)pUVar8 + 0x3c8))(pUVar8);
    lVar10 = *plVar9;
    lVar5 = plVar9[1];
    pFVar11 = (FScriptContainerElement *)(lVar10 + 0x28);
    lVar12 = (longlong)(int)lVar5 * 0x30 + lVar10;
    while( true ) {
      if ((int)plVar9[1] != (int)lVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FSkeletalMaterial_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar10 == lVar12) break;
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar11) && (pFVar11 < pFVar2 + (longlong)*piVar1 * 8)) &&
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
      iVar7 = param_2->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      param_2->ArrayNum = iVar7 + 1;
      pUVar3 = *(UObject **)pFVar11;
      *(UObject **)(pFVar2 + (longlong)iVar7 * 8) = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      lVar10 = lVar10 + 0x30;
      pFVar11 = pFVar11 + 0x30;
    }
  }
  return;
}

// GetMaterial<FFastGeoSkinnedMeshComponentBase> @ 14da12cc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInterface * __cdecl
FSkinnedMeshComponentHelper::GetMaterial<FFastGeoSkinnedMeshComponentBase>
          (FFastGeoSkinnedMeshComponentBase *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  FSkinnedMeshSceneProxyDesc *this;
  USkinnedAsset *pUVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_2;
  if ((-1 < param_2) && (param_2 < (int)param_1->_padding_)) {
    uVar4 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar1)();
      return pUVar5;
    }
    if (*(longlong *)(param_1->_padding_ + lVar9 * 8) != 0) {
      uVar4 = 0;
      if (param_2 < (int)param_1->_padding_) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar1)();
        return pUVar5;
      }
      return *(UMaterialInterface **)(param_1->_padding_ + lVar9 * 8);
    }
  }
  this = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
  pUVar6 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this);
  if ((((pUVar6 != (USkinnedAsset *)0x0) &&
       (cVar3 = (**(code **)(*(longlong *)&pUVar6->field_0xe0 + 0x10))(), cVar3 == '\0')) &&
      (lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x3c8))(pUVar6), -1 < param_2)) &&
     (param_2 < *(int *)(lVar7 + 8))) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar6 + 0x3c8))(pUVar6);
    uVar4 = 0;
    if (param_2 < (int)plVar8[1]) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar1)();
      return pUVar5;
    }
    if (*(longlong *)(*plVar8 + lVar9 * 0x30) != 0) {
      plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar6 + 0x3c8))(pUVar6);
      uVar4 = 0;
      if (param_2 < (int)plVar8[1]) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar1)();
        return pUVar5;
      }
      return *(UMaterialInterface **)(*plVar8 + lVar9 * 0x30);
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetNaniteResources<FFastGeoInstancedSkinnedMeshComponent> @ 14da13bf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FResources * __cdecl
FSkinnedMeshComponentHelper::GetNaniteResources<FFastGeoInstancedSkinnedMeshComponent>
          (FFastGeoInstancedSkinnedMeshComponent *param_1)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  USkinnedAsset *pUVar2;
  longlong lVar3;
  
  pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))();
  pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
    pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
    lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
    if (lVar3 != 0) {
      pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
      pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
      lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
      return *(FResources **)(lVar3 + 0x10);
    }
  }
  return (FResources *)0x0;
}

// GetNumLODs<FFastGeoInstancedSkinnedMeshComponent> @ 14da14670

int __cdecl
FSkinnedMeshComponentHelper::GetNumLODs<FFastGeoInstancedSkinnedMeshComponent>
          (FFastGeoInstancedSkinnedMeshComponent *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  
  pFVar1 = GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent>(param_1);
  if (pFVar1 != (FSkeletalMeshRenderData *)0x0) {
    return (pFVar1->LODRenderData).Array.ArrayNum;
  }
  return 0;
}

// GetNumLODs<FFastGeoSkinnedMeshComponent> @ 14da146a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
FSkinnedMeshComponentHelper::GetNumLODs<FFastGeoSkinnedMeshComponent>
          (FFastGeoSkinnedMeshComponent *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  
  pFVar1 = GetSkeletalMeshRenderData<FFastGeoSkinnedMeshComponent>(param_1);
  if (pFVar1 != (FSkeletalMeshRenderData *)0x0) {
    return (pFVar1->LODRenderData).Array.ArrayNum;
  }
  return 0;
}

// GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent> @ 14da146d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshRenderData * __cdecl
FSkinnedMeshComponentHelper::GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent>
          (FFastGeoInstancedSkinnedMeshComponent *param_1)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  USkinnedAsset *pUVar2;
  FSkeletalMeshRenderData *pFVar3;
  
  if (param_1->_padding_ != 0) {
    return *(FSkeletalMeshRenderData **)(param_1->_padding_ + 0x48);
  }
  pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))();
  pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
    pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
                    /* WARNING: Could not recover jumptable at 0x00014da1472b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FSkeletalMeshRenderData *)
             (**(code **)(*(longlong *)pUVar2 + 0x398))
                       (pUVar2,*(code **)(*(longlong *)pUVar2 + 0x398));
    return pFVar3;
  }
  return (FSkeletalMeshRenderData *)0x0;
}

// GetSkeletalMeshRenderData<FFastGeoSkinnedMeshComponent> @ 14da14740

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshRenderData * __cdecl
FSkinnedMeshComponentHelper::GetSkeletalMeshRenderData<FFastGeoSkinnedMeshComponent>
          (FFastGeoSkinnedMeshComponent *param_1)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  USkinnedAsset *pUVar2;
  FSkeletalMeshRenderData *pFVar3;
  
  if (param_1->_padding_ != 0) {
    return *(FSkeletalMeshRenderData **)(param_1->_padding_ + 0x48);
  }
  pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))();
  pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
    pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
                    /* WARNING: Could not recover jumptable at 0x00014da1479b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FSkeletalMeshRenderData *)
             (**(code **)(*(longlong *)pUVar2 + 0x398))
                       (pUVar2,*(code **)(*(longlong *)pUVar2 + 0x398));
    return pFVar3;
  }
  return (FSkeletalMeshRenderData *)0x0;
}

// GetSkeletalMeshRenderData<FFastGeoSkinnedMeshComponentBase> @ 14da147b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshRenderData * __cdecl
FSkinnedMeshComponentHelper::GetSkeletalMeshRenderData<FFastGeoSkinnedMeshComponentBase>
          (FFastGeoSkinnedMeshComponentBase *param_1)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  USkinnedAsset *pUVar2;
  FSkeletalMeshRenderData *pFVar3;
  
  if (param_1->MeshObject != (FSkeletalMeshObject *)0x0) {
    return param_1->MeshObject->SkeletalMeshRenderData;
  }
  pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))();
  pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
    pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
                    /* WARNING: Could not recover jumptable at 0x00014da1480b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FSkeletalMeshRenderData *)
             (**(code **)(*(longlong *)pUVar2 + 0x398))
                       (pUVar2,*(code **)(*(longlong *)pUVar2 + 0x398));
    return pFVar3;
  }
  return (FSkeletalMeshRenderData *)0x0;
}

// GetUsedMaterials<FFastGeoSkinnedMeshComponentBase> @ 14da14d70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FSkinnedMeshComponentHelper::GetUsedMaterials<FFastGeoSkinnedMeshComponentBase>
          (FFastGeoSkinnedMeshComponentBase *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FSkinnedMeshSceneProxyDesc *this;
  USkinnedAsset *pUVar6;
  longlong lVar7;
  int iVar8;
  undefined7 in_register_00000081;
  bool local_res8 [8];
  undefined8 local_38;
  longlong local_30;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_28;
  
  this = (FSkinnedMeshSceneProxyDesc *)
         (**(code **)(param_1->_padding_ + 0x118))
                   (param_1,param_2,CONCAT71(in_register_00000081,param_3));
  pUVar6 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(this);
  if (pUVar6 != (USkinnedAsset *)0x0) {
    iVar5 = (int)param_1->_padding_;
    lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x3c8))(pUVar6);
    if (iVar5 < *(int *)(lVar7 + 8)) {
      iVar5 = *(int *)(lVar7 + 8);
    }
    iVar8 = 0;
    if (0 < iVar5) {
      do {
        local_38 = (**(code **)(param_1->_padding_ + 0x58))(param_1,iVar8);
        pFVar1 = (param_2->AllocatorInstance).Data;
        if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
           ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar4 = param_2->ArrayNum;
        if (iVar4 == param_2->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        iVar8 = iVar8 + 1;
        param_2->ArrayNum = iVar4 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_38;
      } while (iVar8 < iVar5);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    FMeshComponentHelper::GetMaterialSlotsOverlayMaterial<FFastGeoMeshComponent>
              ((FFastGeoMeshComponent *)param_1,&local_28);
    local_res8[0] = false;
    FMaterialOverlayHelper::AppendAllOverlayMaterial(&local_28,param_2,local_res8);
    if (local_res8[0] != false) {
      local_30 = (**(code **)(param_1->_padding_ + 0x108))(param_1);
      if (local_30 != 0) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if ((pFVar1 <= (FScriptContainerElement *)&local_30) &&
           ((FScriptContainerElement *)&local_30 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_30;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// GetValidMinLOD<FFastGeoInstancedSkinnedMeshComponent> @ 14da15380

int __cdecl
FSkinnedMeshComponentHelper::GetValidMinLOD<FFastGeoInstancedSkinnedMeshComponent>
          (FFastGeoInstancedSkinnedMeshComponent *param_1,int param_2)

{
  int iVar1;
  FSkeletalMeshRenderData *pFVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  pFVar2 = GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent>(param_1);
  if (pFVar2 != (FSkeletalMeshRenderData *)0x0) {
    iVar3 = (pFVar2->LODRenderData).Array.ArrayNum;
  }
  pFVar2 = GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent>(param_1);
  if (pFVar2 == (FSkeletalMeshRenderData *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FSkeletalMeshRenderData::GetFirstValidLODIdx(pFVar2,param_2);
  }
  iVar4 = iVar3 + -1;
  if (iVar1 < iVar3 + -1) {
    iVar4 = iVar1;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  return iVar3;
}

// GetValidMinLOD<FFastGeoSkinnedMeshComponent> @ 14da15400

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
FSkinnedMeshComponentHelper::GetValidMinLOD<FFastGeoSkinnedMeshComponent>
          (FFastGeoSkinnedMeshComponent *param_1,int param_2)

{
  int iVar1;
  FSkeletalMeshRenderData *pFVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  pFVar2 = GetSkeletalMeshRenderData<FFastGeoSkinnedMeshComponent>(param_1);
  if (pFVar2 != (FSkeletalMeshRenderData *)0x0) {
    iVar3 = (pFVar2->LODRenderData).Array.ArrayNum;
  }
  pFVar2 = GetSkeletalMeshRenderData<FFastGeoSkinnedMeshComponent>(param_1);
  if (pFVar2 == (FSkeletalMeshRenderData *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FSkeletalMeshRenderData::GetFirstValidLODIdx(pFVar2,param_2);
  }
  iVar4 = iVar3 + -1;
  if (iVar1 < iVar3 + -1) {
    iVar4 = iVar1;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  return iVar3;
}

// HasValidNaniteData<FFastGeoInstancedSkinnedMeshComponent> @ 14da15480

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FSkinnedMeshComponentHelper::HasValidNaniteData<FFastGeoInstancedSkinnedMeshComponent>
          (FFastGeoInstancedSkinnedMeshComponent *param_1)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  USkinnedAsset *pUVar2;
  longlong lVar3;
  
  pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))();
  pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
    pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
    lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
    if (lVar3 != 0) {
      pFVar1 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
      pUVar2 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar1);
      lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        return 0 < *(int *)(*(longlong *)(lVar3 + 0x10) + 0x70);
      }
    }
  }
  return false;
}

// ShouldNaniteSkin<FFastGeoInstancedSkinnedMeshComponent> @ 14da18000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FSkinnedMeshComponentHelper::ShouldNaniteSkin<FFastGeoInstancedSkinnedMeshComponent>
          (FFastGeoInstancedSkinnedMeshComponent *param_1)

{
  bool bVar1;
  EShaderPlatform EVar2;
  UWorld *pUVar3;
  FSkinnedMeshSceneProxyDesc *pFVar4;
  USkinnedAsset *pUVar5;
  longlong lVar6;
  
  pUVar3 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
  EVar2 = GMaxRHIShaderPlatform;
  if ((pUVar3 != (UWorld *)0x0) && (pUVar3->Scene != (FSceneInterface *)0x0)) {
    pUVar3 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
    if (pUVar3 == (UWorld *)0x0) {
      EVar2 = FSceneInterface::GetShaderPlatform((FSceneInterface *)0x0);
    }
    else {
      EVar2 = FSceneInterface::GetShaderPlatform(pUVar3->Scene);
    }
  }
  bVar1 = USkinnedMeshComponent::ShouldRenderNaniteSkinnedMeshes();
  if ((bVar1) && (bVar1 = UseNanite(EVar2,true,true), bVar1)) {
    pFVar4 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
    pUVar5 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar4);
    if (pUVar5 != (USkinnedAsset *)0x0) {
      pFVar4 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
      pUVar5 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar4);
      lVar6 = (**(code **)(*(longlong *)pUVar5 + 0x398))(pUVar5);
      if (lVar6 != 0) {
        pFVar4 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(param_1->_padding_ + 0x118))(param_1);
        pUVar5 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar4);
        lVar6 = (**(code **)(*(longlong *)pUVar5 + 0x398))(pUVar5);
        if ((*(longlong *)(lVar6 + 0x10) != 0) && (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 0x70))
           ) {
          return true;
        }
      }
    }
  }
  return false;
}

