// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 20

// Construct<FLKFSNRTWaveData> @ 14d7ebdb0

void __cdecl UE::CoreUObject::Private::Construct<FLKFSNRTWaveData>(void *param_1)

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
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// ConstructForTests<FLKFSNRTWaveData> @ 14d7ebe00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLKFSNRTWaveData>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
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

// Destruct<FLKFSNRTWaveData> @ 14d7ebe40

void __cdecl UE::CoreUObject::Private::Destruct<FLKFSNRTWaveData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FLKFSNRTWaveData> @ 14d7ebec0

bool __cdecl
UE::CoreUObject::Private::Copy<FLKFSNRTWaveData>(void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *_Dst;
  undefined1 *_Src;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar3);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar3 + 4);
      if ((TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)((longlong)param_1 + 8) !=
          (TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)((longlong)param_1 + lVar3 + 8)) {
        uVar1 = *(uint *)((longlong)param_1 + lVar3 + 0x50);
        uVar2 = uVar1;
        if (uVar1 < 2) {
          if (((ForAnyElementType *)((longlong)param_1 + 0x48))->Data !=
              (FScriptContainerElement *)0x0) {
            uVar2 = 0;
            goto LAB_14d7ebf4e;
          }
        }
        else {
LAB_14d7ebf4e:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)((longlong)param_1 + 0x48),0,uVar2,4);
        }
        _Src = (undefined1 *)((longlong)param_1 + lVar3 + 0x40);
        if (*(undefined1 **)((longlong)param_1 + lVar3 + 0x48) != (undefined1 *)0x0) {
          _Src = *(undefined1 **)((longlong)param_1 + lVar3 + 0x48);
        }
        _Dst = (undefined1 *)((longlong)param_1 + 0x40);
        if (*(undefined1 **)((longlong)param_1 + 0x48) != (undefined1 *)0x0) {
          _Dst = *(undefined1 **)((longlong)param_1 + 0x48);
        }
        if (uVar1 != 0) {
          memcpy(_Dst,_Src,(longlong)(int)uVar1 << 2);
        }
        *(uint *)((longlong)param_1 + 0x50) = uVar1;
        TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)((longlong)param_1 + 8),
                    (TSparseArray<TSparseSetElement<TTuple<int,FLKFSNRTChannelData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)((longlong)param_1 + lVar3 + 8));
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLKFSNRTChannelData> @ 14d7ecc20

void __cdecl UE::CoreUObject::Private::Construct<FLKFSNRTChannelData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xff7fffff;
  return;
}

// ConstructForTests<FLKFSNRTChannelData> @ 14d7ecc50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLKFSNRTChannelData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xff7fffff;
  return;
}

// Destruct<FLKFSNRTChannelData> @ 14d7ecc80

void __cdecl UE::CoreUObject::Private::Destruct<FLKFSNRTChannelData>(void *param_1)

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

// Copy<FLKFSNRTChannelData> @ 14d7ecd10

bool __cdecl
UE::CoreUObject::Private::Copy<FLKFSNRTChannelData>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 8);
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)((longlong)param_1 + lVar5);
      if (pFVar4 != pFVar1) {
        iVar3 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar2 = (int *)((longlong)param_1 + 0x14);
        _Src = pFVar1->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,iVar3,*piVar2,pFVar4,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar3 * 0x14);
          }
        }
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLKFSNRTAggregateStats> @ 14d7ed060

void __cdecl UE::CoreUObject::Private::Construct<FLKFSNRTAggregateStats>(void *param_1)

{
  *(undefined4 *)param_1 = 0x800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x800000;
  return;
}

// ConstructForTests<FLKFSNRTAggregateStats> @ 14d7ed080

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLKFSNRTAggregateStats>(void *param_1)

{
  *(undefined4 *)param_1 = 0x800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x800000;
  return;
}

// Destruct<FLKFSNRTAggregateStats> @ 14d7ed0a0

void __cdecl UE::CoreUObject::Private::Destruct<FLKFSNRTAggregateStats>(void *param_1)

{
  return;
}

// Copy<FLKFSNRTAggregateStats> @ 14d7ed130

bool __cdecl
UE::CoreUObject::Private::Copy<FLKFSNRTAggregateStats>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLKFSNRTResults> @ 14d7ed4f0

void __cdecl UE::CoreUObject::Private::Construct<FLKFSNRTResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FLKFSNRTResults> @ 14d7ed510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLKFSNRTResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FLKFSNRTResults> @ 14d7ed530

void __cdecl UE::CoreUObject::Private::Destruct<FLKFSNRTResults>(void *param_1)

{
  return;
}

// Copy<FLKFSNRTResults> @ 14d7ed6e0

bool __cdecl
UE::CoreUObject::Private::Copy<FLKFSNRTResults>(void *param_1,void *param_2,int param_3)

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

// Construct<FLKFSResults> @ 14d7ed820

void __cdecl UE::CoreUObject::Private::Construct<FLKFSResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FLKFSResults> @ 14d7ed840

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLKFSResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FLKFSResults> @ 14d7ed860

void __cdecl UE::CoreUObject::Private::Destruct<FLKFSResults>(void *param_1)

{
  return;
}

// Copy<FLKFSResults> @ 14d7ed870

bool __cdecl UE::CoreUObject::Private::Copy<FLKFSResults>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

