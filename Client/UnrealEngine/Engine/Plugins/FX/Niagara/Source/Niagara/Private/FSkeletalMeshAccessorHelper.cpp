// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// Init<TIntegralConstant<int,0>,TIntegralConstant<int,0>_> @ 148f3db60

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
FSkeletalMeshAccessorHelper::Init<TIntegralConstant<int,0>,TIntegralConstant<int,0>_>
          (FSkeletalMeshAccessorHelper *this,FNDISkeletalMesh_InstanceData *param_1)

{
  int iVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  FSkeletalMeshSkinningData *pFVar3;
  code *pcVar4;
  bool bVar5;
  USkeletalMeshComponent *pUVar6;
  UClass *pUVar7;
  USkeletalMesh *pUVar8;
  USkeletalMeshComponent *pUVar9;
  
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  pUVar9 = (USkeletalMeshComponent *)0x0;
  if (pUVar6 == (USkeletalMeshComponent *)0x0) {
LAB_148f3dbaf:
    pUVar6 = pUVar9;
  }
  else {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_148f3dbaf;
  }
  this->Comp = pUVar6;
  pUVar8 = (USkeletalMesh *)FWeakObjectPtr::Get(&(param_1->SkeletalMesh).WeakPtr);
  this->Mesh = pUVar8;
  this->LODData = (param_1->CachedLODData).Reference;
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar6 != (USkeletalMeshComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar7->_padding_)) &&
       (pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar6),
       pUVar8 != (USkeletalMesh *)0x0)) {
      pUVar6 = (USkeletalMeshComponent *)
               USkinnedMeshComponent::GetSkinWeightBuffer
                         ((USkinnedMeshComponent *)pUVar6,param_1->CachedLODIdx);
      goto LAB_148f3dc34;
    }
  }
  pFVar2 = (param_1->CachedLODData).Reference;
  pUVar6 = pUVar9;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    pUVar6 = (USkeletalMeshComponent *)&pFVar2->SkinWeightVertexBuffer;
  }
LAB_148f3dc34:
  pFVar2 = this->LODData;
  this->SkinWeightBuffer = (FSkinWeightVertexBuffer *)pUVar6;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    if (((pFVar2->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x56,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = (USkeletalMeshComponent *)(pFVar2->MultiSizeIndexContainer).IndexBuffer;
  }
  this->IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)pUVar9;
  pFVar3 = (param_1->SkinningData).SkinningData.Object;
  this->SkinningData = pFVar3;
  this->Usage = (param_1->SkinningData).Usage;
  if (pFVar3 != (FSkeletalMeshSkinningData *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar3->RWGuard);
  }
  return;
}

// Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,1>_> @ 148f3dcb0

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
FSkeletalMeshAccessorHelper::
Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,1>_>
          (FSkeletalMeshAccessorHelper *this,FNDISkeletalMesh_InstanceData *param_1)

{
  int iVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  FSkeletalMeshSkinningData *pFVar3;
  code *pcVar4;
  bool bVar5;
  USkeletalMeshComponent *pUVar6;
  UClass *pUVar7;
  USkeletalMesh *pUVar8;
  USkeletalMeshComponent *pUVar9;
  
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  pUVar9 = (USkeletalMeshComponent *)0x0;
  if (pUVar6 == (USkeletalMeshComponent *)0x0) {
LAB_148f3dcff:
    pUVar6 = pUVar9;
  }
  else {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_148f3dcff;
  }
  this->Comp = pUVar6;
  pUVar8 = (USkeletalMesh *)FWeakObjectPtr::Get(&(param_1->SkeletalMesh).WeakPtr);
  this->Mesh = pUVar8;
  this->LODData = (param_1->CachedLODData).Reference;
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar6 != (USkeletalMeshComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar7->_padding_)) &&
       (pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar6),
       pUVar8 != (USkeletalMesh *)0x0)) {
      pUVar6 = (USkeletalMeshComponent *)
               USkinnedMeshComponent::GetSkinWeightBuffer
                         ((USkinnedMeshComponent *)pUVar6,param_1->CachedLODIdx);
      goto LAB_148f3dd84;
    }
  }
  pFVar2 = (param_1->CachedLODData).Reference;
  pUVar6 = pUVar9;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    pUVar6 = (USkeletalMeshComponent *)&pFVar2->SkinWeightVertexBuffer;
  }
