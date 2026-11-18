// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 14

// Clone @ 14ab6c6b0

TSharedPtr<UE::Mutable::Private::FSkeleton,1> * __thiscall
UE::Mutable::Private::FSkeleton::Clone
          (FSkeleton *this,TSharedPtr<UE::Mutable::Private::FSkeleton,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSkeleton *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TSharedRef<UE::Mutable::Private::FSkeleton,1> *pTVar8;
  TSharedPtr<UE::Mutable::Private::FSkeleton,1> *pTVar9;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar10;
  TSharedRef<UE::Mutable::Private::FSkeleton,1> local_18;
  
  pTVar8 = MakeShared<UE::Mutable::Private::FSkeleton,1>(&local_18);
  __return_storage_ptr__->Object = pTVar8->Object;
  pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FSkeleton *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::Mutable::Private::FSkeleton,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->Object->BoneIds,&this->BoneIds);
  if (__return_storage_ptr__->Object == (FSkeleton *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::Mutable::Private::FSkeleton,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = __return_storage_ptr__->Object;
  pTVar10 = &pFVar4->BoneParents;
  if (pTVar10 != &this->BoneParents) {
    iVar2 = (this->BoneParents).ArrayNum;
    piVar1 = &(pFVar4->BoneParents).ArrayMax;
    pFVar5 = (this->BoneParents).AllocatorInstance.Data;
    (pFVar4->BoneParents).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,*piVar1,&pTVar10->AllocatorInstance,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((pTVar10->AllocatorInstance).Data,pFVar5,(longlong)iVar2 * 2);
      }
    }
  }
  if (__return_storage_ptr__->Object == (FSkeleton *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::Mutable::Private::FSkeleton,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = __return_storage_ptr__->Object;
  if (pFVar4 != this) {
    iVar2 = (this->DebugBoneNames).ArrayNum;
    piVar1 = &(pFVar4->DebugBoneNames).ArrayMax;
    pFVar5 = (this->DebugBoneNames).AllocatorInstance.Data;
    (pFVar4->DebugBoneNames).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,*piVar1,(ForAnyElementType *)pFVar4,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((pFVar4->DebugBoneNames).AllocatorInstance.Data,pFVar5,(longlong)iVar2 << 3);
      }
    }
  }
  return __return_storage_ptr__;
}

// FindBone @ 14ab6ffc0

int __thiscall UE::Mutable::Private::FSkeleton::FindBone(FSkeleton *this,FBoneName *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->BoneIds).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->BoneIds).ArrayNum * 4) {
    pFVar2 = pFVar1;
    do {
      if (*(uint *)pFVar2 == param_1->Id) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 2);
      }
      pFVar2 = pFVar2 + 4;
    } while (pFVar2 != pFVar1 + (longlong)(this->BoneIds).ArrayNum * 4);
  }
  return -1;
}

// GetBoneCount @ 14ab70e10

int __thiscall UE::Mutable::Private::FSkeleton::GetBoneCount(FSkeleton *this)

{
  return (this->BoneIds).ArrayNum;
}

// GetBoneName @ 14ab70e20

FBoneName * __thiscall UE::Mutable::Private::FSkeleton::GetBoneName(FSkeleton *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBoneName *pFVar4;
  
  if ((param_1 < 0) || ((this->BoneIds).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneIds.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Skeleton.cpp"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneName *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->BoneIds).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBoneName *)((this->BoneIds).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetBoneParent @ 14ab70ec0

int __thiscall UE::Mutable::Private::FSkeleton::GetBoneParent(FSkeleton *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->BoneParents).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->BoneParents).ArrayNum) {
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
    return (int)*(short *)((this->BoneParents).AllocatorInstance.Data + (longlong)param_1 * 2);
  }
  return -1;
}

// GetDebugName @ 14ab73530

FName __thiscall UE::Mutable::Private::FSkeleton::GetDebugName(FSkeleton *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint in_register_00000014;
  int in_R8D;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if ((-1 < in_R8D) && (in_R8D < (this->DebugBoneNames).ArrayNum)) {
    if (in_R8D < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
    }
    *(undefined8 *)FVar3 =
         *(undefined8 *)((this->DebugBoneNames).AllocatorInstance.Data + (longlong)in_R8D * 8);
    return FVar3;
  }
  ::FName::FName((FName *)FVar3,"Unknown Bone");
  return FVar3;
}

// Serialise @ 14ab85a30

void __thiscall UE::Mutable::Private::FSkeleton::Serialise(FSkeleton *this,FOutputArchive *param_1)

{
  uint local_res8 [2];
  
  operator<<<UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>(param_1,&this->BoneIds);
  local_res8[0] = (this->BoneParents).ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  if (local_res8[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->BoneParents).AllocatorInstance.Data,
               (ulonglong)local_res8[0] * 2);
  }
  return;
}

// Serialise @ 14ab85aa0

void __cdecl UE::Mutable::Private::FSkeleton::Serialise(FSkeleton *param_1,FOutputArchive *param_2)

