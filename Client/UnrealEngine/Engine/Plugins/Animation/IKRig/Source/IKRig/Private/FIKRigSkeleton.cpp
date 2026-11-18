// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 28

// StaticStruct @ 14deed980

UScriptStruct * __cdecl FIKRigSkeleton::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSkeleton.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSkeleton.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSkeleton,(UObject *)pUVar1,L"IKRigSkeleton"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FIKRigSkeleton.OuterSingleton;
}

// FIKRigSkeleton @ 14df17ce0

FIKRigSkeleton * __thiscall
FIKRigSkeleton::FIKRigSkeleton(FIKRigSkeleton *this,FIKRigSkeleton *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  piVar1 = &(this->BoneNames).ArrayMax;
  (this->BoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->BoneNames).ArrayNum;
  pFVar6 = (param_1->BoneNames).AllocatorInstance.Data;
  (this->BoneNames).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->BoneNames).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar2 = &this->ParentIndices;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ParentIndices).ArrayMax;
  iVar5 = (param_1->ParentIndices).ArrayNum;
  pFVar6 = (param_1->ParentIndices).AllocatorInstance.Data;
  (this->ParentIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar3 = &this->ExcludedBones;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ExcludedBones).ArrayMax;
  iVar5 = (param_1->ExcludedBones).ArrayNum;
  pFVar6 = (param_1->ExcludedBones).AllocatorInstance.Data;
  (this->ExcludedBones).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar4 = &this->CurrentPoseGlobal;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurrentPoseGlobal).ArrayMax;
  iVar5 = (param_1->CurrentPoseGlobal).ArrayNum;
  pFVar6 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
  (this->CurrentPoseGlobal).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x60);
  }
  pTVar4 = &this->CurrentPoseLocal;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurrentPoseLocal).ArrayMax;
  iVar5 = (param_1->CurrentPoseLocal).ArrayNum;
  pFVar6 = (param_1->CurrentPoseLocal).AllocatorInstance.Data;
  (this->CurrentPoseLocal).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x60);
  }
  pTVar4 = &this->RefPoseGlobal;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RefPoseGlobal).ArrayMax;
  iVar5 = (param_1->RefPoseGlobal).ArrayNum;
  pFVar6 = (param_1->RefPoseGlobal).AllocatorInstance.Data;
  (this->RefPoseGlobal).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x60);
  }
  pTVar2 = &this->CachedEndOfBranchIndices;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CachedEndOfBranchIndices).ArrayMax;
  iVar5 = (param_1->CachedEndOfBranchIndices).ArrayNum;
  pFVar6 = (param_1->CachedEndOfBranchIndices).AllocatorInstance.Data;
  (this->CachedEndOfBranchIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  return this;
}

// ~FIKRigSkeleton @ 14df1bf60

void __thiscall FIKRigSkeleton::~FIKRigSkeleton(FIKRigSkeleton *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CachedEndOfBranchIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RefPoseGlobal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentPoseLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentPoseGlobal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExcludedBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14df1e710

FIKRigSkeleton * __thiscall FIKRigSkeleton::operator=(FIKRigSkeleton *this,FIKRigSkeleton *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  
  if (this != param_1) {
    pFVar6 = (this->BoneNames).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (this->BoneNames).AllocatorInstance.Data = (param_1->BoneNames).AllocatorInstance.Data;
    (param_1->BoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BoneNames).ArrayNum = (param_1->BoneNames).ArrayNum;
    (this->BoneNames).ArrayMax = (param_1->BoneNames).ArrayMax;
    (param_1->BoneNames).ArrayNum = 0;
    (param_1->BoneNames).ArrayMax = 0;
  }
  pTVar1 = &param_1->ParentIndices;
  pTVar7 = &this->ParentIndices;
  if (pTVar7 != pTVar1) {
    pFVar6 = (pTVar7->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar7->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParentIndices).ArrayNum = (param_1->ParentIndices).ArrayNum;
    (this->ParentIndices).ArrayMax = (param_1->ParentIndices).ArrayMax;
    (param_1->ParentIndices).ArrayNum = 0;
    (param_1->ParentIndices).ArrayMax = 0;
  }
  pTVar2 = &param_1->ExcludedBones;
  pTVar3 = &this->ExcludedBones;
  if (pTVar3 != pTVar2) {
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ExcludedBones).ArrayNum = (param_1->ExcludedBones).ArrayNum;
    (this->ExcludedBones).ArrayMax = (param_1->ExcludedBones).ArrayMax;
    (param_1->ExcludedBones).ArrayNum = 0;
    (param_1->ExcludedBones).ArrayMax = 0;
  }
  pTVar4 = &param_1->CurrentPoseGlobal;
  pTVar5 = &this->CurrentPoseGlobal;
  if (pTVar5 != pTVar4) {
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CurrentPoseGlobal).ArrayNum = (param_1->CurrentPoseGlobal).ArrayNum;
    (this->CurrentPoseGlobal).ArrayMax = (param_1->CurrentPoseGlobal).ArrayMax;
    (param_1->CurrentPoseGlobal).ArrayNum = 0;
    (param_1->CurrentPoseGlobal).ArrayMax = 0;
  }
  pTVar4 = &param_1->CurrentPoseLocal;
  pTVar5 = &this->CurrentPoseLocal;
  if (pTVar5 != pTVar4) {
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CurrentPoseLocal).ArrayNum = (param_1->CurrentPoseLocal).ArrayNum;
    (this->CurrentPoseLocal).ArrayMax = (param_1->CurrentPoseLocal).ArrayMax;
    (param_1->CurrentPoseLocal).ArrayNum = 0;
    (param_1->CurrentPoseLocal).ArrayMax = 0;
  }
  pTVar4 = &param_1->RefPoseGlobal;
  pTVar5 = &this->RefPoseGlobal;
  if (pTVar5 != pTVar4) {
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RefPoseGlobal).ArrayNum = (param_1->RefPoseGlobal).ArrayNum;
    (this->RefPoseGlobal).ArrayMax = (param_1->RefPoseGlobal).ArrayMax;
    (param_1->RefPoseGlobal).ArrayNum = 0;
    (param_1->RefPoseGlobal).ArrayMax = 0;
  }
  pTVar7 = &param_1->CachedEndOfBranchIndices;
  pTVar1 = &this->CachedEndOfBranchIndices;
  if (pTVar1 != pTVar7) {
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CachedEndOfBranchIndices).ArrayNum = (param_1->CachedEndOfBranchIndices).ArrayNum;
    (this->CachedEndOfBranchIndices).ArrayMax = (param_1->CachedEndOfBranchIndices).ArrayMax;
    (param_1->CachedEndOfBranchIndices).ArrayNum = 0;
    (param_1->CachedEndOfBranchIndices).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14df1e8c0

FIKRigSkeleton * __thiscall FIKRigSkeleton::operator=(FIKRigSkeleton *this,FIKRigSkeleton *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->BoneNames,&param_1->BoneNames);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ParentIndices,&param_1->ParentIndices);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->ExcludedBones,&param_1->ExcludedBones)
  ;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentPoseGlobal,&param_1->CurrentPoseGlobal);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentPoseLocal,&param_1->CurrentPoseLocal);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->RefPoseGlobal,&param_1->RefPoseGlobal);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CachedEndOfBranchIndices,&param_1->CachedEndOfBranchIndices);
  return this;
}

// operator() @ 14df20a50

