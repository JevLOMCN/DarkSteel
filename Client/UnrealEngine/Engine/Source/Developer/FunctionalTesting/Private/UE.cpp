// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 56

// Construct<FTraceChannelTestBatchOptions> @ 148c6f900

void __cdecl UE::CoreUObject::Private::Construct<FTraceChannelTestBatchOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 1;
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// ConstructForTests<FTraceChannelTestBatchOptions> @ 148c6f920

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTraceChannelTestBatchOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 1;
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// Destruct<FTraceChannelTestBatchOptions> @ 148c6f950

void __cdecl UE::CoreUObject::Private::Destruct<FTraceChannelTestBatchOptions>(void *param_1)

{
  return;
}

// Copy<FTraceChannelTestBatchOptions> @ 148c6f9e0

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceChannelTestBatchOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined2 *)(lVar3 + 4 + (longlong)param_1);
      uVar1 = *(undefined1 *)(lVar3 + 6 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar2;
      *(undefined1 *)((longlong)param_1 + 6) = uVar1;
      param_1 = (void *)((longlong)param_1 + 7);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAITestSpawnSet> @ 148c72af0

void __cdecl UE::CoreUObject::Private::Construct<FAITestSpawnSet>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) | 1;
  *(undefined ***)param_1 = &___7FAITestSpawnSet__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FAITestSpawnSet> @ 148c72b20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAITestSpawnSet>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) | 1;
  *(undefined ***)param_1 = &___7FAITestSpawnSet__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FAITestSpawnSet> @ 148c72b50

void __cdecl UE::CoreUObject::Private::Destruct<FAITestSpawnSet>(void *param_1)

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

// Copy<FAITestSpawnSet> @ 148c72b80

bool __cdecl
UE::CoreUObject::Private::Copy<FAITestSpawnSet>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FAITestSpawnInfo *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(uint *)((longlong)param_1 + 0x10) =
         *(uint *)((longlong)param_1 + 0x10) ^
         (*(uint *)((longlong)param_1 + 0x10) ^ *(uint *)((longlong)param_2 + 0x10)) & 1;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x18) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x18));
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      pFVar4 = (FAITestSpawnInfo *)((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FAITestSpawnInfo,FAITestSpawnInfo,int>(pFVar1->Data,pFVar4,iVar3);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FAITestSpawnSetBase> @ 148c73180

void __cdecl UE::CoreUObject::Private::Construct<FAITestSpawnSetBase>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) | 1;
  *(undefined ***)param_1 = &___7FAITestSpawnSetBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FAITestSpawnSetBase> @ 148c731e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAITestSpawnSetBase>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) | 1;
  *(undefined ***)param_1 = &___7FAITestSpawnSetBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FAITestSpawnSetBase> @ 148c73200

void __cdecl UE::CoreUObject::Private::Destruct<FAITestSpawnSetBase>(void *param_1)

{
  return;
}

// Copy<FAITestSpawnSetBase> @ 148c732e0

bool __cdecl
UE::CoreUObject::Private::Copy<FAITestSpawnSetBase>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(uint *)((longlong)pvVar2 + 0x10) =
         *(uint *)((longlong)pvVar2 + 0x10) ^
         (*(uint *)((longlong)pvVar2 + 0x10) ^
         *(uint *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1))) & 1;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x20);
  }
  return true;
}

// Construct<FPendingDelayedSpawn> @ 148c73980

void __cdecl UE::CoreUObject::Private::Construct<FPendingDelayedSpawn>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  return;
}

// ConstructForTests<FPendingDelayedSpawn> @ 148c739a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPendingDelayedSpawn>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  return;
}

// Destruct<FPendingDelayedSpawn> @ 148c739c0

void __cdecl UE::CoreUObject::Private::Destruct<FPendingDelayedSpawn>(void *param_1)

{
  return;
}

// Copy<FPendingDelayedSpawn> @ 148c739d0

bool __cdecl
UE::CoreUObject::Private::Copy<FPendingDelayedSpawn>(void *param_1,void *param_2,int param_3)

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

// Construct<FAutomationScreenshotOptions> @ 148c73b10

