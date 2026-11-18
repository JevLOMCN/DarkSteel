// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 51

// Construct<FGameplayDebuggerExtensionConfig> @ 146d37b80

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerExtensionConfig>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FGameplayDebuggerExtensionConfig> @ 146d37ba0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerExtensionConfig>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FGameplayDebuggerExtensionConfig> @ 146d37bc0

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerExtensionConfig>(void *param_1)

{
  DestructItems<FGameplayDebuggerInputConfig,int>
            (*(FGameplayDebuggerInputConfig **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGameplayDebuggerExtensionConfig> @ 146d37c10

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerExtensionConfig>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(undefined1 *)((longlong)param_1 + 0x10) =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x18),
               (TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x18));
    param_2 = (void *)((longlong)param_2 + 0x28);
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Construct<FGameplayDebuggerCategoryConfig> @ 146d37df0

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerCategoryConfig>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x202;
  *(undefined1 *)((longlong)param_1 + 0x16) = 2;
  return;
}

// ConstructForTests<FGameplayDebuggerCategoryConfig> @ 146d37e60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerCategoryConfig>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x202;
  *(undefined1 *)((longlong)param_1 + 0x16) = 2;
  return;
}

// Destruct<FGameplayDebuggerCategoryConfig> @ 146d37e90

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerCategoryConfig>(void *param_1)

