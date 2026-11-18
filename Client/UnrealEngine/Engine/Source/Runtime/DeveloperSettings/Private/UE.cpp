// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DeveloperSettings
// Functions: 8

// Construct<FPlatformSettingsInstances> @ 14241a910

void __cdecl UE::CoreUObject::Private::Construct<FPlatformSettingsInstances>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FPlatformSettingsInstances> @ 14241a950

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPlatformSettingsInstances>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FPlatformSettingsInstances> @ 14241a990

void __cdecl UE::CoreUObject::Private::Destruct<FPlatformSettingsInstances>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UPlatformSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UPlatformSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UPlatformSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FPlatformSettingsInstances> @ 14241a9d0

bool __cdecl
UE::CoreUObject::Private::Copy<FPlatformSettingsInstances>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      if ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UPlatformSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(puVar3 + 1) !=
          (TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UPlatformSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(puVar1 + 1)) {
        uVar2 = *(uint *)(puVar1 + 10);
        uVar4 = uVar2;
        if (uVar2 < 2) {
          if (((ForAnyElementType *)(puVar3 + 9))->Data != (FScriptContainerElement *)0x0) {
            uVar4 = 0;
            goto LAB_14241aa6a;
          }
        }
        else {
LAB_14241aa6a:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)(puVar3 + 9),0,uVar4,4);
        }
        _Src = puVar1 + 8;
        if ((undefined8 *)puVar1[9] != (undefined8 *)0x0) {
          _Src = (undefined8 *)puVar1[9];
        }
        _Dst = puVar3 + 8;
        if ((undefined8 *)puVar3[9] != (undefined8 *)0x0) {
          _Dst = (undefined8 *)puVar3[9];
        }
        if (uVar2 != 0) {
          memcpy(_Dst,_Src,(longlong)(int)uVar2 << 2);
        }
        *(uint *)(puVar3 + 10) = uVar2;
        TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UPlatformSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UPlatformSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(puVar3 + 1),
                    (TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UPlatformSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(puVar1 + 1));
      }
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0xb;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPerPlatformSettings> @ 14241ac30

void __cdecl UE::CoreUObject::Private::Construct<FPerPlatformSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPerPlatformSettings> @ 14241ac40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPerPlatformSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPerPlatformSettings> @ 14241ac50

void __cdecl UE::CoreUObject::Private::Destruct<FPerPlatformSettings>(void *param_1)

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

// Copy<FPerPlatformSettings> @ 14241ac70

bool __cdecl
UE::CoreUObject::Private::Copy<FPerPlatformSettings>(void *param_1,void *param_2,int param_3)

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
          ConstructItems<TObjectPtr<UPlatformSettings>,TObjectPtr<UPlatformSettings>,int>
                    (pFVar6->Data,(TObjectPtr<UPlatformSettings> *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

