// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// ActiveMorphTargetsEqual @ 14862ca80

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FDynamicSkelMeshObjectDataGPUSkin::ActiveMorphTargetsEqual
          (FDynamicSkelMeshObjectDataGPUSkin *this,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  undefined1 local_res8 [8];
  TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
  *local_res10;
  TArray<float,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  
  iVar20 = *(int *)&(this->ActiveMorphTargets).field_0x8 -
           *(int *)&(this->ActiveMorphTargets).field_0x34;
  if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != iVar20) {
    return false;
  }
  puVar1 = &(this->ActiveMorphTargets).field_0x10;
  iVar17 = 0;
  iVar3 = *(int *)&(this->ActiveMorphTargets).field_0x28;
  iVar19 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->ActiveMorphTargets).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar16 = *puVar13;
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14862cb4d;
      uVar16 = puVar13[lVar14 + 1];
    }
    uVar10 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    iVar11 = iVar19 + -1 + local_res20;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14862cb4d:
  uVar16 = *(uint *)&(this->ActiveMorphTargets).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar10,iVar17);
  TStack_88.CurrentBitIndex = iVar11;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  TStack_88._28_4_ = iVar11;
  TStack_88.BaseBitIndex = iVar19;
  uStack_68 = CONCAT44(uStack_94,iVar20);
  iVar20 = (int)uVar16 >> 5;
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar10 = *(uint *)&(this->ActiveMorphTargets).field_0x28;
  if (uVar16 != uVar10) {
    puVar18 = *(undefined1 **)&(this->ActiveMorphTargets).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar20 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar20;
      uVar15 = uVar15 + 0x20;
      iVar20 = iVar20 + 1;
      uVar16 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14862cc60;
      uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = (int)lVar14 + -1 + uVar15;
    if ((int)uVar10 < (int)uVar16) {
      uVar16 = uVar10;
    }
  }