int __thiscall
`FIKRigSkeleton::GetMirroredBoneIndices'::__l2::<lambda_3>::operator()
          (void *this,FName param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  float fVar17;
  FName local_res10;
  undefined1 local_res18 [8];
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [4];
  
  local_res10 = param_1;
  if ((param_2->ArrayNum == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InBoneIndices.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigSkeleton.cpp"
                         ,0x1e5,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  if (param_2->ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
  }
  uVar14 = *(uint *)(param_2->AllocatorInstance).Data;
  pFVar12 = ::FName::ToString(&local_res10,&local_88);
  ::FString::ToLower(pFVar12,&local_98);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  fVar5 = __real_3f800000;
  pFVar15 = (param_2->AllocatorInstance).Data;
  iVar8 = param_2->ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar8 * 4;
  fVar17 = __real_bf800000;
  while( true ) {
    if (param_2->ArrayNum != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar15 == pFVar1) break;
    uVar2 = *(uint *)pFVar15;
    plVar3 = *(longlong **)this;
    uVar9 = 0;
    if ((int)uVar2 < (int)plVar3[1]) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    pFVar12 = ::FName::ToString((FName *)(*plVar3 + (longlong)(int)uVar2 * 8),local_78);
    ::FString::ToLower(pFVar12,&local_a8);
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    iVar6 = local_98.Data.ArrayNum;
    iVar11 = local_a8.Data.ArrayNum;
    iVar10 = Algo::LevenshteinDistance<FString,FString>(&local_98,&local_a8);
    iVar13 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar13 = 0;
    }
    iVar11 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar11 = 0;
    }
    fVar16 = (float)(iVar13 + iVar11);
    if ((float)(iVar13 + iVar11) <= fVar5) {
      fVar16 = fVar5;
    }
    fVar16 = fVar5 - (float)iVar10 / fVar16;
    if (fVar16 <= fVar17) {
      uVar2 = uVar14;
      fVar16 = fVar17;
    }
    fVar17 = fVar16;
    uVar14 = uVar2;
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar15 = pFVar15 + 4;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return uVar14;
}

// ConvertLocalPoseToGlobal @ 14df2ad20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FIKRigSkeleton::ConvertLocalPoseToGlobal
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStackY_108 [32];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((param_2->ArrayNum != param_1->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLocalPose.Num() == InParentIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigSkeleton.cpp"
                         ,0xe8,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&param_3->AllocatorInstance,0,piVar1);
  }
  uVar13 = 0;
  if (0 < param_2->ArrayNum) {
    lVar14 = 0;
    lVar15 = 0;
    do {
      uVar11 = ~uVar13 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar15);
      if (uVar6 == 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (param_3->AllocatorInstance).Data;
        pFVar12 = (param_2->AllocatorInstance).Data + lVar14;
        if (((pFVar9 <= pFVar12) && (pFVar12 < pFVar9 + (longlong)*piVar1 * 0x60)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = param_3->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1060,&param_3->AllocatorInstance,piVar1);
        }
        param_3->ArrayNum = iVar7 + 1;
        uVar4 = *(undefined8 *)(pFVar12 + 8);
        pFVar9 = (param_3->AllocatorInstance).Data;
        lVar10 = (longlong)iVar7 * 0x60;
        *(undefined8 *)(pFVar9 + lVar10) = *(undefined8 *)pFVar12;
        *(undefined8 *)(pFVar9 + lVar10 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x18);
        *(undefined8 *)(pFVar9 + lVar10 + 0x10) = *(undefined8 *)(pFVar12 + 0x10);
        *(undefined8 *)(pFVar9 + lVar10 + 0x10 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x28);
        *(undefined8 *)(pFVar9 + lVar10 + 0x20) = *(undefined8 *)(pFVar12 + 0x20);
        *(undefined8 *)(pFVar9 + lVar10 + 0x20 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x38);
        *(undefined8 *)(pFVar9 + lVar10 + 0x30) = *(undefined8 *)(pFVar12 + 0x30);
        *(undefined8 *)(pFVar9 + lVar10 + 0x30 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar12 + 0x48);
        *(undefined8 *)(pFVar9 + lVar10 + 0x40) = *(undefined8 *)(pFVar12 + 0x40);
        *(undefined8 *)(pFVar9 + lVar10 + 0x40 + 8) = uVar4;
        uVar16 = *(undefined4 *)(pFVar12 + 0x50);
        uVar17 = *(undefined4 *)(pFVar12 + 0x54);
        uVar18 = *(undefined4 *)(pFVar12 + 0x58);
        uVar19 = *(undefined4 *)(pFVar12 + 0x5c);
      }
      else {
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (param_2->AllocatorInstance).Data;
        uVar11 = 0;
        if ((int)uVar6 < param_3->ArrayNum) {
          uVar11 = ~uVar6 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_a8,(TTransform<double> *)(pFVar9 + (longlong)(int)uVar13 * 0x60),
                   (TTransform<double> *)
                   ((param_3->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x60));
        pTVar2 = (TTransform<double> *)(param_3->AllocatorInstance).Data;
        if (((pTVar2 <= &local_a8) && (&local_a8 < pTVar2 + *piVar1)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = param_3->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1060,&param_3->AllocatorInstance,piVar1);
        }
        param_3->ArrayNum = iVar7 + 1;
        pFVar9 = (param_3->AllocatorInstance).Data;
        lVar10 = (longlong)iVar7 * 0x60;
        *(double *)(pFVar9 + lVar10) = local_a8.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar9 + lVar10 + 8) = local_a8.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar9 + lVar10 + 0x10) = local_a8.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar9 + lVar10 + 0x10 + 8) = local_a8.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar9 + lVar10 + 0x20) = local_a8.Translation.XY.m128d_f64[0];
        *(double *)(pFVar9 + lVar10 + 0x20 + 8) = local_a8.Translation.XY.m128d_f64[1];
        *(double *)(pFVar9 + lVar10 + 0x30) = local_a8.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar9 + lVar10 + 0x30 + 8) = local_a8.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar9 + lVar10 + 0x40) = local_a8.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar9 + lVar10 + 0x40 + 8) = local_a8.Scale3D.XY.m128d_f64[1];
        uVar16 = local_a8.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar17 = local_a8.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar18 = local_a8.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar19 = local_a8.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 4;
      pFVar9 = pFVar9 + lVar10 + 0x50;
      *(undefined4 *)pFVar9 = uVar16;
      *(undefined4 *)(pFVar9 + 4) = uVar17;
      *(undefined4 *)(pFVar9 + 8) = uVar18;
      *(undefined4 *)(pFVar9 + 0xc) = uVar19;
      lVar14 = lVar14 + 0x60;
    } while ((int)uVar13 < param_2->ArrayNum);
  }
  return;
}

// GetBoneIndexFromName @ 14df35320

int __thiscall FIKRigSkeleton::GetBoneIndexFromName(FIKRigSkeleton *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar4 = (this->BoneNames).ArrayNum;
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < iVar4) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (param_1 == *(FName *)((this->BoneNames).AllocatorInstance.Data + lVar5)) {
        return uVar6;
      }
      iVar4 = (this->BoneNames).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar6 < iVar4);
  }
  return -1;
}

// GetBoneNameFromIndex @ 14df353e0

FName * __thiscall FIKRigSkeleton::GetBoneNameFromIndex(FIKRigSkeleton *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if ((-1 < param_1) && (param_1 < (this->BoneNames).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FName *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FName *)((this->BoneNames).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return &InvalidName;
}

// GetCachedEndOfBranchIndex @ 14df356c0

int __thiscall FIKRigSkeleton::GetCachedEndOfBranchIndex(FIKRigSkeleton *this,int param_1)

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

// GetChainsInList @ 14df36a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRigSkeleton::GetChainsInList
          (FIKRigSkeleton *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FBoneChain,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FBoneChain,TSizedDefaultAllocator<32>_> *pTVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FName *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158;
  undefined1 local_157 [3];
  int local_154;
  uint local_150;
  TArray<int,TSizedDefaultAllocator<32>_> *local_148;
  int local_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_138;
  undefined4 local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  FName FStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  FName FStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 local_f0;
  int local_ec;
  TArray<FBoneChain,TSizedDefaultAllocator<32>_> *local_e8;
  FScriptContainerElement *local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  FSparseArrayAllocationInfo local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  iVar10 = param_1->ArrayNum;
  if (iVar10 != 0) {
    pFVar23 = (param_1->AllocatorInstance).Data;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (ForElementType<unsigned_int>)0x0;
    pFVar19 = pFVar23 + (longlong)iVar10 * 4;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = -1;
    local_64 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    local_148 = param_1;
    local_e8 = param_2;
    while( true ) {
      if (local_148->ArrayNum != iVar10) {
        local_158 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_158);
      }
      pTVar4 = local_148;
      if (pFVar23 == pFVar19) break;
      iVar8 = GetParentIndex(this,*(int *)pFVar23);
      if (local_64 == 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                           (int *)(local_98 + 0xc));
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),false);
        iVar1 = local_68;
      }
      else {
        local_64 = local_64 + -1;
        iVar1 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
        iVar9 = local_68;
        if (local_64 != 0) {
          *(undefined4 *)(local_98._0_8_ + (longlong)iVar1 * 0xc) = 0xffffffff;
        }
      }
      local_68 = iVar1;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,&local_b0,iVar9);
      pvVar6 = local_b0.Pointer;
      if (local_b0.Pointer != (TSparseSetElement<int> *)0x0) {
        *(int *)local_b0.Pointer = iVar8;
        *(undefined4 *)((longlong)local_b0.Pointer + 4) = 0xffffffff;
      }
      uVar20 = *(uint *)local_b0.Pointer;
      local_154 = local_b0.Index;
      bVar7 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,uVar20,
                         local_b0.Pointer,&local_154,(bool *)0x0);
      if (!bVar7) {
        uVar18 = 1;
        uVar15 = local_98._8_4_ - local_64;
        if (3 < uVar15) {
          uVar16 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_f0 = (undefined4)lVar17;
          uVar18 = 1 << ((byte)lVar17 & 0x1f);
        }
        if (((int)uVar15 < 1) || ((int)uVar18 <= (int)local_50)) {
          uVar20 = local_50 - 1 & uVar20;
          *(uint *)((longlong)pvVar6 + 8) = uVar20;
          FVar14.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar14.Data = local_58.Data;
          }
          uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar20;
          *(undefined4 *)((longlong)pvVar6 + 4) =
               *(undefined4 *)((longlong)FVar14.Data + uVar16 * 4);
          *(int *)((longlong)FVar14.Data + uVar16 * 4) = local_154;
        }
        else {
          local_50 = uVar18;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
          }
          if (uVar18 != 0) {
            uVar20 = uVar18;
            if (uVar18 < 2) {
              if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar20 = 0;
                goto LAB_14df36c1b;
              }
            }
            else {
LAB_14df36c1b:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_58,0,uVar20,4);
            }
            if (0 < (int)uVar18) {
              uVar21 = (ulonglong)uVar18;
              uVar16 = 0;
              do {
                FVar14.Data = (FScriptContainerElement *)local_60;
                if ((ForElementType<FSetElementId>)local_58.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar14.Data = local_58.Data;
                }
                uVar11 = uVar16 & (longlong)(int)uVar18 - 1U;
                uVar16 = uVar16 + 1;
                *(undefined4 *)((longlong)FVar14.Data + uVar11 * 4) = 0xffffffff;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
          }
          if (local_50 != 0) {
            pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
            uStack_13c = 1;
            local_140 = 0;
            iStack_12c = 0;
            iStack_128 = 0;
            if (local_70 != 0) {
              FVar22 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FVar22 = local_78;
              }
              uVar20 = *(uint *)FVar22;
              iStack_128 = 0;
              local_140 = 0;
              while (uVar20 == 0) {
                iStack_128 = iStack_128 + 0x20;
                lVar17 = (longlong)local_140;
                local_140 = local_140 + 1;
                if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_140)
                goto LAB_14df36d21;
                uVar20 = ((uint *)((longlong)FVar22 + 4))[lVar17];
              }
              uStack_13c = -uVar20 & uVar20;
              uVar16 = (ulonglong)uStack_13c * 2 + 1;
              lVar17 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_ec = (int)lVar17;
              iStack_12c = local_ec + -1 + iStack_128;
              if (local_70 < iStack_12c) {
LAB_14df36d21:
                iStack_12c = local_70;
              }
            }
            local_130 = 0xffffffff;
            local_d8 = (longlong *)local_98;
            local_d0._padding_ = CONCAT44(uStack_13c,local_140);
            local_d0.CurrentBitIndex = iStack_12c;
            local_d0.UnvisitedBitMask = 0xffffffff;
            local_d0._28_4_ = uStack_124;
            local_d0.BaseBitIndex = iStack_128;
            local_d0.Array = pTStack_138;
            iVar8 = iStack_12c;
            if (iStack_12c < local_70) {
              do {
                uVar20 = local_50 - 1 & *(uint *)(*local_d8 + (longlong)iVar8 * 0xc);
                lVar17 = *local_d8 + (longlong)iVar8 * 0xc;
                *(uint *)(lVar17 + 8) = uVar20;
                FVar14.Data = (FScriptContainerElement *)local_60;
                if ((ForElementType<FSetElementId>)local_58.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar14.Data = local_58.Data;
                }
                uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar20;
                *(undefined4 *)(lVar17 + 4) = *(undefined4 *)((longlong)FVar14.Data + uVar16 * 4);
                *(int *)((longlong)FVar14.Data + uVar16 * 4) = iVar8;
                local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
                iVar8 = local_d0.CurrentBitIndex;
              } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
            }
          }
        }
      }
      pFVar23 = pFVar23 + 4;
    }
    local_150 = local_148->ArrayNum;
    uVar16 = (ulonglong)(int)local_150;
    pFVar23 = (local_148->AllocatorInstance).Data;
    pFVar19 = pFVar23 + uVar16 * 4;
    local_e0 = pFVar19;
    while( true ) {
      if (pTVar4->ArrayNum != (int)uVar16) {
        local_157[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_157);
      }
      if (pFVar23 == pFVar19) break;
      uVar20 = *(uint *)pFVar23;
      uVar15 = uVar20;
      if (local_98._8_4_ != local_64) {
        FVar14.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar14.Data = local_58.Data;
        }
        for (iVar10 = *(int *)((longlong)FVar14.Data + (ulonglong)(local_50 - 1 & uVar20) * 4);
            iVar10 != -1; iVar10 = *(int *)(local_98._0_8_ + (longlong)iVar10 * 0xc + 4)) {
          if (*(uint *)(local_98._0_8_ + (longlong)iVar10 * 0xc) == uVar20) goto LAB_14df370b2;
        }
      }
      while (uVar18 = uVar15, -1 < (int)uVar18) {
        if ((this->BoneNames).ArrayNum <= (int)uVar18) {
LAB_14df36f14:
          if ((int)uVar18 < (this->BoneNames).ArrayNum) {
            if (((int)uVar18 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar13 = (FName *)((this->BoneNames).AllocatorInstance.Data + (longlong)(int)uVar18 * 8
                               );
            goto LAB_14df36f63;
          }
          break;
        }
        uVar15 = 0;
        if ((int)uVar18 < (this->ParentIndices).ArrayNum) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar15 = *(uint *)((this->ParentIndices).AllocatorInstance.Data + (longlong)(int)uVar18 * 4)
        ;
        if (uVar15 == 0xffffffff) goto LAB_14df36f14;
        pFVar12 = (pTVar4->AllocatorInstance).Data;
        pFVar19 = pFVar12 + (longlong)pTVar4->ArrayNum * 4;
        while( true ) {
          if (pFVar12 == pFVar19) goto LAB_14df36f14;
          if (*(uint *)pFVar12 == uVar15) break;
          pFVar12 = pFVar12 + 4;
        }
      }
      pFVar13 = &InvalidName;
LAB_14df36f63:
      FVar2 = *pFVar13;
      if (((int)uVar20 < 0) || ((this->BoneNames).ArrayNum <= (int)uVar20)) {
        pFVar13 = &InvalidName;
      }
      else {
        if (((int)uVar20 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = (FName *)((this->BoneNames).AllocatorInstance.Data + (longlong)(int)uVar20 * 8);
      }
      pTVar5 = local_e8;
      FStack_108 = *pFVar13;
      uStack_f8 = 0;
      local_148 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      pFVar19 = (local_e8->AllocatorInstance).Data;
      local_120 = 0;
      local_110 = 0x7fffffff;
      uStack_10c = 0xffffffff;
      local_100 = 0x7fffffff;
      uStack_fc = 0xffffffff;
      FStack_118 = FVar2;
      if (((pFVar19 <= (FScriptContainerElement *)&local_120) &&
          ((FScriptContainerElement *)&local_120 < pFVar19 + (longlong)local_e8->ArrayMax * 0x30))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = pTVar5->ArrayNum;
      if (iVar10 == pTVar5->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x430,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
      }
      pTVar5->ArrayNum = iVar10 + 1;
      lVar17 = (longlong)iVar10;
      pFVar19 = (pTVar5->AllocatorInstance).Data;
      *(undefined8 *)(pFVar19 + lVar17 * 0x30) = local_120;
      *(FName *)(pFVar19 + lVar17 * 0x30 + 8) = FStack_118;
      *(ulonglong *)(pFVar19 + lVar17 * 0x30 + 0x10) = CONCAT44(uStack_10c,local_110);
      *(FName *)(pFVar19 + lVar17 * 0x30 + 0x10 + 8) = FStack_108;
      *(ulonglong *)(pFVar19 + lVar17 * 0x30 + 0x20) = CONCAT44(uStack_fc,local_100);
      *(undefined8 *)(pFVar19 + lVar17 * 0x30 + 0x20 + 8) = uStack_f8;
      pFVar19 = local_e0;
LAB_14df370b2:
      uVar16 = (ulonglong)local_150;
      pFVar23 = pFVar23 + 4;
    }
    local_50 = 0;
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_58.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return;
}

// GetChildIndices @ 14df374f0

int __thiscall
FIKRigSkeleton::GetChildIndices
          (FIKRigSkeleton *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int local_18 [4];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar5 = GetCachedEndOfBranchIndex(this,param_1);
  local_18[0] = param_1;
  if (iVar5 != -1) {
    while (local_18[0] = local_18[0] + 1, local_18[0] <= iVar5) {
      iVar6 = GetParentIndex(this,local_18[0]);
      if (iVar6 == param_1) {
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
      }
    }
  }
  return param_2->ArrayNum;
}

// GetChildrenIndicesRecursive @ 14df377c0

void __thiscall
FIKRigSkeleton::GetChildrenIndicesRecursive
          (FIKRigSkeleton *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

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

// GetMirroredBoneIndices @ 14df39770

bool __thiscall
FIKRigSkeleton::GetMirroredBoneIndices
          (FIKRigSkeleton *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_1a8;
  undefined1 local_1a7 [3];
  int local_1a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a0;
  int local_190 [2];
  ForAnyElementType local_188;
  undefined8 local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  uint local_168;
  uint local_164;
  uint local_160;
  longlong local_158;
  FScriptContainerElement *local_150;
  FIKRigSkeleton *local_148;
  FScriptContainerElement *local_140;
  int *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  TSphere<double> local_e8 [5];
  
  uVar22 = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_148 = this;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,(this->RefPoseGlobal).ArrayNum,&local_178,(int *)&local_170,
             (int *)((longlong)&local_170 + 4));
  pFVar24 = (this->RefPoseGlobal).AllocatorInstance.Data;
  iVar17 = (this->RefPoseGlobal).ArrayNum;
  pFVar19 = pFVar24 + 0x20;
  pFVar25 = pFVar24 + (longlong)iVar17 * 0x60;
  uVar23 = uVar22;
  while( true ) {
    if ((this->RefPoseGlobal).ArrayNum != iVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    iVar12 = (int)local_170;
    if (pFVar24 == pFVar25) break;
    uVar2 = *(undefined8 *)(pFVar19 + 0x10);
    uVar18 = (uint)uVar22;
    uVar8 = *(undefined8 *)pFVar19;
    uVar9 = *(undefined8 *)(pFVar19 + 8);
    uVar15 = 0;
    if ((int)uVar18 < (int)local_170) {
      uVar15 = ~uVar18 >> 0x1f;
    }
    local_130 = uVar8;
    uStack_128 = uVar9;
    local_120 = uVar2;
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      uVar14 = (*pcVar3)();
      return (bool)uVar14;
    }
    uVar22 = (ulonglong)(uVar18 + 1);
    pFVar24 = pFVar24 + 0x60;
    *(undefined8 *)(local_178.Data + uVar23) = uVar8;
    *(undefined8 *)(local_178.Data + uVar23 + 8) = uVar9;
    *(undefined8 *)(local_178.Data + uVar23 + 0x10) = uVar2;
    uVar23 = uVar23 + 0x18;
    pFVar19 = pFVar19 + 0x60;
  }
  if (((int)local_170 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  UE::Math::TSphere<double>::TSphere<double>(local_e8,(TVector<double> *)local_178.Data,iVar12);
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if (__real_3f1a36e2e0000000 <= local_e8[0].W) {
    local_138 = &local_res18->ArrayMax;
    fVar29 = (float)local_e8[0].W * __real_3c23d70a;
    local_res18->ArrayNum = 0;
    if (local_res18->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_res18->AllocatorInstance,0,local_138);
    }
    dVar10 = __real_bff0000000000000;
    local_160 = local_res10->ArrayNum;
    uVar23 = (ulonglong)(int)local_160;
    pFVar19 = (local_res10->AllocatorInstance).Data;
    local_140 = pFVar19 + uVar23 * 4;
    while( true ) {
      pFVar24 = local_140;
      uVar22 = 0;
      local_150 = pFVar19;
      if (local_res10->ArrayNum != (int)uVar23) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar19 == pFVar24) break;
      local_168 = *(uint *)pFVar19;
      lVar20 = (longlong)(int)local_168;
      local_164 = ~local_168 >> 0x1f;
      uVar15 = 0;
      if ((int)local_168 < (this->RefPoseGlobal).ArrayNum) {
        uVar15 = local_164;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      pFVar24 = (this->RefPoseGlobal).AllocatorInstance.Data;
      pFVar19 = pFVar24 + lVar20 * 0x60 + 0x20;
      local_118 = *(double *)pFVar19;
      dVar6 = *(double *)(pFVar19 + 8);
      dVar7 = *(double *)(pFVar24 + lVar20 * 0x60 + 0x30);
      uVar15 = (this->RefPoseGlobal).ArrayNum;
      dVar5 = local_118 * dVar10;
      local_188.Data = (FScriptContainerElement *)0x0;
      local_180 = 0;
      local_158 = lVar20;
      dStack_110 = dVar6;
      local_108 = dVar7;
      if ((int)uVar15 < 1) {
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
        }
      }
      else {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar15,&local_188,(int *)&local_180,(int *)((longlong)&local_180 + 4));
      }
      pFVar24 = (this->RefPoseGlobal).AllocatorInstance.Data;
      iVar17 = (this->RefPoseGlobal).ArrayNum;
      pFVar19 = pFVar24 + 0x20;
      pFVar25 = pFVar24 + (longlong)iVar17 * 0x60;
      uVar23 = uVar22;
      while( true ) {
        if ((this->RefPoseGlobal).ArrayNum != iVar17) {
          local_1a8 = 0;
          `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_1a8);
        }
        if (pFVar24 == pFVar25) break;
        local_100 = *(double *)pFVar19;
        dStack_f8 = *(double *)(pFVar19 + 8);
        local_f0 = *(double *)(pFVar19 + 0x10);
        dVar26 = local_100 - dVar5;
        uVar18 = (uint)uVar23;
        dVar4 = dStack_f8 - dVar6;
        dVar27 = local_f0 - dVar7;
        uVar15 = 0;
        if ((int)uVar18 < (int)local_180) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar14 = (*pcVar3)();
          return (bool)uVar14;
        }
        uVar23 = (ulonglong)(uVar18 + 1);
        pFVar24 = pFVar24 + 0x60;
        *(float *)(local_188.Data + uVar22) =
             (float)SQRT(dVar4 * dVar4 + dVar26 * dVar26 + dVar27 * dVar27);
        uVar22 = uVar22 + 4;
        pFVar19 = pFVar19 + 0x60;
      }
      local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.ArrayNum = 0;
      local_1a0.ArrayMax = 0;
      fVar28 = fVar29;
      uVar23 = local_1a0._8_8_;
      while( true ) {
        if ((float)local_e8[0].W < fVar28) {
          iVar17 = *local_138;
          local_res18->ArrayNum = 0;
          local_1a0._8_8_ = uVar23;
          if (iVar17 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_res18->AllocatorInstance,0,local_138);
          }
          if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.AllocatorInstance.Data);
          }
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data);
          }
          goto LAB_14df39d2d;
        }
        local_1a0._8_8_ = uVar23 & 0xffffffff00000000;
        iVar17 = 0;
        if ((longlong)uVar23 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_1a0.AllocatorInstance,0,&local_1a0.ArrayMax);
          iVar17 = local_1a0.ArrayNum;
        }
        iVar12 = (int)local_180;
        local_1a4 = 0;
        pFVar19 = local_188.Data + (longlong)(int)local_180 * 4;
        FVar21.Data = local_188.Data;
        while( true ) {
          if ((int)local_180 != iVar12) {
            local_1a7[0] = 0;
            `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1a7);
            iVar17 = local_1a0.ArrayNum;
          }
          lVar20 = local_158;
          if (FVar21.Data == pFVar19) break;
          if (*(float *)FVar21.Data <= fVar28 && fVar28 != *(float *)FVar21.Data) {
            iVar16 = iVar17;
            if ((local_1a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1a4) &&
               ((FScriptContainerElement *)&local_1a4 <
                local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayMax * 4)) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar13) {
                pcVar3 = (code *)swi(3);
                uVar14 = (*pcVar3)();
                return (bool)uVar14;
              }
              iVar16 = local_1a0.ArrayNum;
            }
            if (iVar16 == local_1a0.ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_1a0.AllocatorInstance,&local_1a0.ArrayMax);
            }
            iVar17 = iVar16 + 1;
            local_1a0.ArrayNum = iVar17;
            *(int *)(local_1a0.AllocatorInstance.Data + (longlong)iVar16 * 4) = local_1a4;
          }
          local_1a4 = local_1a4 + 1;
          FVar21.Data = FVar21.Data + 4;
        }
        if (iVar17 != 0) break;
        fVar28 = fVar28 + fVar29 + fVar29;
        uVar23 = local_1a0._8_8_;
      }
      uVar15 = 0;
      if ((int)local_168 < (this->BoneNames).ArrayNum) {
        uVar15 = local_164;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      local_190[0] = `FIKRigSkeleton::GetMirroredBoneIndices'::__l2::<lambda_3>::operator()
                               (&local_148,
                                *(FName *)((this->BoneNames).AllocatorInstance.Data + lVar20 * 8),
                                &local_1a0);
      pTVar11 = local_res18;
      pFVar19 = (local_res18->AllocatorInstance).Data;
      piVar1 = &local_res18->ArrayMax;
      if (((pFVar19 <= (FScriptContainerElement *)local_190) &&
          ((FScriptContainerElement *)local_190 < pFVar19 + (longlong)*piVar1 * 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      iVar17 = pTVar11->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar11->AllocatorInstance,piVar1);
      }
      pTVar11->ArrayNum = iVar17 + 1;
      *(int *)((pTVar11->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_190[0];
      if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.AllocatorInstance.Data);
      }
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      uVar23 = (ulonglong)local_160;
      pFVar19 = local_150 + 4;
    }
    bVar13 = true;
  }
  else {
LAB_14df39d2d:
    bVar13 = false;
  }
  return bVar13;
}

