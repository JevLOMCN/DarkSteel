// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 45

// Construct<FWN_TestInstanceSpawnInfo> @ 1494815d0

void __cdecl UE::CoreUObject::Private::Construct<FWN_TestInstanceSpawnInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0x40d9000000000000;
  *(undefined4 *)((longlong)param_1 + 8) = 1000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  return;
}

// ConstructForTests<FWN_TestInstanceSpawnInfo> @ 149481610

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_TestInstanceSpawnInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0x40d9000000000000;
  *(undefined4 *)((longlong)param_1 + 8) = 1000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  return;
}

// Destruct<FWN_TestInstanceSpawnInfo> @ 149481710

void __cdecl UE::CoreUObject::Private::Destruct<FWN_TestInstanceSpawnInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x28);
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

// Copy<FWN_TestInstanceSpawnInfo> @ 149481730

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_TestInstanceSpawnInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
      FUtf8String::operator=
                ((FUtf8String *)((longlong)param_1 + 0x28),
                 (FUtf8String *)((longlong)param_1 + lVar2 + 0x28));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_AmbientSoundInfo> @ 149481cf0

void __cdecl UE::CoreUObject::Private::Construct<FWN_AmbientSoundInfo>(void *param_1)

{
  undefined8 uVar1;
  FGuid *pFVar2;
  FGuid FStack_18;
  
  *(undefined ***)param_1 = &___7FWN_AmbientSoundInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FGuid::NewGuid((FGuid *)((longlong)param_1 + 0x40));
  if (((*(int *)((longlong)param_1 + 0x4c) == 0 && *(int *)((longlong)param_1 + 0x48) == 0) &&
      *(int *)((longlong)param_1 + 0x44) == 0) && *(int *)((longlong)param_1 + 0x40) == 0) {
    pFVar2 = FGuid::NewGuid(&FStack_18);
    uVar1 = *(undefined8 *)&pFVar2->C;
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)pFVar2;
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  }
  return;
}

// ConstructForTests<FWN_AmbientSoundInfo> @ 149481d00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_AmbientSoundInfo>(void *param_1)

{
  undefined8 uVar1;
  FGuid *pFVar2;
  FGuid FStack_18;
  
  *(undefined ***)param_1 = &___7FWN_AmbientSoundInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FGuid::NewGuid((FGuid *)((longlong)param_1 + 0x40));
  if (((*(int *)((longlong)param_1 + 0x4c) == 0 && *(int *)((longlong)param_1 + 0x48) == 0) &&
      *(int *)((longlong)param_1 + 0x44) == 0) && *(int *)((longlong)param_1 + 0x40) == 0) {
    pFVar2 = FGuid::NewGuid(&FStack_18);
    uVar1 = *(undefined8 *)&pFVar2->C;
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)pFVar2;
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  }
  return;
}

// Destruct<FWN_AmbientSoundInfo> @ 149481d10

void __cdecl UE::CoreUObject::Private::Destruct<FWN_AmbientSoundInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FWN_AmbientSoundInfo> @ 149481db0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_AmbientSoundInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) = uVar1;
    FUtf8String::operator=
              ((FUtf8String *)((longlong)pvVar2 + 0x20),
               (FUtf8String *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar2 + 0x30) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x34) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x38) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x3c) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x3c - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x50);
  }
  return true;
}

// Construct<FWN_FootStepTableRow> @ 149481f10

void __cdecl UE::CoreUObject::Private::Construct<FWN_FootStepTableRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_FootStepTableRow__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FWN_FootStepTableRow> @ 149481f30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_FootStepTableRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWN_FootStepTableRow__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FWN_FootStepTableRow> @ 149481f50

void __cdecl UE::CoreUObject::Private::Destruct<FWN_FootStepTableRow>(void *param_1)

{
  DestructItems<FWN_FootStep_Consumer,int>
            (*(FWN_FootStep_Consumer **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FWN_FootStepTableRow> @ 149481f90

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_FootStepTableRow>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FWN_FootStep_Consumer *pFVar4;
  void *pvVar5;
  ForAnyElementType *pFVar6;
  
  pvVar5 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pFVar6 = (ForAnyElementType *)((longlong)pvVar5 + 0x10);
    *(undefined8 *)((longlong)pvVar5 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar5);
    if (pFVar6 != pFVar1) {
      DestructItems<FWN_FootStep_Consumer,int>
                ((FWN_FootStep_Consumer *)pFVar6->Data,*(int *)((longlong)pvVar5 + 0x18));
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x18 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x1c);
      pFVar4 = (FWN_FootStep_Consumer *)pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,iVar3,*piVar2,pFVar6,iVar3,piVar2);
        ConstructItems<FWN_FootStep_Consumer,FWN_FootStep_Consumer,int>(pFVar6->Data,pFVar4,iVar3);
      }
    }
    pvVar5 = (void *)((longlong)pvVar5 + 0x20);
  }
  return true;
}

