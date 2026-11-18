// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 19

// FRetargetSkeleton @ 14df18bf0

FRetargetSkeleton * __thiscall
FRetargetSkeleton::FRetargetSkeleton(FRetargetSkeleton *this,FRetargetSkeleton *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FResolvedRetargetPose,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FResolvedRetargetPose *pFVar6;
  
  piVar1 = &(this->BoneNames).ArrayMax;
  (this->BoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->BoneNames).ArrayNum;
  pFVar5 = (param_1->BoneNames).AllocatorInstance.Data;
  (this->BoneNames).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    memcpy((this->BoneNames).AllocatorInstance.Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar2 = &this->ParentIndices;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ParentIndices).ArrayMax;
  iVar4 = (param_1->ParentIndices).ArrayNum;
  pFVar5 = (param_1->ParentIndices).AllocatorInstance.Data;
  (this->ParentIndices).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &(this->RetargetPoses).RetargetPoses;
  (this->RetargetPoses).CurrentRetargetPoseName = (param_1->RetargetPoses).CurrentRetargetPoseName;
  piVar1 = &(this->RetargetPoses).RetargetPoses.ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->RetargetPoses).RetargetPoses.ArrayNum;
  pFVar6 = (FResolvedRetargetPose *)(param_1->RetargetPoses).RetargetPoses.AllocatorInstance.Data;
  (this->RetargetPoses).RetargetPoses.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FResolvedRetargetPose,FResolvedRetargetPose,int>
              ((pTVar3->AllocatorInstance).Data,pFVar6,iVar4);
  }
  pTVar2 = &this->CachedEndOfBranchIndices;
  this->SkeletalMesh = param_1->SkeletalMesh;
  piVar1 = &(this->CachedEndOfBranchIndices).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->CachedEndOfBranchIndices).ArrayNum;
  pFVar5 = (param_1->CachedEndOfBranchIndices).AllocatorInstance.Data;
  (this->CachedEndOfBranchIndices).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  return this;
}

// operator= @ 14df1ed60

FRetargetSkeleton * __thiscall
FRetargetSkeleton::operator=(FRetargetSkeleton *this,FRetargetSkeleton *param_1)

{
  TArray<FResolvedRetargetPose,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FResolvedRetargetPose,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FResolvedRetargetPose *pFVar6;
  
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->BoneNames,&param_1->BoneNames);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ParentIndices,&param_1->ParentIndices);
  pTVar1 = &(param_1->RetargetPoses).RetargetPoses;
  pTVar2 = &(this->RetargetPoses).RetargetPoses;
  (this->RetargetPoses).CurrentRetargetPoseName = (param_1->RetargetPoses).CurrentRetargetPoseName;
  if (pTVar2 != pTVar1) {
    DestructItems<FResolvedRetargetPose,int>
              ((FResolvedRetargetPose *)(pTVar2->AllocatorInstance).Data,
               (this->RetargetPoses).RetargetPoses.ArrayNum);
    iVar4 = (param_1->RetargetPoses).RetargetPoses.ArrayNum;
    piVar3 = &(this->RetargetPoses).RetargetPoses.ArrayMax;
    pFVar6 = (FResolvedRetargetPose *)(pTVar1->AllocatorInstance).Data;
    iVar5 = *piVar3;
    (this->RetargetPoses).RetargetPoses.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      ConstructItems<FResolvedRetargetPose,FResolvedRetargetPose,int>
                ((pTVar2->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  this->SkeletalMesh = param_1->SkeletalMesh;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CachedEndOfBranchIndices,&param_1->CachedEndOfBranchIndices);
  return this;
}

// FindBoneIndexByName @ 14df33570

int __thiscall FRetargetSkeleton::FindBoneIndexByName(FRetargetSkeleton *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->BoneNames).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (this->BoneNames).ArrayNum) {
      return -1;
    }
    if (*pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 1;
  }
  return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
}

// GetCachedEndOfBranchIndex @ 14df35960

