// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 12

// StaticStruct @ 1463ebe40

UScriptStruct * __cdecl FAnimNode_CopyPoseFromMesh::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CopyPoseFromMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_CopyPoseFromMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh,(UObject *)pUVar1,
                         L"AnimNode_CopyPoseFromMesh");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_CopyPoseFromMesh.OuterSingleton;
}

// FAnimNode_CopyPoseFromMesh @ 146403a40

FAnimNode_CopyPoseFromMesh * __thiscall
FAnimNode_CopyPoseFromMesh::FAnimNode_CopyPoseFromMesh(FAnimNode_CopyPoseFromMesh *this)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_CopyPoseFromMesh__6B_;
  local_res8 = 0;
  (this->SourceMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SourceMeshComponent).WeakPtr,(FObjectPtr)&local_res8);
  this->bUseAttachedParent = '\0';
  this->bCopyCurves = '\0';
  this->bUseMeshPose = '\0';
  this->bCopyCustomAttributes = false;
  (this->RootBoneToCopy).ComparisonIndex = 0;
  (this->RootBoneToCopy).Number = 0;
  (this->CurrentlyUsedSourceMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CurrentlyUsedSourceMesh).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CurrentlyUsedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CurrentlyUsedTargetMesh).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->BoneMapToSource = 0;
  *(undefined8 *)&(this->BoneMapToSource).field_0x8 = 0;
  *(undefined8 *)&(this->BoneMapToSource).field_0x20 = 0;
  *(undefined4 *)&(this->BoneMapToSource).field_0x28 = 0;
  *(undefined4 *)&(this->BoneMapToSource).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneMapToSource).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneMapToSource).field_0x34 = 0;
  *(undefined8 *)&(this->BoneMapToSource).field_0x40 = 0;
  *(undefined4 *)&(this->BoneMapToSource).field_0x48 = 0;
  *(undefined8 *)&this->SourceBoneToTarget = 0;
  *(undefined8 *)&(this->SourceBoneToTarget).field_0x8 = 0;
  *(undefined8 *)&(this->SourceBoneToTarget).field_0x20 = 0;
  *(undefined4 *)&(this->SourceBoneToTarget).field_0x28 = 0;
  *(undefined4 *)&(this->SourceBoneToTarget).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceBoneToTarget).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceBoneToTarget).field_0x34 = 0;
  *(undefined8 *)&(this->SourceBoneToTarget).field_0x40 = 0;
  *(undefined4 *)&(this->SourceBoneToTarget).field_0x48 = 0;
  (this->SourceMeshTransformArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceMeshTransformArray).ArrayNum = 0;
  (this->SourceMeshTransformArray).ArrayMax = 0;
  *(undefined8 *)&this->SourceCurves = 0;
  *(undefined8 *)&(this->SourceCurves).field_0x8 = 0;
  (this->SourceCurves).field_0x10 = 0;
  *(undefined8 *)&(this->SourceCurves).field_0x18 = 0;
  *(undefined8 *)&this->SourceCustomAttributes = 0;
  *(undefined8 *)&(this->SourceCustomAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->SourceCustomAttributes).field_0x10 = 0;
  *(undefined8 *)&(this->SourceCustomAttributes).field_0x18 = 0;
  *(undefined8 *)&(this->SourceCustomAttributes).field_0x20 = 0;
  *(undefined8 *)&(this->SourceCustomAttributes).field_0x28 = 0;
  *(undefined8 *)&(this->SourceCustomAttributes).field_0x30 = 0;
  *(undefined8 *)&(this->SourceCustomAttributes).field_0x38 = 0;
  return this;
}

// ~FAnimNode_CopyPoseFromMesh @ 1464088e0

void __thiscall
FAnimNode_CopyPoseFromMesh::~FAnimNode_CopyPoseFromMesh(FAnimNode_CopyPoseFromMesh *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  ~TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->SourceCustomAttributes);
  if (*(void **)&this->SourceCurves != (void *)0x0) {
    FMemory::Free(*(void **)&this->SourceCurves);
  }
  pFVar1 = (this->SourceMeshTransformArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SourceBoneToTarget).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SourceBoneToTarget).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceBoneToTarget);
  *(undefined4 *)&(this->BoneMapToSource).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BoneMapToSource).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneMapToSource);
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// CacheBones_AnyThread @ 1464197f0