// GetParentIndex @ 14df3b0d0

int __thiscall FIKRigSkeleton::GetParentIndex(FIKRigSkeleton *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->BoneNames).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->ParentIndices).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)((this->ParentIndices).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return -1;
}

// GetParentIndexThatIsNotExcluded @ 14df3b1e0

int __thiscall FIKRigSkeleton::GetParentIndexThatIsNotExcluded(FIKRigSkeleton *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar4 = GetParentIndex(this,param_1);
  if (uVar4 != 0xffffffff) {
    while ((-1 < (int)uVar4 && ((int)uVar4 < (this->BoneNames).ArrayNum))) {
      if (((int)uVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar7 = (this->ExcludedBones).AllocatorInstance.Data;
      pFVar1 = pFVar7 + (longlong)(this->ExcludedBones).ArrayNum * 8;
      if (pFVar7 == pFVar1) {
        return uVar4;
      }
      while (*(longlong *)pFVar7 !=
             *(longlong *)((this->BoneNames).AllocatorInstance.Data + (longlong)(int)uVar4 * 8)) {
        pFVar7 = pFVar7 + 8;
        if (pFVar7 == pFVar1) {
          return uVar4;
        }
      }
      if ((this->BoneNames).ArrayNum <= (int)uVar4) {
        return -1;
      }
      uVar6 = 0;
      if ((int)uVar4 < (this->ParentIndices).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar4 = *(uint *)((this->ParentIndices).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
      if (uVar4 == 0xffffffff) {
        return -1;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4012152839248806228>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigSkeleton.cpp"
                       ,0x154,"BoneNames.IsValidIndex(BoneIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  return uVar4;
}

// IsBoneExcluded @ 14df47830

bool __thiscall FIKRigSkeleton::IsBoneExcluded(FIKRigSkeleton *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  
  if ((param_1 < 0) || ((this->BoneNames).ArrayNum <= param_1)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4012152839248806228>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigSkeleton.cpp"
                       ,0x154,"BoneNames.IsValidIndex(BoneIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar5 = (this->ExcludedBones).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)(this->ExcludedBones).ArrayNum * 8;
    if (pFVar5 != pFVar1) {
      do {
        if (*(longlong *)pFVar5 ==
            *(longlong *)((this->BoneNames).AllocatorInstance.Data + (longlong)param_1 * 8)) {
          return true;
        }
        pFVar5 = pFVar5 + 8;
      } while (pFVar5 != pFVar1);
      return false;
    }
  }
  return false;
}

// IsBoneInDirectLineage @ 14df47910

bool __thiscall
FIKRigSkeleton::IsBoneInDirectLineage(FIKRigSkeleton *this,FName *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = GetBoneIndexFromName(this,*param_1);
  if (uVar4 != 0xffffffff) {
    uVar5 = GetBoneIndexFromName(this,*param_2);
    uVar6 = uVar5;
    while (uVar6 != 0xffffffff) {
      if (uVar4 == uVar5) {
        return true;
      }
      uVar6 = 0;
      if ((int)uVar4 < (this->ParentIndices).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar4 = *(uint *)((this->ParentIndices).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
      uVar6 = uVar4;
    }
  }
  return false;
}

// NormalizeRotations @ 14df4b670

void __cdecl
FIKRigSkeleton::NormalizeRotations
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar12 + (longlong)iVar1 * 0x60;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar11) break;
    dVar7 = *(double *)&pFVar12->field_0x0;
    dVar8 = *(double *)(pFVar12 + 8);
    dVar9 = *(double *)&pFVar12[0x10].field_0x0;
    dVar10 = *(double *)(pFVar12 + 0x18);
    auVar21._0_8_ = dVar9 * dVar9 + dVar7 * dVar7;
    auVar21._8_8_ = dVar10 * dVar10 + dVar8 * dVar8;
    auVar17._8_4_ = SUB84(auVar21._8_8_,0);
    auVar17._0_8_ = auVar21._0_8_;
    auVar17._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
    auVar18._0_8_ = auVar17._8_8_ + auVar21._0_8_;
    auVar18._8_8_ = auVar21._0_8_ + auVar21._8_8_;
    auVar22 = sqrtpd(auVar21,auVar18);
    uVar13 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar18._0_8_);
    uVar15 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar18._8_8_);
    uVar14 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar18._0_8_);
    uVar16 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar18._8_8_);
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
    auVar20._0_8_ = uVar14 & (ulonglong)(auVar19._0_8_ * dVar7);
    uVar6 = uVar16 & (ulonglong)(auVar19._8_8_ * dVar8);
    auVar20._8_4_ = (undefined4)uVar6;
    auVar20._12_4_ = (undefined4)(uVar6 >> 0x20);
    auVar23._0_8_ = uVar13 & (ulonglong)(auVar22._0_8_ * dVar9);
    uVar6 = uVar15 & (ulonglong)(auVar22._8_8_ * dVar10);
    auVar23._8_4_ = (undefined4)uVar6;
    auVar23._12_4_ = (undefined4)(uVar6 >> 0x20);
    auVar22._4_4_ =
         ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar22._0_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar22._8_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar22._12_4_ =
         ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    uVar2 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])pFVar12 = auVar20 | auVar22;
    auVar19._4_4_ = ~(uint)(uVar13 >> 0x20) & uVar3;
    auVar19._0_4_ = ~(uint)uVar13 & uVar2;
    auVar19._8_4_ = ~(uint)uVar15 & uVar4;
    auVar19._12_4_ = ~(uint)(uVar15 >> 0x20) & uVar5;
    *(undefined1 (*) [16])(pFVar12 + 0x10) = auVar23 | auVar19;
    pFVar12 = pFVar12 + 0x60;
  }
  return;
}

