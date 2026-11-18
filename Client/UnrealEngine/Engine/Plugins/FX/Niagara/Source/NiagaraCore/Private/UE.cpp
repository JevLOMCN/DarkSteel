// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraCore
// Functions: 10

// Construct<FNiagaraCompileHash> @ 148dca140

void __cdecl UE::CoreUObject::Private::Construct<FNiagaraCompileHash>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNiagaraCompileHash> @ 148dca150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNiagaraCompileHash>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FNiagaraCompileHash> @ 148dca160

void __cdecl UE::CoreUObject::Private::Destruct<FNiagaraCompileHash>(void *param_1)

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

// Copy<FNiagaraCompileHash> @ 148dca180

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraCompileHash>(void *param_1,void *param_2,int param_3)

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
                    (1,1,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FNiagaraCompileHash> @ 148dca250

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FNiagaraCompileHash>(void *param_1)

{
  if (*(int *)((longlong)param_1 + 8) == 0x14) {
    return **(uint **)param_1;
  }
  return 0;
}

// Construct<FNiagaraVariableCommonReference> @ 148dca760

void __cdecl UE::CoreUObject::Private::Construct<FNiagaraVariableCommonReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNiagaraVariableCommonReference> @ 148dca770

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraVariableCommonReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FNiagaraVariableCommonReference> @ 148dca780

void __cdecl UE::CoreUObject::Private::Destruct<FNiagaraVariableCommonReference>(void *param_1)

{
  return;
}

// SerializeArchive<FNiagaraVariableCommonReference> @ 148dca790

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FNiagaraVariableCommonReference>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  (**(code **)(*(longlong *)param_1 + 0x178))();
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,(longlong)param_2 + 8);
  return true;
}

// Copy<FNiagaraVariableCommonReference> @ 148dca7d0

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraVariableCommonReference>
          (void *param_1,void *param_2,int param_3)

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
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

