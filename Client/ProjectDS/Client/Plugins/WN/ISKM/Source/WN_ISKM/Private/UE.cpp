// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 32

// Construct<FWN_ISKM_BoidRandomSpawnInfo> @ 14a836ca0

void __cdecl UE::CoreUObject::Private::Construct<FWN_ISKM_BoidRandomSpawnInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x45480000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3f800000;
  return;
}

// ConstructForTests<FWN_ISKM_BoidRandomSpawnInfo> @ 14a836cf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWN_ISKM_BoidRandomSpawnInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x45480000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// Destruct<FWN_ISKM_BoidRandomSpawnInfo> @ 14a836d40

void __cdecl UE::CoreUObject::Private::Destruct<FWN_ISKM_BoidRandomSpawnInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x30);
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

// Copy<FWN_ISKM_BoidRandomSpawnInfo> @ 14a836d60

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_ISKM_BoidRandomSpawnInfo>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x30);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
      *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
      *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
      *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
      if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x30)) {
        iVar3 = *(int *)((longlong)param_2 + 0x38);
        piVar1 = (int *)((longlong)param_1 + 0x3c);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0x30))->Data;
        *(int *)((longlong)param_1 + 0x38) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,*piVar1,pFVar4,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar3 * 0x18);
          }
        }
      }
      puVar2 = (undefined4 *)((longlong)param_2 + 0x40);
      param_2 = (void *)((longlong)param_2 + 0x48);
      *(undefined4 *)((longlong)param_1 + 0x40) = *puVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_ISKM_SkeletalMeshInfo> @ 14a8370e0

void __cdecl UE::CoreUObject::Private::Construct<FWN_ISKM_SkeletalMeshInfo>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FWN_ISKM_SkeletalMeshInfo> @ 14a837150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_ISKM_SkeletalMeshInfo>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FWN_ISKM_SkeletalMeshInfo> @ 14a8371b0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_ISKM_SkeletalMeshInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Copy<FWN_ISKM_SkeletalMeshInfo> @ 14a8371d0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_ISKM_SkeletalMeshInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    pvVar3 = param_2;
    do {
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x10);
      puVar2[1] = *(undefined8 *)((longlong)pvVar3 + 8);
      puVar2[2] = uVar1;
      FUtf8String::operator=((FUtf8String *)(puVar2 + 3),(FUtf8String *)((longlong)pvVar3 + 0x18));
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x30);
      puVar2[5] = *(undefined8 *)((longlong)pvVar3 + 0x28);
      puVar2[6] = uVar1;
      puVar2[7] = *(undefined8 *)((longlong)pvVar3 + 0x38);
      *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)pvVar3 + 0x40);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 9;
      pvVar3 = (void *)((longlong)pvVar3 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_ISKM_AnimationInfo> @ 14a837430

void __cdecl UE::CoreUObject::Private::Construct<FWN_ISKM_AnimationInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42c80000;
  return;
}

// ConstructForTests<FWN_ISKM_AnimationInfo> @ 14a837490

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_ISKM_AnimationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42c80000;
  return;
}

// Destruct<FWN_ISKM_AnimationInfo> @ 14a8374f0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_ISKM_AnimationInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Copy<FWN_ISKM_AnimationInfo> @ 14a837510

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_ISKM_AnimationInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      FUtf8String::operator=
                ((FUtf8String *)((longlong)param_1 + 0x18),
                 (FUtf8String *)((longlong)param_1 + lVar2 + 0x18));
      *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x2c);
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x30);
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x34);
      *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x3c);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_ISKM_SkeletonInfo> @ 14a837930

void __cdecl UE::CoreUObject::Private::Construct<FWN_ISKM_SkeletonInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FWN_ISKM_SkeletonInfo> @ 14a837990

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_ISKM_SkeletonInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FWN_ISKM_SkeletonInfo> @ 14a8379e0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_ISKM_SkeletonInfo>(void *param_1)