LAB_148f3dd84:
  pFVar2 = this->LODData;
  this->SkinWeightBuffer = (FSkinWeightVertexBuffer *)pUVar6;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    if (((pFVar2->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x56,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = (USkeletalMeshComponent *)(pFVar2->MultiSizeIndexContainer).IndexBuffer;
  }
  this->IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)pUVar9;
  pFVar3 = (param_1->SkinningData).SkinningData.Object;
  this->SkinningData = pFVar3;
  this->Usage = (param_1->SkinningData).Usage;
  if (pFVar3 != (FSkeletalMeshSkinningData *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar3->RWGuard);
  }
  return;
}

// Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,0>_> @ 148f3de00

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
FSkeletalMeshAccessorHelper::
Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,0>_>
          (FSkeletalMeshAccessorHelper *this,FNDISkeletalMesh_InstanceData *param_1)

{
  int iVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  FSkeletalMeshSkinningData *pFVar3;
  code *pcVar4;
  bool bVar5;
  USkeletalMeshComponent *pUVar6;
  UClass *pUVar7;
  USkeletalMesh *pUVar8;
  USkeletalMeshComponent *pUVar9;
  
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  pUVar9 = (USkeletalMeshComponent *)0x0;
  if (pUVar6 == (USkeletalMeshComponent *)0x0) {
LAB_148f3de4f:
    pUVar6 = pUVar9;
  }
  else {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_148f3de4f;
  }
  this->Comp = pUVar6;
  pUVar8 = (USkeletalMesh *)FWeakObjectPtr::Get(&(param_1->SkeletalMesh).WeakPtr);
  this->Mesh = pUVar8;
  this->LODData = (param_1->CachedLODData).Reference;
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar6 != (USkeletalMeshComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar7->_padding_)) &&
       (pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar6),
       pUVar8 != (USkeletalMesh *)0x0)) {
      pUVar6 = (USkeletalMeshComponent *)
               USkinnedMeshComponent::GetSkinWeightBuffer
                         ((USkinnedMeshComponent *)pUVar6,param_1->CachedLODIdx);
      goto LAB_148f3ded4;
    }
  }
  pFVar2 = (param_1->CachedLODData).Reference;
  pUVar6 = pUVar9;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    pUVar6 = (USkeletalMeshComponent *)&pFVar2->SkinWeightVertexBuffer;
  }
LAB_148f3ded4:
  pFVar2 = this->LODData;
  this->SkinWeightBuffer = (FSkinWeightVertexBuffer *)pUVar6;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    if (((pFVar2->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x56,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = (USkeletalMeshComponent *)(pFVar2->MultiSizeIndexContainer).IndexBuffer;
  }
  this->IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)pUVar9;
  pFVar3 = (param_1->SkinningData).SkinningData.Object;
  this->SkinningData = pFVar3;
  this->Usage = (param_1->SkinningData).Usage;
  if (pFVar3 != (FSkeletalMeshSkinningData *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar3->RWGuard);
  }
  return;
}

// Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,1>_> @ 148f3df50

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
FSkeletalMeshAccessorHelper::
Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,1>_>
          (FSkeletalMeshAccessorHelper *this,FNDISkeletalMesh_InstanceData *param_1)

{
  int iVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  FSkeletalMeshSkinningData *pFVar3;
  code *pcVar4;
  bool bVar5;
  USkeletalMeshComponent *pUVar6;
  UClass *pUVar7;
  USkeletalMesh *pUVar8;
  USkeletalMeshComponent *pUVar9;
  
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  pUVar9 = (USkeletalMeshComponent *)0x0;
  if (pUVar6 == (USkeletalMeshComponent *)0x0) {
LAB_148f3df9f:
    pUVar6 = pUVar9;
  }
  else {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_148f3df9f;
  }
  this->Comp = pUVar6;
  pUVar8 = (USkeletalMesh *)FWeakObjectPtr::Get(&(param_1->SkeletalMesh).WeakPtr);
  this->Mesh = pUVar8;
  this->LODData = (param_1->CachedLODData).Reference;
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar6 != (USkeletalMeshComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar7->_padding_)) &&
       (pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar6),
       pUVar8 != (USkeletalMesh *)0x0)) {
      pUVar6 = (USkeletalMeshComponent *)
               USkinnedMeshComponent::GetSkinWeightBuffer
                         ((USkinnedMeshComponent *)pUVar6,param_1->CachedLODIdx);
      goto LAB_148f3e024;
    }
  }
  pFVar2 = (param_1->CachedLODData).Reference;
  pUVar6 = pUVar9;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    pUVar6 = (USkeletalMeshComponent *)&pFVar2->SkinWeightVertexBuffer;
  }