LAB_14862cc60:
  while( true ) {
    if (*(int *)&(this->ActiveMorphTargets).field_0x8 -
        *(int *)&(this->ActiveMorphTargets).field_0x34 != (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UMorphTarget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_88.CurrentBitIndex == uVar16) &&
       (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return true;
    }
    uVar10 = *(uint *)(*(longlong *)&this->ActiveMorphTargets + 8 +
                      (longlong)TStack_88.CurrentBitIndex * 0x18);
    puVar13 = (uint *)TMapBase<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
                      ::Find((TMapBase<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
                              *)local_res10,
                             *(UMorphTarget **)
                              (*(longlong *)&this->ActiveMorphTargets +
                              (longlong)TStack_88.CurrentBitIndex * 0x18));
    if (puVar13 == (uint *)0x0) {
      return false;
    }
    uVar15 = 0;
    if ((int)uVar10 < (this->MorphTargetWeights).ArrayNum) {
      uVar15 = ~uVar10 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    pTVar7 = local_res18;
    pFVar4 = (this->MorphTargetWeights).AllocatorInstance.Data;
    uVar15 = *puVar13;
    uVar12 = 0;
    if ((int)uVar15 < local_res18->ArrayNum) {
      uVar12 = ~uVar15 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    if (GMorphTargetWeightThreshold <=
        (float)((uint)(*(float *)(pFVar4 + (longlong)(int)uVar10 * 4) -
                      *(float *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar15 * 4)) &
               uVar6)) {
      return false;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  pcVar5 = (code *)swi(3);
  uVar9 = (*pcVar5)();
  return (bool)uVar9;
}

// BuildBoneTransforms @ 14862f9f0

void __thiscall
FDynamicSkelMeshObjectDataGPUSkin::BuildBoneTransforms
          (FDynamicSkelMeshObjectDataGPUSkin *this,FDynamicSkelMeshObjectDataGPUSkin *param_1)

{
  return;
}

// GetLODIndex @ 14864b3e0

int __thiscall
FDynamicSkelMeshObjectDataGPUSkin::GetLODIndex
          (FDynamicSkelMeshObjectDataGPUSkin *this,EGPUSkinCacheEntryMode param_1)

{
  if (param_1 == RayTracing) {
    return this->RayTracingLODIndex;
  }
  return this->LODIndex;
}

// GetPreviousReferenceToLocal @ 14864ca20

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FDynamicSkelMeshObjectDataGPUSkin::GetPreviousReferenceToLocal
          (FDynamicSkelMeshObjectDataGPUSkin *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__,
          EGPUSkinCacheEntryMode param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *pTVar4;
  longlong lVar5;
  
  if ((param_1 != RayTracing) || (lVar5 = 0x48, this->RayTracingLODIndex == this->LODIndex)) {
    lVar5 = 0x38;
  }
  iVar1 = *(int *)(&this->field_0x8 + lVar5);
  __return_storage_ptr__->DataPtr = *(TMatrix<float> **)(&this->field_0x0 + lVar5);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UE::Math::TMatrix<float>_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetReferenceToLocal @ 14864cf60

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FDynamicSkelMeshObjectDataGPUSkin::GetReferenceToLocal
          (FDynamicSkelMeshObjectDataGPUSkin *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__,
          EGPUSkinCacheEntryMode param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *pTVar4;
  longlong lVar5;
  
  if ((param_1 != RayTracing) || (lVar5 = 0x28, this->RayTracingLODIndex == this->LODIndex)) {
    lVar5 = 0x18;
  }
  iVar1 = *(int *)(&this->field_0x8 + lVar5);
  __return_storage_ptr__->DataPtr = *(TMatrix<float> **)(&this->field_0x0 + lVar5);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UE::Math::TMatrix<float>_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// InitDynamicSkelMeshObjectDataGPUSkin @ 148653530

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicSkelMeshObjectDataGPUSkin::InitDynamicSkelMeshObjectDataGPUSkin
          (FDynamicSkelMeshObjectDataGPUSkin *this,FSkinnedMeshSceneProxyDynamicData *param_1,
          FPrimitiveSceneProxy *param_2,USkinnedAsset *param_3,FSkeletalMeshRenderData *param_4,
          FSkeletalMeshObjectGPUSkin *param_5,int param_6,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_7,TArray<float,TSizedDefaultAllocator<32>_> *param_8,
          EPreviousBoneTransformUpdateMode param_9,FExternalMorphWeightData *param_10)

{
  FExternalMorphWeightData *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  ulonglong uVar1;
  byte bVar2;
  EPreviousBoneTransformUpdateMode EVar3;
  IClothSimulationDataProvider *pIVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  uint uVar11;
  TConsoleVariableData<bool> *pTVar12;
  TConsoleVariableData<int> *pTVar13;
  TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
  *pTVar14;
  FSkeletalMeshObjectGPUSkin *pFVar15;
  FPrimitiveSceneProxy *pFVar16;
  bool bVar17;
  ESkeletalMeshGPUSkinTechnique EVar18;
  char cVar19;
  int iVar20;
  TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
  *pTVar21;
  longlong *plVar22;
  TMatrix<double> *pTVar23;
  UMeshDeformerInstance *pUVar24;
  IConsoleManager *pIVar25;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar33;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar34;
  longlong lVar35;
  undefined1 *puVar36;
  uint *puVar37;
  TBitArray<FDefaultBitArrayAllocator> *pTVar38;
  uint uVar39;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar40;
  FSkinnedMeshSceneProxyDynamicData *pFVar41;
  float fVar42;
  float fVar43;
  byte local_2a8;
  undefined1 local_2a7 [7];
  FSkinnedMeshSceneProxyDynamicData *local_2a0;
  longlong *local_298;
  uint local_290 [2];
  TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
  *local_288;
  FSkeletalMeshObjectGPUSkin *local_280;
  FPrimitiveSceneProxy *local_278;
  int local_270;
  int local_26c;
  TPairInitializer<UMorphTarget_const_*_const_&,int_const_&> local_268;
  TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
  *local_258;
  int iStack_250;
  uint uStack_24c;
  undefined1 *local_248;
  undefined4 uStack_240;
  int iStack_23c;
  int local_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
  *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  longlong **local_1f8;
  uint *local_1f0;
  TArrayView<unsigned_char_const_,int> local_1e8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_1d8;
  TArrayView<unsigned_char_const_,int> local_1c8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_1b8;
  TArrayView<unsigned_char_const_,int> local_1a8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_198;
  FString local_188;
  TTransform<double> local_178;
  undefined4 local_fc;
  TMatrix<double> local_f8;
  
  local_288 = param_7;
  local_280 = param_5;
  this->BoneTransformFrameNumber = param_1->CurrentBoneTransformFrame;
  this->RevisionNumber = param_1->CurrentBoneTransformRevisionNumber;
  this->PreviousRevisionNumber = param_1->PreviousBoneTransformRevisionNumber;
  bVar2 = param_1->field_0x10e;
  this->LODIndex = param_6;
  this->field_0x305 = (bVar2 >> 1 ^ this->field_0x305) & 2 ^ this->field_0x305;
  this->PreviousBoneTransformUpdateMode = param_9;
  local_2a0 = param_1;
  local_278 = param_2;
  if (((((*(int *)&(this->ActiveMorphTargets).field_0x8 !=
          *(int *)&(this->ActiveMorphTargets).field_0x34) ||
        ((this->ReferenceToLocal).ArrayNum != 0)) ||
       (*(int *)&(this->ClothingSimData).field_0x8 != *(int *)&(this->ClothingSimData).field_0x34))
      || ((this->MorphTargetWeights).ArrayNum != 0)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ActiveMorphTargets.Num() && !ReferenceToLocal.Num() && !ClothingSimData.Num() && !MorphTargetWeights.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                          ,0xb75,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((&this->MorphTargetWeights == param_8) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar31 = param_8->ArrayNum;
  if (iVar31 != 0) {
    iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar31,&(this->MorphTargetWeights).AllocatorInstance,
                        &(this->MorphTargetWeights).ArrayNum,&(this->MorphTargetWeights).ArrayMax);
    memcpy((this->MorphTargetWeights).AllocatorInstance.Data + (longlong)iVar20 * 4,
           (param_8->AllocatorInstance).Data,(longlong)iVar31 << 2);
  }
  this_00 = &this->ExternalMorphWeightData;
  this->NumWeightedActiveMorphTargets = 0;
  if (this_00 != param_10) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->ExternalMorphWeightData).MorphSets.field_0x38,
               (int *)&(this->ExternalMorphWeightData).MorphSets.field_0x48,
               (ForElementType<FSetElementId> *)&(param_10->MorphSets).field_0x38,
               *(int *)&(param_10->MorphSets).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_10);
  }
  (this->ExternalMorphWeightData).NumActiveMorphTargets = param_10->NumActiveMorphTargets;
  FExternalMorphWeightData::UpdateNumActiveMorphTargets(this_00);
  pFVar41 = local_2a0;
  bVar17 = FSkinnedMeshSceneProxyDynamicData::IsValidExternalMorphSetLODIndex(local_2a0,param_6);
  if (bVar17) {
    pTVar21 = FSkinnedMeshSceneProxyDynamicData::GetExternalMorphSets(pFVar41,param_6);
    if (&this->ExternalMorphSets != pTVar21) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)&(this->ExternalMorphSets).field_0x38,
                 (int *)&(this->ExternalMorphSets).field_0x48,
                 (ForElementType<FSetElementId> *)&pTVar21->field_0x38,*(int *)&pTVar21->field_0x48)
      ;
      TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this->ExternalMorphSets,
                  (TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar21);
    }
  }
  pFVar16 = local_278;
  pTVar33 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0;
  iVar31 = 0;
  pTVar40 = pTVar33;
  if ((local_278 != (FPrimitiveSceneProxy *)0x0) &&
     (pTVar40 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0,
     local_278->bIsNaniteMesh == '\0')) {
    pTVar40 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
              &local_278[1].InstanceSceneDataBuffersInternal;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar25 = IConsoleManager::Get();
    plVar22 = (longlong *)
              (**(code **)((longlong)*pIVar25 + 0xc0))
                        (pIVar25,L"r.RayTracing.Geometry.SkeletalMeshes.LODBias",1);
    pTVar26 = pTVar33;
    if (plVar22 != (longlong *)0x0) {
      pTVar26 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                (**(code **)(*plVar22 + 0x68))(plVar22);
    }
    RayTracingSkeletalMeshLODBiasVar = (TConsoleVariableData<int> *)pTVar26;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar13 = RayTracingSkeletalMeshLODBiasVar;
  if (RayTracingSkeletalMeshLODBiasVar != (TConsoleVariableData<int> *)0x0) {
    bVar17 = IsInParallelGameThread();
    if ((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) {
      pTVar33 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)&DAT_00000004;
    }
    iVar31 = *(int *)((longlong)&(pTVar33->AllocatorInstance).Data +
                     (longlong)pTVar13->ShadowedValue);
    if (iVar31 < 0) {
      iVar31 = 0;
    }
  }
  pFVar15 = local_280;
  EVar18 = FSkeletalMeshObjectGPUSkin::GetGPUSkinTechnique(local_280,this->LODIndex);
  iVar20 = 0;
  if (EVar18 != MeshDeformer) {
    iVar20 = iVar31;
  }
  if (pFVar16 == (FPrimitiveSceneProxy *)0x0) {
    local_2a8 = 1;
LAB_148653801:
    iVar31 = this->LODIndex;
    iVar27 = *(int *)((longlong)&pFVar15->_padding_ + 4);
    iVar30 = (param_4->LODRenderData).Array.ArrayNum + -1;
    if (iVar27 < iVar20 + iVar31) {
      iVar27 = iVar20 + iVar31;
    }
    if (iVar27 < iVar30) {
      iVar30 = iVar27;
    }
    if (iVar31 < iVar30) {
      iVar31 = iVar30;
    }
  }
  else {
    local_2a8 = pFVar16->bVisibleInRayTracing;
    if (local_2a8 != 0) goto LAB_148653801;
    iVar31 = -1;
  }
  pTVar34 = &this->MeshComponentSpaceTransforms;
  this->RayTracingLODIndex = iVar31;
  if (((this->MeshComponentSpaceTransforms).ArrayNum != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!MeshComponentSpaceTransforms.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                          ,0xb99,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar31 = (local_2a0->ComponentSpaceTransforms).ArrayNum;
  if (iVar31 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x9a9,L"Invalid range size: %lld");
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_148653898:
    iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,iVar31,&pTVar34->AllocatorInstance,
                        &(this->MeshComponentSpaceTransforms).ArrayNum,
                        &(this->MeshComponentSpaceTransforms).ArrayMax);
    pFVar41 = local_2a0;
    memcpy((pTVar34->AllocatorInstance).Data + (longlong)iVar20 * 0x60,
           (local_2a0->ComponentSpaceTransforms).DataPtr,(longlong)iVar31 * 0x60);
  }
  else {
    pFVar41 = local_2a0;
    if (iVar31 != 0) goto LAB_148653898;
  }
  local_1e8.DataPtr = (pFVar41->BoneVisibilityStates).DataPtr;
  local_1e8.ArrayNum = (pFVar41->BoneVisibilityStates).ArrayNum;
  local_1e8._12_4_ = *(undefined4 *)&(pFVar41->BoneVisibilityStates).field_0xc;
  local_1d8.DataPtr = (pFVar41->ComponentSpaceTransforms).DataPtr;
  local_1d8.ArrayNum = (pFVar41->ComponentSpaceTransforms).ArrayNum;
  local_1d8._12_4_ = *(undefined4 *)&(pFVar41->ComponentSpaceTransforms).field_0xc;
  if ((this->MeshComponentSpaceTransforms).ArrayNum != 0) {
    pTVar34 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
  }
  UpdateRefToLocalMatricesInner
            (&local_1d8,&local_1e8,&this->ReferenceToLocal,pFVar41,param_3,param_4,this->LODIndex,
             pTVar40,pTVar34);
  if ((local_2a8 != 0) && (this->RayTracingLODIndex != this->LODIndex)) {
    local_1c8.DataPtr = (pFVar41->BoneVisibilityStates).DataPtr;
    local_1c8.ArrayNum = (pFVar41->BoneVisibilityStates).ArrayNum;
    local_1c8._12_4_ = *(undefined4 *)&(pFVar41->BoneVisibilityStates).field_0xc;
    local_1b8.DataPtr = (pFVar41->ComponentSpaceTransforms).DataPtr;
    local_1b8.ArrayNum = (pFVar41->ComponentSpaceTransforms).ArrayNum;
    local_1b8._12_4_ = *(undefined4 *)&(pFVar41->ComponentSpaceTransforms).field_0xc;
    UpdateRefToLocalMatricesInner
              (&local_1b8,&local_1c8,&this->ReferenceToLocalForRayTracing,pFVar41,param_3,param_4,
               this->RayTracingLODIndex,pTVar40,
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0);
  }
  EVar3 = this->PreviousBoneTransformUpdateMode;
  if (EVar3 == None) {
    (this->PreviousReferenceToLocal).ArrayNum = 0;
    if ((this->PreviousReferenceToLocal).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&(this->PreviousReferenceToLocal).AllocatorInstance,0,
                 &(this->PreviousReferenceToLocal).ArrayMax);
    }
    (this->PreviousReferenceToLocalForRayTracing).ArrayNum = 0;
    if ((this->PreviousReferenceToLocalForRayTracing).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&(this->PreviousReferenceToLocalForRayTracing).AllocatorInstance,0,
                 &(this->PreviousReferenceToLocalForRayTracing).ArrayMax);
    }
  }
  else if (EVar3 == UpdatePrevious) {
    local_1a8.DataPtr = (pFVar41->PreviousBoneVisibilityStates).DataPtr;
    local_1a8.ArrayNum = (pFVar41->PreviousBoneVisibilityStates).ArrayNum;
    local_1a8._12_4_ = *(undefined4 *)&(pFVar41->PreviousBoneVisibilityStates).field_0xc;
    local_198.DataPtr = (pFVar41->PreviousComponentSpaceTransforms).DataPtr;
    local_198.ArrayNum = (pFVar41->PreviousComponentSpaceTransforms).ArrayNum;
    local_198._12_4_ = *(undefined4 *)&(pFVar41->PreviousComponentSpaceTransforms).field_0xc;
    UpdateRefToLocalMatricesInner
              (&local_198,&local_1a8,&this->PreviousReferenceToLocal,pFVar41,param_3,param_4,
               this->LODIndex,pTVar40,
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0);
    if ((local_2a8 != 0) && (this->RayTracingLODIndex != this->LODIndex)) {
      UpdatePreviousRefToLocalMatrices
                (&this->PreviousReferenceToLocalForRayTracing,pFVar41,param_3,param_4,
                 this->RayTracingLODIndex,pTVar40);
    }
  }
  else if (((EVar3 == DuplicateCurrentToPrevious) &&
           (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::operator=
                      (&this->PreviousReferenceToLocal,&this->ReferenceToLocal), local_2a8 != 0)) &&
          (this->RayTracingLODIndex != this->LODIndex)) {
    TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::operator=
              (&this->PreviousReferenceToLocalForRayTracing,&this->ReferenceToLocalForRayTracing);
  }
  this_01 = &this->SectionIdsUseByActiveMorphTargets;
  (this->SectionIdsUseByActiveMorphTargets).ArrayNum = 0;
  if ((this->SectionIdsUseByActiveMorphTargets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this_01->AllocatorInstance,0,
               &(this->SectionIdsUseByActiveMorphTargets).ArrayMax);
  }
  if (0 < (this->ExternalMorphWeightData).NumActiveMorphTargets) {
    uVar32 = this->LODIndex;
    uVar39 = 0;
    if ((int)uVar32 < (param_4->LODRenderData).Array.ArrayNum) {
      uVar39 = ~uVar32 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar29 = *(longlong *)
              ((param_4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar32 * 8);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_01,*(int *)(lVar29 + 0x18),No)
    ;
    uVar32 = 0;
    if (0 < *(int *)(lVar29 + 0x18)) {
      lVar35 = 0;
      do {
        uVar39 = 0;
        if ((int)uVar32 < (this->SectionIdsUseByActiveMorphTargets).ArrayNum) {
          uVar39 = ~uVar32 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)((this_01->AllocatorInstance).Data + lVar35) = uVar32;
        uVar32 = uVar32 + 1;
        lVar35 = lVar35 + 4;
      } while ((int)uVar32 < *(int *)(lVar29 + 0x18));
    }
  }
  fVar42 = UE::SkeletalRender::Settings::GetMorphTargetMaxBlendWeight();
  pTVar14 = local_288;
  TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
             *)&this->ActiveMorphTargets,
            *(int *)&local_288->field_0x8 - *(int *)&local_288->field_0x34);
  iVar31 = *(int *)&pTVar14->field_0x28;
  pTVar38 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar14->field_0x10;
  iStack_250 = 0;
  uStack_24c = 1;
  local_238 = 0;
  iStack_23c = 0;
  if (iVar31 != 0) {
    puVar37 = *(uint **)&pTVar14->field_0x20;
    if (*(uint **)&pTVar14->field_0x20 == (uint *)0x0) {
      puVar37 = (uint *)pTVar38;
    }
    uVar32 = *puVar37;
    iStack_250 = 0;
    local_238 = 0;
    while (uVar32 == 0) {
      lVar29 = (longlong)iStack_250;
      local_238 = local_238 + 0x20;
      iStack_250 = iStack_250 + 1;
      iStack_23c = iVar31;
      if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_250) goto LAB_148653c6d;
      uVar32 = puVar37[lVar29 + 1];
    }
    uStack_24c = -uVar32 & uVar32;
    uVar1 = (ulonglong)uStack_24c * 2 + 1;
    lVar29 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_270 = (int)lVar29;
    iStack_23c = local_270 + -1 + local_238;
    if (iVar31 < iStack_23c) {
      iStack_23c = iVar31;
    }
  }
