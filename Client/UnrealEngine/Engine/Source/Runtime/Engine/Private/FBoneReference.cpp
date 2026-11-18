// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 1475196e0

UScriptStruct * __cdecl FBoneReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoneReference.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBoneReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoneReference,(UObject *)pUVar1,L"BoneReference"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FBoneReference.OuterSingleton;
}

// GetCompactPoseIndex @ 14755b370

FCompactPoseBoneIndex __thiscall
FBoneReference::GetCompactPoseIndex(FBoneReference *this,FBoneContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCompactPoseBoneIndex FVar4;
  uint uVar5;
  longlong in_R8;
  
  FVar4 = SUB84(param_1,0);
  if (!(BADTYPE)this->bUseSkeletonIndex) {
    *(FCompactPoseBoneIndex *)&(param_1->BoneIndicesArray).AllocatorInstance.Data =
         this->CachedCompactPoseIndex;
    return FVar4;
  }
  uVar5 = this->BoneIndex;
  if (((uVar5 != 0xffffffff) && (-1 < (int)uVar5)) && ((int)uVar5 < *(int *)(in_R8 + 0x88))) {
    uVar3 = 0;
    if ((int)uVar5 < *(int *)(in_R8 + 0x88)) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FCompactPoseBoneIndex)(*pcVar1)();
        return FVar4;
      }
    }
    *(undefined4 *)&(param_1->BoneIndicesArray).AllocatorInstance.Data =
         *(undefined4 *)(*(longlong *)(in_R8 + 0x80) + (longlong)(int)uVar5 * 4);
    return FVar4;
  }
  *(undefined4 *)&(param_1->BoneIndicesArray).AllocatorInstance.Data = 0xffffffff;
  return FVar4;
}

// GetMeshPoseIndex @ 14755d790

FMeshPoseBoneIndex __thiscall
FBoneReference::GetMeshPoseIndex(FBoneReference *this,FBoneContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMeshPoseBoneIndex FVar4;
  uint uVar5;
  longlong in_R8;
  
  uVar5 = this->BoneIndex;
  FVar4 = SUB84(param_1,0);
  if (uVar5 == 0xffffffff) {
    *(undefined4 *)&(param_1->BoneIndicesArray).AllocatorInstance.Data = 0xffffffff;
    return FVar4;
  }
  if ((BADTYPE)this->bUseSkeletonIndex) {
    if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(in_R8 + 0x58))) {
      uVar3 = 0;
      if ((int)uVar5 < *(int *)(in_R8 + 0x58)) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          FVar4 = (FMeshPoseBoneIndex)(*pcVar1)();
          return FVar4;
        }
      }
      *(undefined4 *)&(param_1->BoneIndicesArray).AllocatorInstance.Data =
           *(undefined4 *)(*(longlong *)(in_R8 + 0x50) + (longlong)(int)uVar5 * 4);
      return FVar4;
    }
    *(undefined4 *)&(param_1->BoneIndicesArray).AllocatorInstance.Data = 0xffffffff;
    return FVar4;
  }
  *(uint *)&(param_1->BoneIndicesArray).AllocatorInstance.Data = uVar5;
  return FVar4;
}

// GetSkeletonPoseIndex @ 147562b60

FSkeletonPoseBoneIndex __thiscall
FBoneReference::GetSkeletonPoseIndex(FBoneReference *this,FBoneContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkeletonPoseBoneIndex FVar4;
  uint uVar5;
  longlong in_R8;
  
  uVar5 = this->BoneIndex;
  FVar4 = SUB84(param_1,0);
  if (uVar5 == 0xffffffff) {
    *(undefined4 *)&(param_1->BoneIndicesArray).AllocatorInstance.Data = 0xffffffff;
    return FVar4;
  }
  if ((BADTYPE)this->bUseSkeletonIndex) {
    *(uint *)&(param_1->BoneIndicesArray).AllocatorInstance.Data = uVar5;
    return FVar4;
  }
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(in_R8 + 0x68))) {
    uVar3 = 0;
    if ((int)uVar5 < *(int *)(in_R8 + 0x68)) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FSkeletonPoseBoneIndex)(*pcVar1)();
        return FVar4;
      }
    }
    *(undefined4 *)&(param_1->BoneIndicesArray).AllocatorInstance.Data =
         *(undefined4 *)(*(longlong *)(in_R8 + 0x60) + (longlong)(int)uVar5 * 4);
    return FVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8192494858347217480>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                     ,0x248,"PoseToSkeletonBoneIndexArray.IsValidIndex(MeshIndex.GetInt())");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FSkeletonPoseBoneIndex)(*pcVar1)();
    return FVar4;
  }
  *(undefined4 *)&(param_1->BoneIndicesArray).AllocatorInstance.Data = 0xffffffff;
  return FVar4;
}