void __cdecl UE::CoreUObject::Private::Construct<FAutomationScreenshotOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3e4ccccd;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 5;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x46) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ca3d70a;
  *(undefined2 *)((longlong)param_1 + 0x50) = 1;
  *(undefined1 *)((longlong)param_1 + 0x52) = 1;
  return;
}

// ConstructForTests<FAutomationScreenshotOptions> @ 148c73bb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAutomationScreenshotOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3e4ccccd;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 5;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x46) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ca3d70a;
  *(undefined2 *)((longlong)param_1 + 0x50) = 1;
  *(undefined1 *)((longlong)param_1 + 0x52) = 1;
  return;
}

// Destruct<FAutomationScreenshotOptions> @ 148c73c10

void __cdecl UE::CoreUObject::Private::Destruct<FAutomationScreenshotOptions>(void *param_1)

{
  return;
}

// Copy<FAutomationScreenshotOptions> @ 148c73c20

bool __cdecl
UE::CoreUObject::Private::Copy<FAutomationScreenshotOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      uVar2 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar2;
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)((longlong)pvVar3 + 0x10);
      *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)((longlong)pvVar3 + 0x14);
      *(undefined1 *)(puVar4 + 3) = *(undefined1 *)((longlong)pvVar3 + 0x18);
      puVar4[4] = *(undefined8 *)((longlong)pvVar3 + 0x20);
      *(undefined1 *)(puVar4 + 5) = *(undefined1 *)((longlong)pvVar3 + 0x28);
      *(undefined1 *)((longlong)puVar4 + 0x29) = *(undefined1 *)((longlong)pvVar3 + 0x29);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar3 + 0x30) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar3 + 0x30));
      }
      puVar4[6] = *(undefined8 *)((longlong)pvVar3 + 0x30);
      puVar4[7] = *(undefined8 *)((longlong)pvVar3 + 0x38);
      *(undefined1 *)(puVar4 + 8) = *(undefined1 *)((longlong)pvVar3 + 0x40);
      *(undefined4 *)((longlong)puVar4 + 0x41) = *(undefined4 *)((longlong)pvVar3 + 0x41);
      *(undefined2 *)((longlong)puVar4 + 0x45) = *(undefined2 *)((longlong)pvVar3 + 0x45);
      *(undefined4 *)(puVar4 + 9) = *(undefined4 *)((longlong)pvVar3 + 0x48);
      *(undefined4 *)((longlong)puVar4 + 0x4c) = *(undefined4 *)((longlong)pvVar3 + 0x4c);
      *(undefined1 *)(puVar4 + 10) = *(undefined1 *)((longlong)pvVar3 + 0x50);
      *(undefined1 *)((longlong)puVar4 + 0x51) = *(undefined1 *)((longlong)pvVar3 + 0x51);
      *(undefined1 *)((longlong)puVar4 + 0x52) = *(undefined1 *)((longlong)pvVar3 + 0x52);
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x58);
      puVar4 = puVar4 + 0xb;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAITestSpawnInfo> @ 148c74130

void __cdecl UE::CoreUObject::Private::Construct<FAITestSpawnInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FAITestSpawnInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0xff;
  return;
}

// ConstructForTests<FAITestSpawnInfo> @ 148c741b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAITestSpawnInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FAITestSpawnInfo__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0xff;
  return;
}

// Destruct<FAITestSpawnInfo> @ 148c74230

void __cdecl UE::CoreUObject::Private::Destruct<FAITestSpawnInfo>(void *param_1)

{
  return;
}

// Copy<FAITestSpawnInfo> @ 148c74290

bool __cdecl
UE::CoreUObject::Private::Copy<FAITestSpawnInfo>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x10) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x14) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x18) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x1c) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x1c - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x28) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar2 + 0x38) =
         *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x48);
  }
  return true;
}

// Construct<FComparisonToleranceAmount> @ 148c74420

void __cdecl UE::CoreUObject::Private::Construct<FComparisonToleranceAmount>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0xff00;
  return;
}

// ConstructForTests<FComparisonToleranceAmount> @ 148c74440

void __cdecl UE::CoreUObject::Private::ConstructForTests<FComparisonToleranceAmount>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0xff00;
  return;
}

// Destruct<FComparisonToleranceAmount> @ 148c74460

void __cdecl UE::CoreUObject::Private::Destruct<FComparisonToleranceAmount>(void *param_1)