int __thiscall FRetargetSkeleton::GetCachedEndOfBranchIndex(FRetargetSkeleton *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  lVar8 = (longlong)param_1;
  if ((param_1 < 0) || ((this->CachedEndOfBranchIndices).ArrayNum <= param_1)) {
    return -1;
  }
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->CachedEndOfBranchIndices).ArrayNum) {
    uVar4 = uVar11;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  if (*(int *)((this->CachedEndOfBranchIndices).AllocatorInstance.Data + lVar8 * 4) == -2) {
    iVar5 = (this->BoneNames).ArrayNum;
    if ((param_1 == 0) || (iVar9 = param_1 + 1, iVar5 <= iVar9)) {
      uVar4 = 0;
      if (param_1 < (this->CachedEndOfBranchIndices).ArrayNum) {
        uVar4 = uVar11;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      *(int *)((this->CachedEndOfBranchIndices).AllocatorInstance.Data + lVar8 * 4) = iVar5 + -1;
      uVar4 = 0;
      if (param_1 < (this->CachedEndOfBranchIndices).ArrayNum) {
        uVar4 = uVar11;
      }
    }
    else {
      uVar4 = 0;
      if (param_1 < (this->CachedEndOfBranchIndices).ArrayNum) {
        uVar4 = uVar11;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      *(undefined4 *)((this->CachedEndOfBranchIndices).AllocatorInstance.Data + lVar8 * 4) =
           0xffffffff;
      iVar6 = GetParentIndex(this,param_1);
      iVar7 = GetParentIndex(this,iVar9);
      iVar10 = -2;
      while ((iVar2 = iVar9, iVar6 < iVar7 && (iVar9 = iVar2 + 1, iVar10 = iVar2, iVar9 < iVar5))) {
        iVar7 = GetParentIndex(this,iVar9);
      }
      uVar4 = 0;
      if (param_1 < (this->CachedEndOfBranchIndices).ArrayNum) {
        uVar4 = uVar11;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      *(int *)((this->CachedEndOfBranchIndices).AllocatorInstance.Data + lVar8 * 4) = iVar10;
      uVar4 = 0;
      if (param_1 < (this->CachedEndOfBranchIndices).ArrayNum) {
        uVar4 = uVar11;
      }
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->CachedEndOfBranchIndices).ArrayNum) {
      uVar4 = uVar11;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
  }
  return *(int *)((this->CachedEndOfBranchIndices).AllocatorInstance.Data + lVar8 * 4);
}

// GetChildrenIndices @ 14df37640

void __thiscall
FRetargetSkeleton::GetChildrenIndices
          (FRetargetSkeleton *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int local_18 [4];
  
  iVar4 = GetCachedEndOfBranchIndex(this,param_1);
  local_18[0] = param_1;
  if (iVar4 != -1) {
    while (iVar5 = local_18[0] + 1, iVar5 <= iVar4) {
      local_18[0] = iVar5;
      if ((iVar5 < 0) || ((this->ParentIndices).ArrayNum <= iVar5)) {
        iVar5 = -1;
      }
      else {
        if ((iVar5 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = *(int *)((this->ParentIndices).AllocatorInstance.Data + (longlong)iVar5 * 4);
      }
      if (iVar5 == param_1) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18[0];
      }
    }
  }
  return;
}

// GetChildrenIndicesRecursive @ 14df378c0

void __thiscall
FRetargetSkeleton::GetChildrenIndicesRecursive
          (FRetargetSkeleton *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int local_18 [4];
  
  iVar4 = GetCachedEndOfBranchIndex(this,param_1);
  local_18[0] = param_1;
  if (iVar4 != -1) {
    while (local_18[0] = local_18[0] + 1, local_18[0] <= iVar4) {
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18[0];
    }
  }
  return;
}

// GetLocalTransformOfSingleBone @ 14df39100

TTransform<double> * __thiscall
FRetargetSkeleton::GetLocalTransformOfSingleBone
          (FRetargetSkeleton *this,TTransform<double> *__return_storage_ptr__,int param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  TTransform<double> *pTVar5;
  uint uVar6;
  
  uVar4 = 0;
  if (param_1 < param_2->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTransform<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pTVar5 = (TTransform<double> *)((param_2->AllocatorInstance).Data + (longlong)param_1 * 0x60);
  uVar4 = 0;
  if (param_1 < (this->ParentIndices).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTransform<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  uVar4 = *(uint *)((this->ParentIndices).AllocatorInstance.Data + (longlong)param_1 * 4);
  if (uVar4 == 0xffffffff) {
    dVar2 = (pTVar5->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar5->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar5->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar5->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar5->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar5->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar5->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  }
  else {
    uVar6 = 0;
    if ((int)uVar4 < param_2->ArrayNum) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TTransform<double> *)(*pcVar1)();
        return pTVar5;
      }
    }
    UE::Math::TTransform<double>::GetRelativeTransform
              (pTVar5,__return_storage_ptr__,
               (TTransform<double> *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x60));
  }
  return __return_storage_ptr__;
}

// GetLocalTransformsOfMultipleBones @ 14df39280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FRetargetSkeleton::GetLocalTransformsOfMultipleBones
          (FRetargetSkeleton *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  double dVar5;
  FRetargetSkeleton *pFVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  TTransform<double> *pTVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_138 [32];
  TTransform<double> *local_118;
  TTransform<double> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [8];
  ForAnyElementType local_e0;
  int local_d8;
  int iStack_d4;
  uint local_d0;
  FRetargetSkeleton *local_c8;
  FScriptContainerElement *local_c0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar15 = (param_1->AllocatorInstance).Data;
  local_d0 = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)local_d0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_c0 = pFVar15 + uVar11 * 4;
  local_d8 = 0;
  iStack_d4 = 0;
  local_c8 = this;
  local_b8 = __return_storage_ptr__;
  while( true ) {
    pFVar2 = local_c0;
    pFVar6 = local_c8;
    if (param_1->ArrayNum != (int)uVar11) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e8);
    }
    if (pFVar15 == pFVar2) {
      (local_b8->AllocatorInstance).Data = local_e0.Data;
      local_b8->ArrayNum = local_d8;
      local_b8->ArrayMax = iStack_d4;
      return local_b8;
    }
    uVar9 = *(uint *)pFVar15;
    pTVar14 = (TTransform<double> *)(longlong)(int)uVar9;
    iVar1 = (pFVar6->ParentIndices).ArrayNum;
    uVar13 = ~uVar9 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar9 < iVar1) {
      uVar8 = uVar13;
    }
    if ((uVar8 == 0) &&
       (local_118 = pTVar14, local_110 = (TTransform<double> *)(longlong)iVar1,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    iVar1 = param_2->ArrayNum;
    uVar8 = *(uint *)((pFVar6->ParentIndices).AllocatorInstance.Data + (longlong)pTVar14 * 4);
    if (uVar8 == 0xffffffff) {
      uVar8 = 0;
      if ((int)uVar9 < iVar1) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (local_118 = pTVar14, local_110 = (TTransform<double> *)(longlong)iVar1,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar10;
      }
      pTVar14 = (TTransform<double> *)((param_2->AllocatorInstance).Data + (longlong)pTVar14 * 0x60)
      ;
      if ((local_e0.Data <= pTVar14) &&
         (pTVar14 < (TTransform<double> *)(local_e0.Data + (longlong)iStack_d4 * 0x60))) {
        local_100 = (longlong)local_d8;
        local_f8 = 0x60;
        local_110 = (TTransform<double> *)local_e0.Data;
        local_118 = pTVar14;
        local_108 = (longlong)iStack_d4;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar10;
        }
      }
      if (local_d8 == iStack_d4) {
        local_d8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&local_e0,&iStack_d4);
      }
      dVar5 = (pTVar14->Rotation).XY.m128d_f64[1];
      lVar12 = (longlong)local_d8 * 0x60;
      pFVar15 = pFVar15 + 4;
      *(double *)(local_e0.Data + lVar12) = (pTVar14->Rotation).XY.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 8) = dVar5;
      dVar5 = (pTVar14->Rotation).ZW.m128d_f64[1];
      *(double *)(local_e0.Data + lVar12 + 0x10) = (pTVar14->Rotation).ZW.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 0x10 + 8) = dVar5;
      dVar5 = (pTVar14->Translation).XY.m128d_f64[1];
      *(double *)(local_e0.Data + lVar12 + 0x20) = (pTVar14->Translation).XY.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 0x20 + 8) = dVar5;
      dVar5 = (pTVar14->Translation).ZW.m128d_f64[1];
      *(double *)(local_e0.Data + lVar12 + 0x30) = (pTVar14->Translation).ZW.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 0x30 + 8) = dVar5;
      dVar5 = (pTVar14->Scale3D).XY.m128d_f64[1];
      *(double *)(local_e0.Data + lVar12 + 0x40) = (pTVar14->Scale3D).XY.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 0x40 + 8) = dVar5;
      dVar5 = (pTVar14->Scale3D).ZW.m128d_f64[1];
      *(double *)(local_e0.Data + lVar12 + 0x50) = (pTVar14->Scale3D).ZW.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 0x50 + 8) = dVar5;
      uVar11 = (ulonglong)local_d0;
      local_d8 = local_d8 + 1;
    }
    else {
      uVar4 = 0;
      if ((int)uVar9 < iVar1) {
        uVar4 = uVar13;
      }
      if ((uVar4 == 0) &&
         (local_118 = pTVar14, local_110 = (TTransform<double> *)(longlong)iVar1,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar10;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (local_118 = (TTransform<double> *)(longlong)(int)uVar8,
         local_110 = (TTransform<double> *)(longlong)param_2->ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar10;
      }
      UE::Math::TTransform<double>::GetRelativeTransform
                ((TTransform<double> *)(pFVar2 + (longlong)pTVar14 * 0x60),&local_a8,
                 (TTransform<double> *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x60));
      if ((local_e0.Data <= &local_a8) &&
         (&local_a8 < (TTransform<double> *)(local_e0.Data + (longlong)iStack_d4 * 0x60))) {
        local_100 = (longlong)local_d8;
        local_f8 = 0x60;
        local_118 = &local_a8;
        local_110 = (TTransform<double> *)local_e0.Data;
        local_108 = (longlong)iStack_d4;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar10;
        }
      }
      if (local_d8 == iStack_d4) {
        local_d8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&local_e0,&iStack_d4);
      }
      lVar12 = (longlong)local_d8 * 0x60;
      pFVar15 = pFVar15 + 4;
      *(double *)(local_e0.Data + lVar12) = local_a8.Rotation.XY.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 8) = local_a8.Rotation.XY.m128d_f64[1];
      *(double *)(local_e0.Data + lVar12 + 0x10) = local_a8.Rotation.ZW.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 0x10 + 8) = local_a8.Rotation.ZW.m128d_f64[1];
      *(double *)(local_e0.Data + lVar12 + 0x20) = local_a8.Translation.XY.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 0x20 + 8) = local_a8.Translation.XY.m128d_f64[1];
      *(double *)(local_e0.Data + lVar12 + 0x30) = local_a8.Translation.ZW.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 0x30 + 8) = local_a8.Translation.ZW.m128d_f64[1];
      *(double *)(local_e0.Data + lVar12 + 0x40) = local_a8.Scale3D.XY.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 0x40 + 8) = local_a8.Scale3D.XY.m128d_f64[1];
      *(double *)(local_e0.Data + lVar12 + 0x50) = local_a8.Scale3D.ZW.m128d_f64[0];
      *(double *)(local_e0.Data + lVar12 + 0x50 + 8) = local_a8.Scale3D.ZW.m128d_f64[1];
      uVar11 = (ulonglong)local_d0;
      local_d8 = local_d8 + 1;
    }
  }
  pcVar3 = (code *)swi(3);
  pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar10;
}