// PropagateGlobalPoseBelowBone @ 14df4cf00

void __thiscall FIKRigSkeleton::PropagateGlobalPoseBelowBone(FIKRigSkeleton *this,int param_1)

{
  int iVar1;
  
  iVar1 = GetCachedEndOfBranchIndex(this,param_1);
  if (iVar1 != -1) {
    while (param_1 = param_1 + 1, param_1 <= iVar1) {
      UpdateGlobalTransformFromLocal(this,param_1);
      UpdateLocalTransformFromGlobal(this,param_1);
    }
  }
  return;
}

// Reset @ 14df4ece0

void __thiscall FIKRigSkeleton::Reset(FIKRigSkeleton *this)

{
  FIKRigSkeleton local_78;
  
  local_78.BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.BoneNames.ArrayNum = 0;
  local_78.BoneNames.ArrayMax = 0;
  local_78.ParentIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ParentIndices.ArrayNum = 0;
  local_78.ParentIndices.ArrayMax = 0;
  local_78.ExcludedBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ExcludedBones.ArrayNum = 0;
  local_78.ExcludedBones.ArrayMax = 0;
  local_78.CurrentPoseGlobal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CurrentPoseGlobal.ArrayNum = 0;
  local_78.CurrentPoseGlobal.ArrayMax = 0;
  local_78.CurrentPoseLocal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CurrentPoseLocal.ArrayNum = 0;
  local_78.CurrentPoseLocal.ArrayMax = 0;
  local_78.RefPoseGlobal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.RefPoseGlobal.ArrayNum = 0;
  local_78.RefPoseGlobal.ArrayMax = 0;
  local_78.CachedEndOfBranchIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CachedEndOfBranchIndices.ArrayNum = 0;
  local_78.CachedEndOfBranchIndices.ArrayMax = 0;
  operator=(this,&local_78);
  if (local_78.CachedEndOfBranchIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.CachedEndOfBranchIndices.AllocatorInstance.Data);
  }
  if (local_78.RefPoseGlobal.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.RefPoseGlobal.AllocatorInstance.Data);
  }
  if (local_78.CurrentPoseLocal.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.CurrentPoseLocal.AllocatorInstance.Data);
  }
  if (local_78.CurrentPoseGlobal.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.CurrentPoseGlobal.AllocatorInstance.Data);
  }
  if (local_78.ExcludedBones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ExcludedBones.AllocatorInstance.Data);
  }
  if (local_78.ParentIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ParentIndices.AllocatorInstance.Data);
  }
  if (local_78.BoneNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.BoneNames.AllocatorInstance.Data);
  }
  return;
}