{
  DestructItems<FWN_ISKM_SocketInfo,int>
            (*(FWN_ISKM_SocketInfo **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40))
  ;
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FWN_ISKM_SkeletonInfo> @ 14a837a30

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_ISKM_SkeletonInfo>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FWN_ISKM_SocketInfo *pFVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    pvVar6 = param_2;
    puVar7 = param_1;
    do {
      *puVar7 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar7);
      uVar5 = *(undefined8 *)((longlong)pvVar6 + 0x10);
      puVar7[1] = *(undefined8 *)((longlong)pvVar6 + 8);
      puVar7[2] = uVar5;
      FUtf8String::operator=((FUtf8String *)(puVar7 + 3),(FUtf8String *)((longlong)pvVar6 + 0x18));
      *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)pvVar6 + 0x28);
      pFVar1 = (ForAnyElementType *)(puVar7 + 7);
      *(undefined4 *)((longlong)puVar7 + 0x2c) = *(undefined4 *)((longlong)pvVar6 + 0x2c);
      *(undefined4 *)(puVar7 + 6) = *(undefined4 *)((longlong)pvVar6 + 0x30);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar6 + 0x38)) {
        DestructItems<FWN_ISKM_SocketInfo,int>
                  ((FWN_ISKM_SocketInfo *)pFVar1->Data,*(int *)(puVar7 + 8));
        iVar3 = *(int *)((longlong)pvVar6 + 0x40);
        piVar2 = (int *)((longlong)puVar7 + 0x44);
        pFVar4 = (FWN_ISKM_SocketInfo *)((ForAnyElementType *)((longlong)pvVar6 + 0x38))->Data;
        *(int *)(puVar7 + 8) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<FWN_ISKM_SocketInfo,FWN_ISKM_SocketInfo,int>(pFVar1->Data,pFVar4,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pvVar6 = (void *)((longlong)pvVar6 + 0x48);
      puVar7 = puVar7 + 9;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_ISKM_SocketInfo> @ 14a837f10

void __cdecl UE::CoreUObject::Private::Construct<FWN_ISKM_SocketInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FWN_ISKM_SocketInfo> @ 14a837f30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_ISKM_SocketInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FWN_ISKM_SocketInfo> @ 14a837f50

void __cdecl UE::CoreUObject::Private::Destruct<FWN_ISKM_SocketInfo>(void *param_1)

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

// Copy<FWN_ISKM_SocketInfo> @ 14a837f70

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_ISKM_SocketInfo>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 8);
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      if (pFVar4 != pFVar3) {
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        _Src = pFVar3->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar2 * 0x30);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_ISKM_CharacterPartInfo> @ 14a838770

void __cdecl UE::CoreUObject::Private::Construct<FWN_ISKM_CharacterPartInfo>(void *param_1)

{
  memset(param_1,0,0xb0);
  FWN_ISKM_CharacterPartInfo::FWN_ISKM_CharacterPartInfo(param_1);
  return;
}

// ConstructForTests<FWN_ISKM_CharacterPartInfo> @ 14a8387a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_ISKM_CharacterPartInfo>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x80) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x88) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x90) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x98) = (double)fVar3;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  return;
}

// Destruct<FWN_ISKM_CharacterPartInfo> @ 14a8387b0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_ISKM_CharacterPartInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x30);
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