LAB_148653c6d:
  uVar32 = *(uint *)&pTVar14->field_0x28;
  uStack_234 = local_fc;
  iStack_230 = *(int *)&pTVar14->field_0x8 - *(int *)&pTVar14->field_0x34;
  local_258 = pTVar14;
  uVar39 = uVar32 & 0xffffffe0;
  uStack_240 = 0xffffffff;
  TStack_220._padding_ = CONCAT44(uStack_24c,iStack_250);
  TStack_220.CurrentBitIndex = iStack_23c;
  TStack_220.UnvisitedBitMask = 0xffffffff;
  local_228 = pTVar14;
  iVar20 = (int)uVar32 >> 5;
  TStack_220._28_4_ = local_fc;
  TStack_220.BaseBitIndex = local_238;
  uStack_200 = CONCAT44(uStack_22c,iStack_230);
  local_268.Value = (int *)pTVar38;
  local_248 = (undefined1 *)pTVar38;
  TStack_220.Array = pTVar38;
  if ((((int)uVar32 < 0) || (iVar31 < (int)uVar32)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_322bcc77;
  uVar28 = *(uint *)&pTVar14->field_0x28;
  if (uVar32 != uVar28) {
    puVar36 = *(undefined1 **)&pTVar14->field_0x20;
    if (*(undefined1 **)&pTVar14->field_0x20 == (undefined1 *)0x0) {
      puVar36 = (undefined1 *)pTVar38;
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar36 + (longlong)iVar20 * 4);
    while (uVar32 == 0) {
      lVar29 = (longlong)iVar20;
      uVar39 = uVar39 + 0x20;
      iVar20 = iVar20 + 1;
      uVar32 = uVar28;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_148653d80;
      uVar32 = *(uint *)(puVar36 + lVar29 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_26c = (int)lVar29;
    uVar32 = local_26c + -1 + uVar39;
    if ((int)uVar28 < (int)uVar32) {
      uVar32 = uVar28;
    }
  }
LAB_148653d80:
  while( true ) {
    pTVar14 = local_228;
    if (*(int *)&local_228->field_0x8 - *(int *)&local_228->field_0x34 != (int)uStack_200) {
      local_2a7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UMorphTarget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2a7);
    }
    pFVar41 = local_2a0;
    if (((TStack_220.CurrentBitIndex == uVar32) && (TStack_220.Array == pTVar38)) &&
       (pTVar14 == local_288)) break;
    lVar29 = *(longlong *)pTVar14;
    local_290[0] = *(uint *)(lVar29 + 8 + (longlong)TStack_220.CurrentBitIndex * 0x18);
    lVar35 = (longlong)(int)local_290[0];
    local_298 = *(longlong **)(lVar29 + (longlong)TStack_220.CurrentBitIndex * 0x18);
    uVar39 = 0;
    if ((int)local_290[0] < (this->MorphTargetWeights).ArrayNum) {
      uVar39 = ~local_290[0] >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar43 = (float)(*(uint *)((this->MorphTargetWeights).AllocatorInstance.Data + lVar35 * 4) &
                    uVar11);
    if (((local_298 != (longlong *)0x0) && (fVar10 <= fVar43)) &&
       ((fVar43 <= fVar42 &&
        (cVar19 = (**(code **)(*local_298 + 0x2d0))(local_298,this->LODIndex), cVar19 != '\0')))) {
      this->NumWeightedActiveMorphTargets = this->NumWeightedActiveMorphTargets + 1;
      plVar22 = (longlong *)(**(code **)(*local_298 + 0x2b8))();
      uVar39 = this->LODIndex;
      uVar28 = 0;
      if ((int)uVar39 < (int)plVar22[1]) {
        uVar28 = ~uVar39 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar29 = *plVar22;
      lVar35 = (longlong)(int)uVar39 * 0x40;
      uVar39 = 0;
      iVar31 = *(int *)(lVar35 + 0x20 + lVar29);
      if (0 < iVar31) {
        do {
          uVar28 = 0;
          if ((int)uVar39 < iVar31) {
            uVar28 = ~uVar39 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (this_01,(int *)(*(longlong *)(lVar35 + 0x18 + lVar29) +
                                    (longlong)(int)uVar39 * 4));
          iVar31 = *(int *)(lVar35 + 0x20 + lVar29);
          uVar39 = uVar39 + 1;
          pTVar38 = (TBitArray<FDefaultBitArrayAllocator> *)local_268.Value;
        } while ((int)uVar39 < iVar31);
      }
      local_1f8 = &local_298;
      local_1f0 = local_290;
      TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UMorphTarget_const_*_const_&,int_const_&>_>
                ((TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
                  *)&this->ActiveMorphTargets,&local_268,(bool *)&local_1f8);
    }
    TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
  }
  local_178.Rotation.XY.m128d_f64[0] = (local_2a0->ComponentWorldTransform).Rotation.XY.m128d_f64[0]
  ;
  local_178.Rotation.XY.m128d_f64[1] = (local_2a0->ComponentWorldTransform).Rotation.XY.m128d_f64[1]
  ;
  local_178.Rotation.ZW.m128d_f64[0] = (local_2a0->ComponentWorldTransform).Rotation.ZW.m128d_f64[0]
  ;
  local_178.Rotation.ZW.m128d_f64[1] = (local_2a0->ComponentWorldTransform).Rotation.ZW.m128d_f64[1]
  ;
  local_178.Translation.XY.m128d_f64[0] =
       (local_2a0->ComponentWorldTransform).Translation.XY.m128d_f64[0];
  local_178.Translation.XY.m128d_f64[1] =
       (local_2a0->ComponentWorldTransform).Translation.XY.m128d_f64[1];
  local_178.Translation.ZW.m128d_f64[0] =
       (local_2a0->ComponentWorldTransform).Translation.ZW.m128d_f64[0];
  local_178.Translation.ZW.m128d_f64[1] =
       (local_2a0->ComponentWorldTransform).Translation.ZW.m128d_f64[1];
  local_178.Scale3D.XY.m128d_f64[0] = (local_2a0->ComponentWorldTransform).Scale3D.XY.m128d_f64[0];
  local_178.Scale3D.XY.m128d_f64[1] = (local_2a0->ComponentWorldTransform).Scale3D.XY.m128d_f64[1];
  local_178.Scale3D.ZW.m128d_f64[0] = (local_2a0->ComponentWorldTransform).Scale3D.ZW.m128d_f64[0];
  local_178.Scale3D.ZW.m128d_f64[1] = (local_2a0->ComponentWorldTransform).Scale3D.ZW.m128d_f64[1];
  pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_178,&local_f8);
  dVar9 = pTVar23->M[0][1];
  (this->LocalToWorld).M[0][0] = pTVar23->M[0][0];
  (this->LocalToWorld).M[0][1] = dVar9;
  dVar9 = pTVar23->M[0][3];
  (this->LocalToWorld).M[0][2] = pTVar23->M[0][2];
  (this->LocalToWorld).M[0][3] = dVar9;
  dVar9 = pTVar23->M[1][1];
  (this->LocalToWorld).M[1][0] = pTVar23->M[1][0];
  (this->LocalToWorld).M[1][1] = dVar9;
  dVar9 = pTVar23->M[1][3];
  (this->LocalToWorld).M[1][2] = pTVar23->M[1][2];
  (this->LocalToWorld).M[1][3] = dVar9;
  dVar9 = pTVar23->M[2][1];
  (this->LocalToWorld).M[2][0] = pTVar23->M[2][0];
  (this->LocalToWorld).M[2][1] = dVar9;
  dVar9 = pTVar23->M[2][3];
  (this->LocalToWorld).M[2][2] = pTVar23->M[2][2];
  (this->LocalToWorld).M[2][3] = dVar9;
  uVar6 = *(undefined4 *)((longlong)pTVar23->M[3] + 4);
  uVar7 = *(undefined4 *)(pTVar23->M[3] + 1);
  uVar8 = *(undefined4 *)((longlong)pTVar23->M[3] + 0xc);
  *(undefined4 *)(this->LocalToWorld).M[3] = *(undefined4 *)pTVar23->M[3];
  *(undefined4 *)((longlong)(this->LocalToWorld).M[3] + 4) = uVar6;
  *(undefined4 *)((this->LocalToWorld).M[3] + 1) = uVar7;
  *(undefined4 *)((longlong)(this->LocalToWorld).M[3] + 0xc) = uVar8;
  uVar6 = *(undefined4 *)((longlong)pTVar23->M[3] + 0x14);
  uVar7 = *(undefined4 *)(pTVar23->M[3] + 3);
  uVar8 = *(undefined4 *)((longlong)pTVar23->M[3] + 0x1c);
  *(undefined4 *)((this->LocalToWorld).M[3] + 2) = *(undefined4 *)(pTVar23->M[3] + 2);
  *(undefined4 *)((longlong)(this->LocalToWorld).M[3] + 0x14) = uVar6;
  *(undefined4 *)((this->LocalToWorld).M[3] + 3) = uVar7;
  *(undefined4 *)((longlong)(this->LocalToWorld).M[3] + 0x1c) = uVar8;
  pIVar4 = pFVar41->ClothSimulDataProvider;
  if (pIVar4 == (IClothSimulationDataProvider *)0x0) {
    TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
             *)&this->ClothingSimData);
    dVar9 = UE::Math::TMatrix<double>::Identity.M[0][1];
    (this->ClothObjectLocalToWorld).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    (this->ClothObjectLocalToWorld).M[0][1] = dVar9;
    dVar9 = UE::Math::TMatrix<double>::Identity.M[0][3];
    (this->ClothObjectLocalToWorld).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    (this->ClothObjectLocalToWorld).M[0][3] = dVar9;
    dVar9 = UE::Math::TMatrix<double>::Identity.M[1][1];
    (this->ClothObjectLocalToWorld).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    (this->ClothObjectLocalToWorld).M[1][1] = dVar9;
    dVar9 = UE::Math::TMatrix<double>::Identity.M[1][3];
    (this->ClothObjectLocalToWorld).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    (this->ClothObjectLocalToWorld).M[1][3] = dVar9;
    dVar9 = UE::Math::TMatrix<double>::Identity.M[2][1];
    (this->ClothObjectLocalToWorld).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    (this->ClothObjectLocalToWorld).M[2][1] = dVar9;
    dVar9 = UE::Math::TMatrix<double>::Identity.M[2][3];
    (this->ClothObjectLocalToWorld).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    (this->ClothObjectLocalToWorld).M[2][3] = dVar9;
    dVar9 = UE::Math::TMatrix<double>::Identity.M[3][1];
    (this->ClothObjectLocalToWorld).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    (this->ClothObjectLocalToWorld).M[3][1] = dVar9;
    dVar9 = UE::Math::TMatrix<double>::Identity.M[3][3];
    (this->ClothObjectLocalToWorld).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    (this->ClothObjectLocalToWorld).M[3][3] = dVar9;
    this->ClothBlendWeight = 0.0;
  }
  else {
    (**(code **)*pIVar4)
              (pIVar4,&this->ClothingSimData,&this->ClothObjectLocalToWorld,&this->ClothBlendWeight)
    ;
  }
  EVar18 = FSkeletalMeshObjectGPUSkin::GetGPUSkinTechnique(local_280,this->LODIndex);
  this->GPUSkinTechnique = EVar18;
  if ((EVar18 != MeshDeformer) &&
     (pUVar24 = FSkinnedMeshSceneProxyDynamicData::GetMeshDeformerInstanceForLOD
                          (pFVar41,this->LODIndex), pUVar24 != (UMeshDeformerInstance *)0x0)) {
    ::FName::ToString(&pFVar41->Name,&local_188);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalGPUSkinMesh);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  pTVar12 = CVarSkeletalMeshClothBlendEnabled.Ref;
  bVar17 = IsInParallelGameThread();
  if (!bVar17) {
    bVar17 = IsInGameThread();
    lVar29 = 1;
    if (!bVar17) goto LAB_148654178;
  }
  lVar29 = 0;
LAB_148654178:
  if (pTVar12->ShadowedValue[lVar29] == false) {
    this->ClothBlendWeight = 0.0;
  }
  if (((local_2a8 != 0) && (local_278 != (FPrimitiveSceneProxy *)0x0)) &&
     (local_278->bIsNaniteMesh == '\0')) {
    this->field_0x305 =
         (this->bAnySegmentUsesWorldPositionOffset ^
         (byte)local_278[1].CustomPrimitiveData.Data.ArrayNum) & 1 ^ this->field_0x305;
  }
  return;
}

// IsMorphUpdateNeeded @ 148659cc0

bool __cdecl
FDynamicSkelMeshObjectDataGPUSkin::IsMorphUpdateNeeded
          (FDynamicSkelMeshObjectDataGPUSkin *param_1,FDynamicSkelMeshObjectDataGPUSkin *param_2)

{
  bool bVar1;
  
  if (((param_1 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) &&
      ((param_2->ExternalMorphWeightData).NumActiveMorphTargets < 1)) &&
     (param_1->LODIndex == param_2->LODIndex)) {
    bVar1 = ActiveMorphTargetsEqual
                      (param_1,&param_2->ActiveMorphTargets,&param_2->MorphTargetWeights);
    if (bVar1) {
      return false;
    }
  }
  return true;
}

// Reset @ 1486607e0

int __thiscall FDynamicSkelMeshObjectDataGPUSkin::Reset(FDynamicSkelMeshObjectDataGPUSkin *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  this->bRecreating = '\0';
  this->RevisionNumber = 0xffffffff;
  this->PreviousRevisionNumber = 0xffffffff;
  this->LODIndex = 0;
  TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
           *)&this->ActiveMorphTargets);
  (this->MorphTargetWeights).ArrayNum = 0;
  if ((this->MorphTargetWeights).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->MorphTargetWeights).AllocatorInstance,0,
               &(this->MorphTargetWeights).ArrayMax);
  }
  TSet<TTuple<int,FExternalMorphSetWeights>,TDefaultMapHashableKeyFuncs<int,FExternalMorphSetWeights,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FExternalMorphSetWeights>,TDefaultMapHashableKeyFuncs<int,FExternalMorphSetWeights,0>,FDefaultSetAllocator>
           *)&this->ExternalMorphWeightData);
  (this->ExternalMorphWeightData).NumActiveMorphTargets = 0;
  TSet<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>,FDefaultSetAllocator>
           *)&this->ExternalMorphSets);
  this->NumWeightedActiveMorphTargets = 0;
  TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
           *)&this->ClothingSimData);
  this->bAnySegmentUsesWorldPositionOffset = '\0';
  this->ClothBlendWeight = 0.0;
  piVar1 = &(this->PreviousReferenceToLocal).ArrayMax;
  this->GPUSkinTechnique = Inline;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->LocalToWorld).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->LocalToWorld).M[0][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->LocalToWorld).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->LocalToWorld).M[0][3] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->LocalToWorld).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->LocalToWorld).M[1][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->LocalToWorld).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->LocalToWorld).M[1][3] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->LocalToWorld).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->LocalToWorld).M[2][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->LocalToWorld).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->LocalToWorld).M[2][3] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->LocalToWorld).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->LocalToWorld).M[3][1] = dVar4;
  dVar4 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->LocalToWorld).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->LocalToWorld).M[3][3] = dVar4;
  (this->PreviousReferenceToLocal).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->PreviousReferenceToLocal).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PreviousReferenceToLocalForRayTracing).ArrayMax;
  (this->PreviousReferenceToLocalForRayTracing).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->PreviousReferenceToLocalForRayTracing).AllocatorInstance,0,piVar1
              );
  }
  (this->ReferenceToLocal).ArrayNum = 0;
  if ((this->ReferenceToLocal).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->ReferenceToLocal).AllocatorInstance,0,
               &(this->ReferenceToLocal).ArrayMax);
  }
  iVar2 = (this->ReferenceToLocal).ArrayMax;
  (this->ReferenceToLocalForRayTracing).ArrayNum = 0;
  if ((this->ReferenceToLocalForRayTracing).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->ReferenceToLocalForRayTracing).AllocatorInstance,0,
               &(this->ReferenceToLocalForRayTracing).ArrayMax);
  }
  iVar3 = (this->ReferenceToLocalForRayTracing).ArrayMax;
  (this->MeshComponentSpaceTransforms).ArrayNum = 0;
  if ((this->MeshComponentSpaceTransforms).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->MeshComponentSpaceTransforms).AllocatorInstance,0,
               &(this->MeshComponentSpaceTransforms).ArrayMax);
  }
  return (this->MeshComponentSpaceTransforms).ArrayMax * 0x60 + (iVar3 + iVar2) * 0x40 + 0x310;
}