// Construct<FWN_FootStep_Consumer> @ 149482270

void __cdecl UE::CoreUObject::Private::Construct<FWN_FootStep_Consumer>(void *param_1)

{
  memset(param_1,0,0xe0);
  FWN_FootStep_Consumer::FWN_FootStep_Consumer(param_1);
  return;
}

// ConstructForTests<FWN_FootStep_Consumer> @ 1494822a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_FootStep_Consumer>(void *param_1)

{
  undefined8 uStackX_8;
  TVector4<float>_u_0 TStack_18;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x88))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x88),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x70),(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  (((FUtf8String *)((longlong)param_1 + 0xb0))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0xb0),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x98),(FObjectPtr)&uStackX_8);
  TStack_18._0_8_ = ___xmm_3f666666000000000000000000000000;
  TStack_18._8_8_ = _UNK_151e4ec98;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3e99999a;
  *(undefined2 *)((longlong)param_1 + 200) = 0x100;
  FLinearColor::FLinearColor
            ((FLinearColor *)((longlong)param_1 + 0xcc),(TVector4<float> *)&TStack_18._s_0);
  return;
}

// Destruct<FWN_FootStep_Consumer> @ 1494822b0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_FootStep_Consumer>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FWN_FootStep_Consumer> @ 1494822c0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_FootStep_Consumer>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    pFVar1 = (FString *)((longlong)param_1 + 0x10);
    if (pFVar1 != (FString *)((longlong)param_2 + 0x10)) {
      DestructItems<FString,int>
                ((FString *)(pFVar1->Data).AllocatorInstance.Data,
                 (((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum);
      iVar3 = (((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum;
      piVar2 = &(((FString *)((longlong)param_1 + 0x10))->Data).ArrayMax;
      pFVar5 = (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
      iVar4 = *piVar2;
      (((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,iVar4,(ForAnyElementType *)pFVar1,iVar3,piVar2);
        ConstructItems<FString,FString,int>
                  ((pFVar1->Data).AllocatorInstance.Data,(FString *)pFVar5,iVar3);
      }
    }
    TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0x20),
                (TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0x20));
    (((FString *)((longlong)param_1 + 0x70))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x70))->Data).AllocatorInstance.Data;
    iVar3 = (((FString *)((longlong)param_2 + 0x70))->Data).ArrayMax;
    pFVar5 = (((FString *)((longlong)param_2 + 0x80))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x70))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x70))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x70))->Data).ArrayMax = iVar3;
    (((FString *)((longlong)param_1 + 0x80))->Data).AllocatorInstance.Data = pFVar5;
    FUtf8String::operator=
              ((FUtf8String *)&(((FString *)((longlong)param_1 + 0x80))->Data).ArrayNum,
               (FUtf8String *)&(((FString *)((longlong)param_2 + 0x80))->Data).ArrayNum);
    iVar3 = (((FString *)((longlong)param_2 + 0x90))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x90))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x90))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x90))->Data).ArrayMax = iVar3;
    iVar3 = (((FString *)((longlong)param_2 + 0xa0))->Data).ArrayNum;
    iVar4 = (((FString *)((longlong)param_2 + 0xa0))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0xa0))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0xa0))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0xa0))->Data).ArrayNum = iVar3;
    (((FString *)((longlong)param_1 + 0xa0))->Data).ArrayMax = iVar4;
    FUtf8String::operator=
              ((FUtf8String *)((longlong)param_1 + 0xb0),(FUtf8String *)((longlong)param_2 + 0xb0));
    *(undefined4 *)&(((FString *)((longlong)param_1 + 0xc0))->Data).AllocatorInstance.Data =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0xc0))->Data).AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0xc0))->Data).AllocatorInstance.Data + 4) =
         *(undefined4 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0xc0))->Data).AllocatorInstance.Data + 4);
    *(char *)&(((FString *)((longlong)param_1 + 0xc0))->Data).ArrayNum =
         (char)(((FString *)((longlong)param_2 + 0xc0))->Data).ArrayNum;
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0xc0))->Data).ArrayNum + 1) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0xc0))->Data).ArrayNum + 1);
    uVar6 = *(undefined8 *)
             ((longlong)&(((FString *)((longlong)param_2 + 0xd0))->Data).AllocatorInstance.Data + 4)
    ;
    *(undefined8 *)&(((FString *)((longlong)param_1 + 0xc0))->Data).ArrayMax =
         *(undefined8 *)&(((FString *)((longlong)param_2 + 0xc0))->Data).ArrayMax;
    *(undefined8 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0xd0))->Data).AllocatorInstance.Data + 4) = uVar6
    ;
    param_1 = (FString *)((longlong)param_1 + 0xe0);
    param_2 = (FString *)((longlong)param_2 + 0xe0);
  }
  return true;
}

