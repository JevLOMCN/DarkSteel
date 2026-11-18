// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// BuildBoneTransforms @ 1486a7160

void __thiscall
FDynamicSkelMeshObjectDataNanite::BuildBoneTransforms
          (FDynamicSkelMeshObjectDataNanite *this,FDynamicSkelMeshObjectDataNanite *param_1)

{
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if ((this->PreviousReferenceToLocal).ArrayNum == 0) {
    if ((this->PreviousBoneTransformUpdateMode != DuplicateCurrentToPrevious) &&
       (param_1 != (FDynamicSkelMeshObjectDataNanite *)0x0)) {
      pTVar5 = &param_1->ReferenceToLocal;
      pTVar1 = &this->PreviousReferenceToLocal;
      if (pTVar1 != pTVar5) {
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->PreviousReferenceToLocal).ArrayNum = (param_1->ReferenceToLocal).ArrayNum;
        (this->PreviousReferenceToLocal).ArrayMax = (param_1->ReferenceToLocal).ArrayMax;
        (param_1->ReferenceToLocal).ArrayNum = 0;
        (param_1->ReferenceToLocal).ArrayMax = 0;
      }
      this->PreviousRevisionNumber = param_1->RevisionNumber;
      return;
    }
    pTVar5 = &this->PreviousReferenceToLocal;
    if (pTVar5 != &this->ReferenceToLocal) {
      iVar3 = (this->ReferenceToLocal).ArrayNum;
      piVar2 = &(this->PreviousReferenceToLocal).ArrayMax;
      pFVar4 = (this->ReferenceToLocal).AllocatorInstance.Data;
      (this->PreviousReferenceToLocal).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,iVar3,*piVar2,&pTVar5->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 6);
      }
    }
  }
  return;
}

// GetResourceSizeEx @ 1486c6630

void __thiscall
FDynamicSkelMeshObjectDataNanite::GetResourceSizeEx
          (FDynamicSkelMeshObjectDataNanite *this,FResourceSizeEx *param_1)

{
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x78);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->ReferenceToLocal).ArrayMax << 6);
  return;
}

// Init @ 1486cb7a0

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
FDynamicSkelMeshObjectDataNanite::Init
          (FDynamicSkelMeshObjectDataNanite *this,FSkinnedMeshSceneProxyDynamicData *param_1,
          USkinnedAsset *param_2,FSkeletalMeshRenderData *param_3,int param_4,
          EPreviousBoneTransformUpdateMode param_5,FSkeletalMeshObjectNanite *param_6)

