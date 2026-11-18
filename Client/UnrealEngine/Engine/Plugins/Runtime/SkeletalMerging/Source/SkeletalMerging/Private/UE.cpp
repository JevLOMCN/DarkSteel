// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMerging
// Functions: 8

// Construct<FSkeletonMergeParams> @ 14ab8e700

void __cdecl UE::CoreUObject::Private::Construct<FSkeletonMergeParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x1010101;
  return;
}

// ConstructForTests<FSkeletonMergeParams> @ 14ab8e720

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSkeletonMergeParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x1010101;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Destruct<FSkeletonMergeParams> @ 14ab8e740

void __cdecl UE::CoreUObject::Private::Destruct<FSkeletonMergeParams>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSkeletonMergeParams> @ 14ab8e760

bool __cdecl
UE::CoreUObject::Private::Copy<FSkeletonMergeParams>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<TObjectPtr<USkeleton>,TObjectPtr<USkeleton>,int>
                    (pFVar6->Data,(TObjectPtr<USkeleton> *)pFVar5,iVar3);
        }
      }
      *(undefined1 *)&pFVar6[2].Data = *(undefined1 *)&pFVar2[2].Data;
      *(undefined1 *)((longlong)&pFVar6[2].Data + 1) =
           *(undefined1 *)((longlong)&pFVar2[2].Data + 1);
      *(undefined1 *)((longlong)&pFVar6[2].Data + 2) =
           *(undefined1 *)((longlong)&pFVar2[2].Data + 2);
      *(undefined1 *)((longlong)&pFVar6[2].Data + 3) =
           *(undefined1 *)((longlong)&pFVar2[2].Data + 3);
      *(undefined1 *)((longlong)&pFVar6[2].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[2].Data + 4);
      *(undefined1 *)((longlong)&pFVar6[2].Data + 5) =
           *(undefined1 *)((longlong)&pFVar2[2].Data + 5);
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSkeletalMeshMergeParams> @ 14ab8e8b0

void __cdecl UE::CoreUObject::Private::Construct<FSkeletalMeshMergeParams>(void *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_28 [16];
  undefined8 auStack_18 [2];
  
  puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *puVar1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  if (param_1 != auStack_28) {
    DestructItems<FSkelMeshMergeSectionMapping,int>((FSkelMeshMergeSectionMapping *)0x0,0);
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  DestructItems<FSkelMeshMergeSectionMapping,int>((FSkelMeshMergeSectionMapping *)0x0,0);
  if (puVar1 != auStack_18) {
    DestructItems<FSkelMeshMergeMeshUVTransforms,int>
              ((FSkelMeshMergeMeshUVTransforms *)*puVar1,*(int *)((longlong)param_1 + 0x18));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  }
  DestructItems<FSkelMeshMergeMeshUVTransforms,int>((FSkelMeshMergeMeshUVTransforms *)0x0,0);
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) & 0xfffffffc;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FSkeletalMeshMergeParams> @ 14ab8e8c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSkeletalMeshMergeParams>(void *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_28 [16];
  undefined8 auStack_18 [2];
  
  puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *puVar1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  if (param_1 != auStack_28) {
    DestructItems<FSkelMeshMergeSectionMapping,int>((FSkelMeshMergeSectionMapping *)0x0,0);
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  DestructItems<FSkelMeshMergeSectionMapping,int>((FSkelMeshMergeSectionMapping *)0x0,0);
  if (puVar1 != auStack_18) {
    DestructItems<FSkelMeshMergeMeshUVTransforms,int>
              ((FSkelMeshMergeMeshUVTransforms *)*puVar1,*(int *)((longlong)param_1 + 0x18));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  }
  DestructItems<FSkelMeshMergeMeshUVTransforms,int>((FSkelMeshMergeMeshUVTransforms *)0x0,0);
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) & 0xfffffffc;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FSkeletalMeshMergeParams> @ 14ab8e8d0

void __cdecl UE::CoreUObject::Private::Destruct<FSkeletalMeshMergeParams>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FSkelMeshMergeMeshUVTransforms,int>
            (*(FSkelMeshMergeMeshUVTransforms **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FSkelMeshMergeSectionMapping,int>
            (*(FSkelMeshMergeSectionMapping **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FSkeletalMeshMergeParams> @ 14ab8e930

bool __cdecl
UE::CoreUObject::Private::Copy<FSkeletalMeshMergeParams>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType *pFVar8;
  
  if (param_3 != 0) {
    pFVar8 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar8);
      if (pFVar8 != pFVar2) {
        DestructItems<FSkelMeshMergeSectionMapping,int>
                  ((FSkelMeshMergeSectionMapping *)pFVar8->Data,*(int *)&pFVar8[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar8,iVar3,piVar1);
          ConstructItems<FSkelMeshMergeSectionMapping,FSkelMeshMergeSectionMapping,int>
                    (pFVar8->Data,(FSkelMeshMergeSectionMapping *)pFVar5,iVar3);
        }
      }
      TArray<FSkelMeshMergeMeshUVTransforms,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FSkelMeshMergeMeshUVTransforms,TSizedDefaultAllocator<32>_> *)(pFVar8 + 2),
                 (TArray<FSkelMeshMergeMeshUVTransforms,TSizedDefaultAllocator<32>_> *)(pFVar2 + 2))
      ;
      pFVar7 = pFVar8 + 4;
      if (pFVar7 != pFVar2 + 4) {
        iVar3 = *(int *)&pFVar2[5].Data;
        piVar1 = (int *)((longlong)&pFVar8[5].Data + 4);
        pFVar5 = pFVar2[4].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar8[5].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,iVar4,pFVar7,iVar3,piVar1);
          ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int>
                    (pFVar7->Data,(TObjectPtr<USkeletalMesh> *)pFVar5,iVar3);
        }
      }
      uVar6 = *(uint *)((longlong)&pFVar8[6].Data + 4);
      *(undefined4 *)&pFVar8[6].Data = *(undefined4 *)&pFVar2[6].Data;
      uVar6 = (uVar6 ^ *(uint *)((longlong)&pFVar2[6].Data + 4)) & 1 ^
              *(uint *)((longlong)&pFVar8[6].Data + 4);
      *(uint *)((longlong)&pFVar8[6].Data + 4) = uVar6;
      *(uint *)((longlong)&pFVar8[6].Data + 4) =
           (uVar6 ^ *(uint *)((longlong)&pFVar2[6].Data + 4)) & 2 ^ uVar6;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar2[7].Data != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar2[7].Data);
      }
      pFVar8[7].Data = pFVar2[7].Data;
      param_3 = param_3 + -1;
      pFVar8 = pFVar8 + 8;
    } while (param_3 != 0);
  }
  return true;
}