// Construct<FWN_PakVersionList> @ 149482dd0

void __cdecl UE::CoreUObject::Private::Construct<FWN_PakVersionList>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  return;
}

// ConstructForTests<FWN_PakVersionList> @ 149482df0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_PakVersionList>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  return;
}

// Destruct<FWN_PakVersionList> @ 149482e10

void __cdecl UE::CoreUObject::Private::Destruct<FWN_PakVersionList>(void *param_1)

{
  DestructItems<FWN_PakVersion,int>
            (*(FWN_PakVersion **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FWN_PakVersionList> @ 149482ee0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_PakVersionList>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FWN_PakVersion *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x10);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar5);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar5 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar5 + 8);
      if (pFVar4 != (ForAnyElementType *)((longlong)param_1 + lVar5 + 0x10)) {
        DestructItems<FWN_PakVersion,int>
                  ((FWN_PakVersion *)pFVar4->Data,*(int *)((longlong)param_1 + 0x18));
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x18);
        piVar1 = (int *)((longlong)param_1 + 0x1c);
        pFVar3 = (FWN_PakVersion *)((ForAnyElementType *)((longlong)param_1 + lVar5 + 0x10))->Data;
        *(int *)((longlong)param_1 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          ConstructItems<FWN_PakVersion,FWN_PakVersion,int>(pFVar4->Data,pFVar3,iVar2);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_PakVersion> @ 149483120

void __cdecl UE::CoreUObject::Private::Construct<FWN_PakVersion>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined2 *)param_1 = 0x100;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// ConstructForTests<FWN_PakVersion> @ 149483160

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_PakVersion>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// Destruct<FWN_PakVersion> @ 1494831e0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_PakVersion>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FWN_PakVersion> @ 149483230

bool __cdecl UE::CoreUObject::Private::Copy<FWN_PakVersion>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      puVar2[1] = *(undefined1 *)((longlong)pvVar1 + 1);
      puVar2[2] = *(undefined1 *)((longlong)pvVar1 + 2);
      ::FString::operator=((FString *)(puVar2 + 8),(FString *)((longlong)pvVar1 + 8));
      ::FString::operator=((FString *)(puVar2 + 0x18),(FString *)((longlong)pvVar1 + 0x18));
      ::FString::operator=((FString *)(puVar2 + 0x28),(FString *)((longlong)pvVar1 + 0x28));
      *(undefined4 *)(puVar2 + 0x38) = *(undefined4 *)((longlong)pvVar1 + 0x38);
      *(undefined4 *)(puVar2 + 0x3c) = *(undefined4 *)((longlong)pvVar1 + 0x3c);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x40);
      puVar2 = puVar2 + 0x40;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_NavInfo> @ 149483420

void __cdecl UE::CoreUObject::Private::Construct<FWN_NavInfo>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0xffffffffffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x32;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  return;
}

// ConstructForTests<FWN_NavInfo> @ 1494834a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_NavInfo>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x32;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  return;
}

// Destruct<FWN_NavInfo> @ 149483510

void __cdecl UE::CoreUObject::Private::Destruct<FWN_NavInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FWN_NavInfo> @ 1494836e0

