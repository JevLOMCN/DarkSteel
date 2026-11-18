// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FSkinnedMeshSceneProxyDynamicData @ 148693580

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedMeshSceneProxyDynamicData * __thiscall
FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData
          (FSkinnedMeshSceneProxyDynamicData *this,USkinnedMeshComponent *param_1,
          USkinnedMeshComponent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  FSkinnedMeshSceneProxyDynamicData *pFVar9;
  USkinnedMeshComponent *pUVar10;
  USkinnedMeshComponent *pUVar11;
  UMeshDeformerInstance *pUVar12;
  USkinnedAsset *pUVar13;
  longlong lVar14;
  byte bVar15;
  byte bVar16;
  longlong *plVar17;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar18;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar19;
  USkinnedMeshComponent *pUVar20;
  USkinnedMeshComponent *local_res10;
  USkinnedMeshComponent *local_res18 [2];
  USkinnedMeshComponent **local_28;
  USkinnedMeshComponent **local_20;
  
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->Name).Number = uVar4;
  this->ClothSimulDataProvider = (IClothSimulationDataProvider *)&param_1->_padding_;
  this->MeshDeformerInstances = &param_1->MeshDeformerInstances;
  local_res10 = param_1;
  local_res18[0] = param_2;
  puVar8 = (undefined8 *)(**(code **)(param_1->_padding_ + 0xb78))(param_1);
  (this->RefPoseOverride).Object = (FSkelMeshRefPoseOverride *)*puVar8;
  pTVar1 = (TReferenceControllerBase<1> *)puVar8[1];
  (this->RefPoseOverride).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ExternalMorphSets).DataPtr =
       (TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
        *)(local_res10->ExternalMorphSets).AllocatorInstance.Data;
  iVar7 = (local_res10->ExternalMorphSets).ArrayNum;
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FSkinnedMeshSceneProxyDynamicData *)(*pcVar2)();
    return pFVar9;
  }
  (this->ExternalMorphSets).ArrayNum = iVar7;
  if (local_res18[0] == (USkinnedMeshComponent *)0x0) {
    plVar17 = &local_res10->_padding_ + (longlong)local_res10->CurrentReadComponentTransforms * 2;
  }
  else {
    plVar17 = &local_res18[0]->_padding_ +
              (longlong)local_res18[0]->CurrentReadComponentTransforms * 2;
  }
  (this->ComponentSpaceTransforms).DataPtr =
       (TTransform<double> *)
       (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(plVar17 + 0xc3))->
       AllocatorInstance).Data;
  iVar7 = *(int *)(plVar17 + 0xc4);
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FSkinnedMeshSceneProxyDynamicData *)(*pcVar2)();
    return pFVar9;
  }
  (this->ComponentSpaceTransforms).ArrayNum = iVar7;
  if (local_res18[0] == (USkinnedMeshComponent *)0x0) {
    if (local_res10->bDoubleBufferedComponentSpaceTransforms == 0) {
      pTVar18 = &local_res10->PreviousComponentSpaceTransformsArray;
    }
    else {
      pTVar18 = local_res10->ComponentSpaceTransformsArray +
                local_res10->CurrentEditableComponentTransforms;
    }
  }
  else if (local_res18[0]->bDoubleBufferedComponentSpaceTransforms == 0) {
    pTVar18 = &local_res18[0]->PreviousComponentSpaceTransformsArray;
  }
  else {
    pTVar18 = local_res18[0]->ComponentSpaceTransformsArray +
              local_res18[0]->CurrentEditableComponentTransforms;
  }
  (this->PreviousComponentSpaceTransforms).DataPtr =
       (TTransform<double> *)(pTVar18->AllocatorInstance).Data;
  iVar7 = pTVar18->ArrayNum;
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FSkinnedMeshSceneProxyDynamicData *)(*pcVar2)();
    return pFVar9;
  }
  (this->PreviousComponentSpaceTransforms).ArrayNum = iVar7;
  if (local_res18[0] == (USkinnedMeshComponent *)0x0) {
    pTVar19 = local_res10->BoneVisibilityStates + local_res10->CurrentReadComponentTransforms;
  }
  else {
    pTVar19 = local_res18[0]->BoneVisibilityStates + local_res18[0]->CurrentReadComponentTransforms;
  }
  (this->BoneVisibilityStates).DataPtr = (uchar *)(pTVar19->AllocatorInstance).Data;
  iVar7 = pTVar19->ArrayNum;
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FSkinnedMeshSceneProxyDynamicData *)(*pcVar2)();
    return pFVar9;
  }
  (this->BoneVisibilityStates).ArrayNum = iVar7;
  if (local_res18[0] == (USkinnedMeshComponent *)0x0) {
    if (local_res10->bDoubleBufferedComponentSpaceTransforms == 0) {
      pTVar19 = &local_res10->PreviousBoneVisibilityStates;
    }
    else {
      pTVar19 = local_res10->BoneVisibilityStates + local_res10->CurrentEditableComponentTransforms;
    }
  }
  else if (local_res18[0]->bDoubleBufferedComponentSpaceTransforms == 0) {
    pTVar19 = &local_res18[0]->PreviousBoneVisibilityStates;
  }
  else {
    pTVar19 = local_res18[0]->BoneVisibilityStates +
              local_res18[0]->CurrentEditableComponentTransforms;
  }
  (this->PreviousBoneVisibilityStates).DataPtr = (uchar *)(pTVar19->AllocatorInstance).Data;
  iVar7 = pTVar19->ArrayNum;
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FSkinnedMeshSceneProxyDynamicData *)(*pcVar2)();
    return pFVar9;
  }
  (this->PreviousBoneVisibilityStates).ArrayNum = iVar7;
  (this->LeaderBoneMap).DataPtr = (int *)(local_res10->LeaderBoneMap).AllocatorInstance.Data;
  iVar7 = (local_res10->LeaderBoneMap).ArrayNum;
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FSkinnedMeshSceneProxyDynamicData *)(*pcVar2)();
    return pFVar9;
  }
  (this->LeaderBoneMap).ArrayNum = iVar7;
  (this->SkinCacheUsage).DataPtr =
       (ESkinCacheUsage *)(local_res10->SkinCacheUsage).AllocatorInstance.Data;
  iVar7 = (local_res10->SkinCacheUsage).ArrayNum;
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FSkinnedMeshSceneProxyDynamicData *)(*pcVar2)();
    return pFVar9;
  }
  pUVar20 = local_res10;
  (this->SkinCacheUsage).ArrayNum = iVar7;
  dVar3 = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Rotation.XY.m128d_f64[0] = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Rotation.ZW.m128d_f64[0] = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Translation.XY.m128d_f64[0] = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Translation.ZW.m128d_f64[0] = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Scale3D.XY.m128d_f64[0] = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Scale3D.ZW.m128d_f64[0] = (double)local_res10->_padding_;
  (this->ComponentWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  pUVar10 = (USkinnedMeshComponent *)
            FWeakObjectPtr::Get(&(local_res10->LeaderPoseComponent).WeakPtr);
  pUVar11 = local_res10;
  if (pUVar10 != (USkinnedMeshComponent *)0x0) {
    pUVar20 = pUVar10;
  }
  this->CurrentBoneTransformRevisionNumber = pUVar20->CurrentBoneTransformRevisionNumber;
  pUVar10 = (USkinnedMeshComponent *)
            FWeakObjectPtr::Get(&(local_res10->LeaderPoseComponent).WeakPtr);
  pUVar20 = local_res10;
  if (pUVar10 != (USkinnedMeshComponent *)0x0) {
    pUVar11 = pUVar10;
  }
  this->PreviousBoneTransformRevisionNumber = pUVar11->PreviousBoneTransformRevisionNumber;
  pUVar11 = (USkinnedMeshComponent *)
            FWeakObjectPtr::Get(&(local_res10->LeaderPoseComponent).WeakPtr);
  if (pUVar11 != (USkinnedMeshComponent *)0x0) {
    pUVar20 = pUVar11;
  }
  this->CurrentBoneTransformFrame = pUVar20->CurrentBoneTransformFrame;
  iVar7 = USkinnedMeshComponent::GetNumLODs(local_res10);
  this->bHasLeaderPoseComponent = '\0';
  this->NumLODs = (ushort)iVar7;
  this->field_0x10e = this->field_0x10e | local_res18[0] != (USkinnedMeshComponent *)0x0;
  pUVar12 = USkinnedMeshComponent::GetMeshDeformerInstance(local_res10);
  bVar15 = -(pUVar12 != (UMeshDeformerInstance *)0x0) & 2U | this->field_0x10e & 0xfd;
  this->bHasMeshDeformerInstance = (byte)-(pUVar12 != (UMeshDeformerInstance *)0x0) >> 1;
  this->field_0x10e = (bVar15 ^ (byte)local_res10->_padding_) & 4 ^ bVar15;
  cVar6 = (**(code **)(local_res10->_padding_ + 0x560))();
  bVar15 = (cVar6 << 3 ^ this->field_0x10e) & 8U ^ this->field_0x10e;
  this->field_0x10e = bVar15;
  if (((local_res10->_padding_ & 0x1000000000000) == 0) ||
     ((local_res10->_padding_ & 0x2000000000000000) == 0)) {
    bVar16 = 0;
  }
  else {
    bVar16 = 0x10;
  }
  bVar16 = bVar15 & 0xef | bVar16;
  this->field_0x10e = bVar16;
  this->field_0x10e =
       (*(char *)((longlong)&local_res10->_padding_ + 6) << 2 ^ bVar16) & 0x20 ^ bVar16;
  if (local_res18[0] != (USkinnedMeshComponent *)0x0) {
    pUVar13 = USkinnedMeshComponent::GetSkinnedAsset(local_res10);
    lVar14 = (**(code **)(*(longlong *)pUVar13 + 800))(pUVar13);
    if ((local_res10->LeaderBoneMap).ArrayNum != *(int *)(lVar14 + 0x28)) {
      local_28 = local_res18;
      local_20 = &local_res10;
      `FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData'::__l2::<lambda_1>::
      operator()(&local_28);
    }
  }
  return this;
}

// FSkinnedMeshSceneProxyDynamicData @ 148693a80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedMeshSceneProxyDynamicData * __thiscall
FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData
          (FSkinnedMeshSceneProxyDynamicData *this,USkinnedMeshComponent *param_1)

{
  USkinnedMeshComponent *pUVar1;
  
  pUVar1 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(param_1->LeaderPoseComponent).WeakPtr);
  FSkinnedMeshSceneProxyDynamicData(this,param_1,pUVar1);
  return this;
}

// FSkinnedMeshSceneProxyDynamicData @ 148693ac0

FSkinnedMeshSceneProxyDynamicData * __thiscall
FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData
          (FSkinnedMeshSceneProxyDynamicData *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  __m128d _Var4;
  
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->RefPoseOverride).Object = (FSkelMeshRefPoseOverride *)0x0;
  (this->RefPoseOverride).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ExternalMorphSets).DataPtr =
       (TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
        *)0x0;
  (this->ExternalMorphSets).ArrayNum = 0;
  (this->ComponentSpaceTransforms).DataPtr = (TTransform<double> *)0x0;
  (this->ComponentSpaceTransforms).ArrayNum = 0;
  (this->PreviousComponentSpaceTransforms).DataPtr = (TTransform<double> *)0x0;
  (this->PreviousComponentSpaceTransforms).ArrayNum = 0;
  (this->BoneVisibilityStates).DataPtr = (uchar *)0x0;
  (this->BoneVisibilityStates).ArrayNum = 0;
  (this->PreviousBoneVisibilityStates).DataPtr = (uchar *)0x0;
  (this->PreviousBoneVisibilityStates).ArrayNum = 0;
  (this->LeaderBoneMap).DataPtr = (int *)0x0;
  (this->LeaderBoneMap).ArrayNum = 0;
  (this->SkinCacheUsage).DataPtr = (ESkinCacheUsage *)0x0;
  (this->SkinCacheUsage).ArrayNum = 0;
  this->ClothSimulDataProvider = (IClothSimulationDataProvider *)0x0;
  this->MeshDeformerInstances = (FMeshDeformerInstanceSet *)0x0;
  *&(this->ComponentWorldTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ComponentWorldTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ComponentWorldTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ComponentWorldTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ComponentWorldTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var4 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  puVar2 = &this->field_0x10e;
  this->bHasLeaderPoseComponent = '\0';
  this->bAffectIndirectLightingWhileHidden = '\0';
  this->bCastsHiddenShadow = '\0';
  this->bDrawInGame = '\x01';
  this->bRenderStateRecreating = '\0';
  this->bHasMeshDeformerInstance = '\0';
  *&(this->ComponentWorldTransform).Scale3D.ZW.m128d_f64 = _Var4.m128d_f64;
  this->CurrentBoneTransformRevisionNumber = 0xffffffff;
  this->PreviousBoneTransformRevisionNumber = 0xffffffff;
  this->CurrentBoneTransformFrame = 0xffffffff;
  this->NumLODs = 0xffff;
  return this;
}

// GetExternalMorphSets @ 1486be7d0

TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
* __thiscall
FSkinnedMeshSceneProxyDynamicData::GetExternalMorphSets
          (FSkinnedMeshSceneProxyDynamicData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
  *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->ExternalMorphSets).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (this->ExternalMorphSets).DataPtr + (int)param_1;
}

// GetMeshDeformerInstanceForLOD @ 1486c1850

UMeshDeformerInstance * __thiscall
FSkinnedMeshSceneProxyDynamicData::GetMeshDeformerInstanceForLOD
          (FSkinnedMeshSceneProxyDynamicData *this,int param_1)

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
                             ,0x1b3,L""), bVar4)) {
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

// GetMeshDeformerMaxLOD @ 1486c1990

int __thiscall
FSkinnedMeshSceneProxyDynamicData::GetMeshDeformerMaxLOD(FSkinnedMeshSceneProxyDynamicData *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  
  pTVar2 = CVarMeshDeformerMaxLod.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
  }
  iVar4 = pTVar2->ShadowedValue[0];
  if (iVar4 < 0) {
    iVar4 = this->NumLODs - 1;
  }
  return iVar4;
}

// IsSkinCacheAllowed @ 1486d1ec0

bool __thiscall
FSkinnedMeshSceneProxyDynamicData::IsSkinCacheAllowed
          (FSkinnedMeshSceneProxyDynamicData *this,int param_1,USkinnedAsset *param_2)

{
  ESkinCacheDefaultBehavior EVar1;
  bool bVar2;
  longlong lVar3;
  ESkinCacheUsage *pEVar4;
  bool bVar5;
  
  EVar1 = GetSkinCacheDefaultBehavior();
  bVar5 = EVar1 == Inclusive;
  if ((GEnableGPUSkinCache == 0) || (this->bHasMeshDeformerInstance != '\0')) {
    bVar5 = false;
  }
  else if (param_2 != (USkinnedAsset *)0x0) {
    lVar3 = (**(code **)(*(longlong *)param_2 + 0x398))(param_2);
    if ((((lVar3 == 0) || (*(char *)(lVar3 + 0x1e) == '\0')) ||
        (bVar2 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported(), !bVar2)) ||
       (bVar2 = IsRayTracingEnabled(), !bVar2)) {
      lVar3 = (**(code **)(*(longlong *)param_2 + 0x328))(param_2,param_1);
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0xb8) != '\0') {
          bVar5 = *(char *)(lVar3 + 0xb8) == '\x01';
        }
        if (((-1 < param_1) && (param_1 < (this->SkinCacheUsage).ArrayNum)) &&
           (pEVar4 = TArrayView<enum_ESkinCacheUsage_const_,int>::operator[]
                               (&this->SkinCacheUsage,param_1), *pEVar4 != Auto)) {
          pEVar4 = TArrayView<enum_ESkinCacheUsage_const_,int>::operator[]
                             (&this->SkinCacheUsage,param_1);
          bVar5 = *pEVar4 == Enabled;
        }
      }
    }
    else {
      bVar5 = true;
    }
  }
  return bVar5;
}

// IsValidExternalMorphSetLODIndex @ 1486d24d0

bool __thiscall
FSkinnedMeshSceneProxyDynamicData::IsValidExternalMorphSetLODIndex
          (FSkinnedMeshSceneProxyDynamicData *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (this->ExternalMorphSets).ArrayNum)) {
    return true;
  }
  return false;
}

// operator() @ 15052e800

bool __thiscall
`FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  bool bVar8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar8 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3308713187020373547>);
  if (bVar5) {
    if ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_38,"NULL");
      bVar4 = false;
      bVar3 = true;
    }
    else {
      pFVar7 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8),&local_28,
                          (UObject *)0x0,None);
      if ((pFVar7->Data).ArrayNum == 0) {
        bVar4 = true;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = false;
      }
    }
    bVar8 = (UObjectBaseUtility *)**(undefined8 **)this == (UObjectBaseUtility *)0x0;
    if (bVar8) {
      ::FString::FString(&local_58,"NULL");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)**(undefined8 **)this,&local_48,(UObject *)0x0,None);
    }
    bVar2 = !bVar8;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3308713187020373547>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15052e92a;
    }
  }
  bVar5 = false;
LAB_15052e92a:
  if ((bVar8) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

