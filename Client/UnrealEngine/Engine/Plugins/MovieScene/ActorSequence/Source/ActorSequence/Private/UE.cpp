// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorSequence
// Functions: 12

// Construct<FActorSequenceObjectReferenceMap> @ 14ead0050

void __cdecl UE::CoreUObject::Private::Construct<FActorSequenceObjectReferenceMap>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FActorSequenceObjectReferenceMap> @ 14ead0070

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FActorSequenceObjectReferenceMap>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FActorSequenceObjectReferenceMap> @ 14ead0090

void __cdecl UE::CoreUObject::Private::Destruct<FActorSequenceObjectReferenceMap>(void *param_1)

{
  DestructItems<FActorSequenceObjectReferences,int>
            (*(FActorSequenceObjectReferences **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FActorSequenceObjectReferenceMap> @ 14ead00e0

bool __cdecl
UE::CoreUObject::Private::Copy<FActorSequenceObjectReferenceMap>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)pFVar7 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar7 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar6 = pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar4,iVar5,pFVar7,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar7->Data,pFVar6,(longlong)iVar4 << 4);
          }
        }
      }
      pFVar2 = pFVar7 + 2;
      if (pFVar2 != pFVar3 + 2) {
        DestructItems<FActorSequenceObjectReferences,int>
                  ((FActorSequenceObjectReferences *)pFVar2->Data,*(int *)&pFVar7[3].Data);
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar7[3].Data + 4);
        pFVar6 = pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<FActorSequenceObjectReferences,FActorSequenceObjectReferences,int>
                    (pFVar2->Data,(FActorSequenceObjectReferences *)pFVar6,iVar4);
        }
      }
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FActorSequenceObjectReferences> @ 14ead0230

void __cdecl UE::CoreUObject::Private::Construct<FActorSequenceObjectReferences>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FActorSequenceObjectReferences> @ 14ead0240

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FActorSequenceObjectReferences>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FActorSequenceObjectReferences> @ 14ead0250

void __cdecl UE::CoreUObject::Private::Destruct<FActorSequenceObjectReferences>(void *param_1)

{
  DestructItems<FActorSequenceObjectReference,int>
            (*(FActorSequenceObjectReference **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FActorSequenceObjectReferences> @ 14ead0290

bool __cdecl
UE::CoreUObject::Private::Copy<FActorSequenceObjectReferences>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FActorSequenceObjectReference *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FActorSequenceObjectReference,int>
                  ((FActorSequenceObjectReference *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FActorSequenceObjectReference *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FActorSequenceObjectReference,FActorSequenceObjectReference,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FActorSequenceObjectReference> @ 14ead0380

void __cdecl UE::CoreUObject::Private::Construct<FActorSequenceObjectReference>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FActorSequenceObjectReference> @ 14ead03a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FActorSequenceObjectReference>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FActorSequenceObjectReference> @ 14ead03c0

void __cdecl UE::CoreUObject::Private::Destruct<FActorSequenceObjectReference>(void *param_1)

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

// Copy<FActorSequenceObjectReference> @ 14ead03e0

bool __cdecl
UE::CoreUObject::Private::Copy<FActorSequenceObjectReference>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x18);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar5);
      uVar3 = *(undefined8 *)((longlong)param_1 + lVar5 + 0xc);
      *(undefined8 *)((longlong)param_1 + 4) = *(undefined8 *)((longlong)param_1 + lVar5 + 4);
      *(undefined8 *)((longlong)param_1 + 0xc) = uVar3;
      if (pFVar4 != (ForAnyElementType *)((longlong)param_1 + lVar5 + 0x18)) {
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x20);
        piVar1 = (int *)((longlong)param_1 + 0x24);
        _Src = ((ForAnyElementType *)((longlong)param_1 + lVar5 + 0x18))->Data;
        *(int *)((longlong)param_1 + 0x20) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

