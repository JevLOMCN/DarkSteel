// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 12

// FClothComplexColliders @ 14db8e9c0

FClothComplexColliders * __thiscall
Chaos::FClothComplexColliders::FClothComplexColliders
          (FClothComplexColliders *this,FEvolution *param_1,int param_2)

{
  FCollisionSubBones *this_00;
  TArrayCollectionArray<int> *pTVar1;
  
  this_00 = &this->CollisionSubBones;
  this->Evolution = param_1;
  pTVar1 = &(this->CollisionSubBones).BoneIndices;
  this->CollisionRangeId = param_2;
  *(undefined ***)&(this->CollisionSubBones).X =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  this_00->_padding_ = (longlong)&___7FCollisionSubBones_FClothComplexColliders_Chaos__6B_;
  *(undefined ***)pTVar1 = &___7__TArrayCollectionArray_H_Chaos__6B_;
  *(undefined ***)&(this->CollisionSubBones).BaseTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&(this->CollisionSubBones).OldTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&(this->CollisionSubBones).Transforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&(this->CollisionSubBones).V =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&(this->CollisionSubBones).W =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&(this->CollisionSubBones).R =
       &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  (this->CollisionSubBones)._padding_ = 0;
  (this->CollisionSubBones)._padding_ = 0;
  *(undefined4 *)&(this->CollisionSubBones)._padding_ = 0;
  *(undefined8 *)&(this->CollisionSubBones).BoneIndices.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionSubBones).BoneIndices.field_0x10 = 0;
  *(undefined8 *)&(this->CollisionSubBones).BaseTransforms.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionSubBones).BaseTransforms.field_0x10 = 0;
  *(undefined8 *)&(this->CollisionSubBones).OldTransforms.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionSubBones).OldTransforms.field_0x10 = 0;
  *(undefined8 *)&(this->CollisionSubBones).Transforms.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionSubBones).Transforms.field_0x10 = 0;
  *(undefined8 *)&(this->CollisionSubBones).X.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionSubBones).X.field_0x10 = 0;
  *(undefined8 *)&(this->CollisionSubBones).V.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionSubBones).V.field_0x10 = 0;
  *(undefined8 *)&(this->CollisionSubBones).R.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionSubBones).R.field_0x10 = 0;
  *(undefined8 *)&(this->CollisionSubBones).W.field_0x8 = 0;
  *(undefined8 *)&(this->CollisionSubBones).W.field_0x10 = 0;
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)pTVar1);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,
             (TArrayCollectionArrayBase *)&(this->CollisionSubBones).BaseTransforms);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,
             (TArrayCollectionArrayBase *)&(this->CollisionSubBones).OldTransforms);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,
             (TArrayCollectionArrayBase *)&(this->CollisionSubBones).Transforms);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)&(this->CollisionSubBones).X);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)&(this->CollisionSubBones).V);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)&(this->CollisionSubBones).R);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)&(this->CollisionSubBones).W);
  (this->SkinnedLevelSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedLevelSets).ArrayNum = 0;
  (this->SkinnedLevelSets).ArrayMax = 0;
  (this->MLLevelSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MLLevelSets).ArrayNum = 0;
  (this->MLLevelSets).ArrayMax = 0;
  (this->SkinnedTriangleMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedTriangleMeshes).ArrayNum = 0;
  (this->SkinnedTriangleMeshes).ArrayMax = 0;
  this->bSkipSkinnedTriangleMeshKinematicUpdate = false;
  this->MinLODSize = 0.0;
  return this;
}

// AddMLLevelSet @ 14dbb9510

void __thiscall
Chaos::FClothComplexColliders::AddMLLevelSet
          (FClothComplexColliders *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2
          ,TRefCountPtr<Chaos::FImplicitObject> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  FImplicitObject *pFVar3;
  FImplicitObject *pFVar4;
  longlong lVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  iVar6 = (this->MLLevelSets).ArrayNum;
  piVar1 = &(this->MLLevelSets).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->MLLevelSets).AllocatorInstance,piVar1);
  }
  (this->MLLevelSets).ArrayNum = iVar6 + 1;
  pFVar7 = (this->MLLevelSets).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  DefaultConstructItems<Chaos::FClothComplexColliders::FMLLevelSetData,int>(pFVar7,1);
  *(int *)pFVar7 = param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar7 + 8),param_2);
  pFVar3 = param_3->Reference;
  pFVar4 = *(FImplicitObject **)(pFVar7 + 0x18);
  if (pFVar4 != pFVar3) {
    *(FImplicitObject **)(pFVar7 + 0x18) = pFVar3;
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar4 != (FImplicitObject *)0x0) {
      LOCK();
      plVar2 = &pFVar4->_padding_;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  return;
}

// AddSkinnedLevelSet @ 14dbbaf40

void __thiscall
Chaos::FClothComplexColliders::AddSkinnedLevelSet
          (FClothComplexColliders *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2
          ,TRefCountPtr<Chaos::FImplicitObject> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  FImplicitObject *pFVar3;
  FImplicitObject *pFVar4;
  longlong lVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  iVar6 = (this->SkinnedLevelSets).ArrayNum;
  piVar1 = &(this->SkinnedLevelSets).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->SkinnedLevelSets).AllocatorInstance,piVar1);
  }
  (this->SkinnedLevelSets).ArrayNum = iVar6 + 1;
  pFVar7 = (this->SkinnedLevelSets).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  DefaultConstructItems<Chaos::FClothComplexColliders::FSkinnedLevelSetData,int>(pFVar7,1);
  *(int *)pFVar7 = param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar7 + 8),param_2);
  pFVar3 = param_3->Reference;
  pFVar4 = *(FImplicitObject **)(pFVar7 + 0x18);
  if (pFVar4 != pFVar3) {
    *(FImplicitObject **)(pFVar7 + 0x18) = pFVar3;
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar4 != (FImplicitObject *)0x0) {
      LOCK();
      plVar2 = &pFVar4->_padding_;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  return;
}

// AddSkinnedTriangleMesh @ 14dbbb010

void __thiscall
Chaos::FClothComplexColliders::AddSkinnedTriangleMesh
          (FClothComplexColliders *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2
          ,TRefCountPtr<Chaos::FImplicitObject> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  FImplicitObject *pFVar3;
  FImplicitObject *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  iVar8 = (this->SkinnedTriangleMeshes).ArrayNum;
  piVar1 = &(this->SkinnedTriangleMeshes).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,&(this->SkinnedTriangleMeshes).AllocatorInstance,piVar1);
  }
  (this->SkinnedTriangleMeshes).ArrayNum = iVar8 + 1;
  pFVar9 = (this->SkinnedTriangleMeshes).AllocatorInstance.Data + (longlong)iVar8 * 0x88;
  DefaultConstructItems<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int>(pFVar9,1);
  *(int *)pFVar9 = param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar9 + 8),param_2);
  pFVar3 = param_3->Reference;
  pFVar4 = *(FImplicitObject **)(pFVar9 + 0x18);
  if (pFVar4 != pFVar3) {
    *(FImplicitObject **)(pFVar9 + 0x18) = pFVar3;
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar4 != (FImplicitObject *)0x0) {
      LOCK();
      plVar2 = &pFVar4->_padding_;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  pFVar3 = param_3->Reference;
  if (pFVar3->Type != '\x12') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("T_DERIVED::StaticType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                       ,0xc2,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TArrayCollection::ResizeHelper((TArrayCollection *)(pFVar9 + 0x20),(int)pFVar3[0xb].Margin);
  return;
}

// AddSubBoneIndices @ 14dbbb110

void __thiscall
Chaos::FClothComplexColliders::AddSubBoneIndices
          (FClothComplexColliders *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  float *pfVar1;
  longlong lVar2;
  ulong64 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  __m128 _Var12;
  __m128 _Var13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ulong64 local_48;
  ulong64 uStack_40;
  ulong64 local_38;
  ulong64 uStack_30;
  
  iVar16 = param_1->ArrayNum;
  iVar20 = (int)(this->CollisionSubBones)._padding_;
  uVar17 = (ulonglong)iVar20;
  if ((iVar16 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Public\\ChaosCloth\\ChaosClothComplexColliders.h"
                          ,0x66,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  TArrayCollection::ResizeHelper
            ((TArrayCollection *)&this->CollisionSubBones,
             (int)(this->CollisionSubBones)._padding_ + iVar16);
  iVar16 = param_1->ArrayNum;
  if (0 < iVar16) {
    lVar2 = uVar17 * 4;
    lVar21 = 0;
    lVar18 = uVar17 * 0x30;
    iVar20 = -iVar20;
    do {
      uVar11 = (uint)uVar17;
      uVar19 = uVar11 + iVar20;
      uVar15 = 0;
      if ((int)uVar19 < iVar16) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar21);
      uVar15 = 0;
      if ((int)uVar11 < *(int *)&(this->CollisionSubBones).BoneIndices.field_0x10) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)
       (lVar2 + lVar21 + *(longlong *)&(this->CollisionSubBones).BoneIndices.field_0x8) = uVar4;
      _Var13 = UE::Math::TTransform<float>::Identity.Scale3D;
      _Var12 = UE::Math::TTransform<float>::Identity.Translation;
      fVar7 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
      fVar8 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
      fVar9 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
      fVar10 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
      uVar15 = 0;
      if ((int)uVar11 < *(int *)&(this->CollisionSubBones).BaseTransforms.field_0x10) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)&(this->CollisionSubBones).BaseTransforms.field_0x8;
      uVar17 = (ulonglong)(uVar11 + 1);
      lVar21 = lVar21 + 4;
      pfVar1 = (float *)(lVar5 + lVar18);
      *pfVar1 = fVar7;
      pfVar1[1] = fVar8;
      pfVar1[2] = fVar9;
      pfVar1[3] = fVar10;
      local_48 = _Var12.m128_u64[0];
      uStack_40 = _Var12.m128_u64[1];
      puVar3 = (ulong64 *)(lVar5 + 0x10 + lVar18);
      *puVar3 = local_48;
      puVar3[1] = uStack_40;
      local_38 = _Var13.m128_u64[0];
      uStack_30 = _Var13.m128_u64[1];
      puVar3 = (ulong64 *)(lVar5 + 0x20 + lVar18);
      *puVar3 = local_38;
      puVar3[1] = uStack_30;
      lVar18 = lVar18 + 0x30;
      iVar16 = param_1->ArrayNum;
    } while ((int)(uVar11 + 1 + iVar20) < iVar16);
  }
  return;
}

// ApplyPreSimulationTransforms @ 14dbbd720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClothComplexColliders::ApplyPreSimulationTransforms
          (FClothComplexColliders *this,TRigidTransform<float,3> *param_1,TVector<float,3> *param_2,
          TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *param_3,
          TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *param_4,float param_5)