// SetInputSkeleton @ 14df55170

void __thiscall
FIKRigSkeleton::SetInputSkeleton
          (FIKRigSkeleton *this,FIKRigInputSkeleton *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  int local_res8 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_38;
  
  iVar2 = (param_1->BoneNames).ArrayNum;
  if (((iVar2 != (param_1->ParentIndices).ArrayNum) || (iVar2 != (param_1->LocalRefPose).ArrayNum))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("InputSkeleton.BoneNames.Num() == InputSkeleton.ParentIndices.Num() && InputSkeleton.BoneNames.Num() == InputSkeleton.LocalRefPose.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigSkeleton.cpp"
                            ,0x36,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  Reset(this);
  uVar8 = 0;
  if (this != (FIKRigSkeleton *)param_1) {
    iVar2 = (param_1->BoneNames).ArrayNum;
    piVar1 = &(this->BoneNames).ArrayMax;
    pFVar11 = (param_1->BoneNames).AllocatorInstance.Data;
    (this->BoneNames).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((this->BoneNames).AllocatorInstance.Data,pFVar11,(longlong)iVar2 << 3);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ParentIndices,&param_1->ParentIndices);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->ExcludedBones,param_2);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  uVar10 = uVar8;
  uVar12 = uVar8;
  if (0 < (param_1->BoneNames).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < (param_1->LocalRefPose).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = (param_1->LocalRefPose).AllocatorInstance.Data + uVar12;
      if (((local_38.AllocatorInstance.Data <= pFVar11) &&
          (pFVar11 < local_38.AllocatorInstance.Data + (longlong)local_38.ArrayMax * 0x60)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_38.ArrayNum == local_38.ArrayMax) {
        local_38.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&local_38.AllocatorInstance,&local_38.ArrayMax);
      }
      lVar6 = (longlong)local_38.ArrayNum;
      local_38.ArrayNum = local_38.ArrayNum + 1;
      uVar4 = *(undefined8 *)(pFVar11 + 8);
      lVar6 = lVar6 * 0x60;
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6) = *(undefined8 *)pFVar11;
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar11 + 0x18);
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 0x10) =
           *(undefined8 *)(pFVar11 + 0x10);
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 0x10 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar11 + 0x28);
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 0x20) =
           *(undefined8 *)(pFVar11 + 0x20);
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 0x20 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar11 + 0x38);
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 0x30) =
           *(undefined8 *)(pFVar11 + 0x30);
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 0x30 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar11 + 0x48);
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 0x40) =
           *(undefined8 *)(pFVar11 + 0x40);
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 0x40 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar11 + 0x58);
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 0x50) =
           *(undefined8 *)(pFVar11 + 0x50);
      *(undefined8 *)(local_38.AllocatorInstance.Data + lVar6 + 0x50 + 8) = uVar4;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 0x60;
    } while ((int)(uVar9 + 1) < (param_1->BoneNames).ArrayNum);
  }
  ConvertLocalPoseToGlobal(&this->ParentIndices,&local_38,&this->RefPoseGlobal);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentPoseGlobal,&this->RefPoseGlobal);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentPoseLocal,&this->CurrentPoseGlobal);
  if (0 < (this->CurrentPoseGlobal).ArrayNum) {
    do {
      UpdateLocalTransformFromGlobal(this,(int)uVar8);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (this->CurrentPoseGlobal).ArrayNum);
  }
  local_res8[0] = -2;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&this->CachedEndOfBranchIndices,local_res8,(this->ParentIndices).ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// SetInputSkeleton @ 14df55460

