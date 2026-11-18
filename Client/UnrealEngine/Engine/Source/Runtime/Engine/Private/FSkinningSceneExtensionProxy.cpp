// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FSkinningSceneExtensionProxy @ 148693ba0

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
FSkinningSceneExtensionProxy::FSkinningSceneExtensionProxy
          (FSkinningSceneExtensionProxy *this,FSkeletalMeshObject *param_1,USkinnedAsset *param_2,
          bool param_3)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  ushort *puVar5;
  ushort uVar6;
  code *pcVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  __m128 _Var19;
  char cVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar26;
  FSkinningSceneExtensionProxy *pFVar27;
  FReferenceSkeleton *this_00;
  FScriptContainerElement *pFVar28;
  ushort *puVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  char local_res20;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_e0;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_d0;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_98;
  undefined8 uVar46;
  
  this->SkinnedAsset = param_2;
  pTVar1 = &this->BoneHierarchy;
  this->MeshObject = param_1;
  this->UniqueAnimationCount = 1;
  (this->BoneHierarchy).ArrayNum = 0;
  (this->BoneHierarchy).ArrayMax = 0;
  piVar3 = &(this->BoneHierarchy).ArrayNum;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->BoneHierarchy).ArrayMax;
  (this->BoneObjectSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneObjectSpace).ArrayNum = 0;
  (this->BoneObjectSpace).ArrayMax = 0;
  this->bHasScale = '\0';
  this->bUseInstancing = '\0';
  this->bUseSectionBoneMap = '\0';
  this->bUseSkeletonBatching = '\0';
  this->MaxBoneTransformCount = 0;
  this->MaxBoneInfluenceCount = 0;
  this->_padding_ = (longlong)&___7FSkinningSceneExtensionProxy__6B_;
  local_res20 = param_3;
  uVar22 = FSkeletalMeshRenderData::GetNumBoneInfluences(this->MeshObject->SkeletalMeshRenderData);
  this->MaxBoneInfluenceCount = (ushort)uVar22;
  cVar20 = (**(code **)(this->MeshObject->_padding_ + 0x48))();
  if (cVar20 == '\0') {
    this_00 = (FReferenceSkeleton *)(**(code **)(*(longlong *)this->SkinnedAsset + 0x318))();
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    local_d0.DataPtr = (TTransform<double> *)(this_00->RawRefBonePose).AllocatorInstance.Data;
    local_d0.ArrayNum = (this_00->RawRefBonePose).ArrayNum;
    if ((local_d0.ArrayNum < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      pFVar27 = (FSkinningSceneExtensionProxy *)(*pcVar7)();
      return pFVar27;
    }
    FAnimationRuntime::FillUpComponentSpaceTransforms(this_00,&local_d0,&local_e0);
    uVar6 = (ushort)(this_00->RawRefBoneInfo).ArrayNum;
    this->MaxBoneTransformCount = uVar6;
    uVar22 = (uint)uVar6;
    iVar32 = *piVar3;
    local_res18 = (FScriptContainerElement *)CONCAT62(local_res18._2_6_,uVar6);
    if (iVar32 < (int)uVar22) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22 - iVar32,&pTVar1->AllocatorInstance,piVar3,piVar4);
      uVar22 = (uint)(ushort)local_res18;
    }
    else if ((int)uVar22 < iVar32) {
      iVar32 = iVar32 - uVar22;
      if ((iVar32 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar21)) {
        pcVar7 = (code *)swi(3);
        pFVar27 = (FSkinningSceneExtensionProxy *)(*pcVar7)();
        return pFVar27;
      }
      if (iVar32 != 0) {
        pFVar30 = (pTVar1->AllocatorInstance).Data + (ulonglong)uVar22 * 4;
        iVar23 = ((this->BoneHierarchy).ArrayNum - uVar22) - iVar32;
        if (iVar23 != 0) {
          memmove(pFVar30,pFVar30 + (longlong)iVar32 * 4,(longlong)iVar23 << 2);
        }
        iVar32 = (this->BoneHierarchy).ArrayNum - iVar32;
        (this->BoneHierarchy).ArrayNum = iVar32;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,iVar32,&(this->BoneHierarchy).ArrayMax);
      }
    }
    else {
      uVar22 = (uint)uVar6;
    }
    this->bHasScale = '\0';
    uVar36 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar18 = __real_3f800000;
    fVar17 = __real_38d1b717;
    uVar31 = 0;
    if (uVar22 != 0) {
      lVar37 = 0;
      lVar35 = 0;
      do {
        uVar24 = FReferenceSkeleton::GetParentIndexInternal
                           (this_00,uVar31,
                            (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)this_00);
        iVar32 = 0;
        auVar44 = extraout_XMM0;
        uVar25 = uVar31;
        do {
          uVar46 = auVar44._8_8_;
          if (uVar25 == 0) goto LAB_148693fc9;
          uVar33 = 0;
          if ((int)uVar25 < (this_00->FinalRefBoneInfo).ArrayNum) {
            uVar33 = ~uVar25 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             auVar44 = extraout_XMM0_00, bVar21)) {
            pcVar7 = (code *)swi(3);
            pFVar27 = (FSkinningSceneExtensionProxy *)(*pcVar7)();
            return pFVar27;
          }
          uVar46 = auVar44._8_8_;
          iVar32 = iVar32 + 1;
          uVar25 = *(uint *)((this_00->FinalRefBoneInfo).AllocatorInstance.Data +
                            (longlong)(int)uVar25 * 0xc + 8);
        } while (uVar25 != 0xffffffff);
        iVar32 = -1;
LAB_148693fc9:
        uVar33 = ~uVar31 >> 0x1f;
        uVar25 = 0;
        if ((int)uVar31 < (this->BoneHierarchy).ArrayNum) {
          uVar25 = uVar33;
        }
        if (uVar25 == 0) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar46 = extraout_XMM0_01._8_8_;
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            pFVar27 = (FSkinningSceneExtensionProxy *)(*pcVar7)();
            return pFVar27;
          }
        }
        *(uint *)((this->BoneHierarchy).AllocatorInstance.Data + lVar35) =
             iVar32 << 0x10 | uVar24 & 0xffff;
        if (local_res20 == '\0') {
          uVar25 = 0;
          if ((int)uVar31 < local_e0.ArrayNum) {
            uVar25 = uVar33;
          }
          if ((uVar25 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar7 = (code *)swi(3);
            pFVar27 = (FSkinningSceneExtensionProxy *)(*pcVar7)();
            return pFVar27;
          }
          _Var19 = GlobalVectorConstants::Float1110;
          fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
          *(double *)(local_e0.AllocatorInstance.Data + lVar37 + 0x40) =
               (double)GlobalVectorConstants::Float1110.m128_f32[0];
          *(double *)(local_e0.AllocatorInstance.Data + lVar37 + 0x40 + 8) = (double)fVar8;
          *(double *)(local_e0.AllocatorInstance.Data + lVar37 + 0x50) = (double)_Var19.m128_f32[2];
          *(double *)(local_e0.AllocatorInstance.Data + lVar37 + 0x50 + 8) =
               (double)_Var19.m128_f32[3];
          dVar12 = *(double *)(local_e0.AllocatorInstance.Data + lVar37);
          dVar13 = *(double *)(local_e0.AllocatorInstance.Data + lVar37 + 8);
          dVar14 = *(double *)(local_e0.AllocatorInstance.Data + lVar37 + 0x10);
          dVar15 = *(double *)(local_e0.AllocatorInstance.Data + lVar37 + 0x10 + 8);
          auVar47._0_8_ = dVar14 * dVar14 + dVar12 * dVar12;
          auVar47._8_8_ = dVar15 * dVar15 + dVar13 * dVar13;
          auVar42._8_4_ = SUB84(auVar47._8_8_,0);
          auVar42._0_8_ = auVar47._0_8_;
          auVar42._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
          auVar43._0_8_ = auVar42._8_8_ + auVar47._0_8_;
          auVar43._8_8_ = auVar47._0_8_ + auVar47._8_8_;
          auVar48 = sqrtpd(auVar47,auVar43);
          uVar38 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar43._0_8_);
          uVar40 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar43._8_8_);
          uVar39 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar43._0_8_);
          uVar41 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar43._8_8_);
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar48);
          auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar48);
          auVar45._0_8_ = uVar39 & (ulonglong)(auVar44._0_8_ * dVar12);
          uVar11 = uVar41 & (ulonglong)(auVar44._8_8_ * dVar13);
          auVar45._8_4_ = (undefined4)uVar11;
          auVar45._12_4_ = (undefined4)(uVar11 >> 0x20);
          auVar49._0_8_ = uVar38 & (ulonglong)(auVar48._0_8_ * dVar14);
          uVar11 = uVar40 & (ulonglong)(auVar48._8_8_ * dVar15);
          auVar49._8_4_ = (undefined4)uVar11;
          auVar49._12_4_ = (undefined4)(uVar11 >> 0x20);
          auVar9._4_4_ = ~(uint)(uVar39 >> 0x20) &
                         GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar9._0_4_ = ~(uint)uVar39 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar9._8_4_ = ~(uint)uVar41 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar9._12_4_ =
               ~(uint)(uVar41 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar44._4_4_ =
               ~(uint)(uVar38 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar44._0_4_ = ~(uint)uVar38 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar44._8_4_ = ~(uint)uVar40 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar44._12_4_ =
               ~(uint)(uVar40 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(local_e0.AllocatorInstance.Data + lVar37) = auVar45 | auVar9;
          *(undefined1 (*) [16])(local_e0.AllocatorInstance.Data + lVar37 + 0x10) =
               auVar49 | auVar44;
        }
        else if (this->bHasScale == 0) {
          uVar25 = 0;
          if ((int)uVar31 < local_e0.ArrayNum) {
            uVar25 = uVar33;
          }
          if (uVar25 == 0) {
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar46 = extraout_XMM0_02._8_8_;
            if (bVar21) {
              pcVar7 = (code *)swi(3);
              pFVar27 = (FSkinningSceneExtensionProxy *)(*pcVar7)();
              return pFVar27;
            }
          }
          auVar44 = *(undefined1 (*) [16])(local_e0.AllocatorInstance.Data + lVar37 + 0x40);
          auVar10._4_8_ = uVar46;
          auVar10._0_4_ = auVar44._4_4_;
          auVar48._0_8_ = auVar10._0_8_ << 0x20;
          auVar48._8_4_ = auVar44._8_4_;
          auVar48._12_4_ = auVar44._12_4_;
          if (fVar17 < (float)((uint)((float)(auVar48._8_8_ * auVar44._0_8_ *
                                             *(double *)
                                              (local_e0.AllocatorInstance.Data + lVar37 + 0x50)) -
                                     fVar18) & uVar36)) {
            this->bHasScale = '\x01';
          }
        }
        uVar31 = uVar31 + 1;
        lVar35 = lVar35 + 4;
        lVar37 = lVar37 + 0x60;
      } while ((int)uVar31 < (int)uVar22);
    }
    uVar6 = (ushort)local_res18;
    uVar36 = (uint)(ushort)local_res18;
    iVar32 = (this->BoneObjectSpace).ArrayNum;
    uVar22 = 7;
    if (this->bHasScale != 0) {
      uVar22 = 10;
    }
    uVar31 = uVar36 * uVar22;
    if (iVar32 < (int)uVar31) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar31 - iVar32,&(this->BoneObjectSpace).AllocatorInstance,
                 &(this->BoneObjectSpace).ArrayNum,&(this->BoneObjectSpace).ArrayMax);
    }
    else if ((int)uVar31 < iVar32) {
      iVar32 = iVar32 - uVar31;
      if ((iVar32 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar21)) {
        pcVar7 = (code *)swi(3);
        pFVar27 = (FSkinningSceneExtensionProxy *)(*pcVar7)();
        return pFVar27;
      }
      if (iVar32 != 0) {
        pFVar30 = (this->BoneObjectSpace).AllocatorInstance.Data + (ulonglong)uVar31 * 4;
        iVar23 = ((this->BoneObjectSpace).ArrayNum - iVar32) - uVar31;
        if (iVar23 != 0) {
          memmove(pFVar30,pFVar30 + (longlong)iVar32 * 4,(longlong)iVar23 << 2);
        }
        iVar32 = (this->BoneObjectSpace).ArrayNum - iVar32;
        (this->BoneObjectSpace).ArrayNum = iVar32;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->BoneObjectSpace).AllocatorInstance,iVar32,
                   &(this->BoneObjectSpace).ArrayMax);
      }
    }
    pFVar30 = (this->BoneObjectSpace).AllocatorInstance.Data;
    uVar31 = 0;
    if (uVar6 != 0) {
      lVar35 = 0;
      do {
        uVar25 = 0;
        if ((int)uVar31 < local_e0.ArrayNum) {
          uVar25 = ~uVar31 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          pFVar27 = (FSkinningSceneExtensionProxy *)(*pcVar7)();
          return pFVar27;
        }
        dVar12 = *(double *)(local_e0.AllocatorInstance.Data + lVar35 + 8);
        dVar13 = *(double *)(local_e0.AllocatorInstance.Data + lVar35 + 0x10);
        dVar14 = *(double *)(local_e0.AllocatorInstance.Data + lVar35 + 0x10 + 8);
        dVar15 = *(double *)(local_e0.AllocatorInstance.Data + lVar35 + 0x20);
        dVar16 = *(double *)(local_e0.AllocatorInstance.Data + lVar35 + 0x20 + 8);
        local_98 = *(double *)(local_e0.AllocatorInstance.Data + lVar35 + 0x30);
        *(float *)pFVar30 = (float)*(double *)(local_e0.AllocatorInstance.Data + lVar35);
        *(float *)(pFVar30 + 4) = (float)dVar12;
        *(float *)(pFVar30 + 8) = (float)dVar13;
        *(float *)(pFVar30 + 0xc) = (float)dVar14;
        *(float *)(pFVar30 + 0x10) = (float)dVar15;
        *(float *)(pFVar30 + 0x14) = (float)dVar16;
        *(float *)(pFVar30 + 0x18) = (float)local_98;
        if (this->bHasScale != 0) {
          local_c0 = *(double *)(local_e0.AllocatorInstance.Data + lVar35 + 0x40);
          dStack_b8 = *(double *)(local_e0.AllocatorInstance.Data + lVar35 + 0x40 + 8);
          local_b0 = *(double *)(local_e0.AllocatorInstance.Data + lVar35 + 0x50);
          *(float *)(pFVar30 + 0x1c) = (float)local_c0;
          *(float *)(pFVar30 + 0x20) = (float)dStack_b8;
          *(float *)(pFVar30 + 0x24) = (float)local_b0;
        }
        pFVar30 = pFVar30 + (ulonglong)uVar22 * 4;
        uVar31 = uVar31 + 1;
        lVar35 = lVar35 + 0x60;
      } while ((int)uVar31 < (int)uVar36);
    }
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
  }
  else {
    pTVar26 = FSkeletalMeshObject::GetRenderSections(this->MeshObject,0);
    iVar32 = pTVar26->ArrayNum;
    pFVar30 = (pTVar26->AllocatorInstance).Data;
    if ((iVar32 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      pFVar27 = (FSkinningSceneExtensionProxy *)(*pcVar7)();
      return pFVar27;
    }
    pFVar34 = pFVar30 + (longlong)iVar32 * 0x118;
    this->MaxBoneTransformCount = 0;
    for (pFVar28 = pFVar30; pFVar28 != pFVar34; pFVar28 = pFVar28 + 0x118) {
      if ((*(int *)(pFVar28 + 8) != 0) && (pFVar28[0x110] == (FScriptContainerElement)0x0)) {
        this->MaxBoneTransformCount = this->MaxBoneTransformCount + *(short *)(pFVar28 + 0x40);
      }
    }
    local_res18 = pFVar34;
    if (*piVar4 < (int)(uint)this->MaxBoneTransformCount) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(uint)this->MaxBoneTransformCount,&pTVar1->AllocatorInstance,*piVar3,piVar4);
    }
    if (pFVar30 != pFVar34) {
      pFVar30 = pFVar30 + 0x40;
      do {
        if ((*(int *)(pFVar30 + -0x38) != 0) && (pFVar30[0xd0] == (FScriptContainerElement)0x0)) {
          puVar29 = *(ushort **)(pFVar30 + -8);
          iVar32 = *(int *)pFVar30;
          puVar5 = puVar29 + iVar32;
          while( true ) {
            if (*(int *)pFVar30 != iVar32) {
              `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            pFVar34 = local_res18;
            if (puVar29 == puVar5) break;
            iVar23 = *piVar3;
            uVar6 = *puVar29;
            if (iVar23 == *piVar4) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar1->AllocatorInstance,piVar4);
            }
            puVar29 = puVar29 + 1;
            *piVar3 = iVar23 + 1;
            *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 4) = (uint)uVar6;
          }
        }
        pFVar28 = pFVar30 + 0xd8;
        pFVar30 = pFVar30 + 0x118;
      } while (pFVar28 != pFVar34);
    }
    this->bUseSectionBoneMap = '\x01';
  }
  return this;
}

// ~FSkinningSceneExtensionProxy @ 14869a940

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
FSkinningSceneExtensionProxy::~FSkinningSceneExtensionProxy(FSkinningSceneExtensionProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BoneObjectSpace).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneHierarchy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CreateRenderThreadResources @ 1486aee80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinningSceneExtensionProxy::CreateRenderThreadResources
          (FSkinningSceneExtensionProxy *this,FSceneInterface *param_1,FRHICommandListBase *param_2)

{
  return;
}

// DestroyRenderThreadResources @ 1486b0870

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
FSkinningSceneExtensionProxy::DestroyRenderThreadResources(FSkinningSceneExtensionProxy *this)

{
  return;
}

// GetAnimationProviderData @ 1486baee0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<unsigned___int64_const_,int> * __thiscall
FSkinningSceneExtensionProxy::GetAnimationProviderData
          (FSkinningSceneExtensionProxy *this,
          TArrayView<unsigned___int64_const_,int> *__return_storage_ptr__,bool *param_1)

{
  *param_1 = false;
  __return_storage_ptr__->DataPtr = (ulong64 *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetTransformProviderId @ 1486c8d80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGuid * __thiscall
FSkinningSceneExtensionProxy::GetTransformProviderId(FSkinningSceneExtensionProxy *this)

{
  return &AnimRuntimeId;
}