{
  return;
}

// Copy<FComparisonToleranceAmount> @ 148c744a0

bool __cdecl
UE::CoreUObject::Private::Copy<FComparisonToleranceAmount>(void *param_1,void *param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined2 *)(lVar2 + 4 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar1;
      param_1 = (void *)((longlong)param_1 + 6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAITestSpawnInfoBase> @ 148c74830

void __cdecl UE::CoreUObject::Private::Construct<FAITestSpawnInfoBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 1;
  *(undefined ***)param_1 = &___7FAITestSpawnInfoBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FAITestSpawnInfoBase> @ 148c74860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAITestSpawnInfoBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 1;
  *(undefined ***)param_1 = &___7FAITestSpawnInfoBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FAITestSpawnInfoBase> @ 148c74890

void __cdecl UE::CoreUObject::Private::Destruct<FAITestSpawnInfoBase>(void *param_1)

{
  return;
}

// Copy<FAITestSpawnInfoBase> @ 148c74aa0

bool __cdecl
UE::CoreUObject::Private::Copy<FAITestSpawnInfoBase>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x10) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x14) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x18) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x1c) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x1c - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x28);
  }
  return true;
}

// Construct<FTraceQueryTestResultsInner> @ 148c75c00

void __cdecl UE::CoreUObject::Private::Construct<FTraceQueryTestResultsInner>(void *param_1)

{
  memset(param_1,0,0x520);
  FTraceQueryTestResultsInner::FTraceQueryTestResultsInner(param_1);
  return;
}

// ConstructForTests<FTraceQueryTestResultsInner> @ 148c75c40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceQueryTestResultsInner>(void *param_1)

{
  memset(param_1,0,0x100);
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined1 *)((longlong)param_1 + 0x140) = 0;
  memset((void *)((longlong)param_1 + 0x148),0,0x100);
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined1 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined1 *)((longlong)param_1 + 0x288) = 0;
  memset((void *)((longlong)param_1 + 0x290),0,0x100);
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined8 *)((longlong)param_1 + 0x350) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x390) = 0;
  *(undefined8 *)((longlong)param_1 + 0x398) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d0) = 0;
  memset((void *)((longlong)param_1 + 0x3d8),0,0x100);
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x490) = 0;
  *(undefined8 *)((longlong)param_1 + 0x498) = 0;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x4a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x4d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x508) = 0;
  *(undefined8 *)((longlong)param_1 + 0x510) = 0;
  *(undefined1 *)((longlong)param_1 + 0x518) = 0;
  return;
}

// Destruct<FTraceQueryTestResultsInner> @ 148c75c50

void __cdecl UE::CoreUObject::Private::Destruct<FTraceQueryTestResultsInner>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x508) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x508));
  }
  if (*(void **)((longlong)param_1 + 0x4f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x4f8));
  }
  if (*(void **)((longlong)param_1 + 0x3c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3c0));
  }
  if (*(void **)((longlong)param_1 + 0x3b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3b0));
  }
  if (*(void **)((longlong)param_1 + 0x278) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x278));
  }
  if (*(void **)((longlong)param_1 + 0x268) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x268));
  }
  if (*(void **)((longlong)param_1 + 0x130) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x130));
  }
  if (*(void **)((longlong)param_1 + 0x120) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x120));
    return;
  }
  return;
}

// Copy<FTraceQueryTestResultsInner> @ 148c75c60

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceQueryTestResultsInner>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FTraceQueryTestResultsInnerMost::operator=(param_1,param_2);
    FTraceQueryTestResultsInnerMost::operator=
              ((FTraceQueryTestResultsInnerMost *)((longlong)param_1 + 0x148),
               (FTraceQueryTestResultsInnerMost *)((longlong)param_2 + 0x148));
    FTraceQueryTestResultsInnerMost::operator=
              ((FTraceQueryTestResultsInnerMost *)((longlong)param_1 + 0x290),
               (FTraceQueryTestResultsInnerMost *)((longlong)param_2 + 0x290));
    FTraceQueryTestResultsInnerMost::operator=
              ((FTraceQueryTestResultsInnerMost *)((longlong)param_1 + 0x3d8),
               (FTraceQueryTestResultsInnerMost *)((longlong)param_2 + 0x3d8));
    param_2 = (void *)((longlong)param_2 + 0x520);
    param_1 = (FTraceQueryTestResultsInnerMost *)((longlong)param_1 + 0x520);
  }
  return true;
}

