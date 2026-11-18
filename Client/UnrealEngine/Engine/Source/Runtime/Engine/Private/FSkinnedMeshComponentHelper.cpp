// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// ComputeMinLOD<USkinnedMeshComponent> @ 14791dfe0

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
FSkinnedMeshComponentHelper::ComputeMinLOD<USkinnedMeshComponent>(USkinnedMeshComponent *param_1)

{
  int iVar1;
  USkeletalMesh *pUVar2;
  bool bVar3;
  
  pUVar2 = (param_1->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar2 == (USkeletalMesh *)0x0) {
    pUVar2 = (USkeletalMesh *)(param_1->SkinnedAsset).field0_0x0.DebugPtr;
    if (!UE::GC::GIsIncrementalReachabilityPending) goto LAB_14791e01f;
    bVar3 = pUVar2 == (USkeletalMesh *)0x0;
  }
  else {
    bVar3 = !UE::GC::GIsIncrementalReachabilityPending;
  }
  if (!bVar3) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
LAB_14791e01f:
  iVar1 = (**(code **)(pUVar2->_padding_ + 0x448))(pUVar2,0);
  if ((param_1->bOverrideMinLod != '\0') && (iVar1 < param_1->MinLodModel)) {
    iVar1 = param_1->MinLodModel;
  }
  iVar1 = GetValidMinLOD<USkinnedMeshComponent>(param_1,iVar1);
  return iVar1;
}

// GetDefaultMaterialSlotsOverlayMaterial<USkinnedMeshComponent> @ 147923b90

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
FSkinnedMeshComponentHelper::GetDefaultMaterialSlotsOverlayMaterial<USkinnedMeshComponent>
          (USkinnedMeshComponent *param_1,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  USkeletalMesh *pUVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  pUVar11 = (param_1->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar11 == (USkeletalMesh *)0x0) {
    pUVar11 = (USkeletalMesh *)(param_1->SkinnedAsset).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar11 == (USkeletalMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    if (pUVar11 == (USkeletalMesh *)0x0) {
      return;
    }
  }
  else if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  plVar8 = (longlong *)(**(code **)(pUVar11->_padding_ + 0x3c8))(pUVar11);
  lVar10 = *plVar8;
  lVar5 = plVar8[1];
  pFVar12 = (FScriptContainerElement *)(lVar10 + 0x28);
  lVar9 = (longlong)(int)lVar5 * 0x30 + lVar10;
  while( true ) {
    if ((int)plVar8[1] != (int)lVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSkeletalMaterial_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar10 == lVar9) break;
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)*piVar1 * 8)) &&
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
    pUVar3 = *(UObject **)pFVar12;
    *(UObject **)(pFVar2 + (longlong)iVar7 * 8) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    lVar10 = lVar10 + 0x30;
    pFVar12 = pFVar12 + 0x30;
  }
  return;
}