void __thiscall
FAnimNode_CopyPoseFromMesh::CacheBones_AnyThread
          (FAnimNode_CopyPoseFromMesh *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyPoseFromMesh::CacheBones_AnyThread");
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 1464393e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_CopyPoseFromMesh::Evaluate_AnyThread
          (FAnimNode_CopyPoseFromMesh *this,FPoseContext *param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  FBoneContainer *this_00;
  undefined1 *puVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FReferenceSkeleton *this_01;
  TTransform<double> *pTVar14;
  uint *puVar15;
  undefined1 *puVar16;
  FCompactPoseBoneIndex FVar17;
  uint uVar18;
  UObject *pUVar19;
  uint *puVar20;
  longlong lVar21;
  FPoseContext *pFVar22;
  FCompactPose *this_02;
  UObject *pUVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  uint local_188;
  UObject *local_180;
  FCompactPoseBoneIndex local_178 [2];
  FPoseContext *local_170;
  FCompactPose *local_168;
  FCSPose<FCompactPose> local_158;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_170 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyPoseFromMesh::Evaluate_AnyThread");
  this_02 = &param_1->Pose;
  local_168 = this_02;
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)this_02,
             *(FBoneContainer **)&(param_1->Pose).field_0x10);
  bVar10 = FWeakObjectPtr::IsValid(&(this->CurrentlyUsedMesh).WeakPtr);
  pUVar19 = (UObject *)0x0;
  local_180 = pUVar19;
  if (bVar10) {
    local_180 = FWeakObjectPtr::Get(&(this->CurrentlyUsedMesh).WeakPtr);
  }
  pFVar22 = param_1;
  if ((0 < (this->SourceMeshTransformArray).ArrayNum) && (local_180 != (UObject *)0x0)) {
    this_00 = *(FBoneContainer **)&(param_1->Pose).field_0x10;
    if (this->bUseMeshPose == 0) {
      uVar3 = *(uint *)&(param_1->Pose).field_0x8;
      pFVar22 = local_170;
      pUVar23 = pUVar19;
      if (uVar3 != 0) {
        do {
          iVar4 = (this_00->BoneIndicesArray).ArrayNum;
          uVar18 = (uint)pUVar19;
          uVar11 = 0;
          if ((int)uVar18 < iVar4) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          local_188 = uVar18;
          if (uVar11 == 0) {
            local_198 = (longlong)(int)uVar18;
            local_190 = (longlong)iVar4;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          uVar2 = *(ushort *)
                   ((longlong)&pUVar23->field_0x0 +
                   (longlong)(this_00->BoneIndicesArray).AllocatorInstance.Data);
          if (*(int *)&(this->BoneMapToSource).field_0x8 !=
              *(int *)&(this->BoneMapToSource).field_0x34) {
            puVar5 = *(undefined1 **)&(this->BoneMapToSource).field_0x40;
            puVar16 = &(this->BoneMapToSource).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar16 = puVar5;
            }
            uVar11 = *(uint *)(puVar16 +
                              ((ulonglong)(*(int *)&(this->BoneMapToSource).field_0x48 - 1) &
                              (ulonglong)uVar2) * 4);
            if (uVar11 != 0xffffffff) {
              do {
                puVar15 = (uint *)((longlong)(int)uVar11 * 0x10 +
                                  *(longlong *)&this->BoneMapToSource);
                if (*puVar15 == (uint)uVar2) {
                  puVar20 = puVar15 + 1;
                  if (puVar15 == (uint *)0x0) {
                    puVar20 = (uint *)0x0;
                  }
                  if (puVar20 != (uint *)0x0) {
                    uVar11 = *puVar20;
                    lVar21 = (longlong)(int)uVar11;
                    if ((-1 < (int)uVar11) &&
                       ((int)uVar11 < (this->SourceMeshTransformArray).ArrayNum)) {
                      this_01 = (FReferenceSkeleton *)
                                (**(code **)(*(longlong *)local_180 + 800))(local_180);
                      uVar12 = FReferenceSkeleton::GetParentIndex(this_01,uVar11);
                      FBoneContainer::GetParentBoneIndex(this_00,local_178);
                      if (((int)uVar12 < 0) ||
                         (((this->SourceMeshTransformArray).ArrayNum <= (int)uVar12 ||
                          (local_178[0] == (FCompactPoseBoneIndex)0xffffffff)))) {
                        iVar4 = (this->SourceMeshTransformArray).ArrayNum;
                        uVar12 = 0;
                        if ((int)uVar11 < iVar4) {
                          uVar12 = ~uVar11 >> 0x1f;
                        }
                        if ((uVar12 == 0) &&
                           (local_198 = lVar21, local_190 = (longlong)iVar4,
                           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar10)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        pFVar7 = (this->SourceMeshTransformArray).AllocatorInstance.Data;
                        lVar21 = lVar21 * 0x60;
                        pFVar6 = pFVar7 + lVar21;
                        uVar24 = *(undefined4 *)pFVar6;
                        uVar25 = *(undefined4 *)(pFVar6 + 4);
                        uVar26 = *(undefined4 *)(pFVar6 + 8);
                        uVar27 = *(undefined4 *)(pFVar6 + 0xc);
                        pFVar6 = pFVar7 + lVar21 + 0x10;
                        uVar28 = *(undefined4 *)pFVar6;
                        uVar29 = *(undefined4 *)(pFVar6 + 4);
                        uVar30 = *(undefined4 *)(pFVar6 + 8);
                        uVar31 = *(undefined4 *)(pFVar6 + 0xc);
                        pFVar6 = pFVar7 + lVar21 + 0x20;
                        uVar32 = *(undefined4 *)pFVar6;
                        uVar33 = *(undefined4 *)(pFVar6 + 4);
                        uVar34 = *(undefined4 *)(pFVar6 + 8);
                        uVar35 = *(undefined4 *)(pFVar6 + 0xc);
                        pFVar6 = pFVar7 + lVar21 + 0x30;
                        uVar36 = *(undefined4 *)pFVar6;
                        uVar37 = *(undefined4 *)(pFVar6 + 4);
                        uVar38 = *(undefined4 *)(pFVar6 + 8);
                        uVar39 = *(undefined4 *)(pFVar6 + 0xc);
                        pFVar6 = pFVar7 + lVar21 + 0x40;
                        uVar40 = *(undefined4 *)pFVar6;
                        uVar41 = *(undefined4 *)(pFVar6 + 4);
                        uVar42 = *(undefined4 *)(pFVar6 + 8);
                        uVar43 = *(undefined4 *)(pFVar6 + 0xc);
                        pFVar7 = pFVar7 + lVar21 + 0x50;
                        uVar44 = *(undefined4 *)pFVar7;
                        uVar45 = *(undefined4 *)(pFVar7 + 4);
                        uVar46 = *(undefined4 *)(pFVar7 + 8);
                        uVar47 = *(undefined4 *)(pFVar7 + 0xc);
                      }
                      else {
                        iVar4 = (this->SourceMeshTransformArray).ArrayNum;
                        uVar13 = 0;
                        if ((int)uVar12 < iVar4) {
                          uVar13 = ~uVar12 >> 0x1f;
                        }
                        if ((uVar13 == 0) &&
                           (local_198 = (longlong)(int)uVar12, local_190 = (longlong)iVar4,
                           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar10)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        iVar4 = (this->SourceMeshTransformArray).ArrayNum;
                        pFVar6 = (this->SourceMeshTransformArray).AllocatorInstance.Data;
                        uVar13 = 0;
                        if ((int)uVar11 < iVar4) {
                          uVar13 = ~uVar11 >> 0x1f;
                        }
                        if ((uVar13 == 0) &&
                           (local_198 = lVar21, local_190 = (longlong)iVar4,
                           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar10)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        pTVar14 = UE::Math::TTransform<double>::GetRelativeTransform
                                            ((TTransform<double> *)
                                             ((this->SourceMeshTransformArray).AllocatorInstance.
                                              Data + lVar21 * 0x60),&local_108,
                                             (TTransform<double> *)
                                             (pFVar6 + (longlong)(int)uVar12 * 0x60));
                        uVar24 = *(undefined4 *)(pTVar14->Rotation).XY.m128d_f64;
                        uVar25 = *(undefined4 *)((longlong)(pTVar14->Rotation).XY.m128d_f64 + 4);
                        uVar26 = *(undefined4 *)((pTVar14->Rotation).XY.m128d_f64 + 1);
                        uVar27 = *(undefined4 *)((longlong)(pTVar14->Rotation).XY.m128d_f64 + 0xc);
                        uVar28 = *(undefined4 *)(pTVar14->Rotation).ZW.m128d_f64;
                        uVar29 = *(undefined4 *)((longlong)(pTVar14->Rotation).ZW.m128d_f64 + 4);
                        uVar30 = *(undefined4 *)((pTVar14->Rotation).ZW.m128d_f64 + 1);
                        uVar31 = *(undefined4 *)((longlong)(pTVar14->Rotation).ZW.m128d_f64 + 0xc);
                        uVar32 = *(undefined4 *)(pTVar14->Translation).XY.m128d_f64;
                        uVar33 = *(undefined4 *)((longlong)(pTVar14->Translation).XY.m128d_f64 + 4);
                        uVar34 = *(undefined4 *)((pTVar14->Translation).XY.m128d_f64 + 1);
                        uVar35 = *(undefined4 *)
                                  ((longlong)(pTVar14->Translation).XY.m128d_f64 + 0xc);
                        uVar36 = *(undefined4 *)(pTVar14->Translation).ZW.m128d_f64;
                        uVar37 = *(undefined4 *)((longlong)(pTVar14->Translation).ZW.m128d_f64 + 4);
                        uVar38 = *(undefined4 *)((pTVar14->Translation).ZW.m128d_f64 + 1);
                        uVar39 = *(undefined4 *)
                                  ((longlong)(pTVar14->Translation).ZW.m128d_f64 + 0xc);
                        uVar40 = *(undefined4 *)(pTVar14->Scale3D).XY.m128d_f64;
                        uVar41 = *(undefined4 *)((longlong)(pTVar14->Scale3D).XY.m128d_f64 + 4);
                        uVar42 = *(undefined4 *)((pTVar14->Scale3D).XY.m128d_f64 + 1);
                        uVar43 = *(undefined4 *)((longlong)(pTVar14->Scale3D).XY.m128d_f64 + 0xc);
                        uVar44 = *(undefined4 *)(pTVar14->Scale3D).ZW.m128d_f64;
                        uVar45 = *(undefined4 *)((longlong)(pTVar14->Scale3D).ZW.m128d_f64 + 4);
                        uVar46 = *(undefined4 *)((pTVar14->Scale3D).ZW.m128d_f64 + 1);
                        uVar47 = *(undefined4 *)((longlong)(pTVar14->Scale3D).ZW.m128d_f64 + 0xc);
                      }
                      lVar21 = (longlong)(int)local_188;
                      iVar4 = *(int *)&(param_1->Pose).field_0x8;
                      uVar11 = 0;
                      if ((int)local_188 < iVar4) {
                        uVar11 = ~local_188 >> 0x1f;
                      }
                      if ((uVar11 == 0) &&
                         (local_198 = lVar21, local_190 = (longlong)iVar4,
                         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar10)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar8 = *(longlong *)&this_02->field_0x0;
                      lVar21 = lVar21 * 0x60;
                      puVar1 = (undefined4 *)(lVar21 + lVar8);
                      *puVar1 = uVar24;
                      puVar1[1] = uVar25;
                      puVar1[2] = uVar26;
                      puVar1[3] = uVar27;
                      puVar1 = (undefined4 *)(lVar21 + 0x10 + lVar8);
                      *puVar1 = uVar28;
                      puVar1[1] = uVar29;
                      puVar1[2] = uVar30;
                      puVar1[3] = uVar31;
                      puVar1 = (undefined4 *)(lVar21 + 0x20 + lVar8);
                      *puVar1 = uVar32;
                      puVar1[1] = uVar33;
                      puVar1[2] = uVar34;
                      puVar1[3] = uVar35;
                      puVar1 = (undefined4 *)(lVar21 + 0x30 + lVar8);
                      *puVar1 = uVar36;
                      puVar1[1] = uVar37;
                      puVar1[2] = uVar38;
                      puVar1[3] = uVar39;
                      puVar1 = (undefined4 *)(lVar21 + 0x40 + lVar8);
                      *puVar1 = uVar40;
                      puVar1[1] = uVar41;
                      puVar1[2] = uVar42;
                      puVar1[3] = uVar43;
                      puVar1 = (undefined4 *)(lVar21 + 0x50 + lVar8);
                      *puVar1 = uVar44;
                      puVar1[1] = uVar45;
                      puVar1[2] = uVar46;
                      puVar1[3] = uVar47;
                    }
                  }
                  break;
                }
                uVar11 = puVar15[2];
              } while (uVar11 != 0xffffffff);
            }
          }
          pUVar19 = (UObject *)(ulonglong)(uVar18 + 1);
          pFVar22 = local_170;
          pUVar23 = (UObject *)&pUVar23->field_0x2;
        } while (uVar18 + 1 != uVar3);
      }
    }
    else {
      local_158.Pose._0_8_ = 0;
      local_158.Pose._16_8_ = 0;
      local_158.ComponentSpaceFlags._0_8_ = 0;
      local_158.Pose._8_8_ = 0;
      local_158.ComponentSpaceFlags._8_8_ = 0;
      local_158.BoneMask._0_8_ = 0;
      local_158.BoneMask._8_8_ = 0;
      local_158.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
      local_158.BonesToConvert.ArrayNum = 0;
      local_158.BonesToConvert.ArrayMax = 0;
      FCSPose<FCompactPose>::InitPose(&local_158,this_02);
      uVar3 = *(uint *)&(param_1->Pose).field_0x8;
      if (uVar3 != 0) {
        pUVar23 = pUVar19;
        do {
          iVar4 = (this_00->BoneIndicesArray).ArrayNum;
          FVar17 = SUB84(pUVar19,0);
          uVar11 = 0;
          if ((int)FVar17 < iVar4) {
            uVar11 = ~(uint)FVar17 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_198 = (longlong)(int)FVar17;
            local_190 = (longlong)iVar4;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          uVar2 = *(ushort *)
                   ((longlong)&pUVar23->field_0x0 +
                   (longlong)(this_00->BoneIndicesArray).AllocatorInstance.Data);
          if (*(int *)&(this->BoneMapToSource).field_0x8 !=
              *(int *)&(this->BoneMapToSource).field_0x34) {
            puVar5 = *(undefined1 **)&(this->BoneMapToSource).field_0x40;
            puVar16 = &(this->BoneMapToSource).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar16 = puVar5;
            }
            uVar11 = *(uint *)(puVar16 +
                              ((ulonglong)(*(int *)&(this->BoneMapToSource).field_0x48 - 1) &
                              (ulonglong)uVar2) * 4);
            if (uVar11 != 0xffffffff) {
              do {
                puVar15 = (uint *)((longlong)(int)uVar11 * 0x10 +
                                  *(longlong *)&this->BoneMapToSource);
                if (*puVar15 == (uint)uVar2) {
                  puVar20 = puVar15 + 1;
                  if (puVar15 == (uint *)0x0) {
                    puVar20 = (uint *)0x0;
                  }
                  if (puVar20 != (uint *)0x0) {
                    uVar11 = *puVar20;
                    if ((-1 < (int)uVar11) &&
                       ((int)uVar11 < (this->SourceMeshTransformArray).ArrayNum)) {
                      iVar4 = (this->SourceMeshTransformArray).ArrayNum;
                      uVar18 = 0;
                      if ((int)uVar11 < iVar4) {
                        uVar18 = ~uVar11 >> 0x1f;
                      }
                      if ((uVar18 == 0) &&
                         (local_198 = (longlong)(int)uVar11, local_190 = (longlong)iVar4,
                         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar10)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      FCSPose<FCompactPose>::SetComponentSpaceTransform
                                (&local_158,FVar17,
                                 (TTransform<double> *)
                                 ((this->SourceMeshTransformArray).AllocatorInstance.Data +
                                 (longlong)(int)uVar11 * 0x60));
                    }
                  }
                  break;
                }
                uVar11 = puVar15[2];
              } while (uVar11 != 0xffffffff);
            }
          }
          pUVar19 = (UObject *)(ulonglong)((int)FVar17 + 1U);
          pUVar23 = (UObject *)&pUVar23->field_0x2;
          this_02 = local_168;
        } while ((int)FVar17 + 1U != uVar3);
      }
      FCSPose<FCompactPose>::ConvertComponentPosesToLocalPosesSafe(&local_158,this_02);
      pFVar22 = local_170;
    }
  }
  if (this->bCopyCurves != '\0') {
    TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
    CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
              ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&pFVar22->Curve,
               (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
               &this->SourceCurves);
  }
  if (this->bCopyCustomAttributes != false) {
    UE::Anim::Attributes::CopyAndRemapAttributes
              (&this->SourceCustomAttributes,&pFVar22->CustomAttributes,&this->SourceBoneToTarget,
               *(FBoneContainer **)&this_02->field_0x10);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146443500

void __thiscall
FAnimNode_CopyPoseFromMesh::GatherDebugData
          (FAnimNode_CopyPoseFromMesh *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  bool bVar1;
  UPackage *pUVar2;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar3;
  int iVar4;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyPoseFromMesh::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CopyPoseFromMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_CopyPoseFromMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh,(UObject *)pUVar2,
                         L"AnimNode_CopyPoseFromMesh");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_CopyPoseFromMesh.OuterSingleton)
                      ->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  bVar1 = FWeakObjectPtr::IsValid(&(this->CurrentlyUsedSourceMeshComponent).WeakPtr);
  if (bVar1) {
    this_00 = (USkeletalMeshComponent *)
              FWeakObjectPtr::Get(&(this->CurrentlyUsedSourceMeshComponent).WeakPtr);
    pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    if (pUVar3 != (USkeletalMesh *)0x0) {
      local_res8 = (FName)pUVar3->_padding_;
      ::FName::ToString(&local_res8,&local_58);
      goto LAB_146443624;
    }
  }
  ::FString::FString(&local_58,L"None");
LAB_146443624:
  ::FString::PrintfImpl(local_38,L"(\'%s\')");
  iVar4 = local_38[0].Data.ArrayNum + -1;
  if (local_38[0].Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_38[0].Data.AllocatorInstance.Data,iVar4);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_58,true);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// HasPreUpdate @ 146450c40

bool __thiscall FAnimNode_CopyPoseFromMesh::HasPreUpdate(FAnimNode_CopyPoseFromMesh *this)

{
  return true;
}

// Initialize_AnyThread @ 146459740

void __thiscall
FAnimNode_CopyPoseFromMesh::Initialize_AnyThread
          (FAnimNode_CopyPoseFromMesh *this,FAnimationInitializeContext *param_1)

{
  FExposedValueHandler *this_00;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyPoseFromMesh::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// PreUpdate @ 146460b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_CopyPoseFromMesh::PreUpdate(FAnimNode_CopyPoseFromMesh *this,UAnimInstance *param_1)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_CopyPoseFromMesh::PreUpdate(UAnimInstance_const_*)_::_2_::FStat_FAnimNode_CopyPoseFromMesh_PreUpdate>
  FVar11;
  USkeletalMeshComponent *pUVar12;
  USkeletalMesh *pUVar13;
  USkeletalMeshComponent *pUVar14;
  UClass *pUVar15;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  FBlendedHeapCurve *pFVar17;
  UAnimInstance *this_00;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  USkeletalMesh *local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  byte local_50;
  FStatMessage local_48;
  
  bVar8 = false;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FAnimNode_CopyPoseFromMesh_PreUpdate ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_CopyPoseFromMesh::PreUpdate(UAnimInstance_const_*)_::_2_::FStat_FAnimNode_CopyPoseFromMesh_PreUpdate>
           )0x0) {
        pFVar10 = ::FName::FName(&local_68,"FAnimNode_CopyPoseFromMesh_PreUpdate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FAnimNode_CopyPoseFromMesh_PreUpdate,
                   *pFVar10,L"FAnimNode_CopyPoseFromMesh_PreUpdate","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_FAnimNode_CopyPoseFromMesh_PreUpdate;
  if (StatPtr_FAnimNode_CopyPoseFromMesh_PreUpdate ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_CopyPoseFromMesh::PreUpdate(UAnimInstance_const_*)_::_2_::FStat_FAnimNode_CopyPoseFromMesh_PreUpdate>
       )0x0) {
    pFVar10 = ::FName::FName(&local_60,"FAnimNode_CopyPoseFromMesh_PreUpdate");
    FVar11 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_CopyPoseFromMesh::PreUpdate(UAnimInstance_const_*)_::_2_::FStat_FAnimNode_CopyPoseFromMesh_PreUpdate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_FAnimNode_CopyPoseFromMesh_PreUpdate
                          ,*pFVar10,L"FAnimNode_CopyPoseFromMesh_PreUpdate","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  local_50 = 0;
  FVar4 = *(FName *)FVar11;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      local_50 = local_50 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_res20.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_CopyPoseFromMesh.cpp"
                   ,0x75);
        local_50 = local_50 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_58 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      local_50 = local_50 | 4;
    }
  }
  pUVar12 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  RefreshMeshComponent(this,pUVar12);
  bVar7 = FWeakObjectPtr::IsValid(&(this->CurrentlyUsedSourceMeshComponent).WeakPtr);
  if (bVar7) {
    pUVar12 = (USkeletalMeshComponent *)
              FWeakObjectPtr::Get(&(this->CurrentlyUsedSourceMeshComponent).WeakPtr);
    if (pUVar12 != (USkeletalMeshComponent *)0x0) {
      pUVar13 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar12);
      if ((pUVar13 != (USkeletalMesh *)0x0) && ((pUVar12->_padding_ & 1) != 0)) {
        pUVar14 = (USkeletalMeshComponent *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar12->_padding_);
        if (pUVar14 != (USkeletalMeshComponent *)0x0) {
          pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          iVar3 = (int)pUVar15->_padding_;
          if ((iVar3 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar15->_padding_)) {
            pUVar12 = pUVar14;
          }
        }
        pUVar13 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar12);
        if ((pUVar13 == (USkeletalMesh *)0x0) || ((pUVar12->_padding_ & 1) == 0)) {
          (this->CurrentlyUsedMesh).WeakPtr = (FWeakObjectPtr)0x0;
        }
        else {
          bVar7 = USkinnedMeshComponent::ShouldUseUpdateRateOptimizations
                            ((USkinnedMeshComponent *)pUVar12);
          if ((bVar7) && (pUVar12->_padding_ != 0)) {
            pUVar14 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
            if (pUVar12->_padding_ == pUVar14->_padding_) {
              bVar8 = true;
            }
          }
          if ((*(char *)((longlong)&pUVar12->_padding_ + 2) < '\0') &&
             ((pUVar12->_padding_ & 0x2000000) != 0)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          pTVar16 = USkeletalMeshComponent::GetCachedComponentSpaceTransforms(pUVar12);
          pTVar2 = &this->SourceMeshTransformArray;
          piVar1 = &(this->SourceMeshTransformArray).ArrayMax;
          iVar3 = pTVar16->ArrayNum;
          lVar6 = (&pUVar12->_padding_)[(longlong)(int)pUVar12->_padding_ * 2];
          (this->SourceMeshTransformArray).ArrayNum = 0;
          if (*piVar1 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
          }
          if (((!bVar8) && (!bVar7)) || (iVar3 != (int)lVar6)) {
            pTVar16 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                      (&pUVar12->_padding_ + (longlong)(int)pUVar12->_padding_ * 2);
          }
          if (pTVar2 == pTVar16) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar3 = pTVar16->ArrayNum;
          if (iVar3 != 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x60,0x10,iVar3,&pTVar2->AllocatorInstance,
                               &(this->SourceMeshTransformArray).ArrayNum,
                               &(this->SourceMeshTransformArray).ArrayMax);
            memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x60,
                   (pTVar16->AllocatorInstance).Data,(longlong)iVar3 * 0x60);
          }
          local_78 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar12);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_78 != (USkeletalMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_78);
          }
          FWeakObjectPtr::operator=(&(this->CurrentlyUsedMesh).WeakPtr,(FObjectPtr)&local_78);
          if (this->bCopyCurves != '\0') {
            if (pUVar12->bEnableAnimation == '\0') {
              pFVar17 = USkeletalMeshComponent::GetAnimCurves(pUVar12);
              TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::operator=
                        ((TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)
                         &this->SourceCurves,
                         (TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)pFVar17);
              (this->SourceCurves).field_0x10 = pFVar17->field_0x10;
            }
            else {
              this_00 = USkeletalMeshComponent::GetAnimInstance(pUVar12);
              if (this_00 == (UAnimInstance *)0x0) {
                UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
                Empty((TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
                      &this->SourceCurves);
              }
              else {
                pTVar18 = UAnimInstance::GetAnimationCurveList(this_00,AttributeCurve);
                UE::Anim::FCurveUtils::
                BuildUnsorted<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
                          ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
                           &this->SourceCurves,pTVar18);
              }
            }
          }
          if (this->bCopyCustomAttributes != false) {
            UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::CopyFrom
                      ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                       &this->SourceCustomAttributes,
                       (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                       (pUVar12->AttributesArray + (int)pUVar12->_padding_));
          }
        }
      }
    }
  }
  if ((local_50 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_50 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar4 = local_58;
  if ((((local_50 & 4) != 0) && (local_58 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// RefreshMeshComponent @ 146462b50

void __thiscall
FAnimNode_CopyPoseFromMesh::RefreshMeshComponent
          (FAnimNode_CopyPoseFromMesh *this,USkeletalMeshComponent *param_1)

{
  int iVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  USkeletalMeshComponent *pUVar4;
  USkeletalMesh *pUVar5;
  USkeletalMesh *pUVar6;
  UClass *pUVar7;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SourceMeshComponent).WeakPtr);
  if (bVar2) {
    pUVar3 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->SourceMeshComponent).WeakPtr);
    pUVar4 = (USkeletalMeshComponent *)
             FWeakObjectPtr::Get(&(this->CurrentlyUsedSourceMeshComponent).WeakPtr);
    if (pUVar4 == (USkeletalMeshComponent *)0x0) {
      if (pUVar3 == (USkeletalMeshComponent *)0x0) {
        return;
      }
    }
    else if (pUVar4 == pUVar3) {
      pUVar5 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->CurrentlyUsedSourceMesh).WeakPtr);
      pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar4);
      if (pUVar6 == pUVar5) {
        if (param_1 == (USkeletalMeshComponent *)0x0) {
          return;
        }
        pUVar5 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->CurrentlyUsedTargetMesh).WeakPtr);
        pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
        if (pUVar6 == pUVar5) {
          return;
        }
      }
    }
