// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 18

// Construct<FWN_AbilityBreakOptions> @ 148db3470

void __cdecl UE::CoreUObject::Private::Construct<FWN_AbilityBreakOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWN_AbilityBreakOptions> @ 148db3490

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_AbilityBreakOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWN_AbilityBreakOptions> @ 148db34b0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_AbilityBreakOptions>(void *param_1)

{
  return;
}

// Copy<FWN_AbilityBreakOptions> @ 148db34c0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_AbilityBreakOptions>(void *param_1,void *param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined2 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_AbilityTaskDebugMessage> @ 148db3be0

void __cdecl UE::CoreUObject::Private::Construct<FWN_AbilityTaskDebugMessage>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FWN_AbilityTaskDebugMessage> @ 148db3c00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_AbilityTaskDebugMessage>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FWN_AbilityTaskDebugMessage> @ 148db3c20

void __cdecl UE::CoreUObject::Private::Destruct<FWN_AbilityTaskDebugMessage>(void *param_1)

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

// Copy<FWN_AbilityTaskDebugMessage> @ 148db3c40

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_AbilityTaskDebugMessage>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar5 = *puVar3;
      pFVar1 = (ForAnyElementType *)(puVar5 + 1);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar5 + 0x14);
        _Src = ((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar5 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar4 * 2);
          }
        }
      }
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_ASCLogOptions> @ 148db3d40

void __cdecl UE::CoreUObject::Private::Construct<FWN_ASCLogOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FWN_ASCLogOptions> @ 148db3d60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_ASCLogOptions>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FWN_ASCLogOptions> @ 148db3d80

void __cdecl UE::CoreUObject::Private::Destruct<FWN_ASCLogOptions>(void *param_1)

{
  return;
}

// Copy<FWN_ASCLogOptions> @ 148db3d90

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_ASCLogOptions>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 4 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 4) = uVar1;
      param_1 = (void *)((longlong)param_1 + 5);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_AbilityInstanceHandle> @ 148db3dd0

void __cdecl UE::CoreUObject::Private::Construct<FWN_AbilityInstanceHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWN_AbilityInstanceHandle> @ 148db3de0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_AbilityInstanceHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWN_AbilityInstanceHandle> @ 148db3df0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_AbilityInstanceHandle>(void *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_18) {
    *(undefined8 *)param_1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)((longlong)param_1 + 8))->ReferenceController);
  return;
}

// Copy<FWN_AbilityInstanceHandle> @ 148db3e40

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_AbilityInstanceHandle>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FWN_AbilityInstanceHandle> @ 148db3ec0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FWN_AbilityInstanceHandle>(void *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)(*(ulonglong *)param_1 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// DereferenceIfNecessary<UWN_Ability,UWN_Ability_*_&> @ 148db4060

UWN_Ability * __cdecl
UE::Core::Private::DereferenceIfNecessary<UWN_Ability,UWN_Ability_*_&>(UWN_Ability **param_1)

{
  return *param_1;
}