// Construct<FTraceQueryTestResultsInnerMost> @ 148c768c0

void __cdecl UE::CoreUObject::Private::Construct<FTraceQueryTestResultsInnerMost>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x119) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x141) = 0;
  *(undefined2 *)((longlong)param_1 + 0x145) = 0;
  *(undefined1 *)((longlong)param_1 + 0x147) = 0;
  memset(param_1,0,0x100);
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined1 *)((longlong)param_1 + 0x140) = 0;
  return;
}

// ConstructForTests<FTraceQueryTestResultsInnerMost> @ 148c76990

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTraceQueryTestResultsInnerMost>(void *param_1)

{
  memset(param_1,0,0x100);
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined1 *)((longlong)param_1 + 0x140) = 0;
  return;
}

// Destruct<FTraceQueryTestResultsInnerMost> @ 148c76a40

void __cdecl UE::CoreUObject::Private::Destruct<FTraceQueryTestResultsInnerMost>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x130) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x130));
  }
  if (*(void **)((longlong)param_1 + 0x120) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x120));
    return;
  }
  return;
}

// Copy<FTraceQueryTestResultsInnerMost> @ 148c76b00

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceQueryTestResultsInnerMost>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FHitResult *pFVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  
  if (param_3 != 0) {
    puVar9 = param_1;
    pvVar10 = param_2;
    do {
      lVar8 = 2;
      puVar6 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar9);
      puVar7 = puVar9;
      do {
        uVar5 = puVar6[1];
        *puVar7 = *puVar6;
        puVar7[1] = uVar5;
        uVar5 = puVar6[3];
        puVar7[2] = puVar6[2];
        puVar7[3] = uVar5;
        uVar5 = puVar6[5];
        puVar7[4] = puVar6[4];
        puVar7[5] = uVar5;
        uVar5 = puVar6[7];
        puVar7[6] = puVar6[6];
        puVar7[7] = uVar5;
        uVar5 = puVar6[9];
        puVar7[8] = puVar6[8];
        puVar7[9] = uVar5;
        uVar5 = puVar6[0xb];
        puVar7[10] = puVar6[10];
        puVar7[0xb] = uVar5;
        uVar5 = puVar6[0xd];
        puVar7[0xc] = puVar6[0xc];
        puVar7[0xd] = uVar5;
        uVar5 = puVar6[0xf];
        puVar7[0xe] = puVar6[0xe];
        puVar7[0xf] = uVar5;
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 0x10;
        puVar7 = puVar7 + 0x10;
      } while (lVar8 != 0);
      uVar5 = *(undefined8 *)((longlong)pvVar10 + 0x108);
      pFVar2 = (ForAnyElementType *)(puVar9 + 0x24);
      puVar9[0x20] = *(undefined8 *)((longlong)pvVar10 + 0x100);
      puVar9[0x21] = uVar5;
      puVar9[0x22] = *(undefined8 *)((longlong)pvVar10 + 0x110);
      *(undefined1 *)(puVar9 + 0x23) = *(undefined1 *)((longlong)pvVar10 + 0x118);
      if (pFVar2 != (ForAnyElementType *)((longlong)pvVar10 + 0x120)) {
        iVar3 = *(int *)((longlong)pvVar10 + 0x128);
        piVar1 = (int *)((longlong)puVar9 + 300);
        pFVar4 = (FHitResult *)((ForAnyElementType *)((longlong)pvVar10 + 0x120))->Data;
        *(int *)(puVar9 + 0x25) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
          ConstructItems<FHitResult,FHitResult,int>(pFVar2->Data,pFVar4,iVar3);
        }
      }
      pFVar2 = (ForAnyElementType *)(puVar9 + 0x26);
      if (pFVar2 != (ForAnyElementType *)((longlong)pvVar10 + 0x130)) {
        iVar3 = *(int *)((longlong)pvVar10 + 0x138);
        piVar1 = (int *)((longlong)puVar9 + 0x13c);
        _Src = ((ForAnyElementType *)((longlong)pvVar10 + 0x130))->Data;
        *(int *)(puVar9 + 0x27) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,iVar3,*piVar1,pFVar2,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar2->Data,_Src,(longlong)iVar3 * 0x18);
          }
        }
      }
      *(undefined1 *)(puVar9 + 0x28) = *(undefined1 *)((longlong)pvVar10 + 0x140);
      param_3 = param_3 + -1;
      puVar9 = puVar9 + 0x29;
      pvVar10 = (void *)((longlong)pvVar10 + 0x148);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAutomationWaitForLoadingOptions> @ 148c772c0