{
  ulong64 *puVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  code *pcVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *pTVar16;
  FScriptContainerElement *pFVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  ulonglong uVar23;
  TTransform<float> *pTVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *pTVar28;
  uint uVar29;
  uint uVar30;
  TRigidTransform<float,3> *pTVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  undefined1 local_158 [8];
  TTransform<float> *local_150;
  uint local_148;
  undefined8 local_140;
  float local_138;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *local_130;
  undefined8 local_128;
  float local_120;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *local_118;
  FScriptContainerElement *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined8 local_fc;
  float local_f4;
  __m128 local_e8;
  __m128 local_d8;
  __m128 local_c8;
  ulonglong local_b8;
  
  uVar25 = __xmm_80000000800000008000000080000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar29 = 0;
  local_118 = param_4;
  local_150 = (TTransform<float> *)param_1;
  local_130 = param_3;
  if ((int)(this->CollisionSubBones)._padding_ != 0) {
    do {
      pTVar24 = local_150;
      iVar7 = *(int *)&(this->CollisionSubBones).OldTransforms.field_0x10;
      uVar27 = ~uVar29 >> 0x1f;
      uVar30 = 0;
      if ((int)uVar29 < iVar7) {
        uVar30 = uVar27;
      }
      if (uVar30 == 0) {
        local_168 = (longlong)(int)uVar29;
        local_160 = (longlong)iVar7;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar22) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      local_e8 = GlobalVectorConstants::Float0001;
      lVar26 = (longlong)(int)uVar29;
      local_d8 = GlobalVectorConstants::FloatZero;
      local_c8 = GlobalVectorConstants::Float1110;
      lVar32 = lVar26 * 0x30;
      UE::Math::TTransform<float>::Multiply
                ((TTransform<float> *)&local_e8,
                 (TTransform<float> *)
                 (*(longlong *)&(this->CollisionSubBones).OldTransforms.field_0x8 + lVar32),pTVar24)
      ;
      iVar7 = *(int *)&(this->CollisionSubBones).OldTransforms.field_0x10;
      uVar6 = local_e8.m128_u64[0];
      uVar15 = local_e8.m128_u64[1];
      uVar18 = local_d8.m128_u64[0];
      uVar19 = local_d8.m128_u64[1];
      uVar20 = local_c8.m128_u64[0];
      uVar21 = local_c8.m128_u64[1];
      uVar30 = 0;
      if ((int)uVar29 < iVar7) {
        uVar30 = uVar27;
      }
      if ((uVar30 == 0) &&
         (local_168 = lVar26, local_160 = (longlong)iVar7,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar8 = *(longlong *)&(this->CollisionSubBones).OldTransforms.field_0x8;
      *(ulong64 *)(lVar32 + lVar8) = uVar6;
      ((ulong64 *)(lVar32 + lVar8))[1] = uVar15;
      puVar1 = (ulong64 *)(lVar32 + 0x10 + lVar8);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1 = (ulong64 *)(lVar32 + 0x20 + lVar8);
      *puVar1 = uVar20;
      puVar1[1] = uVar21;
      iVar7 = *(int *)&(this->CollisionSubBones).OldTransforms.field_0x10;
      uVar30 = 0;
      if ((int)uVar29 < iVar7) {
        uVar30 = uVar27;
      }
      if ((uVar30 == 0) &&
         (local_168 = lVar26, local_160 = (longlong)iVar7,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar30 = *(uint *)&param_2->field_0x4;
      uVar5 = *(uint *)&param_2->field_0x8;
      lVar8 = *(longlong *)&(this->CollisionSubBones).OldTransforms.field_0x8;
      pfVar2 = (float *)(lVar32 + 0x10 + lVar8);
      fVar10 = pfVar2[1];
      fVar41 = pfVar2[2];
      fVar39 = pfVar2[3];
      pfVar3 = (float *)(lVar32 + 0x10 + lVar8);
      *pfVar3 = (float)(*(uint *)param_2 ^ uVar25) + *pfVar2;
      pfVar3[1] = (float)(uVar30 ^ uVar25) + fVar10;
      pfVar3[2] = (float)(uVar5 ^ uVar25) + fVar41;
      pfVar3[3] = fVar39 + 0.0;
      iVar7 = *(int *)&(this->CollisionSubBones).OldTransforms.field_0x10;
      uVar30 = 0;
      if ((int)uVar29 < iVar7) {
        uVar30 = uVar27;
      }
      if ((uVar30 == 0) &&
         (local_168 = lVar26, local_160 = (longlong)iVar7,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar7 = *(int *)&(this->CollisionSubBones).X.field_0x10;
      puVar4 = (undefined8 *)
               (lVar32 + 0x10 + *(longlong *)&(this->CollisionSubBones).OldTransforms.field_0x8);
      local_108 = *(undefined4 *)puVar4;
      uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
      uVar6 = *puVar4;
      uVar11 = *(undefined4 *)(puVar4 + 1);
      uVar30 = 0;
      if ((int)uVar29 < iVar7) {
        uVar30 = uVar27;
      }
      local_100 = uVar11;
      if ((uVar30 == 0) &&
         (local_168 = lVar26, local_160 = (longlong)iVar7,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar8 = *(longlong *)&(this->CollisionSubBones).X.field_0x8;
      *(undefined8 *)(lVar8 + lVar26 * 0xc) = uVar6;
      *(undefined4 *)(lVar8 + 8 + lVar26 * 0xc) = uVar11;
      iVar7 = *(int *)&(this->CollisionSubBones).OldTransforms.field_0x10;
      uVar30 = 0;
      if ((int)uVar29 < iVar7) {
        uVar30 = uVar27;
      }
      if ((uVar30 == 0) &&
         (local_168 = lVar26, local_160 = (longlong)iVar7,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar7 = *(int *)&(this->CollisionSubBones).R.field_0x10;
      puVar4 = (undefined8 *)
               (lVar32 + *(longlong *)&(this->CollisionSubBones).OldTransforms.field_0x8);
      uVar6 = *puVar4;
      uVar15 = puVar4[1];
      uVar30 = 0;
      if ((int)uVar29 < iVar7) {
        uVar30 = uVar27;
      }
      if ((uVar30 == 0) &&
         (local_168 = lVar26, local_160 = (longlong)iVar7,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar29 = uVar29 + 1;
      puVar4 = (undefined8 *)(*(longlong *)&(this->CollisionSubBones).R.field_0x8 + lVar26 * 0x10);
      *puVar4 = uVar6;
      puVar4[1] = uVar15;
    } while (uVar29 < (uint)(this->CollisionSubBones)._padding_);
  }
  fVar10 = __real_3f800000;
  local_148 = (this->SkinnedTriangleMeshes).ArrayNum;
  uVar23 = (ulonglong)(int)local_148;
  pFVar33 = (this->SkinnedTriangleMeshes).AllocatorInstance.Data;
  local_110 = pFVar33 + uVar23 * 0x88;
  pTVar28 = local_130;
  do {
    pFVar17 = local_110;
    if ((this->SkinnedTriangleMeshes).ArrayNum != (int)uVar23) {
      local_158[0] = 0;
      `TCheckedPointerIterator<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (pFVar33 == pFVar17) {
      return;
    }
    uVar25 = *(uint *)pFVar33;
    uVar29 = 0;
    if ((int)uVar25 < pTVar28->ArrayNum) {
      uVar29 = ~uVar25 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (local_168 = (longlong)(int)uVar25, local_160 = (longlong)pTVar28->ArrayNum,
       bVar22 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar16 = local_118;
    uVar29 = *(uint *)pFVar33;
    pTVar31 = pTVar28->DataPtr + (int)uVar25;
    uVar25 = 0;
    if ((int)uVar29 < local_118->ArrayNum) {
      uVar25 = ~uVar29 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (local_168 = (longlong)(int)uVar29, local_160 = (longlong)local_118->ArrayNum,
       bVar22 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar26 = 0;
    uVar25 = 0;
    pTVar24 = (TTransform<float> *)(pTVar16->DataPtr + (int)uVar29);
    local_150 = pTVar24;
    if (0 < (int)*(uint *)(pFVar33 + 0x68)) {
      lVar32 = 0;
      fVar41 = fVar10 / param_5;
      do {
        uVar30 = ~uVar25 >> 0x1f;
        uVar29 = 0;
        if ((int)uVar25 < (int)*(uint *)(pFVar33 + 0x50)) {
          uVar29 = uVar30;
        }
        if (uVar29 == 0) {
          local_168 = (longlong)(int)uVar25;
          local_160 = (longlong)(int)*(uint *)(pFVar33 + 0x50);
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          pTVar24 = local_150;
          if (bVar22) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        fVar12 = *(float *)pTVar31;
        fVar13 = *(float *)&pTVar31->field_0x4;
        fVar40 = *(float *)&pTVar31->field_0x8;
        fVar14 = *(float *)&pTVar31->field_0xc;
        fVar39 = *(float *)(lVar32 + 8 + *(longlong *)(pFVar33 + 0x48));
        uVar6 = *(undefined8 *)(lVar32 + *(longlong *)(pFVar33 + 0x48));
        fVar38 = (float)uVar6;
        fVar37 = (float)((ulonglong)uVar6 >> 0x20);
        uVar29 = 0;
        if ((int)uVar25 < (int)*(uint *)(pFVar33 + 0x68)) {
          uVar29 = uVar30;
        }
        fVar34 = fVar37 * fVar12 - fVar13 * fVar38;
        fVar35 = fVar39 * fVar13 - fVar40 * fVar37;
        fVar36 = fVar38 * fVar40 - fVar12 * fVar39;
        fVar35 = fVar35 + fVar35;
        fVar36 = fVar36 + fVar36;
        fVar34 = fVar34 + fVar34;
        local_140 = CONCAT44(fVar14 * fVar36 + fVar37 + (fVar35 * fVar40 - fVar34 * fVar12) +
                             *(float *)&pTVar31->field_0x14,
                             fVar14 * fVar35 + fVar38 + (fVar34 * fVar13 - fVar36 * fVar40) +
                             *(float *)&pTVar31->field_0x10);
        local_138 = fVar14 * fVar34 + fVar39 + (fVar36 * fVar12 - fVar35 * fVar13) +
                    *(float *)&pTVar31->field_0x18;
        local_fc = local_140;
        local_f4 = local_138;
        if ((uVar29 == 0) &&
           (local_168 = lVar26, local_160 = (longlong)(int)*(uint *)(pFVar33 + 0x68),
           bVar22 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , pTVar24 = local_150, bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar12 = (pTVar24->Rotation).m128_f32[0];
        fVar13 = (pTVar24->Rotation).m128_f32[1];
        fVar40 = (pTVar24->Rotation).m128_f32[2];
        fVar14 = (pTVar24->Rotation).m128_f32[3];
        fVar39 = *(float *)(*(longlong *)(pFVar33 + 0x60) + 8 + lVar32);
        uVar6 = *(undefined8 *)(*(longlong *)(pFVar33 + 0x60) + lVar32);
        fVar38 = (float)uVar6;
        fVar37 = (float)((ulonglong)uVar6 >> 0x20);
        uVar29 = 0;
        if ((int)uVar25 < (int)*(uint *)(pFVar33 + 0x80)) {
          uVar29 = uVar30;
        }
        fVar34 = fVar37 * fVar12 - fVar13 * fVar38;
        fVar35 = fVar39 * fVar13 - fVar40 * fVar37;
        fVar36 = fVar38 * fVar40 - fVar12 * fVar39;
        fVar35 = fVar35 + fVar35;
        fVar36 = fVar36 + fVar36;
        fVar34 = fVar34 + fVar34;
        fVar38 = fVar14 * fVar35 + fVar38 + (fVar34 * fVar13 - fVar36 * fVar40) +
                 (pTVar24->Translation).m128_f32[0];
        fVar40 = fVar14 * fVar36 + fVar37 + (fVar35 * fVar40 - fVar34 * fVar12) +
                 (pTVar24->Translation).m128_f32[1];
        local_120 = fVar14 * fVar34 + fVar39 + (fVar36 * fVar12 - fVar35 * fVar13) +
                    (pTVar24->Translation).m128_f32[2];
        local_128 = CONCAT44(fVar40,fVar38);
        fVar39 = local_120 - local_138;
        fVar38 = fVar38 - (float)local_140;
        fVar40 = fVar40 - local_140._4_4_;
        if ((uVar29 == 0) &&
           (local_168 = lVar26, local_160 = (longlong)(int)*(uint *)(pFVar33 + 0x80),
           bVar22 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , pTVar24 = local_150, bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *(longlong *)(pFVar33 + 0x78);
        uVar25 = uVar25 + 1;
        lVar26 = lVar26 + 1;
        *(float *)(lVar32 + lVar8) = fVar38 * fVar41;
        *(float *)(lVar32 + 4 + lVar8) = fVar40 * fVar41;
        *(float *)(lVar32 + 8 + lVar8) = fVar39 * fVar41;
        lVar32 = lVar32 + 0xc;
        pTVar28 = local_130;
      } while ((int)uVar25 < (int)*(uint *)(pFVar33 + 0x68));
    }
    pFVar33 = pFVar33 + 0x88;
    uVar23 = (ulonglong)local_148;
  } while( true );
}

// ExtractComplexColliderBoneData @ 14dbf06c0

void __thiscall
Chaos::FClothComplexColliders::ExtractComplexColliderBoneData
          (FClothComplexColliders *this,
          TMap<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>_>
          *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  TPairInitializer<Chaos::Softs::FParticleRangeIndex_&&,Chaos::Softs::FPBDComplexColliderBoneData_&&>
  local_res18;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FPBDComplexColliderBoneData **local_48;
  undefined8 *local_40;
  
  iVar1 = (this->SkinnedLevelSets).ArrayNum;
  pFVar6 = (this->SkinnedLevelSets).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->SkinnedLevelSets).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FClothComplexColliders::FSkinnedLevelSetData_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    local_98 = *(undefined8 *)(pFVar6 + 8);
    iVar2 = *(int *)(pFVar6 + 0x10);
    local_e8 = 0;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    local_d8 = 0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    local_c8 = 0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    local_b8 = 0;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    local_a8 = 0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_88 = *(undefined8 *)&(this->CollisionSubBones).X.field_0x8;
    uStack_e0 = CONCAT44(uStack_8c,iVar2);
    iVar3 = *(int *)&(this->CollisionSubBones).X.field_0x10;
    local_e8 = local_98;
    iStack_90 = iVar2;
    if (iVar3 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_78 = *(undefined8 *)&(this->CollisionSubBones).V.field_0x8;
    uStack_d0 = CONCAT44(uStack_7c,iVar3);
    iVar2 = *(int *)&(this->CollisionSubBones).V.field_0x10;
    local_d8 = local_88;
    iStack_80 = iVar3;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_68 = *(undefined8 *)&(this->CollisionSubBones).R.field_0x8;
    uStack_c0 = CONCAT44(uStack_6c,iVar2);
    iVar3 = *(int *)&(this->CollisionSubBones).R.field_0x10;
    local_c8 = local_78;
    iStack_70 = iVar2;
    if (iVar3 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_58 = *(undefined8 *)&(this->CollisionSubBones).W.field_0x8;
    uStack_b0 = CONCAT44(uStack_5c,iVar3);
    iVar2 = *(int *)&(this->CollisionSubBones).W.field_0x10;
    local_b8 = local_68;
    iStack_60 = iVar3;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_res18.Value._0_4_ = this->CollisionRangeId;
    local_res18.Value._4_4_ = *(undefined4 *)pFVar6;
    local_48 = &local_res18.Value;
    uStack_a0 = CONCAT44(uStack_4c,iVar2);
    local_40 = &local_e8;
    local_a8 = local_58;
    iStack_50 = iVar2;
    TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<Chaos::Softs::FParticleRangeIndex_&&,Chaos::Softs::FPBDComplexColliderBoneData_&&>_>
              ((TSet<TTuple<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData>,TDefaultMapHashableKeyFuncs<Chaos::Softs::FParticleRangeIndex,Chaos::Softs::FPBDComplexColliderBoneData,0>,FDefaultSetAllocator>
                *)param_1,&local_res18,(bool *)&local_48);
    pFVar6 = pFVar6 + 0x20;
  }
  return;
}

// KinematicUpdate @ 14dc04d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothComplexColliders::KinematicUpdate
          (FClothComplexColliders *this,FSolverCollisionParticlesRange *param_1,float param_2,
          float param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  FWeightedLatticeImplicitObject *this_00;
  FMLLevelSet *this_01;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  TVector<float,3> TVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  __m128 _Var16;
  FScriptContainerElement *pFVar17;
  __m128d _Var18;
  __m128d _Var19;
  bool bVar20;
  int iVar21;
  int iVar22;
  TQuat<float> *pTVar23;
  ulonglong uVar24;
  TVector<float,3> *pTVar25;
  TAABB<float,3> *pTVar26;
  TParticles<float,3> *pTVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  FSkinnedTriangleMesh *this_02;
  longlong lVar34;
  uint uVar35;
  uint *puVar36;
  bool bVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  undefined1 auVar59 [16];
  double adVar60 [2];
  double adVar61 [2];
  float fVar62;
  undefined4 uVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  float fVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  float fVar77;
  uint uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined1 auStackY_608 [32];
  undefined1 local_5d7;
  undefined1 local_5d6;
  undefined1 local_5d5;
  undefined1 local_5d4;
  undefined1 local_5d3 [3];
  uint local_5d0;
  float local_5cc;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_5c8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_5b8;
  float local_5a8;
  FScriptContainerElement *local_5a0;
  FSkinnedTriangleMesh *local_598;
  FScriptContainerElement *local_590;
  FSolverCollisionParticlesRange *local_588;
  undefined1 local_578 [16];
  float local_568;
  float fStack_564;
  float local_560;
  float local_55c;
  float fStack_558;
  float local_554;
  undefined8 local_550;
  float local_548;
  FClothComplexColliders *local_540;
  undefined8 local_538;
  float local_530;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_518;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TQuat<float> local_448;
  TQuat<float> local_438;
  TTransform<double> local_428;
  TTransform<double> local_3c8;
  TQuat<float> local_368;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  TAABB<float,3> local_348;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_608;
  bVar37 = -1 < CpuChannel->Enabled;
  local_5cc = param_3;
  local_588 = param_1;
  local_540 = this;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId121,"FClothComplexColliders_KinematicUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothComplexColliders.cpp"
               ,0x79);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId121);
  }
  if ((*(int *)&param_1->field_0x18 != this->CollisionRangeId) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles.GetRangeId() == CollisionRangeId",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothComplexColliders.cpp"
                          ,0x7a,L""), bVar20)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar64 = _UNK_1506895dc;
  fVar15 = _UNK_1506895d8;
  fVar14 = _UNK_1506895d4;
  fVar13 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  fVar4 = __real_bf800000;
  fVar3 = __real_3f800000;
  uVar29 = 0;
  local_5a8 = __real_3f800000 - param_3;
  if ((int)(this->CollisionSubBones)._padding_ != 0) {
    fVar77 = __real_3f800000 / param_2;
    do {
      fVar51 = local_5a8;
      uVar35 = ~uVar29 >> 0x1f;
      uVar32 = 0;
      if ((int)uVar29 < *(int *)&(this->CollisionSubBones).Transforms.field_0x10) {
        uVar32 = uVar35;
      }
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar34 = (longlong)(int)uVar29;
      pfVar2 = (float *)(*(longlong *)&(this->CollisionSubBones).Transforms.field_0x8 + 0x10 +
                        lVar34 * 0x30);
      local_568 = *pfVar2;
      fStack_564 = pfVar2[1];
      local_560 = pfVar2[2];
      uVar32 = 0;
      if ((int)uVar29 < *(int *)&(this->CollisionSubBones).OldTransforms.field_0x10) {
        uVar32 = uVar35;
      }
      fVar62 = local_568 * local_5cc;
      fVar68 = fStack_564 * local_5cc;
      fVar55 = local_560 * local_5cc;
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pfVar2 = (float *)(*(longlong *)&(this->CollisionSubBones).OldTransforms.field_0x8 + 0x10 +
                        lVar34 * 0x30);
      local_55c = *pfVar2;
      fStack_558 = pfVar2[1];
      local_554 = pfVar2[2];
      uVar32 = 0;
      if ((int)uVar29 < *(int *)&(this->CollisionSubBones).X.field_0x10) {
        uVar32 = uVar35;
      }
      fVar62 = local_55c * fVar51 + fVar62;
      fVar55 = local_554 * fVar51 + fVar55;
      fVar68 = fStack_558 * fVar51 + fVar68;
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&(this->CollisionSubBones).X.field_0x8;
      fVar51 = *(float *)(lVar6 + lVar34 * 0xc);
      fVar47 = *(float *)(lVar6 + 4 + lVar34 * 0xc);
      fVar48 = *(float *)(lVar6 + 8 + lVar34 * 0xc);
      uVar32 = 0;
      if ((int)uVar29 < *(int *)&(this->CollisionSubBones).V.field_0x10) {
        uVar32 = uVar35;
      }
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&(this->CollisionSubBones).V.field_0x8;
      *(float *)(lVar6 + lVar34 * 0xc) = (fVar62 - fVar51) * fVar77;
      *(float *)(lVar6 + 4 + lVar34 * 0xc) = (fVar68 - fVar47) * fVar77;
      *(float *)(lVar6 + 8 + lVar34 * 0xc) = (fVar55 - fVar48) * fVar77;
      uVar32 = 0;
      if ((int)uVar29 < *(int *)&(this->CollisionSubBones).X.field_0x10) {
        uVar32 = uVar35;
      }
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&(this->CollisionSubBones).X.field_0x8;
      *(ulonglong *)(lVar6 + lVar34 * 0xc) = CONCAT44(fVar68,fVar62);
      *(float *)(lVar6 + 8 + lVar34 * 0xc) = fVar55;
      uVar32 = 0;
      if ((int)uVar29 < *(int *)&(this->CollisionSubBones).Transforms.field_0x10) {
        uVar32 = uVar35;
      }
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)&(this->CollisionSubBones).Transforms.field_0x8 + lVar34 * 0x30);
      local_448._0_8_ = *puVar1;
      local_448._8_8_ = puVar1[1];
      uVar32 = 0;
      if ((int)uVar29 < *(int *)&(this->CollisionSubBones).OldTransforms.field_0x10) {
        uVar32 = uVar35;
      }
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)&(this->CollisionSubBones).OldTransforms.field_0x8 + lVar34 * 0x30);
      local_438._0_8_ = *puVar1;
      local_438._8_8_ = puVar1[1];
      pTVar23 = UE::Math::TQuat<float>::Slerp_NotNormalized
                          (&local_368,&local_438,&local_448,local_5cc);
      fVar51 = pTVar23->X;
      fVar55 = pTVar23->Y;
      fVar62 = pTVar23->Z;
      fVar68 = pTVar23->W;
      uVar32 = 0;
      if ((int)uVar29 < *(int *)&(this->CollisionSubBones).R.field_0x10) {
        uVar32 = uVar35;
      }
      fVar47 = fVar55 * fVar55 + fVar51 * fVar51;
      fVar48 = fVar51 * fVar51 + fVar55 * fVar55;
      fVar49 = fVar68 * fVar68 + fVar62 * fVar62;
      fVar50 = fVar62 * fVar62 + fVar68 * fVar68;
      auVar42._0_4_ = fVar49 + fVar47;
      auVar42._4_4_ = fVar50 + fVar48;
      auVar42._8_4_ = fVar47 + fVar49;
      auVar42._12_4_ = fVar48 + fVar50;
      auVar43 = sqrtps(auVar42,auVar42);
      auVar43 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar43);
      auVar57._0_4_ = (uint)(auVar43._0_4_ * fVar51) & -(uint)(fVar13 <= auVar42._0_4_);
      auVar57._4_4_ = (uint)(auVar43._4_4_ * fVar55) & -(uint)(fVar14 <= auVar42._4_4_);
      auVar57._8_4_ = (uint)(auVar43._8_4_ * fVar62) & -(uint)(fVar15 <= auVar42._8_4_);
      auVar57._12_4_ = (uint)(auVar43._12_4_ * fVar68) & -(uint)(fVar64 <= auVar42._12_4_);
      auVar43._4_4_ =
           ~-(uint)(fVar14 <= auVar42._4_4_) & GlobalVectorConstants::Float0001.m128_u32[1];
      auVar43._0_4_ =
           ~-(uint)(fVar13 <= auVar42._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0];
      auVar43._8_4_ =
           ~-(uint)(fVar15 <= auVar42._8_4_) & GlobalVectorConstants::Float0001.m128_u32[2];
      auVar43._12_4_ =
           ~-(uint)(fVar64 <= auVar42._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
      auVar57 = auVar57 | auVar43;
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      _Var16 = GlobalVectorConstants::FloatOne;
      fVar47 = auVar57._0_4_;
      fVar48 = auVar57._4_4_;
      fVar49 = auVar57._8_4_;
      fVar50 = auVar57._12_4_;
      pfVar2 = (float *)(*(longlong *)&(this->CollisionSubBones).R.field_0x8 + lVar34 * 0x10);
      fVar51 = *pfVar2 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
      fVar55 = pfVar2[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
      fVar62 = pfVar2[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
      fVar68 = pfVar2[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
      auVar53._0_4_ =
           fVar68 * fVar47 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar50 * fVar51
           + fVar62 * fVar48 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
           fVar55 * fVar49 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      auVar53._4_4_ =
           fVar62 * fVar47 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] + fVar50 * fVar55
           + fVar68 * fVar48 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
           fVar51 * fVar49 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      auVar53._8_4_ =
           fVar55 * fVar47 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] + fVar50 * fVar62
           + fVar51 * fVar48 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
           fVar68 * fVar49 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      auVar53._12_4_ =
           fVar51 * fVar47 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] + fVar50 * fVar68
           + fVar55 * fVar48 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
           fVar62 * fVar49 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      fVar51 = fVar4;
      if ((fVar4 <= auVar53._12_4_) && (fVar51 = auVar53._12_4_, fVar3 <= auVar53._12_4_)) {
        fVar51 = fVar3;
      }
      fVar51 = acosf(fVar51);
      fVar51 = fVar51 + fVar51;
      uVar32 = 0;
      if ((int)uVar29 < *(int *)&(this->CollisionSubBones).W.field_0x10) {
        uVar32 = uVar35;
      }
      auVar43 = insertps(auVar53,auVar53,8);
      fVar48 = auVar43._0_4_;
      fVar49 = auVar43._4_4_;
      fVar50 = auVar43._8_4_;
      fVar54 = auVar43._12_4_;
      fVar55 = fVar49 * fVar49 + fVar48 * fVar48;
      fVar62 = fVar48 * fVar48 + fVar49 * fVar49;
      fVar68 = fVar54 * fVar54 + fVar50 * fVar50;
      fVar47 = fVar50 * fVar50 + fVar54 * fVar54;
      auVar44._0_4_ = fVar68 + fVar55;
      auVar44._4_4_ = fVar47 + fVar62;
      auVar44._8_4_ = fVar55 + fVar68;
      auVar44._12_4_ = fVar62 + fVar47;
      uVar38 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar44._0_4_);
      uVar39 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar44._4_4_);
      uVar40 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar44._8_4_);
      uVar41 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar44._12_4_);
      auVar43 = sqrtps(auVar44,auVar44);
      auVar43 = divps((undefined1  [16])_Var16,auVar43);
      auVar59._0_4_ = (uint)(auVar43._0_4_ * fVar48) & uVar38;
      auVar59._4_4_ = (uint)(auVar43._4_4_ * fVar49) & uVar39;
      auVar59._8_4_ = (uint)(auVar43._8_4_ * fVar50) & uVar40;
      auVar59._12_4_ = (uint)(auVar43._12_4_ * fVar54) & uVar41;
      auVar8._4_4_ = ~uVar39 & GlobalVectorConstants::Float1000.m128_u32[1];
      auVar8._0_4_ = ~uVar38 & GlobalVectorConstants::Float1000.m128_u32[0];
      auVar8._8_4_ = ~uVar40 & GlobalVectorConstants::Float1000.m128_u32[2];
      auVar8._12_4_ = ~uVar41 & GlobalVectorConstants::Float1000.m128_u32[3];
      auVar59 = auVar59 | auVar8;
      local_550._0_4_ = auVar59._0_4_;
      fVar55 = fVar51 * (float)local_550;
      local_550._4_4_ = auVar59._4_4_;
      fVar62 = fVar51 * local_550._4_4_;
      local_548 = auVar59._8_4_;
      fVar51 = fVar51 * local_548;
      local_578 = auVar53;
      local_550 = auVar59._0_8_;
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&(this->CollisionSubBones).W.field_0x8;
      *(float *)(lVar6 + lVar34 * 0xc) = fVar55 * fVar77;
      *(float *)(lVar6 + 4 + lVar34 * 0xc) = fVar62 * fVar77;
      *(float *)(lVar6 + 8 + lVar34 * 0xc) = fVar51 * fVar77;
      uVar32 = 0;
      if ((int)uVar29 < *(int *)&(this->CollisionSubBones).R.field_0x10) {
        uVar32 = uVar35;
      }
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar29 = uVar29 + 1;
      *(undefined1 (*) [16])(*(longlong *)&(this->CollisionSubBones).R.field_0x8 + lVar34 * 0x10) =
           auVar57;
      param_1 = local_588;
    } while (uVar29 < (uint)(this->CollisionSubBones)._padding_);
  }
  uVar38 = _UNK_15068951c;
  uVar35 = _UNK_150689518;
  uVar32 = _UNK_150689514;
  uVar29 = ___xmm_00000000000000003ff0000000000000;
  local_5d0 = (this->SkinnedLevelSets).ArrayNum;
  uVar24 = (ulonglong)(int)local_5d0;
  pFVar33 = (this->SkinnedLevelSets).AllocatorInstance.Data;
  local_590 = pFVar33 + uVar24 * 0x20;
  while( true ) {
    pFVar28 = local_590;
    uVar72 = _UNK_15068968c;
    uVar71 = _UNK_150689688;
    uVar70 = _UNK_150689684;
    uVar69 = ___xmm_3ff00000000000003ff0000000000000;
    uVar78 = _UNK_15061cc8c;
    uVar41 = _UNK_15061cc88;
    uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar39 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    if ((this->SkinnedLevelSets).ArrayNum != (int)uVar24) {
      local_5d7 = 0;
      `TCheckedPointerIterator<Chaos::FClothComplexColliders::FSkinnedLevelSetData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_5d7);
    }
    if (pFVar33 == pFVar28) {
      local_5d0 = (this->MLLevelSets).ArrayNum;
      uVar24 = (ulonglong)(int)local_5d0;
      pFVar33 = (this->MLLevelSets).AllocatorInstance.Data;
      local_5a0 = pFVar33 + uVar24 * 0x20;
      while( true ) {
        pFVar28 = local_5a0;
        if ((this->MLLevelSets).ArrayNum != (int)uVar24) {
          local_5d5 = 0;
          `TCheckedPointerIterator<Chaos::FClothComplexColliders::FMLLevelSetData,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_5d5);
        }
        fVar3 = local_5a8;
        if (pFVar33 == pFVar28) {
          if (this->bSkipSkinnedTriangleMeshKinematicUpdate == false) {
            iVar21 = (this->SkinnedTriangleMeshes).ArrayNum;
            uVar24 = (ulonglong)iVar21;
            pFVar33 = (this->SkinnedTriangleMeshes).AllocatorInstance.Data;
            local_5a0 = (FScriptContainerElement *)CONCAT44(local_5a0._4_4_,iVar21);
            local_578._0_8_ = pFVar33 + uVar24 * 0x88;
            pFVar28 = pFVar33 + uVar24 * 0x88;
            while( true ) {
              if ((this->SkinnedTriangleMeshes).ArrayNum != (int)uVar24) {
                local_5d3[0] = 0;
                `TCheckedPointerIterator<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_5d3);
              }
              if (pFVar33 == pFVar28) break;
              if (((*(int *)pFVar33 < 0) || (*(int *)&param_1->field_0x14 <= *(int *)pFVar33)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles.IsValidIndex(Data.Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothComplexColliders.cpp"
                                      ,0xb2,L""), bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar21 = *(int *)pFVar33;
              if ((*(longlong *)&param_1->field_0x8 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar32 = iVar21 + *(int *)&param_1->field_0x10;
              lVar34 = *(longlong *)&param_1->field_0x8;
              uVar29 = 0;
              if ((int)uVar32 < *(int *)(lVar34 + 0x68)) {
                uVar29 = ~uVar32 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((*(longlong *)(*(longlong *)(lVar34 + 0x60) + (longlong)(int)uVar32 * 8) !=
                   *(longlong *)(pFVar33 + 0x18)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles.GetGeometry(Data.Index) == Data.SkinnedTriangleMesh"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothComplexColliders.cpp"
                                      ,0xb3,L""), bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              this_02 = *(FSkinnedTriangleMesh **)(pFVar33 + 0x18);
              local_598 = this_02;
              if ((this_02->field_0x18 != '\x12') &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("T_DERIVED::StaticType() == Type",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                      ,0xc2,L""), bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_590 = (this_02->LocalPositions).AllocatorInstance.Data;
              local_5d0 = (this_02->LocalPositions).ArrayNum;
              if (((int)local_5d0 < 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar21 = *(int *)pFVar33;
              if ((*(longlong *)&param_1->field_0x8 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar32 = iVar21 + *(int *)&param_1->field_0x10;
              lVar34 = *(longlong *)&param_1->field_0x8;
              uVar29 = 0;
              if ((int)uVar32 < *(int *)(lVar34 + 0x50)) {
                uVar29 = ~uVar32 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar21 = *(int *)pFVar33;
              pfVar2 = (float *)(*(longlong *)(lVar34 + 0x48) + (longlong)(int)uVar32 * 0x10);
              fVar4 = *pfVar2;
              fVar13 = pfVar2[1];
              fVar14 = pfVar2[2];
              fVar15 = pfVar2[3];
              local_528 = fVar4;
              fStack_524 = fVar13;
              fStack_520 = fVar14;
              fStack_51c = fVar15;
              if ((*(longlong *)&param_1->field_0x8 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Particles",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                      ,0x56,L""), bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pTVar25 = TParticles<float,3>::GetX
                                  (*(TParticles<float,3> **)&param_1->field_0x8,
                                   *(int *)&param_1->field_0x10 + iVar21);
              pFVar28 = local_590;
              uVar29 = local_5d0;
              uVar32 = 0;
              TVar12 = *pTVar25;
              if (0 < (int)local_5d0) {
                lVar34 = 0;
                do {
                  uVar35 = 0;
                  if ((int)uVar32 < *(int *)(pFVar33 + 0x68)) {
                    uVar35 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar6 = *(longlong *)(pFVar33 + 0x60);
                  fVar51 = local_5cc * *(float *)(lVar34 + lVar6);
                  fVar77 = local_5cc * *(float *)(lVar34 + 4 + lVar6);
                  fVar64 = local_5cc * *(float *)(lVar34 + 8 + lVar6);
                  uVar35 = 0;
                  if ((int)uVar32 < *(int *)(pFVar33 + 0x50)) {
                    uVar35 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar6 = *(longlong *)(pFVar33 + 0x48);
                  uVar32 = uVar32 + 1;
                  fVar64 = fVar3 * *(float *)(lVar34 + 8 + lVar6) + fVar64;
                  fVar51 = fVar3 * *(float *)(lVar34 + lVar6) + fVar51;
                  fVar77 = fVar3 * *(float *)(lVar34 + 4 + lVar6) + fVar77;
                  fVar55 = fVar77 * fVar4 - fVar13 * fVar51;
                  fVar62 = fVar64 * fVar13 - fVar14 * fVar77;
                  fVar68 = fVar51 * fVar14 - fVar4 * fVar64;
                  fVar62 = fVar62 + fVar62;
                  fVar68 = fVar68 + fVar68;
                  fVar55 = fVar55 + fVar55;
                  local_530 = fVar55 * fVar15 + fVar64 + (fVar68 * fVar4 - fVar62 * fVar13) +
                              TVar12._8_4_;
                  local_538 = CONCAT44(fVar68 * fVar15 + fVar77 + (fVar62 * fVar14 - fVar55 * fVar4)
                                       + TVar12._4_4_,
                                       fVar62 * fVar15 + fVar51 +
                                       (fVar55 * fVar13 - fVar68 * fVar14) + TVar12._0_4_);
                  *(undefined8 *)(pFVar28 + lVar34) = local_538;
                  *(float *)(pFVar28 + lVar34 + 8) = local_530;
                  lVar34 = lVar34 + 0xc;
                  this = local_540;
                  this_02 = local_598;
                } while ((int)uVar32 < (int)uVar29);
              }
              local_518.DataPtr =
                   (TVector<float,3> *)(this_02->LocalPositions).AllocatorInstance.Data;
              iVar21 = (this_02->LocalPositions).ArrayNum;
              if ((iVar21 < 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_518.ArrayNum = iVar21;
              pTVar26 = FSkinnedTriangleMesh::CalculateBoundingBox(this_02,&local_348,&local_518);
              *(undefined8 *)&(this_02->LocalBoundingBox).MMin = *(undefined8 *)&pTVar26->MMin;
              *(undefined4 *)&(this_02->LocalBoundingBox).MMin.field_0x8 =
                   *(undefined4 *)&(pTVar26->MMin).field_0x8;
              *(undefined8 *)&(this_02->LocalBoundingBox).MMax = *(undefined8 *)&pTVar26->MMax;
              *(undefined4 *)&(this_02->LocalBoundingBox).MMax.field_0x8 =
                   *(undefined4 *)&(pTVar26->MMax).field_0x8;
              FSkinnedTriangleMesh::UpdateSpatialHierarchy(this_02,this->MinLODSize);
              uVar24 = (ulonglong)local_5a0 & 0xffffffff;
              pFVar33 = pFVar33 + 0x88;
              pFVar28 = (FScriptContainerElement *)local_578._0_8_;
              param_1 = local_588;
            }
          }
          if (bVar37) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          return;
        }
        if (((*(int *)pFVar33 < 0) || (*(int *)&param_1->field_0x14 <= *(int *)pFVar33)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles.IsValidIndex(Data.Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothComplexColliders.cpp"
                                ,0x9f,L""), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar21 = *(int *)pFVar33;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar31 = iVar21 + *(int *)&param_1->field_0x10;
        lVar34 = *(longlong *)&param_1->field_0x8;
        uVar30 = 0;
        if ((int)uVar31 < *(int *)(lVar34 + 0x68)) {
          uVar30 = ~uVar31 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(longlong *)(*(longlong *)(lVar34 + 0x60) + (longlong)(int)uVar31 * 8) !=
             *(longlong *)(pFVar33 + 0x18)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles.GetGeometry(Data.Index) == Data.MLLevelSet",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothComplexColliders.cpp"
                                ,0xa0,L""), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_01 = *(FMLLevelSet **)(pFVar33 + 0x18);
        if (((char)this_01->_padding_ != '\x11') &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xc2,L""), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar21 = *(int *)pFVar33;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar31 = iVar21 + *(int *)&param_1->field_0x10;
        lVar34 = *(longlong *)&param_1->field_0x8;
        uVar30 = 0;
        if ((int)uVar31 < *(int *)(lVar34 + 0x50)) {
          uVar30 = ~uVar31 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) break;
        iVar21 = *(int *)pFVar33;
        pfVar2 = (float *)(*(longlong *)(lVar34 + 0x48) + (longlong)(int)uVar31 * 0x10);
        fVar3 = *pfVar2;
        fVar4 = pfVar2[1];
        fVar13 = pfVar2[2];
        fVar14 = pfVar2[3];
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x56,L""), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar27 = *(TParticles<float,3> **)&param_1->field_0x8;
        pTVar25 = TParticles<float,3>::GetX(pTVar27,*(int *)&param_1->field_0x10 + iVar21);
        local_3c8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar14,0);
        local_3c8.Rotation.ZW.m128d_f64[0] = (double)fVar13;
        local_3c8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
        local_3c8.Translation.ZW.m128d_f64[0] = (double)*(float *)&pTVar25->field_0x8;
        local_3c8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)*(float *)&pTVar25->field_0x4,0)
        ;
        local_3c8.Translation.XY.m128d_f64[0] = (double)*(float *)pTVar25;
        local_3c8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)*(float *)&pTVar25->field_0x4 >> 0x20);
        local_3c8.Translation.ZW.m128d_f64[1] = 0.0;
        lVar34 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                  (double)CONCAT44(uVar78 & uVar38,uVar41 & uVar35));
        auVar10._8_4_ = (int)lVar34;
        auVar10._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
              (double)CONCAT44(uVar40 & uVar32,uVar39 & uVar29));
        auVar10._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
        uVar30 = movmskpd((int)pTVar27,auVar10);
        auVar46._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
              (double)CONCAT44(uVar78 & uVar72,uVar41 & uVar71));
        auVar46._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
              (double)CONCAT44(uVar40 & uVar70,uVar39 & uVar69));
        iVar21 = movmskpd((int)pTVar25,auVar46);
        local_3c8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar29;
        local_3c8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar32;
        local_3c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar35;
        local_3c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar38;
        local_3c8.Rotation.XY.m128d_f64[0] = (double)fVar3;
        local_3c8.Rotation.XY.m128d_f64[1] = (double)fVar4;
        local_3c8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar69;
        local_3c8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar70;
        local_3c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar71;
        local_3c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar72;
        if ((uVar30 & 0x3fffffff) == 0 && iVar21 == 0) {
          uVar63 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar65 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar66 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar67 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar73 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar74 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar75 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar76 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar79 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar80 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar81 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar82 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar83 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar84 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar85 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar86 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          local_4a8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_4a8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_4a8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_4a8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_4a8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_4a8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast(&local_3c8,&local_4a8);
          uVar63 = local_4a8.Rotation.XY.m128d_f64[0]._0_4_;
          uVar65 = local_4a8.Rotation.XY.m128d_f64[0]._4_4_;
          uVar66 = local_4a8.Rotation.XY.m128d_f64[1]._0_4_;
          uVar67 = local_4a8.Rotation.XY.m128d_f64[1]._4_4_;
          uVar73 = local_4a8.Translation.XY.m128d_f64[0]._0_4_;
          uVar74 = local_4a8.Translation.XY.m128d_f64[0]._4_4_;
          uVar75 = local_4a8.Translation.XY.m128d_f64[1]._0_4_;
          uVar76 = local_4a8.Translation.XY.m128d_f64[1]._4_4_;
          uVar79 = local_4a8.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar80 = local_4a8.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar81 = local_4a8.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar82 = local_4a8.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar83 = local_4a8.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar84 = local_4a8.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar85 = local_4a8.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar86 = local_4a8.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        _Var19.m128d_f64 = local_4a8.Translation.ZW.m128d_f64;
        _Var18.m128d_f64 = local_4a8.Rotation.ZW.m128d_f64;
        uVar39 = *(uint *)(pFVar33 + 0x10);
        local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5c8.ArrayNum = 0;
        local_5c8.ArrayMax = 0;
        if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
        }
        if (0 < (int)uVar39) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,uVar39,&local_5c8.AllocatorInstance,0,&local_5c8.ArrayMax);
        }
        pFVar28 = *(FScriptContainerElement **)(pFVar33 + 8);
        iVar21 = *(int *)(pFVar33 + 0x10);
        local_590 = pFVar28 + (longlong)iVar21 * 4;
        while( true ) {
          pFVar17 = local_590;
          if (*(int *)(pFVar33 + 0x10) != iVar21) {
            local_5d4 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_5d4);
          }
          if (pFVar28 == pFVar17) break;
          uVar39 = *(uint *)pFVar28;
          lVar34 = (longlong)(int)uVar39;
          uVar40 = 0;
          if ((int)uVar39 < *(int *)&(this->CollisionSubBones).R.field_0x10) {
            uVar40 = ~uVar39 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar6 = *(longlong *)&(this->CollisionSubBones).R.field_0x8;
          fVar3 = *(float *)(lVar6 + lVar34 * 0x10);
          fVar4 = *(float *)(lVar6 + 4 + lVar34 * 0x10);
          uVar5 = *(undefined8 *)(lVar6 + 8 + lVar34 * 0x10);
          adVar61[0] = (double)(float)uVar5;
          adVar61[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
          uVar40 = 0;
          if ((int)uVar39 < *(int *)&(this->CollisionSubBones).X.field_0x10) {
            uVar40 = ~uVar39 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar6 = *(longlong *)&(this->CollisionSubBones).X.field_0x8;
          dVar11 = (double)*(float *)(lVar6 + 4 + lVar34 * 0xc);
          local_148.Translation.ZW.m128d_f64[0] = (double)*(float *)(lVar6 + 8 + lVar34 * 0xc);
          local_148.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar29;
          local_148.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar32;
          local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar35;
          local_148.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar38;
          local_148.Scale3D.XY.m128d_f64[0] =
               (double)CONCAT44(_UNK_150689684,___xmm_3ff00000000000003ff0000000000000);
          local_148.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(_UNK_15068968c,_UNK_150689688);
          local_148.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
          local_148.Translation.XY.m128d_f64[0] = (double)*(float *)(lVar6 + lVar34 * 0xc);
          local_148.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
          local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_2c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_148.Translation.ZW.m128d_f64[1] = 0.0;
          local_2c8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_2c8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_2c8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_2c8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_2c8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_2c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_2c8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_2c8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_1a8.Rotation.XY.m128d_f64[0]._0_4_ = uVar63;
          local_1a8.Rotation.XY.m128d_f64[0]._4_4_ = uVar65;
          local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar66;
          local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar67;
          local_1a8.Rotation.ZW.m128d_f64 = _Var18.m128d_f64;
          local_1a8.Translation.XY.m128d_f64[0]._0_4_ = uVar73;
          local_1a8.Translation.XY.m128d_f64[0]._4_4_ = uVar74;
          local_1a8.Translation.XY.m128d_f64[1]._0_4_ = uVar75;
          local_1a8.Translation.XY.m128d_f64[1]._4_4_ = uVar76;
          local_1a8.Translation.ZW.m128d_f64 = _Var19.m128d_f64;
          local_1a8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar79;
          local_1a8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar80;
          local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar81;
          local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar82;
          local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar83;
          local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar84;
          local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar85;
          local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar86;
          local_148.Rotation.XY.m128d_f64[0] = (double)fVar3;
          local_148.Rotation.XY.m128d_f64[1] = (double)fVar4;
          local_148.Rotation.ZW.m128d_f64 = adVar61;
          UE::Math::TTransform<double>::Multiply(&local_2c8,&local_148,&local_1a8);
          iVar22 = local_5c8.ArrayNum;
          if (local_5c8.ArrayNum == local_5c8.ArrayMax) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&local_5c8.AllocatorInstance,&local_5c8.ArrayMax);
          }
          local_5c8.ArrayNum = iVar22 + 1;
          lVar34 = (longlong)iVar22 * 0x60;
          pFVar28 = pFVar28 + 4;
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34) =
               local_2c8.Rotation.XY.m128d_f64[0];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 8) =
               local_2c8.Rotation.XY.m128d_f64[1];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 0x10) =
               local_2c8.Rotation.ZW.m128d_f64[0];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 0x10 + 8) =
               local_2c8.Rotation.ZW.m128d_f64[1];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 0x20) =
               local_2c8.Translation.XY.m128d_f64[0];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 0x20 + 8) =
               local_2c8.Translation.XY.m128d_f64[1];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 0x30) =
               local_2c8.Translation.ZW.m128d_f64[0];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 0x30 + 8) =
               local_2c8.Translation.ZW.m128d_f64[1];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 0x40) =
               local_2c8.Scale3D.XY.m128d_f64[0];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 0x40 + 8) =
               local_2c8.Scale3D.XY.m128d_f64[1];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 0x50) =
               local_2c8.Scale3D.ZW.m128d_f64[0];
          *(double *)(local_5c8.AllocatorInstance.Data + lVar34 + 0x50 + 8) =
               local_2c8.Scale3D.ZW.m128d_f64[1];
        }
        FMLLevelSet::UpdateActiveBonesRelativeTransforms(this_01,&local_5c8);
        if (local_5c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.AllocatorInstance.Data);
        }
        pFVar33 = pFVar33 + 0x20;
        uVar24 = (ulonglong)local_5d0;
        param_1 = local_588;
        uVar69 = ___xmm_3ff00000000000003ff0000000000000;
        uVar70 = _UNK_150689684;
        uVar71 = _UNK_150689688;
        uVar72 = _UNK_15068968c;
        uVar39 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar41 = _UNK_15061cc88;
        uVar78 = _UNK_15061cc8c;
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((((int)*(uint *)pFVar33 < 0) || (*(int *)&param_1->field_0x14 <= (int)*(uint *)pFVar33)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles.IsValidIndex(Data.Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothComplexColliders.cpp"
                            ,0x8d,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar30 = *(uint *)pFVar33;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar30 = uVar30 + *(int *)&param_1->field_0x10;
    lVar34 = *(longlong *)&param_1->field_0x8;
    uVar31 = 0;
    if ((int)uVar30 < *(int *)(lVar34 + 0x68)) {
      uVar31 = ~uVar30 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((*(longlong *)(*(longlong *)(lVar34 + 0x60) + (longlong)(int)uVar30 * 8) !=
         *(longlong *)(pFVar33 + 0x18)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles.GetGeometry(Data.Index) == Data.SkinnedLevelSet",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothComplexColliders.cpp"
                            ,0x8e,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = *(FWeightedLatticeImplicitObject **)(pFVar33 + 0x18);
    if (((char)this_00->_padding_ != '&') &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("T_DERIVED::StaticType() == Type",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                            ,0xc2,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar30 = *(uint *)pFVar33;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar30 = uVar30 + *(int *)&param_1->field_0x10;
    lVar34 = *(longlong *)&param_1->field_0x8;
    uVar31 = 0;
    if ((int)uVar30 < *(int *)(lVar34 + 0x50)) {
      uVar31 = ~uVar30 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) break;
    uVar31 = *(uint *)pFVar33;
    pfVar2 = (float *)(*(longlong *)(lVar34 + 0x48) + (longlong)(int)uVar30 * 0x10);
    local_358 = *pfVar2;
    fStack_354 = pfVar2[1];
    fStack_350 = pfVar2[2];
    fStack_34c = pfVar2[3];
    dVar52 = (double)local_358;
    dVar11 = (double)fStack_34c;
    dVar56 = (double)fStack_354;
    dVar58 = (double)fStack_350;
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar27 = *(TParticles<float,3> **)&param_1->field_0x8;
    pTVar25 = TParticles<float,3>::GetX(pTVar27,*(int *)&param_1->field_0x10 + uVar31);
    local_428.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
    local_428.Rotation.ZW.m128d_f64[0] = dVar58;
    local_428.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_428.Translation.ZW.m128d_f64[0] = (double)*(float *)&pTVar25->field_0x8;
    local_428.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)*(float *)&pTVar25->field_0x4,0);
    local_428.Translation.XY.m128d_f64[0] = (double)*(float *)pTVar25;
    local_428.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)*(float *)&pTVar25->field_0x4 >> 0x20);
    local_428.Translation.ZW.m128d_f64[1] = 0.0;
    lVar34 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(uVar78 & uVar38,uVar41 & uVar35));
    auVar9._8_4_ = (int)lVar34;
    auVar9._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(uVar40 & uVar32,uVar39 & uVar29));
    auVar9._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
    uVar30 = movmskpd((int)pTVar27,auVar9);
    local_428.Scale3D.XY.m128d_f64[0]._0_4_ = uVar69;
    local_428.Scale3D.XY.m128d_f64[0]._4_4_ = uVar70;
    local_428.Scale3D.XY.m128d_f64[1]._0_4_ = uVar71;
    local_428.Scale3D.XY.m128d_f64[1]._4_4_ = uVar72;
    auVar45._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(uVar78 & uVar72,uVar41 & uVar71));
    auVar45._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(uVar40 & uVar70,uVar39 & uVar69));
    iVar21 = movmskpd((int)pTVar25,auVar45);
    local_428.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar29;
    local_428.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar32;
    local_428.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar35;
    local_428.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar38;
    local_428.Rotation.XY.m128d_f64[0] = dVar52;
    local_428.Rotation.XY.m128d_f64[1] = dVar56;
    if ((uVar30 & 0x3fffffff) == 0 && iVar21 == 0) {
      uVar63 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar65 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar66 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar67 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      uVar73 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar74 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar75 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar76 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar79 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar80 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar81 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar82 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar83 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar84 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar85 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar86 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_508.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_508.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_508.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_508.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_508.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_508.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(&local_428,&local_508);
      uVar63 = local_508.Rotation.XY.m128d_f64[0]._0_4_;
      uVar65 = local_508.Rotation.XY.m128d_f64[0]._4_4_;
      uVar66 = local_508.Rotation.XY.m128d_f64[1]._0_4_;
      uVar67 = local_508.Rotation.XY.m128d_f64[1]._4_4_;
      uVar73 = local_508.Translation.XY.m128d_f64[0]._0_4_;
      uVar74 = local_508.Translation.XY.m128d_f64[0]._4_4_;
      uVar75 = local_508.Translation.XY.m128d_f64[1]._0_4_;
      uVar76 = local_508.Translation.XY.m128d_f64[1]._4_4_;
      uVar79 = local_508.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar80 = local_508.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar81 = local_508.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar82 = local_508.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar83 = local_508.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar84 = local_508.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar85 = local_508.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar86 = local_508.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    _Var19.m128d_f64 = local_508.Translation.ZW.m128d_f64;
    _Var18.m128d_f64 = local_508.Rotation.ZW.m128d_f64;
    uVar39 = *(uint *)(pFVar33 + 0x10);
    local_5b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5b8.ArrayNum = 0;
    local_5b8.ArrayMax = 0;
    if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
    }
    if (0 < (int)uVar39) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar39,&local_5b8.AllocatorInstance,0,&local_5b8.ArrayMax);
    }
    puVar36 = *(uint **)(pFVar33 + 8);
    uVar39 = *(uint *)(pFVar33 + 0x10);
    local_5a0 = (FScriptContainerElement *)(puVar36 + (int)uVar39);
    while( true ) {
      pFVar28 = local_5a0;
      if (*(uint *)(pFVar33 + 0x10) != uVar39) {
        local_5d6 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_5d6);
      }
      if ((FScriptContainerElement *)puVar36 == pFVar28) break;
      uVar40 = *puVar36;
      lVar34 = (longlong)(int)uVar40;
      uVar41 = 0;
      if ((int)uVar40 < *(int *)&(this->CollisionSubBones).R.field_0x10) {
        uVar41 = ~uVar40 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&(this->CollisionSubBones).R.field_0x8;
      fVar3 = *(float *)(lVar6 + lVar34 * 0x10);
      fVar4 = *(float *)(lVar6 + 4 + lVar34 * 0x10);
      uVar5 = *(undefined8 *)(lVar6 + 8 + lVar34 * 0x10);
      adVar60[0] = (double)(float)uVar5;
      adVar60[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
      uVar41 = 0;
      if ((int)uVar40 < *(int *)&(this->CollisionSubBones).X.field_0x10) {
        uVar41 = ~uVar40 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&(this->CollisionSubBones).X.field_0x8;
      dVar11 = (double)*(float *)(lVar6 + 4 + lVar34 * 0xc);
      local_208.Translation.ZW.m128d_f64[0] = (double)*(float *)(lVar6 + 8 + lVar34 * 0xc);
      local_208.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar29;
      local_208.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar32;
      local_208.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar35;
      local_208.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar38;
      local_208.Scale3D.XY.m128d_f64[0] =
           (double)CONCAT44(_UNK_150689684,___xmm_3ff00000000000003ff0000000000000);
      local_208.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(_UNK_15068968c,_UNK_150689688);
      local_208.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
      local_208.Translation.XY.m128d_f64[0] = (double)*(float *)(lVar6 + lVar34 * 0xc);
      local_208.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
      local_328.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_328.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_328.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_328.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_208.Translation.ZW.m128d_f64[1] = 0.0;
      local_328.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_328.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_328.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_328.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_328.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_328.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_328.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_328.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_328.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_328.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_268.Rotation.XY.m128d_f64[0]._0_4_ = uVar63;
      local_268.Rotation.XY.m128d_f64[0]._4_4_ = uVar65;
      local_268.Rotation.XY.m128d_f64[1]._0_4_ = uVar66;
      local_268.Rotation.XY.m128d_f64[1]._4_4_ = uVar67;
      local_268.Rotation.ZW.m128d_f64 = _Var18.m128d_f64;
      local_268.Translation.XY.m128d_f64[0]._0_4_ = uVar73;
      local_268.Translation.XY.m128d_f64[0]._4_4_ = uVar74;
      local_268.Translation.XY.m128d_f64[1]._0_4_ = uVar75;
      local_268.Translation.XY.m128d_f64[1]._4_4_ = uVar76;
      local_268.Translation.ZW.m128d_f64 = _Var19.m128d_f64;
      local_268.Scale3D.XY.m128d_f64[0]._0_4_ = uVar79;
      local_268.Scale3D.XY.m128d_f64[0]._4_4_ = uVar80;
      local_268.Scale3D.XY.m128d_f64[1]._0_4_ = uVar81;
      local_268.Scale3D.XY.m128d_f64[1]._4_4_ = uVar82;
      local_268.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar83;
      local_268.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar84;
      local_268.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar85;
      local_268.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar86;
      local_208.Rotation.XY.m128d_f64[0] = (double)fVar3;
      local_208.Rotation.XY.m128d_f64[1] = (double)fVar4;
      local_208.Rotation.ZW.m128d_f64 = adVar60;
      UE::Math::TTransform<double>::Multiply(&local_328,&local_208,&local_268);
      iVar21 = local_5b8.ArrayNum;
      if (local_5b8.ArrayNum == local_5b8.ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_5b8.AllocatorInstance,&local_5b8.ArrayMax);
      }
      local_5b8.ArrayNum = iVar21 + 1;
      lVar34 = (longlong)iVar21 * 0x60;
      puVar36 = puVar36 + 1;
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34) = local_328.Rotation.XY.m128d_f64[0];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 8) =
           local_328.Rotation.XY.m128d_f64[1];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 0x10) =
           local_328.Rotation.ZW.m128d_f64[0];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 0x10 + 8) =
           local_328.Rotation.ZW.m128d_f64[1];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 0x20) =
           local_328.Translation.XY.m128d_f64[0];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 0x20 + 8) =
           local_328.Translation.XY.m128d_f64[1];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 0x30) =
           local_328.Translation.ZW.m128d_f64[0];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 0x30 + 8) =
           local_328.Translation.ZW.m128d_f64[1];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 0x40) =
           local_328.Scale3D.XY.m128d_f64[0];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 0x40 + 8) =
           local_328.Scale3D.XY.m128d_f64[1];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 0x50) =
           local_328.Scale3D.ZW.m128d_f64[0];
      *(double *)(local_5b8.AllocatorInstance.Data + lVar34 + 0x50 + 8) =
           local_328.Scale3D.ZW.m128d_f64[1];
    }
    FWeightedLatticeImplicitObject::DeformPoints(this_00,&local_5b8);
    FWeightedLatticeImplicitObject::UpdateSpatialHierarchy(this_00,(double)this->MinLODSize);
    if (local_5b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.AllocatorInstance.Data);
    }
    pFVar33 = pFVar33 + 0x20;
    uVar24 = (ulonglong)local_5d0;
    param_1 = local_588;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// Reset @ 14dc0e7f0