bool __cdecl UE::CoreUObject::Private::Copy<FWN_NavInfo>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  int local_res18;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    local_res18 = param_3;
    do {
      pFVar2 = (ForAnyElementType *)((longlong)pFVar6 + ((longlong)param_2 - (longlong)param_1));
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
                    (1,1,iVar3,iVar4,pFVar6,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar6->Data,pFVar5,(longlong)iVar3);
          }
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar6 + 2),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 2));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar6 + 4),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 4));
      local_res18 = local_res18 + -1;
      *(undefined4 *)&pFVar6[6].Data = *(undefined4 *)&pFVar2[6].Data;
      *(undefined4 *)((longlong)&pFVar6[6].Data + 4) =
           *(undefined4 *)((longlong)&pFVar2[6].Data + 4);
      pFVar5 = pFVar2[8].Data;
      pFVar6[7].Data = pFVar2[7].Data;
      pFVar6[8].Data = pFVar5;
      pFVar6[9].Data = pFVar2[9].Data;
      pFVar5 = pFVar2[0xb].Data;
      pFVar6[10].Data = pFVar2[10].Data;
      pFVar6[0xb].Data = pFVar5;
      pFVar6[0xc].Data = pFVar2[0xc].Data;
      *(undefined4 *)&pFVar6[0xd].Data = *(undefined4 *)&pFVar2[0xd].Data;
      *(undefined1 *)((longlong)&pFVar6[0xd].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[0xd].Data + 4);
      pFVar6 = pFVar6 + 0xe;
    } while (local_res18 != 0);
  }
  return true;
}

// Construct<FWN_BindlessISM_TextureCollectionBinding> @ 149483bb0

void __cdecl
UE::CoreUObject::Private::Construct<FWN_BindlessISM_TextureCollectionBinding>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWN_BindlessISM_TextureCollectionBinding> @ 149483bd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWN_BindlessISM_TextureCollectionBinding>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWN_BindlessISM_TextureCollectionBinding> @ 149483bf0

void __cdecl
UE::CoreUObject::Private::Destruct<FWN_BindlessISM_TextureCollectionBinding>(void *param_1)

{
  return;
}

// Copy<FWN_BindlessISM_TextureCollectionBinding> @ 149483c00

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_BindlessISM_TextureCollectionBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_BindlessISM_MaterialInterface> @ 149484060

void __cdecl UE::CoreUObject::Private::Construct<FWN_BindlessISM_MaterialInterface>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FWN_BindlessISM_MaterialInterface> @ 149484080

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWN_BindlessISM_MaterialInterface>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FWN_BindlessISM_MaterialInterface> @ 1494840a0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_BindlessISM_MaterialInterface>(void *param_1)

{
  return;
}

// Copy<FWN_BindlessISM_MaterialInterface> @ 1494840b0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_BindlessISM_MaterialInterface>
          (void *param_1,void *param_2,int param_3)

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
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_VolumeObserverInfo> @ 149484e50

void __cdecl UE::CoreUObject::Private::Construct<FWN_VolumeObserverInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xbff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xbf800000;
  return;
}

// ConstructForTests<FWN_VolumeObserverInfo> @ 149484e80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_VolumeObserverInfo>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xbff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xbf800000;
  return;
}

// Destruct<FWN_VolumeObserverInfo> @ 149484eb0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_VolumeObserverInfo>(void *param_1)

{
  return;
}

// Copy<FWN_VolumeObserverInfo> @ 149484ec0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_VolumeObserverInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FWN_AsyncCollision,FWN_AsyncCollision_*_&> @ 149485640

FWN_AsyncCollision * __cdecl
UE::Core::Private::DereferenceIfNecessary<FWN_AsyncCollision,FWN_AsyncCollision_*_&>
          (FWN_AsyncCollision **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FWN_CurlHttpStream,FWN_CurlHttpStream_*_&> @ 149485660

FWN_CurlHttpStream * __cdecl
UE::Core::Private::DereferenceIfNecessary<FWN_CurlHttpStream,FWN_CurlHttpStream_*_&>
          (FWN_CurlHttpStream **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UWN_PakDownloader,UWN_PakDownloader_*_&> @ 149485680

UWN_PakDownloader * __cdecl
UE::Core::Private::DereferenceIfNecessary<UWN_PakDownloader,UWN_PakDownloader_*_&>
          (UWN_PakDownloader **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UWN_VolumeComponent_*>_> @ 14948b640

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UWN_VolumeComponent_*>_>
          (ushort param_1,ForElementType<UWN_VolumeComponent_*> *param_2,int *param_3)

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
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UWN_VolumeComponent_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UWN_VolumeComponent_*>_> @ 14948b710

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UWN_VolumeComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UWN_VolumeComponent_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UWN_VolumeComponent_*>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