void __thiscall
FIKRigSkeleton::SetInputSkeleton
          (FIKRigSkeleton *this,USkeletalMesh *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FIKRigInputSkeleton local_48;
  
  local_48.BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.BoneNames.ArrayNum = 0;
  local_48.BoneNames.ArrayMax = 0;
  local_48.ParentIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ParentIndices.ArrayNum = 0;
  local_48.ParentIndices.ArrayMax = 0;
  local_48.LocalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.LocalRefPose.ArrayNum = 0;
  local_48.LocalRefPose.ArrayMax = 0;
  local_48.SkeletalMeshName.ComparisonIndex.Value = 0;
  local_48.SkeletalMeshName.Number = 0;
  FIKRigInputSkeleton::Initialize(&local_48,param_1);
  SetInputSkeleton(this,&local_48,param_2);
  if (local_48.LocalRefPose.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.LocalRefPose.AllocatorInstance.Data);
  }
  if (local_48.ParentIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ParentIndices.AllocatorInstance.Data);
  }
  if (local_48.BoneNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.BoneNames.AllocatorInstance.Data);
  }
  return;
}

// UpdateAllGlobalTransformFromLocal @ 14df5c8d0

void __thiscall FIKRigSkeleton::UpdateAllGlobalTransformFromLocal(FIKRigSkeleton *this)

{
  int iVar1;
  
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentPoseGlobal,&this->CurrentPoseLocal);
  iVar1 = 0;
  if (0 < (this->CurrentPoseLocal).ArrayNum) {
    do {
      UpdateGlobalTransformFromLocal(this,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->CurrentPoseLocal).ArrayNum);
  }
  return;
}