// GetParentIndex @ 14df3b160

int __thiscall FRetargetSkeleton::GetParentIndex(FRetargetSkeleton *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((-1 < param_1) && (param_1 < (this->ParentIndices).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return *(int *)((this->ParentIndices).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return -1;
}

// GetParentTransform @ 14df3b390

TTransform<double> * __thiscall
FRetargetSkeleton::GetParentTransform
          (FRetargetSkeleton *this,int param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  TTransform<double> *pTVar5;
  
  uVar3 = GetParentIndex(this,param_1);
  if (uVar3 == 0xffffffff) {
    return &UE::Math::TTransform<double>::Identity;
  }
  uVar4 = 0;
  if ((int)uVar3 < param_2->ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTransform<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TTransform<double> *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x60);
}

// Initialize @ 14df451d0

void __thiscall
FRetargetSkeleton::Initialize
          (FRetargetSkeleton *this,USkeletalMesh *param_1,ERetargetSourceOrTarget param_2,
          UIKRetargeter *param_3,FName param_4,FRetargetPoseScaleWithPivot *param_5)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  TTuple<FName,FIKRetargetPose> *pTVar8;
  TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
  *pTVar9;
  int *piVar10;
  uint uVar11;
  FIKRetargetPose *pFVar12;
  longlong lVar13;
  int local_res8 [2];
  undefined4 local_48;
  undefined8 local_44;
  
  Reset(this);
  this->SkeletalMesh = param_1;
  lVar7 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
  uVar11 = 0;
  if (0 < *(int *)(lVar7 + 0x28)) {
    lVar13 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar11 < *(int *)(lVar7 + 0x28)) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_44 = *(undefined8 *)(lVar13 + *(longlong *)(lVar7 + 0x20));
      pFVar1 = (this->BoneNames).AllocatorInstance.Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_44) &&
          ((FScriptContainerElement *)&local_44 < pFVar1 + (longlong)(this->BoneNames).ArrayMax * 8)
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->BoneNames).ArrayNum;
      if (iVar6 == (this->BoneNames).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)this,&(this->BoneNames).ArrayMax);
      }
      (this->BoneNames).ArrayNum = iVar6 + 1;
      *(undefined8 *)((this->BoneNames).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_44;
      uVar5 = 0;
      if ((int)uVar11 < *(int *)(lVar7 + 0x28)) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_48 = *(undefined4 *)(lVar13 + 8 + *(longlong *)(lVar7 + 0x20));
      pFVar1 = (this->ParentIndices).AllocatorInstance.Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar1 + (longlong)(this->ParentIndices).ArrayMax * 4)) &&
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
      iVar6 = (this->ParentIndices).ArrayNum;
      if (iVar6 == (this->ParentIndices).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->ParentIndices).AllocatorInstance,
                           &(this->ParentIndices).ArrayMax);
      }
      uVar11 = uVar11 + 1;
      (this->ParentIndices).ArrayNum = iVar6 + 1;
      lVar13 = lVar13 + 0xc;
      *(undefined4 *)((this->ParentIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_48
      ;
    } while ((int)uVar11 < *(int *)(lVar7 + 0x28));
  }
  local_res8[0] = -2;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&this->CachedEndOfBranchIndices,local_res8,(this->ParentIndices).ArrayNum);
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&DefaultPoseName,"Default Pose");
      _Init_thread_footer(&::_TSS0);
    }
    DefaultRetargetPoseName = DefaultPoseName;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DefaultPoseName,"Default Pose");
    _Init_thread_footer(&::_TSS0);
  }
  pTVar9 = (TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
            *)&param_3->SourceRetargetPoses;
  if (param_2 != Source) {
    pTVar9 = (TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
              *)&param_3->TargetRetargetPoses;
  }
  pTVar8 = TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
           ::Find(pTVar9,DefaultPoseName);
  pFVar12 = (FIKRetargetPose *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,FIKRetargetPose> *)0x0) {
    pFVar12 = (FIKRetargetPose *)0x0;
  }
  FResolvedRetargetPoseSet::AddOrUpdateRetargetPose
            (&this->RetargetPoses,this,DefaultRetargetPoseName,pFVar12,param_4,param_5);
  (this->RetargetPoses).CurrentRetargetPoseName = DefaultRetargetPoseName;
  lVar7 = 0x148;
  if (param_2 != Source) {
    lVar7 = 0x150;
  }
  pTVar9 = (TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
            *)&param_3->SourceRetargetPoses;
  FVar2 = *(FName *)((longlong)&param_3->_padding_ + lVar7);
  if (param_2 != Source) {
    pTVar9 = (TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
              *)&param_3->TargetRetargetPoses;
  }
  pTVar8 = TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
           ::Find(pTVar9,FVar2);
  pFVar12 = (FIKRetargetPose *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,FIKRetargetPose> *)0x0) {
    pFVar12 = (FIKRetargetPose *)0x0;
  }
  if (pFVar12 != (FIKRetargetPose *)0x0) {
    FResolvedRetargetPoseSet::AddOrUpdateRetargetPose
              (&this->RetargetPoses,this,FVar2,pFVar12,param_4,param_5);
    (this->RetargetPoses).CurrentRetargetPoseName = FVar2;
  }
  return;
}

