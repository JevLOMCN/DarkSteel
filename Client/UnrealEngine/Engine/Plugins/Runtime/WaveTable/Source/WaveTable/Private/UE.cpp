// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 16

// Construct<FWaveTableData> @ 14b2ba9a0

void __cdecl UE::CoreUObject::Private::Construct<FWaveTableData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x800000;
  return;
}

// ConstructForTests<FWaveTableData> @ 14b2ba9c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWaveTableData>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x800000;
  return;
}

// Destruct<FWaveTableData> @ 14b2ba9e0

void __cdecl UE::CoreUObject::Private::Destruct<FWaveTableData>(void *param_1)

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

// Copy<FWaveTableData> @ 14b2baa00

bool __cdecl UE::CoreUObject::Private::Copy<FWaveTableData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar4);
      if (pFVar3 != (ForAnyElementType *)((longlong)param_1 + lVar4 + 8)) {
        iVar2 = *(int *)((longlong)param_1 + lVar4 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        _Src = ((ForAnyElementType *)((longlong)param_1 + lVar4 + 8))->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,*piVar1,pFVar3,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar3->Data,_Src,(longlong)iVar2);
          }
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWaveTableTransform> @ 14b2bb230

void __cdecl UE::CoreUObject::Private::Construct<FWaveTableTransform>(void *param_1)

{
  memset(param_1,0,0xb8);
  *(undefined4 *)((longlong)param_1 + 4) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined ***)((longlong)param_1 + 8) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0x3f800000;
  return;
}

// ConstructForTests<FWaveTableTransform> @ 14b2bb2c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWaveTableTransform>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40200000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x404;
  *(undefined ***)((longlong)param_1 + 8) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0x3f800000;
  return;
}

// Destruct<FWaveTableTransform> @ 14b2bb360

void __cdecl UE::CoreUObject::Private::Destruct<FWaveTableTransform>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  *(undefined ***)((longlong)param_1 + 8) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FWaveTableTransform> @ 14b2bb370

bool __cdecl
UE::CoreUObject::Private::Copy<FWaveTableTransform>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      FRichCurve::operator=
                ((FRichCurve *)((longlong)param_1 + 8),(FRichCurve *)((longlong)param_2 + 8));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x88) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x88));
      }
      *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
      FWaveTableData::operator=
                ((FWaveTableData *)((longlong)param_1 + 0x90),
                 (FWaveTableData *)((longlong)param_2 + 0x90));
      puVar1 = (undefined4 *)((longlong)param_2 + 0xb0);
      param_2 = (void *)((longlong)param_2 + 0xb8);
      *(undefined4 *)((longlong)param_1 + 0xb0) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0xb8);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWaveTableSettings> @ 14b2bb460

void __cdecl UE::CoreUObject::Private::Construct<FWaveTableSettings>(void *param_1)

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
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x800000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 48000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// ConstructForTests<FWaveTableSettings> @ 14b2bb4a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWaveTableSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 48000;
  *(undefined2 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Destruct<FWaveTableSettings> @ 14b2bb4e0

void __cdecl UE::CoreUObject::Private::Destruct<FWaveTableSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FWaveTableSettings> @ 14b2bb520

bool __cdecl
UE::CoreUObject::Private::Copy<FWaveTableSettings>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  int local_res18;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    local_res18 = param_3;
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
                    (2,2,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      *(undefined4 *)&pFVar5[2].Data = *(undefined4 *)&pFVar2[2].Data;
      FWaveTableData::operator=((FWaveTableData *)(pFVar5 + 3),(FWaveTableData *)(pFVar2 + 3));
      local_res18 = local_res18 + -1;
      *(undefined4 *)&pFVar5[7].Data = *(undefined4 *)&pFVar2[7].Data;
      *(undefined4 *)((longlong)&pFVar5[7].Data + 4) =
           *(undefined4 *)((longlong)&pFVar2[7].Data + 4);
      *(undefined4 *)&pFVar5[8].Data = *(undefined4 *)&pFVar2[8].Data;
      *(undefined4 *)((longlong)&pFVar5[8].Data + 4) =
           *(undefined4 *)((longlong)&pFVar2[8].Data + 4);
      *(undefined4 *)&pFVar5[9].Data = *(undefined4 *)&pFVar2[9].Data;
      *(undefined4 *)((longlong)&pFVar5[9].Data + 4) =
           *(undefined4 *)((longlong)&pFVar2[9].Data + 4);
      *(undefined1 *)&pFVar5[10].Data = *(undefined1 *)&pFVar2[10].Data;
      *(undefined1 *)((longlong)&pFVar5[10].Data + 1) =
           *(undefined1 *)((longlong)&pFVar2[10].Data + 1);
      pFVar5 = pFVar5 + 0xb;
    } while (local_res18 != 0);
  }
  return true;
}

// Construct<FWaveTableBankEntry> @ 14b2bb650

void __cdecl UE::CoreUObject::Private::Construct<FWaveTableBankEntry>(void *param_1)

{
  memset(param_1,0,0xb8);
  *(undefined4 *)((longlong)param_1 + 4) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined ***)((longlong)param_1 + 8) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0x3f800000;
  return;
}

// ConstructForTests<FWaveTableBankEntry> @ 14b2bb6e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWaveTableBankEntry>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40200000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x404;
  *(undefined ***)((longlong)param_1 + 8) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0x3f800000;
  return;
}

// Destruct<FWaveTableBankEntry> @ 14b2bb780

void __cdecl UE::CoreUObject::Private::Destruct<FWaveTableBankEntry>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  *(undefined ***)((longlong)param_1 + 8) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FWaveTableBankEntry> @ 14b2bb790

bool __cdecl
UE::CoreUObject::Private::Copy<FWaveTableBankEntry>(void *param_1,void *param_2,int param_3)

{
  FWaveTableTransform *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FWaveTableTransform::operator=
                (this,(FWaveTableTransform *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