{
  uint local_res8 [2];
  
  operator<<<UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>(param_2,&param_1->BoneIds)
  ;
  local_res8[0] = (param_1->BoneParents).ArrayNum;
  (**(code **)((longlong)*param_2->Stream + 8))(param_2->Stream,local_res8,4);
  if (local_res8[0] != 0) {
    (**(code **)((longlong)*param_2->Stream + 8))
              (param_2->Stream,(param_1->BoneParents).AllocatorInstance.Data,
               (ulonglong)local_res8[0] * 2);
  }
  return;
}

// SetBoneCount @ 14ab86190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FSkeleton::SetBoneCount(FSkeleton *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 local_18 [8];
  
  uVar6 = (ulonglong)(uint)param_1;
  TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(&this->DebugBoneNames,param_1,Default);
  TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_>::SetNum
            (&this->BoneIds,param_1,Default);
  local_18[0] = 0xffff;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar6);
  }
  piVar1 = &(this->BoneParents).ArrayMax;
  (this->BoneParents).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_1,&(this->BoneParents).AllocatorInstance,0,piVar1);
  }
  if (0 < param_1) {
    do {
      pFVar2 = (this->BoneParents).AllocatorInstance.Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 2)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (this->BoneParents).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&(this->BoneParents).AllocatorInstance,piVar1);
      }
      (this->BoneParents).ArrayNum = iVar5 + 1;
      *(undefined2 *)((this->BoneParents).AllocatorInstance.Data + (longlong)iVar5 * 2) =
           local_18[0];
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// SetBoneName @ 14ab862d0

void __thiscall
UE::Mutable::Private::FSkeleton::SetBoneName(FSkeleton *this,int param_1,FBoneName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->BoneIds).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneIds.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Skeleton.cpp"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_1 < 0) {
      return;
    }
  }
  if (param_1 < (this->BoneIds).ArrayNum) {
    uVar1 = param_2->Id;
    uVar4 = 0;
    if (param_1 < (this->BoneIds).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)((this->BoneIds).AllocatorInstance.Data + (longlong)param_1 * 4) = uVar1;
  }
  return;
}

// SetBoneParent @ 14ab863a0

void __thiscall
UE::Mutable::Private::FSkeleton::SetBoneParent(FSkeleton *this,int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((((param_2 < -1) || ((this->BoneIds).ArrayNum <= param_2)) || (0xfffe < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentIndex >= -1 && ParentIndex < GetBoneCount() && ParentIndex < 0xffff"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Skeleton.cpp"
                         ,0x57,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar1 = &(this->BoneParents).ArrayNum;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneParents.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Skeleton.cpp"
                       ,0x58,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_1 < 0) {
      return;
    }
    if (*piVar1 <= param_1) {
      return;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->BoneParents).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(short *)((this->BoneParents).AllocatorInstance.Data + (longlong)param_1 * 2) = (short)param_2;
  return;
}

// SetDebugName @ 14ab87ca0

void __thiscall
UE::Mutable::Private::FSkeleton::SetDebugName(FSkeleton *this,int param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((-1 < param_1) && (param_1 < (this->DebugBoneNames).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(FName *)((this->DebugBoneNames).AllocatorInstance.Data + (longlong)param_1 * 8) = param_2;
  }
  return;
}

// StaticUnserialise @ 14ab8c380

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedPtr<UE::Mutable::Private::FSkeleton,1> * __cdecl
UE::Mutable::Private::FSkeleton::StaticUnserialise
          (TSharedPtr<UE::Mutable::Private::FSkeleton,1> *__return_storage_ptr__,
          FInputArchive *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSkeleton *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<UE::Mutable::Private::FSkeleton,1> *pTVar5;
  TSharedPtr<UE::Mutable::Private::FSkeleton,1> *pTVar6;
  uint local_res8 [2];
  TSharedRef<UE::Mutable::Private::FSkeleton,1> local_18;
  
  pTVar5 = MakeShared<UE::Mutable::Private::FSkeleton,1>(&local_18);
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FSkeleton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::Mutable::Private::FSkeleton,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  operator>><UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>(param_1,&pFVar2->BoneIds);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<short,TSizedDefaultAllocator<32>_>::SetNum(&pFVar2->BoneParents,local_res8[0],Default);
  if (local_res8[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(pFVar2->BoneParents).AllocatorInstance.Data,
               (ulonglong)local_res8[0] * 2);
  }
  return __return_storage_ptr__;
}

// Unserialise @ 14ab8d640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FSkeleton::Unserialise(FSkeleton *this,FInputArchive *param_1)

{
  uint local_res8 [2];
  
  operator>><UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>(param_1,&this->BoneIds);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<short,TSizedDefaultAllocator<32>_>::SetNum(&this->BoneParents,local_res8[0],Default);
  if (local_res8[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->BoneParents).AllocatorInstance.Data,
               (ulonglong)local_res8[0] * 2);
  }
  return;
}

