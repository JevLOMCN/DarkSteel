// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// ResetToRefPose @ 146464720

void __thiscall
FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
          (FBaseCompactPose<TMemStackAllocator<0>_> *this,FBoneContainer *param_1)

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
  FillWithCompactRefPose<TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>_>
            (param_1,(TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)this);
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

// SetBoneContainer @ 146468250

void __thiscall
FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
          (FBaseCompactPose<TMemStackAllocator<0>_> *this,FBoneContainer *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  if (param_1 != (FBoneContainer *)0x0) {
    bVar5 = FWeakObjectPtr::IsValid(&(param_1->Asset).WeakPtr);
    if (((bVar5) && (param_1->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
       (0 < (param_1->BoneIndicesArray).ArrayNum)) goto LAB_1464682a5;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("InBoneContainer && InBoneContainer->IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                     ,0x97,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1464682a5:
  this->BoneContainer = param_1;
  uVar2 = (param_1->BoneIndicesArray).ArrayNum;
  if (-1 < (int)uVar2) {
    iVar3 = *(int *)((longlong)&this->_padding_ + 4);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar3 < (int)uVar2) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                (0x60,0x10,uVar2,(ForElementType<UE::Math::TTransform<double>_> *)this,0,piVar1);
    }
    UE::Core::Private::
    ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,uVar2,(ForElementType<UE::Math::TTransform<double>_> *)this,
               (int *)&this->_padding_,piVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

