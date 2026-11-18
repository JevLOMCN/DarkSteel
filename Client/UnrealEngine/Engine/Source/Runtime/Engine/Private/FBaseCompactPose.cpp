// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CopyBonesFrom<TSizedDefaultAllocator<32>_> @ 1474a42e0

void __thiscall
FBaseCompactPose<TMemStackAllocator<0>_>::CopyBonesFrom<TSizedDefaultAllocator<32>_>
          (FBaseCompactPose<TMemStackAllocator<0>_> *this,
          FBaseCompactPose<TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  
  iVar2 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  _Src = (void *)param_1->_padding_;
  iVar3 = *piVar1;
  *(int *)&this->_padding_ = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *piVar1 = 0;
    this->BoneContainer = param_1->BoneContainer;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,iVar2,iVar3,(ForElementType<UE::Math::TTransform<double>_> *)this,iVar2,
               piVar1);
    if (iVar2 != 0) {
      memcpy((void *)this->_padding_,_Src,(longlong)iVar2 * 0x60);
    }
    this->BoneContainer = param_1->BoneContainer;
  }
  return;
}

// ContainsNaN @ 1474c9040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FBaseCompactPose<TMemStackAllocator<0>_>::ContainsNaN
          (FBaseCompactPose<TMemStackAllocator<0>_> *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  int in_EAX;
  int iVar10;
  undefined7 extraout_var;
  undefined4 uVar11;
  uint uVar12;
  undefined1 *this_00;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar20;
  double dVar19;
  uint uVar21;
  uint uVar23;
  double dVar22;
  undefined1 local_res8 [8];
  FBaseCompactPose<TMemStackAllocator<0>_> *pFVar13;
  
  auVar8 = ___xmm_7ff00000000000007ff0000000000000;
  iVar1 = (int)this->_padding_;
  puVar14 = (uint *)this->_padding_;
  puVar16 = puVar14 + 0x10;
  puVar15 = puVar14 + (longlong)iVar1 * 0x18;
  pFVar13 = this;
  while( true ) {
    uVar11 = SUB84(pFVar13,0);
    if ((int)this->_padding_ != iVar1) {
      this_00 = local_res8;
      bVar9 = `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(this_00);
      uVar11 = SUB84(this_00,0);
      in_EAX = (int)CONCAT71(extraout_var,bVar9);
    }
    if (puVar14 == puVar15) {
      return false;
    }
    uVar18 = auVar8._0_4_;
    uVar20 = auVar8._4_4_;
    uVar21 = auVar8._8_4_;
    uVar23 = auVar8._12_4_;
    dVar19 = auVar8._0_8_;
    dVar22 = auVar8._8_8_;
    lVar17 = -(ulonglong)((double)CONCAT44(uVar23 & puVar14[7],uVar21 & puVar14[6]) == dVar22);
    auVar2._8_4_ = (int)lVar17;
    auVar2._0_8_ = -(ulonglong)((double)CONCAT44(uVar20 & puVar14[5],uVar18 & puVar14[4]) == dVar19)
    ;
    auVar2._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar12 = movmskpd(uVar11,auVar2);
    lVar17 = -(ulonglong)((double)CONCAT44(uVar23 & puVar14[3],uVar21 & puVar14[2]) == dVar22);
    auVar5._8_4_ = (int)lVar17;
    auVar5._0_8_ = -(ulonglong)((double)CONCAT44(uVar20 & puVar14[1],uVar18 & *puVar14) == dVar19);
    auVar5._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar10 = movmskpd(in_EAX,auVar5);
    if ((uVar12 & 0x3fffffff) != 0 || iVar10 != 0) {
      return true;
    }
    lVar17 = -(ulonglong)((double)CONCAT44(uVar23 & puVar16[-1],uVar21 & puVar16[-2]) == dVar22);
    auVar3._8_4_ = (int)lVar17;
    auVar3._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar20 & puVar16[-3],uVar18 & puVar16[-4]) == dVar19);
    auVar3._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar12 = movmskpd(0,auVar3);
    lVar17 = -(ulonglong)((double)CONCAT44(uVar23 & puVar16[-5],uVar21 & puVar16[-6]) == dVar22);
    auVar6._8_4_ = (int)lVar17;
    auVar6._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar20 & puVar16[-7],uVar18 & puVar16[-8]) == dVar19);
    auVar6._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar10 = movmskpd(iVar10,auVar6);
    if ((uVar12 & 0x3fffffff) != 0 || iVar10 != 0) break;
    lVar17 = -(ulonglong)((double)CONCAT44(uVar23 & puVar16[7],uVar21 & puVar16[6]) == dVar22);
    auVar4._8_4_ = (int)lVar17;
    auVar4._0_8_ = -(ulonglong)((double)CONCAT44(uVar20 & puVar16[5],uVar18 & puVar16[4]) == dVar19)
    ;
    auVar4._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar12 = movmskpd(0,auVar4);
    lVar17 = -(ulonglong)((double)CONCAT44(uVar23 & puVar16[3],uVar21 & puVar16[2]) == dVar22);
    auVar7._8_4_ = (int)lVar17;
    auVar7._0_8_ = -(ulonglong)((double)CONCAT44(uVar20 & puVar16[1],uVar18 & *puVar16) == dVar19);
    auVar7._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    in_EAX = movmskpd(iVar10,auVar7);
    if ((uVar12 & 0x3fffffff) != 0 || in_EAX != 0) {
      return true;
    }
    puVar14 = puVar14 + 0x18;
    puVar16 = puVar16 + 0x18;
    pFVar13 = (FBaseCompactPose<TMemStackAllocator<0>_> *)0x0;
  }
  return true;
}

// IsNormalized @ 1474e9e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FBaseCompactPose<TMemStackAllocator<0>_>::IsNormalized
          (FBaseCompactPose<TMemStackAllocator<0>_> *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int in_EAX;
  undefined7 extraout_var;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *this_00;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 local_res8 [8];
  FBaseCompactPose<TMemStackAllocator<0>_> *pFVar11;
  
  uVar7 = _UNK_15061cc8c;
  uVar6 = _UNK_15061cc88;
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar1 = (int)this->_padding_;
  pdVar12 = (double *)this->_padding_;
  fVar19 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
  fVar20 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
  fVar21 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
  fVar22 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
  fVar23 = GlobalVectorConstants::FloatOne.m128_f32[0];
  fVar24 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar25 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar26 = GlobalVectorConstants::FloatOne.m128_f32[3];
  pdVar13 = pdVar12 + (longlong)iVar1 * 0xc;
  pFVar11 = this;
  while( true ) {
    uVar9 = SUB84(pFVar11,0);
    if ((int)this->_padding_ != iVar1) {
      this_00 = local_res8;
      bVar8 = `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(this_00);
      uVar9 = SUB84(this_00,0);
      in_EAX = (int)CONCAT71(extraout_var,bVar8);
      fVar19 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
      fVar20 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
      fVar21 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
      fVar22 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
      fVar23 = GlobalVectorConstants::FloatOne.m128_f32[0];
      fVar24 = GlobalVectorConstants::FloatOne.m128_f32[1];
      fVar25 = GlobalVectorConstants::FloatOne.m128_f32[2];
      fVar26 = GlobalVectorConstants::FloatOne.m128_f32[3];
    }
    if (pdVar12 == pdVar13) break;
    dVar18 = pdVar12[2] * pdVar12[2] + *pdVar12 * *pdVar12;
    dVar15 = pdVar12[3] * pdVar12[3] + pdVar12[1] * pdVar12[1];
    dVar17 = dVar15 + dVar18;
    dVar18 = dVar18 + dVar15;
    dVar15 = (double)fVar25 - dVar17;
    dVar16 = (double)fVar26 - dVar18;
    lVar14 = -(ulonglong)
              ((double)fVar22 <
              (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar7,SUB84(dVar16,0) & uVar6));
    dVar17 = (double)fVar23 - dVar17;
    dVar18 = (double)fVar24 - dVar18;
    auVar3._8_4_ = (int)lVar14;
    auVar3._0_8_ = -(ulonglong)
                    ((double)fVar21 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar5,
                                     SUB84(dVar15,0) & uVar4));
    auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar10 = movmskpd(uVar9,auVar3);
    lVar14 = -(ulonglong)
              ((double)fVar20 <
              (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar7,SUB84(dVar18,0) & uVar6));
    auVar2._8_4_ = (int)lVar14;
    auVar2._0_8_ = -(ulonglong)
                    ((double)fVar19 <
                    (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar5,
                                     SUB84(dVar17,0) & uVar4));
    auVar2._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    in_EAX = movmskpd(in_EAX,auVar2);
    if ((uVar10 & 0x3fffffff) != 0 || in_EAX != 0) {
      return false;
    }
    pdVar12 = pdVar12 + 0xc;
    pFVar11 = (FBaseCompactPose<TMemStackAllocator<0>_> *)0x0;
  }
  return true;
}