// IsParentOf @ 14df489d0

bool __thiscall FRetargetSkeleton::IsParentOf(FRetargetSkeleton *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = GetParentIndex(this,param_2);
  while( true ) {
    if (iVar4 == -1) {
      return false;
    }
    if (iVar4 == param_1) {
      return true;
    }
    if (iVar4 < 0) {
      return false;
    }
    if ((this->ParentIndices).ArrayNum <= iVar4) break;
    if ((iVar4 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = *(int *)((this->ParentIndices).AllocatorInstance.Data + (longlong)iVar4 * 4);
  }
  return false;
}

// Reset @ 14df4ee60

void __thiscall FRetargetSkeleton::Reset(FRetargetSkeleton *this)

{
  int *piVar1;
  int iVar2;
  FResolvedRetargetPose *pFVar3;
  
  (this->BoneNames).ArrayNum = 0;
  if ((this->BoneNames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,&(this->BoneNames).ArrayMax);
  }
  (this->ParentIndices).ArrayNum = 0;
  if ((this->ParentIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ParentIndices).AllocatorInstance,0,&(this->ParentIndices).ArrayMax);
  }
  piVar1 = &(this->RetargetPoses).RetargetPoses.ArrayMax;
  pFVar3 = (FResolvedRetargetPose *)(this->RetargetPoses).RetargetPoses.AllocatorInstance.Data;
  iVar2 = (this->RetargetPoses).RetargetPoses.ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FResolvedRetargetPose,int>(pFVar3,iVar2);
    (this->RetargetPoses).RetargetPoses.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->RetargetPoses).RetargetPoses.AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FResolvedRetargetPose,int>(pFVar3,iVar2);
    (this->RetargetPoses).RetargetPoses.ArrayNum = 0;
  }
  this->SkeletalMesh = (USkeletalMesh *)0x0;
  return;
}