LAB_146462bdd:
    ReinitializeMeshComponent(this,pUVar3,param_1);
    return;
  }
  if ((this->bUseAttachedParent != 0) && (param_1 != (USkeletalMeshComponent *)0x0)) {
    for (pUVar3 = (USkeletalMeshComponent *)param_1->_padding_;
        pUVar3 != (USkeletalMeshComponent *)0x0;
        pUVar3 = (USkeletalMeshComponent *)pUVar3->_padding_) {
      pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        pUVar4 = (USkeletalMeshComponent *)
                 FWeakObjectPtr::Get(&(this->CurrentlyUsedSourceMeshComponent).WeakPtr);
        if ((pUVar4 != (USkeletalMeshComponent *)0x0) && (pUVar4 == pUVar3)) {
          pUVar5 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->CurrentlyUsedSourceMesh).WeakPtr);
          pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar4);
          if (pUVar6 == pUVar5) {
            pUVar5 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->CurrentlyUsedTargetMesh).WeakPtr);
            pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
            if (pUVar6 == pUVar5) {
              return;
            }
            ReinitializeMeshComponent(this,pUVar3,param_1);
            return;
          }
        }
        goto LAB_146462bdd;
      }
    }
  }
  (this->CurrentlyUsedSourceMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// ReinitializeMeshComponent @ 1464639b0

void __thiscall
FAnimNode_CopyPoseFromMesh::ReinitializeMeshComponent
          (FAnimNode_CopyPoseFromMesh *this,USkeletalMeshComponent *param_1,
          USkeletalMeshComponent *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FNameEntryId FVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  USkeletalMesh *pUVar8;
  USkeletalMesh *pUVar9;
  longlong lVar10;
  undefined4 extraout_var;
  FReferenceSkeleton *pFVar11;
  int *piVar12;
  FName FVar13;
  longlong lVar14;
  int iVar15;
  uint local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined1 local_88 [16];
  USkeletalMeshComponent *local_78;
  USkeletalMesh *local_70;
  USkeletalMesh *local_68;
  int *local_60;
  int *local_58;
  uint *local_50;
  int *local_48;
  
  (this->CurrentlyUsedSourceMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CurrentlyUsedSourceMesh).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CurrentlyUsedTargetMesh).WeakPtr = (FWeakObjectPtr)0x0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->BoneMapToSource);
  if ((((param_2 != (USkeletalMeshComponent *)0x0) && (param_1 != (USkeletalMeshComponent *)0x0)) &&
      (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) &&
     (pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1), pUVar8 != (USkeletalMesh *)0x0
     )) {
    pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_2);
    if ((((pUVar8 != (USkeletalMesh *)0x0) && (((uint)pUVar8->_padding_ >> 0x1e & 1) == 0)) &&
        ((((uint)pUVar8->_padding_ >> 0xc & 1) == 0 &&
         ((pUVar9 != (USkeletalMesh *)0x0 && (((uint)pUVar9->_padding_ >> 0x1e & 1) == 0)))))) &&
       (((uint)pUVar9->_padding_ >> 0xc & 1) == 0)) {
      local_78 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=
                (&(this->CurrentlyUsedSourceMeshComponent).WeakPtr,(FObjectPtr)&local_78);
      local_70 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FWeakObjectPtr::operator=(&(this->CurrentlyUsedSourceMesh).WeakPtr,(FObjectPtr)&local_70);
      local_68 = pUVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      FWeakObjectPtr::operator=(&(this->CurrentlyUsedTargetMesh).WeakPtr,(FObjectPtr)&local_68);
      if (pUVar8 == pUVar9) {
        local_res18[0] = 0;
        lVar10 = (**(code **)(pUVar8->_padding_ + 800))(pUVar8);
        if (local_res18[0] < *(int *)(lVar10 + 0x28)) {
          local_60 = local_res18;
          local_58 = local_res18;
          do {
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)&this->BoneMapToSource,
                       (TPairInitializer<int_const_&,int_const_&> *)local_88,(bool *)&local_60);
            local_res18[0] = local_res18[0] + 1;
            lVar10 = (**(code **)(pUVar8->_padding_ + 800))(pUVar8);
          } while (local_res18[0] < *(int *)(lVar10 + 0x28));
        }
      }
      else {
        FVar1 = this->RootBoneToCopy;
        FVar4 = FNameEntryId::FromValidEName((int)local_88 + FloatProperty);
        FVar13.Number = 0;
        FVar13.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
        if (FVar1 == FVar13) {
          uVar5 = 0xffffffff;
        }
        else {
          pFVar11 = (FReferenceSkeleton *)(**(code **)(pUVar9->_padding_ + 800))(pUVar9);
          uVar5 = FReferenceSkeleton::FindBoneIndex(pFVar11,&this->RootBoneToCopy);
        }
        local_res8[0] = 0;
        lVar10 = (**(code **)(pUVar9->_padding_ + 800))(pUVar9);
        if ((int)local_res8[0] < *(int *)(lVar10 + 0x28)) {
          do {
            if ((uVar5 == 0xffffffff) || (local_res8[0] == uVar5)) {
LAB_146463c4c:
              lVar10 = (**(code **)(pUVar9->_padding_ + 800))();
              lVar14 = (longlong)(int)local_res8[0];
              uVar6 = 0;
              if ((int)local_res8[0] < *(int *)(lVar10 + 0x28)) {
                uVar6 = ~local_res8[0] >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar1 = *(FName *)(*(longlong *)(lVar10 + 0x20) + lVar14 * 0xc);
              lVar10 = (**(code **)(pUVar8->_padding_ + 800))(pUVar8);
              iVar15 = -1;
              if ((FVar1 != (FName)0x0) &&
                 (piVar12 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                    *)(lVar10 + 0x90),FVar1), piVar12 != (int *)0x0)) {
                iVar15 = *piVar12;
              }
              local_50 = local_res8;
              local_48 = local_res20;
              local_res20[0] = iVar15;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_&&>_>
                        ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)&this->BoneMapToSource,
                         (TPairInitializer<int_const_&,int_&&> *)(local_88 + 8),(bool *)&local_50);
            }
            else {
              pFVar11 = (FReferenceSkeleton *)(**(code **)(pUVar9->_padding_ + 800))(pUVar9);
              if ((int)uVar5 < (int)local_res8[0]) {
                uVar6 = FReferenceSkeleton::GetParentIndex(pFVar11,local_res8[0]);
                do {
                  if (uVar6 == uVar5) goto LAB_146463c4c;
                  uVar7 = 0;
                  if ((int)uVar6 < (pFVar11->FinalRefBoneInfo).ArrayNum) {
                    uVar7 = ~uVar6 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar6 = *(uint *)((pFVar11->FinalRefBoneInfo).AllocatorInstance.Data +
                                   (longlong)(int)uVar6 * 0xc + 8);
                } while (uVar6 != 0xffffffff);
              }
            }
            local_res8[0] = local_res8[0] + 1;
            lVar10 = (**(code **)(pUVar9->_padding_ + 800))(pUVar9);
          } while ((int)local_res8[0] < *(int *)(lVar10 + 0x28));
        }
      }
      if (this->bCopyCustomAttributes != false) {
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&this->SourceBoneToTarget,
                   *(int *)&(this->BoneMapToSource).field_0x8 -
                   *(int *)&(this->BoneMapToSource).field_0x34);
        Algo::
        Transform<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_&,_FAnimNode_CopyPoseFromMesh::ReinitializeMeshComponent_::__l23::<lambda_1>_>
                  (&this->BoneMapToSource,&this->SourceBoneToTarget,local_res8[0]._0_1_);
      }
    }
  }
  return;
}