// ResetToRefPose @ 147964110

void __thiscall
FBaseCompactPose<TSizedDefaultAllocator<32>_>::ResetToRefPose
          (FBaseCompactPose<TSizedDefaultAllocator<32>_> *this,FBoneContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  FBoneContainer *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  uint uVar24;
  UObject *pUVar25;
  USkeleton *this_00;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  
  FBoneContainer::
  FillWithCompactRefPose<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
            (param_1,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)this);
  this->BoneContainer = param_1;
  if ((param_1->bDisableRetargeting != false) &&
     (pUVar25 = FWeakObjectPtr::Get(&(param_1->AssetSkeletalMesh).WeakPtr),
     pUVar25 != (UObject *)0x0)) {
    this_00 = (USkeleton *)FWeakObjectPtr::Get(&(param_1->AssetSkeleton).WeakPtr);
    pTVar26 = USkeleton::GetRefLocalPoses(this_00,(FName)0x0);
    uVar4 = (uint)this->_padding_;
    uVar28 = 0;
    if (uVar4 != 0) {
      lVar29 = 0;
      lVar30 = 0;
      do {
        pFVar5 = this->BoneContainer;
        uVar23 = 0;
        if ((int)uVar28 < (pFVar5->CompactPoseToSkeletonIndex).ArrayNum) {
          uVar23 = ~uVar28 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar23 = *(uint *)((pFVar5->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar30);
        uVar24 = 0;
        if ((int)uVar23 < pTVar26->ArrayNum) {
          uVar24 = ~uVar23 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (pTVar26->AllocatorInstance).Data;
        lVar27 = (longlong)(int)uVar23 * 0x60;
        uVar12 = *(undefined8 *)(pFVar6 + lVar27 + 0x10);
        uVar13 = *(undefined8 *)(pFVar6 + lVar27 + 0x10 + 8);
        uVar14 = *(undefined8 *)(pFVar6 + lVar27 + 0x20);
        uVar15 = *(undefined8 *)(pFVar6 + lVar27 + 0x20 + 8);
        pFVar1 = pFVar6 + lVar27;
        uVar8 = *(undefined4 *)pFVar1;
        uVar9 = *(undefined4 *)(pFVar1 + 4);
        uVar10 = *(undefined4 *)(pFVar1 + 8);
        uVar11 = *(undefined4 *)(pFVar1 + 0xc);
        uVar16 = *(undefined8 *)(pFVar6 + lVar27 + 0x30);
        uVar17 = *(undefined8 *)(pFVar6 + lVar27 + 0x30 + 8);
        uVar18 = *(undefined8 *)(pFVar6 + lVar27 + 0x50);
        uVar19 = *(undefined8 *)(pFVar6 + lVar27 + 0x50 + 8);
        uVar20 = *(undefined8 *)(pFVar6 + lVar27 + 0x40);
        uVar21 = *(undefined8 *)(pFVar6 + lVar27 + 0x40 + 8);
        uVar23 = 0;
        if ((int)uVar28 < (int)this->_padding_) {
          uVar23 = ~uVar28 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar27 = this->_padding_;
        uVar28 = uVar28 + 1;
        lVar30 = lVar30 + 4;
        puVar2 = (undefined4 *)(lVar29 + lVar27);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        puVar3 = (undefined8 *)(lVar29 + 0x10 + lVar27);
        *puVar3 = uVar12;
        puVar3[1] = uVar13;
        puVar3 = (undefined8 *)(lVar29 + 0x20 + lVar27);
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        puVar3 = (undefined8 *)(lVar29 + 0x30 + lVar27);
        *puVar3 = uVar16;
        puVar3[1] = uVar17;
        puVar3 = (undefined8 *)(lVar29 + 0x40 + lVar27);
        *puVar3 = uVar20;
        puVar3[1] = uVar21;
        puVar3 = (undefined8 *)(lVar29 + 0x50 + lVar27);
        *puVar3 = uVar18;
        puVar3[1] = uVar19;
        lVar29 = lVar29 + 0x60;
      } while (uVar28 != uVar4);
    }
  }
  return;
}