// SetGlobalTransformAndUpdateChildren @ 14df54670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRetargetSkeleton::SetGlobalTransformAndUpdateChildren
          (FRetargetSkeleton *this,int param_1,TTransform<double> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_200;
  TTransform<double> *local_1f0;
  FScriptContainerElement *local_1e8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_238;
  lVar22 = (longlong)param_1;
  local_1f0 = param_2;
  if ((this->BoneNames).ArrayNum != param_3->ArrayNum) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("BoneNames.Num() == InOutGlobalPose.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                        ,0xeb,L"");
    if (bVar17) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 < 0) || (param_3->ArrayNum <= param_1)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InOutGlobalPose.IsValidIndex(InBoneToSetIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                        ,0xec,L"");
    if (bVar17) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar18 = 0;
  if (param_1 < param_3->ArrayNum) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_218 = lVar22;
    local_210 = (longlong)param_3->ArrayNum;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_3->AllocatorInstance).Data;
  dVar4 = (param_2->Rotation).XY.m128d_f64[0];
  dVar5 = (param_2->Rotation).XY.m128d_f64[1];
  dVar6 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar8 = (param_2->Translation).XY.m128d_f64[0];
  dVar9 = (param_2->Translation).XY.m128d_f64[1];
  dVar10 = (param_2->Translation).ZW.m128d_f64[0];
  dVar11 = (param_2->Translation).ZW.m128d_f64[1];
  dVar12 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar13 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar14 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar15 = (param_2->Scale3D).ZW.m128d_f64[1];
  lVar23 = lVar22 * 0x60;
  local_178.Rotation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar23);
  local_178.Rotation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar23 + 8);
  local_178.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar23 + 0x10);
  local_178.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar23 + 0x10 + 8);
  local_178.Translation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar23 + 0x20);
  local_178.Translation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar23 + 0x20 + 8);
  local_178.Translation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar23 + 0x30);
  local_178.Translation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar23 + 0x30 + 8);
  local_178.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar23 + 0x40);
  local_178.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar23 + 0x40 + 8);
  local_178.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar23 + 0x50);
  local_178.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar23 + 0x50 + 8);
  uVar18 = 0;
  if (param_1 < param_3->ArrayNum) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_218 = lVar22;
    local_210 = (longlong)param_3->ArrayNum;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_3->AllocatorInstance).Data;
  *(double *)(pFVar1 + lVar23) = dVar4;
  *(double *)(pFVar1 + lVar23 + 8) = dVar5;
  *(double *)(pFVar1 + lVar23 + 0x10) = dVar6;
  *(double *)(pFVar1 + lVar23 + 0x10 + 8) = dVar7;
  *(double *)(pFVar1 + lVar23 + 0x20) = dVar8;
  *(double *)(pFVar1 + lVar23 + 0x20 + 8) = dVar9;
  *(double *)(pFVar1 + lVar23 + 0x30) = dVar10;
  *(double *)(pFVar1 + lVar23 + 0x30 + 8) = dVar11;
  *(double *)(pFVar1 + lVar23 + 0x40) = dVar12;
  *(double *)(pFVar1 + lVar23 + 0x40 + 8) = dVar13;
  *(double *)(pFVar1 + lVar23 + 0x50) = dVar14;
  *(double *)(pFVar1 + lVar23 + 0x50 + 8) = dVar15;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  GetChildrenIndicesRecursive(this,param_1,&local_200);
  iVar16 = local_200.ArrayNum;
  uVar20 = (ulonglong)local_200.ArrayNum;
  local_1e8 = local_200.AllocatorInstance.Data + uVar20 * 4;
  FVar24.Data = local_200.AllocatorInstance.Data;
  while( true ) {
    pFVar1 = local_1e8;
    if ((int)uVar20 != iVar16) {
      local_208[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_208);
    }
    if (FVar24.Data == pFVar1) break;
    uVar18 = *(uint *)FVar24.Data;
    lVar22 = (longlong)(int)uVar18;
    uVar21 = ~uVar18 >> 0x1f;
    uVar19 = 0;
    if ((int)uVar18 < param_3->ArrayNum) {
      uVar19 = uVar21;
    }
    if (uVar19 == 0) {
      local_218 = lVar22;
      local_210 = (longlong)param_3->ArrayNum;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar23 = lVar22 * 0x60;
    UE::Math::TTransform<double>::GetRelativeTransform
              ((TTransform<double> *)((param_3->AllocatorInstance).Data + lVar23),&local_118,
               &local_178);
    local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_1d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_1d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_1d8,&local_118,local_1f0);
    dVar15 = local_1d8.Scale3D.ZW.m128d_f64[1];
    dVar14 = local_1d8.Scale3D.ZW.m128d_f64[0];
    dVar13 = local_1d8.Scale3D.XY.m128d_f64[1];
    dVar12 = local_1d8.Scale3D.XY.m128d_f64[0];
    dVar11 = local_1d8.Translation.ZW.m128d_f64[1];
    dVar10 = local_1d8.Translation.ZW.m128d_f64[0];
    dVar9 = local_1d8.Translation.XY.m128d_f64[1];
    dVar8 = local_1d8.Translation.XY.m128d_f64[0];
    dVar7 = local_1d8.Rotation.ZW.m128d_f64[1];
    dVar6 = local_1d8.Rotation.ZW.m128d_f64[0];
    dVar5 = local_1d8.Rotation.XY.m128d_f64[1];
    dVar4 = local_1d8.Rotation.XY.m128d_f64[0];
    uVar19 = 0;
    if ((int)uVar18 < param_3->ArrayNum) {
      uVar19 = uVar21;
    }
    if (uVar19 == 0) {
      local_218 = lVar22;
      local_210 = (longlong)param_3->ArrayNum;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_3->AllocatorInstance).Data;
    *(double *)(pFVar1 + lVar23) = dVar4;
    *(double *)(pFVar1 + lVar23 + 8) = dVar5;
    *(double *)(pFVar1 + lVar23 + 0x10) = dVar6;
    *(double *)(pFVar1 + lVar23 + 0x10 + 8) = dVar7;
    *(double *)(pFVar1 + lVar23 + 0x20) = dVar8;
    *(double *)(pFVar1 + lVar23 + 0x20 + 8) = dVar9;
    *(double *)(pFVar1 + lVar23 + 0x30) = dVar10;
    *(double *)(pFVar1 + lVar23 + 0x30 + 8) = dVar11;
    *(double *)(pFVar1 + lVar23 + 0x40) = dVar12;
    *(double *)(pFVar1 + lVar23 + 0x40 + 8) = dVar13;
    *(double *)(pFVar1 + lVar23 + 0x50) = dVar14;
    *(double *)(pFVar1 + lVar23 + 0x50 + 8) = dVar15;
    uVar19 = 0;
    if ((int)uVar18 < param_3->ArrayNum) {
      uVar19 = uVar21;
    }
    if (uVar19 == 0) {
      local_218 = lVar22;
      local_210 = (longlong)param_3->ArrayNum;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_3->AllocatorInstance).Data;
    FVar24.Data = FVar24.Data + 4;
    dVar4 = *(double *)(pFVar1 + lVar23);
    dVar5 = *(double *)(pFVar1 + lVar23 + 8);
    dVar6 = *(double *)(pFVar1 + lVar23 + 0x10);
    dVar7 = *(double *)(pFVar1 + lVar23 + 0x10 + 8);
    auVar33._0_8_ = dVar6 * dVar6 + dVar4 * dVar4;
    auVar33._8_8_ = dVar7 * dVar7 + dVar5 * dVar5;
    auVar29._8_4_ = SUB84(auVar33._8_8_,0);
    auVar29._0_8_ = auVar33._0_8_;
    auVar29._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
    auVar30._0_8_ = auVar29._8_8_ + auVar33._0_8_;
    auVar30._8_8_ = auVar33._0_8_ + auVar33._8_8_;
    auVar34 = sqrtpd(auVar33,auVar30);
    uVar25 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar30._0_8_);
    uVar27 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar30._8_8_);
    uVar26 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar30._0_8_);
    uVar28 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar30._8_8_);
    auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
    auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar34);
    auVar32._0_8_ = uVar26 & (ulonglong)(auVar31._0_8_ * dVar4);
    uVar20 = uVar28 & (ulonglong)(auVar31._8_8_ * dVar5);
    auVar32._8_4_ = (undefined4)uVar20;
    auVar32._12_4_ = (undefined4)(uVar20 >> 0x20);
    auVar35._0_8_ = uVar25 & (ulonglong)(auVar34._0_8_ * dVar6);
    uVar20 = uVar27 & (ulonglong)(auVar34._8_8_ * dVar7);
    auVar35._8_4_ = (undefined4)uVar20;
    auVar35._12_4_ = (undefined4)(uVar20 >> 0x20);
    auVar34._4_4_ =
         ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar34._0_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar34._8_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar34._12_4_ =
         ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    uVar18 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    uVar19 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    uVar21 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])(pFVar1 + lVar23) = auVar32 | auVar34;
    auVar31._4_4_ = ~(uint)(uVar25 >> 0x20) & uVar19;
    auVar31._0_4_ = ~(uint)uVar25 & uVar18;
    auVar31._8_4_ = ~(uint)uVar27 & uVar21;
    auVar31._12_4_ = ~(uint)(uVar27 >> 0x20) & uVar3;
    *(undefined1 (*) [16])(pFVar1 + lVar23 + 0x10) = auVar35 | auVar31;
    uVar20 = local_200._8_8_ & 0xffffffff;
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  return;
}