LAB_148f3e024:
  pFVar2 = this->LODData;
  this->SkinWeightBuffer = (FSkinWeightVertexBuffer *)pUVar6;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    if (((pFVar2->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x56,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = (USkeletalMeshComponent *)(pFVar2->MultiSizeIndexContainer).IndexBuffer;
  }
  this->IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)pUVar9;
  pFVar3 = (param_1->SkinningData).SkinningData.Object;
  this->SkinningData = pFVar3;
  this->Usage = (param_1->SkinningData).Usage;
  if (pFVar3 != (FSkeletalMeshSkinningData *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar3->RWGuard);
  }
  return;
}

// Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,0>_> @ 148f3e0a0

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
FSkeletalMeshAccessorHelper::
Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,0>_>
          (FSkeletalMeshAccessorHelper *this,FNDISkeletalMesh_InstanceData *param_1)

{
  int iVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  FSkeletalMeshSkinningData *pFVar3;
  code *pcVar4;
  bool bVar5;
  USkeletalMeshComponent *pUVar6;
  UClass *pUVar7;
  USkeletalMesh *pUVar8;
  USkeletalMeshComponent *pUVar9;
  
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  pUVar9 = (USkeletalMeshComponent *)0x0;
  if (pUVar6 == (USkeletalMeshComponent *)0x0) {
LAB_148f3e0ef:
    pUVar6 = pUVar9;
  }
  else {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_148f3e0ef;
  }
  this->Comp = pUVar6;
  pUVar8 = (USkeletalMesh *)FWeakObjectPtr::Get(&(param_1->SkeletalMesh).WeakPtr);
  this->Mesh = pUVar8;
  this->LODData = (param_1->CachedLODData).Reference;
  pUVar6 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar6 != (USkeletalMeshComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar7->_padding_)) &&
       (pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar6),
       pUVar8 != (USkeletalMesh *)0x0)) {
      pUVar6 = (USkeletalMeshComponent *)
               USkinnedMeshComponent::GetSkinWeightBuffer
                         ((USkinnedMeshComponent *)pUVar6,param_1->CachedLODIdx);
      goto LAB_148f3e174;
    }
  }
  pFVar2 = (param_1->CachedLODData).Reference;
  pUVar6 = pUVar9;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    pUVar6 = (USkeletalMeshComponent *)&pFVar2->SkinWeightVertexBuffer;
  }
LAB_148f3e174:
  pFVar2 = this->LODData;
  this->SkinWeightBuffer = (FSkinWeightVertexBuffer *)pUVar6;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    if (((pFVar2->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x56,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = (USkeletalMeshComponent *)(pFVar2->MultiSizeIndexContainer).IndexBuffer;
  }
  this->IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)pUVar9;
  pFVar3 = (param_1->SkinningData).SkinningData.Object;
  this->SkinningData = pFVar3;
  this->Usage = (param_1->SkinningData).Usage;
  if (pFVar3 != (FSkeletalMeshSkinningData *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar3->RWGuard);
  }
  return;
}

// Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,1>_> @ 149201010

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
FSkeletalMeshAccessorHelper::
Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,1>_>
          (FSkeletalMeshAccessorHelper *this,FNDISkeletalMesh_InstanceData *param_1)

{
  int iVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  USkeletalMeshComponent *pUVar5;
  UClass *pUVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegion *pFVar8;
  USkeletalMeshComponent *pUVar9;
  
  pUVar5 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  pUVar9 = (USkeletalMeshComponent *)0x0;
  if (pUVar5 == (USkeletalMeshComponent *)0x0) {
LAB_149201065:
    pUVar5 = pUVar9;
  }
  else {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_149201065;
  }
  this->Comp = pUVar5;
  pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get(&(param_1->SkeletalMesh).WeakPtr);
  this->Mesh = pUVar7;
  this->LODData = (param_1->CachedLODData).Reference;
  pUVar5 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar5 != (USkeletalMeshComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar6->_padding_)) &&
       (pUVar7 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar5),
       pUVar7 != (USkeletalMesh *)0x0)) {
      pUVar5 = (USkeletalMeshComponent *)
               USkinnedMeshComponent::GetSkinWeightBuffer
                         ((USkinnedMeshComponent *)pUVar5,param_1->CachedLODIdx);
      goto LAB_1492010ea;
    }
  }
  pFVar2 = (param_1->CachedLODData).Reference;
  pUVar5 = pUVar9;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    pUVar5 = (USkeletalMeshComponent *)&pFVar2->SkinWeightVertexBuffer;
  }