// Copy<FWN_ISKM_CharacterPartInfo> @ 14a8387d0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_ISKM_CharacterPartInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = puVar3[(longlong)param_2 - (longlong)param_1];
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)((longlong)pvVar2 + 4);
      *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)((longlong)pvVar2 + 0xc);
      *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)((longlong)pvVar2 + 0x14);
      *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)((longlong)pvVar2 + 0x18);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x28);
      *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)((longlong)pvVar2 + 0x20);
      *(undefined8 *)(puVar3 + 0x28) = uVar1;
      FUtf8String::operator=
                ((FUtf8String *)(puVar3 + 0x30),(FUtf8String *)((longlong)pvVar2 + 0x30));
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x48);
      *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)((longlong)pvVar2 + 0x40);
      *(undefined8 *)(puVar3 + 0x48) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x58);
      *(undefined8 *)(puVar3 + 0x50) = *(undefined8 *)((longlong)pvVar2 + 0x50);
      *(undefined8 *)(puVar3 + 0x58) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x68);
      *(undefined8 *)(puVar3 + 0x60) = *(undefined8 *)((longlong)pvVar2 + 0x60);
      *(undefined8 *)(puVar3 + 0x68) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x78);
      *(undefined8 *)(puVar3 + 0x70) = *(undefined8 *)((longlong)pvVar2 + 0x70);
      *(undefined8 *)(puVar3 + 0x78) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x88);
      *(undefined8 *)(puVar3 + 0x80) = *(undefined8 *)((longlong)pvVar2 + 0x80);
      *(undefined8 *)(puVar3 + 0x88) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x98);
      *(undefined8 *)(puVar3 + 0x90) = *(undefined8 *)((longlong)pvVar2 + 0x90);
      *(undefined8 *)(puVar3 + 0x98) = uVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar2 + 0xa0) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar2 + 0xa0));
      }
      *(undefined8 *)(puVar3 + 0xa0) = *(undefined8 *)((longlong)pvVar2 + 0xa0);
      *(undefined4 *)(puVar3 + 0xa8) = *(undefined4 *)((longlong)pvVar2 + 0xa8);
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0xb0);
      puVar3 = puVar3 + 0xb0;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_ISKM_CharacterAnimationInfo> @ 14a838c40

void __cdecl UE::CoreUObject::Private::Construct<FWN_ISKM_CharacterAnimationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  FWN_ISKM_CharacterAnimationInfo::FWN_ISKM_CharacterAnimationInfo(param_1);
  return;
}

// ConstructForTests<FWN_ISKM_CharacterAnimationInfo> @ 14a838c80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWN_ISKM_CharacterAnimationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined1 *)((longlong)param_1 + 0x50) = 2;
  (((FUtf8String *)((longlong)param_1 + 0x70))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x70),0);
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FWN_ISKM_CharacterAnimationInfo> @ 14a838c90

void __cdecl UE::CoreUObject::Private::Destruct<FWN_ISKM_CharacterAnimationInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FWN_ISKM_CharacterAnimationInfo> @ 14a838ce0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_ISKM_CharacterAnimationInfo>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
      FUtf8String::operator=
                ((FUtf8String *)((longlong)param_1 + 0x18),(FUtf8String *)((longlong)param_2 + 0x18)
                );
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
      FUtf8String::operator=
                ((FUtf8String *)((longlong)param_1 + 0x40),(FUtf8String *)((longlong)param_2 + 0x40)
                );
      *(undefined1 *)((longlong)param_1 + 0x50) = *(undefined1 *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar2;
      FUtf8String::operator=
                ((FUtf8String *)((longlong)param_1 + 0x70),(FUtf8String *)((longlong)param_2 + 0x70)
                );
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x80) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x80));
      }
      *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x88) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x88));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x88);
      param_2 = (void *)((longlong)param_2 + 0x90);
      *(undefined8 *)((longlong)param_1 + 0x88) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x90);
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<AWN_ISKM_BoidsActor,AWN_ISKM_BoidsActor_*_&> @ 14a839cf0

AWN_ISKM_BoidsActor * __cdecl
UE::Core::Private::DereferenceIfNecessary<AWN_ISKM_BoidsActor,AWN_ISKM_BoidsActor_*_&>
          (AWN_ISKM_BoidsActor **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc<0,TFixedAllocator<8>::ForElementType<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData>_> @ 14a83d650

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<0,TFixedAllocator<8>::ForElementType<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData>_>
          (uint param_1,uint param_2,
          ForElementType<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData> *param_3,int *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_4;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (8 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_4 = 8;
  return iVar4;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_> @ 14a83d6c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FMaterialRenderProxy_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>
    ::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_> @ 14a83d7a0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_>
          (uint param_1,uint param_2,ForElementType<FMaterialRenderProxy_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