void __thiscall Chaos::FClothComplexColliders::Reset(FClothComplexColliders *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  FSkinnedLevelSetData *pFVar5;
  FMLLevelSetData *pFVar6;
  FSkinnedTriangleMeshData *pFVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  *(undefined4 *)&(this->CollisionSubBones)._padding_ = 0;
  plVar8 = (longlong *)(this->CollisionSubBones)._padding_;
  iVar3 = (int)(this->CollisionSubBones)._padding_;
  plVar2 = plVar8 + iVar3;
  while( true ) {
    if ((int)(this->CollisionSubBones)._padding_ != iVar3) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar8 == plVar2) break;
    plVar4 = (longlong *)*plVar8;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,0);
    }
    plVar8 = plVar8 + 1;
  }
  piVar1 = &(this->SkinnedLevelSets).ArrayMax;
  pFVar5 = (FSkinnedLevelSetData *)(this->SkinnedLevelSets).AllocatorInstance.Data;
  iVar3 = (this->SkinnedLevelSets).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Chaos::FClothComplexColliders::FSkinnedLevelSetData,int>(pFVar5,iVar3);
    (this->SkinnedLevelSets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->SkinnedLevelSets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FClothComplexColliders::FSkinnedLevelSetData,int>(pFVar5,iVar3);
    (this->SkinnedLevelSets).ArrayNum = 0;
  }
  piVar1 = &(this->MLLevelSets).ArrayMax;
  pFVar6 = (FMLLevelSetData *)(this->MLLevelSets).AllocatorInstance.Data;
  iVar3 = (this->MLLevelSets).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Chaos::FClothComplexColliders::FMLLevelSetData,int>(pFVar6,iVar3);
    (this->MLLevelSets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->MLLevelSets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FClothComplexColliders::FMLLevelSetData,int>(pFVar6,iVar3);
    (this->MLLevelSets).ArrayNum = 0;
  }
  piVar1 = &(this->SkinnedTriangleMeshes).ArrayMax;
  pFVar7 = (FSkinnedTriangleMeshData *)(this->SkinnedTriangleMeshes).AllocatorInstance.Data;
  iVar3 = (this->SkinnedTriangleMeshes).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int>(pFVar7,iVar3);
    (this->SkinnedTriangleMeshes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,0,&(this->SkinnedTriangleMeshes).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int>(pFVar7,iVar3);
    (this->SkinnedTriangleMeshes).ArrayNum = 0;
  }
  return;
}

