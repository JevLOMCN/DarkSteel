// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 204

// Construct<FMassProcessingContext_DEPRECATED> @ 1471b4560

void __cdecl UE::CoreUObject::Private::Construct<FMassProcessingContext_DEPRECATED>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// ConstructForTests<FMassProcessingContext_DEPRECATED> @ 1471b45a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMassProcessingContext_DEPRECATED>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Destruct<FMassProcessingContext_DEPRECATED> @ 1471b45d0

void __cdecl UE::CoreUObject::Private::Destruct<FMassProcessingContext_DEPRECATED>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Copy<FMassProcessingContext_DEPRECATED> @ 1471b45e0

bool __cdecl
UE::CoreUObject::Private::Copy<FMassProcessingContext_DEPRECATED>
          (void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (FInstancedStruct *)((longlong)param_1 + lVar2 + 8);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((FInstancedStruct *)((longlong)param_1 + 8) != pFVar1) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)((longlong)param_1 + 8),
                   (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                   *(uchar **)((longlong)param_1 + lVar2 + 0x10));
      }
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FProcessorAuxDataBase> @ 1471b4b20

void __cdecl UE::CoreUObject::Private::Construct<FProcessorAuxDataBase>(void *param_1)

{
  return;
}

// ConstructForTests<FProcessorAuxDataBase> @ 1471b4b30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProcessorAuxDataBase>(void *param_1)

{
  return;
}

// Construct<FMassProcessingPhaseConfig> @ 1471b4b40

void __cdecl UE::CoreUObject::Private::Construct<FMassProcessingPhaseConfig>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  pUVar1 = UMassCompositeProcessor::StaticClass();
  *(UClass **)((longlong)param_1 + 8) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMassProcessingPhaseConfig> @ 1471b4ba0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassProcessingPhaseConfig>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined8 *)param_1 = 0;
  pUVar1 = UMassCompositeProcessor::StaticClass();
  *(UClass **)((longlong)param_1 + 8) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMassProcessingPhaseConfig> @ 1471b4bf0

void __cdecl UE::CoreUObject::Private::Destruct<FMassProcessingPhaseConfig>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
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

// Copy<FMassProcessingPhaseConfig> @ 1471b4c10

bool __cdecl
UE::CoreUObject::Private::Copy<FMassProcessingPhaseConfig>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x10),
                 (TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar2 + 0x10));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMassEntityObserverClassesMap> @ 1471b4db0

void __cdecl UE::CoreUObject::Private::Construct<FMassEntityObserverClassesMap>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FMassEntityObserverClassesMap> @ 1471b4df0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMassEntityObserverClassesMap>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FMassEntityObserverClassesMap> @ 1471b4e20

void __cdecl UE::CoreUObject::Private::Destruct<FMassEntityObserverClassesMap>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FMassEntityObserverClassesMap> @ 1471b4e60

bool __cdecl
UE::CoreUObject::Private::Copy<FMassEntityObserverClassesMap>
          (void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMassProcessorClassCollection> @ 1471b51f0

void __cdecl UE::CoreUObject::Private::Construct<FMassProcessorClassCollection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMassProcessorClassCollection> @ 1471b5200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMassProcessorClassCollection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMassProcessorClassCollection> @ 1471b5210

void __cdecl UE::CoreUObject::Private::Destruct<FMassProcessorClassCollection>(void *param_1)

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

// Copy<FMassProcessorClassCollection> @ 1471b5280

bool __cdecl
UE::CoreUObject::Private::Copy<FMassProcessorClassCollection>
          (void *param_1,void *param_2,int param_3)

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
          ConstructItems<TSubclassOf<UMassProcessor>,TSubclassOf<UMassProcessor>,int>
                    (pFVar6->Data,(TSubclassOf<UMassProcessor> *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMassEntityHandle> @ 1471b5730

void __cdecl UE::CoreUObject::Private::Construct<FMassEntityHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMassEntityHandle> @ 1471b5740

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassEntityHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMassEntityHandle> @ 1471b5790

void __cdecl UE::CoreUObject::Private::Destruct<FMassEntityHandle>(void *param_1)

{
  return;
}

// Copy<FMassEntityHandle> @ 1471b5860

bool __cdecl
UE::CoreUObject::Private::Copy<FMassEntityHandle>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FMassEntityHandle> @ 1471b5950

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FMassEntityHandle>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  uVar2 = (int)*(undefined8 *)param_1 - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// Construct<FMassObserverExecutionContext> @ 1471b5b30

void __cdecl UE::CoreUObject::Private::Construct<FMassObserverExecutionContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)param_1 = 4;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  return;
}

// ConstructForTests<FMassObserverExecutionContext> @ 1471b5b50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMassObserverExecutionContext>(void *param_1)

{
  *(undefined1 *)param_1 = 4;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  return;
}

// Destruct<FMassObserverExecutionContext> @ 1471b5b70

void __cdecl UE::CoreUObject::Private::Destruct<FMassObserverExecutionContext>(void *param_1)

{
  return;
}

// Copy<FMassObserverExecutionContext> @ 1471b5c00

bool __cdecl
UE::CoreUObject::Private::Copy<FMassObserverExecutionContext>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FMassConstSharedFragment> @ 1471b5fc0

void __cdecl UE::CoreUObject::Private::Construct<FMassConstSharedFragment>(void *param_1)

{
  return;
}

// ConstructForTests<FMassConstSharedFragment> @ 1471b6010

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassConstSharedFragment>(void *param_1)

{
  return;
}

// Construct<FMassSharedFragment> @ 1471b6160

void __cdecl UE::CoreUObject::Private::Construct<FMassSharedFragment>(void *param_1)

{
  return;
}

// ConstructForTests<FMassSharedFragment> @ 1471b6170

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassSharedFragment>(void *param_1)

{
  return;
}

// Construct<FMassObserverManager> @ 1471b6280

void __cdecl UE::CoreUObject::Private::Construct<FMassObserverManager>(void *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined4 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined4 *)((longlong)param_1 + 0x240) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x248) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined4 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined4 *)((longlong)param_1 + 0x290) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x298) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined4 *)((longlong)param_1 + 0x330) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x338) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined4 *)((longlong)param_1 + 0x350) = 0;
  *(undefined8 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined8 *)((longlong)param_1 + 0x378) = 0;
  *(undefined4 *)((longlong)param_1 + 0x380) = 0;
  *(undefined4 *)((longlong)param_1 + 900) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x388) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x398) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a8) = 0;
  this = UMassEntitySubsystem::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (*(longlong *)&pUVar1[1].field_0x18 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x3b0) = *(undefined8 *)&pUVar1[1].field_0x18;
  *(undefined8 *)((longlong)param_1 + 0x3b8) = 1;
  return;
}

// ConstructForTests<FMassObserverManager> @ 1471b6290

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassObserverManager>(void *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x80;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined4 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined4 *)((longlong)param_1 + 0x240) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x248) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined4 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined4 *)((longlong)param_1 + 0x290) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x298) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined4 *)((longlong)param_1 + 0x330) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x338) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined4 *)((longlong)param_1 + 0x350) = 0;
  *(undefined8 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined8 *)((longlong)param_1 + 0x378) = 0;
  *(undefined4 *)((longlong)param_1 + 0x380) = 0;
  *(undefined4 *)((longlong)param_1 + 900) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x388) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x398) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a8) = 0;
  this = UMassEntitySubsystem::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (*(longlong *)&pUVar1[1].field_0x18 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x3b0) = *(undefined8 *)&pUVar1[1].field_0x18;
  *(undefined8 *)((longlong)param_1 + 0x3b8) = 1;
  return;
}

// Destruct<FMassObserverManager> @ 1471b62a0

void __cdecl UE::CoreUObject::Private::Destruct<FMassObserverManager>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined4 *)((longlong)param_1 + 0x3a0) = 0;
  if (*(void **)((longlong)param_1 + 0x398) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x398));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x358));
  *(undefined4 *)((longlong)param_1 + 0x350) = 0;
  if (*(void **)((longlong)param_1 + 0x348) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x348));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x308));
  *(undefined4 *)((longlong)param_1 + 0x300) = 0;
  if (*(void **)((longlong)param_1 + 0x2f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f8));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x2b8));
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0;
  if (*(void **)((longlong)param_1 + 0x2a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2a8));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x268));
  *(undefined4 *)((longlong)param_1 + 0x260) = 0;
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x218));
  *(undefined4 *)((longlong)param_1 + 0x210) = 0;
  if (*(void **)((longlong)param_1 + 0x208) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x208));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x1c8));
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0;
  if (*(void **)((longlong)param_1 + 0x1b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1b8));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x178));
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  if (*(void **)((longlong)param_1 + 0x168) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x168));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x128));
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  plVar3 = *(longlong **)((longlong)param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Construct<FMassChunkFragment> @ 1471b62c0

void __cdecl UE::CoreUObject::Private::Construct<FMassChunkFragment>(void *param_1)

{
  return;
}

// ConstructForTests<FMassChunkFragment> @ 1471b62d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassChunkFragment>(void *param_1)

{
  return;
}

// Construct<FMassTag> @ 1471b6360

void __cdecl UE::CoreUObject::Private::Construct<FMassTag>(void *param_1)

{
  return;
}

// ConstructForTests<FMassTag> @ 1471b6370

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassTag>(void *param_1)

{
  return;
}

// Construct<FMassObserversMap> @ 1471b6400

void __cdecl UE::CoreUObject::Private::Construct<FMassObserversMap>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FMassObserversMap> @ 1471b6440

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassObserversMap>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FMassObserversMap> @ 1471b6470

void __cdecl UE::CoreUObject::Private::Destruct<FMassObserversMap>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FMassObserversMap> @ 1471b6530

bool __cdecl
UE::CoreUObject::Private::Copy<FMassObserversMap>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMassFragment> @ 1471b65c0

void __cdecl UE::CoreUObject::Private::Construct<FMassFragment>(void *param_1)

{
  return;
}

// ConstructForTests<FMassFragment> @ 1471b65d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassFragment>(void *param_1)

{
  return;
}

// Construct<FMassChildOfFragment> @ 1471b6ba0

void __cdecl UE::CoreUObject::Private::Construct<FMassChildOfFragment>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMassChildOfFragment> @ 1471b6bf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassChildOfFragment>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMassChildOfFragment> @ 1471b6c00

void __cdecl UE::CoreUObject::Private::Destruct<FMassChildOfFragment>(void *param_1)

{
  return;
}

// Construct<FMassDebugLogFragment> @ 1471b6c10

void __cdecl UE::CoreUObject::Private::Construct<FMassDebugLogFragment>(void *param_1)

{
  undefined8 local_res8 [4];
  
  *(undefined8 *)param_1 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)local_res8);
  return;
}

// ConstructForTests<FMassDebugLogFragment> @ 1471b6c40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassDebugLogFragment>(void *param_1)

{
  undefined8 local_res8 [4];
  
  *(undefined8 *)param_1 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)local_res8);
  return;
}

// Destruct<FMassDebugLogFragment> @ 1471b6c70

void __cdecl UE::CoreUObject::Private::Destruct<FMassDebugLogFragment>(void *param_1)

{
  return;
}

// Copy<FMassChildOfFragment> @ 1471b6c80

bool __cdecl
UE::CoreUObject::Private::Copy<FMassChildOfFragment>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMassDebugLogFragment> @ 1471b6cb0

bool __cdecl
UE::CoreUObject::Private::Copy<FMassDebugLogFragment>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMassEntityView> @ 1471b6da0

void __cdecl UE::CoreUObject::Private::Construct<FMassEntityView>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMassEntityView> @ 1471b6dd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassEntityView>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  return;
}

// Destruct<FMassEntityView> @ 1471b6e00

void __cdecl UE::CoreUObject::Private::Destruct<FMassEntityView>(void *param_1)

{
  return;
}

// Copy<FMassEntityView> @ 1471b6e50

bool __cdecl
UE::CoreUObject::Private::Copy<FMassEntityView>(void *param_1,void *param_2,int param_3)

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
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x20);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMassChildOfRelation> @ 1471b75b0

void __cdecl UE::CoreUObject::Private::Construct<FMassChildOfRelation>(void *param_1)

{
  return;
}

// ConstructForTests<FMassChildOfRelation> @ 1471b75c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassChildOfRelation>(void *param_1)

{
  return;
}

// Construct<FMassRelationMappingFragment> @ 1471b75d0

void __cdecl UE::CoreUObject::Private::Construct<FMassRelationMappingFragment>(void *param_1)

{
  return;
}

// ConstructForTests<FMassRelationMappingFragment> @ 1471b75e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMassRelationMappingFragment>(void *param_1)

{
  return;
}

// Construct<FMassRelationFragment> @ 1471b7f80

void __cdecl UE::CoreUObject::Private::Construct<FMassRelationFragment>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMassRelationFragment> @ 1471b80c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassRelationFragment>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMassRelationFragment> @ 1471b8120

void __cdecl UE::CoreUObject::Private::Destruct<FMassRelationFragment>(void *param_1)

{
  return;
}

// Copy<FMassRelationFragment> @ 1471b81c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMassRelationFragment>(void *param_1,void *param_2,int param_3)

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

// Construct<FMassRelation> @ 1471b86c0

void __cdecl UE::CoreUObject::Private::Construct<FMassRelation>(void *param_1)

{
  return;
}

// ConstructForTests<FMassRelation> @ 1471b8700

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassRelation>(void *param_1)

{
  return;
}

// Construct<FMassProcessorExecutionOrder> @ 1471b8db0

void __cdecl UE::CoreUObject::Private::Construct<FMassProcessorExecutionOrder>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMassProcessorExecutionOrder> @ 1471b8dd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMassProcessorExecutionOrder>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMassProcessorExecutionOrder> @ 1471b8df0

void __cdecl UE::CoreUObject::Private::Destruct<FMassProcessorExecutionOrder>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FMassProcessorExecutionOrder> @ 1471b8e30

bool __cdecl
UE::CoreUObject::Private::Copy<FMassProcessorExecutionOrder>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar1 + 8));
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x18),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar1 + 0x18));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMassRuntimePipeline> @ 1471b8f40

void __cdecl UE::CoreUObject::Private::Construct<FMassRuntimePipeline>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FMassRuntimePipeline> @ 1471b8f60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassRuntimePipeline>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMassRuntimePipeline> @ 1471b8f80

void __cdecl UE::CoreUObject::Private::Destruct<FMassRuntimePipeline>(void *param_1)

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

// Copy<FMassRuntimePipeline> @ 1471b8fa0

bool __cdecl
UE::CoreUObject::Private::Copy<FMassRuntimePipeline>(void *param_1,void *param_2,int param_3)