// GetMaterial<USkinnedMeshComponent> @ 147923da0

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
FSkinnedMeshComponentHelper::GetMaterial<USkinnedMeshComponent>
          (USkinnedMeshComponent *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  longlong lVar6;
  longlong *plVar7;
  USkeletalMesh *pUVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_2;
  uVar9 = 0;
  if ((-1 < param_2) && (param_2 < (int)param_1->_padding_)) {
    uVar4 = uVar9;
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
    if (*(longlong *)(param_1->_padding_ + lVar10 * 8) != 0) {
      if (param_2 < (int)param_1->_padding_) {
        uVar9 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar1)();
        return pUVar5;
      }
      return *(UMaterialInterface **)(param_1->_padding_ + lVar10 * 8);
    }
  }
  pUVar8 = (param_1->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar8 == (USkeletalMesh *)0x0) {
    pUVar8 = (USkeletalMesh *)(param_1->SkinnedAsset).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 == (USkeletalMesh *)0x0) {
        return (UMaterialInterface *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    if (pUVar8 == (USkeletalMesh *)0x0) {
      return (UMaterialInterface *)0x0;
    }
  }
  else if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  cVar3 = (**(code **)(pUVar8->_padding_ + 0x10))();
  if (((cVar3 == '\0') && (lVar6 = (**(code **)(pUVar8->_padding_ + 0x3c8))(pUVar8), -1 < param_2))
     && (param_2 < *(int *)(lVar6 + 8))) {
    plVar7 = (longlong *)(**(code **)(pUVar8->_padding_ + 0x3c8))(pUVar8);
    if (param_2 < (int)plVar7[1]) {
      uVar9 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar1)();
      return pUVar5;
    }
    if (*(longlong *)(*plVar7 + lVar10 * 0x30) != 0) {
      plVar7 = (longlong *)(**(code **)(pUVar8->_padding_ + 0x3c8))(pUVar8);
      uVar9 = 0;
      if (param_2 < (int)plVar7[1]) {
        uVar9 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar1)();
        return pUVar5;
      }
      return *(UMaterialInterface **)(*plVar7 + lVar10 * 0x30);
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetNaniteResources<USkinnedMeshComponent> @ 147923fd0

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
FSkinnedMeshComponentHelper::GetNaniteResources<USkinnedMeshComponent>
          (USkinnedMeshComponent *param_1)

{
  USkinnedAsset *pUVar1;
  longlong lVar2;
  USkeletalMesh *pUVar3;
  bool bVar4;
  
  pUVar3 = (param_1->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar3 == (USkeletalMesh *)0x0) {
    pUVar1 = (param_1->SkinnedAsset).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar1 == (USkinnedAsset *)0x0) {
        return (FResources *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if (pUVar1 == (USkinnedAsset *)0x0) {
      return (FResources *)0x0;
    }
  }
  else if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3 = (param_1->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar3 == (USkeletalMesh *)0x0) {
    pUVar3 = (USkeletalMesh *)(param_1->SkinnedAsset).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      bVar4 = pUVar3 == (USkeletalMesh *)0x0;
      goto LAB_14792404f;
    }
  }
  else {
    bVar4 = UE::GC::GIsIncrementalReachabilityPending == false;
LAB_14792404f:
    if (!bVar4) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  lVar2 = (**(code **)(pUVar3->_padding_ + 0x398))(pUVar3);
  if (lVar2 == 0) {
    return (FResources *)0x0;
  }
  pUVar3 = (param_1->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar3 == (USkeletalMesh *)0x0) {
    pUVar3 = (USkeletalMesh *)(param_1->SkinnedAsset).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14792409c;
    bVar4 = pUVar3 == (USkeletalMesh *)0x0;
  }
  else {
    bVar4 = UE::GC::GIsIncrementalReachabilityPending == false;
  }
  if (!bVar4) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
LAB_14792409c:
  lVar2 = (**(code **)(pUVar3->_padding_ + 0x398))(pUVar3);
  return *(FResources **)(lVar2 + 0x10);
}

// GetNumLODs<USkinnedMeshComponent> @ 1479240c0

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
FSkinnedMeshComponentHelper::GetNumLODs<USkinnedMeshComponent>(USkinnedMeshComponent *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  
  pFVar1 = GetSkeletalMeshRenderData<USkinnedMeshComponent>(param_1);
  if (pFVar1 != (FSkeletalMeshRenderData *)0x0) {
    return (pFVar1->LODRenderData).Array.ArrayNum;
  }
  return 0;
}

// GetSkeletalMeshRenderData<USkinnedMeshComponent> @ 1479240f0

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
FSkinnedMeshComponentHelper::GetSkeletalMeshRenderData<USkinnedMeshComponent>
          (USkinnedMeshComponent *param_1)

{
  USkinnedAsset *pUVar1;
  FSkeletalMeshRenderData *pFVar2;
  USkeletalMesh *pUVar3;
  bool bVar4;
  
  if (param_1->MeshObject != (FSkeletalMeshObject *)0x0) {
    return param_1->MeshObject->SkeletalMeshRenderData;
  }
  pUVar3 = (param_1->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar3 == (USkeletalMesh *)0x0) {
    pUVar1 = (param_1->SkinnedAsset).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar1 == (USkinnedAsset *)0x0) {
        return (FSkeletalMeshRenderData *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if (pUVar1 == (USkinnedAsset *)0x0) {
      return (FSkeletalMeshRenderData *)0x0;
    }
  }
  else if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3 = (param_1->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar3 == (USkeletalMesh *)0x0) {
    pUVar3 = (USkeletalMesh *)(param_1->SkinnedAsset).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_147924190;
    bVar4 = pUVar3 == (USkeletalMesh *)0x0;
  }
  else {
    bVar4 = UE::GC::GIsIncrementalReachabilityPending == false;
  }
  if (!bVar4) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
LAB_147924190:
                    /* WARNING: Could not recover jumptable at 0x0001479241a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FSkeletalMeshRenderData *)(**(code **)(pUVar3->_padding_ + 0x398))(pUVar3);
  return pFVar2;
}

// GetUsedMaterials<USkinnedMeshComponent> @ 147924d80

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
FSkinnedMeshComponentHelper::GetUsedMaterials<USkinnedMeshComponent>
          (USkinnedMeshComponent *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  USkeletalMesh *pUVar9;
  bool local_res8 [8];
  undefined8 local_38;
  UMaterialInterface *local_30;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar9 = (param_1->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar9 == (USkeletalMesh *)0x0) {
    pUVar9 = (USkeletalMesh *)(param_1->SkinnedAsset).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar9 == (USkeletalMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    if (pUVar9 == (USkeletalMesh *)0x0) {
      return;
    }
  }
  else if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  iVar6 = (int)param_1->_padding_;
  lVar7 = (**(code **)(pUVar9->_padding_ + 0x3c8))(pUVar9);
  piVar1 = &param_2->ArrayMax;
  if (iVar6 < *(int *)(lVar7 + 8)) {
    iVar6 = *(int *)(lVar7 + 8);
  }
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      local_38 = (**(code **)(param_1->_padding_ + 0x690))(param_1,iVar8);
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      iVar8 = iVar8 + 1;
      param_2->ArrayNum = iVar5 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_38;
    } while (iVar8 < iVar6);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  UMeshComponent::GetMaterialSlotsOverlayMaterial((UMeshComponent *)param_1,&local_28);
  local_res8[0] = false;
  FMaterialOverlayHelper::AppendAllOverlayMaterial(&local_28,param_2,local_res8);
  if ((local_res8[0] != false) &&
     (local_30 = UMeshComponent::GetOverlayMaterial((UMeshComponent *)param_1),
     local_30 != (UMaterialInterface *)0x0)) {
    pFVar2 = (param_2->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
       (((FScriptContainerElement *)&local_30 < pFVar2 + (longlong)*piVar1 * 8 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar6 + 1;
    *(UMaterialInterface **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_30;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetValidMinLOD<USkinnedMeshComponent> @ 147924ff0

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
FSkinnedMeshComponentHelper::GetValidMinLOD<USkinnedMeshComponent>
          (USkinnedMeshComponent *param_1,int param_2)

{
  int iVar1;
  FSkeletalMeshRenderData *pFVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  pFVar2 = GetSkeletalMeshRenderData<USkinnedMeshComponent>(param_1);
  if (pFVar2 != (FSkeletalMeshRenderData *)0x0) {
    iVar3 = (pFVar2->LODRenderData).Array.ArrayNum;
  }
  pFVar2 = GetSkeletalMeshRenderData<USkinnedMeshComponent>(param_1);
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

// HasValidNaniteData<USkinnedMeshComponent> @ 147925070

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
FSkinnedMeshComponentHelper::HasValidNaniteData<USkinnedMeshComponent>
          (USkinnedMeshComponent *param_1)

{
  FResources *pFVar1;
  
  pFVar1 = GetNaniteResources<USkinnedMeshComponent>(param_1);
  if (pFVar1 != (FResources *)0x0) {
    return 0 < (pFVar1->PageStreamingStates).ArrayNum;
  }
  return false;
}

// ShouldNaniteSkin<USkinnedMeshComponent> @ 147927660

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

bool __cdecl
FSkinnedMeshComponentHelper::ShouldNaniteSkin<USkinnedMeshComponent>(USkinnedMeshComponent *param_1)

{
  bool bVar1;
  EShaderPlatform EVar2;
  FSceneInterface *pFVar3;
  FResources *pFVar4;
  
  pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
  EVar2 = GMaxRHIShaderPlatform;
  if (pFVar3 != (FSceneInterface *)0x0) {
    pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
    EVar2 = FSceneInterface::GetShaderPlatform(pFVar3);
  }
  bVar1 = NaniteSkinnedMeshesSupported();
  if ((((bVar1) && (GSkinnedMeshRenderNanite != 0)) && (bVar1 = UseNanite(EVar2,true,true), bVar1))
     && ((pFVar4 = GetNaniteResources<USkinnedMeshComponent>(param_1), pFVar4 != (FResources *)0x0
         && (0 < (pFVar4->PageStreamingStates).ArrayNum)))) {
    return true;
  }
  return false;
}

// GetMaterial<FSkinnedMeshSceneProxyDesc> @ 148687830

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
FSkinnedMeshComponentHelper::GetMaterial<FSkinnedMeshSceneProxyDesc>
          (FSkinnedMeshSceneProxyDesc *param_1,int param_2)

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
  
  if (((-1 < param_2) && (param_2 < (param_1->OverrideMaterials).ArrayNum)) &&
     (pTVar5 = &TArrayView<TObjectPtr<UMaterialInterface>_const_,int>::operator[]
                          (&param_1->OverrideMaterials,param_2)->field0_0x0,
     pTVar5->DebugPtr != (UMaterialInterface *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArrayView<TObjectPtr<UMaterialInterface>_const_,int>::operator[]
                       (&param_1->OverrideMaterials,param_2);
    return (UMaterialInterface *)(FObjectPtr)pFVar6->Handle;
  }
  pUVar1 = param_1->SkinnedAsset;
  if (((pUVar1 != (USkinnedAsset *)0x0) &&
      (cVar3 = (**(code **)(*(longlong *)&pUVar1->field_0xe0 + 0x10))(), cVar3 == '\0')) &&
     ((lVar7 = (**(code **)(*(longlong *)pUVar1 + 0x3c8))(pUVar1), -1 < param_2 &&
      (param_2 < *(int *)(lVar7 + 8))))) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar1 + 0x3c8))(pUVar1);
    uVar10 = 0;
    if (param_2 < (int)plVar8[1]) {
      uVar10 = (uint)~param_2 >> 0x1f;
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
    if (*(longlong *)(*plVar8 + (longlong)param_2 * 0x30) != 0) {
      plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar1 + 0x3c8))(pUVar1);
      uVar10 = 0;
      if (param_2 < (int)plVar8[1]) {
        uVar10 = (uint)~param_2 >> 0x1f;
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
      return *(UMaterialInterface **)(*plVar8 + (longlong)param_2 * 0x30);
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetNaniteResources<FSkinnedMeshSceneProxyDesc> @ 1486879c0

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
FSkinnedMeshComponentHelper::GetNaniteResources<FSkinnedMeshSceneProxyDesc>
          (FSkinnedMeshSceneProxyDesc *param_1)

{
  longlong lVar1;
  
  if (param_1->SkinnedAsset != (USkinnedAsset *)0x0) {
    lVar1 = (**(code **)(*(longlong *)param_1->SkinnedAsset + 0x398))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*(longlong *)param_1->SkinnedAsset + 0x398))();
      return *(FResources **)(lVar1 + 0x10);
    }
  }
  return (FResources *)0x0;
}

// HasValidNaniteData<FSkinnedMeshSceneProxyDesc> @ 148687a90

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
FSkinnedMeshComponentHelper::HasValidNaniteData<FSkinnedMeshSceneProxyDesc>
          (FSkinnedMeshSceneProxyDesc *param_1)

{
  longlong lVar1;
  
  if (param_1->SkinnedAsset != (USkinnedAsset *)0x0) {
    lVar1 = (**(code **)(*(longlong *)param_1->SkinnedAsset + 0x398))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*(longlong *)param_1->SkinnedAsset + 0x398))();
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        return 0 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0x70);
      }
    }
  }
  return false;
}

// ShouldNaniteSkin<FSkinnedMeshSceneProxyDesc> @ 14868f1b0

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

bool __cdecl
FSkinnedMeshComponentHelper::ShouldNaniteSkin<FSkinnedMeshSceneProxyDesc>
          (FSkinnedMeshSceneProxyDesc *param_1)

{
  bool bVar1;
  EShaderPlatform EVar2;
  
  EVar2 = GMaxRHIShaderPlatform;
  if ((FSceneInterface *)param_1->_padding_ != (FSceneInterface *)0x0) {
    EVar2 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1->_padding_);
  }
  bVar1 = USkinnedMeshComponent::ShouldRenderNaniteSkinnedMeshes();
  if (((bVar1) && (bVar1 = UseNanite(EVar2,true,true), bVar1)) &&
     (bVar1 = HasValidNaniteData<FSkinnedMeshSceneProxyDesc>(param_1), bVar1)) {
    return true;
  }
  return false;
}