// ResetStartPose @ 14dc0f950

void __thiscall Chaos::FClothComplexColliders::ResetStartPose(FClothComplexColliders *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res8 [8];
  
  uVar15 = 0;
  if ((int)(this->CollisionSubBones)._padding_ != 0) {
    do {
      uVar20 = ~uVar15 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar15 < *(int *)&(this->CollisionSubBones).Transforms.field_0x10) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)&(this->CollisionSubBones).Transforms.field_0x8;
      lVar19 = (longlong)(int)uVar15;
      puVar1 = (undefined8 *)(lVar5 + lVar19 * 0x30);
      uVar2 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar19 * 0x30);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar19 * 0x30);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar16 = 0;
      if ((int)uVar15 < *(int *)&(this->CollisionSubBones).OldTransforms.field_0x10) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)&(this->CollisionSubBones).OldTransforms.field_0x8;
      puVar1 = (undefined8 *)(lVar5 + lVar19 * 0x30);
      *puVar1 = uVar2;
      puVar1[1] = uVar7;
      puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar19 * 0x30);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar19 * 0x30);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      uVar16 = 0;
      if ((int)uVar15 < *(int *)&(this->CollisionSubBones).Transforms.field_0x10) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)&(this->CollisionSubBones).Transforms.field_0x8 + 0x10 + lVar19 * 0x30)
      ;
      uVar2 = *puVar1;
      uVar4 = *(undefined4 *)(puVar1 + 1);
      uVar13 = 0;
      uVar16 = uVar13;
      if ((int)uVar15 < *(int *)&(this->CollisionSubBones).X.field_0x10) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)&(this->CollisionSubBones).X.field_0x8;
      *(undefined8 *)(lVar5 + lVar19 * 0xc) = uVar2;
      *(undefined4 *)(lVar5 + 8 + lVar19 * 0xc) = uVar4;
      uVar16 = uVar13;
      if ((int)uVar15 < *(int *)&(this->CollisionSubBones).Transforms.field_0x10) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)&(this->CollisionSubBones).Transforms.field_0x8 + lVar19 * 0x30);
      uVar2 = *puVar1;
      uVar7 = puVar1[1];
      uVar16 = uVar13;
      if ((int)uVar15 < *(int *)&(this->CollisionSubBones).R.field_0x10) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar1 = (undefined8 *)(*(longlong *)&(this->CollisionSubBones).R.field_0x8 + lVar19 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar7;
      uVar16 = uVar13;
      if ((int)uVar15 < *(int *)&(this->CollisionSubBones).W.field_0x10) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)&(this->CollisionSubBones).W.field_0x8;
      *(undefined8 *)(lVar5 + lVar19 * 0xc) = 0;
      *(undefined4 *)(lVar5 + 8 + lVar19 * 0xc) = 0;
      uVar2 = *(undefined8 *)(lVar5 + lVar19 * 0xc);
      if ((int)uVar15 < *(int *)&(this->CollisionSubBones).V.field_0x10) {
        uVar13 = uVar20;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)&(this->CollisionSubBones).V.field_0x8;
      uVar15 = uVar15 + 1;
      *(undefined8 *)(lVar5 + lVar19 * 0xc) = uVar2;
      *(undefined4 *)(lVar5 + 8 + lVar19 * 0xc) = 0;
    } while (uVar15 < (uint)(this->CollisionSubBones)._padding_);
  }
  iVar3 = (this->SkinnedTriangleMeshes).ArrayNum;
  pFVar18 = (this->SkinnedTriangleMeshes).AllocatorInstance.Data;
  pFVar22 = pFVar18 + (longlong)iVar3 * 0x88;
  do {
    uVar17 = 0;
    if ((this->SkinnedTriangleMeshes).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar18 == pFVar22) {
      return;
    }
    iVar14 = *(int *)(pFVar18 + 0x68);
    uVar21 = uVar17;
    if (0 < iVar14) {
      do {
        uVar16 = (uint)uVar17;
        uVar20 = ~uVar16 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar16 < iVar14) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar2 = *(undefined8 *)(uVar21 + *(longlong *)(pFVar18 + 0x60));
        uVar4 = *(undefined4 *)(uVar21 + 8 + *(longlong *)(pFVar18 + 0x60));
        uVar15 = 0;
        if ((int)uVar16 < *(int *)(pFVar18 + 0x50)) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *(longlong *)(pFVar18 + 0x48);
        *(undefined8 *)(uVar21 + lVar5) = uVar2;
        *(undefined4 *)(uVar21 + 8 + lVar5) = uVar4;
        uVar15 = 0;
        if ((int)uVar16 < *(int *)(pFVar18 + 0x80)) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *(longlong *)(pFVar18 + 0x78);
        uVar17 = (ulonglong)(uVar16 + 1);
        *(undefined8 *)(uVar21 + lVar5) = 0;
        *(undefined4 *)(uVar21 + 8 + lVar5) = 0;
        iVar14 = *(int *)(pFVar18 + 0x68);
        uVar21 = uVar21 + 0xc;
      } while ((int)(uVar16 + 1) < iVar14);
    }
    pFVar18 = pFVar18 + 0x88;
  } while( true );
}