{
  DestructItems<FGameplayDebuggerInputConfig,int>
            (*(FGameplayDebuggerInputConfig **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGameplayDebuggerCategoryConfig> @ 146d37f20

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerCategoryConfig>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    uVar2 = (((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum;
    *(undefined4 *)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 4) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 4);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 5) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 5);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 6) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 6);
    piVar1 = &(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum;
    *piVar1 = *piVar1 ^ (uVar2 ^ (((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum) & 1;
    TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x20),
               (TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (FString *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FGameplayDebuggerInputConfig> @ 146d38910

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerInputConfig>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) & 0xfffffff0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FGameplayDebuggerInputConfig> @ 146d38930

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerInputConfig>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) & 0xfffffff0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FGameplayDebuggerInputConfig> @ 146d38950

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerInputConfig>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGameplayDebuggerInputConfig> @ 146d38980

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerInputConfig>
          (void *param_1,void *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    (((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    pFVar1 = (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    iVar3 = (((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum;
    iVar4 = (((FString *)((longlong)param_2 + 0x10))->Data).ArrayMax;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      LOCK();
      *(int *)(pFVar1 + 8) = *(int *)(pFVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar2 = (TReferenceControllerBase<1> *)
             (((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum = iVar3;
    (((FString *)((longlong)param_1 + 0x10))->Data).ArrayMax = iVar4;
    (((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data = pFVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    uVar5 = ((((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum ^
            (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum) & 1U ^
            (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum = uVar5;
    uVar5 = (uVar5 ^ (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum) & 2 ^ uVar5;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum = uVar5;
    uVar5 = (uVar5 ^ (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum) & 4 ^ uVar5;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum = uVar5;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum =
         (uVar5 ^ (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum) & 8 ^ uVar5;
    param_1 = (FString *)((longlong)param_1 + 0x30);
    param_2 = (FString *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FGameplayDebuggerVisLogSync> @ 146d38aa0

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerVisLogSync>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGameplayDebuggerVisLogSync> @ 146d38ab0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerVisLogSync>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGameplayDebuggerVisLogSync> @ 146d38ac0

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerVisLogSync>(void *param_1)

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

// Copy<FGameplayDebuggerVisLogSync> @ 146d38ae0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerVisLogSync>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayDebuggerDebugActor> @ 146d38c70

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerDebugActor>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGameplayDebuggerDebugActor> @ 146d38c90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerDebugActor>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGameplayDebuggerDebugActor> @ 146d38cb0

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerDebugActor>(void *param_1)

{
  return;
}

// Copy<FGameplayDebuggerDebugActor> @ 146d38cc0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerDebugActor>(void *param_1,void *param_2,int param_3)

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

// Construct<FGameplayDebuggerNetPack> @ 146d38d80

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerNetPack>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGameplayDebuggerNetPack> @ 146d38da0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerNetPack>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGameplayDebuggerNetPack> @ 146d38dc0

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerNetPack>(void *param_1)

{
  DestructItems<FGameplayDebuggerCategoryData,int>
            (*(FGameplayDebuggerCategoryData **)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// NetDeltaSerialize<FGameplayDebuggerNetPack> @ 146d38e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::NetDeltaSerialize<FGameplayDebuggerNetPack>
          (FNetDeltaSerializeInfo *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = FGameplayDebuggerNetPack::NetDeltaSerialize(param_2,param_1);
  return bVar1;
}

// Copy<FGameplayDebuggerNetPack> @ 146d38e20

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerNetPack>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FGameplayDebuggerCategoryData *pFVar5;
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
      pFVar1 = (ForAnyElementType *)(puVar6 + 1);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        DestructItems<FGameplayDebuggerCategoryData,int>
                  ((FGameplayDebuggerCategoryData *)pFVar1->Data,*(int *)(puVar6 + 2));
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar6 + 0x14);
        pFVar5 = (FGameplayDebuggerCategoryData *)((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar6 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FGameplayDebuggerCategoryData,FGameplayDebuggerCategoryData,int>
                    (pFVar1->Data,pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayDebuggerCategoryData> @ 146d39440

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerCategoryData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FGameplayDebuggerCategoryData> @ 146d39480

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerCategoryData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FGameplayDebuggerCategoryData> @ 146d394b0

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerCategoryData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FGameplayDebuggerShape,int>
            (*(FGameplayDebuggerShape **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FGameplayDebuggerCategoryData> @ 146d39550

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerCategoryData>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 8));
      TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x18),
                 (TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x18));
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x28);
      if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x28)) {
        iVar4 = *(int *)((longlong)param_2 + 0x30);
        piVar2 = (int *)((longlong)param_1 + 0x34);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 0x28))->Data;
        *(int *)((longlong)param_1 + 0x30) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar4 << 4);
          }
        }
      }
      puVar3 = (undefined1 *)((longlong)param_2 + 0x38);
      param_2 = (void *)((longlong)param_2 + 0x40);
      *(undefined1 *)((longlong)param_1 + 0x38) = *puVar3;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayDebuggerDataPackRPCParams> @ 146d39930

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerDataPackRPCParams>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FGameplayDebuggerDataPackRPCParams> @ 146d39960

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerDataPackRPCParams>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FGameplayDebuggerDataPackRPCParams> @ 146d39990

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerDataPackRPCParams>(void *param_1)

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

// Copy<FGameplayDebuggerDataPackRPCParams> @ 146d399b0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerDataPackRPCParams>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar2 + 8);
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x14);
      *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_1 + lVar2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 0x14) = uVar1;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar2 + 0x20));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayDebuggerDataPackHeader> @ 146d39b30

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerDataPackHeader>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGameplayDebuggerDataPackHeader> @ 146d39c10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerDataPackHeader>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGameplayDebuggerDataPackHeader> @ 146d39c30

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerDataPackHeader>(void *param_1)

{
  return;
}

// Copy<FGameplayDebuggerDataPackHeader> @ 146d39c40

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerDataPackHeader>
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

// Construct<FGameplayDebuggerShape> @ 146d39cf0

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerShape>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// ConstructForTests<FGameplayDebuggerShape> @ 146d39d10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerShape>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// Destruct<FGameplayDebuggerShape> @ 146d39d30

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerShape>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGameplayDebuggerShape> @ 146d39d70

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerShape>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x18);
          }
        }
      }
      ::FString::operator=((FString *)(pFVar5 + 2),(FString *)(pFVar2 + 2));
      *(undefined4 *)&pFVar5[4].Data = *(undefined4 *)&pFVar2[4].Data;
      *(undefined1 *)((longlong)&pFVar5[4].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[4].Data + 4);
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayDebuggerPlayerData> @ 146d3a040

void __cdecl UE::CoreUObject::Private::Construct<FGameplayDebuggerPlayerData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGameplayDebuggerPlayerData> @ 146d3a0a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerPlayerData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGameplayDebuggerPlayerData> @ 146d3a0c0

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayDebuggerPlayerData>(void *param_1)

{
  return;
}

// Copy<FGameplayDebuggerPlayerData> @ 146d3a0d0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayDebuggerPlayerData>(void *param_1,void *param_2,int param_3)

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
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[2]);
      }
      puVar2[2] = puVar1[2];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<AGameplayDebuggerCategoryReplicator,AGameplayDebuggerCategoryReplicator_*_&> @ 146d3c820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AGameplayDebuggerCategoryReplicator * __cdecl
UE::Core::Private::
DereferenceIfNecessary<AGameplayDebuggerCategoryReplicator,AGameplayDebuggerCategoryReplicator_*_&>
          (AGameplayDebuggerCategoryReplicator **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<AGameplayDebuggerPlayerManager,AGameplayDebuggerPlayerManager_*_&> @ 146d3c840

AGameplayDebuggerPlayerManager * __cdecl
UE::Core::Private::
DereferenceIfNecessary<AGameplayDebuggerPlayerManager,AGameplayDebuggerPlayerManager_*_&>
          (AGameplayDebuggerPlayerManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerExtension_HUD,FGameplayDebuggerExtension_HUD_*_&> @ 146d3c860

FGameplayDebuggerExtension_HUD * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerExtension_HUD,FGameplayDebuggerExtension_HUD_*_&>
          (FGameplayDebuggerExtension_HUD **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerExtension_Spectator,FGameplayDebuggerExtension_Spectator_*_&> @ 146d3c880

FGameplayDebuggerExtension_Spectator * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGameplayDebuggerExtension_Spectator,FGameplayDebuggerExtension_Spectator_*_&>
          (FGameplayDebuggerExtension_Spectator **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FGameplayDebuggerModule,FGameplayDebuggerModule_*_&> @ 146d3c8a0

FGameplayDebuggerModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FGameplayDebuggerModule,FGameplayDebuggerModule_*_&>
          (FGameplayDebuggerModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UGameplayDebuggerLocalController,UGameplayDebuggerLocalController_*_&> @ 146d3c8c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameplayDebuggerLocalController * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UGameplayDebuggerLocalController,UGameplayDebuggerLocalController_*_&>
          (UGameplayDebuggerLocalController **param_1)

{
  return *param_1;
}