// Initialize @ 147565800

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FBoneReference::Initialize(FBoneReference *this,FBoneContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  UObject *pUVar7;
  int *piVar8;
  FCompactPoseBoneIndex FVar9;
  FScriptContainerElement *pFVar10;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  uVar5 = FBoneContainer::GetPoseBoneIndexForBoneName(param_1,&this->BoneName);
  this->BoneIndex = uVar5;
  this->bUseSkeletonIndex = 0;
  if ((((((uVar5 & 0x7fffffff) == 0x7fffffff) && (this->BoneName != (FName)0x0)) &&
       (pUVar7 = FWeakObjectPtr::Get(&(param_1->AssetSkeleton).WeakPtr), pUVar7 != (UObject *)0x0))
      && (((this->BoneName == (FName)0x0 ||
           (piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)&pUVar7[5].field_0x10,this->BoneName), piVar8 == (int *)0x0)) ||
          (*piVar8 == -1)))) && (4 < (byte)LogAnimation._0_1_)) {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
    local_res8.Number = *(uint *)&pUVar7->field_0x1c;
    ::FName::ToString(&local_res8,&local_28);
    ::FName::ToString(&this->BoneName,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  uVar5 = this->BoneIndex;
  if (uVar5 != 0xffffffff) {
    if (!(BADTYPE)this->bUseSkeletonIndex) goto LAB_14756597c;
    if ((-1 < (int)uVar5) && ((int)uVar5 < (param_1->SkeletonToPoseBoneIndexArray).ArrayNum)) {
      uVar6 = 0;
      if ((int)uVar5 < (param_1->SkeletonToPoseBoneIndexArray).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = *(uint *)((param_1->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data +
                       (longlong)(int)uVar5 * 4);
      goto LAB_14756597c;
    }
  }
  uVar5 = 0xffffffff;
LAB_14756597c:
  pFVar1 = (param_1->BoneIndicesArray).AllocatorInstance.Data;
  pFVar10 = pFVar1;
  do {
    if (pFVar10 == pFVar1 + (longlong)(param_1->BoneIndicesArray).ArrayNum * 2) {
      FVar9 = (FCompactPoseBoneIndex)0xffffffff;
LAB_1475659a9:
      this->CachedCompactPoseIndex = FVar9;
      return this->BoneIndex != -1;
    }
    if (*(ushort *)pFVar10 == uVar5) {
      FVar9 = SUB84((longlong)pFVar10 - (longlong)pFVar1 >> 1,0);
      goto LAB_1475659a9;
    }
    pFVar10 = pFVar10 + 2;
  } while( true );
}

// Initialize @ 1475659e0

bool __thiscall FBoneReference::Initialize(FBoneReference *this,USkeleton *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_1 == (USkeleton *)0x0) || (this->BoneName == (FName)0x0)) {
    this->BoneIndex = -1;
    uVar2 = *(uint *)&this->field_0x8;
  }
  else {
    uVar2 = 0xffffffff;
    puVar1 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)&(param_1->ReferenceSkeleton).FinalNameToIndexMap,this->BoneName);
    if (puVar1 != (uint *)0x0) {
      uVar2 = *puVar1;
    }
    uVar2 = uVar2 | 0x80000000;
    *(uint *)&this->field_0x8 = uVar2;
  }
  this->CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  return (uVar2 & 0x7fffffff) != 0x7fffffff;
}

// IsValidToEvaluate @ 14756b740

bool __thiscall FBoneReference::IsValidToEvaluate(FBoneReference *this,FBoneContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  uint uVar6;
  
  if (this->BoneIndex != -1) {
    bVar2 = FWeakObjectPtr::IsValid(&(param_1->Asset).WeakPtr);
    if (((bVar2) && (param_1->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
       (0 < (param_1->BoneIndicesArray).ArrayNum)) {
      uVar4 = this->BoneIndex;
      uVar6 = uVar4 & 0xffff;
      if ((param_1->BoneSwitchArray).NumBits <= (int)uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      FVar5 = (param_1->BoneSwitchArray).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<unsigned_int>)0x0) {
        FVar5 = (ForElementType<unsigned_int>)&param_1->BoneSwitchArray;
      }
      if ((*(uint *)((longlong)FVar5 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
        return true;
      }
    }
  }
  return false;
}

// Serialize @ 147577f50

bool __thiscall FBoneReference::Serialize(FBoneReference *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  return true;
}