// UpdateGlobalTransformOfSingleBone @ 14df5d240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRetargetSkeleton::UpdateGlobalTransformOfSingleBone
          (FRetargetSkeleton *this,int param_1,TTransform<double> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_138;
  lVar8 = (longlong)param_1;
  iVar2 = (this->ParentIndices).ArrayNum;
  uVar6 = 0;
  if (param_1 < iVar2) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_118 = lVar8;
    local_110 = (longlong)iVar2;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar6 = *(uint *)((this->ParentIndices).AllocatorInstance.Data + lVar8 * 4);
  if (uVar6 == 0xffffffff) {
    uVar9 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
    uVar10 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
    uVar11 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
    uVar12 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
    uVar13 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
    uVar14 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
    uVar15 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
    uVar16 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
    uVar17 = *(undefined4 *)(param_2->Translation).XY.m128d_f64;
    uVar18 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
    uVar19 = *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
    uVar20 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
    uVar21 = *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
    uVar22 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
    uVar23 = *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1);
    uVar24 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc);
    uVar25 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
    uVar26 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
    uVar27 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
    uVar28 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
    uVar29 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
    uVar30 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
    uVar31 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
    uVar32 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
  }
  else {
    uVar7 = 0;
    if ((int)uVar6 < param_3->ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_118 = (longlong)(int)uVar6;
      local_110 = (longlong)param_3->ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_108,param_2,
               (TTransform<double> *)
               ((param_3->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x60));
    uVar9 = local_108.Rotation.XY.m128d_f64[0]._0_4_;
    uVar10 = local_108.Rotation.XY.m128d_f64[0]._4_4_;
    uVar11 = local_108.Rotation.XY.m128d_f64[1]._0_4_;
    uVar12 = local_108.Rotation.XY.m128d_f64[1]._4_4_;
    uVar13 = local_108.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar14 = local_108.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar15 = local_108.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar16 = local_108.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar17 = local_108.Translation.XY.m128d_f64[0]._0_4_;
    uVar18 = local_108.Translation.XY.m128d_f64[0]._4_4_;
    uVar19 = local_108.Translation.XY.m128d_f64[1]._0_4_;
    uVar20 = local_108.Translation.XY.m128d_f64[1]._4_4_;
    uVar21 = local_108.Translation.ZW.m128d_f64[0]._0_4_;
    uVar22 = local_108.Translation.ZW.m128d_f64[0]._4_4_;
    uVar23 = local_108.Translation.ZW.m128d_f64[1]._0_4_;
    uVar24 = local_108.Translation.ZW.m128d_f64[1]._4_4_;
    uVar25 = local_108.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar26 = local_108.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar27 = local_108.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar28 = local_108.Scale3D.XY.m128d_f64[1]._4_4_;
    uVar29 = local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar30 = local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar31 = local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar32 = local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  local_110 = (longlong)param_3->ArrayNum;
  uVar6 = 0;
  if (param_1 < param_3->ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_118 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_3->AllocatorInstance).Data;
  lVar8 = lVar8 * 0x60;
  pFVar1 = pFVar3 + lVar8;
  *(undefined4 *)pFVar1 = uVar9;
  *(undefined4 *)(pFVar1 + 4) = uVar10;
  *(undefined4 *)(pFVar1 + 8) = uVar11;
  *(undefined4 *)(pFVar1 + 0xc) = uVar12;
  pFVar1 = pFVar3 + lVar8 + 0x10;
  *(undefined4 *)pFVar1 = uVar13;
  *(undefined4 *)(pFVar1 + 4) = uVar14;
  *(undefined4 *)(pFVar1 + 8) = uVar15;
  *(undefined4 *)(pFVar1 + 0xc) = uVar16;
  pFVar1 = pFVar3 + lVar8 + 0x20;
  *(undefined4 *)pFVar1 = uVar17;
  *(undefined4 *)(pFVar1 + 4) = uVar18;
  *(undefined4 *)(pFVar1 + 8) = uVar19;
  *(undefined4 *)(pFVar1 + 0xc) = uVar20;
  pFVar1 = pFVar3 + lVar8 + 0x30;
  *(undefined4 *)pFVar1 = uVar21;
  *(undefined4 *)(pFVar1 + 4) = uVar22;
  *(undefined4 *)(pFVar1 + 8) = uVar23;
  *(undefined4 *)(pFVar1 + 0xc) = uVar24;
  pFVar1 = pFVar3 + lVar8 + 0x40;
  *(undefined4 *)pFVar1 = uVar25;
  *(undefined4 *)(pFVar1 + 4) = uVar26;
  *(undefined4 *)(pFVar1 + 8) = uVar27;
  *(undefined4 *)(pFVar1 + 0xc) = uVar28;
  pFVar3 = pFVar3 + lVar8 + 0x50;
  *(undefined4 *)pFVar3 = uVar29;
  *(undefined4 *)(pFVar3 + 4) = uVar30;
  *(undefined4 *)(pFVar3 + 8) = uVar31;
  *(undefined4 *)(pFVar3 + 0xc) = uVar32;
  return;
}

// UpdateGlobalTransformsBelowBone @ 14df5d4d0

void __thiscall
FRetargetSkeleton::UpdateGlobalTransformsBelowBone
          (FRetargetSkeleton *this,int param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = &(this->BoneNames).ArrayNum;
  if ((param_1 + 1 < 0) || (*piVar1 <= param_1 + 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneNames.IsValidIndex(StartBoneIndex+1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                       ,0xdc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*piVar1 != param_2->ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneNames.Num() == InLocalPose.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                       ,0xdd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*piVar1 != param_3->ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneNames.Num() == OutGlobalPose.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                       ,0xde,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = param_1 + 1;
  if ((int)uVar5 < param_3->ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      UpdateGlobalTransformOfSingleBone
                (this,uVar5,
                 (TTransform<double> *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x60),param_3);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < param_3->ArrayNum);
  }
  return;
}

// UpdateGlobalTransformsOfMultipleBones @ 14df5d630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRetargetSkeleton::UpdateGlobalTransformsOfMultipleBones
          (FRetargetSkeleton *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
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
  undefined1 auStackY_168 [32];
  longlong local_130;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_168;
  iVar12 = param_1->ArrayNum;
  if (param_2->ArrayNum == iVar12) {
    uVar9 = 0;
    if (0 < iVar12) {
      lVar13 = 0;
      local_130 = 0;
      do {
        uVar11 = ~uVar9 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar9 < iVar12) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar13);
        uVar10 = ~uVar5 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar5 < (this->ParentIndices).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = *(uint *)((this->ParentIndices).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
        if (uVar6 == 0xffffffff) {
          uVar6 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (param_2->AllocatorInstance).Data;
          pFVar1 = pFVar2 + local_130;
          uVar14 = *(undefined4 *)pFVar1;
          uVar15 = *(undefined4 *)(pFVar1 + 4);
          uVar16 = *(undefined4 *)(pFVar1 + 8);
          uVar17 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = pFVar2 + local_130 + 0x10;
          uVar18 = *(undefined4 *)pFVar1;
          uVar19 = *(undefined4 *)(pFVar1 + 4);
          uVar20 = *(undefined4 *)(pFVar1 + 8);
          uVar21 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = pFVar2 + local_130 + 0x20;
          uVar22 = *(undefined4 *)pFVar1;
          uVar23 = *(undefined4 *)(pFVar1 + 4);
          uVar24 = *(undefined4 *)(pFVar1 + 8);
          uVar25 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = pFVar2 + local_130 + 0x30;
          uVar26 = *(undefined4 *)pFVar1;
          uVar27 = *(undefined4 *)(pFVar1 + 4);
          uVar28 = *(undefined4 *)(pFVar1 + 8);
          uVar29 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = pFVar2 + local_130 + 0x40;
          uVar30 = *(undefined4 *)pFVar1;
          uVar31 = *(undefined4 *)(pFVar1 + 4);
          uVar32 = *(undefined4 *)(pFVar1 + 8);
          uVar33 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar2 = pFVar2 + local_130 + 0x50;
          uVar34 = *(undefined4 *)pFVar2;
          uVar35 = *(undefined4 *)(pFVar2 + 4);
          uVar36 = *(undefined4 *)(pFVar2 + 8);
          uVar37 = *(undefined4 *)(pFVar2 + 0xc);
          uVar11 = 0;
          if ((int)uVar5 < param_3->ArrayNum) {
            uVar11 = uVar10;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          uVar7 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (param_2->AllocatorInstance).Data;
          uVar11 = 0;
          if ((int)uVar6 < param_3->ArrayNum) {
            uVar11 = ~uVar6 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_118.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_118.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_118.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_118.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_118.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_118.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_118.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_118,(TTransform<double> *)(pFVar1 + (longlong)(int)uVar9 * 0x60),
                     (TTransform<double> *)
                     ((param_3->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x60));
          uVar14 = local_118.Rotation.XY.m128d_f64[0]._0_4_;
          uVar15 = local_118.Rotation.XY.m128d_f64[0]._4_4_;
          uVar16 = local_118.Rotation.XY.m128d_f64[1]._0_4_;
          uVar17 = local_118.Rotation.XY.m128d_f64[1]._4_4_;
          uVar18 = local_118.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar19 = local_118.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar20 = local_118.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar21 = local_118.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar22 = local_118.Translation.XY.m128d_f64[0]._0_4_;
          uVar23 = local_118.Translation.XY.m128d_f64[0]._4_4_;
          uVar24 = local_118.Translation.XY.m128d_f64[1]._0_4_;
          uVar25 = local_118.Translation.XY.m128d_f64[1]._4_4_;
          uVar11 = 0;
          if ((int)uVar5 < param_3->ArrayNum) {
            uVar11 = uVar10;
          }
          uVar26 = local_118.Translation.ZW.m128d_f64[0]._0_4_;
          uVar27 = local_118.Translation.ZW.m128d_f64[0]._4_4_;
          uVar28 = local_118.Translation.ZW.m128d_f64[1]._0_4_;
          uVar29 = local_118.Translation.ZW.m128d_f64[1]._4_4_;
          uVar30 = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar31 = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar32 = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar33 = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar34 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar35 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar36 = local_118.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar37 = local_118.Scale3D.ZW.m128d_f64[1]._4_4_;
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = (param_3->AllocatorInstance).Data;
        local_130 = local_130 + 0x60;
        lVar8 = (longlong)(int)uVar5 * 0x60;
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 4;
        pFVar1 = pFVar2 + lVar8;
        *(undefined4 *)pFVar1 = uVar14;
        *(undefined4 *)(pFVar1 + 4) = uVar15;
        *(undefined4 *)(pFVar1 + 8) = uVar16;
        *(undefined4 *)(pFVar1 + 0xc) = uVar17;
        pFVar1 = pFVar2 + lVar8 + 0x10;
        *(undefined4 *)pFVar1 = uVar18;
        *(undefined4 *)(pFVar1 + 4) = uVar19;
        *(undefined4 *)(pFVar1 + 8) = uVar20;
        *(undefined4 *)(pFVar1 + 0xc) = uVar21;
        pFVar1 = pFVar2 + lVar8 + 0x20;
        *(undefined4 *)pFVar1 = uVar22;
        *(undefined4 *)(pFVar1 + 4) = uVar23;
        *(undefined4 *)(pFVar1 + 8) = uVar24;
        *(undefined4 *)(pFVar1 + 0xc) = uVar25;
        pFVar1 = pFVar2 + lVar8 + 0x30;
        *(undefined4 *)pFVar1 = uVar26;
        *(undefined4 *)(pFVar1 + 4) = uVar27;
        *(undefined4 *)(pFVar1 + 8) = uVar28;
        *(undefined4 *)(pFVar1 + 0xc) = uVar29;
        pFVar1 = pFVar2 + lVar8 + 0x40;
        *(undefined4 *)pFVar1 = uVar30;
        *(undefined4 *)(pFVar1 + 4) = uVar31;
        *(undefined4 *)(pFVar1 + 8) = uVar32;
        *(undefined4 *)(pFVar1 + 0xc) = uVar33;
        pFVar2 = pFVar2 + lVar8 + 0x50;
        *(undefined4 *)pFVar2 = uVar34;
        *(undefined4 *)(pFVar2 + 4) = uVar35;
        *(undefined4 *)(pFVar2 + 8) = uVar36;
        *(undefined4 *)(pFVar2 + 0xc) = uVar37;
        iVar12 = param_1->ArrayNum;
      } while ((int)uVar9 < iVar12);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4490890690292613465>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                       ,0x159,"InLocalTransforms.Num() == InBoneIndices.Num()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// UpdateLocalTransformOfSingleBone @ 14df5e160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRetargetSkeleton::UpdateLocalTransformOfSingleBone
          (FRetargetSkeleton *this,int param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TTransform<double> *pTVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar10 = (longlong)param_1;
  iVar2 = (this->ParentIndices).ArrayNum;
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < iVar2) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (local_128 = lVar10, local_120 = (longlong)iVar2,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = param_3->ArrayNum;
  uVar6 = *(uint *)((this->ParentIndices).AllocatorInstance.Data + lVar10 * 4);
  if (uVar6 == 0xffffffff) {
    uVar6 = 0;
    if (param_1 < iVar2) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (local_128 = lVar10, local_120 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    lVar11 = lVar10 * 0x60;
    local_108 = *(double *)(pFVar3 + lVar11 + 0x10);
    dStack_100 = *(double *)(pFVar3 + lVar11 + 0x10 + 8);
    local_f8 = *(double *)(pFVar3 + lVar11 + 0x20);
    dStack_f0 = *(double *)(pFVar3 + lVar11 + 0x20 + 8);
    pFVar1 = pFVar3 + lVar11;
    local_118._0_4_ = *(undefined4 *)pFVar1;
    local_118._4_4_ = *(undefined4 *)(pFVar1 + 4);
    uStack_110 = *(undefined4 *)(pFVar1 + 8);
    uStack_10c = *(undefined4 *)(pFVar1 + 0xc);
    local_e8 = *(double *)(pFVar3 + lVar11 + 0x30);
    dStack_e0 = *(double *)(pFVar3 + lVar11 + 0x30 + 8);
    local_c8 = *(double *)(pFVar3 + lVar11 + 0x50);
    dStack_c0 = *(double *)(pFVar3 + lVar11 + 0x50 + 8);
    local_d8 = *(double *)(pFVar3 + lVar11 + 0x40);
    dStack_d0 = *(double *)(pFVar3 + lVar11 + 0x40 + 8);
    local_120 = (longlong)param_2->ArrayNum;
    uVar6 = 0;
    if (param_1 < param_2->ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (local_128 = lVar10,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    pFVar1 = pFVar3 + lVar11;
    *(undefined4 *)pFVar1 = (undefined4)local_118;
    *(undefined4 *)(pFVar1 + 4) = local_118._4_4_;
    *(undefined4 *)(pFVar1 + 8) = uStack_110;
    *(undefined4 *)(pFVar1 + 0xc) = uStack_10c;
    *(double *)(pFVar3 + lVar11 + 0x10) = local_108;
    *(double *)(pFVar3 + lVar11 + 0x10 + 8) = dStack_100;
    *(double *)(pFVar3 + lVar11 + 0x20) = local_f8;
    *(double *)(pFVar3 + lVar11 + 0x20 + 8) = dStack_f0;
    *(double *)(pFVar3 + lVar11 + 0x30) = local_e8;
    *(double *)(pFVar3 + lVar11 + 0x30 + 8) = dStack_e0;
    *(double *)(pFVar3 + lVar11 + 0x40) = local_d8;
    *(double *)(pFVar3 + lVar11 + 0x40 + 8) = dStack_d0;
    *(double *)(pFVar3 + lVar11 + 0x50) = local_c8;
    *(double *)(pFVar3 + lVar11 + 0x50 + 8) = dStack_c0;
  }
  else {
    uVar7 = 0;
    if (param_1 < iVar2) {
      uVar7 = uVar9;
    }
    if ((uVar7 == 0) &&
       (local_128 = lVar10, local_120 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar11 = lVar10 * 0x60;
    local_118 = (TTransform<double> *)((param_3->AllocatorInstance).Data + lVar11);
    uVar7 = 0;
    if ((int)uVar6 < param_3->ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_128 = (longlong)(int)uVar6, local_120 = (longlong)param_3->ArrayNum,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = UE::Math::TTransform<double>::GetRelativeTransform
                       (local_118,&local_b8,
                        (TTransform<double> *)
                        ((param_3->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x60));
    local_c8 = (pTVar8->Rotation).ZW.m128d_f64[0];
    dStack_c0 = (pTVar8->Rotation).ZW.m128d_f64[1];
    local_d8 = (pTVar8->Translation).XY.m128d_f64[0];
    dStack_d0 = (pTVar8->Translation).XY.m128d_f64[1];
    local_118._0_4_ = *(undefined4 *)(pTVar8->Rotation).XY.m128d_f64;
    local_118._4_4_ = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 4);
    uStack_110 = *(undefined4 *)((pTVar8->Rotation).XY.m128d_f64 + 1);
    uStack_10c = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 0xc);
    local_e8 = (pTVar8->Translation).ZW.m128d_f64[0];
    dStack_e0 = (pTVar8->Translation).ZW.m128d_f64[1];
    local_108 = (pTVar8->Scale3D).ZW.m128d_f64[0];
    dStack_100 = (pTVar8->Scale3D).ZW.m128d_f64[1];
    local_f8 = (pTVar8->Scale3D).XY.m128d_f64[0];
    dStack_f0 = (pTVar8->Scale3D).XY.m128d_f64[1];
    local_120 = (longlong)param_2->ArrayNum;
    uVar6 = 0;
    if (param_1 < param_2->ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (local_128 = lVar10,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    pFVar1 = pFVar3 + lVar11;
    *(undefined4 *)pFVar1 = (undefined4)local_118;
    *(undefined4 *)(pFVar1 + 4) = local_118._4_4_;
    *(undefined4 *)(pFVar1 + 8) = uStack_110;
    *(undefined4 *)(pFVar1 + 0xc) = uStack_10c;
    *(double *)(pFVar3 + lVar11 + 0x10) = local_c8;
    *(double *)(pFVar3 + lVar11 + 0x10 + 8) = dStack_c0;
    *(double *)(pFVar3 + lVar11 + 0x20) = local_d8;
    *(double *)(pFVar3 + lVar11 + 0x20 + 8) = dStack_d0;
    *(double *)(pFVar3 + lVar11 + 0x30) = local_e8;
    *(double *)(pFVar3 + lVar11 + 0x30 + 8) = dStack_e0;
    *(double *)(pFVar3 + lVar11 + 0x40) = local_f8;
    *(double *)(pFVar3 + lVar11 + 0x40 + 8) = dStack_f0;
    *(double *)(pFVar3 + lVar11 + 0x50) = local_108;
    *(double *)(pFVar3 + lVar11 + 0x50 + 8) = dStack_100;
  }
  return;
}

// UpdateLocalTransformsBelowBone @ 14df5e4b0

void __thiscall
FRetargetSkeleton::UpdateLocalTransformsBelowBone
          (FRetargetSkeleton *this,int param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  piVar1 = &(this->BoneNames).ArrayNum;
  if (((param_1 + 1 < 0) || (*piVar1 <= param_1 + 1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoneNames.IsValidIndex(StartBoneIndex+1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                         ,0x101,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*piVar1 != param_2->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoneNames.Num() == OutLocalPose.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                         ,0x102,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*piVar1 != param_3->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoneNames.Num() == InGlobalPose.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                         ,0x103,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1 + 1;
  if (iVar4 < param_3->ArrayNum) {
    do {
      UpdateLocalTransformOfSingleBone(this,iVar4,param_2,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3->ArrayNum);
  }
  return;
}