{
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      *(undefined1 *)&this[1].AllocatorInstance.Data =
           *(undefined1 *)&pTVar1[1].AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = (TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *)&this[1].ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMassGenericDebugEvent> @ 1471b9020

void __cdecl UE::CoreUObject::Private::Construct<FMassGenericDebugEvent>(void *param_1)

{
  return;
}

// ConstructForTests<FMassGenericDebugEvent> @ 1471b9030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMassGenericDebugEvent>(void *param_1)

{
  return;
}

// Destruct<FMassGenericDebugEvent> @ 1471b9040

void __cdecl UE::CoreUObject::Private::Destruct<FMassGenericDebugEvent>(void *param_1)

{
  return;
}

// GetStructTypeHash<FMassRuntimePipeline> @ 1471b9050

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FMassRuntimePipeline>(void *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined1 auStackX_8 [8];
  
  puVar5 = *(ulonglong **)param_1;
  iVar2 = *(int *)((longlong)param_1 + 8);
  uVar4 = 0;
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMassProcessor>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (puVar5 == puVar1) break;
    uVar3 = ((uint)(*puVar5 >> 0x14) & 0xffff ^ (uint)(*puVar5 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    uVar4 = uVar4 - uVar3 ^ uVar3 >> 0xd;
    uVar6 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 0xd;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xc;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 3;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 10;
    uVar4 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 0xf;
    puVar5 = puVar5 + 1;
  }
  return uVar4;
}

// Copy<FMassGenericDebugEvent> @ 1471b9060

bool __cdecl
UE::CoreUObject::Private::Copy<FMassGenericDebugEvent>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// <lambda_invoker_cdecl> @ 1471b92f0

void __cdecl UE::Mass::Debug::<lambda_33>::<lambda_invoker_cdecl>(FOutputDevice *param_1)

{
  <lambda_33> local_res10 [24];
  
  operator()(local_res10,param_1);
  return;
}

// AddRegisteredObserverProcessorInstances<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471bc210

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mass::ObserverManager::Private::
AddRegisteredObserverProcessorInstances<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (FMassEntityManager *param_1,EProcessorExecutionFlags param_2,UObject *param_3,
          TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
          *param_4,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *param_5,FMassObserversMap *param_6,
          TMap<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>_>
          *param_7)

{
  undefined1 *puVar1;
  FMassRuntimePipeline *this;
  ulonglong uVar2;
  uint uVar3;
  UObject *pUVar4;
  code *pcVar5;
  atomic<int> aVar6;
  FIdentityFunctor FVar7;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  atomic<int> aVar11;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar12;
  UClass *pUVar13;
  longlong *plVar14;
  UStruct *pUVar15;
  FString *pFVar16;
  byte bVar17;
  uint uVar18;
  undefined8 *puVar19;
  TObjectPtr<UClass>_u_0 TVar20;
  longlong lVar21;
  int iVar22;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar23;
  TReferenceControllerBase<1> *pTVar24;
  wchar_t *pwVar25;
  FMassEntityManager *pFVar26;
  uint uVar27;
  wchar_t *pwVar28;
  uint *puVar29;
  undefined1 *puVar30;
  uint uVar31;
  uint uVar32;
  ForAnyElementType this_00;
  FSoftClassPath *pFVar33;
  FIdentityFunctor local_res20 [8];
  undefined1 local_208 [8];
  TObjectPtr<UClass>_u_0 local_200;
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> local_1f8;
  <lambda_1> local_1e8;
  undefined1 local_1e7 [7];
  UMassProcessor *local_1e0;
  undefined8 local_1d8;
  ForAnyElementType local_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0 [2];
  TObjectPtr<UScriptStruct_const_>_u_0 local_1b8;
  FWeakObjectPtr local_1b0;
  FName local_1a8;
  TSharedRef<FMassEntityManager,1> local_1a0;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  int local_15c;
  TPairInitializer<TSubclassOf<UMassProcessor>_const_&,UMassProcessor_*_const_&> local_158;
  UMassProcessor *local_148;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_140;
  TObjectPtr<UScriptStruct_const_>_u_0 local_138;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  uint uStack_118;
  uint uStack_114;
  uint local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TObjectPtr<UClass>_u_0 *local_d0;
  UMassProcessor **local_c8;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  undefined8 uStack_b8;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  puVar1 = &param_4->field_0x10;
  iVar10 = *(int *)&param_4->field_0x28;
  iStack_188 = 0;
  local_170 = 0;
  iStack_174 = 0;
  uStack_184 = 1;
  if (iVar10 != 0) {
    puVar29 = *(uint **)&param_4->field_0x20;
    if (*(uint **)&param_4->field_0x20 == (uint *)0x0) {
      puVar29 = (uint *)puVar1;
    }
    uStack_184 = *puVar29;
    while (uStack_184 == 0) {
      iStack_188 = iStack_188 + 1;
      local_170 = local_170 + 0x20;
      iStack_174 = iVar10;
      uStack_184 = 1;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_1471bc2bc;
      uStack_184 = puVar29[iStack_188];
    }
    uStack_184 = ~(uStack_184 - 1) & uStack_184;
    uVar2 = (ulonglong)uStack_184 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_160 = (int)lVar21;
    iStack_174 = local_170 + -1 + local_160;
    if (iVar10 < iStack_174) {
      iStack_174 = iVar10;
    }
  }
LAB_1471bc2bc:
  uVar18 = *(uint *)&param_4->field_0x28;
  bVar17 = (byte)uVar18 & 0x1f;
  iStack_168 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  uVar27 = uVar18 & 0xffffffe0;
  TStack_f8._padding_ = CONCAT44(uStack_184,iStack_188);
  uStack_178 = 0xffffffff;
  TStack_f8.CurrentBitIndex = iStack_174;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar18 >> 5;
  TStack_f8._28_4_ = local_54;
  TStack_f8.BaseBitIndex = local_170;
  uStack_d8 = CONCAT44(uStack_164,iStack_168);
  uVar31 = 1 << bVar17;
  uVar32 = -1 << bVar17;
  local_190 = param_4;
  local_180 = puVar1;
  local_100 = param_4;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_4->field_0x28;
  uStack_114 = uVar18;
  if (uVar18 != uVar3) {
    puVar30 = *(undefined1 **)&param_4->field_0x20;
    if (*(undefined1 **)&param_4->field_0x20 == (undefined1 *)0x0) {
      puVar30 = puVar1;
    }
    uVar18 = uVar32 & *(uint *)(puVar30 + (longlong)iVar22 * 4);
    while (uVar18 == 0) {
      iVar22 = iVar22 + 1;
      uVar27 = uVar27 + 0x20;
      uStack_114 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar22) goto LAB_1471bc3c2;
      uVar32 = 0xffffffff;
      uVar18 = *(uint *)(puVar30 + (longlong)iVar22 * 4);
    }
    uVar31 = ~(uVar18 - 1) & uVar18;
    uVar2 = (ulonglong)uVar31 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_15c = (int)lVar21;
    uStack_114 = local_15c + -1 + uVar27;
    if ((int)uVar3 < (int)uStack_114) {
      uStack_114 = uVar3;
    }
  }
LAB_1471bc3c2:
  iStack_10c = iStack_174;
  iStack_108 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  uStack_b8 = CONCAT44(uVar31,iVar22);
  uStack_a8 = CONCAT44(uStack_114,uVar32);
  local_a0 = CONCAT44(iStack_174,uVar27);
  uStack_98 = CONCAT44(uStack_104,iStack_108);
  local_130 = param_4;
  iStack_128 = iVar22;
  uStack_124 = uVar31;
  local_120 = puVar1;
  uStack_118 = uVar32;
  local_110 = uVar27;
  local_c0 = param_4;
  local_b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  do {
    pTVar8 = local_100;
    if (*(int *)&local_100->field_0x8 - *(int *)&local_100->field_0x34 != (int)uStack_d8) {
      local_res20[0] = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_f8.CurrentBitIndex == uStack_a8._4_4_) && (TStack_f8.Array == local_b0)) &&
       (pTVar8 == local_c0)) {
      return;
    }
    puVar19 = (undefined8 *)((longlong)TStack_f8.CurrentBitIndex * 0x20 + *(longlong *)pTVar8);
    local_1d8 = *puVar19;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    iVar10 = *(int *)(puVar19 + 2);
    pFVar33 = (FSoftClassPath *)puVar19[1];
    local_1c8 = iVar10;
    if (iVar10 == 0) {
      local_1c4 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar10,0,&local_1d0,iVar10,&local_1c4);
      ConstructItems<FSoftClassPath,FSoftClassPath,int>(local_1d0.Data,pFVar33,iVar10);
    }
    local_1b0.ObjectIndex = (int)local_1d8;
    local_1b0.ObjectSerialNumber = local_1d8._4_4_;
    TVar12.DebugPtr = (UScriptStruct *)FWeakObjectPtr::Get(&local_1b0);
    if ((TVar12.DebugPtr != (UScriptStruct *)0x0) && (local_1c8 != 0)) {
      pUVar13 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar22 = local_1c8;
      iVar10 = (int)pUVar13->_padding_;
      if ((*(int *)((TVar12.DebugPtr)->_padding_ + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar13->_padding_)) {
        pFVar16 = GetTypeName<UScriptStruct_const_>(&local_90);
        pwVar28 = L"";
        if ((pFVar16->Data).ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        }
        pFVar16 = GetFullNameForCastLogError<UObject_const_>(local_80,(UObject *)TVar12.DebugPtr);
        if ((pFVar16->Data).ArrayNum != 0) {
          pwVar28 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar28,pwVar25);
      }
      pFVar33 = (FSoftClassPath *)(local_1d0.Data + (longlong)local_1c8 * 0x20);
      local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.ArrayNum = 0;
      local_1f8.ArrayMax = 0;
      this_00.Data = local_1d0.Data;
      while( true ) {
        if (local_1c8 != iVar22) {
          local_208[0] = 0;
          `TCheckedPointerIterator<FSoftClassPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_208);
        }
        FVar7 = local_res20[0];
        if ((FSoftClassPath *)this_00.Data == pFVar33) break;
        local_200.DebugPtr = FSoftClassPath::ResolveClass((FSoftClassPath *)this_00.Data);
        if (GC::GIsIncrementalReachabilityPending == false) {
LAB_1471bc590:
          TVar20 = local_200;
          if ((local_200.DebugPtr == (UClass *)0x0) ||
             (pUVar13 = UMassProcessor::StaticClass(), pUVar13 == (UClass *)0x0))
          goto LAB_1471bc88b;
          iVar10 = (int)pUVar13->_padding_;
          if (((int)(TVar20.DebugPtr)->_padding_ < iVar10) ||
             ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar10 * 8) !=
              &pUVar13->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if ((!bVar9) || (local_200.DebugPtr == (UClass *)0x0)) goto LAB_1471bc88b;
          uVar18 = ((uint)((ulonglong)local_200.DebugPtr >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_200.DebugPtr >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          iVar10 = TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TSubclassOf<UMassProcessor>_>
                             ((TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
                               *)param_7,uVar18 >> 0x10 ^ uVar18,
                              (TSubclassOf<UMassProcessor> *)&local_200.ObjectPtr);
          TVar20 = local_200;
          if ((iVar10 == -1) ||
             ((lVar21 = *(longlong *)param_7 + (longlong)iVar10 * 0x18, lVar21 == 0 ||
              (puVar19 = (undefined8 *)(lVar21 + 8), puVar19 == (undefined8 *)0x0)))) {
            if ((local_200.DebugPtr == (UClass *)0x0) ||
               (pUVar13 = UMassProcessor::StaticClass(), pUVar13 == (UClass *)0x0)) {
LAB_1471bc69c:
              TVar20.DebugPtr = (UClass *)0x0;
            }
            else {
              iVar10 = (int)pUVar13->_padding_;
              if (((int)(TVar20.DebugPtr)->_padding_ < iVar10) ||
                 ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar10 * 8)
                  != &pUVar13->_padding_)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              TVar20 = local_200;
              if (!bVar9) goto LAB_1471bc69c;
            }
            if (((TVar20.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              UClass::InternalCreateDefaultObjectWrapper(TVar20.DebugPtr);
            }
            pUVar4 = ((TVar20.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr;
            pUVar13 = UMassProcessor::StaticClass();
            lVar21 = *(longlong *)&pUVar4->field_0x10;
            iVar10 = (int)pUVar13->_padding_;
            if (((*(int *)(lVar21 + 0x38) < iVar10) ||
                ((longlong *)*(undefined1 **)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar10 * 8)
                 != &pUVar13->_padding_)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Ret->IsA(T::StaticClass())",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0x1181,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            TVar20 = local_200;
            if ((pUVar4[2].field_0x11 & param_2) == None) goto LAB_1471bc88b;
            local_1a8.ComparisonIndex.Value = 0;
            local_1a8.Number = 0;
            if ((local_200.DebugPtr == (UClass *)0x0) ||
               (pUVar13 = UMassProcessor::StaticClass(), pUVar13 == (UClass *)0x0)) {
LAB_1471bc753:
              TVar20.DebugPtr = (UClass *)0x0;
            }
            else {
              iVar10 = (int)pUVar13->_padding_;
              if (((int)(TVar20.DebugPtr)->_padding_ < iVar10) ||
                 ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar10 * 8)
                  != &pUVar13->_padding_)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              TVar20 = local_200;
              if (!bVar9) goto LAB_1471bc753;
            }
            local_1e0 = NewObject<UMassProcessor>
                                  (param_3,TVar20.DebugPtr,local_1a8,RF_NoFlags,(UObject *)0x0,false
                                   ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
            local_148 = local_1e0;
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (local_1e0 != (UMassProcessor *)0x0)) {
              GC::MarkAsReachable((UObject *)local_1e0);
            }
            if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e0) &&
                ((FScriptContainerElement *)&local_1e0 <
                 local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 8)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = local_1f8.ArrayNum;
            if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
            }
            local_1f8.ArrayNum = iVar10 + 1;
            *(UMassProcessor **)(local_1f8.AllocatorInstance.Data + (longlong)iVar10 * 8) =
                 local_1e0;
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (local_1e0 != (UMassProcessor *)0x0)) {
              GC::MarkAsReachable((UObject *)local_1e0);
            }
            local_d0 = &local_200;
            local_c8 = &local_148;
            TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TSubclassOf<UMassProcessor>_const_&,UMassProcessor_*_const_&>_>
                      ((TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
                        *)param_7,&local_158,(bool *)&local_d0);
            goto LAB_1471bc88b;
          }
          local_158.Value = (UMassProcessor **)*puVar19;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)local_158.Value != (UObject *)0x0)) {
            GC::MarkAsReachable((UObject *)local_158.Value);
          }
          TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TObjectPtr<UMassProcessor>_>
                    (&local_1f8,(TObjectPtr<UMassProcessor> *)&local_158.Value);
          this_00.Data = this_00.Data + 0x20;
        }
        else {
          if (local_200.DebugPtr != (UClass *)0x0) {
            GC::MarkAsReachable((UObject *)local_200.DebugPtr);
            goto LAB_1471bc590;
          }
LAB_1471bc88b:
          this_00.Data = this_00.Data + 0x20;
        }
      }
      if (0 < local_1f8.ArrayNum) {
        TVar23.DebugPtr = TVar12.DebugPtr;
        local_1b8.DebugPtr = TVar12.DebugPtr;
        if (((GC::GIsIncrementalReachabilityPending != false) &&
            (GC::MarkAsReachable((UObject *)TVar12.DebugPtr), TVar23 = local_1b8,
            GC::GIsIncrementalReachabilityPending != false)) &&
           (local_1b8.DebugPtr != (UScriptStruct *)0x0)) {
          GC::MarkAsReachable((UObject *)local_1b8.DebugPtr);
        }
        uVar18 = ((uint)((ulonglong)TVar23.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar23.DebugPtr >> 4)) * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        uVar18 = uVar18 >> 0x10 ^ uVar18;
        iVar10 = TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UScriptStruct_const_>_>
                           ((TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                             *)param_6,uVar18,
                            (TObjectPtr<UScriptStruct_const_> *)&local_1b8.ObjectPtr);
        if ((iVar10 == -1) ||
           (lVar21 = *(longlong *)&param_6->Container + (longlong)iVar10 * 0x28, lVar21 == 0)) {
          local_140 = &local_1b8;
          TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<TObjectPtr<UScriptStruct_const_>_&&>_>
                    ((TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                      *)param_6,(uint)local_1c0,
                     (TKeyInitializer<TObjectPtr<UScriptStruct_const_>_&&> *)(ulonglong)uVar18,
                     (bool *)&local_140);
          lVar21 = *(longlong *)&param_6->Container + (longlong)local_1c0[0] * 0x28;
        }
        this = (FMassRuntimePipeline *)(lVar21 + 8);
        FMassRuntimePipeline::AppendProcessors(this,&local_1f8);
        if (*(int *)(lVar21 + 0x10) != 0) {
          TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
          RemoveAllSwap<_FMassRuntimePipeline::SortByExecutionPriority_::__l2::<lambda_1>_>
                    ((TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *)this,
                     &local_1e8,Default);
          AlgoImpl::
          IntroSortInternal<TObjectPtr<UMassProcessor>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMassProcessor>,_FMassRuntimePipeline::SortByExecutionPriority_::__l2::<lambda_2>_>_>
                    ((TObjectPtr<UMassProcessor> *)(this->Processors).AllocatorInstance.Data,
                     *(int *)(lVar21 + 0x10),FVar7,(<lambda_2> *)local_1e7);
        }
        pFVar26 = (FMassEntityManager *)0x0;
        pTVar24 = (TReferenceControllerBase<1> *)param_1->_padding_;
        if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
          aVar6 = pTVar24->SharedReferenceCount;
          do {
            if (aVar6 == (atomic<int>)0x0) {
              pTVar24 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1471bc9d6;
            }
            LOCK();
            aVar11 = pTVar24->SharedReferenceCount;
            bVar9 = aVar6 == aVar11;
            if (bVar9) {
              pTVar24->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
              aVar11 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar11;
          } while (!bVar9);
          pFVar26 = (FMassEntityManager *)param_1->_padding_;
        }
        if (pFVar26 == (FMassEntityManager *)0x0) {
LAB_1471bc9d6:
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = &pFVar26->_padding_;
        }
        if ((plVar14 != &param_1->_padding_) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("SharedThis.Get() == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x67f,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((pFVar26 == (FMassEntityManager *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x416,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1a0.Object = pFVar26;
        local_1a0.SharedReferenceCount.ReferenceController = pTVar24;
        if ((pFVar26 == (FMassEntityManager *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x26c,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        FMassRuntimePipeline::Initialize(this,param_3,&local_1a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a0.SharedReferenceCount.ReferenceController);
        pUVar15 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::GetBaseUStruct();
        if (pUVar15 == (UStruct *)0x0) {
LAB_1471bcad1:
          local_138.DebugPtr = TVar12.DebugPtr;
          bVar9 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::Add'::__l6::<lambda_1>::operator()(&local_138);
          if (!bVar9) goto LAB_1471bcaff;
        }
        else {
          iVar10 = (int)pUVar15->_padding_;
          if (((int)(TVar12.DebugPtr)->_padding_ < iVar10) ||
             ((longlong *)*(undefined1 **)((TVar12.DebugPtr)->_padding_ + (longlong)iVar10 * 8) !=
              &pUVar15->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) goto LAB_1471bcad1;
        }
        iVar10 = FStructTracker::FindOrAddStructTypeIndex
                           (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,
                            (UStruct *)TVar12.DebugPtr);
        FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)param_5,iVar10);
      }
LAB_1471bcaff:
      if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.AllocatorInstance.Data);
      }
    }
    DestructItems<FSoftClassPath,int>((FSoftClassPath *)local_1d0.Data,local_1c8);
    if ((FSoftClassPath *)local_1d0.Data != (FSoftClassPath *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  } while( true );
}

// AddRegisteredObserverProcessorInstances<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471bcba0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mass::ObserverManager::Private::
AddRegisteredObserverProcessorInstances<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          (FMassEntityManager *param_1,EProcessorExecutionFlags param_2,UObject *param_3,
          TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
          *param_4,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                   *param_5,FMassObserversMap *param_6,
          TMap<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>_>
          *param_7)

{
  undefined1 *puVar1;
  FMassRuntimePipeline *this;
  ulonglong uVar2;
  uint uVar3;
  UObject *pUVar4;
  code *pcVar5;
  atomic<int> aVar6;
  FIdentityFunctor FVar7;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  atomic<int> aVar11;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar12;
  UClass *pUVar13;
  longlong *plVar14;
  UStruct *pUVar15;
  FString *pFVar16;
  byte bVar17;
  uint uVar18;
  undefined8 *puVar19;
  TObjectPtr<UClass>_u_0 TVar20;
  longlong lVar21;
  int iVar22;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar23;
  TReferenceControllerBase<1> *pTVar24;
  wchar_t *pwVar25;
  FMassEntityManager *pFVar26;
  uint uVar27;
  wchar_t *pwVar28;
  uint *puVar29;
  undefined1 *puVar30;
  uint uVar31;
  uint uVar32;
  ForAnyElementType this_00;
  FSoftClassPath *pFVar33;
  FIdentityFunctor local_res20 [8];
  undefined1 local_208 [8];
  TObjectPtr<UClass>_u_0 local_200;
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> local_1f8;
  <lambda_1> local_1e8;
  undefined1 local_1e7 [7];
  UMassProcessor *local_1e0;
  undefined8 local_1d8;
  ForAnyElementType local_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0 [2];
  TObjectPtr<UScriptStruct_const_>_u_0 local_1b8;
  FWeakObjectPtr local_1b0;
  FName local_1a8;
  TSharedRef<FMassEntityManager,1> local_1a0;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  int local_15c;
  TPairInitializer<TSubclassOf<UMassProcessor>_const_&,UMassProcessor_*_const_&> local_158;
  UMassProcessor *local_148;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_140;
  TObjectPtr<UScriptStruct_const_>_u_0 local_138;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  uint uStack_118;
  uint uStack_114;
  uint local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TObjectPtr<UClass>_u_0 *local_d0;
  UMassProcessor **local_c8;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  undefined8 uStack_b8;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  puVar1 = &param_4->field_0x10;
  iVar10 = *(int *)&param_4->field_0x28;
  iStack_188 = 0;
  local_170 = 0;
  iStack_174 = 0;
  uStack_184 = 1;
  if (iVar10 != 0) {
    puVar29 = *(uint **)&param_4->field_0x20;
    if (*(uint **)&param_4->field_0x20 == (uint *)0x0) {
      puVar29 = (uint *)puVar1;
    }
    uStack_184 = *puVar29;
    while (uStack_184 == 0) {
      iStack_188 = iStack_188 + 1;
      local_170 = local_170 + 0x20;
      iStack_174 = iVar10;
      uStack_184 = 1;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_1471bcc4c;
      uStack_184 = puVar29[iStack_188];
    }
    uStack_184 = ~(uStack_184 - 1) & uStack_184;
    uVar2 = (ulonglong)uStack_184 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_160 = (int)lVar21;
    iStack_174 = local_170 + -1 + local_160;
    if (iVar10 < iStack_174) {
      iStack_174 = iVar10;
    }
  }
LAB_1471bcc4c:
  uVar18 = *(uint *)&param_4->field_0x28;
  bVar17 = (byte)uVar18 & 0x1f;
  iStack_168 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  uVar27 = uVar18 & 0xffffffe0;
  TStack_f8._padding_ = CONCAT44(uStack_184,iStack_188);
  uStack_178 = 0xffffffff;
  TStack_f8.CurrentBitIndex = iStack_174;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar18 >> 5;
  TStack_f8._28_4_ = local_54;
  TStack_f8.BaseBitIndex = local_170;
  uStack_d8 = CONCAT44(uStack_164,iStack_168);
  uVar31 = 1 << bVar17;
  uVar32 = -1 << bVar17;
  local_190 = param_4;
  local_180 = puVar1;
  local_100 = param_4;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_4->field_0x28;
  uStack_114 = uVar18;
  if (uVar18 != uVar3) {
    puVar30 = *(undefined1 **)&param_4->field_0x20;
    if (*(undefined1 **)&param_4->field_0x20 == (undefined1 *)0x0) {
      puVar30 = puVar1;
    }
    uVar18 = uVar32 & *(uint *)(puVar30 + (longlong)iVar22 * 4);
    while (uVar18 == 0) {
      iVar22 = iVar22 + 1;
      uVar27 = uVar27 + 0x20;
      uStack_114 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar22) goto LAB_1471bcd52;
      uVar32 = 0xffffffff;
      uVar18 = *(uint *)(puVar30 + (longlong)iVar22 * 4);
    }
    uVar31 = ~(uVar18 - 1) & uVar18;
    uVar2 = (ulonglong)uVar31 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_15c = (int)lVar21;
    uStack_114 = local_15c + -1 + uVar27;
    if ((int)uVar3 < (int)uStack_114) {
      uStack_114 = uVar3;
    }
  }
LAB_1471bcd52:
  iStack_10c = iStack_174;
  iStack_108 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  uStack_b8 = CONCAT44(uVar31,iVar22);
  uStack_a8 = CONCAT44(uStack_114,uVar32);
  local_a0 = CONCAT44(iStack_174,uVar27);
  uStack_98 = CONCAT44(uStack_104,iStack_108);
  local_130 = param_4;
  iStack_128 = iVar22;
  uStack_124 = uVar31;
  local_120 = puVar1;
  uStack_118 = uVar32;
  local_110 = uVar27;
  local_c0 = param_4;
  local_b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  do {
    pTVar8 = local_100;
    if (*(int *)&local_100->field_0x8 - *(int *)&local_100->field_0x34 != (int)uStack_d8) {
      local_res20[0] = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_f8.CurrentBitIndex == uStack_a8._4_4_) && (TStack_f8.Array == local_b0)) &&
       (pTVar8 == local_c0)) {
      return;
    }
    puVar19 = (undefined8 *)((longlong)TStack_f8.CurrentBitIndex * 0x20 + *(longlong *)pTVar8);
    local_1d8 = *puVar19;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    iVar10 = *(int *)(puVar19 + 2);
    pFVar33 = (FSoftClassPath *)puVar19[1];
    local_1c8 = iVar10;
    if (iVar10 == 0) {
      local_1c4 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar10,0,&local_1d0,iVar10,&local_1c4);
      ConstructItems<FSoftClassPath,FSoftClassPath,int>(local_1d0.Data,pFVar33,iVar10);
    }
    local_1b0.ObjectIndex = (int)local_1d8;
    local_1b0.ObjectSerialNumber = local_1d8._4_4_;
    TVar12.DebugPtr = (UScriptStruct *)FWeakObjectPtr::Get(&local_1b0);
    if ((TVar12.DebugPtr != (UScriptStruct *)0x0) && (local_1c8 != 0)) {
      pUVar13 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar22 = local_1c8;
      iVar10 = (int)pUVar13->_padding_;
      if ((*(int *)((TVar12.DebugPtr)->_padding_ + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar13->_padding_)) {
        pFVar16 = GetTypeName<UScriptStruct_const_>(&local_90);
        pwVar28 = L"";
        if ((pFVar16->Data).ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        }
        pFVar16 = GetFullNameForCastLogError<UObject_const_>(local_80,(UObject *)TVar12.DebugPtr);
        if ((pFVar16->Data).ArrayNum != 0) {
          pwVar28 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar28,pwVar25);
      }
      pFVar33 = (FSoftClassPath *)(local_1d0.Data + (longlong)local_1c8 * 0x20);
      local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.ArrayNum = 0;
      local_1f8.ArrayMax = 0;
      this_00.Data = local_1d0.Data;
      while( true ) {
        if (local_1c8 != iVar22) {
          local_208[0] = 0;
          `TCheckedPointerIterator<FSoftClassPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_208);
        }
        FVar7 = local_res20[0];
        if ((FSoftClassPath *)this_00.Data == pFVar33) break;
        local_200.DebugPtr = FSoftClassPath::ResolveClass((FSoftClassPath *)this_00.Data);
        if (GC::GIsIncrementalReachabilityPending == false) {
LAB_1471bcf20:
          TVar20 = local_200;
          if ((local_200.DebugPtr == (UClass *)0x0) ||
             (pUVar13 = UMassProcessor::StaticClass(), pUVar13 == (UClass *)0x0))
          goto LAB_1471bd21b;
          iVar10 = (int)pUVar13->_padding_;
          if (((int)(TVar20.DebugPtr)->_padding_ < iVar10) ||
             ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar10 * 8) !=
              &pUVar13->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if ((!bVar9) || (local_200.DebugPtr == (UClass *)0x0)) goto LAB_1471bd21b;
          uVar18 = ((uint)((ulonglong)local_200.DebugPtr >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_200.DebugPtr >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          iVar10 = TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TSubclassOf<UMassProcessor>_>
                             ((TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
                               *)param_7,uVar18 >> 0x10 ^ uVar18,
                              (TSubclassOf<UMassProcessor> *)&local_200.ObjectPtr);
          TVar20 = local_200;
          if ((iVar10 == -1) ||
             ((lVar21 = *(longlong *)param_7 + (longlong)iVar10 * 0x18, lVar21 == 0 ||
              (puVar19 = (undefined8 *)(lVar21 + 8), puVar19 == (undefined8 *)0x0)))) {
            if ((local_200.DebugPtr == (UClass *)0x0) ||
               (pUVar13 = UMassProcessor::StaticClass(), pUVar13 == (UClass *)0x0)) {
LAB_1471bd02c:
              TVar20.DebugPtr = (UClass *)0x0;
            }
            else {
              iVar10 = (int)pUVar13->_padding_;
              if (((int)(TVar20.DebugPtr)->_padding_ < iVar10) ||
                 ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar10 * 8)
                  != &pUVar13->_padding_)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              TVar20 = local_200;
              if (!bVar9) goto LAB_1471bd02c;
            }
            if (((TVar20.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              UClass::InternalCreateDefaultObjectWrapper(TVar20.DebugPtr);
            }
            pUVar4 = ((TVar20.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr;
            pUVar13 = UMassProcessor::StaticClass();
            lVar21 = *(longlong *)&pUVar4->field_0x10;
            iVar10 = (int)pUVar13->_padding_;
            if (((*(int *)(lVar21 + 0x38) < iVar10) ||
                ((longlong *)*(undefined1 **)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar10 * 8)
                 != &pUVar13->_padding_)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Ret->IsA(T::StaticClass())",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0x1181,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            TVar20 = local_200;
            if ((pUVar4[2].field_0x11 & param_2) == None) goto LAB_1471bd21b;
            local_1a8.ComparisonIndex.Value = 0;
            local_1a8.Number = 0;
            if ((local_200.DebugPtr == (UClass *)0x0) ||
               (pUVar13 = UMassProcessor::StaticClass(), pUVar13 == (UClass *)0x0)) {
LAB_1471bd0e3:
              TVar20.DebugPtr = (UClass *)0x0;
            }
            else {
              iVar10 = (int)pUVar13->_padding_;
              if (((int)(TVar20.DebugPtr)->_padding_ < iVar10) ||
                 ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar10 * 8)
                  != &pUVar13->_padding_)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              TVar20 = local_200;
              if (!bVar9) goto LAB_1471bd0e3;
            }
            local_1e0 = NewObject<UMassProcessor>
                                  (param_3,TVar20.DebugPtr,local_1a8,RF_NoFlags,(UObject *)0x0,false
                                   ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
            local_148 = local_1e0;
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (local_1e0 != (UMassProcessor *)0x0)) {
              GC::MarkAsReachable((UObject *)local_1e0);
            }
            if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e0) &&
                ((FScriptContainerElement *)&local_1e0 <
                 local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 8)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = local_1f8.ArrayNum;
            if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
            }
            local_1f8.ArrayNum = iVar10 + 1;
            *(UMassProcessor **)(local_1f8.AllocatorInstance.Data + (longlong)iVar10 * 8) =
                 local_1e0;
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (local_1e0 != (UMassProcessor *)0x0)) {
              GC::MarkAsReachable((UObject *)local_1e0);
            }
            local_d0 = &local_200;
            local_c8 = &local_148;
            TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TSubclassOf<UMassProcessor>_const_&,UMassProcessor_*_const_&>_>
                      ((TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
                        *)param_7,&local_158,(bool *)&local_d0);
            goto LAB_1471bd21b;
          }
          local_158.Value = (UMassProcessor **)*puVar19;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)local_158.Value != (UObject *)0x0)) {
            GC::MarkAsReachable((UObject *)local_158.Value);
          }
          TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TObjectPtr<UMassProcessor>_>
                    (&local_1f8,(TObjectPtr<UMassProcessor> *)&local_158.Value);
          this_00.Data = this_00.Data + 0x20;
        }
        else {
          if (local_200.DebugPtr != (UClass *)0x0) {
            GC::MarkAsReachable((UObject *)local_200.DebugPtr);
            goto LAB_1471bcf20;
          }
LAB_1471bd21b:
          this_00.Data = this_00.Data + 0x20;
        }
      }
      if (0 < local_1f8.ArrayNum) {
        TVar23.DebugPtr = TVar12.DebugPtr;
        local_1b8.DebugPtr = TVar12.DebugPtr;
        if (((GC::GIsIncrementalReachabilityPending != false) &&
            (GC::MarkAsReachable((UObject *)TVar12.DebugPtr), TVar23 = local_1b8,
            GC::GIsIncrementalReachabilityPending != false)) &&
           (local_1b8.DebugPtr != (UScriptStruct *)0x0)) {
          GC::MarkAsReachable((UObject *)local_1b8.DebugPtr);
        }
        uVar18 = ((uint)((ulonglong)TVar23.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar23.DebugPtr >> 4)) * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        uVar18 = uVar18 >> 0x10 ^ uVar18;
        iVar10 = TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UScriptStruct_const_>_>
                           ((TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                             *)param_6,uVar18,
                            (TObjectPtr<UScriptStruct_const_> *)&local_1b8.ObjectPtr);
        if ((iVar10 == -1) ||
           (lVar21 = *(longlong *)&param_6->Container + (longlong)iVar10 * 0x28, lVar21 == 0)) {
          local_140 = &local_1b8;
          TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<TObjectPtr<UScriptStruct_const_>_&&>_>
                    ((TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
                      *)param_6,(uint)local_1c0,
                     (TKeyInitializer<TObjectPtr<UScriptStruct_const_>_&&> *)(ulonglong)uVar18,
                     (bool *)&local_140);
          lVar21 = *(longlong *)&param_6->Container + (longlong)local_1c0[0] * 0x28;
        }
        this = (FMassRuntimePipeline *)(lVar21 + 8);
        FMassRuntimePipeline::AppendProcessors(this,&local_1f8);
        if (*(int *)(lVar21 + 0x10) != 0) {
          TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
          RemoveAllSwap<_FMassRuntimePipeline::SortByExecutionPriority_::__l2::<lambda_1>_>
                    ((TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *)this,
                     &local_1e8,Default);
          AlgoImpl::
          IntroSortInternal<TObjectPtr<UMassProcessor>,int,FIdentityFunctor,TDereferenceWrapper<TObjectPtr<UMassProcessor>,_FMassRuntimePipeline::SortByExecutionPriority_::__l2::<lambda_2>_>_>
                    ((TObjectPtr<UMassProcessor> *)(this->Processors).AllocatorInstance.Data,
                     *(int *)(lVar21 + 0x10),FVar7,(<lambda_2> *)local_1e7);
        }
        pFVar26 = (FMassEntityManager *)0x0;
        pTVar24 = (TReferenceControllerBase<1> *)param_1->_padding_;
        if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
          aVar6 = pTVar24->SharedReferenceCount;
          do {
            if (aVar6 == (atomic<int>)0x0) {
              pTVar24 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1471bd366;
            }
            LOCK();
            aVar11 = pTVar24->SharedReferenceCount;
            bVar9 = aVar6 == aVar11;
            if (bVar9) {
              pTVar24->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
              aVar11 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar11;
          } while (!bVar9);
          pFVar26 = (FMassEntityManager *)param_1->_padding_;
        }
        if (pFVar26 == (FMassEntityManager *)0x0) {
LAB_1471bd366:
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = &pFVar26->_padding_;
        }
        if ((plVar14 != &param_1->_padding_) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("SharedThis.Get() == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x67f,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((pFVar26 == (FMassEntityManager *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x416,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1a0.Object = pFVar26;
        local_1a0.SharedReferenceCount.ReferenceController = pTVar24;
        if ((pFVar26 == (FMassEntityManager *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x26c,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        FMassRuntimePipeline::Initialize(this,param_3,&local_1a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a0.SharedReferenceCount.ReferenceController);
        pUVar15 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::GetBaseUStruct();
        if (pUVar15 == (UStruct *)0x0) {
LAB_1471bd461:
          local_138.DebugPtr = TVar12.DebugPtr;
          bVar9 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::Add'::__l6::<lambda_1>::operator()(&local_138);
          if (!bVar9) goto LAB_1471bd48f;
        }
        else {
          iVar10 = (int)pUVar15->_padding_;
          if (((int)(TVar12.DebugPtr)->_padding_ < iVar10) ||
             ((longlong *)*(undefined1 **)((TVar12.DebugPtr)->_padding_ + (longlong)iVar10 * 8) !=
              &pUVar15->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) goto LAB_1471bd461;
        }
        iVar10 = FStructTracker::FindOrAddStructTypeIndex
                           (&FMassTagBitSetStructTrackerWrapper::StructTracker,
                            (UStruct *)TVar12.DebugPtr);
        FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)param_5,iVar10);
      }
LAB_1471bd48f:
      if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.AllocatorInstance.Data);
      }
    }
    DestructItems<FSoftClassPath,int>((FSoftClassPath *)local_1d0.Data,local_1c8);
    if ((FSoftClassPath *)local_1d0.Data != (FSoftClassPath *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  } while( true );
}

// ArraysHaveSameContents<FConstSharedStruct,1> @ 1471bf730

bool __cdecl
UE::Mass::Private::ArraysHaveSameContents<FConstSharedStruct,1>
          (TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  iVar7 = CountInvalid<FConstSharedStruct>(param_1);
  iVar8 = CountInvalid<FConstSharedStruct>(param_2);
  iVar1 = param_1->ArrayNum;
  if (iVar1 - iVar7 != param_2->ArrayNum - iVar8) {
    return false;
  }
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar12 = pFVar13 + (longlong)iVar1 * 0x10;
  do {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FConstSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar12) {
      return true;
    }
    if ((*(longlong **)&pFVar13->field_0x0 != (longlong *)0x0) &&
       (lVar2 = **(longlong **)&pFVar13->field_0x0, lVar2 != 0)) {
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar11 = pFVar3;
      while( true ) {
        if (pFVar11 == pFVar3 + (longlong)param_2->ArrayNum * 0x10) {
          return false;
        }
        if ((*(longlong **)pFVar11 != (longlong *)0x0) && (**(longlong **)pFVar11 == lVar2)) break;
        pFVar11 = pFVar11 + 0x10;
      }
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar3 >> 4);
      if (uVar10 == 0xffffffff) {
        return false;
      }
      uVar9 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = FConstSharedStruct::CompareStructValues<FConstSharedStruct>
                        ((FConstSharedStruct *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10),
                         (FConstSharedStruct *)pFVar13,0);
      if (!bVar5) {
        return false;
      }
    }
    pFVar13 = pFVar13 + 0x10;
  } while( true );
}