{
  int *piVar1;
  TTransform<double> *_Src;
  byte bVar2;
  int iVar3;
  byte bVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  
  this->LODIndex = param_4;
  this->PreviousBoneTransformUpdateMode = param_5;
  iVar6 = (param_3->LODRenderData).Array.ArrayNum + -1;
  iVar3 = *(int *)&param_6->field_0x3c;
  if (*(int *)&param_6->field_0x3c < param_4) {
    iVar3 = param_4;
  }
  if (iVar3 < iVar6) {
    iVar6 = iVar3;
  }
  if (param_4 < iVar6) {
    param_4 = iVar6;
  }
  this->RayTracingLODIndex = param_4;
  bVar4 = ((byte)param_1->field_0x10e >> 1 ^ this->field_0x68) & 4 ^ this->field_0x68;
  this->field_0x68 = bVar4;
  if (((bVar4 & 4) == 0) &&
     (param_1->bCastsHiddenShadow == '\0' && param_1->bAffectIndirectLightingWhileHidden == '\0')) {
    bVar2 = 0;
  }
  else {
    bVar2 = 2;
  }
  pTVar5 = &this->ComponentSpaceTransforms;
  piVar1 = &(this->ComponentSpaceTransforms).ArrayMax;
  this->field_0x68 = bVar4 & 0xfd | bVar2;
  iVar3 = (param_1->ComponentSpaceTransforms).ArrayNum;
  _Src = (param_1->ComponentSpaceTransforms).DataPtr;
  (this->ComponentSpaceTransforms).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar3,*piVar1,&pTVar5->AllocatorInstance,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((pTVar5->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x60);
    }
  }
  if ((this->ComponentSpaceTransforms).ArrayNum != 0) {
    pTVar5 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
  }
  if (((this->bNeedsBoneTransformsCurrent != '\0') || (this->LODIndex == this->RayTracingLODIndex))
     && (UpdateRefToLocalMatrices
                   (&this->ReferenceToLocal,param_1,param_2,param_3,this->LODIndex,
                    (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0,pTVar5),
        this->bNeedsBoneTransformsCurrent != '\0')) {
    UpdateBonesRemovedByLOD(this,param_6,&this->ReferenceToLocal,param_1,param_2,Current);
  }
  if (this->RayTracingLODIndex != this->LODIndex) {
    UpdateRefToLocalMatrices
              (&this->ReferenceToLocalForRayTracing,param_1,param_2,param_3,this->RayTracingLODIndex
               ,(TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0,
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0);
  }
  if ((this->bNeedsBoneTransformsPrevious != '\0') &&
     (this->PreviousBoneTransformUpdateMode == UpdatePrevious)) {
    UpdatePreviousRefToLocalMatrices
              (&this->PreviousReferenceToLocal,param_1,param_2,param_3,this->LODIndex,
               (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0);
    UpdateBonesRemovedByLOD(this,param_6,&this->PreviousReferenceToLocal,param_1,param_2,Previous);
  }
  this->BoneTransformFrameNumber = (uint)GFrameCounter;
  this->RevisionNumber = param_1->CurrentBoneTransformRevisionNumber;
  this->PreviousRevisionNumber = param_1->PreviousBoneTransformRevisionNumber;
  this->field_0x68 = this->field_0x68 ^ (param_1->bRenderStateRecreating ^ this->bRecreating) & 1;
  return;
}

// Init @ 1486cb9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FDynamicSkelMeshObjectDataNanite::Init
          (FDynamicSkelMeshObjectDataNanite *this,USkinnedMeshComponent *param_1,
          FSkeletalMeshRenderData *param_2,int param_3,EPreviousBoneTransformUpdateMode param_4,
          FSkeletalMeshObjectNanite *param_5)

{
  USkinnedAsset *pUVar1;
  USkinnedMeshComponent *pUVar2;
  undefined1 auStackY_188 [32];
  FSkinnedMeshSceneProxyDynamicData local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = USkinnedMeshComponent::GetSkinnedAsset(param_1);
  pUVar2 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(param_1->LeaderPoseComponent).WeakPtr);
  FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData(&local_148,param_1,pUVar2);
  Init(this,&local_148,pUVar1,param_2,param_3,param_4,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.RefPoseOverride.SharedReferenceCount.ReferenceController);
  return;
}

// Reset @ 1486e9c80

int __thiscall FDynamicSkelMeshObjectDataNanite::Reset(FDynamicSkelMeshObjectDataNanite *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  (this->ComponentSpaceTransforms).ArrayNum = 0;
  if ((this->ComponentSpaceTransforms).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->ComponentSpaceTransforms).AllocatorInstance,0,
               &(this->ComponentSpaceTransforms).ArrayMax);
  }
  iVar2 = (this->ComponentSpaceTransforms).ArrayMax;
  piVar1 = &(this->PreviousReferenceToLocal).ArrayMax;
  (this->PreviousReferenceToLocal).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->PreviousReferenceToLocal).AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->PreviousReferenceToLocal).ArrayMax;
  (this->ReferenceToLocal).ArrayNum = 0;
  if ((this->ReferenceToLocal).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->ReferenceToLocal).AllocatorInstance,0,
               &(this->ReferenceToLocal).ArrayMax);
  }
  return ((this->ReferenceToLocal).ArrayMax + iVar3) * 0x40 + iVar2 * 0x60 + 0x78;
}