// UpdateAllLocalTransformFromGlobal @ 14df5c920

void __thiscall FIKRigSkeleton::UpdateAllLocalTransformFromGlobal(FIKRigSkeleton *this)

{
  int iVar1;
  
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentPoseLocal,&this->CurrentPoseGlobal);
  iVar1 = 0;
  if (0 < (this->CurrentPoseGlobal).ArrayNum) {
    do {
      UpdateLocalTransformFromGlobal(this,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->CurrentPoseGlobal).ArrayNum);
  }
  return;
}

// UpdateGlobalTransformFromLocal @ 14df5cea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FIKRigSkeleton::UpdateGlobalTransformFromLocal(FIKRigSkeleton *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_138;
  lVar31 = (longlong)param_1;
  iVar1 = (this->ParentIndices).ArrayNum;
  uVar32 = (uint)~param_1 >> 0x1f;
  uVar29 = 0;
  if (param_1 < iVar1) {
    uVar29 = uVar32;
  }
  if (uVar29 == 0) {
    local_118 = lVar31;
    local_110 = (longlong)iVar1;
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar28) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->CurrentPoseLocal).ArrayNum;
  uVar29 = *(uint *)((this->ParentIndices).AllocatorInstance.Data + lVar31 * 4);
  if (uVar29 == 0xffffffff) {
    uVar29 = 0;
    if (param_1 < iVar1) {
      uVar29 = uVar32;
    }
    if (uVar29 == 0) {
      local_118 = lVar31;
      local_110 = (longlong)iVar1;
      bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar28) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->CurrentPoseLocal).AllocatorInstance.Data;
    lVar33 = lVar31 * 0x60;
    uVar4 = *(undefined8 *)(pFVar2 + lVar33);
    uVar5 = *(undefined8 *)(pFVar2 + lVar33 + 8);
    uVar6 = *(undefined8 *)(pFVar2 + lVar33 + 0x10);
    uVar7 = *(undefined8 *)(pFVar2 + lVar33 + 0x10 + 8);
    uVar8 = *(undefined8 *)(pFVar2 + lVar33 + 0x20);
    uVar9 = *(undefined8 *)(pFVar2 + lVar33 + 0x20 + 8);
    uVar10 = *(undefined8 *)(pFVar2 + lVar33 + 0x30);
    uVar11 = *(undefined8 *)(pFVar2 + lVar33 + 0x30 + 8);
    uVar12 = *(undefined8 *)(pFVar2 + lVar33 + 0x40);
    uVar13 = *(undefined8 *)(pFVar2 + lVar33 + 0x40 + 8);
    uVar14 = *(undefined8 *)(pFVar2 + lVar33 + 0x50);
    uVar15 = *(undefined8 *)(pFVar2 + lVar33 + 0x50 + 8);
    iVar1 = (this->CurrentPoseGlobal).ArrayNum;
    local_110 = (longlong)iVar1;
    uVar29 = 0;
    if (param_1 < iVar1) {
      uVar29 = uVar32;
    }
    if (uVar29 == 0) {
      local_118 = lVar31;
      bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar28) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->CurrentPoseGlobal).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + lVar33) = uVar4;
    *(undefined8 *)(pFVar2 + lVar33 + 8) = uVar5;
    *(undefined8 *)(pFVar2 + lVar33 + 0x10) = uVar6;
    *(undefined8 *)(pFVar2 + lVar33 + 0x10 + 8) = uVar7;
    *(undefined8 *)(pFVar2 + lVar33 + 0x20) = uVar8;
    *(undefined8 *)(pFVar2 + lVar33 + 0x20 + 8) = uVar9;
    *(undefined8 *)(pFVar2 + lVar33 + 0x30) = uVar10;
    *(undefined8 *)(pFVar2 + lVar33 + 0x30 + 8) = uVar11;
    *(undefined8 *)(pFVar2 + lVar33 + 0x40) = uVar12;
    *(undefined8 *)(pFVar2 + lVar33 + 0x40 + 8) = uVar13;
    *(undefined8 *)(pFVar2 + lVar33 + 0x50) = uVar14;
    *(undefined8 *)(pFVar2 + lVar33 + 0x50 + 8) = uVar15;
  }
  else {
    uVar30 = 0;
    if (param_1 < iVar1) {
      uVar30 = uVar32;
    }
    if (uVar30 == 0) {
      local_118 = lVar31;
      local_110 = (longlong)iVar1;
      bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar28) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->CurrentPoseLocal).AllocatorInstance.Data;
    iVar1 = (this->CurrentPoseGlobal).ArrayNum;
    lVar33 = lVar31 * 0x60;
    uVar30 = 0;
    if ((int)uVar29 < iVar1) {
      uVar30 = ~uVar29 >> 0x1f;
    }
    if (uVar30 == 0) {
      local_118 = (longlong)(int)uVar29;
      local_110 = (longlong)iVar1;
      bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar28) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
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
              (&local_108,(TTransform<double> *)(pFVar2 + lVar33),
               (TTransform<double> *)
               ((this->CurrentPoseGlobal).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x60));
    dVar27 = local_108.Scale3D.ZW.m128d_f64[1];
    dVar26 = local_108.Scale3D.ZW.m128d_f64[0];
    dVar23 = local_108.Translation.ZW.m128d_f64[1];
    dVar22 = local_108.Translation.ZW.m128d_f64[0];
    dVar19 = local_108.Rotation.ZW.m128d_f64[1];
    dVar18 = local_108.Rotation.ZW.m128d_f64[0];
    dVar17 = local_108.Rotation.XY.m128d_f64[1];
    dVar16 = local_108.Rotation.XY.m128d_f64[0];
    iVar1 = (this->CurrentPoseGlobal).ArrayNum;
    local_110 = (longlong)iVar1;
    dVar20 = local_108.Translation.XY.m128d_f64[0];
    dVar21 = local_108.Translation.XY.m128d_f64[1];
    uVar29 = 0;
    if (param_1 < iVar1) {
      uVar29 = uVar32;
    }
    dVar24 = local_108.Scale3D.XY.m128d_f64[0];
    dVar25 = local_108.Scale3D.XY.m128d_f64[1];
    if (uVar29 == 0) {
      local_118 = lVar31;
      bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar28) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->CurrentPoseGlobal).AllocatorInstance.Data;
    *(double *)(pFVar2 + lVar33) = dVar16;
    *(double *)(pFVar2 + lVar33 + 8) = dVar17;
    *(double *)(pFVar2 + lVar33 + 0x10) = dVar18;
    *(double *)(pFVar2 + lVar33 + 0x10 + 8) = dVar19;
    *(double *)(pFVar2 + lVar33 + 0x20) = dVar20;
    *(double *)(pFVar2 + lVar33 + 0x20 + 8) = dVar21;
    *(double *)(pFVar2 + lVar33 + 0x30) = dVar22;
    *(double *)(pFVar2 + lVar33 + 0x30 + 8) = dVar23;
    *(double *)(pFVar2 + lVar33 + 0x40) = dVar24;
    *(double *)(pFVar2 + lVar33 + 0x40 + 8) = dVar25;
    *(double *)(pFVar2 + lVar33 + 0x50) = dVar26;
    *(double *)(pFVar2 + lVar33 + 0x50 + 8) = dVar27;
  }
  return;
}