LAB_1492010ea:
  pFVar2 = this->LODData;
  this->SkinWeightBuffer = (FSkinWeightVertexBuffer *)pUVar5;
  pUVar5 = pUVar9;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    if (((pFVar2->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x56,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar5 = (USkeletalMeshComponent *)(pFVar2->MultiSizeIndexContainer).IndexBuffer;
  }
  pUVar7 = this->Mesh;
  this->IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)pUVar5;
  this->SkinningData = (param_1->SkinningData).SkinningData.Object;
  this->Usage = (param_1->SkinningData).Usage;
  if (pUVar7 == (USkeletalMesh *)0x0) {
    this->SamplingRegion = (FSkeletalMeshSamplingRegion *)0x0;
  }
  else {
    USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
    if (((param_1->SamplingRegionIndices).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = FSkeletalMeshSamplingInfo::GetRegion
                       (&pUVar7->SamplingInfo,
                        *(int *)(param_1->SamplingRegionIndices).AllocatorInstance.Data);
    this->SamplingRegion = pFVar8;
    if (((param_1->SamplingRegionIndices).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar9 = (USkeletalMeshComponent *)
             FSkeletalMeshSamplingInfo::GetRegionBuiltData
                       (&pUVar7->SamplingInfo,
                        *(int *)(param_1->SamplingRegionIndices).AllocatorInstance.Data);
  }
  this->SamplingRegionBuiltData = (FSkeletalMeshSamplingRegionBuiltData *)pUVar9;
  if (this->SkinningData != (FSkeletalMeshSkinningData *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)&this->SkinningData->RWGuard);
  }
  return;
}

// Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,0>_> @ 149201250

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
FSkeletalMeshAccessorHelper::
Init<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>,TIntegralConstant<enum_ENDISkelMesh_AreaWeightingMode,0>_>
          (FSkeletalMeshAccessorHelper *this,FNDISkeletalMesh_InstanceData *param_1)

{
  int iVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  USkeletalMeshComponent *pUVar5;
  UClass *pUVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegion *pFVar8;
  USkeletalMeshComponent *pUVar9;
  
  pUVar5 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  pUVar9 = (USkeletalMeshComponent *)0x0;
  if (pUVar5 == (USkeletalMeshComponent *)0x0) {
LAB_1492012a5:
    pUVar5 = pUVar9;
  }
  else {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_1492012a5;
  }
  this->Comp = pUVar5;
  pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get(&(param_1->SkeletalMesh).WeakPtr);
  this->Mesh = pUVar7;
  this->LODData = (param_1->CachedLODData).Reference;
  pUVar5 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar5 != (USkeletalMeshComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar6->_padding_)) &&
       (pUVar7 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar5),
       pUVar7 != (USkeletalMesh *)0x0)) {
      pUVar5 = (USkeletalMeshComponent *)
               USkinnedMeshComponent::GetSkinWeightBuffer
                         ((USkinnedMeshComponent *)pUVar5,param_1->CachedLODIdx);
      goto LAB_14920132a;
    }
  }
  pFVar2 = (param_1->CachedLODData).Reference;
  pUVar5 = pUVar9;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    pUVar5 = (USkeletalMeshComponent *)&pFVar2->SkinWeightVertexBuffer;
  }
LAB_14920132a:
  pFVar2 = this->LODData;
  this->SkinWeightBuffer = (FSkinWeightVertexBuffer *)pUVar5;
  pUVar5 = pUVar9;
  if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
    if (((pFVar2->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x56,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar5 = (USkeletalMeshComponent *)(pFVar2->MultiSizeIndexContainer).IndexBuffer;
  }
  pUVar7 = this->Mesh;
  this->IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)pUVar5;
  this->SkinningData = (param_1->SkinningData).SkinningData.Object;
  this->Usage = (param_1->SkinningData).Usage;
  if (pUVar7 == (USkeletalMesh *)0x0) {
    this->SamplingRegion = (FSkeletalMeshSamplingRegion *)0x0;
  }
  else {
    USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
    if (((param_1->SamplingRegionIndices).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = FSkeletalMeshSamplingInfo::GetRegion
                       (&pUVar7->SamplingInfo,
                        *(int *)(param_1->SamplingRegionIndices).AllocatorInstance.Data);
    this->SamplingRegion = pFVar8;
    if (((param_1->SamplingRegionIndices).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar9 = (USkeletalMeshComponent *)
             FSkeletalMeshSamplingInfo::GetRegionBuiltData
                       (&pUVar7->SamplingInfo,
                        *(int *)(param_1->SamplingRegionIndices).AllocatorInstance.Data);
  }
  this->SamplingRegionBuiltData = (FSkeletalMeshSamplingRegionBuiltData *)pUVar9;
  if (this->SkinningData != (FSkeletalMeshSkinningData *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)&this->SkinningData->RWGuard);
  }
  return;
}