// Update_AnyThread @ 146477d50

void __thiscall
FAnimNode_CopyPoseFromMesh::Update_AnyThread
          (FAnimNode_CopyPoseFromMesh *this,FAnimationUpdateContext *param_1)

{
  bool bVar1;
  FExposedValueHandler *this_00;
  UObject *pUVar2;
  USkeletalMeshComponent *this_01;
  USkeletalMesh *pUVar3;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *this_02;
  ForAnyElementType FVar4;
  FName local_res8;
  FString local_18;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyPoseFromMesh::Update_AnyThread");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  this_02 = &this->CurrentlyUsedSourceMeshComponent;
  bVar1 = FWeakObjectPtr::IsValid(&this_02->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_02->WeakPtr);
    if (pUVar2 == (UObject *)0x0) goto LAB_146477dbb;
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
    local_res8.Number = *(uint *)&pUVar2->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
  }
  else {
LAB_146477dbb:
    ::FString::FString(&local_18,L"None");
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Component",(wchar_t *)FVar4.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar1 = FWeakObjectPtr::IsValid(&this_02->WeakPtr);
  if (bVar1) {
    this_01 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&this_02->WeakPtr);
    pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
    if (pUVar3 != (USkeletalMesh *)0x0) {
      local_res8 = (FName)pUVar3->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      goto LAB_146477e4e;
    }
  }
  ::FString::FString(&local_18,L"None");
LAB_146477e4e:
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Mesh",
             (wchar_t *)FVar4.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