// UpdateLocalTransformFromGlobal @ 14df5de00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FIKRigSkeleton::UpdateLocalTransformFromGlobal(FIKRigSkeleton *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TTransform<double> *pTVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  lVar9 = (longlong)param_1;
  iVar2 = (this->ParentIndices).ArrayNum;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < iVar2) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (local_118 = lVar9, local_110 = (longlong)iVar2,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->CurrentPoseGlobal).ArrayNum;
  uVar6 = *(uint *)((this->ParentIndices).AllocatorInstance.Data + lVar9 * 4);
  if (uVar6 == 0xffffffff) {
    uVar6 = 0;
    if (param_1 < iVar2) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (local_118 = lVar9, local_110 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->CurrentPoseGlobal).AllocatorInstance.Data;
    lVar11 = lVar9 * 0x60;
    local_f8 = *(double *)(pFVar3 + lVar11 + 0x10);
    dStack_f0 = *(double *)(pFVar3 + lVar11 + 0x10 + 8);
    local_e8 = *(double *)(pFVar3 + lVar11 + 0x20);
    dStack_e0 = *(double *)(pFVar3 + lVar11 + 0x20 + 8);
    pFVar1 = pFVar3 + lVar11;
    local_108 = *(undefined4 *)pFVar1;
    uStack_104 = *(undefined4 *)(pFVar1 + 4);
    uStack_100 = *(undefined4 *)(pFVar1 + 8);
    uStack_fc = *(undefined4 *)(pFVar1 + 0xc);
    local_d8 = *(double *)(pFVar3 + lVar11 + 0x30);
    dStack_d0 = *(double *)(pFVar3 + lVar11 + 0x30 + 8);
    local_b8 = *(double *)(pFVar3 + lVar11 + 0x50);
    dStack_b0 = *(double *)(pFVar3 + lVar11 + 0x50 + 8);
    local_c8 = *(double *)(pFVar3 + lVar11 + 0x40);
    dStack_c0 = *(double *)(pFVar3 + lVar11 + 0x40 + 8);
    iVar2 = (this->CurrentPoseLocal).ArrayNum;
    local_110 = (longlong)iVar2;
    uVar6 = 0;
    if (param_1 < iVar2) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (local_118 = lVar9,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->CurrentPoseLocal).AllocatorInstance.Data;
    pFVar1 = pFVar3 + lVar11;
    *(undefined4 *)pFVar1 = local_108;
    *(undefined4 *)(pFVar1 + 4) = uStack_104;
    *(undefined4 *)(pFVar1 + 8) = uStack_100;
    *(undefined4 *)(pFVar1 + 0xc) = uStack_fc;
    *(double *)(pFVar3 + lVar11 + 0x10) = local_f8;
    *(double *)(pFVar3 + lVar11 + 0x10 + 8) = dStack_f0;
    *(double *)(pFVar3 + lVar11 + 0x20) = local_e8;
    *(double *)(pFVar3 + lVar11 + 0x20 + 8) = dStack_e0;
    *(double *)(pFVar3 + lVar11 + 0x30) = local_d8;
    *(double *)(pFVar3 + lVar11 + 0x30 + 8) = dStack_d0;
    *(double *)(pFVar3 + lVar11 + 0x40) = local_c8;
    *(double *)(pFVar3 + lVar11 + 0x40 + 8) = dStack_c0;
    *(double *)(pFVar3 + lVar11 + 0x50) = local_b8;
    *(double *)(pFVar3 + lVar11 + 0x50 + 8) = dStack_b0;
  }
  else {
    uVar7 = 0;
    if (param_1 < iVar2) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (local_118 = lVar9, local_110 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (this->CurrentPoseGlobal).AllocatorInstance.Data;
    iVar2 = (this->CurrentPoseGlobal).ArrayNum;
    lVar11 = lVar9 * 0x60;
    uVar7 = 0;
    if ((int)uVar6 < iVar2) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_118 = (longlong)(int)uVar6, local_110 = (longlong)iVar2,
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
                       ((TTransform<double> *)(pFVar1 + lVar11),&local_a8,
                        (TTransform<double> *)
                        ((this->CurrentPoseGlobal).AllocatorInstance.Data +
                        (longlong)(int)uVar6 * 0x60));
    local_b8 = (pTVar8->Rotation).ZW.m128d_f64[0];
    dStack_b0 = (pTVar8->Rotation).ZW.m128d_f64[1];
    local_c8 = (pTVar8->Translation).XY.m128d_f64[0];
    dStack_c0 = (pTVar8->Translation).XY.m128d_f64[1];
    local_108 = *(undefined4 *)(pTVar8->Rotation).XY.m128d_f64;
    uStack_104 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 4);
    uStack_100 = *(undefined4 *)((pTVar8->Rotation).XY.m128d_f64 + 1);
    uStack_fc = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 0xc);
    local_d8 = (pTVar8->Translation).ZW.m128d_f64[0];
    dStack_d0 = (pTVar8->Translation).ZW.m128d_f64[1];
    local_f8 = (pTVar8->Scale3D).ZW.m128d_f64[0];
    dStack_f0 = (pTVar8->Scale3D).ZW.m128d_f64[1];
    local_e8 = (pTVar8->Scale3D).XY.m128d_f64[0];
    dStack_e0 = (pTVar8->Scale3D).XY.m128d_f64[1];
    iVar2 = (this->CurrentPoseLocal).ArrayNum;
    local_110 = (longlong)iVar2;
    uVar6 = 0;
    if (param_1 < iVar2) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (local_118 = lVar9,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->CurrentPoseLocal).AllocatorInstance.Data;
    pFVar1 = pFVar3 + lVar11;
    *(undefined4 *)pFVar1 = local_108;
    *(undefined4 *)(pFVar1 + 4) = uStack_104;
    *(undefined4 *)(pFVar1 + 8) = uStack_100;
    *(undefined4 *)(pFVar1 + 0xc) = uStack_fc;
    *(double *)(pFVar3 + lVar11 + 0x10) = local_b8;
    *(double *)(pFVar3 + lVar11 + 0x10 + 8) = dStack_b0;
    *(double *)(pFVar3 + lVar11 + 0x20) = local_c8;
    *(double *)(pFVar3 + lVar11 + 0x20 + 8) = dStack_c0;
    *(double *)(pFVar3 + lVar11 + 0x30) = local_d8;
    *(double *)(pFVar3 + lVar11 + 0x30 + 8) = dStack_d0;
    *(double *)(pFVar3 + lVar11 + 0x40) = local_e8;
    *(double *)(pFVar3 + lVar11 + 0x40 + 8) = dStack_e0;
    *(double *)(pFVar3 + lVar11 + 0x50) = local_f8;
    *(double *)(pFVar3 + lVar11 + 0x50 + 8) = dStack_f0;
  }
  return;
}

// ValidateChainAndGetBones @ 14df5fb90

bool __thiscall
FIKRigSkeleton::ValidateChainAndGetBones
          (FIKRigSkeleton *this,FBoneChain *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int local_res10 [2];
  uint local_28 [4];
  
  piVar1 = &param_2->ArrayMax;
  lVar11 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar8 = GetBoneIndexFromName(this,(param_1->StartBone).BoneName);
  iVar9 = GetBoneIndexFromName(this,(param_1->EndBone).BoneName);
  if (((iVar8 < 0) || (iVar9 < 0)) || (iVar9 < iVar8)) {
LAB_14df5fdc3:
    bVar6 = false;
  }
  else {
    local_res10[0] = iVar9;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>(param_2,local_res10,1,*piVar1);
    if (iVar9 != iVar8) {
      local_28[0] = GetParentIndex(this,iVar9);
      if (-1 < (int)local_28[0]) {
        do {
          if ((int)local_28[0] < iVar8) break;
          pFVar4 = (param_2->AllocatorInstance).Data;
          if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
             ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)*piVar1 * 4)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          iVar9 = param_2->ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar9 + 1;
          *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_28[0];
          local_28[0] = GetParentIndex(this,local_28[0]);
        } while (local_28[0] < 0x80000000);
      }
      uVar12 = param_2->ArrayNum - 1;
      uVar10 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      lVar2 = (longlong)param_2->ArrayNum + -1;
      if (*(int *)(pFVar4 + lVar2 * 4) != iVar8) {
        param_2->ArrayNum = 0;
        if (*piVar1 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&param_2->AllocatorInstance,0,piVar1);
        }
        goto LAB_14df5fdc3;
      }
      iVar8 = param_2->ArrayNum / 2;
      pFVar13 = pFVar4 + lVar2 * 4;
      if (0 < iVar8) {
        do {
          uVar3 = *(undefined4 *)(pFVar4 + lVar11 * 4);
          *(undefined4 *)(pFVar4 + lVar11 * 4) = *(undefined4 *)pFVar13;
          lVar11 = lVar11 + 1;
          *(undefined4 *)pFVar13 = uVar3;
          pFVar13 = pFVar13 + -4;
        } while (lVar11 < iVar8);
      }
    }
    bVar6 = true;
  }
  return bVar6;
}