// SwapBuffersForFrameFlip @ 14dc1bae0

void __thiscall Chaos::FClothComplexColliders::SwapBuffersForFrameFlip(FClothComplexColliders *this)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  uVar3 = *(undefined8 *)&(this->CollisionSubBones).Transforms.field_0x8;
  uVar4 = *(undefined8 *)&(this->CollisionSubBones).OldTransforms;
  uVar5 = *(undefined8 *)&(this->CollisionSubBones).OldTransforms.field_0x8;
  uVar1 = *(undefined8 *)&(this->CollisionSubBones).OldTransforms.field_0x10;
  *(undefined8 *)&(this->CollisionSubBones).OldTransforms =
       *(undefined8 *)&(this->CollisionSubBones).Transforms;
  *(undefined8 *)&(this->CollisionSubBones).OldTransforms.field_0x8 = uVar3;
  *(undefined8 *)&(this->CollisionSubBones).OldTransforms.field_0x10 =
       *(undefined8 *)&(this->CollisionSubBones).Transforms.field_0x10;
  *(undefined8 *)&(this->CollisionSubBones).Transforms = uVar4;
  *(undefined8 *)&(this->CollisionSubBones).Transforms.field_0x8 = uVar5;
  *(undefined8 *)&(this->CollisionSubBones).Transforms.field_0x10 = uVar1;
  pFVar8 = (this->SkinnedTriangleMeshes).AllocatorInstance.Data;
  iVar2 = (this->SkinnedTriangleMeshes).ArrayNum;
  pFVar6 = pFVar8 + 0x40;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x88;
  while( true ) {
    if ((this->SkinnedTriangleMeshes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    pFVar8 = pFVar8 + 0x88;
    uVar3 = *(undefined8 *)pFVar6;
    uVar4 = *(undefined8 *)(pFVar6 + 8);
    uVar1 = *(undefined8 *)(pFVar6 + 0x10);
    *(undefined8 *)pFVar6 = *(undefined8 *)(pFVar6 + 0x18);
    *(undefined8 *)(pFVar6 + 8) = *(undefined8 *)(pFVar6 + 0x20);
    *(undefined8 *)(pFVar6 + 0x10) = *(undefined8 *)(pFVar6 + 0x28);
    *(undefined8 *)(pFVar6 + 0x18) = uVar3;
    *(undefined8 *)(pFVar6 + 0x20) = uVar4;
    *(undefined8 *)(pFVar6 + 0x28) = uVar1;
    pFVar6 = pFVar6 + 0x88;
  }
  return;
}

// Update @ 14dc1cc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothComplexColliders::Update
          (FClothComplexColliders *this,TTransform<float> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *param_3)

{
  float *pfVar1;
  TRigidTransform<float,3> *pTVar2;
  uint *puVar3;
  undefined1 *puVar4;
  float *pfVar5;
  uint uVar6;
  longlong lVar7;
  TRigidTransform<float,3> *pTVar8;
  FSkinnedTriangleMesh *this_00;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *pTVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  __m128 _Var31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  __m128 _Var41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  undefined1 auStackY_3e8 [32];
  undefined1 local_3b8;
  undefined1 local_3b7 [7];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_3b0;
  uint local_3a0;
  TArrayView<Chaos::TRigidTransform<float,3>_const_,int> *local_398;
  float local_390;
  float fStack_38c;
  float local_388;
  FScriptContainerElement *local_380;
  TArrayView<Chaos::TVector<float,3>,int> local_378;
  __m128 local_368;
  __m128 local_358;
  __m128 local_348;
  __m128 local_338;
  undefined1 local_328 [8];
  float fStack_320;
  float fStack_31c;
  undefined1 local_318 [8];
  float fStack_310;
  float fStack_30c;
  __m128 local_308;
  undefined1 local_2f8 [8];
  float fStack_2f0;
  float fStack_2ec;
  undefined1 local_2e8 [8];
  float fStack_2e0;
  float fStack_2dc;
  TTransform<double> local_2d8;
  __m128 local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  __m128 local_248;
  ulong64 local_238;
  ulong64 uStack_230;
  ulong64 local_228;
  ulong64 uStack_220;
  __m128 local_218;
  ulong64 local_208;
  ulong64 uStack_200;
  ulong64 local_1f8;
  ulong64 uStack_1f0;
  __m128 local_1e8;
  ulong64 local_1d8;
  ulong64 uStack_1d0;
  ulong64 local_1c8;
  ulong64 uStack_1c0;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  undefined7 extraout_var;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  uVar23 = 0;
  local_398 = param_3;
  if ((int)(this->CollisionSubBones)._padding_ != 0) {
    do {
      uVar25 = ~uVar23 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar23 < *(int *)&(this->CollisionSubBones).BoneIndices.field_0x10) {
        uVar17 = uVar25;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar17 = *(uint *)(*(longlong *)&(this->CollisionSubBones).BoneIndices.field_0x8 +
                        (longlong)(int)uVar23 * 4);
      if (((int)uVar17 < 0) || (param_2->ArrayNum <= (int)uVar17)) {
        uVar17 = 0;
        if ((int)uVar23 < *(int *)&(this->CollisionSubBones).BaseTransforms.field_0x10) {
          uVar17 = uVar25;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_1e8.m128_u64[0] = (param_1->Rotation).m128_u64[0];
        local_1e8.m128_u64[1] = (param_1->Rotation).m128_u64[1];
        local_1d8 = (param_1->Translation).m128_u64[0];
        uStack_1d0 = (param_1->Translation).m128_u64[1];
        local_1c8 = (param_1->Scale3D).m128_u64[0];
        uStack_1c0 = (param_1->Scale3D).m128_u64[1];
        local_308 = GlobalVectorConstants::Float0001;
        lVar26 = (longlong)(int)uVar23 * 0x30;
        _local_2f8 = GlobalVectorConstants::FloatZero;
        _local_2e8 = GlobalVectorConstants::Float1110;
        UE::Math::TTransform<float>::Multiply
                  ((TTransform<float> *)&local_308,
                   (TTransform<float> *)
                   (*(longlong *)&(this->CollisionSubBones).BaseTransforms.field_0x8 + lVar26),
                   (TTransform<float> *)&local_1e8);
        uVar42 = local_308.m128_i32[0];
        uVar44 = local_308.m128_i32[1];
        uVar46 = local_308.m128_i32[2];
        uVar48 = local_308.m128_i32[3];
        fVar43 = (float)local_2f8._0_4_;
        fVar45 = (float)local_2f8._4_4_;
        fVar47 = fStack_2f0;
        fVar49 = fStack_2ec;
        fVar32 = (float)local_2e8._0_4_;
        fVar33 = (float)local_2e8._4_4_;
        fVar34 = fStack_2e0;
        fVar35 = fStack_2dc;
      }
      else {
        uVar18 = 0;
        if ((int)uVar23 < *(int *)&(this->CollisionSubBones).BaseTransforms.field_0x10) {
          uVar18 = uVar25;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar7 = *(longlong *)&(this->CollisionSubBones).BaseTransforms.field_0x8;
        uVar25 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar25 = ~uVar17 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar28 = (param_2->AllocatorInstance).Data;
        lVar21 = (longlong)(int)uVar17 * 0x60;
        local_278.m128_f32[2] = (float)*(double *)(pFVar28 + lVar21 + 0x10);
        local_278.m128_f32[3] = (float)*(double *)(pFVar28 + lVar21 + 0x10 + 8);
        local_278.m128_f32[0] = (float)*(double *)(pFVar28 + lVar21);
        local_278.m128_f32[1] = (float)*(double *)(pFVar28 + lVar21 + 8);
        local_258 = (float)*(double *)(pFVar28 + lVar21 + 0x40);
        fStack_254 = (float)*(double *)(pFVar28 + lVar21 + 0x40 + 8);
        uStack_260 = CONCAT44((float)*(double *)(pFVar28 + lVar21 + 0x30 + 8),
                              (float)*(double *)(pFVar28 + lVar21 + 0x30));
        lVar26 = (longlong)(int)uVar23 * 0x30;
        local_268 = CONCAT44((float)*(double *)(pFVar28 + lVar21 + 0x20 + 8),
                             (float)*(double *)(pFVar28 + lVar21 + 0x20));
        fStack_250 = (float)*(double *)(pFVar28 + lVar21 + 0x50);
        fStack_24c = (float)*(double *)(pFVar28 + lVar21 + 0x50 + 8);
        local_368 = GlobalVectorConstants::Float0001;
        local_348 = GlobalVectorConstants::Float1110;
        local_358 = GlobalVectorConstants::FloatZero;
        UE::Math::TTransform<float>::Multiply
                  ((TTransform<float> *)&local_368,(TTransform<float> *)(lVar26 + lVar7),
                   (TTransform<float> *)&local_278);
        local_218.m128_u64[0] = local_368.m128_u64[0];
        local_218.m128_u64[1] = local_368.m128_u64[1];
        local_1f8 = local_348.m128_u64[0];
        uStack_1f0 = local_348.m128_u64[1];
        local_238 = (param_1->Translation).m128_u64[0];
        uStack_230 = (param_1->Translation).m128_u64[1];
        local_208 = local_358.m128_u64[0];
        uStack_200 = local_358.m128_u64[1];
        local_248.m128_u64[0] = (param_1->Rotation).m128_u64[0];
        local_248.m128_u64[1] = (param_1->Rotation).m128_u64[1];
        local_228 = (param_1->Scale3D).m128_u64[0];
        uStack_220 = (param_1->Scale3D).m128_u64[1];
        local_338 = GlobalVectorConstants::Float0001;
        _local_318 = GlobalVectorConstants::Float1110;
        _local_328 = GlobalVectorConstants::FloatZero;
        UE::Math::TTransform<float>::Multiply
                  ((TTransform<float> *)&local_338,(TTransform<float> *)&local_218,
                   (TTransform<float> *)&local_248);
        uVar42 = local_338.m128_i32[0];
        uVar44 = local_338.m128_i32[1];
        uVar46 = local_338.m128_i32[2];
        uVar48 = local_338.m128_i32[3];
        fVar43 = (float)local_328._0_4_;
        fVar45 = (float)local_328._4_4_;
        fVar47 = fStack_320;
        fVar49 = fStack_31c;
        fVar32 = (float)local_318._0_4_;
        fVar33 = (float)local_318._4_4_;
        fVar34 = fStack_310;
        fVar35 = fStack_30c;
      }
      uVar17 = 0;
      if ((int)uVar23 < *(int *)&(this->CollisionSubBones).Transforms.field_0x10) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar7 = *(longlong *)&(this->CollisionSubBones).Transforms.field_0x8;
      uVar23 = uVar23 + 1;
      pfVar1 = (float *)(lVar7 + lVar26);
      *pfVar1 = (float)uVar42;
      pfVar1[1] = (float)uVar44;
      pfVar1[2] = (float)uVar46;
      pfVar1[3] = (float)uVar48;
      pfVar1 = (float *)(lVar7 + 0x10 + lVar26);
      *pfVar1 = fVar43;
      pfVar1[1] = fVar45;
      pfVar1[2] = fVar47;
      pfVar1[3] = fVar49;
      pfVar1 = (float *)(lVar7 + 0x20 + lVar26);
      *pfVar1 = fVar32;
      pfVar1[1] = fVar33;
      pfVar1[2] = fVar34;
      pfVar1[3] = fVar35;
    } while (uVar23 < (uint)(this->CollisionSubBones)._padding_);
  }
  dVar13 = _UNK_150689688;
  dVar12 = ___xmm_3ff00000000000003ff0000000000000;
  dVar11 = _UNK_150689518;
  dVar10 = ___xmm_00000000000000003ff0000000000000;
  local_3a0 = (this->SkinnedTriangleMeshes).ArrayNum;
  uVar22 = (ulonglong)(int)local_3a0;
  pFVar27 = (this->SkinnedTriangleMeshes).AllocatorInstance.Data;
  pFVar28 = pFVar27 + 0x10;
  local_380 = pFVar27 + uVar22 * 0x88;
  uVar23 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar17 = _UNK_15061cc74;
  uVar25 = _UNK_15061cc78;
  uVar18 = _UNK_15061cc7c;
  while( true ) {
    pFVar15 = local_380;
    pTVar14 = local_398;
    if ((this->SkinnedTriangleMeshes).ArrayNum != (int)uVar22) {
      local_3b8 = 0;
      `TCheckedPointerIterator<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_3b8);
    }
    if (pFVar27 == pFVar15) {
      return;
    }
    uVar6 = *(uint *)pFVar27;
    uVar19 = 0;
    if ((int)uVar6 < pTVar14->ArrayNum) {
      uVar19 = ~uVar6 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      uVar19 = (uint)CONCAT71(extraout_var,bVar16);
      if (bVar16) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pTVar8 = pTVar14->DataPtr;
    auVar29 = *(undefined1 (*) [16])&pTVar8[(int)uVar6].field_0x20;
    auVar30._4_4_ =
         -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[1] < (float)(auVar29._4_4_ & uVar17));
    auVar30._0_4_ =
         -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[0] < (float)(auVar29._0_4_ & uVar23));
    auVar30._8_4_ =
         -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[2] < (float)(auVar29._8_4_ & uVar25));
    auVar30._12_4_ =
         -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[3] < (float)(auVar29._12_4_ & uVar18));
    iVar20 = movmskps(uVar19,auVar30);
    if (iVar20 == 0) {
      fVar43 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
      fVar45 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
      fVar47 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
      fVar49 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
      _Var31 = UE::Math::TTransform<float>::Identity.Translation;
      _Var41 = UE::Math::TTransform<float>::Identity.Scale3D;
    }
    else {
      pTVar2 = pTVar8 + (int)uVar6;
      fVar43 = *(float *)pTVar2 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
      fVar45 = *(float *)&pTVar2->field_0x4 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
      fVar47 = *(float *)&pTVar2->field_0x8 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
      fVar49 = *(float *)&pTVar2->field_0xc * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
      puVar4 = &pTVar8[(int)uVar6].field_0x10;
      auVar30 = blendps(auVar29,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
      auVar29 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar30);
      auVar40._0_4_ =
           ~-(uint)((float)(auVar30._0_4_ & uVar23) <=
                   GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar29._0_4_;
      auVar40._4_4_ =
           ~-(uint)((float)(auVar30._4_4_ & uVar17) <=
                   GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar29._4_4_;
      auVar40._8_4_ =
           ~-(uint)((float)(auVar30._8_4_ & uVar25) <=
                   GlobalVectorConstants::SmallNumber.m128_f32[2]) & auVar29._8_4_;
      auVar40._12_4_ =
           ~-(uint)((float)(auVar30._12_4_ & uVar18) <=
                   GlobalVectorConstants::SmallNumber.m128_f32[3]) & auVar29._12_4_;
      _Var41 = (__m128)insertps(auVar40,auVar40,8);
      fVar36 = *(float *)puVar4 * _Var41.m128_f32[0];
      fVar37 = *(float *)(puVar4 + 4) * _Var41.m128_f32[1];
      fVar38 = *(float *)(puVar4 + 8) * _Var41.m128_f32[2];
      fVar39 = *(float *)(puVar4 + 0xc) * _Var41.m128_f32[3];
      fVar32 = fVar37 * fVar43 - fVar45 * fVar36;
      fVar33 = fVar38 * fVar45 - fVar47 * fVar37;
      fVar34 = fVar36 * fVar47 - fVar43 * fVar38;
      fVar35 = fVar39 * fVar49 - fVar49 * fVar39;
      fVar33 = fVar33 + fVar33;
      fVar34 = fVar34 + fVar34;
      fVar32 = fVar32 + fVar32;
      fVar35 = fVar35 + fVar35;
      auVar29._0_4_ = 0.0 - (fVar49 * fVar33 + fVar36 + (fVar32 * fVar45 - fVar34 * fVar47));
      auVar29._4_4_ = 0.0 - (fVar49 * fVar34 + fVar37 + (fVar33 * fVar47 - fVar32 * fVar43));
      auVar29._8_4_ = 0.0 - (fVar49 * fVar32 + fVar38 + (fVar34 * fVar43 - fVar33 * fVar45));
      auVar29._12_4_ = 0.0 - (fVar49 * fVar35 + fVar39 + (fVar35 * fVar49 - fVar35 * fVar49));
      _Var31 = (__m128)insertps(auVar29,auVar29,8);
    }
    uVar23 = *(uint *)pFVar28;
    local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3b0.ArrayNum = 0;
    local_3b0.ArrayMax = 0;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if (0 < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar23,&local_3b0.AllocatorInstance,0,&local_3b0.ArrayMax);
    }
    puVar24 = *(uint **)(pFVar28 + -8);
    uVar6 = *(uint *)pFVar28;
    puVar3 = puVar24 + (int)uVar6;
    while( true ) {
      if (*(uint *)pFVar28 != uVar6) {
        local_3b7[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3b7);
      }
      uVar18 = _UNK_15061cc7c;
      uVar25 = _UNK_15061cc78;
      uVar17 = _UNK_15061cc74;
      uVar23 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      if (puVar24 == puVar3) break;
      uVar23 = *puVar24;
      uVar17 = 0;
      if ((int)uVar23 < *(int *)&(this->CollisionSubBones).Transforms.field_0x10) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar26 = *(longlong *)&(this->CollisionSubBones).Transforms.field_0x8;
      pfVar1 = (float *)(lVar26 + (longlong)(int)uVar23 * 0x30);
      pfVar5 = (float *)(lVar26 + 0x10 + (longlong)(int)uVar23 * 0x30);
      local_390 = *pfVar5;
      fStack_38c = pfVar5[1];
      local_388 = pfVar5[2];
      local_158.Rotation.XY.m128d_f64[0] = (double)*pfVar1;
      local_158.Rotation.XY.m128d_f64[1] = (double)pfVar1[1];
      local_158.Translation.XY.m128d_f64[1] = (double)fStack_38c;
      local_158.Translation.XY.m128d_f64[0] = (double)local_390;
      local_158.Translation.ZW.m128d_f64[0] = (double)local_388;
      local_158.Translation.ZW.m128d_f64[1] = 0.0;
      local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_158.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)pfVar1[3],0);
      local_158.Rotation.ZW.m128d_f64[0] = (double)pfVar1[2];
      local_158.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar1[3] >> 0x20);
      local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_2d8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2d8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_158.Scale3D.XY.m128d_f64[0] = dVar12;
      local_158.Scale3D.XY.m128d_f64[1] = dVar13;
      local_158.Scale3D.ZW.m128d_f64[0] = dVar10;
      local_158.Scale3D.ZW.m128d_f64[1] = dVar11;
      local_1b8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar45,0);
      local_1b8.Rotation.XY.m128d_f64[0] = (double)fVar43;
      local_1b8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar45 >> 0x20);
      local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar49,0);
      local_1b8.Rotation.ZW.m128d_f64[0] = (double)fVar47;
      local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar49 >> 0x20);
      local_1b8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)_Var31.m128_f32[1],0);
      local_1b8.Translation.XY.m128d_f64[0] = (double)_Var31.m128_f32[0];
      local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)_Var31.m128_f32[1] >> 0x20);
      local_1b8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)_Var31.m128_f32[3],0);
      local_1b8.Translation.ZW.m128d_f64[0] = (double)_Var31.m128_f32[2];
      local_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)_Var31.m128_f32[3] >> 0x20);
      local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)_Var41.m128_f32[1],0);
      local_1b8.Scale3D.XY.m128d_f64[0] = (double)_Var41.m128_f32[0];
      local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)_Var41.m128_f32[1] >> 0x20)
      ;
      local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)_Var41.m128_f32[3],0);
      local_1b8.Scale3D.ZW.m128d_f64[0] = (double)_Var41.m128_f32[2];
      local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)_Var41.m128_f32[3] >> 0x20)
      ;
      local_2d8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2d8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_2d8,&local_158,&local_1b8);
      iVar20 = local_3b0.ArrayNum;
      if (local_3b0.ArrayNum == local_3b0.ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_3b0.AllocatorInstance,&local_3b0.ArrayMax);
      }
      local_3b0.ArrayNum = iVar20 + 1;
      lVar26 = (longlong)iVar20 * 0x60;
      puVar24 = puVar24 + 1;
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26) = local_2d8.Rotation.XY.m128d_f64[0];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 8) =
           local_2d8.Rotation.XY.m128d_f64[1];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 0x10) =
           local_2d8.Rotation.ZW.m128d_f64[0];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 0x10 + 8) =
           local_2d8.Rotation.ZW.m128d_f64[1];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 0x20) =
           local_2d8.Translation.XY.m128d_f64[0];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 0x20 + 8) =
           local_2d8.Translation.XY.m128d_f64[1];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 0x30) =
           local_2d8.Translation.ZW.m128d_f64[0];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 0x30 + 8) =
           local_2d8.Translation.ZW.m128d_f64[1];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 0x40) =
           local_2d8.Scale3D.XY.m128d_f64[0];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 0x40 + 8) =
           local_2d8.Scale3D.XY.m128d_f64[1];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 0x50) =
           local_2d8.Scale3D.ZW.m128d_f64[0];
      *(double *)(local_3b0.AllocatorInstance.Data + lVar26 + 0x50 + 8) =
           local_2d8.Scale3D.ZW.m128d_f64[1];
    }
    this_00 = *(FSkinnedTriangleMesh **)(pFVar28 + 8);
    if ((this_00->field_0x18 != '\x12') &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("T_DERIVED::StaticType() == Type",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                            ,0xc2,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_378.DataPtr = *(TVector<float,3> **)(pFVar28 + 0x50);
    uVar6 = *(uint *)(pFVar28 + 0x58);
    if (((int)uVar6 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) break;
    local_378.ArrayNum = uVar6;
    FSkinnedTriangleMesh::SkinPositions(this_00,&local_3b0,&local_378);
    if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.AllocatorInstance.Data);
    }
    pFVar27 = pFVar27 + 0x88;
    uVar22 = (ulonglong)local_3a0;
    pFVar28 = pFVar28 + 0x88;
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

