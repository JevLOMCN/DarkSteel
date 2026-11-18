// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 4

// StaticStruct @ 14deed920

UScriptStruct * __cdecl FIKRigInputSkeleton::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigInputSkeleton.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigInputSkeleton.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigInputSkeleton,(UObject *)pUVar1,
                         L"IKRigInputSkeleton");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigInputSkeleton.OuterSingleton;
}

// FIKRigInputSkeleton @ 14df17bc0

FIKRigInputSkeleton * __thiscall
FIKRigInputSkeleton::FIKRigInputSkeleton(FIKRigInputSkeleton *this,USkeletalMesh *param_1)

{
  (this->BoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneNames).ArrayNum = 0;
  (this->BoneNames).ArrayMax = 0;
  (this->ParentIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentIndices).ArrayNum = 0;
  (this->ParentIndices).ArrayMax = 0;
  (this->LocalRefPose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalRefPose).ArrayNum = 0;
  (this->LocalRefPose).ArrayMax = 0;
  (this->SkeletalMeshName).ComparisonIndex = 0;
  (this->SkeletalMeshName).Number = 0;
  Initialize(this,param_1);
  return this;
}

// Initialize @ 14df43160

void __thiscall FIKRigInputSkeleton::Initialize(FIKRigInputSkeleton *this,USkeletalMesh *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong local_res10;
  longlong local_res18;
  FName local_res20;
  FName local_98;
  FString local_90;
  FIKRigInputSkeleton local_80;
  
  uVar14 = 0;
  local_80.BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.BoneNames.ArrayNum = 0;
  local_80.BoneNames.ArrayMax = 0;
  local_80.ParentIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ParentIndices.ArrayNum = 0;
  local_80.ParentIndices.ArrayMax = 0;
  local_80.LocalRefPose.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.LocalRefPose.ArrayNum = 0;
  local_80.LocalRefPose.ArrayMax = 0;
  local_80.SkeletalMeshName.ComparisonIndex.Value = 0;
  local_80.SkeletalMeshName.Number = 0;
  if (this != &local_80) {
    pFVar3 = (this->BoneNames).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->BoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BoneNames).ArrayNum = 0;
    (this->BoneNames).ArrayMax = 0;
  }
  pTVar1 = &this->ParentIndices;
  if (pTVar1 != &local_80.ParentIndices) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParentIndices).ArrayNum = 0;
    (this->ParentIndices).ArrayMax = 0;
  }
  pTVar2 = &this->LocalRefPose;
  if (pTVar2 != &local_80.LocalRefPose) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LocalRefPose).ArrayNum = 0;
    (this->LocalRefPose).ArrayMax = 0;
  }
  this->SkeletalMeshName = local_80.SkeletalMeshName;
  if (param_1 != (USkeletalMesh *)0x0) {
    local_res20 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res20,&local_90);
    iVar11 = local_90.Data.ArrayNum + -1;
    if (local_90.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    pFVar8 = ::FName::FName(&local_98,iVar11,(wchar_t *)local_90.Data.AllocatorInstance.Data,
                            FNAME_Add);
    this->SkeletalMeshName = *pFVar8;
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    lVar9 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
    iVar11 = *(int *)(lVar9 + 0x28);
    if (0 < iVar11) {
      local_res18 = 0;
      local_res10 = 0;
      do {
        uVar12 = ~uVar14 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar14 < iVar11) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (FScriptContainerElement *)(local_res10 + *(longlong *)(lVar9 + 0x20));
        pFVar3 = (this->BoneNames).AllocatorInstance.Data;
        if (((pFVar3 <= pFVar13) && (pFVar13 < pFVar3 + (longlong)(this->BoneNames).ArrayMax * 8))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (this->BoneNames).ArrayNum;
        if (iVar11 == (this->BoneNames).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)this,&(this->BoneNames).ArrayMax);
        }
        (this->BoneNames).ArrayNum = iVar11 + 1;
        *(undefined8 *)((this->BoneNames).AllocatorInstance.Data + (longlong)iVar11 * 8) =
             *(undefined8 *)pFVar13;
        uVar7 = 0;
        if ((int)uVar14 < *(int *)(lVar9 + 0x28)) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (FScriptContainerElement *)(*(longlong *)(lVar9 + 0x20) + local_res10 + 8);
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar13) &&
            (pFVar13 < pFVar3 + (longlong)(this->ParentIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (this->ParentIndices).ArrayNum;
        if (iVar11 == (this->ParentIndices).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,&(this->ParentIndices).ArrayMax);
        }
        (this->ParentIndices).ArrayNum = iVar11 + 1;
        *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 4) =
             *(undefined4 *)pFVar13;
        uVar7 = 0;
        if ((int)uVar14 < *(int *)(lVar9 + 0x38)) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (FScriptContainerElement *)(local_res18 + *(longlong *)(lVar9 + 0x30));
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar13) &&
            (pFVar13 < pFVar3 + (longlong)(this->LocalRefPose).ArrayMax * 0x60)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (this->LocalRefPose).ArrayNum;
        if (iVar11 == (this->LocalRefPose).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&pTVar2->AllocatorInstance,&(this->LocalRefPose).ArrayMax);
        }
        local_res18 = local_res18 + 0x60;
        (this->LocalRefPose).ArrayNum = iVar11 + 1;
        uVar5 = *(undefined8 *)(pFVar13 + 8);
        uVar14 = uVar14 + 1;
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        lVar10 = (longlong)iVar11 * 0x60;
        *(undefined8 *)(pFVar3 + lVar10) = *(undefined8 *)pFVar13;
        *(undefined8 *)(pFVar3 + lVar10 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar13 + 0x18);
        *(undefined8 *)(pFVar3 + lVar10 + 0x10) = *(undefined8 *)(pFVar13 + 0x10);
        *(undefined8 *)(pFVar3 + lVar10 + 0x10 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar13 + 0x28);
        *(undefined8 *)(pFVar3 + lVar10 + 0x20) = *(undefined8 *)(pFVar13 + 0x20);
        *(undefined8 *)(pFVar3 + lVar10 + 0x20 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar13 + 0x38);
        *(undefined8 *)(pFVar3 + lVar10 + 0x30) = *(undefined8 *)(pFVar13 + 0x30);
        *(undefined8 *)(pFVar3 + lVar10 + 0x30 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar13 + 0x48);
        *(undefined8 *)(pFVar3 + lVar10 + 0x40) = *(undefined8 *)(pFVar13 + 0x40);
        *(undefined8 *)(pFVar3 + lVar10 + 0x40 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar13 + 0x58);
        local_res10 = local_res10 + 0xc;
        *(undefined8 *)(pFVar3 + lVar10 + 0x50) = *(undefined8 *)(pFVar13 + 0x50);
        *(undefined8 *)(pFVar3 + lVar10 + 0x50 + 8) = uVar5;
        iVar11 = *(int *)(lVar9 + 0x28);
      } while ((int)uVar14 < iVar11);
    }
  }
  return;
}

// Reset @ 14df4eb70

void __thiscall FIKRigInputSkeleton::Reset(FIKRigInputSkeleton *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FIKRigInputSkeleton local_48;
  
  local_48.SkeletalMeshName.ComparisonIndex.Value = 0;
  local_48.SkeletalMeshName.Number = 0;
  if (this != &local_48) {
    pFVar3 = (this->BoneNames).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->BoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BoneNames).ArrayNum = 0;
    (this->BoneNames).ArrayMax = 0;
  }
  pTVar1 = &this->ParentIndices;
  if (pTVar1 != &local_48.ParentIndices) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParentIndices).ArrayNum = 0;
    (this->ParentIndices).ArrayMax = 0;
  }
  pTVar2 = &this->LocalRefPose;
  if (pTVar2 != &local_48.LocalRefPose) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LocalRefPose).ArrayNum = 0;
    (this->LocalRefPose).ArrayMax = 0;
  }
  this->SkeletalMeshName = local_48.SkeletalMeshName;
  return;
}