// ArraysHaveSameContents<FSharedStruct,1> @ 1471bf890

bool __cdecl
UE::Mass::Private::ArraysHaveSameContents<FSharedStruct,1>
          (TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  UScriptStruct *pUVar12;
  void *pvVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  UScriptStruct *this;
  void *pvVar18;
  undefined1 local_res8 [8];
  
  iVar9 = CountInvalid<FSharedStruct>(param_1);
  iVar10 = CountInvalid<FSharedStruct>(param_2);
  iVar1 = param_1->ArrayNum;
  if (iVar1 - iVar9 != param_2->ArrayNum - iVar10) {
    return false;
  }
  pFVar17 = (param_1->AllocatorInstance).Data;
  pFVar16 = pFVar17 + (longlong)iVar1 * 0x10;
  do {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar17 == pFVar16) {
      return true;
    }
    if ((*(longlong **)pFVar17 != (longlong *)0x0) && (lVar2 = **(longlong **)pFVar17, lVar2 != 0))
    {
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar15 = pFVar3;
      while( true ) {
        if (pFVar15 == pFVar3 + (longlong)param_2->ArrayNum * 0x10) {
          return false;
        }
        if ((*(longlong **)pFVar15 != (longlong *)0x0) && (**(longlong **)pFVar15 == lVar2)) break;
        pFVar15 = pFVar15 + 0x10;
      }
      uVar14 = (uint)((longlong)pFVar15 - (longlong)pFVar3 >> 4);
      if (uVar14 == 0xffffffff) {
        return false;
      }
      uVar11 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      plVar4 = *(longlong **)((param_2->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10);
      if (plVar4 == (longlong *)0x0) {
        this = (UScriptStruct *)0x0;
      }
      else {
        this = (UScriptStruct *)*plVar4;
      }
      plVar5 = *(longlong **)pFVar17;
      if (plVar5 == (longlong *)0x0) {
        pUVar12 = (UScriptStruct *)0x0;
      }
      else {
        pUVar12 = (UScriptStruct *)*plVar5;
      }
      if (this != pUVar12) {
        return false;
      }
      if (this != (UScriptStruct *)0x0) {
        if (plVar5 == (longlong *)0x0) {
          pvVar18 = (void *)0x0;
        }
        else {
          pvVar18 = (void *)((longlong)*(short *)(*plVar5 + 0x5c) + 7 + (longlong)plVar5 &
                            -(longlong)*(short *)(*plVar5 + 0x5c));
        }
        if (plVar4 == (longlong *)0x0) {
          pvVar13 = (void *)0x0;
        }
        else {
          pvVar13 = (void *)((longlong)*(short *)(*plVar4 + 0x5c) + 7 + (longlong)plVar4 &
                            -(longlong)*(short *)(*plVar4 + 0x5c));
        }
        bVar7 = UScriptStruct::CompareScriptStruct(this,pvVar13,pvVar18,0);
        if (!bVar7) {
          return false;
        }
      }
    }
    pFVar17 = pFVar17 + 0x10;
  } while( true );
}

// CallCheckBreakpoints<FMassCommandDestroyEntities,TArrayView<FMassEntityHandle_const_,int>_&> @ 1471bfa60

void __cdecl
UE::Mass::Debug::
CallCheckBreakpoints<FMassCommandDestroyEntities,TArrayView<FMassEntityHandle_const_,int>_&>
          (TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  bool bVar1;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = FBreakpoint::CheckDestroyEntityBreakpoints(&local_18);
  if (bVar1) {
    FBreakpoint::DebugBreak();
    return;
  }
  return;
}

// CallCheckBreakpointsByInstance<UE::Mass::Command::FGroupEntities,UE::Mass::FArchetypeGroupHandle_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> @ 1471bfa90

void __cdecl
UE::Mass::Debug::
CallCheckBreakpointsByInstance<UE::Mass::Command::FGroupEntities,UE::Mass::FArchetypeGroupHandle_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
          (FArchetypeGroupHandle *param_1,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// CallCheckBreakpointsByInstance<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> @ 1471bfaa0

void __cdecl
UE::Mass::Debug::
CallCheckBreakpointsByInstance<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// CheckStructContainer<FMassConstSharedFragment,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FConstSharedStruct> @ 1471bfd30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Mass::Private::
CheckStructContainer<FMassConstSharedFragment,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FConstSharedStruct>
          (TArrayView<FConstSharedStruct_const_,int> *param_1,
          TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2,UObject *param_3)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  bool bVar2;
  int iVar3;
  UPackage *pUVar4;
  UScriptStruct *pUVar5;
  UStruct *pUVar6;
  ForAnyElementType FVar7;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar8;
  bool bVar9;
  FConstSharedStruct *pFVar10;
  FConstSharedStruct *pFVar11;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar10 = param_1->DataPtr;
  bVar9 = false;
  pFVar11 = pFVar10 + param_1->ArrayNum;
  pUVar5 = Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton;
  do {
    if (pFVar10 == pFVar11) {
      return bVar9;
    }
    pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
    if ((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
       (TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr,
       TVar8 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
LAB_1471bff5d:
      bVar9 = true;
      if (FVisualLogger::bIsRecording != 0) {
        if (pUVar5 == (UScriptStruct *)0x0) {
          pUVar4 = Z_Construct_UPackage__Script_MassEntity();
          pUVar5 = GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,
                                   (UObject *)pUVar4,L"MassConstSharedFragment");
          Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton = pUVar5;
        }
        local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)pUVar5->_padding_;
        ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_48);
        pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
        if ((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
           (TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr,
           TVar8 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
          ::FString::FString(&local_68,L"None");
        }
        else {
          local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)(TVar8.DebugPtr)->_padding_;
          ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_68);
        }
        FVisualLogger::CategorizedLogfImpl
                  (param_3,(FName *)&LogMass.field_0x4,Error,L"%hs: %s is not a valid %s type");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        pUVar5 = Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          pUVar5 = Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton;
        }
      }
      if (1 < (byte)LogMass._0_1_) {
        if (pUVar5 == (UScriptStruct *)0x0) {
          pUVar4 = Z_Construct_UPackage__Script_MassEntity();
          pUVar5 = GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,
                                   (UObject *)pUVar4,L"MassConstSharedFragment");
          Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton = pUVar5;
        }
        local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)pUVar5->_padding_;
        ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_38);
        pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
        if ((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
           (TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr,
           TVar8 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
          ::FString::FString(&local_58,L"None");
        }
        else {
          local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)(TVar8.DebugPtr)->_padding_;
          ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_58);
        }
        Logging::Private::BasicLog<2>
                  (&`bool___cdecl_UE::Mass::Private::CheckStructContainer<FMassConstSharedFragment,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FConstSharedStruct>(TArrayView<FConstSharedStruct_const_,int>,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_const&___ptr64,UObject_const*___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogMass);
        FVar7.Data = local_38.Data.AllocatorInstance.Data;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
          FVar7.Data = local_38.Data.AllocatorInstance.Data;
        }
LAB_1471c0121:
        bVar9 = true;
        pUVar5 = Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton;
        if (FVar7.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar7.Data);
          pUVar5 = Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton;
        }
      }
    }
    else {
      if (pUVar5 == (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_MassEntity();
        pUVar5 = GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,
                                 (UObject *)pUVar4,L"MassConstSharedFragment");
        Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton = pUVar5;
        if (pUVar5 == (UScriptStruct *)0x0) goto LAB_1471bff5d;
      }
      iVar3 = (int)pUVar5->_padding_;
      if (((int)(TVar8.DebugPtr)->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)((TVar8.DebugPtr)->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1471bff5d;
      pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
      TVar8.DebugPtr = (UScriptStruct *)0x0;
      if (pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
        TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr;
      }
      pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar6 == (UStruct *)0x0) {
LAB_1471bfe2c:
        local_res8 = TVar8;
        bVar2 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Contains'::__l6::<lambda_1>::operator()(&local_res8);
        if (bVar2) goto LAB_1471bfe3d;
LAB_1471bfe63:
        bVar9 = true;
        if (FVisualLogger::bIsRecording != 0) {
          pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
          if ((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
             (TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr,
             TVar8 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
            ::FString::FString(&local_88,L"None");
          }
          else {
            local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)(TVar8.DebugPtr)->_padding_;
            ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_88);
          }
          FVisualLogger::CategorizedLogfImpl
                    (param_3,(FName *)&LogMass.field_0x4,Error,
                     L"%hs: input Composition doesn\'t contain %s");
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        pUVar5 = Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton;
        if ((byte)LogMass._0_1_ < 2) goto LAB_1471c0132;
        pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
        if ((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
           (TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr,
           TVar8 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)(TVar8.DebugPtr)->_padding_;
          ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_78);
        }
        Logging::Private::BasicLog<2>
                  (&`bool___cdecl_UE::Mass::Private::CheckStructContainer<FMassConstSharedFragment,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FConstSharedStruct>(TArrayView<FConstSharedStruct_const_,int>,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_const&___ptr64,UObject_const*___ptr64)'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogMass);
        FVar7.Data = local_78.Data.AllocatorInstance.Data;
        goto LAB_1471c0121;
      }
      iVar3 = (int)pUVar6->_padding_;
      if (((int)(TVar8.DebugPtr)->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)((TVar8.DebugPtr)->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar6->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1471bfe2c;
LAB_1471bfe3d:
      iVar3 = FStructTracker::FindStructTypeIndex
                        (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                         (UStruct *)TVar8.DebugPtr);
      if ((iVar3 == -1) ||
         (bVar2 = FStructTypeBitSet::FConstBitSetContainer::Contains
                            ((FConstBitSetContainer *)param_2,iVar3),
         pUVar5 = Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton, !bVar2)
         ) goto LAB_1471bfe63;
    }
LAB_1471c0132:
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// CheckStructContainer<FMassFragment,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FInstancedStruct> @ 1471c0180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Mass::Private::
CheckStructContainer<FMassFragment,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FInstancedStruct>
          (TArrayView<FInstancedStruct_const_,int> *param_1,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2,UObject *param_3)

{
  UScriptStruct *pUVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  UScriptStruct *pUVar6;
  UStruct *pUVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  FInstancedStruct *pFVar10;
  FInstancedStruct *pFVar11;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar10 = param_1->DataPtr;
  bVar9 = false;
  pFVar11 = pFVar10 + param_1->ArrayNum;
  pUVar6 = Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton;
  do {
    if (pFVar10 == pFVar11) {
      return bVar9;
    }
    pUVar1 = (pFVar10->ScriptStruct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
LAB_1471c0389:
      bVar9 = true;
      if (FVisualLogger::bIsRecording != 0) {
        if (pUVar6 == (UScriptStruct *)0x0) {
          pUVar5 = Z_Construct_UPackage__Script_MassEntity();
          pUVar6 = GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar5,
                                   L"MassFragment");
          Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton = pUVar6;
        }
        local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)pUVar6->_padding_;
        ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_48);
        pUVar6 = (pFVar10->ScriptStruct).field0_0x0.DebugPtr;
        if (pUVar6 == (UScriptStruct *)0x0) {
          ::FString::FString(&local_68,L"None");
        }
        else {
          local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)pUVar6->_padding_;
          ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_68);
        }
        FVisualLogger::CategorizedLogfImpl
                  (param_3,(FName *)&LogMass.field_0x4,Error,L"%hs: %s is not a valid %s type");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        pUVar6 = Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          pUVar6 = Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton;
        }
      }
      if (1 < (byte)LogMass._0_1_) {
        if (pUVar6 == (UScriptStruct *)0x0) {
          pUVar5 = Z_Construct_UPackage__Script_MassEntity();
          pUVar6 = GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar5,
                                   L"MassFragment");
          Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton = pUVar6;
        }
        local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)pUVar6->_padding_;
        ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_38);
        pUVar6 = (pFVar10->ScriptStruct).field0_0x0.DebugPtr;
        if (pUVar6 == (UScriptStruct *)0x0) {
          ::FString::FString(&local_58,L"None");
        }
        else {
          local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)pUVar6->_padding_;
          ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_58);
        }
        Logging::Private::BasicLog<2>
                  (&`bool___cdecl_UE::Mass::Private::CheckStructContainer<FMassFragment,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FInstancedStruct>(TArrayView<FInstancedStruct_const_,int>,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_const&___ptr64,UObject_const*___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogMass);
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
          FVar8.Data = local_38.Data.AllocatorInstance.Data;
        }
LAB_1471c053d:
        bVar9 = true;
        pUVar6 = Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton;
        if (FVar8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar8.Data);
          pUVar6 = Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton;
        }
      }
    }
    else {
      if (pUVar6 == (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_MassEntity();
        pUVar6 = GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar5,
                                 L"MassFragment");
        Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton = pUVar6;
        if (pUVar6 == (UScriptStruct *)0x0) goto LAB_1471c0389;
      }
      iVar4 = (int)pUVar6->_padding_;
      if (((int)pUVar1->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1471c0389;
      TVar2 = (TObjectPtr<UScriptStruct_const_>_u_0)(pFVar10->ScriptStruct).field0_0x0.DebugPtr;
      pUVar7 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar7 == (UStruct *)0x0) {
LAB_1471c0268:
        local_res8 = TVar2;
        bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Contains'::__l6::<lambda_1>::operator()(&local_res8);
        if (bVar3) goto LAB_1471c0279;
LAB_1471c029f:
        bVar9 = true;
        if (FVisualLogger::bIsRecording != 0) {
          pUVar6 = (pFVar10->ScriptStruct).field0_0x0.DebugPtr;
          if (pUVar6 == (UScriptStruct *)0x0) {
            ::FString::FString(&local_88,L"None");
          }
          else {
            local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)pUVar6->_padding_;
            ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_88);
          }
          FVisualLogger::CategorizedLogfImpl
                    (param_3,(FName *)&LogMass.field_0x4,Error,
                     L"%hs: input Composition doesn\'t contain %s");
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        pUVar6 = Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton;
        if ((byte)LogMass._0_1_ < 2) goto LAB_1471c054e;
        pUVar6 = (pFVar10->ScriptStruct).field0_0x0.DebugPtr;
        if (pUVar6 == (UScriptStruct *)0x0) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)pUVar6->_padding_;
          ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_78);
        }
        Logging::Private::BasicLog<2>
                  (&`bool___cdecl_UE::Mass::Private::CheckStructContainer<FMassFragment,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FInstancedStruct>(TArrayView<FInstancedStruct_const_,int>,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_const&___ptr64,UObject_const*___ptr64)'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogMass);
        FVar8.Data = local_78.Data.AllocatorInstance.Data;
        goto LAB_1471c053d;
      }
      iVar4 = (int)pUVar7->_padding_;
      if (((int)(TVar2.DebugPtr)->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)((TVar2.DebugPtr)->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar7->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1471c0268;
LAB_1471c0279:
      iVar4 = FStructTracker::FindStructTypeIndex
                        (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,
                         (UStruct *)TVar2.DebugPtr);
      if ((iVar4 == -1) ||
         (bVar3 = FStructTypeBitSet::FConstBitSetContainer::Contains
                            ((FConstBitSetContainer *)param_2,iVar4),
         pUVar6 = Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton, !bVar3))
      goto LAB_1471c029f;
    }
LAB_1471c054e:
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// CheckStructContainer<FMassSharedFragment,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FSharedStruct> @ 1471c0590

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Mass::Private::
CheckStructContainer<FMassSharedFragment,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FSharedStruct>
          (TArrayView<FSharedStruct_const_,int> *param_1,
          TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2,UObject *param_3)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  bool bVar2;
  int iVar3;
  UPackage *pUVar4;
  UScriptStruct *pUVar5;
  UStruct *pUVar6;
  ForAnyElementType FVar7;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar8;
  bool bVar9;
  FSharedStruct *pFVar10;
  FSharedStruct *pFVar11;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar10 = param_1->DataPtr;
  bVar9 = false;
  pFVar11 = pFVar10 + param_1->ArrayNum;
  pUVar5 = Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton;
  do {
    if (pFVar10 == pFVar11) {
      return bVar9;
    }
    pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
    if ((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
       (TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr,
       TVar8 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
LAB_1471c07bd:
      bVar9 = true;
      if (FVisualLogger::bIsRecording != 0) {
        if (pUVar5 == (UScriptStruct *)0x0) {
          pUVar4 = Z_Construct_UPackage__Script_MassEntity();
          pUVar5 = GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar4,
                                   L"MassSharedFragment");
          Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton = pUVar5;
        }
        local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)pUVar5->_padding_;
        ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_48);
        pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
        if ((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
           (TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr,
           TVar8 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
          ::FString::FString(&local_68,L"None");
        }
        else {
          local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)(TVar8.DebugPtr)->_padding_;
          ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_68);
        }
        FVisualLogger::CategorizedLogfImpl
                  (param_3,(FName *)&LogMass.field_0x4,Error,L"%hs: %s is not a valid %s type");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        pUVar5 = Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          pUVar5 = Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton;
        }
      }
      if (1 < (byte)LogMass._0_1_) {
        if (pUVar5 == (UScriptStruct *)0x0) {
          pUVar4 = Z_Construct_UPackage__Script_MassEntity();
          pUVar5 = GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar4,
                                   L"MassSharedFragment");
          Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton = pUVar5;
        }
        local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)pUVar5->_padding_;
        ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_38);
        pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
        if ((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
           (TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr,
           TVar8 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
          ::FString::FString(&local_58,L"None");
        }
        else {
          local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)(TVar8.DebugPtr)->_padding_;
          ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_58);
        }
        Logging::Private::BasicLog<2>
                  (&`bool___cdecl_UE::Mass::Private::CheckStructContainer<FMassSharedFragment,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FSharedStruct>(TArrayView<FSharedStruct_const_,int>,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_const&___ptr64,UObject_const*___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogMass);
        FVar7.Data = local_38.Data.AllocatorInstance.Data;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
          FVar7.Data = local_38.Data.AllocatorInstance.Data;
        }
LAB_1471c0981:
        bVar9 = true;
        pUVar5 = Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton;
        if (FVar7.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar7.Data);
          pUVar5 = Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton;
        }
      }
    }
    else {
      if (pUVar5 == (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_MassEntity();
        pUVar5 = GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar4,
                                 L"MassSharedFragment");
        Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton = pUVar5;
        if (pUVar5 == (UScriptStruct *)0x0) goto LAB_1471c07bd;
      }
      iVar3 = (int)pUVar5->_padding_;
      if (((int)(TVar8.DebugPtr)->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)((TVar8.DebugPtr)->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1471c07bd;
      pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
      TVar8.DebugPtr = (UScriptStruct *)0x0;
      if (pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
        TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr;
      }
      pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar6 == (UStruct *)0x0) {
LAB_1471c068c:
        local_res8 = TVar8;
        bVar2 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Contains'::__l6::<lambda_1>::operator()(&local_res8);
        if (bVar2) goto LAB_1471c069d;
LAB_1471c06c3:
        bVar9 = true;
        if (FVisualLogger::bIsRecording != 0) {
          pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
          if ((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
             (TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr,
             TVar8 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
            ::FString::FString(&local_88,L"None");
          }
          else {
            local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)(TVar8.DebugPtr)->_padding_;
            ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_88);
          }
          FVisualLogger::CategorizedLogfImpl
                    (param_3,(FName *)&LogMass.field_0x4,Error,
                     L"%hs: input Composition doesn\'t contain %s");
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        pUVar5 = Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton;
        if ((byte)LogMass._0_1_ < 2) goto LAB_1471c0992;
        pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar10->StructMemoryPtr).Object;
        if ((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
           (TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr,
           TVar8 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)(TVar8.DebugPtr)->_padding_;
          ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_78);
        }
        Logging::Private::BasicLog<2>
                  (&`bool___cdecl_UE::Mass::Private::CheckStructContainer<FMassSharedFragment,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FSharedStruct>(TArrayView<FSharedStruct_const_,int>,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_const&___ptr64,UObject_const*___ptr64)'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogMass);
        FVar7.Data = local_78.Data.AllocatorInstance.Data;
        goto LAB_1471c0981;
      }
      iVar3 = (int)pUVar6->_padding_;
      if (((int)(TVar8.DebugPtr)->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)((TVar8.DebugPtr)->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar6->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1471c068c;
LAB_1471c069d:
      iVar3 = FStructTracker::FindStructTypeIndex
                        (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                         (UStruct *)TVar8.DebugPtr);
      if ((iVar3 == -1) ||
         (bVar2 = FStructTypeBitSet::FConstBitSetContainer::Contains
                            ((FConstBitSetContainer *)param_2,iVar3),
         pUVar5 = Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton, !bVar2))
      goto LAB_1471c06c3;
    }
LAB_1471c0992:
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// CheckStructType<FMassObserverExecutionContext> @ 1471c09e0

void __cdecl UE::StructUtils::CheckStructType<FMassObserverExecutionContext>(void)

{
  return;
}

// CheckStructType<FMassRelationFragment> @ 1471c09f0

void __cdecl UE::StructUtils::CheckStructType<FMassRelationFragment>(void)

{
  return;
}

// CheckWrapperType<FConstSharedStruct> @ 1471c0a00

void __cdecl UE::StructUtils::CheckWrapperType<FConstSharedStruct>(void)

{
  return;
}

// CheckWrapperType<FSharedStruct> @ 1471c0a10

void __cdecl UE::StructUtils::CheckWrapperType<FSharedStruct>(void)

{
  return;
}

// ConvertToSubsystemClass<UEngineSubsystem> @ 1471c17d0

TSubclassOf<UEngineSubsystem> __cdecl
UE::Mass::Private::ConvertToSubsystemClass<UEngineSubsystem>(TSubclassOf<USubsystem> param_1)

{
  UObject *pUVar1;
  undefined8 *in_RDX;
  
  pUVar1 = (UObject *)*in_RDX;
  *(UObject **)param_1.Class.field0_0x0 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
}

// ConvertToSubsystemClass<UGameInstanceSubsystem> @ 1471c1810

TSubclassOf<UGameInstanceSubsystem> __cdecl
UE::Mass::Private::ConvertToSubsystemClass<UGameInstanceSubsystem>(TSubclassOf<USubsystem> param_1)

{
  UObject *pUVar1;
  undefined8 *in_RDX;
  
  pUVar1 = (UObject *)*in_RDX;
  *(UObject **)param_1.Class.field0_0x0 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
}

// ConvertToSubsystemClass<ULocalPlayerSubsystem> @ 1471c1850

TSubclassOf<ULocalPlayerSubsystem> __cdecl
UE::Mass::Private::ConvertToSubsystemClass<ULocalPlayerSubsystem>(TSubclassOf<USubsystem> param_1)

{
  UObject *pUVar1;
  undefined8 *in_RDX;
  
  pUVar1 = (UObject *)*in_RDX;
  *(UObject **)param_1.Class.field0_0x0 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
}

// ConvertToSubsystemClass<UWorldSubsystem> @ 1471c1890

TSubclassOf<UWorldSubsystem> __cdecl
UE::Mass::Private::ConvertToSubsystemClass<UWorldSubsystem>(TSubclassOf<USubsystem> param_1)

{
  UObject *pUVar1;
  undefined8 *in_RDX;
  
  pUVar1 = (UObject *)*in_RDX;
  *(UObject **)param_1.Class.field0_0x0 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
}

// CountInvalid<FConstSharedStruct> @ 1471c1fa0

int __cdecl
UE::Mass::Private::CountInvalid<FConstSharedStruct>
          (TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FConstSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong **)pFVar2 == (longlong *)0x0) {
      iVar4 = iVar4 + 1;
      pFVar2 = pFVar2 + 0x10;
    }
    else {
      iVar4 = iVar4 + (uint)(**(longlong **)pFVar2 == 0);
      pFVar2 = pFVar2 + 0x10;
    }
  }
  return iVar4;
}