// UpdateBonesRemovedByLOD @ 1486f4790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FDynamicSkelMeshObjectDataNanite::UpdateBonesRemovedByLOD
          (FDynamicSkelMeshObjectDataNanite *this,FSkeletalMeshObjectNanite *param_1,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_2,
          FSkinnedMeshSceneProxyDynamicData *param_3,USkinnedAsset *param_4,
          ETransformsToUpdate param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FReferenceSkeleton *this_00;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  uint *puVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  ForAnyElementType FVar31;
  FName *pFVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStackY_2c8 [32];
  undefined1 local_278 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_270;
  uint local_260;
  int local_25c;
  longlong local_258;
  longlong *local_250;
  FName *local_248;
  FReferenceSkeleton *local_240;
  int iStack_238;
  undefined4 uStack_234;
  FScriptContainerElement *local_230;
  FName *local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  TMatrix<float> local_1e8;
  TMatrix<float> local_1a8;
  TMatrix<float> local_168;
  TMatrix<float> local_128;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  iVar30 = this->LODIndex;
  if ((param_4 != (param_1->BonesToRemoveCache).SkinnedAsset) ||
     (iVar30 != (param_1->BonesToRemoveCache).LODIndex)) {
    (param_1->BonesToRemoveCache).SkinnedAsset = param_4;
    (param_1->BonesToRemoveCache).LODIndex = iVar30;
    lVar24 = (**(code **)(*(longlong *)param_4 + 0x328))(param_4);
    local_240 = *(FReferenceSkeleton **)(lVar24 + 0x70);
    iStack_238 = *(int *)(lVar24 + 0x78);
    if ((iStack_238 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (param_1->BonesToRemoveCache).BonesToRemove.DataPtr = (FBoneReference *)local_240;
    *(ulonglong *)&(param_1->BonesToRemoveCache).BonesToRemove.ArrayNum =
         CONCAT44(uStack_234,iStack_238);
  }
  local_220 = *(undefined4 *)&(param_1->BonesToRemoveCache).BonesToRemove.DataPtr;
  uStack_21c = *(undefined4 *)((longlong)&(param_1->BonesToRemoveCache).BonesToRemove.DataPtr + 4);
  iStack_218 = (param_1->BonesToRemoveCache).BonesToRemove.ArrayNum;
  uStack_214 = *(undefined4 *)&(param_1->BonesToRemoveCache).BonesToRemove.field_0xc;
  iVar30 = (int)*(undefined8 *)&(param_1->BonesToRemoveCache).BonesToRemove.ArrayNum;
  if (iVar30 == 0) {
    return;
  }
  if (param_5 == Current) {
    uVar33 = *(undefined4 *)&(param_3->ComponentSpaceTransforms).DataPtr;
    uVar34 = *(undefined4 *)((longlong)&(param_3->ComponentSpaceTransforms).DataPtr + 4);
    local_25c = (param_3->ComponentSpaceTransforms).ArrayNum;
  }
  else {
    if (param_5 != Previous) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                          ,0xba,L"");
      if (bVar22) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_258 = 0;
      local_25c = 0;
      goto LAB_1486f48d1;
    }
    uVar33 = *(undefined4 *)&(param_3->PreviousComponentSpaceTransforms).DataPtr;
    uVar34 = *(undefined4 *)((longlong)&(param_3->PreviousComponentSpaceTransforms).DataPtr + 4);
    local_25c = (param_3->PreviousComponentSpaceTransforms).ArrayNum;
  }
  local_258 = CONCAT44(uVar34,uVar33);
LAB_1486f48d1:
  iVar28 = local_25c;
  plVar25 = (longlong *)(**(code **)(*(longlong *)param_4 + 0x378))(param_4);
  local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.ArrayNum = 0;
  local_270.ArrayMax = 0;
  local_250 = plVar25;
  local_240 = (FReferenceSkeleton *)(**(code **)(*(longlong *)param_4 + 0x318))(param_4);
  pFVar32 = (FName *)CONCAT44(uStack_21c,local_220);
  local_228 = pFVar32 + (longlong)iVar30 * 2;
  local_248 = pFVar32;
  if (pFVar32 != local_228) {
    do {
      this_00 = local_240;
      bVar22 = (longlong)local_270._8_8_ < 0;
      local_270.ArrayNum = 0;
      local_248 = pFVar32;
      if (bVar22) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_270.AllocatorInstance,0,&local_270.ArrayMax);
      }
      uVar29 = 0xffffffff;
      if ((*pFVar32 != (FName)0x0) &&
         (puVar26 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                    *)&this_00->FinalNameToIndexMap,*pFVar32),
         puVar26 != (uint *)0x0)) {
        uVar29 = *puVar26;
      }
      uVar29 = uVar29 & 0xffff;
      local_260 = uVar29;
      if (((local_270.AllocatorInstance.Data <= (FScriptContainerElement *)&local_260) &&
          ((FScriptContainerElement *)&local_260 <
           local_270.AllocatorInstance.Data + (longlong)local_270.ArrayMax * 4)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_270.ArrayNum == local_270.ArrayMax) {
        local_270.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_270.AllocatorInstance,&local_270.ArrayMax);
      }
      lVar24 = (longlong)local_270.ArrayNum;
      local_270.ArrayNum = local_270.ArrayNum + 1;
      *(uint *)(local_270.AllocatorInstance.Data + lVar24 * 4) = local_260;
      FReferenceSkeleton::GetRawChildrenIndicesRecursiveCached(this_00,uVar29,&local_270);
      uVar29 = 0;
      iVar30 = local_270.ArrayNum;
      if (0 < local_270.ArrayNum) {
        lVar24 = 0;
        do {
          uVar23 = 0;
          if ((int)uVar29 < local_270.ArrayNum) {
            uVar23 = ~uVar29 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar5 = *(ushort *)(local_270.AllocatorInstance.Data + lVar24);
          uVar23 = FReferenceSkeleton::GetParentIndexInternal
                             (this_00,(uint)uVar5,&this_00->FinalRefBoneInfo);
          uVar23 = uVar23 & 0xffff;
          if (uVar29 == 0) {
            if ((iVar28 <= (int)uVar23) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar22)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar33 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
            uVar42 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
            uVar43 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
            uVar44 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
            uVar34 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
            uVar45 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
            lVar27 = (longlong)(int)uVar23 * 0x60;
            pdVar1 = (double *)(lVar27 + 0x10 + local_258);
            local_1f8 = *pdVar1;
            dStack_1f0 = pdVar1[1];
            dVar8 = *(double *)(lVar27 + local_258);
            dVar13 = ((double *)(lVar27 + local_258))[1];
            auVar39 = *(undefined1 (*) [16])(lVar27 + 0x50 + local_258);
            dVar11 = *(double *)(lVar27 + local_258);
            auVar4 = *(undefined1 (*) [16])(lVar27 + 0x40 + local_258);
            dVar12 = dVar13 + dVar13;
            dVar37 = local_1f8 + local_1f8;
            dVar9 = (dVar8 + dVar8) * dVar8;
            pdVar1 = (double *)(lVar27 + 0x20 + local_258);
            local_208 = *(undefined8 *)(lVar27 + local_258);
            uStack_200 = ((undefined8 *)(lVar27 + local_258))[1];
            pdVar2 = (double *)(lVar27 + 0x40 + local_258);
            dVar8 = dStack_1f0 * (dVar8 + dVar8);
            dVar35 = dVar12 * dVar11;
            dVar36 = dVar37 * ((double *)(lVar27 + local_258))[1];
            pdVar3 = (double *)(lVar27 + 0x40 + local_258);
            auVar38 = blendpd(auVar4,auVar39,2);
            dVar11 = dVar11 * dVar37;
            dVar10 = auVar39._0_8_;
            local_1e8.M[0][1] = (float)((dStack_1f0 * dVar37 + dVar35) * *pdVar3);
            local_1e8.M[0][0] =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                         (dVar37 * local_1f8 + dVar12 * dVar13)) * *pdVar2);
            local_1e8.M[0][2] = (float)(auVar38._0_8_ * (dVar11 - dVar12 * dStack_1f0));
            local_1e8.M[0][3] = 0.0;
            local_1e8.M[1][1] =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                         (dVar37 * local_1f8 + dVar9)) * pdVar2[1]);
            local_1e8.M[1][0] = (float)(auVar4._8_8_ * (dVar35 - dStack_1f0 * dVar37));
            local_1e8.M[1][2] = (float)((dVar8 + dVar36) * pdVar3[1]);
            local_1e8.M[1][3] = 0.0;
            uVar40 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            uVar41 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            local_1e8.M[2][1] = (float)(dVar10 * (dVar36 - dVar8));
            local_1e8.M[2][0] = (float)((dVar12 * dStack_1f0 + dVar11) * dVar10);
            local_1e8.M[2][2] =
                 (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                         (dVar9 + dVar12 * dVar13)) * dVar10);
            local_1e8.M[2][3] = 0.0;
            local_1e8.M[3][1] = (float)pdVar1[1];
            local_1e8.M[3][0] = (float)*pdVar1;
            local_1e8.M[3][3] = (float)GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
            local_1e8.M[3][2] = (float)*(double *)(lVar27 + 0x30 + local_258);
          }
          else {
            if ((param_2->ArrayNum <= (int)uVar23) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar6 = (param_2->AllocatorInstance).Data;
            uVar34 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
            uVar45 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
            uVar33 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
            uVar42 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
            uVar43 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
            uVar44 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
            uVar40 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            uVar41 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            lVar27 = (ulonglong)uVar23 * 0x40;
            local_1e8.M[0] = *(float (*) [4])(pFVar6 + lVar27);
            local_1e8.M[1] = *(float (*) [4])(pFVar6 + lVar27 + 0x10);
            local_1e8.M[2] = *(float (*) [4])(pFVar6 + lVar27 + 0x20);
            local_1e8.M[3]._0_8_ = *(undefined8 *)(pFVar6 + lVar27 + 0x30);
            local_1e8.M[3]._8_8_ = *(undefined8 *)(pFVar6 + lVar27 + 0x30 + 8);
          }
          if ((this_00->FinalRefBonePose).ArrayNum <= (int)(uint)uVar5) {
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar22) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar40 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            uVar41 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            uVar33 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
            uVar42 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
            uVar43 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
            uVar44 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
            uVar34 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
            uVar45 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
          }
          pFVar6 = (this_00->FinalRefBonePose).AllocatorInstance.Data;
          lVar27 = (ulonglong)uVar5 * 0x60;
          local_1f8 = *(double *)(pFVar6 + lVar27 + 0x10);
          dStack_1f0 = *(double *)(pFVar6 + lVar27 + 0x10 + 8);
          dVar8 = *(double *)(pFVar6 + lVar27);
          dVar13 = *(double *)(pFVar6 + lVar27 + 8);
          dVar11 = *(double *)(pFVar6 + lVar27);
          dVar12 = dVar13 + dVar13;
          dVar37 = local_1f8 + local_1f8;
          dVar9 = (dVar8 + dVar8) * dVar8;
          local_208 = *(undefined8 *)(pFVar6 + lVar27);
          uStack_200 = *(undefined8 *)(pFVar6 + lVar27 + 8);
          dVar8 = dStack_1f0 * (dVar8 + dVar8);
          dVar35 = dVar12 * dVar11;
          dVar36 = dVar37 * *(double *)(pFVar6 + lVar27 + 8);
          auVar39 = blendpd(*(undefined1 (*) [16])(pFVar6 + lVar27 + 0x40),
                            *(undefined1 (*) [16])(pFVar6 + lVar27 + 0x50),2);
          dVar11 = dVar11 * dVar37;
          dVar10 = SUB168(*(undefined1 (*) [16])(pFVar6 + lVar27 + 0x50),0);
          local_1a8.M[0][1] =
               (float)((dStack_1f0 * dVar37 + dVar35) * *(double *)(pFVar6 + lVar27 + 0x40));
          local_1a8.M[0][0] =
               (float)(((double)CONCAT44(uVar42,uVar33) - (dVar37 * local_1f8 + dVar12 * dVar13)) *
                      *(double *)(pFVar6 + lVar27 + 0x40));
          local_1a8.M[0][2] = (float)(auVar39._0_8_ * (dVar11 - dVar12 * dStack_1f0));
          local_1a8.M[0][3] = 0.0;
          local_1a8.M[1][1] =
               (float)(((double)CONCAT44(uVar44,uVar43) - (dVar37 * local_1f8 + dVar9)) *
                      *(double *)(pFVar6 + lVar27 + 0x40 + 8));
          local_1a8.M[1][0] =
               (float)(SUB168(*(undefined1 (*) [16])(pFVar6 + lVar27 + 0x40),8) *
                      (dVar35 - dStack_1f0 * dVar37));
          local_1a8.M[1][2] = (float)((dVar8 + dVar36) * *(double *)(pFVar6 + lVar27 + 0x40 + 8));
          local_1a8.M[1][3] = 0.0;
          local_1a8.M[3][0] = (float)*(double *)(pFVar6 + lVar27 + 0x20);
          local_1a8.M[3][1] = (float)*(double *)(pFVar6 + lVar27 + 0x20 + 8);
          local_1a8.M[3][2] = (float)*(double *)(pFVar6 + lVar27 + 0x30);
          local_1a8.M[3][3] = (float)(double)CONCAT44(uVar41,uVar40);
          local_1a8.M[2][1] = (float)(dVar10 * (dVar36 - dVar8));
          local_1a8.M[2][0] = (float)((dVar12 * dStack_1f0 + dVar11) * dVar10);
          local_1a8.M[2][2] =
               (float)(((double)CONCAT44(uVar45,uVar34) - (dVar9 + dVar12 * dVar13)) * dVar10);
          local_1a8.M[2][3] = 0.0;
          VectorMatrixMultiply(&local_168,&local_1a8,&local_1e8);
          uVar21 = local_168.M[3]._8_8_;
          uVar20 = local_168.M[3]._0_8_;
          uVar19 = local_168.M[2]._8_8_;
          uVar18 = local_168.M[2]._0_8_;
          uVar17 = local_168.M[1]._8_8_;
          uVar16 = local_168.M[1]._0_8_;
          uVar15 = local_168.M[0]._8_8_;
          uVar14 = local_168.M[0]._0_8_;
          if ((param_2->ArrayNum <= (int)(uint)uVar5) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (param_2->AllocatorInstance).Data;
          uVar29 = uVar29 + 1;
          lVar27 = (ulonglong)uVar5 * 0x40;
          lVar24 = lVar24 + 4;
          *(undefined8 *)(pFVar6 + lVar27) = uVar14;
          *(undefined8 *)(pFVar6 + lVar27 + 8) = uVar15;
          *(undefined8 *)(pFVar6 + lVar27 + 0x10) = uVar16;
          *(undefined8 *)(pFVar6 + lVar27 + 0x10 + 8) = uVar17;
          *(undefined8 *)(pFVar6 + lVar27 + 0x20) = uVar18;
          *(undefined8 *)(pFVar6 + lVar27 + 0x20 + 8) = uVar19;
          *(undefined8 *)(pFVar6 + lVar27 + 0x30) = uVar20;
          *(undefined8 *)(pFVar6 + lVar27 + 0x30 + 8) = uVar21;
          plVar25 = local_250;
          iVar30 = local_270.ArrayNum;
        } while ((int)uVar29 < local_270.ArrayNum);
      }
      local_230 = local_270.AllocatorInstance.Data + (longlong)iVar30 * 4;
      FVar31.Data = local_270.AllocatorInstance.Data;
      iVar28 = iVar30;
      while( true ) {
        pFVar6 = local_230;
        if (iVar28 != iVar30) {
          local_278[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_278);
        }
        if (FVar31.Data == pFVar6) break;
        uVar5 = *(ushort *)FVar31.Data;
        if (((int)plVar25[1] <= (int)(uint)uVar5) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar24 = *plVar25;
        lVar27 = (ulonglong)uVar5 * 0x40;
        if ((param_2->ArrayNum <= (int)(uint)uVar5) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        VectorMatrixMultiply
                  (&local_128,(TMatrix<float> *)(lVar24 + lVar27),
                   (TMatrix<float> *)((param_2->AllocatorInstance).Data + lVar27));
        uVar21 = local_128.M[3]._8_8_;
        uVar20 = local_128.M[3]._0_8_;
        uVar19 = local_128.M[2]._8_8_;
        uVar18 = local_128.M[2]._0_8_;
        uVar17 = local_128.M[1]._8_8_;
        uVar16 = local_128.M[1]._0_8_;
        uVar15 = local_128.M[0]._8_8_;
        uVar14 = local_128.M[0]._0_8_;
        if ((param_2->ArrayNum <= (int)(uint)uVar5) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_2->AllocatorInstance).Data;
        FVar31.Data = FVar31.Data + 4;
        *(undefined8 *)(pFVar6 + lVar27) = uVar14;
        *(undefined8 *)(pFVar6 + lVar27 + 8) = uVar15;
        *(undefined8 *)(pFVar6 + lVar27 + 0x10) = uVar16;
        *(undefined8 *)(pFVar6 + lVar27 + 0x10 + 8) = uVar17;
        *(undefined8 *)(pFVar6 + lVar27 + 0x20) = uVar18;
        *(undefined8 *)(pFVar6 + lVar27 + 0x20 + 8) = uVar19;
        *(undefined8 *)(pFVar6 + lVar27 + 0x30) = uVar20;
        *(undefined8 *)(pFVar6 + lVar27 + 0x30 + 8) = uVar21;
        plVar25 = local_250;
        iVar28 = local_270.ArrayNum;
      }
      pFVar32 = local_248 + 2;
      local_248 = pFVar32;
      iVar28 = local_25c;
    } while (pFVar32 != local_228);
  }
  if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.AllocatorInstance.Data);
  }
  return;
}

