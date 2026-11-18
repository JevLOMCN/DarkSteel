// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 21

// Construct<FTickAnimationSharingFunction> @ 14e2a7080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FTickAnimationSharingFunction>(void *param_1)

{
  FTickFunction::FTickFunction(param_1);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FTickAnimationSharingFunction__6B_;
  return;
}

// ConstructForTests<FTickAnimationSharingFunction> @ 14e2a70b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTickAnimationSharingFunction>(void *param_1)

{
  FTickFunction::FTickFunction(param_1);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FTickAnimationSharingFunction__6B_;
  return;
}

// Destruct<FTickAnimationSharingFunction> @ 14e2a70e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Destruct<FTickAnimationSharingFunction>(void *param_1)

{
  FTickTaskLevel *this;
  code *pcVar1;
  bool bVar2;
  
  *(undefined ***)param_1 = &___7FTickFunction__6B_;
  if ((*(byte **)((longlong)param_1 + 0x20) != (byte *)0x0) &&
     ((**(byte **)((longlong)param_1 + 0x20) & 1) != 0)) {
    FTickTaskManager::Get();
    if (*(longlong *)((longlong)param_1 + 0x20) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickFunction->InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8a0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this = *(FTickTaskLevel **)(*(longlong *)((longlong)param_1 + 0x20) + 0x28);
    if (this == (FTickTaskLevel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Level",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8a2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTickTaskLevel::RemoveTickFunction(this,param_1);
    **(byte **)((longlong)param_1 + 0x20) = **(byte **)((longlong)param_1 + 0x20) & 0xfe;
  }
  ::operator_delete(*(void **)((longlong)param_1 + 0x20),0x30);
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Construct<FAnimationSharingScalability> @ 14e2a7c50

void __cdecl UE::CoreUObject::Private::Construct<FAnimationSharingScalability>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FAnimationSharingScalability> @ 14e2a7c70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimationSharingScalability>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  return;
}

// Destruct<FAnimationSharingScalability> @ 14e2a7c90

void __cdecl UE::CoreUObject::Private::Destruct<FAnimationSharingScalability>(void *param_1)

{
  return;
}

// Copy<FAnimationSharingScalability> @ 14e2a7ca0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimationSharingScalability>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPerSkeletonAnimationSharingSetup> @ 14e2a7d60

void __cdecl UE::CoreUObject::Private::Construct<FPerSkeletonAnimationSharingSetup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FPerSkeletonAnimationSharingSetup> @ 14e2a7d90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPerSkeletonAnimationSharingSetup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FPerSkeletonAnimationSharingSetup> @ 14e2a7dc0

void __cdecl UE::CoreUObject::Private::Destruct<FPerSkeletonAnimationSharingSetup>(void *param_1)

{
  DestructItems<FAnimationStateEntry,int>
            (*(FAnimationStateEntry **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38)
            );
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FPerSkeletonAnimationSharingSetup> @ 14e2a7e00

bool __cdecl
UE::CoreUObject::Private::Copy<FPerSkeletonAnimationSharingSetup>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FAnimationStateEntry *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar6);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar6 = *puVar3;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[1]);
      }
      puVar6[1] = puVar3[1];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[2]);
      }
      puVar6[2] = puVar3[2];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[3] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[3]);
      }
      puVar6[3] = puVar3[3];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[4] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[4]);
      }
      puVar6[4] = puVar3[4];
      pFVar1 = (ForAnyElementType *)(puVar6 + 6);
      *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(puVar3 + 5);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 6)) {
        DestructItems<FAnimationStateEntry,int>
                  ((FAnimationStateEntry *)pFVar1->Data,*(int *)(puVar6 + 7));
        iVar4 = *(int *)(puVar3 + 7);
        piVar2 = (int *)((longlong)puVar6 + 0x3c);
        pFVar5 = (FAnimationStateEntry *)((ForAnyElementType *)(puVar3 + 6))->Data;
        *(int *)(puVar6 + 7) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FAnimationStateEntry,FAnimationStateEntry,int>(pFVar1->Data,pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimationStateEntry> @ 14e2a8110

void __cdecl UE::CoreUObject::Private::Construct<FAnimationStateEntry>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3dcccccd;
  return;
}

// ConstructForTests<FAnimationStateEntry> @ 14e2a8150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimationStateEntry>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3dcccccd;
  return;
}

// Destruct<FAnimationStateEntry> @ 14e2a8190

void __cdecl UE::CoreUObject::Private::Destruct<FAnimationStateEntry>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
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

// Copy<FAnimationStateEntry> @ 14e2a81b0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimationStateEntry>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FAnimationSetup *pFVar3;
  longlong lVar4;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar4);
      if (pFVar5 != (ForAnyElementType *)((longlong)param_1 + lVar4 + 8)) {
        iVar2 = *(int *)((longlong)param_1 + lVar4 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        pFVar3 = (FAnimationSetup *)((ForAnyElementType *)((longlong)param_1 + lVar4 + 8))->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          ConstructItems<FAnimationSetup,FAnimationSetup,int>(pFVar5->Data,pFVar3,iVar2);
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x19);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x1c);
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x21);
      *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x22);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x24);
      *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x28);
      *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x2c);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimationSetup> @ 14e2a8540

void __cdecl UE::CoreUObject::Private::Construct<FAnimationSetup>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// ConstructForTests<FAnimationSetup> @ 14e2a8560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimationSetup>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Destruct<FAnimationSetup> @ 14e2a8580

void __cdecl UE::CoreUObject::Private::Destruct<FAnimationSetup>(void *param_1)

{
  return;
}

// Copy<FAnimationSetup> @ 14e2a8590

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimationSetup>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined1 *)((longlong)puVar2 + 0x14) = *(undefined1 *)((longlong)puVar1 + 0x14);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USkeletalMeshComponent_*>_> @ 14e2ab540

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USkeletalMeshComponent_*>_>
          (ushort param_1,ForElementType<USkeletalMeshComponent_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<USkeletalMeshComponent_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USkeletalMeshComponent_*>_> @ 14e2ab610

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USkeletalMeshComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<USkeletalMeshComponent_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<USkeletalMeshComponent_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