// CountInvalid<FSharedStruct> @ 1471c2030

int __cdecl
UE::Mass::Private::CountInvalid<FSharedStruct>
          (TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong **)pFVar2 == (longlong *)0x0) {
      iVar4 = iVar4 + 1;
      pFVar2 = pFVar2 + 0x10;
    }
    else {
      iVar4 = iVar4 + (uint)(**(longlong **)pFVar2 == 0);
      pFVar2 = pFVar2 + 0x10;
    }
  }
  return iVar4;
}

// DereferenceIfNecessary<FMassEntityManager,FMassEntityManager_*_&> @ 1471c26a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<FMassEntityManager,FMassEntityManager_*_&>
          (FMassEntityManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FMassObserverManager,FMassObserverManager_*_&> @ 1471c26c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassObserverManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<FMassObserverManager,FMassObserverManager_*_&>
          (FMassObserverManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FMassProcessingPhaseManager,FMassProcessingPhaseManager_*_&> @ 1471c26e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassProcessingPhaseManager * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FMassProcessingPhaseManager,FMassProcessingPhaseManager_*_&>
          (FMassProcessingPhaseManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMassEntitySettings,UMassEntitySettings_*_&> @ 1471c2700

UMassEntitySettings * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMassEntitySettings,UMassEntitySettings_*_&>
          (UMassEntitySettings **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMassObserverRegistry,UMassObserverRegistry_*_&> @ 1471c2720

UMassObserverRegistry * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMassObserverRegistry,UMassObserverRegistry_*_&>
          (UMassObserverRegistry **param_1)

{
  return *param_1;
}

// ExportRequirements<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471c6bb0

void __cdecl
UE::Mass::Private::
ExportRequirements<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1,
          TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UStruct *pUVar5;
  TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *this;
  FMassFragmentRequirementDescription *pFVar6;
  FMassFragmentRequirementDescription *pFVar7;
  UScriptStruct *local_res8;
  UScriptStruct *local_res18;
  
  pFVar6 = param_1->DataPtr;
  pFVar7 = pFVar6 + param_1->ArrayNum;
  do {
    if (pFVar6 == pFVar7) {
      return;
    }
    if (pFVar6->Presence != None) {
      if ((pFVar6->StructType == (UScriptStruct *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Requirement.StructType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                             ,0x19,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pFVar6->AccessMode == ReadOnly) {
        pUVar1 = pFVar6->StructType;
        pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 ::GetBaseUStruct();
        if (pUVar5 == (UStruct *)0x0) {
LAB_1471c6c4f:
          local_res8 = pUVar1;
          bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::Add'::__l6::<lambda_1>::operator()(&local_res8);
          if (!bVar3) goto LAB_1471c6cd8;
        }
        else {
          iVar4 = (int)pUVar5->_padding_;
          if (((int)pUVar1->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1471c6c4f;
        }
        iVar4 = FStructTracker::FindOrAddStructTypeIndex
                          (&FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker,
                           (UStruct *)pUVar1);
        this = param_2;
      }
      else {
        if (pFVar6->AccessMode != ReadWrite) goto LAB_1471c6cd8;
        pUVar1 = pFVar6->StructType;
        pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 ::GetBaseUStruct();
        if (pUVar5 == (UStruct *)0x0) {
LAB_1471c6cab:
          local_res18 = pUVar1;
          bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::Add'::__l6::<lambda_1>::operator()(&local_res18);
          if (!bVar3) goto LAB_1471c6cd8;
        }
        else {
          iVar4 = (int)pUVar5->_padding_;
          if (((int)pUVar1->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1471c6cab;
        }
        iVar4 = FStructTracker::FindOrAddStructTypeIndex
                          (&FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker,
                           (UStruct *)pUVar1);
        this = (TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                *)&param_2->Write;
      }
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)this,iVar4);
    }
LAB_1471c6cd8:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// ExportRequirements<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471c6d00

void __cdecl
UE::Mass::Private::
ExportRequirements<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1,
          TMassExecutionAccess<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UStruct *pUVar5;
  FMassFragmentRequirementDescription *pFVar6;
  FMassFragmentRequirementDescription *pFVar7;
  undefined1 local_res8 [8];
  UScriptStruct *local_res18 [2];
  
  pFVar6 = param_1->DataPtr;
  pFVar7 = pFVar6 + param_1->ArrayNum;
  do {
    if (pFVar6 == pFVar7) {
      return;
    }
    if (pFVar6->Presence != None) {
      if ((pFVar6->StructType == (UScriptStruct *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Requirement.StructType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                             ,0x2e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pFVar6->AccessMode != ReadOnly) {
        local_res8[0] = 0;
        bVar3 = `UE::Mass::Private::
                ExportRequirements<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>'
                ::__l17::<lambda_1>::operator()(local_res8);
        if (!bVar3) goto LAB_1471c6ddc;
      }
      pUVar1 = pFVar6->StructType;
      pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar5 == (UStruct *)0x0) {
LAB_1471c6db0:
        local_res18[0] = pUVar1;
        bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(local_res18);
        if (!bVar3) goto LAB_1471c6ddc;
      }
      else {
        iVar4 = (int)pUVar5->_padding_;
        if (((int)pUVar1->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1471c6db0;
      }
      iVar4 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                         (UStruct *)pUVar1);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)param_2,iVar4);
    }
LAB_1471c6ddc:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// ExportRequirements<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471c6e00

void __cdecl
UE::Mass::Private::
ExportRequirements<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1,
          TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UStruct *pUVar5;
  TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *this;
  FMassFragmentRequirementDescription *pFVar6;
  FMassFragmentRequirementDescription *pFVar7;
  UScriptStruct *local_res8;
  UScriptStruct *local_res18;
  
  pFVar6 = param_1->DataPtr;
  pFVar7 = pFVar6 + param_1->ArrayNum;
  do {
    if (pFVar6 == pFVar7) {
      return;
    }
    if (pFVar6->Presence != None) {
      if ((pFVar6->StructType == (UScriptStruct *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Requirement.StructType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                             ,0x19,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pFVar6->AccessMode == ReadOnly) {
        pUVar1 = pFVar6->StructType;
        pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 ::GetBaseUStruct();
        if (pUVar5 == (UStruct *)0x0) {
LAB_1471c6e9f:
          local_res8 = pUVar1;
          bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::Add'::__l6::<lambda_1>::operator()(&local_res8);
          if (!bVar3) goto LAB_1471c6f28;
        }
        else {
          iVar4 = (int)pUVar5->_padding_;
          if (((int)pUVar1->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1471c6e9f;
        }
        iVar4 = FStructTracker::FindOrAddStructTypeIndex
                          (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)pUVar1
                          );
        this = param_2;
      }
      else {
        if (pFVar6->AccessMode != ReadWrite) goto LAB_1471c6f28;
        pUVar1 = pFVar6->StructType;
        pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 ::GetBaseUStruct();
        if (pUVar5 == (UStruct *)0x0) {
LAB_1471c6efb:
          local_res18 = pUVar1;
          bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::Add'::__l6::<lambda_1>::operator()(&local_res18);
          if (!bVar3) goto LAB_1471c6f28;
        }
        else {
          iVar4 = (int)pUVar5->_padding_;
          if (((int)pUVar1->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1471c6efb;
        }
        iVar4 = FStructTracker::FindOrAddStructTypeIndex
                          (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)pUVar1
                          );
        this = (TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                *)&param_2->Write;
      }
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)this,iVar4);
    }
LAB_1471c6f28:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// ExportRequirements<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471c6f50

void __cdecl
UE::Mass::Private::
ExportRequirements<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1,
          TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UStruct *pUVar5;
  TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *this;
  FMassFragmentRequirementDescription *pFVar6;
  FMassFragmentRequirementDescription *pFVar7;
  UScriptStruct *local_res8;
  UScriptStruct *local_res18;
  
  pFVar6 = param_1->DataPtr;
  pFVar7 = pFVar6 + param_1->ArrayNum;
  do {
    if (pFVar6 == pFVar7) {
      return;
    }
    if (pFVar6->Presence != None) {
      if ((pFVar6->StructType == (UScriptStruct *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Requirement.StructType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirements.cpp"
                             ,0x19,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pFVar6->AccessMode == ReadOnly) {
        pUVar1 = pFVar6->StructType;
        pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 ::GetBaseUStruct();
        if (pUVar5 == (UStruct *)0x0) {
LAB_1471c6fef:
          local_res8 = pUVar1;
          bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::Add'::__l6::<lambda_1>::operator()(&local_res8);
          if (!bVar3) goto LAB_1471c7078;
        }
        else {
          iVar4 = (int)pUVar5->_padding_;
          if (((int)pUVar1->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1471c6fef;
        }
        iVar4 = FStructTracker::FindOrAddStructTypeIndex
                          (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                           (UStruct *)pUVar1);
        this = param_2;
      }
      else {
        if (pFVar6->AccessMode != ReadWrite) goto LAB_1471c7078;
        pUVar1 = pFVar6->StructType;
        pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                 ::GetBaseUStruct();
        if (pUVar5 == (UStruct *)0x0) {
LAB_1471c704b:
          local_res18 = pUVar1;
          bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  ::Add'::__l6::<lambda_1>::operator()(&local_res18);
          if (!bVar3) goto LAB_1471c7078;
        }
        else {
          iVar4 = (int)pUVar5->_padding_;
          if (((int)pUVar1->_padding_ < iVar4) ||
             ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1471c704b;
        }
        iVar4 = FStructTracker::FindOrAddStructTypeIndex
                          (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                           (UStruct *)pUVar1);
        this = (TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                *)&param_2->Write;
      }
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)this,iVar4);
    }
LAB_1471c7078:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// GetAsUStruct<FMassDebugLogFragment> @ 1471c86d0

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FMassDebugLogFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassDebugLogFragment,(UObject *)pUVar1,
                         L"MassDebugLogFragment");
  }
  return Z_Registration_Info_UScriptStruct_FMassDebugLogFragment.OuterSingleton;
}

// GetAsUStruct<FMassRelationFragment> @ 1471c8710

UScriptStruct * __cdecl UE::StructUtils::GetAsUStruct<FMassRelationFragment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar1,
                         L"MassRelationFragment");
  }
  return Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton;
}

// GetStructPtr<FMassChildOfFragment> @ 1471c8b00

/* WARNING: Removing unreachable block (ram,0x0001471c8bb6) */

FMassChildOfFragment * __cdecl
UE::StructUtils::GetStructPtr<FMassChildOfFragment>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FMassChildOfFragment *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassChildOfFragment,(UObject *)pUVar2,
                         L"MassChildOfFragment");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassChildOfFragment,(UObject *)pUVar2,
                           L"MassChildOfFragment");
      if (Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FMassChildOfFragment *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton)->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FMassChildOfFragment.OuterSingleton)->_padding_)) {
      return param_2;
    }
    return (FMassChildOfFragment *)0x0;
  }
  return param_2;
}

// IsA<FMassChunkFragment> @ 1471d1410

bool __cdecl UE::Mass::IsA<FMassChunkFragment>(UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar3 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassChunkFragment,(UObject *)pUVar3,
                           L"MassChunkFragment");
      if (Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsA<FMassConstSharedFragment> @ 1471d1490

bool __cdecl UE::Mass::IsA<FMassConstSharedFragment>(UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,(UObject *)pUVar3,
                           L"MassConstSharedFragment");
      if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->
                 _padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsA<FMassTag> @ 1471d1510

bool __cdecl UE::Mass::IsA<FMassTag>(UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar3,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_> @ 1471d2c40

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_> @ 1471d2ce0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_> @ 1471d2d80

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
          *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassArchetypeFragmentConfig>_> @ 1471d2e20

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassArchetypeFragmentConfig>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FMassArchetypeFragmentConfig> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FMassArchetypeFragmentConfig>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_> @ 1471d2ec0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FMassExecutionContext::FQueryTransientRuntime> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FMassExecutionContext::FQueryTransientRuntime>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_> @ 1471d2f60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
          (ushort param_1,ForElementType<UScriptStruct_const_*> *param_2,int *param_3)

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
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_> @ 1471d3030

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
          (ushort param_1,ForElementType<UScriptStruct_const_*> *param_2,int *param_3)

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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_> @ 1471d3100

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_>
          (ushort param_1,
          ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_> @ 1471d31c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
          (ushort param_1,
          ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_> @ 1471d3280

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_>
          (ushort param_1,
          ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
          *param_2,int *param_3)

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
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_> @ 1471d3350

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_>
          (ushort param_1,ForElementType<FMassExecutionContext::FQueryTransientRuntime> *param_2,
          int *param_3)

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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMassExecutionContext::FQueryTransientRuntime>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 1471d3420

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int *param_5
          ,int *param_6)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassArchetypeFragmentConfig>_> @ 1471d3500

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassArchetypeFragmentConfig>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FMassArchetypeFragmentConfig> *param_4,int *param_5,int *param_6)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMassArchetypeFragmentConfig>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_> @ 1471d3710

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_>
          (uint param_1,uint param_2,
          ForElementType<FMassExecutionContext::FQueryTransientRuntime> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 3) {
    iVar2 = 2;
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMassExecutionContext::FQueryTransientRuntime>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 1471d37d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_> @ 1471d3850

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UScriptStruct_const_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_> @ 1471d38d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_> @ 1471d3950

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_> @ 1471d39d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_> @ 1471d3a50

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassExecutionContext::FQueryTransientRuntime>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FMassExecutionContext::FQueryTransientRuntime> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMassExecutionContext::FQueryTransientRuntime>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// VisitApplyEncoded<1,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d49d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (FBufferedNotificationExecutioner *param_1,
          TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_3)

{
  bool bVar1;
  
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)param_2);
  if (!bVar1) {
    Mass::ObserverManager::FBufferedNotificationExecutioner::operator()
              (param_1,(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        *)param_2,(FEntityCollection *)param_3);
  }
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                    ((FConstBitSetContainer *)&param_2->_padding_);
  if (!bVar1) {
    Mass::ObserverManager::FBufferedNotificationExecutioner::operator()
              (param_1,(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        *)&param_2->_padding_,(FEntityCollection *)param_3);
  }
  return;
}

// VisitApplyEncoded<1,0,UE::Mass::ObserverManager::FBufferedCreationNotificationExecutioner_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4a40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Mass::ObserverManager::FBufferedCreationNotificationExecutioner_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (FBufferedCreationNotificationExecutioner *param_1,
          TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_2)

{
  undefined1 *puVar1;
  FMassEntityHandle FVar2;
  FMassEntityManager *this;
  code *pcVar3;
  bool bVar4;
  IEntityStorageInterface *pIVar5;
  longlong *plVar6;
  FMassArchetypeCompositionDescriptor *pFVar7;
  FMassArchetypeCompositionDescriptor *pFVar8;
  StorageSelector local_res8 [8];
  
  FVar2 = (FMassEntityHandle)param_2->_padding_;
  this = param_1->NotificationContext->ObserverManager->EntityManager;
  bVar4 = FMassEntityManager::IsEntityValid(this,FVar2);
  if (bVar4) {
    local_res8[0] = (StorageSelector)0x0;
    pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
    plVar6 = (longlong *)
             (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,(ulonglong)FVar2 & 0xffffffff);
    pFVar8 = (FMassArchetypeCompositionDescriptor *)plVar6[1];
    pFVar7 = (FMassArchetypeCompositionDescriptor *)*plVar6;
    if (pFVar8 != (FMassArchetypeCompositionDescriptor *)0x0) {
      LOCK();
      puVar1 = &(pFVar8->Fragments).field_0x8;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
    }
    if (pFVar7 != (FMassArchetypeCompositionDescriptor *)0x0) goto LAB_1471d4ae7;
  }
  else {
    pFVar7 = (FMassArchetypeCompositionDescriptor *)0x0;
    pFVar8 = pFVar7;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ArchetypeHandle.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                     ,0x1ff,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1471d4ae7:
  FMassObserverManager::OnCompositionChanged
            (param_1->NotificationContext->ObserverManager,FVar2,pFVar7,CreateEntity,
             param_1->NotificationContext->ProcessingContext);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return;
}

// VisitApplyEncoded<1,0,UE::Mass::Private::FEntityStorageInitializer,TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>_const_&> @ 1471d4b30

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Mass::Private::FEntityStorageInitializer,TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>_const_&>
          (FEntityStorageInitializer *param_1,
          TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
          *param_2)

{
  byte bVar1;
  TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar2 = param_1->EntityStorage;
  bVar1 = pTVar2->TypeIndex;
  if (2 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])();
  *(undefined2 *)((longlong)&pTVar2->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pTVar2->_padding_ + 7) = 0;
  *(undefined4 *)((longlong)&pTVar2->_padding_ + 1) = 0;
  *(undefined4 *)((longlong)&pTVar2->_padding_ + 5) = 0x2000000;
  pTVar2->_padding_ = (longlong)&___7FConcurrentEntityStorage_Mass_UE__6B_;
  pTVar2->_padding_ = 0;
  pTVar2->_padding_ = 0;
  *(undefined4 *)&pTVar2->_padding_ = 0;
  *(undefined1 *)((longlong)&pTVar2->_padding_ + 4) = 0;
  pTVar2->_padding_ = 0;
  pTVar2->_padding_ = 0;
  pTVar2->_padding_ = 0;
  *(undefined1 *)&pTVar2->_padding_ = 0;
  pTVar2 = param_1->EntityStorage;
  if (pTVar2->TypeIndex != '\x02') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Mass::FConcurrentEntityStorage::Initialize
            ((FConcurrentEntityStorage *)pTVar2,(FMassEntityManager_InitParams_Concurrent *)param_2)
  ;
  return;
}

// VisitApplyEncoded<2,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4c30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (FBufferedNotificationExecutioner *param_1,
          TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_3)

{
  int *piVar1;
  FNotificationContext **ppFVar2;
  EMassObservedOperation EVar3;
  int iVar4;
  FMassObserverManager *pFVar5;
  ForElementType<UScriptStruct_const_*> FVar6;
  code *pcVar7;
  bool bVar8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar9;
  undefined4 uStack_5c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> TStack_58;
  TArrayView<FMassArchetypeEntityCollection_const_,int> TStack_48;
  FMassObserverExecutionContext FStack_38;
  
  piVar1 = &(param_1->ObservedTypesOverlap).ArrayNum;
  *piVar1 = 0;
  if ((param_1->ObservedTypesOverlap).ArrayMax < 0) {
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
              (8,8,0,(ForElementType<UScriptStruct_const_*> *)param_1,0,
               &(param_1->ObservedTypesOverlap).ArrayMax);
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)param_2,&param_1->ObservedTypesOverlap);
  EVar3 = param_1->OpType;
  ppFVar2 = &param_1->NotificationContext;
  pFVar5 = (*ppFVar2)->ObserverManager;
  FVar6 = (param_1->ObservedTypesOverlap).AllocatorInstance.SecondaryData;
  FStack_38.TypesInOperation.DataPtr = (UScriptStruct **)param_1;
  if (FVar6 != (ForElementType<UScriptStruct_const_*>)0x0) {
    FStack_38.TypesInOperation.DataPtr = (UScriptStruct **)FVar6;
  }
  iVar4 = *piVar1;
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FStack_38.Operation = param_1->OpType;
  FStack_38.TypesInOperation._12_4_ = uStack_5c;
  FStack_38.TypesInOperation.ArrayNum = iVar4;
  FStack_38.CurrentTypeIndex = -1;
  pTVar9 = Mass::FEntityCollection::GetUpToDatePerArchetypeCollections
                     ((FEntityCollection *)param_3,&TStack_48,
                      (*ppFVar2)->ObserverManager->EntityManager);
  TStack_58.DataPtr = pTVar9->DataPtr;
  TStack_58.ArrayNum = pTVar9->ArrayNum;
  TStack_58._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
  FMassObserverManager::HandleElementsImpl
            ((*ppFVar2)->ProcessingContext,&TStack_58,&FStack_38,pFVar5->FragmentObservers + EVar3);
  return;
}

// VisitApplyEncoded<3,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4c50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (FBufferedNotificationExecutioner *param_1,
          TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_3)

{
  int *piVar1;
  FNotificationContext **ppFVar2;
  EMassObservedOperation EVar3;
  int iVar4;
  FMassObserverManager *pFVar5;
  ForElementType<UScriptStruct_const_*> FVar6;
  code *pcVar7;
  bool bVar8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar9;
  undefined4 uStack_5c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> TStack_58;
  TArrayView<FMassArchetypeEntityCollection_const_,int> TStack_48;
  FMassObserverExecutionContext FStack_38;
  
  piVar1 = &(param_1->ObservedTypesOverlap).ArrayNum;
  *piVar1 = 0;
  if ((param_1->ObservedTypesOverlap).ArrayMax < 0) {
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UScriptStruct_const_*>_>
              (8,8,0,(ForElementType<UScriptStruct_const_*> *)param_1,0,
               &(param_1->ObservedTypesOverlap).ArrayMax);
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::ExportTypes<UScriptStruct,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)param_2,&param_1->ObservedTypesOverlap);
  EVar3 = param_1->OpType;
  ppFVar2 = &param_1->NotificationContext;
  pFVar5 = (*ppFVar2)->ObserverManager;
  FVar6 = (param_1->ObservedTypesOverlap).AllocatorInstance.SecondaryData;
  FStack_38.TypesInOperation.DataPtr = (UScriptStruct **)param_1;
  if (FVar6 != (ForElementType<UScriptStruct_const_*>)0x0) {
    FStack_38.TypesInOperation.DataPtr = (UScriptStruct **)FVar6;
  }
  iVar4 = *piVar1;
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FStack_38.Operation = param_1->OpType;
  FStack_38.TypesInOperation._12_4_ = uStack_5c;
  FStack_38.TypesInOperation.ArrayNum = iVar4;
  FStack_38.CurrentTypeIndex = -1;
  pTVar9 = Mass::FEntityCollection::GetUpToDatePerArchetypeCollections
                     ((FEntityCollection *)param_3,&TStack_48,
                      (*ppFVar2)->ObserverManager->EntityManager);
  TStack_58.DataPtr = pTVar9->DataPtr;
  TStack_58.ArrayNum = pTVar9->ArrayNum;
  TStack_58._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
  FMassObserverManager::HandleElementsImpl
            ((*ppFVar2)->ProcessingContext,&TStack_58,&FStack_38,pFVar5->TagObservers + EVar3);
  return;
}

// VisitApplyEncoded<4,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4c60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (FBufferedNotificationExecutioner *param_1,
          TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_3)

{
  return;
}

// VisitApplyEncoded<5,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4c70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (FBufferedNotificationExecutioner *param_1,
          TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_3)

{
  FMassEntityHandle FVar1;
  bool bVar2;
  
  FVar1 = (FMassEntityHandle)param_3->_padding_;
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)param_2);
  if (!bVar2) {
    Mass::ObserverManager::FBufferedNotificationExecutioner::operator()
              (param_1,(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        *)param_2,FVar1);
  }
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                    ((FConstBitSetContainer *)&param_2->_padding_);
  if (!bVar2) {
    Mass::ObserverManager::FBufferedNotificationExecutioner::operator()
              (param_1,(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        *)&param_2->_padding_,FVar1);
  }
  return;
}

// VisitApplyEncoded<6,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4ce0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (FBufferedNotificationExecutioner *param_1,
          TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_3)

{
  Mass::ObserverManager::FBufferedNotificationExecutioner::operator()
            (param_1,(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)param_2,(FMassEntityHandle)param_3->_padding_);
  return;
}

// VisitApplyEncoded<7,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4cf0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (FBufferedNotificationExecutioner *param_1,
          TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_3)

{
  Mass::ObserverManager::FBufferedNotificationExecutioner::operator()
            (param_1,(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *
                     )param_2,(FMassEntityHandle)param_3->_padding_);
  return;
}

// VisitApplyEncoded<0,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4d00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,1,UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (FBufferedNotificationExecutioner *param_1,
          TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_3)

{
  int iVar1;
  void *_Src;
  FMassArchetypeEntityCollection *pFVar2;
  longlong lVar3;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  local_30 = (int)param_3->_padding_;
  lVar3 = (longlong)local_30;
  _Src = (void *)param_3->_padding_;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar3 << 3);
  }
  iVar1 = (int)param_3->_padding_;
  pFVar2 = (FMassArchetypeEntityCollection *)param_3->_padding_;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = iVar1;
  if (iVar1 == 0) {
    local_1c = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar1,0,&local_28,iVar1,&local_1c);
    ConstructItems<FMassArchetypeEntityCollection,FMassArchetypeEntityCollection,int>
              (local_28.Data,pFVar2,iVar1);
  }
  local_18 = (undefined4)param_3->_padding_;
  DestructItems<FMassArchetypeEntityCollection,int>
            ((FMassArchetypeEntityCollection *)local_28.Data,local_20);
  if ((FMassArchetypeEntityCollection *)local_28.Data != (FMassArchetypeEntityCollection *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// VisitApplyEncoded<0,0,UE::Mass::ObserverManager::FBufferedCreationNotificationExecutioner_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4e20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Mass::ObserverManager::FBufferedCreationNotificationExecutioner_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (FBufferedCreationNotificationExecutioner *param_1,
          TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_2)

{
  FMassObserverManager *this;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar1;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_28;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_18;
  
  this = param_1->NotificationContext->ObserverManager;
  pTVar1 = Mass::FEntityCollection::GetUpToDatePerArchetypeCollections
                     ((FEntityCollection *)param_2,&local_18,this->EntityManager);
  local_28.DataPtr = pTVar1->DataPtr;
  local_28.ArrayNum = pTVar1->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
  FMassObserverManager::OnCollectionsCreatedImpl
            (this,param_1->NotificationContext->ProcessingContext,&local_28);
  return;
}

// VisitApplyEncoded<0,0,UE::Mass::Private::FEntityStorageInitializer,TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>_const_&> @ 1471d4e80

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Mass::Private::FEntityStorageInitializer,TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>_const_&>
          (FEntityStorageInitializer *param_1,
          TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
          *param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>
  *pTVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  FEntityData *pFVar9;
  FLLMScope aFStackX_8 [2];
  FMemScope FStackX_18;
  
  pTVar4 = param_1->EntityStorage;
  bVar2 = pTVar4->TypeIndex;
  if (2 < (ulonglong)bVar2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar2])(pTVar4);
  *(undefined8 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  pTVar4->_padding_ = (longlong)&___7FSingleThreadedEntityStorage_Mass_UE__6B_;
  *(undefined4 *)&pTVar4->_padding_ = 0;
  TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
  ::
  TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
              *)&pTVar4->_padding_,0);
  pTVar4->_padding_ = 0;
  pTVar4->_padding_ = 0;
  pTVar4->TypeIndex = '\x01';
  pTVar4 = param_1->EntityStorage;
  if (pTVar4->TypeIndex != '\x01') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name121,L"Mass/SingleThreadedStorage");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(aFStackX_8,LLMScope_Name121,false,None,Default,true);
  FMemScope::FMemScope(&FStackX_18,&LLMScope_Name121,true);
  LOCK();
  plVar1 = &pTVar4->_padding_;
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  if ((int)pTVar4->_padding_ < 1) {
    iVar8 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
            ::Add((TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
                   *)&pTVar4->_padding_,1);
  }
  else {
    iVar3 = (int)pTVar4->_padding_;
    iVar8 = *(int *)(pTVar4->_padding_ + -4 + (longlong)iVar3 * 4);
    *(int *)&pTVar4->_padding_ = iVar3 + -1;
  }
  pFVar9 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[]((TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
                         *)&pTVar4->_padding_,iVar8);
  pFVar9->SerialNumber = (int)lVar6;
  FMemScope::~FMemScope(&FStackX_18);
  FLLMScope::~FLLMScope(aFStackX_8);
  if (iVar8 != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SentinelEntity.Index == UE::Mass::Private::InvalidEntityIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                       ,0x27,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// VisitImpl<UE::Mass::ObserverManager::FBufferedCreationNotificationExecutioner_&,0,1,0,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4ed0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitImpl<UE::Mass::ObserverManager::FBufferedCreationNotificationExecutioner_&,0,1,0,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (ulong64 param_1,FBufferedCreationNotificationExecutioner *param_2,
          TIntegerSequence<unsigned___int64,0,1> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001471d4ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Mass::ObserverManager::FBufferedCreationNotificationExecutioner&___ptr64,0,1,0,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>&___ptr64>(unsigned___int64,UE::Mass::ObserverManager::FBufferedCreationNotificationExecutioner&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// VisitImpl<UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,0,1,2,3,4,5,6,7,0,1,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&> @ 1471d4ef0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitImpl<UE::Mass::ObserverManager::FBufferedNotificationExecutioner_&,0,1,2,3,4,5,6,7,0,1,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>_&,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>_&>
          (ulong64 param_1,FBufferedNotificationExecutioner *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7> *param_3,
          TIntegerSequence<unsigned___int64,0,1> *param_4,
          TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_5,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001471d4f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Mass::ObserverManager::FBufferedNotificationExecutioner&___ptr64,0,1,2,3,4,5,6,7,0,1,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>&___ptr64,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>&___ptr64>(unsigned___int64,UE::Mass::ObserverManager::FBufferedNotificationExecutioner&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7>&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>&___ptr64,TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5,param_6);
  return;
}

// VisitImpl<UE::Mass::Private::FEntityStorageInitializer,0,1,0,TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>_const_&> @ 1471d4f20

void __cdecl
UE::Core::Private::
VisitImpl<UE::Mass::Private::FEntityStorageInitializer,0,1,0,TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>_const_&>
          (ulong64 param_1,FEntityStorageInitializer *param_2,
          TIntegerSequence<unsigned___int64,0,1> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
          *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001471d4f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Mass::Private::FEntityStorageInitializer,0,1,0,TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>_const&___ptr64>(unsigned___int64,UE::Mass::Private::FEntityStorageInitializer&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>_const&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// operator() @ 1471e4880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Mass::Debug::<lambda_26>::operator()
          (<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int local_res10 [2];
  int local_res18 [4];
  
  if (param_1->ArrayNum == 2) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    pwVar5 = L"";
    local_res10[0] = -1;
    local_res18[0] = -1;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)pFVar1;
    }
    bVar3 = LexTryParseString<int>(local_res10,pwVar4);
    if (bVar3) {
      if ((param_1->ArrayNum < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 0x18) != 0) {
        pwVar5 = *(wchar_t **)(pFVar1 + 0x10);
      }
      bVar3 = LexTryParseString<int>(local_res18,pwVar5);
      if (bVar3) {
        DebugEntityBegin = local_res10[0];
        DebugEntityEnd = local_res18[0];
      }
      else if (3 < (byte)LogConsoleResponse._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        return;
      }
    }
    else if (3 < (byte)LogConsoleResponse._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else if (3 < (byte)LogConsoleResponse._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  return;
}

// operator() @ 1471e49c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Debug::<lambda_28>::operator()
          (<lambda_28> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  UMassEntitySubsystem *pUVar5;
  wchar_t *pwVar6;
  int local_res18 [4];
  FString local_28;
  
  if ((param_2 == (UWorld *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassDebugger.cpp"
                         ,200,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar5 = UWorld::GetSubsystem<UMassEntitySubsystem>(param_2);
  if (pUVar5 == (UMassEntitySubsystem *)0x0) {
    if (param_2 == (UWorld *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_28,(UObject *)0x0);
    }
    FOutputDevice::LogfImpl(param_3,Error,L"Failed to find MassEntitySubsystem for world %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_res18[0] = -1;
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)pFVar1;
    }
    bVar4 = LexTryParseString<int>(local_res18,pwVar6);
    iVar3 = local_res18[0];
    if (bVar4) {
      if (((pUVar5->EntityManager).Object == (FMassEntityManager *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntityManager",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                             ,0x23,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FMassDebugger::OutputEntityDescription(param_3,(pUVar5->EntityManager).Object,iVar3,L"");
    }
    else {
      FOutputDevice::LogfImpl(param_3,Error,L"Entity index parameter must be an integer");
    }
  }
  return;
}

// operator() @ 1471e4b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Debug::<lambda_29>::operator()
          (<lambda_29> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWorld *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  ENetMode EVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  USubsystem *pUVar11;
  wchar_t *pwVar12;
  undefined1 local_98 [8];
  FString local_90;
  FString local_80;
  FString local_70;
  undefined1 local_60 [16];
  int local_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  int *piStack_40;
  undefined8 local_38;
  
  local_60._0_8_ = (GEngine->WorldList).Array.AllocatorInstance.Data;
  local_60._8_8_ = &(GEngine->WorldList).Array.ArrayNum;
  local_50 = *(int *)local_60._8_8_;
  pFVar1 = (FScriptContainerElement *)(local_60._0_8_ + (longlong)local_50 * 8);
  local_38 = CONCAT44(uStack_4c,local_50);
  local_48 = (FScriptContainerElement *)local_60._0_8_;
  piStack_40 = (int *)local_60._8_8_;
  do {
    while( true ) {
      pFVar5 = local_48;
      if (*piStack_40 != (int)local_38) {
        local_98[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_98);
      }
      if (pFVar5 == pFVar1) {
        return;
      }
      this_00 = *(UWorld **)(*(longlong *)pFVar5 + 0x2c0);
      if ((this_00 != (UWorld *)0x0) && (bVar6 = UWorld::IsPreviewWorld(this_00), !bVar6)) break;
LAB_1471e4e70:
      local_48 = pFVar5 + 8;
    }
    EVar8 = UWorld::InternalGetNetMode(this_00);
    ::ToString(&local_70,EVar8);
    ::LexToString((uint)(this_00->WorldType).Value);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_90,(UObject *)0x0);
    FOutputDevice::LogfImpl
              (param_3,Log,L"Dumping description of archetypes for world: %s (%s - %s)");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    pUVar9 = UMassEntitySubsystem::StaticClass();
    if (GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar9 != (UClass *)0x0) goto LAB_1471e4cb9;
LAB_1471e4ce7:
      pUVar9 = (UClass *)0x0;
    }
    else {
      if (pUVar9 == (UClass *)0x0) goto LAB_1471e4ce7;
      GC::MarkAsReachable((UObject *)pUVar9);
LAB_1471e4cb9:
      pUVar10 = UMassEntitySubsystem::StaticClass();
      if (pUVar10 == (UClass *)0x0) goto LAB_1471e4ce7;
      iVar2 = (int)pUVar10->_padding_;
      if (((int)pUVar9->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar10->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_1471e4ce7;
    }
    pUVar11 = FSubsystemCollectionBase::GetSubsystemInternal
                        ((FSubsystemCollectionBase *)&this_00->SubsystemCollection,pUVar9);
    if (pUVar11 == (USubsystem *)0x0) {
      EVar8 = UWorld::InternalGetNetMode(this_00);
      ::ToString((FString *)local_60,EVar8);
      ::LexToString((uint)(this_00->WorldType).Value);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_80,(UObject *)0x0);
      FOutputDevice::LogfImpl
                (param_3,Error,L"Failed to find MassEntitySubsystem for world: %s (%s - %s)");
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_60._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_60._0_8_);
      }
      goto LAB_1471e4e70;
    }
    bVar6 = true;
    if (param_1->ArrayNum != 0) {
      if ((param_1->ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar3 + 8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)pFVar3;
      }
      bVar6 = FToBoolHelper::FromCStringWide(pwVar12);
    }
    FOutputDevice::LogfImpl(param_3,Log,L"Include empty archetypes: %s");
    if ((pUVar11[1]._padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                           ,0x23,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FMassEntityManager::DebugGetArchetypesStringDetails
              ((FMassEntityManager *)pUVar11[1]._padding_,param_3,bVar6);
    local_48 = pFVar5 + 8;
  } while( true );
}

// operator() @ 1471e5f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Mass::Debug::<lambda_31>::operator()
          (<lambda_31> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> this_00;
  longlong lVar5;
  FName local_28;
  FString local_20;
  
  lVar5 = (longlong)FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum;
  this_00 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dc5e0;
  if (FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.AllocatorInstance.
      SecondaryData != (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
    this_00 = FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
              AllocatorInstance.SecondaryData;
  }
  if ((FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar1 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
          ((longlong)this_00 + lVar5 * 8);
  for (; this_00 != FVar1;
      this_00 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
                ((longlong)this_00 + 8)) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (pUVar4 != (UObject *)0x0) {
      local_28.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_28.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_28,&local_20);
      FOutputDevice::LogfImpl(param_3,Log,L"%s, size: %d");
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 1471e6090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Debug::<lambda_32>::operator()
          (<lambda_32> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  code *pcVar1;
  bool bVar2;
  UMassEntitySubsystem *pUVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [72];
  void *local_d0;
  undefined4 local_c8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c0;
  void *local_80;
  undefined4 local_78;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_70;
  void *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (param_2 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassDebugger.cpp"
                       ,0x126,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = UWorld::GetSubsystem<UMassEntitySubsystem>(param_2);
  if (pUVar3 != (UMassEntitySubsystem *)0x0) {
    FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_118);
    (**(code **)(pUVar3->_padding_ + 400))(pUVar3,local_118);
    FResourceSizeEx::GetDedicatedSystemMemoryBytes((FResourceSizeEx *)local_118);
    FOutputDevice::LogfImpl(param_3,Log,L"MassEntity system uses: %d bytes");
    local_28 = 0;
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_70);
    local_78 = 0;
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c0);
    local_c8 = 0;
    if (local_d0 != (void *)0x0) {
      FMemory::Free(local_d0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_118 + 8));
  }
  return;
}

// operator() @ 1471e61d0

void __thiscall UE::Mass::Debug::<lambda_33>::operator()(<lambda_33> *this,FOutputDevice *param_1)

{
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar5;
  longlong lVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  FOutputDevice::Log(param_1,L"Known tags:");
  lVar6 = (longlong)FMassTagBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum;
  FVar5 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dcad0;
  if (FMassTagBitSetStructTrackerWrapper::StructTracker.StructTypesList.AllocatorInstance.
      SecondaryData != (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar5 = FMassTagBitSetStructTrackerWrapper::StructTracker.StructTypesList.AllocatorInstance.
            SecondaryData;
  }
  if ((FMassTagBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar1 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
          ((longlong)FVar5 + lVar6 * 8);
  for (; FVar5 != FVar1;
      FVar5 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)((longlong)FVar5 + 8))
  {
    local_res10 = *(FWeakObjectPtr *)FVar5;
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_res10);
      local_90.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_90.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_90,&local_70);
      FOutputDevice::LogfImpl(param_1,L"\t%d. %s");
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
  FOutputDevice::Log(param_1,L"Known Fragments:");
  lVar6 = (longlong)FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum;
  FVar5 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dc5e0;
  if (FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.AllocatorInstance.
      SecondaryData != (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar5 = FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.AllocatorInstance
            .SecondaryData;
  }
  if ((FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar1 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
          ((longlong)FVar5 + lVar6 * 8);
  for (; FVar5 != FVar1;
      FVar5 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)((longlong)FVar5 + 8))
  {
    local_res18 = *(FWeakObjectPtr *)FVar5;
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_res18);
      local_88.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_88.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_88,&local_60);
      FOutputDevice::LogfImpl(param_1,L"\t%d. %s");
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
  }
  FOutputDevice::Log(param_1,L"Known Shared Fragments:");
  lVar6 = (longlong)
          FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum;
  FVar5 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dd4b0;
  if (FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.AllocatorInstance
      .SecondaryData != (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar5 = FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
            AllocatorInstance.SecondaryData;
  }
  if ((FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar1 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
          ((longlong)FVar5 + lVar6 * 8);
  for (; FVar5 != FVar1;
      FVar5 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)((longlong)FVar5 + 8))
  {
    local_res20 = *(FWeakObjectPtr *)FVar5;
    bVar3 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_res20);
      local_80.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_80.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_80,&local_50);
      FOutputDevice::LogfImpl(param_1,L"\t%d. %s");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  FOutputDevice::Log(param_1,L"Known Chunk Fragments:");
  lVar6 = (longlong)
          FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum;
  FVar5 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x1551dcfc0;
  if (FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.AllocatorInstance.
      SecondaryData != (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar5 = FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.
            AllocatorInstance.SecondaryData;
  }
  if ((FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.StructTypesList.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar1 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
          ((longlong)FVar5 + lVar6 * 8);
  for (; FVar5 != FVar1;
      FVar5 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)((longlong)FVar5 + 8))
  {
    local_98 = *(FWeakObjectPtr *)FVar5;
    bVar3 = FWeakObjectPtr::IsValid(&local_98);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_98);
      local_78.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_78.Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(&local_78,&local_40);
      FOutputDevice::LogfImpl(param_1,L"\t%d. %s");
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 1471e6550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Debug::<lambda_34>::operator()
          (<lambda_34> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  FMassEntityHandle FVar2;
  bool bVar3;
  FMassEntityManager *this_00;
  wchar_t *pwVar4;
  int local_res10;
  int iStackX_14;
  
  if (param_1->ArrayNum == 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_res10 = -1;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)pFVar1;
    }
    bVar3 = LexTryParseString<int>(&local_res10,pwVar4);
    if (bVar3) {
      if (param_2 == (UWorld *)0x0) {
        if (3 < (byte)LogConsoleResponse._0_1_) {
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
          return;
        }
      }
      else {
        this_00 = Utils::GetEntityManagerChecked(param_2);
        FMassEntityManager::CreateEntityIndexHandle(this_00,(int)&local_res10);
        FVar2.SerialNumber = iStackX_14;
        FVar2.Index = local_res10;
        if ((local_res10 != 0) && (iStackX_14 != 0)) {
          FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>
                    ((this_00->DeferredCommandBuffers).Elements[this_00->OpenedCommandBufferIndex].
                     Object,FVar2);
          return;
        }
        if (3 < (byte)LogConsoleResponse._0_1_) {
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
          return;
        }
      }
    }
    else if (3 < (byte)LogConsoleResponse._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else if (3 < (byte)LogConsoleResponse._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  return;
}

// operator() @ 1471e6680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Debug::<lambda_35>::operator()
          (<lambda_35> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  FMassEntityManager *this_00;
  longlong *plVar2;
  code *pcVar3;
  FMassEntityHandle FVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UMassEntitySubsystem *pUVar10;
  FEnvironment *pFVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  uint uVar14;
  int local_res18 [2];
  int local_res20;
  int iStackX_24;
  
  if (param_2 == (UWorld *)0x0) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else {
    local_res18[0] = -1;
    if (0 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)pFVar1;
      }
      LexTryParseString<int>(local_res18,pwVar12);
    }
    iVar5 = local_res18[0];
    DebugEntityBegin = local_res18[0];
    DebugEntityEnd = local_res18[0];
    pUVar10 = UWorld::GetSubsystem<UMassEntitySubsystem>(param_2);
    if ((pUVar10 == (UMassEntitySubsystem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                           ,0x71,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((pUVar10->EntityManager).Object == (FMassEntityManager *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                           ,0x24,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (pUVar10->EntityManager).Object;
    FMassEntityManager::CreateEntityIndexHandle(this_00,(int)&local_res20);
    FVar4.SerialNumber = iStackX_24;
    FVar4.Index = local_res20;
    if (((local_res20 == 0) || (iStackX_24 == 0)) && (iVar5 != -1)) {
      if (3 < (byte)LogConsoleResponse._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        return;
      }
    }
    else {
      bVar6 = FMassEntityManager::IsEntityValid(this_00,FVar4);
      if (bVar6) {
        DebugEntityBegin = local_res20;
        DebugEntityEnd = local_res20;
        pFVar11 = FMassDebugger::GetActiveEnvironmentChecked(this_00);
        pFVar11->SelectedEntity = FVar4;
        EnterCriticalSection((LPCRITICAL_SECTION)&FMassDebugger::OnEntitySelectedDelegate);
        bVar6 = false;
        FMassDebugger::OnEntitySelectedDelegate._60_4_ =
             FMassDebugger::OnEntitySelectedDelegate._60_4_ + 1;
        uVar14 = FMassDebugger::OnEntitySelectedDelegate._48_4_ - 1;
        if (-1 < (int)uVar14) {
          lVar13 = (longlong)(int)uVar14 << 4;
          bVar6 = false;
          do {
            uVar9 = 0;
            if ((int)uVar14 < (int)FMassDebugger::OnEntitySelectedDelegate._48_4_) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
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
            if (((*(int *)(lVar13 + 8 + FMassDebugger::OnEntitySelectedDelegate._40_8_) == 0) ||
                (plVar2 = *(longlong **)(lVar13 + FMassDebugger::OnEntitySelectedDelegate._40_8_),
                plVar2 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar2 + 0x68))(plVar2,this_00,FVar4), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar13 = lVar13 + -0x10;
            uVar14 = uVar14 - 1;
          } while (-1 < (int)uVar14);
        }
        FMassDebugger::OnEntitySelectedDelegate._60_4_ =
             FMassDebugger::OnEntitySelectedDelegate._60_4_ + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                     &FMassDebugger::OnEntitySelectedDelegate,false);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&FMassDebugger::OnEntitySelectedDelegate);
      }
    }
  }
  return;
}

// operator() @ 1471e6910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Debug::<lambda_36>::operator()
          (<lambda_36> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  int iVar1;
  FMassEntityManager *pFVar2;
  FMassEntityHandle FVar3;
  code *pcVar4;
  bool bVar5;
  UMassEntitySubsystem *pUVar6;
  FEnvironment *pFVar7;
  TNotNull<UScriptStruct_const_*> TVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [8];
  
  if (param_2 == (UWorld *)0x0) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else if (param_1->ArrayNum == 0) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else {
    pUVar6 = UWorld::GetSubsystem<UMassEntitySubsystem>(param_2);
    if ((pUVar6 == (UMassEntitySubsystem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                           ,0x71,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((pUVar6->EntityManager).Object == (FMassEntityManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                           ,0x24,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (pUVar6->EntityManager).Object;
    pFVar7 = FMassDebugger::GetActiveEnvironmentChecked(pFVar2);
    FVar3 = pFVar7->SelectedEntity;
    if ((FVar3.Index != 0) && (FVar3.SerialNumber != 0)) {
      pFVar9 = (param_1->AllocatorInstance).Data;
      iVar1 = param_1->ArrayNum;
      pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
      do {
        while( true ) {
          if (param_1->ArrayNum != iVar1) {
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (pFVar9 == pFVar10) {
            return;
          }
          TVar8.Val = (UScriptStruct *)
                      FStructTracker::DebugFindTypeByPartialName
                                (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,
                                 (FString *)pFVar9);
          if (((TVar8.Val == (UScriptStruct *)0x0) &&
              (TVar8.Val = (UScriptStruct *)
                           FStructTracker::DebugFindTypeByPartialName
                                     (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                                      (FString *)pFVar9), TVar8.Val == (UScriptStruct *)0x0)) &&
             (TVar8.Val = (UScriptStruct *)
                          FStructTracker::DebugFindTypeByPartialName
                                    (&FMassConstSharedFragmentBitSetStructTrackerWrapper::
                                      StructTracker,(FString *)pFVar9),
             TVar8.Val == (UScriptStruct *)0x0)) break;
          FMassDebugger::SetFragmentWriteBreakpoint(pFVar2,TVar8,FVar3);
LAB_1471e6abb:
          pFVar9 = pFVar9 + 0x10;
        }
        if ((byte)LogConsoleResponse._0_1_ < 4) goto LAB_1471e6abb;
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        pFVar9 = pFVar9 + 0x10;
      } while( true );
    }
    if (3 < (byte)LogConsoleResponse._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
  }
  return;
}

// operator() @ 1471e6b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Debug::<lambda_37>::operator()
          (<lambda_37> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  int iVar1;
  FMassEntityManager *pFVar2;
  FMassEntityHandle FVar3;
  code *pcVar4;
  bool bVar5;
  UMassEntitySubsystem *pUVar6;
  FEnvironment *pFVar7;
  UScriptStruct *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  if (param_2 == (UWorld *)0x0) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else if (param_1->ArrayNum == 0) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else {
    pUVar6 = UWorld::GetSubsystem<UMassEntitySubsystem>(param_2);
    if ((pUVar6 == (UMassEntitySubsystem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                           ,0x71,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((pUVar6->EntityManager).Object == (FMassEntityManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                           ,0x24,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (pUVar6->EntityManager).Object;
    pFVar7 = FMassDebugger::GetActiveEnvironmentChecked(pFVar2);
    FVar3 = pFVar7->SelectedEntity;
    if ((FVar3.Index == 0) || (FVar3.SerialNumber == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    iVar1 = param_1->ArrayNum;
    pFVar9 = (param_1->AllocatorInstance).Data;
    pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar9 == pFVar10) break;
      pUVar8 = (UScriptStruct *)
               FStructTracker::DebugFindTypeByPartialName
                         (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(FString *)pFVar9)
      ;
      if (((pUVar8 == (UScriptStruct *)0x0) &&
          (pUVar8 = (UScriptStruct *)
                    FStructTracker::DebugFindTypeByPartialName
                              (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                               (FString *)pFVar9), pUVar8 == (UScriptStruct *)0x0)) &&
         (pUVar8 = (UScriptStruct *)
                   FStructTracker::DebugFindTypeByPartialName
                             (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                              (FString *)pFVar9), pUVar8 == (UScriptStruct *)0x0)) {
        if ((byte)LogConsoleResponse._0_1_ < 4) {
LAB_1471e6ce5:
          pFVar9 = pFVar9 + 0x10;
        }
        else {
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
          pFVar9 = pFVar9 + 0x10;
        }
      }
      else {
        if (!bVar5) {
          local_res20 = 0;
          FMassDebugger::ClearFragmentWriteBreak(pFVar2,pUVar8,(FMassEntityHandle)0x0);
          goto LAB_1471e6ce5;
        }
        FMassDebugger::ClearFragmentWriteBreak(pFVar2,pUVar8,FVar3);
        pFVar9 = pFVar9 + 0x10;
      }
    }
  }
  return;
}

// AddRoleInstance @ 1471ef480

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

void __cdecl
UE::Mass::Relations::Private::AddRoleInstance
          (FMassEntityManager *param_1,FRelationData *param_2,FMassEntityHandle param_3,
          FMassEntityHandle param_4,FMassEntityHandle param_5,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_6)

{
  FMassEntityHandle local_res18;
  FMassEntityHandle local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  HandleRole(param_1,param_2,&local_res18,Object,&local_res20,&param_5,param_6);
  HandleRole(param_1,param_2,&local_res20,Subject,&local_res18,&param_5,param_6);
  return;
}

// ConvertArchetypelessSubchunksIntoEntityHandles @ 147206bd0

void __cdecl
UE::Mass::Private::ConvertArchetypelessSubchunksIntoEntityHandles
          (TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *param_1,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  FArchetypeEntityRange *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FArchetypeEntityRange *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FArchetypeEntityRange *pFVar11;
  longlong lVar12;
  
  pFVar7 = param_1->DataPtr;
  iVar6 = 0;
  pFVar1 = pFVar7 + param_1->ArrayNum;
  for (pFVar11 = pFVar7; pFVar11 != pFVar1; pFVar11 = pFVar11 + 1) {
    iVar6 = iVar6 + pFVar11->Length;
  }
  uVar9 = (ulonglong)param_2->ArrayNum;
  iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar6,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  DefaultConstructItems<FMassEntityHandle,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8,iVar6);
  uVar10 = uVar9;
  do {
    if (pFVar7 == pFVar1) {
      return;
    }
    iVar6 = pFVar7->SubchunkStart;
    if (iVar6 < pFVar7->Length + iVar6) {
      lVar12 = uVar9 * 8;
      do {
        uVar8 = (uint)uVar10;
        uVar5 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar10 = (ulonglong)(uVar8 + 1);
        uVar9 = uVar9 + 1;
        *(int *)((param_2->AllocatorInstance).Data + lVar12) = iVar6;
        iVar6 = iVar6 + 1;
        lVar12 = lVar12 + 8;
      } while (iVar6 < pFVar7->SubchunkStart + pFVar7->Length);
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// CreateEntityCollections @ 147209710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::Utils::CreateEntityCollections
          (FMassEntityManager *param_1,TArrayView<FMassEntityHandle_const_,int> *param_2,
          EDuplicatesHandling param_3,
          TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *param_4)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  FMassArchetypeEntityCollection *pFVar3;
  longlong lVar4;
  FMassArchetypeEntityCollection *pFVar5;
  code *pcVar6;
  EDuplicatesHandling EVar7;
  longlong *plVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  IEntityStorageInterface *pIVar12;
  ulonglong *puVar13;
  FMassArchetypeEntityCollection *pFVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStack_208 [32];
  FMassArchetypeEntityCollection *local_1e8;
  FMassArchetypeEntityCollection *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  StorageSelector local_1b8;
  StorageSelector local_1b7;
  undefined1 local_1b6 [2];
  int local_1b4;
  EDuplicatesHandling local_1b0;
  int local_1a8;
  ulonglong local_1a0;
  TReferenceControllerBase<1> *local_198;
  int local_190;
  ulonglong *local_188;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *local_180;
  longlong *local_178;
  uint uStack_170;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  uint local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  FMassEntityHandle *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TArrayView<FMassEntityHandle_const_,int> local_108;
  FMassArchetypeEntityCollection local_f8;
  undefined4 local_b4;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar21 = -1 < CpuChannel->Enabled;
  local_1b0 = param_3;
  local_180 = param_4;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId75,"Mass_CreateSparseChunks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
               ,0x4b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId75);
  }
  pFVar14 = (FMassArchetypeEntityCollection *)param_2->DataPtr;
  local_a8._8_4_ = 0;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_88 = (uint *)0x0;
  pFVar5 = (FMassArchetypeEntityCollection *)
           (&(pFVar14->Ranges).AllocatorInstance + param_2->ArrayNum);
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  if (pFVar14 != pFVar5) {
    do {
      bVar9 = FMassEntityManager::IsEntityValid
                        (param_1,(FMassEntityHandle)(pFVar14->Ranges).AllocatorInstance.Data);
      if (bVar9) {
        pFVar2 = (pFVar14->Ranges).AllocatorInstance.Data;
        local_1b8 = (StorageSelector)0x0;
        pIVar12 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                    ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])
                            (&local_1b8,&param_1->EntityStorage);
        cVar10 = (**(code **)((longlong)*pIVar12 + 0x48))(pIVar12,(ulonglong)pFVar2 & 0xffffffff);
        if ((cVar10 == '\0') &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetEntityStorageInterface().IsValidIndex(Entity.Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                               ,0x21d,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_1b7 = (StorageSelector)0x0;
        pIVar12 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                    ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])
                            (&local_1b7,&param_1->EntityStorage);
        puVar13 = (ulonglong *)
                  (**(code **)((longlong)*pIVar12 + 0x20))(pIVar12,(ulonglong)pFVar2 & 0xffffffff);
        local_1a0 = *puVar13;
        local_198 = (TReferenceControllerBase<1> *)puVar13[1];
        if (local_198 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_198->SharedReferenceCount = (atomic<int>)((int)local_198->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar16 = ((uint)(local_1a0 >> 0x14) & 0xffff ^ (uint)(local_1a0 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = uVar16 >> 0x10 ^ uVar16;
        if (local_a8._8_4_ != local_74) {
          FVar18 = (ForElementType<FSetElementId>)local_70;
          if (local_68 != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_68;
          }
          iVar11 = *(int *)((longlong)FVar18 + (ulonglong)(local_60 - 1U & uVar16) * 4);
          while (iVar11 != -1) {
            lVar17 = local_a8._0_8_ + (longlong)iVar11 * 0x28;
            if (*(ulonglong *)(local_a8._0_8_ + (longlong)iVar11 * 0x28) == local_1a0) {
              if (lVar17 != 0) goto LAB_147209973;
              break;
            }
            iVar11 = *(int *)(lVar17 + 0x20);
          }
        }
        local_188 = &local_1a0;
        local_1e8 = (FMassArchetypeEntityCollection *)0x0;
        TSet<TTuple<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FMassArchetypeHandle_const_&>_>
                  ((TSet<TTuple<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_a8,(uint)&local_1b4,
                   (TKeyInitializer<FMassArchetypeHandle_const_&> *)(ulonglong)uVar16,
                   (bool *)&local_188);
        lVar17 = local_a8._0_8_ + (longlong)local_1b4 * 0x28;
LAB_147209973:
        pFVar3 = *(FMassArchetypeEntityCollection **)(lVar17 + 0x10);
        if ((pFVar3 <= pFVar14) &&
           (pFVar14 < (FMassArchetypeEntityCollection *)
                      (&(pFVar3->Ranges).AllocatorInstance + *(int *)(lVar17 + 0x1c)))) {
          local_1d0 = (longlong)*(int *)(lVar17 + 0x18);
          local_1c8 = 8;
          local_1e8 = pFVar14;
          local_1e0 = pFVar3;
          local_1d8 = (longlong)*(int *)(lVar17 + 0x1c);
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar11 = *(int *)(lVar17 + 0x18);
        if (iVar11 == *(int *)(lVar17 + 0x1c)) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(lVar17 + 0x10),(int *)(lVar17 + 0x1c));
        }
        *(int *)(lVar17 + 0x18) = iVar11 + 1;
        *(FScriptContainerElement **)
         (((ForAnyElementType *)(lVar17 + 0x10))->Data + (longlong)iVar11 * 8) =
             (pFVar14->Ranges).AllocatorInstance.Data;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198);
      }
      pFVar14 = (FMassArchetypeEntityCollection *)&(pFVar14->Ranges).ArrayNum;
    } while (pFVar14 != pFVar5);
    param_4 = local_180;
  }
  uVar16 = local_80;
  uStack_170 = 0;
  uStack_16c = 1;
  local_158 = 0;
  uStack_15c = uStack_170;
  if (local_80 != 0) {
    puVar19 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar19 = local_88;
    }
    uVar20 = *puVar19;
    local_158 = 0;
    uStack_170 = 0;
    while (uVar20 == 0) {
      lVar17 = (longlong)(int)uStack_170;
      local_158 = local_158 + 0x20;
      uStack_170 = uStack_170 + 1;
      uStack_15c = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_170)
      goto LAB_147209ab0;
      uVar20 = puVar19[lVar17 + 1];
    }
    uStack_16c = -uVar20 & uVar20;
    uVar1 = (ulonglong)uStack_16c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_190 = (int)lVar17;
    uStack_15c = local_190 + -1 + local_158;
    if ((int)local_80 < (int)uStack_15c) {
      uStack_15c = local_80;
    }
  }
LAB_147209ab0:
  iStack_150 = local_a8._8_4_ - local_74;
  local_178 = (longlong *)local_a8;
  local_168 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uStack_160 = 0xffffffff;
  TStack_140.CurrentBitIndex = uStack_15c;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._padding_ = CONCAT44(uStack_16c,uStack_170);
  uVar20 = local_80 & 0xffffffe0;
  uStack_154 = local_b4;
  iVar11 = (int)local_80 >> 5;
  TStack_140._28_4_ = local_b4;
  TStack_140.BaseBitIndex = local_158;
  uStack_120 = CONCAT44(uStack_14c,iStack_150);
  bVar15 = (byte)local_80;
  local_148 = local_178;
  TStack_140.Array = local_168;
  if (((int)local_80 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar7 = local_1b0;
  if (uVar16 != local_80) {
    puVar19 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar19 = local_88;
    }
    uVar16 = -1 << (bVar15 & 0x1f) & puVar19[iVar11];
    while (uVar16 == 0) {
      lVar17 = (longlong)iVar11;
      uVar20 = uVar20 + 0x20;
      iVar11 = iVar11 + 1;
      uVar16 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_147209bc0;
      uVar16 = puVar19[lVar17 + 1];
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_1a8 = (int)lVar17;
    uVar16 = local_1a8 + -1 + uVar20;
    if ((int)local_80 < (int)uVar16) {
      uVar16 = local_80;
    }
  }
LAB_147209bc0:
  while( true ) {
    plVar8 = local_148;
    if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
      local_1b6[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b6);
    }
    lVar17 = (longlong)TStack_140.CurrentBitIndex;
    if (((TStack_140.CurrentBitIndex == uVar16) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar8 == (longlong *)local_a8)) break;
    lVar4 = *plVar8;
    iVar11 = *(int *)(lVar4 + 0x18 + lVar17 * 0x28);
    local_118 = *(FMassEntityHandle **)(lVar4 + 0x10 + lVar17 * 0x28);
    if ((iVar11 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_108._12_4_ = uStack_10c;
    local_108.ArrayNum = iVar11;
    local_108.DataPtr = local_118;
    iStack_110 = iVar11;
    pFVar14 = FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
                        (&local_f8,(FMassArchetypeHandle *)(lVar4 + lVar17 * 0x28),&local_108,EVar7)
    ;
    pFVar5 = (FMassArchetypeEntityCollection *)(param_4->AllocatorInstance).Data;
    if ((pFVar5 <= pFVar14) && (pFVar14 < pFVar5 + param_4->ArrayMax)) {
      local_1d0 = (longlong)param_4->ArrayNum;
      local_1c8 = 0x28;
      local_1e8 = pFVar14;
      local_1e0 = pFVar5;
      local_1d8 = (longlong)param_4->ArrayMax;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar11 = param_4->ArrayNum;
    if (iVar11 == param_4->ArrayMax) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar11 + 1;
    pFVar2 = (param_4->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + (longlong)iVar11 * 0x28) = 0;
    pFVar2 = pFVar2 + (longlong)iVar11 * 0x28;
    *(FScriptContainerElement **)pFVar2 = (pFVar14->Ranges).AllocatorInstance.Data;
    (pFVar14->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar2 + 8) = (pFVar14->Ranges).ArrayNum;
    *(int *)(pFVar2 + 0xc) = (pFVar14->Ranges).ArrayMax;
    (pFVar14->Ranges).ArrayNum = 0;
    (pFVar14->Ranges).ArrayMax = 0;
    *(FMassArchetypeData **)(pFVar2 + 0x10) = (pFVar14->Archetype).ArchetypeHandle.DataPtr.Object;
    *(TReferenceControllerBase<1> **)(pFVar2 + 0x18) =
         (pFVar14->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
    (pFVar14->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar14->Archetype).ArchetypeHandle.DataPtr.Object = (FMassArchetypeData *)0x0;
    *(uint *)(pFVar2 + 0x20) = (pFVar14->Archetype).HandleVersion;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
    if (local_f8.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Ranges.AllocatorInstance.Data);
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DebugGetFragmentAccessString @ 14720ef00

FString * __cdecl
UE::Mass::Debug::DebugGetFragmentAccessString
          (FString *__return_storage_ptr__,EMassFragmentAccess param_1)

{
  EMassFragmentAccess local_res10 [8];
  EMassFragmentAccess *local_res18 [2];
  
  local_res10[0] = param_1;
  if (param_1 == None) {
    ::FString::FString(__return_storage_ptr__,L"--");
    return __return_storage_ptr__;
  }
  if (param_1 != ReadOnly) {
    if (param_1 != ReadWrite) {
      local_res18[0] = local_res10;
      `UE::Mass::Debug::DebugGetFragmentAccessString'::__l4::<lambda_1>::operator()(local_res18);
      ::FString::FString(__return_storage_ptr__,L"Missing string conversion");
      return __return_storage_ptr__;
    }
    ::FString::FString(__return_storage_ptr__,L"RW");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"RO");
  return __return_storage_ptr__;
}

// DebugOutputDescription @ 14720f9f0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl
UE::Mass::Debug::DebugOutputDescription
          (TArrayView<UMassProcessor_*_const,int> *param_1,FOutputDevice *param_2)

{
  UMassProcessor **ppUVar1;
  bool bVar2;
  int iVar3;
  UMassProcessor *pUVar4;
  wchar_t *pwVar5;
  UMassProcessor **ppUVar6;
  
  ppUVar6 = param_1->DataPtr;
  iVar3 = param_1->ArrayNum;
  bVar2 = param_2->bAutoEmitLineTerminator;
  param_2->bAutoEmitLineTerminator = false;
  ppUVar1 = ppUVar6 + iVar3;
  if (ppUVar6 == ppUVar1) {
    param_2->bAutoEmitLineTerminator = bVar2;
  }
  else {
    do {
      pUVar4 = *ppUVar6;
      if (pUVar4 == (UMassProcessor *)0x0) {
        pwVar5 = L"NULL\n";
      }
      else {
        (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4,param_2,0);
        pwVar5 = L"\n";
      }
      FOutputDevice::Log(param_2,pwVar5);
      ppUVar6 = ppUVar6 + 1;
    } while (ppUVar6 != ppUVar1);
    param_2->bAutoEmitLineTerminator = bVar2;
  }
  return;
}

// DetermineProcessorExecutionFlags @ 147212940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EProcessorExecutionFlags __cdecl
UE::Mass::Utils::DetermineProcessorExecutionFlags(UWorld *param_1,EProcessorExecutionFlags param_2)

{
  code *pcVar1;
  bool bVar2;
  EProcessorExecutionFlags EVar3;
  ENetMode EVar4;
  
  if (param_2 != None) {
    return param_2;
  }
  if (param_1 == (UWorld *)0x0) {
    return All;
  }
  EVar4 = UWorld::InternalGetNetMode(param_1);
  if (EVar4 == NM_Standalone) {
    return Standalone;
  }
  if (EVar4 != NM_DedicatedServer) {
    if (EVar4 == NM_ListenServer) {
      return Client|Server;
    }
    if (EVar4 != NM_Client) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                         ,0x24,
                         L"Unsupported ENetMode type (%i) found while determining MASS processor execution flags."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      return None;
    }
    return Client;
  }
  return Server;
}

// DetermineProcessorSupportedTickTypes @ 1472129d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uchar __cdecl UE::Mass::Utils::DetermineProcessorSupportedTickTypes(UWorld *param_1)

{
  return '\x05';
}

// DoArchetypeContainersOverlap @ 1472138d0

bool __cdecl
UE::Mass::Private::DoArchetypeContainersOverlap
          (TArrayView<FMassArchetypeHandle_const_,int> *param_1,
          TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FMassArchetypeHandle *pFVar3;
  FMassArchetypeHandle *pFVar4;
  
  pFVar3 = param_1->DataPtr;
  pFVar4 = pFVar3 + param_1->ArrayNum;
  if (pFVar3 != pFVar4) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    do {
      if (pFVar1 != pFVar1 + (longlong)param_2->ArrayNum * 0x10) {
        pFVar2 = pFVar1;
        do {
          if (*(FMassArchetypeData **)pFVar2 == (pFVar3->DataPtr).Object) {
            return true;
          }
          pFVar2 = pFVar2 + 0x10;
        } while (pFVar2 != pFVar1 + (longlong)param_2->ArrayNum * 0x10);
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar4);
  }
  return false;
}

// FindElementTypeByName @ 14721a6c0

UScriptStruct * __cdecl UE::Mass::Debug::FindElementTypeByName(FString *param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = (UScriptStruct *)
           FStructTracker::DebugFindTypeByPartialName
                     (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,param_1);
  if (pUVar1 == (UScriptStruct *)0x0) {
    pUVar1 = (UScriptStruct *)
             FStructTracker::DebugFindTypeByPartialName
                       (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,param_1);
    if (pUVar1 == (UScriptStruct *)0x0) {
      pUVar1 = (UScriptStruct *)
               FStructTracker::DebugFindTypeByPartialName
                         (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,param_1
                         );
      return pUVar1;
    }
  }
  return pUVar1;
}

// GetCommandStatNames @ 147220080

void __cdecl
UE::Mass::Command::GetCommandStatNames
          (FMassBatchedCommand *param_1,FString **param_2,FAnsiString **param_3)

{
  uint uVar1;
  FName FVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FAnsiString *pFVar5;
  uint uVar6;
  FString *pFVar7;
  FName *pFVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int local_res10 [2];
  FName local_res18;
  FName *local_res20;
  FAnsiString local_48;
  FString local_38;
  
  *param_3 = &DefaultANSIBatchedName;
  *param_2 = &DefaultBatchedName;
  if (bEnableDetailedStats != false) {
    FVar2 = param_1->DebugName;
    local_res18 = FVar2;
    uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    uVar6 = uVar6 + FVar2.Number;
    if (CommandBatchedFNames._8_4_ != CommandBatchedFNames._52_4_) {
      lVar9 = 0x154c16c68;
      if (CommandBatchedFNames._64_8_ != 0) {
        lVar9 = CommandBatchedFNames._64_8_;
      }
      uVar1 = *(uint *)(lVar9 + (ulonglong)(CommandBatchedFNames._72_4_ - 1 & uVar6) * 4);
      while (uVar1 != 0xffffffff) {
        pFVar8 = (FName *)((longlong)(int)uVar1 * 0x30 + CommandBatchedFNames._0_8_);
        if (*pFVar8 == local_res18) {
          if (pFVar8 != (FName *)0x0) goto LAB_147220190;
          break;
        }
        uVar1 = pFVar8[5].ComparisonIndex.Value;
      }
    }
    local_res20 = &local_res18;
    TSet<TTuple<FName,TTuple<FString,FAnsiString>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FString,FAnsiString>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,TTuple<FString,FAnsiString>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FString,FAnsiString>,0>,FDefaultSetAllocator>
                *)&CommandBatchedFNames,(uint)local_res10,
               (TKeyInitializer<FName_const_&> *)(ulonglong)uVar6,(bool *)&local_res20);
    pFVar8 = (FName *)((longlong)local_res10[0] * 0x30 + CommandBatchedFNames._0_8_);
LAB_147220190:
    *param_2 = (FString *)(pFVar8 + 1);
    *param_3 = (FAnsiString *)(pFVar8 + 3);
    if (((*param_2)->Data).ArrayNum < 2) {
      pFVar7 = ::FName::ToString(&local_res18,&local_38);
      pFVar3 = *param_2;
      if (pFVar3 != pFVar7) {
        pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar3->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar3->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (pFVar3->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (((*param_2)->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)((*param_2)->Data).AllocatorInstance.Data;
      }
      FAnsiString::FAnsiString(&local_48,pwVar10);
      pFVar5 = *param_3;
      if (pFVar5 != &local_48) {
        pFVar4 = (pFVar5->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar5->Data).ArrayNum = local_48.Data.ArrayNum;
        (pFVar5->Data).ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetDebugEntitiesRange @ 147220b60

bool __cdecl UE::Mass::Debug::GetDebugEntitiesRange(int *param_1,int *param_2)

{
  *param_1 = DebugEntityBegin;
  *param_2 = DebugEntityEnd;
  if (((DebugEntityBegin != -1) && (DebugEntityEnd != -1)) && (DebugEntityBegin <= DebugEntityEnd))
  {
    return true;
  }
  return false;
}

// GetDummyObserverLock @ 147220d90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> * __cdecl
UE::Mass::ObserverManager::Private::GetDummyObserverLock
          (TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FObserverLock *pFVar3;
  TRawPtrProxy<UE::Mass::ObserverManager::FObserverLock> local_res8 [4];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar3 = ::operator_new(0x38);
    local_res8[0].Object = (FObserverLock *)0x0;
    if (pFVar3 != (FObserverLock *)0x0) {
      pFVar3->OwnerThreadId = 0;
      *(undefined8 *)&pFVar3->CollectionCreationDuplicatesHandling = 0;
      *(undefined8 *)&pFVar3->LockSerialNumber = 0;
      pFVar3->CreationNotificationIndex = -1;
      (pFVar3->BufferedNotifications).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->BufferedNotifications).ArrayNum = 0;
      (pFVar3->BufferedNotifications).ArrayMax = 0;
      (pFVar3->WeakEntityManager).Object = (FMassEntityManager *)0x0;
      (pFVar3->WeakEntityManager).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_res8[0].Object = pFVar3;
    }
    TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>::
    TSharedRef<UE::Mass::ObserverManager::FObserverLock,1><UE::Mass::ObserverManager::FObserverLock>
              (&DummyObserverLock,local_res8);
    atexit(`UE::Mass::ObserverManager::Private::GetDummyObserverLock'::__l2::
           _dynamic_atexit_destructor_for__DummyObserverLock__);
    _Init_thread_footer(&::_TSS0);
  }
  __return_storage_ptr__->Object = DummyObserverLock.Object;
  FVar2 = DummyObserverLock.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       DummyObserverLock.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetEntityDebugColor @ 147221450

FColor __cdecl UE::Mass::Debug::GetEntityDebugColor(FMassEntityHandle param_1)

{
  FColor_u_0 *pFVar1;
  int in_EDX;
  
  if (in_EDX != -1) {
    pFVar1 = &FColorList::GetFColorByIndex
                        (&GColorList,
                         in_EDX % (int)(GColorList.ColorsMap._8_4_ - GColorList.ColorsMap._52_4_))->
              field0_0x0;
    *(FColor_u_0 *)param_1 = *pFVar1;
    return (FColor)param_1.Index;
  }
  *(FColor_u_0 *)param_1 = FColor::Black.field0_0x0;
  return (FColor)param_1.Index;
}

// GetEntityManager @ 1472214e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMassEntityManager * __cdecl UE::Mass::Utils::GetEntityManager(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this;
  UMassEntitySubsystem *pUVar3;
  FMassEntityManager *pFVar4;
  
  if (param_1 == (UObject *)0x0) {
    return (FMassEntityManager *)0x0;
  }
  this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
  if (this != (UWorld *)0x0) {
    pUVar3 = UWorld::GetSubsystem<UMassEntitySubsystem>(this);
    if (pUVar3 != (UMassEntitySubsystem *)0x0) {
      if ((pUVar3->EntityManager).Object == (FMassEntityManager *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                           ,0x24,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FMassEntityManager *)(*pcVar1)();
          return pFVar4;
        }
      }
      return (pUVar3->EntityManager).Object;
    }
  }
  return (FMassEntityManager *)0x0;
}

// GetEntityManager @ 147221560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityManager * __cdecl UE::Mass::Utils::GetEntityManager(UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMassEntitySubsystem *pUVar3;
  FMassEntityManager *pFVar4;
  
  if (param_1 != (UWorld *)0x0) {
    pUVar3 = UWorld::GetSubsystem<UMassEntitySubsystem>(param_1);
    if (pUVar3 != (UMassEntitySubsystem *)0x0) {
      if ((pUVar3->EntityManager).Object == (FMassEntityManager *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                           ,0x24,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FMassEntityManager *)(*pcVar1)();
          return pFVar4;
        }
      }
      return (pUVar3->EntityManager).Object;
    }
  }
  return (FMassEntityManager *)0x0;
}

// GetEntityManagerChecked @ 1472215c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityManager * __cdecl UE::Mass::Utils::GetEntityManagerChecked(UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMassEntitySubsystem *pUVar3;
  FMassEntityManager *pFVar4;
  
  if (param_1 == (UWorld *)0x0) {
    pUVar3 = (UMassEntitySubsystem *)0x0;
  }
  else {
    pUVar3 = UWorld::GetSubsystem<UMassEntitySubsystem>(param_1);
    if (pUVar3 != (UMassEntitySubsystem *)0x0) goto LAB_147221602;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("EntityManager",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                     ,0x71,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMassEntityManager *)(*pcVar1)();
    return pFVar4;
  }
LAB_147221602:
  if (((pUVar3->EntityManager).Object == (FMassEntityManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                         ,0x24,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMassEntityManager *)(*pcVar1)();
    return pFVar4;
  }
  return (pUVar3->EntityManager).Object;
}

// GetProcessorExecutionFlagsForWorld @ 1472252a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EProcessorExecutionFlags __cdecl
UE::Mass::Utils::GetProcessorExecutionFlagsForWorld(UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  EProcessorExecutionFlags EVar3;
  ENetMode EVar4;
  
  EVar4 = UWorld::InternalGetNetMode(param_1);
  if (EVar4 == NM_Standalone) {
    return Standalone;
  }
  if (EVar4 == NM_DedicatedServer) {
    return Server;
  }
  if (EVar4 == NM_ListenServer) {
    return Client|Server;
  }
  if (EVar4 != NM_Client) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                       ,0x24,
                       L"Unsupported ENetMode type (%i) found while determining MASS processor execution flags."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return None;
  }
  return Client;
}

// GetTypeHash @ 147228da0

uint __cdecl UE::Mass::GetTypeHash(FArchetypeGroups *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint local_58;
  uint uStack_54;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  uVar4 = *(uint *)&(param_1->IDContainer).field_0x28;
  local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->IDContainer).field_0x10;
  uVar5 = 0;
  uStack_54 = 1;
  local_58 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  if (uVar4 != 0) {
    puVar8 = *(uint **)&(param_1->IDContainer).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)local_30.Array;
    }
    uVar6 = *puVar8;
    uStack_40 = uVar5;
    local_58 = uVar5;
    while (uVar6 == 0) {
      uStack_40 = uStack_40 + 0x20;
      lVar3 = (longlong)(int)local_58;
      local_58 = local_58 + 1;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < (int)local_58)
      goto LAB_147228e5c;
      uVar6 = puVar8[lVar3 + 1];
    }
    uStack_54 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uStack_54 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uStack_44 = (int)lVar3 + -1 + uStack_40;
    if ((int)uVar4 < (int)uStack_44) {
LAB_147228e5c:
      uStack_44 = uVar4;
    }
  }
  local_30._padding_._0_4_ = local_58;
  local_30._padding_._4_4_ = uStack_54;
  local_30.UnvisitedBitMask = 0xffffffff;
  local_30.CurrentBitIndex = uStack_44;
  local_30._28_4_ = uStack_3c;
  local_30.BaseBitIndex = uStack_40;
  if ((int)uStack_44 < (int)uVar4) {
    do {
      iVar2 = *(int *)(*(longlong *)&param_1->IDContainer + (longlong)local_30.CurrentBitIndex * 8);
      uVar4 = (iVar2 >> 0x1f | local_30.CurrentBitIndex) * 0x17 + iVar2;
      uVar5 = uVar5 - uVar4 ^ uVar4 >> 0xd;
      uVar7 = (-0x61c88647 - uVar4) - uVar5 ^ uVar5 << 8;
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      uVar6 = (uVar4 - uVar7) - uVar5 ^ uVar7 >> 0xd;
      uVar4 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xc;
      uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar4 << 0x10;
      uVar5 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 5;
      uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 >> 3;
      uVar6 = (uVar7 - uVar4) - uVar5 ^ uVar4 << 10;
      uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xf;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  return uVar5;
}

// HandleLateCreation @ 147229900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Mass::Private::HandleLateCreation(UWorldSubsystem *param_1,FInitializationState param_2)

{
  bool bVar1;
  UWorld *this;
  
  this = UWorldSubsystem::GetWorld(param_1);
  if (this != (UWorld *)0x0) {
    if ((this->bIsWorldInitialized != '\0') && (param_2.bPostInitializeCalled == '\0')) {
      (**(code **)(param_1->_padding_ + 0x2c8))(param_1);
    }
    bVar1 = UWorld::HasBegunPlay(this);
    if ((bVar1) && (param_2.bOnWorldBeginPlayCalled == '\0')) {
      (**(code **)(param_1->_padding_ + 0x2d8))(param_1,this);
    }
  }
  return;
}

// HandleRole @ 147229a80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

void __cdecl
UE::Mass::Relations::Private::HandleRole
          (FMassEntityManager *param_1,FRelationData *param_2,FMassEntityHandle *param_3,
          ERelationRole param_4,FMassEntityHandle *param_5,FMassEntityHandle *param_6,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_7)

{
  TArray<FMassRelationRoleInstanceHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  FMassEntityHandle FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRelationInstanceData *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res20 [8];
  uint local_38;
  uint uStack_34;
  undefined8 local_30;
  
  if ((param_2->Traits).RoleTraits.Elements[param_4].RequiresExternalMapping == Default) {
    uVar10 = (*param_3).SerialNumber;
    uVar11 = (*param_3).Index - uVar10 ^ uVar10 >> 0xd;
    uVar9 = (-0x61c88647 - uVar11) - uVar10 ^ uVar11 << 8;
    uVar10 = (uVar10 - uVar9) - uVar11 ^ uVar9 >> 0xd;
    uVar11 = (uVar11 - uVar10) - uVar9 ^ uVar10 >> 0xc;
    uVar9 = (uVar9 - uVar11) - uVar10 ^ uVar11 << 0x10;
    uVar10 = (uVar10 - uVar9) - uVar11 ^ uVar9 >> 5;
    uVar11 = (uVar11 - uVar10) - uVar9 ^ uVar10 >> 3;
    uVar9 = (uVar9 - uVar11) - uVar10 ^ uVar11 << 10;
    pFVar7 = TMapBase<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>_>
             ::FindOrAddImpl<FMassEntityHandle_const_&>
                       ((TMapBase<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>_>
                         *)&param_2->RoleMap,(uVar10 - uVar9) - uVar11 ^ uVar9 >> 0xf,param_3);
    pTVar1 = (pFVar7->RelationEntityContainers).Elements + param_4;
    FVar2 = *param_6;
    uVar9 = param_5->Index;
    if ((param_4 == MAX) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Role != UE::Mass::Relations::ERelationRole::MAX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityRelations.h"
                           ,0xf9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar10 = uVar9 & 0x3fffffff;
    uStack_34 = (uint)param_4 << 0x1e | uVar10;
    local_38 = FVar2.Index & 0x3fffffff;
    if ((uVar10 != uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReturnHandle.GetRoleEntityIndex() == RoleHandle.Index",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityRelations.h"
                           ,0xff,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((local_38 & 0x3fffffff) != FVar2.Index) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReturnHandle.GetRelationEntityIndex() == RelationEntityHandle.Index",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityRelations.h"
                           ,0x100,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((param_2->Traits).RoleTraits.Elements[param_4].bExclusive != false) &&
       (pTVar1->ArrayNum != 0)) {
      if ((pTVar1->ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if ((*(uint *)pFVar3 != local_38) || (*(uint *)(pFVar3 + 4) != uStack_34)) {
        if ((pTVar1->ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar1->ArrayNum = pTVar1->ArrayNum + -1;
        FMassEntityManager::CreateEntityIndexHandle(param_1,(int)&local_30);
        pFVar3 = (param_7->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_30) &&
            ((FScriptContainerElement *)&local_30 < pFVar3 + (longlong)param_7->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_7->ArrayNum;
        if (iVar6 == param_7->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_7->AllocatorInstance,&param_7->ArrayMax);
        }
        param_7->ArrayNum = iVar6 + 1;
        *(undefined8 *)((param_7->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_30;
      }
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    for (pFVar8 = pFVar3; pFVar8 != pFVar3 + (longlong)pTVar1->ArrayNum * 8; pFVar8 = pFVar8 + 8) {
      if ((*(uint *)pFVar8 == local_38) && (*(uint *)(pFVar8 + 4) == uStack_34)) {
        if ((int)((longlong)pFVar8 - (longlong)pFVar3 >> 3) != -1) {
          local_res20[0] = 0;
          `UE::Mass::Relations::Private::HandleRole'::__l5::<lambda_1>::operator()(local_res20);
        }
        break;
      }
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)pTVar1->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = pTVar1->ArrayNum;
    if (iVar6 == pTVar1->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar6 + 1;
    *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         CONCAT44(uStack_34,local_38);
  }
  return;
}

// HasDebugEntities @ 14722ac00

bool __cdecl UE::Mass::Debug::HasDebugEntities(void)

{
  if ((DebugEntityBegin != -1) && (DebugEntityEnd != -1)) {
    return true;
  }
  return false;
}

// IsDebuggingEntity @ 147231ff0

bool __cdecl UE::Mass::Debug::IsDebuggingEntity(FMassEntityHandle param_1,FColor *param_2)

{
  FColor_u_0 *pFVar1;
  int iVar2;
  
  if ((((DebugEntityBegin != -1) && (DebugEntityEnd != -1)) &&
      (iVar2 = param_1.Index, DebugEntityBegin <= iVar2)) && (iVar2 <= DebugEntityEnd)) {
    if (param_2 != (FColor *)0x0) {
      if (iVar2 != -1) {
        pFVar1 = &FColorList::GetFColorByIndex
                            (&GColorList,
                             (int)((longlong)
                                   ((ulonglong)(uint)(iVar2 >> 0x1f) << 0x20 |
                                   (ulonglong)param_1 & 0xffffffff) %
                                  (longlong)
                                  (int)(GColorList.ColorsMap._8_4_ - GColorList.ColorsMap._52_4_)))
                  ->field0_0x0;
        (param_2->field0_0x0)._s_0 = *(FColor_u_0_s_0 *)pFVar1;
        return true;
      }
      (param_2->field0_0x0)._s_0 = (FColor_u_0_s_0)FColor::Black;
    }
    return true;
  }
  return false;
}

// IsDebuggingSingleEntity @ 147232080

bool __cdecl UE::Mass::Debug::IsDebuggingSingleEntity(void)

{
  if ((DebugEntityBegin != -1) && (DebugEntityBegin == DebugEntityEnd)) {
    return true;
  }
  return false;
}

// IsElement @ 1472320b0

bool __cdecl UE::Mass::Private::IsElement(TNotNull<UScriptStruct_const_*> param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1.Val == (UScriptStruct *)0x0) {
    return false;
  }
  if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar3,L"MassFragment");
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_147232119;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
  if (((int)(param_1.Val)->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return true;
  }
LAB_147232119:
  if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar3,L"MassTag");
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
  if (((int)(param_1.Val)->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return false;
  }
  return true;
}

// LogCycle @ 147234120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl
UE::Mass::Private::LogCycle
          (TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<int_const_,int> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  ulonglong uVar23;
  FName local_res10;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_d8 [2];
  FString local_d0;
  FName *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FName *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<FName_const_,int> local_98;
  TArrayView<FName_const_,int> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res18 = param_3;
  if ((param_2->ArrayNum == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CycleIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                         ,0x31,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar9 = param_2->DataPtr;
  iVar22 = param_2->ArrayNum;
  piVar1 = piVar9 + iVar22;
  for (piVar17 = piVar9; uVar15 = 0xffffffff, piVar17 != piVar1; piVar17 = piVar17 + 1) {
    piVar8 = piVar9;
    uVar23 = 0;
    do {
      uVar11 = uVar23 + 1;
      if (*piVar8 != *piVar17) {
        uVar11 = uVar23;
      }
      piVar8 = piVar8 + 1;
      uVar23 = uVar11;
    } while (piVar8 != piVar1);
    piVar8 = piVar9;
    if (1 < uVar11) goto LAB_1472341d0;
  }
  goto LAB_1472341ef;
  while (piVar8 = piVar8 + 1, piVar8 != piVar1) {
LAB_1472341d0:
    if (*piVar8 == *piVar17) {
      uVar15 = (uint)((longlong)piVar8 - (longlong)piVar9 >> 2);
      goto LAB_1472341ef;
    }
  }
  uVar15 = 0xffffffff;
LAB_1472341ef:
  uVar18 = uVar15 + 1;
  uVar10 = 0;
  if ((int)uVar18 < iVar22) {
    uVar10 = ~uVar18 >> 0x1f;
  }
  iVar22 = ~uVar15 + iVar22;
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = param_2->DataPtr + (int)uVar18;
  if ((iVar22 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar9 = TArrayView<int_const_,int>::operator[](param_2,uVar15);
  if (piVar1 != piVar1 + iVar22) {
    piVar17 = piVar1;
    do {
      if (*piVar17 == *piVar9) {
        iVar22 = (int)((longlong)piVar17 - (longlong)piVar1 >> 2) + 1;
        if (0 < iVar22) goto LAB_1472342c9;
        goto LAB_1472342a3;
      }
      piVar17 = piVar17 + 1;
    } while (piVar17 != piVar1 + iVar22);
  }
  iVar22 = 0;
LAB_1472342a3:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("CycleLength > 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                     ,0x45,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1472342c9:
  uVar10 = 0;
  if ((int)uVar15 < param_2->ArrayNum) {
    uVar10 = ~uVar15 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar21 = (uint *)(param_2->DataPtr + (int)uVar15);
  if ((iVar22 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar19 = (uint *)0x0;
  puVar2 = puVar21 + iVar22;
  puVar12 = puVar21;
  if (puVar21 != puVar2) {
    do {
      if ((puVar19 == (uint *)0x0) || ((int)*puVar12 < (int)*puVar19)) {
        puVar19 = puVar12;
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar2);
    if (puVar19 != (uint *)0x0) goto LAB_14723439b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("MinElementIndex",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                     ,0x4a,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14723439b:
  if (puVar21 != puVar2) {
    puVar12 = puVar21;
    do {
      if (*puVar12 == *puVar19) {
        uVar15 = (uint)((longlong)puVar12 - (longlong)puVar21 >> 2);
        uVar10 = 0;
        if ((int)uVar15 < iVar22) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if (uVar10 != 0) goto LAB_1472343ee;
        goto LAB_1472343bb;
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar2);
  }
  uVar15 = 0xffffffff;
LAB_1472343bb:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1472343ee:
  local_d8[0] = puVar21[(int)uVar15];
  if (1 < iVar22) {
    uVar23 = (ulonglong)(iVar22 - 1);
    do {
      uVar15 = (int)(uVar15 + 1) % iVar22;
      uVar10 = 0;
      if ((int)uVar15 < iVar22) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = puVar21[(int)uVar15];
      uVar16 = local_d8[0] - uVar10 ^ uVar10 >> 0xd;
      uVar18 = (-0x61c88647 - uVar16) - uVar10 ^ uVar16 << 8;
      uVar20 = (uVar10 - uVar18) - uVar16 ^ uVar18 >> 0xd;
      uVar16 = (uVar16 - uVar20) - uVar18 ^ uVar20 >> 0xc;
      uVar10 = (uVar18 - uVar16) - uVar20 ^ uVar16 << 0x10;
      uVar20 = (uVar20 - uVar10) - uVar16 ^ uVar10 >> 5;
      uVar18 = (uVar16 - uVar20) - uVar10 ^ uVar20 >> 3;
      uVar10 = (uVar10 - uVar18) - uVar20 ^ uVar18 << 10;
      local_d8[0] = (uVar20 - uVar10) - uVar18 ^ uVar10 >> 0xf;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  pTVar6 = local_res18;
  pFVar3 = (local_res18->AllocatorInstance).Data;
  for (pFVar13 = pFVar3; pFVar13 != pFVar3 + (longlong)local_res18->ArrayNum * 4;
      pFVar13 = pFVar13 + 4) {
    if (*(uint *)pFVar13 == local_d8[0]) {
      if ((int)((longlong)pFVar13 - (longlong)pFVar3 >> 2) != -1) goto LAB_147234872;
      break;
    }
  }
  if (((pFVar3 <= (FScriptContainerElement *)local_d8) &&
      ((FScriptContainerElement *)local_d8 < pFVar3 + (longlong)local_res18->ArrayMax * 4)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar22 = pTVar6->ArrayNum;
  if (iVar22 == pTVar6->ArrayMax) {
    iVar22 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    pTVar6->ArrayNum = iVar22;
  }
  pTVar6->ArrayNum = iVar22 + 1;
  *(uint *)((pTVar6->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_d8[0];
  if (1 < (byte)LogMassDependencies._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
  }
  do {
    if (puVar21 == puVar2) {
LAB_147234872:
      DestructItems<FMassProcessorDependencySolver::FNode,int>
                ((FNode *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return;
    }
    uVar15 = *puVar21;
    uVar10 = 0;
    if ((int)uVar15 < param_1->ArrayNum) {
      uVar10 = ~uVar15 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x208 + 8);
    if (lVar4 == 0) {
      if (2 < (byte)LogMassDependencies._0_1_) {
        uVar10 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ::FName::ToString((FName *)((param_1->AllocatorInstance).Data +
                                   (longlong)(int)uVar15 * 0x208),&local_48);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
        FVar14.Data = local_48.Data.AllocatorInstance.Data;
        goto LAB_14723485b;
      }
    }
    else if (2 < (byte)LogMassDependencies._0_1_) {
      local_b8 = *(FName **)(lVar4 + 0x50);
      iVar22 = *(int *)(lVar4 + 0x58);
      if ((iVar22 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_98._12_4_ = uStack_ac;
      local_98.ArrayNum = iVar22;
      local_98.DataPtr = local_b8;
      iStack_b0 = iVar22;
      NameViewToString(&local_58,&local_98);
      local_a8 = *(FName **)(lVar4 + 0x40);
      iVar22 = *(int *)(lVar4 + 0x48);
      if ((iVar22 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_88._12_4_ = uStack_9c;
      local_88.ArrayNum = iVar22;
      local_88.DataPtr = local_a8;
      iStack_a0 = iVar22;
      NameViewToString(&local_68,&local_88);
      ::FName::ToString((FName *)(lVar4 + 0x38),&local_78);
      local_res10 = *(FName *)(lVar4 + 0x18);
      ::FName::ToString(&local_res10,&local_d0);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMassDependencies);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      FVar14.Data = local_58.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        FVar14.Data = local_58.Data.AllocatorInstance.Data;
      }
LAB_14723485b:
      if (FVar14.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar14.Data);
      }
    }
    puVar21 = puVar21 + 1;
  } while( true );
}

// NameViewToString @ 147235c70

FString * __cdecl
UE::Mass::Private::NameViewToString
          (FString *__return_storage_ptr__,TArrayView<FName_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *this;
  FString *pFVar5;
  uint uVar6;
  int iVar7;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == 0) {
    ::FString::FString(__return_storage_ptr__,L"[]");
    return __return_storage_ptr__;
  }
  this = TArrayView<FName_const_,int>::operator[](param_1,0);
  ::FName::ToString(this,&local_38);
  ::FString::PrintfImpl(&local_48,L"[%s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  uVar6 = 1;
  if (1 < iVar1) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar1) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      ::FName::ToString(param_1->DataPtr + (int)uVar6,&local_28);
      ::FString::PrintfImpl(&local_58,L", %s");
      iVar7 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar7);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar1);
  }
  ::FString::ConcatFC(__return_storage_ptr__,&local_48,L"]");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RegisterChildOfRelation @ 14723e9d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl UE::Mass::Relations::RegisterChildOfRelation(void)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      TMulticastDelegateRegistration<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
      ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
                     *)&FTypeManager::OnRegisterBuiltInTypes,
                    (_func___cdecl_void_FTypeManager_ptr *)&BuildInRelationHandlesInitializer);
      if (Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassChildOfRelation,(UObject *)pUVar2,
                             L"MassChildOfRelation");
        if (Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton ==
            (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::ReportNotNullPtr();
        }
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)
                            Z_Registration_Info_UScriptStruct_FMassChildOfRelation.OuterSingleton);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10[0] = pUVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar1);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
      ChildOfHandle.TypeKey.ObjectKey =
           (TObjectKey<UStruct_const_>)(TObjectKey<UStruct_const_>)local_res8;
      atexit(`UE::Mass::Relations::RegisterChildOfRelation'::__l2::
             _dynamic_atexit_destructor_for__BuildInRelationHandlesInitializer__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return;
}

// RegisterSubsystemType @ 14723f7c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::Subsystems::RegisterSubsystemType
          (FSubsystemCollectionBase *param_1,TSubclassOf<USubsystem> param_2,
          FSubsystemTypeTraits *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  USubsystem *pUVar4;
  UClass *pUVar5;
  TSharedRef<FMassEntityManager,1> *pTVar6;
  UClass *local_res20;
  UObject *local_28;
  TSharedRef<FMassEntityManager,1> local_20;
  
  local_res20 = UMassEntitySubsystem::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar4 = FSubsystemCollectionBase::InitializeDependency
                     (param_1,(TSubclassOf<USubsystem>)&local_res20);
  if (pUVar4 != (USubsystem *)0x0) {
    pUVar5 = UMassEntitySubsystem::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_28 = *(UObject **)param_2.Class.field0_0x0;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
        GC::MarkAsReachable(local_28);
      }
      if (pUVar4[1]._padding_ == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                           ,0x24,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar6 = TSharedFromThis<FMassEntityManager,1>::AsShared
                         ((TSharedFromThis<FMassEntityManager,1> *)(pUVar4[1]._padding_ + 0x10),
                          &local_20);
      RegisterSubsystemType(pTVar6,(TSubclassOf<USubsystem>)&local_28,param_3);
    }
  }
  return;
}

// RegisterSubsystemType @ 14723f8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::Subsystems::RegisterSubsystemType
          (TSharedRef<FMassEntityManager,1> *param_1,TSubclassOf<USubsystem> param_2,
          FSubsystemTypeTraits *param_3)

{
  int iVar1;
  longlong lVar2;
  FTypeManager *this;
  FTypeInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined8 local_f8;
  FSubsystemTypeTraits local_e8 [88];
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  this = (param_1->Object->TypeManager).Object;
  if (lVar2 != 0) {
    pUVar6 = Z_Construct_UClass_USubsystem_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (pFVar3 = *(FTypeInfo **)param_2.Class.field0_0x0, pFVar3 != (FTypeInfo *)0x0))
      {
        local_f8 = *(undefined8 *)&(pFVar3->Traits).field_0x8;
        local_e8[0] = *param_3;
        local_38 = 1;
        FTypeManager::RegisterTypeInternal(this,(UStruct *)local_108,pFVar3);
        uVar7 = (ulonglong)local_38;
        if (3 < local_38) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7] !=
            Core::Private::TDestructorCaller<UE::Mass::FSubsystemTypeTraits>::Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7])(local_e8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Run @ 14724a320

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl UE::Mass::Executor::Run(FMassRuntimePipeline *param_1,FProcessingContext *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  uint uStack_3c;
  undefined4 uStack_2c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_28;
  TArrayView<UMassProcessor_*_const,int> local_18;
  
  if (0.0 < param_2->DeltaSeconds || param_2->DeltaSeconds == 0.0) {
    iVar1 = (param_1->Processors).ArrayNum;
    pFVar2 = (param_1->Processors).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    for (pFVar6 = pFVar2; pFVar6 != pFVar2 + (longlong)iVar1 * 8; pFVar6 = pFVar6 + 8) {
      if (*(longlong *)pFVar6 == 0) {
        if ((int)((longlong)pFVar6 - (longlong)pFVar2 >> 3) != -1) {
          bVar4 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3284827104360792092>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                             ,0x1c,"RuntimePipeline.GetProcessors().Find(nullptr) == INDEX_NONE");
          if (!bVar4) {
            return;
          }
          goto code_r0x00014724a43b;
        }
        break;
      }
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId33,"MassExecutor Run Pipeline",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                 ,0x21);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId33);
    }
    pFVar2 = (param_1->Processors).AllocatorInstance.Data;
    iVar1 = (param_1->Processors).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_28._8_8_ = (ulonglong)uStack_3c << 0x20;
    local_18._12_4_ = uStack_2c;
    local_18.ArrayNum = iVar1;
    local_28.DataPtr = (FMassArchetypeEntityCollection *)0x0;
    local_18.DataPtr = (UMassProcessor **)pFVar2;
    RunProcessorsView(&local_18,param_2,&local_28);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3284827104360792091>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                       ,0x1b,"ProcessingContext.GetDeltaSeconds() >= 0.f");
    if (bVar4) {
code_r0x00014724a43b:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Run @ 14724a4e0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl UE::Mass::Executor::Run(UMassProcessor *param_1,FProcessingContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  UMassProcessor *local_res10;
  uint uStack_3c;
  undefined4 uStack_2c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_28;
  TArrayView<UMassProcessor_*_const,int> local_18;
  
  if (0.0 < param_2->DeltaSeconds || param_2->DeltaSeconds == 0.0) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId73,"MassExecutor Run",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                 ,0x49);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId73);
    }
    local_28._8_8_ = (ulonglong)uStack_3c << 0x20;
    local_18.DataPtr = &local_res10;
    local_18._12_4_ = uStack_2c;
    local_18.ArrayNum = 1;
    local_28.DataPtr = (FMassArchetypeEntityCollection *)0x0;
    local_res10 = param_1;
    RunProcessorsView(&local_18,param_2,&local_28);
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3284827104360792132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                       ,0x44,"ProcessingContext.GetDeltaSeconds() >= 0.f");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RunProcessorsView @ 14724aab0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl
UE::Mass::Executor::RunProcessorsView
          (TArrayView<UMassProcessor_*_const,int> *param_1,FProcessingContext *param_2,
          FMassArchetypeEntityCollection *param_3)

{
  undefined8 uVar1;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_28;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_18;
  
  local_28.DataPtr = (FMassArchetypeEntityCollection *)param_1->DataPtr;
  uVar1._0_4_ = param_1->ArrayNum;
  uVar1._4_4_ = *(undefined4 *)&param_1->field_0xc;
  if (param_3 != (FMassArchetypeEntityCollection *)0x0) {
    local_28.ArrayNum = 1;
    local_18.DataPtr = local_28.DataPtr;
    local_28.DataPtr = param_3;
    local_18._8_8_ = uVar1;
    RunProcessorsView((TArrayView<UMassProcessor_*_const,int> *)&local_18,param_2,&local_28);
    return;
  }
  local_28._8_8_ = (ulonglong)(uint)local_28._12_4_ << 0x20;
  local_18.DataPtr = (FMassArchetypeEntityCollection *)0x0;
  local_18.ArrayNum = local_28.ArrayNum;
  local_18._12_4_ = local_28._12_4_;
  local_28._8_8_ = uVar1;
  RunProcessorsView((TArrayView<UMassProcessor_*_const,int> *)&local_28,param_2,&local_18);
  return;
}

// RunProcessorsView @ 14724ab30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Mass::Executor::RunProcessorsView
          (TArrayView<UMassProcessor_*_const,int> *param_1,FProcessingContext *param_2,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *param_3)

{
  FMassArchetypeVersionedHandle *pFVar1;
  int iVar2;
  UMassProcessor **ppUVar3;
  FMassEntityManager *pFVar4;
  code *pcVar5;
  bool bVar6;
  FMassExecutionContext *pFVar7;
  UMassProcessor **ppUVar8;
  FMassArchetypeEntityCollection *pFVar9;
  bool bVar10;
  undefined1 auStackY_1d8 [32];
  longlong local_1a0;
  FSharedReferencer<1> FStack_198;
  uint local_190;
  undefined4 local_18c;
  FMassArchetypeEntityCollection *local_188;
  TArrayView<UMassProcessor_*_const,int> *local_180;
  TArrayView<UMassProcessor_*_const,int> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  ppUVar3 = param_1->DataPtr;
  ppUVar8 = ppUVar3;
  do {
    local_180 = param_1;
    if (ppUVar8 == ppUVar3 + param_1->ArrayNum) {
LAB_14724ab7f:
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId89,"MassExecutor_RunProcessorsView",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                   ,0x59);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId89);
      }
      pFVar7 = FProcessingContext::GetExecutionContext(param_2);
      pFVar4 = (param_2->EntityManager).Object;
      LOCK();
      pFVar4->ProcessingScopeCount = (atomic<int>)((int)pFVar4->ProcessingScopeCount + 1);
      UNLOCK();
      if (param_3->ArrayNum == 0) {
        ppUVar8 = param_1->DataPtr;
        ppUVar3 = ppUVar8 + (int)*(undefined8 *)&param_1->ArrayNum;
        for (; ppUVar8 != ppUVar3; ppUVar8 = ppUVar8 + 1) {
          if ((*ppUVar8)->ActivationState != Inactive) {
            UMassProcessor::CallExecute(*ppUVar8,pFVar4,pFVar7);
          }
        }
      }
      else {
        pFVar9 = param_3->DataPtr;
        local_188 = pFVar9 + param_3->ArrayNum;
        if (pFVar9 != local_188) {
          pFVar1 = &(pFVar7->EntityCollection).Archetype;
          do {
            if ((((pFVar7->EntityCollection).Ranges.ArrayNum != 0) ||
                ((pFVar1->ArchetypeHandle).DataPtr.Object != (FMassArchetypeData *)0x0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("EntityCollection.IsEmpty()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutionContext.cpp"
                                   ,0x49,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FMassArchetypeEntityCollection::operator=(&pFVar7->EntityCollection,pFVar9);
            local_178 = *param_1;
            ppUVar8 = local_178.DataPtr;
            ppUVar3 = ppUVar8 + (int)*(undefined8 *)&param_1->ArrayNum;
            for (; ppUVar8 != ppUVar3; ppUVar8 = ppUVar8 + 1) {
              if ((*ppUVar8)->ActivationState != Inactive) {
                UMassProcessor::CallExecute(*ppUVar8,pFVar4,pFVar7);
              }
            }
            local_18c = 0;
            local_190 = 0;
            local_1a0 = 0;
            FStack_198.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (pFVar1 != (FMassArchetypeVersionedHandle *)&local_1a0) {
              (pFVar1->ArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(pFVar7->EntityCollection).Archetype.ArchetypeHandle.DataPtr.
                          SharedReferenceCount,&FStack_198);
            }
            (pFVar7->EntityCollection).Archetype.HandleVersion = local_190;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_198.ReferenceController);
            iVar2 = (pFVar7->EntityCollection).Ranges.ArrayMax;
            (pFVar7->EntityCollection).Ranges.ArrayNum = 0;
            if (iVar2 < 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0,(ForAnyElementType *)&pFVar7->EntityCollection,0,
                         &(pFVar7->EntityCollection).Ranges.ArrayMax);
            }
            pFVar9 = pFVar9 + 1;
            param_1 = local_180;
          } while (pFVar9 != local_188);
        }
      }
      LOCK();
      pFVar4->ProcessingScopeCount = (atomic<int>)((int)pFVar4->ProcessingScopeCount + -1);
      UNLOCK();
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if (*ppUVar8 == (UMassProcessor *)0x0) {
      if ((int)((longlong)ppUVar8 - (longlong)ppUVar3 >> 3) != -1) {
        if ((byte)LogMass._0_1_ < 2) {
          return;
        }
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UE::Mass::Executor::RunProcessorsView",0x25,Yes);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
        if ((void *)local_168._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_168._padding_);
        return;
      }
      goto LAB_14724ab7f;
    }
    ppUVar8 = ppUVar8 + 1;
  } while( true );
}

// RunSparse @ 14724ae40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl
UE::Mass::Executor::RunSparse
          (FMassRuntimePipeline *param_1,FProcessingContext *param_2,
          FMassArchetypeEntityCollection *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FMassArchetypeData *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uint local_res8;
  undefined4 uStackX_c;
  undefined4 uStack_3c;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_38;
  TArrayView<UMassProcessor_*_const,int> local_28;
  
  bVar8 = false;
  local_res8 = 0;
  iVar1 = (param_1->Processors).ArrayNum;
  pFVar2 = (param_1->Processors).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  for (pFVar6 = pFVar2; pFVar6 != pFVar2 + (longlong)iVar1 * 8; pFVar6 = pFVar6 + 8) {
    if (*(longlong *)pFVar6 == 0) {
      if ((int)((longlong)pFVar6 - (longlong)pFVar2 >> 3) != -1) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3284827104360792118>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                           ,0x36,"RuntimePipeline.GetProcessors().Find(nullptr) == INDEX_NONE");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_14724af32;
      }
      break;
    }
  }
  if ((param_1->Processors).ArrayNum == 0) {
LAB_14724af32:
    pTVar7 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
LAB_14724af3a:
    bVar5 = true;
  }
  else {
    pTVar7 = (param_3->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
    pFVar3 = (param_3->Archetype).ArchetypeHandle.DataPtr.Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 == (FMassArchetypeData *)0x0) {
      local_res8 = local_res8 & 0xffffff00;
      bVar8 = true;
      bVar5 = `UE::Mass::Executor::RunSparse'::__l3::<lambda_1>::operator()(&local_res8);
      if (!bVar5) goto LAB_14724af3a;
    }
    bVar5 = false;
    bVar8 = true;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (!bVar5) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId61,"MassExecutor RunSparse",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                 ,0x3d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId61);
    }
    iVar1 = (param_1->Processors).ArrayNum;
    pFVar2 = (param_1->Processors).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_38._12_4_ = local_28._12_4_;
    local_38.ArrayNum = 1;
    local_28._12_4_ = uStack_3c;
    local_28.ArrayNum = iVar1;
    local_38.DataPtr = param_3;
    local_28.DataPtr = (UMassProcessor **)pFVar2;
    RunProcessorsView(&local_28,param_2,&local_38);
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// RunSparse @ 14724b040

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl
UE::Mass::Executor::RunSparse
          (FMassRuntimePipeline *param_1,FProcessingContext *param_2,FMassArchetypeHandle *param_3,
          TArrayView<FMassEntityHandle_const_,int> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_7c;
  TArrayView<FMassEntityHandle_const_,int> local_78;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_68;
  TArrayView<UMassProcessor_*_const,int> local_58;
  FMassArchetypeEntityCollection local_48;
  
  iVar1 = (param_1->Processors).ArrayNum;
  pFVar2 = (param_1->Processors).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  for (pFVar6 = pFVar2; pFVar6 != pFVar2 + (longlong)iVar1 * 8; pFVar6 = pFVar6 + 8) {
    if (*(longlong *)pFVar6 == 0) {
      if ((int)((longlong)pFVar6 - (longlong)pFVar2 >> 3) != -1) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3284827104360792103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                           ,0x27,"RuntimePipeline.GetProcessors().Find(nullptr) == INDEX_NONE");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_14724b236;
      }
      break;
    }
  }
  if ((param_1->Processors).ArrayNum != 0) {
    if ((param_3->DataPtr).Object == (FMassArchetypeData *)0x0) {
      local_res8[0] = 0;
      bVar4 = `UE::Mass::Executor::RunSparse'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar4) goto LAB_14724b236;
    }
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId46,"MassExecutor RunSparseEntities",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                 ,0x2e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId46);
    }
    local_78.DataPtr = param_4->DataPtr;
    local_78.ArrayNum = param_4->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&param_4->field_0xc;
    FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
              (&local_48,param_3,&local_78,NoDuplicates);
    local_58.DataPtr = (UMassProcessor **)(param_1->Processors).AllocatorInstance.Data;
    local_68.DataPtr = &local_48;
    iVar1 = (param_1->Processors).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_68._12_4_ = local_58._12_4_;
    local_68.ArrayNum = 1;
    local_58._12_4_ = uStack_7c;
    local_58.ArrayNum = iVar1;
    RunProcessorsView(&local_58,param_2,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
    if (local_48.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Ranges.AllocatorInstance.Data);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
LAB_14724b236:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->DataPtr).SharedReferenceCount.ReferenceController);
  return;
}

// SanitizeChunkMemorySize @ 14724b270

/* WARNING: Enum "Type": Some values do not have unique names */

uint __cdecl UE::Mass::SanitizeChunkMemorySize(uint param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000;
  if (param_1 < 0x80000) {
    uVar1 = param_1;
  }
  uVar2 = 0x400;
  if (0x400 < uVar1) {
    uVar2 = uVar1;
  }
  if (((2 < (byte)LogMass._0_1_) && (param_2)) && (uVar2 != param_1)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
  }
  return uVar2;
}

// SetDebugEntityRange @ 14724b900

void __cdecl UE::Mass::Debug::SetDebugEntityRange(int param_1,int param_2)

{
  DebugEntityBegin = param_1;
  DebugEntityEnd = param_2;
  return;
}

// TriggerParallelTasks @ 147251d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __cdecl
UE::Mass::Executor::TriggerParallelTasks
          (UMassProcessor *param_1,FProcessingContext *param_2,
          TFunction<void___cdecl(void)> *param_3,Type param_4)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  code *pcVar5;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar6;
  longlong lVar7;
  FMassExecutionContext *pFVar8;
  UMassProcessor *pUVar9;
  FTaskBase *pFVar10;
  undefined8 *puVar11;
  TRefCountPtr<FBaseGraphTask> *pTVar12;
  longlong *plVar13;
  FName FVar14;
  FTaskBase *this;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  undefined4 in_register_0000008c;
  longlong *plVar16;
  bool bVar17;
  bool bVar18;
  undefined4 in_stack_00000028;
  undefined1 auStackY_6c8 [32];
  EExtendedTaskPriority local_688;
  ETaskPriority local_687 [7];
  TObjectPtr<UScriptStruct_const_>_u_0 local_680;
  undefined1 local_678 [16];
  undefined1 local_668 [8];
  FSharedReferencer<1> FStack_660;
  undefined1 local_658 [48];
  TRefCountPtr<FBaseGraphTask> *local_628;
  FName local_620;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_618;
  FMassExecutionContext local_5e8;
  ulonglong local_50;
  
  plVar16 = (longlong *)CONCAT44(in_register_0000008c,param_4);
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId157,"MassExecutor_RunParallel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
               ,0x9d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId157);
  }
  pFVar8 = FProcessingContext::GetExecutionContext((FProcessingContext *)param_3);
  this = (FTaskBase *)0x0;
  *(undefined8 *)&param_3[0x1f].field_0x8 = 0;
  local_668 = (undefined1  [8])0x0;
  FStack_660.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_3 + 1 != (TFunction<void___cdecl(void)> *)local_668) {
    *(undefined8 *)(param_3 + 1) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&param_3[1].field_0x8,&FStack_660);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_660.ReferenceController);
  FMassExecutionContext::FMassExecutionContext(&local_5e8,pFVar8);
  param_1->_padding_ = 0;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId165,"Dispatch Processors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
               ,0xa5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId165);
  }
  local_628 = (TRefCountPtr<FBaseGraphTask> *)0x0;
  local_620.ComparisonIndex.Value = 0;
  local_620.Number = 4;
  pcVar5 = *(code **)(((param_2->EntityManager).Object)->ObserverManager).ObservedFragments;
  local_678._0_8_ = *(undefined8 *)param_3;
  local_678._8_8_ = *(undefined8 *)&param_3->field_0x8;
  if ((TReferenceControllerBase<1> *)local_678._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_678._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_678._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar9 = (UMassProcessor *)(*pcVar5)(param_2,&local_680,local_678);
  if (param_1 != pUVar9) {
    puVar11 = (undefined8 *)param_1->_padding_;
    param_1->_padding_ = pUVar9->_padding_;
    pUVar9->_padding_ = 0;
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar11 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar11)(puVar11,1);
      }
    }
  }
  if (local_680.DebugPtr != (UScriptStruct *)0x0) {
    LOCK();
    plVar13 = &(local_680.DebugPtr)->_padding_;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (local_680.DebugPtr != (UScriptStruct *)0x0)) {
      (**(code **)(local_680.DebugPtr)->_padding_)(local_680.DebugPtr,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_678._8_8_);
  pTVar12 = (TRefCountPtr<FBaseGraphTask> *)(local_658 + 0x10);
  if (local_628 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar12 = local_628;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar12,local_620.ComparisonIndex.Value);
  if (local_628 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    FMemory::Free(local_628);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  TVar6 = (TObjectPtr<UScriptStruct_const_>_u_0)param_1->_padding_;
  if (TVar6.DebugPtr == (UScriptStruct *)0x0) goto LAB_1472521b0;
  LOCK();
  *(int *)&(TVar6.DebugPtr)->_padding_ = (int)(TVar6.DebugPtr)->_padding_ + 1;
  UNLOCK();
  local_618.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_618.ArrayNum = 1;
  local_680 = TVar6;
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,1,0,&local_618.AllocatorInstance,1,&local_618.ArrayMax);
  FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_618;
  if (local_618.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar15 = local_618.AllocatorInstance.SecondaryData;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar15,(TRefCountPtr<FBaseGraphTask> *)&local_680.ObjectPtr,1);
  if (local_680.DebugPtr != (UScriptStruct *)0x0) {
    LOCK();
    plVar13 = &(local_680.DebugPtr)->_padding_;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(local_680.DebugPtr)->_padding_)(local_680.DebugPtr,1);
    }
  }
  local_680 = (param_2->AuxData).ScriptStruct.field0_0x0;
  ::FName::ToString((FName *)&local_680.ObjectPtr,(FString *)local_678);
  pFVar10 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x6d0,0x10);
  if (pFVar10 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar10,&local_618);
    pFVar10->_padding_ = (longlong)&___7__TGraphTask_UFMassExecutorDoneTask_Executor_Mass_UE____6B_;
    this = pFVar10;
  }
  local_658._16_8_ = *plVar16;
  local_620.ComparisonIndex.Value = 0;
  local_620.Number = 0;
  if (local_658._16_8_ != 0) {
    plVar13 = plVar16 + 2;
    if ((longlong *)plVar16[5] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar16[5];
    }
    (**(code **)*plVar13)(plVar13,local_658 + 0x20);
  }
  FMassExecutionContext::FMassExecutionContext
            ((FMassExecutionContext *)&this[1]._padding_,&local_5e8);
  *(undefined8 *)&this[7].LowLevelTask.field_0x20 = local_658._16_8_;
  this[7].Subsequents.Subsequents.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
  if (local_658._16_8_ != 0) {
    FVar14 = (FName)((longlong)local_658 + 0x20);
    if (local_620 != (FName)0x0) {
      FVar14 = local_620;
    }
    (*(code *)**(undefined8 **)FVar14)();
  }
  ::FString::FString((FString *)&this[7].Subsequents.Subsequents.ArrayNum,(FString *)local_678);
  *(undefined4 *)&this[8]._padding_ = in_stack_00000028;
  if (local_658._16_8_ != 0) {
    FVar14 = (FName)((longlong)local_658 + 0x20);
    if (local_620 != (FName)0x0) {
      FVar14 = local_620;
    }
    (**(code **)(*(longlong *)FVar14 + 0x10))();
  }
  Tasks::Private::TranslatePriority((Type)this[8]._padding_,local_687,&local_688);
  FBaseGraphTask::Init((FBaseGraphTask *)this,L"GraphTask",local_687[0],local_688,None);
  if (this != (FTaskBase *)0x0) {
    LOCK();
    this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch(this,0x6d0);
  if (param_1 == (UMassProcessor *)local_658) {
    if (this != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &this->RefCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        puVar11 = (undefined8 *)this->_padding_;
        goto LAB_147252175;
      }
    }
  }
  else {
    pFVar10 = (FTaskBase *)param_1->_padding_;
    param_1->_padding_ = (longlong)this;
    if (pFVar10 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar10->RefCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        puVar11 = (undefined8 *)pFVar10->_padding_;
        this = pFVar10;
LAB_147252175:
        (*(code *)*puVar11)(this,1);
      }
    }
  }
  if ((FScriptContainerElement *)local_678._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_678._0_8_);
  }
  FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_618;
  if (local_618.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar15 = local_618.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar15,local_618.ArrayNum);
  if (local_618.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_618.AllocatorInstance.SecondaryData);
  }
LAB_1472521b0:
  FMassExecutionContext::~FMassExecutionContext(&local_5e8);
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*plVar16 != 0) {
    plVar13 = plVar16 + 2;
    if ((longlong *)plVar16[5] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar16[5];
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// ValidateMakeInput @ 1472541c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Mass::Private::ValidateMakeInput
          (TSharedRef<FMassEntityManager,1> *param_1,FMassArchetypeCompositionDescriptor *param_2,
          TArrayView<FInstancedStruct_const_,int> *param_3,
          TArrayView<FConstSharedStruct_const_,int> *param_4,
          TArrayView<FSharedStruct_const_,int> *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  UObject *pUVar4;
  TArrayView<FInstancedStruct_const_,int> local_18;
  
  pUVar4 = FWeakObjectPtr::Get(&(param_1->Object->Owner).WeakPtr);
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  bVar1 = CheckStructContainer<FMassFragment,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FInstancedStruct>
                    (&local_18,&param_2->Fragments,pUVar4);
  local_18.DataPtr = (FInstancedStruct *)param_4->DataPtr;
  local_18.ArrayNum = param_4->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
  bVar2 = CheckStructContainer<FMassConstSharedFragment,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FConstSharedStruct>
                    ((TArrayView<FConstSharedStruct_const_,int> *)&local_18,
                     &param_2->ConstSharedFragments,pUVar4);
  local_18.DataPtr = (FInstancedStruct *)param_5->DataPtr;
  local_18.ArrayNum = param_5->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_5->field_0xc;
  bVar3 = CheckStructContainer<FMassSharedFragment,TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FSharedStruct>
                    ((TArrayView<FSharedStruct_const_,int> *)&local_18,&param_2->SharedFragments,
                     pUVar4);
  return !bVar3 && (!bVar2 && !bVar1);
}

// operator() @ 150503c80

bool __thiscall `UE::Mass::Executor::RunSparse'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3284827104360792120>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3284827104360792120>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503cc0

bool __thiscall `UE::Mass::Executor::RunSparse'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3284827104360792105>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3284827104360792105>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503e70

bool __thiscall
`UE::Mass::Debug::DebugGetFragmentAccessString'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5746357756021964883>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5746357756021964883>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150503f80

bool __thiscall `UE::Mass::Relations::Private::HandleRole'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3784697294012547116>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3784697294012547116>,
                       &`public:___cdecl_`void___cdecl_UE::Mass::Relations::Private::HandleRole(FMassEntityManager_const&___ptr64,UE::Mass::FRelationData&___ptr64,FMassEntityHandle_const&___ptr64,UE::Mass::Relations::ERelationRole,FMassEntityHandle_const&___ptr64,FMassEntityHandle_const&___ptr64,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64)'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505060

bool __thiscall
`UE::Mass::Private::
ExportRequirements<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>'
::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2502732341651177519>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2502732341651177519>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