void __cdecl UE::CoreUObject::Private::Construct<FAutomationWaitForLoadingOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FAutomationWaitForLoadingOptions> @ 148c77310

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAutomationWaitForLoadingOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FAutomationWaitForLoadingOptions> @ 148c77320

void __cdecl UE::CoreUObject::Private::Destruct<FAutomationWaitForLoadingOptions>(void *param_1)

{
  return;
}

// Copy<FAutomationWaitForLoadingOptions> @ 148c77330

bool __cdecl
UE::CoreUObject::Private::Copy<FAutomationWaitForLoadingOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTraceQueryTestNames> @ 148c774c0

void __cdecl UE::CoreUObject::Private::Construct<FTraceQueryTestNames>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FTraceQueryTestNames> @ 148c774e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceQueryTestNames>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FTraceQueryTestNames> @ 148c77500

void __cdecl UE::CoreUObject::Private::Destruct<FTraceQueryTestNames>(void *param_1)

{
  return;
}

// Copy<FTraceQueryTestNames> @ 148c77550

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceQueryTestNames>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<AFunctionalAITestBase,AFunctionalAITestBase_*_&> @ 148c7a0f0

AFunctionalAITestBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<AFunctionalAITestBase,AFunctionalAITestBase_*_&>
          (AFunctionalAITestBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AScreenshotFunctionalTest,AScreenshotFunctionalTest_*_&> @ 148c7a110

AScreenshotFunctionalTest * __cdecl
UE::Core::Private::DereferenceIfNecessary<AScreenshotFunctionalTest,AScreenshotFunctionalTest_*_&>
          (AScreenshotFunctionalTest **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AScreenshotFunctionalTestBase,AScreenshotFunctionalTestBase_*_&> @ 148c7a130

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AScreenshotFunctionalTestBase * __cdecl
UE::Core::Private::
DereferenceIfNecessary<AScreenshotFunctionalTestBase,AScreenshotFunctionalTestBase_*_&>
          (AScreenshotFunctionalTestBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FAutomationScreenshotTaker,FAutomationScreenshotTaker_*_&> @ 148c7a150

FAutomationScreenshotTaker * __cdecl
UE::Core::Private::DereferenceIfNecessary<FAutomationScreenshotTaker,FAutomationScreenshotTaker_*_&>
          (FAutomationScreenshotTaker **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTakeScreenshotAfterTimeLatentAction,FTakeScreenshotAfterTimeLatentAction_*_&> @ 148c7a170

FTakeScreenshotAfterTimeLatentAction * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FTakeScreenshotAfterTimeLatentAction,FTakeScreenshotAfterTimeLatentAction_*_&>
          (FTakeScreenshotAfterTimeLatentAction **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FWaitForLoadingToFinish,FWaitForLoadingToFinish_*_&> @ 148c7a190

FWaitForLoadingToFinish * __cdecl
UE::Core::Private::DereferenceIfNecessary<FWaitForLoadingToFinish,FWaitForLoadingToFinish_*_&>
          (FWaitForLoadingToFinish **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FWaitForScreenshotComparisonLatentAction,FWaitForScreenshotComparisonLatentAction_*_&> @ 148c7a1b0

FWaitForScreenshotComparisonLatentAction * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FWaitForScreenshotComparisonLatentAction,FWaitForScreenshotComparisonLatentAction_*_&>
          (FWaitForScreenshotComparisonLatentAction **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UFunctionalTestingManager,UFunctionalTestingManager_*_&> @ 148c7a1d0

UFunctionalTestingManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<UFunctionalTestingManager,UFunctionalTestingManager_*_&>
          (UFunctionalTestingManager **param_1)

{
  return *param_1;
}

