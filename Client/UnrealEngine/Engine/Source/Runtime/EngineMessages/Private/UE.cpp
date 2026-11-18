// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 108

// Construct<FEngineServiceExecuteCommand> @ 144638b80

void __cdecl UE::CoreUObject::Private::Construct<FEngineServiceExecuteCommand>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FEngineServiceExecuteCommand> @ 144638ba0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEngineServiceExecuteCommand>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FEngineServiceExecuteCommand> @ 144638c00

void __cdecl UE::CoreUObject::Private::Destruct<FEngineServiceExecuteCommand>(void *param_1)

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

// Construct<FTraceControlSend> @ 144638cc0

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlSend>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Copy<FEngineServiceExecuteCommand> @ 144638d30

bool __cdecl
UE::CoreUObject::Private::Copy<FEngineServiceExecuteCommand>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FTraceControlSend> @ 144638db0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlSend>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FTraceControlSend> @ 144638dd0

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlSend>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FTraceControlSend> @ 144638e90

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlSend>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(undefined1 *)((longlong)param_1 + 0x10) =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    param_2 = (void *)((longlong)param_2 + 0x28);
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Construct<FEngineServiceAuthGrant> @ 1446391d0

void __cdecl UE::CoreUObject::Private::Construct<FEngineServiceAuthGrant>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FEngineServiceAuthGrant> @ 1446391f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEngineServiceAuthGrant>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FEngineServiceAuthGrant> @ 144639250

void __cdecl UE::CoreUObject::Private::Destruct<FEngineServiceAuthGrant>(void *param_1)

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

// Construct<FTraceControlStartCommon> @ 144639290

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlStartCommon>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Copy<FEngineServiceAuthGrant> @ 1446392b0

bool __cdecl
UE::CoreUObject::Private::Copy<FEngineServiceAuthGrant>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FTraceControlStartCommon> @ 144639330

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlStartCommon>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FTraceControlStartCommon> @ 144639350

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlStartCommon>(void *param_1)

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

// Copy<FTraceControlStartCommon> @ 144639370

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlStartCommon>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(undefined1 *)(this + 4) = *(undefined1 *)&pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEngineServiceAuthDeny> @ 1446394e0

void __cdecl UE::CoreUObject::Private::Construct<FEngineServiceAuthDeny>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FEngineServiceAuthDeny> @ 144639500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEngineServiceAuthDeny>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FEngineServiceAuthDeny> @ 144639520

void __cdecl UE::CoreUObject::Private::Destruct<FEngineServiceAuthDeny>(void *param_1)

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

// Construct<FTraceControlStop> @ 144639560

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlStop>(void *param_1)

{
  return;
}

// Copy<FEngineServiceAuthDeny> @ 144639570

bool __cdecl
UE::CoreUObject::Private::Copy<FEngineServiceAuthDeny>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FTraceControlStop> @ 1446395f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlStop>(void *param_1)

{
  return;
}

// Construct<FTraceControlDiscovery> @ 1446396c0

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlDiscovery>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x61) = 0;
  *(undefined2 *)((longlong)param_1 + 0x65) = 0;
  *(undefined1 *)((longlong)param_1 + 0x67) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FTraceControlDiscovery> @ 144639720

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlDiscovery>(void *param_1)

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
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FTraceControlDiscovery> @ 144639780

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlDiscovery>(void *param_1)

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

// Construct<FEngineServicePong> @ 1446397a0

void __cdecl UE::CoreUObject::Private::Construct<FEngineServicePong>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FEngineServicePong> @ 1446397e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEngineServicePong>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FEngineServicePong> @ 144639820

void __cdecl UE::CoreUObject::Private::Destruct<FEngineServicePong>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FTraceControlDiscovery> @ 144639860

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlDiscovery>(void *param_1,void *param_2,int param_3)

{
  FTraceControlStatus *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FTraceControlStatus *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FTraceControlStatus *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FTraceControlStatus::operator=(this,pFVar1);
      iVar2 = pFVar1[1].Endpoint.Data.ArrayNum;
      iVar3 = pFVar1[1].Endpoint.Data.ArrayMax;
      this[1].Endpoint.Data.AllocatorInstance.Data = pFVar1[1].Endpoint.Data.AllocatorInstance.Data;
      this[1].Endpoint.Data.ArrayNum = iVar2;
      this[1].Endpoint.Data.ArrayMax = iVar3;
      uVar4 = pFVar1[1].SessionGuid.B;
      uVar5 = pFVar1[1].SessionGuid.C;
      uVar6 = pFVar1[1].SessionGuid.D;
      this[1].SessionGuid.A = pFVar1[1].SessionGuid.A;
      this[1].SessionGuid.B = uVar4;
      this[1].SessionGuid.C = uVar5;
      this[1].SessionGuid.D = uVar6;
      param_3 = param_3 + -1;
      this = (FTraceControlStatus *)&this[1].TraceGuid;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FEngineServicePong> @ 144639930

bool __cdecl
UE::CoreUObject::Private::Copy<FEngineServicePong>(void *param_1,void *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  int iVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(undefined4 *)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 4) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 4);
    iVar3 = (((FString *)((longlong)param_2 + 0x10))->Data).ArrayMax;
    pFVar1 = (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x10))->Data).ArrayMax = iVar3;
    (((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data = pFVar1;
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum);
    iVar3 = (((FString *)((longlong)param_2 + 0x30))->Data).ArrayMax;
    pFVar1 = (((FString *)((longlong)param_2 + 0x40))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x30))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x30))->Data).ArrayMax = iVar3;
    (((FString *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data = pFVar1;
    pFVar2 = (FString *)((longlong)param_2 + 0x40);
    param_2 = (void *)((longlong)param_2 + 0x50);
    (((FString *)((longlong)param_1 + 0x40))->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    param_1 = (FString *)((longlong)param_1 + 0x50);
  }
  return true;
}

// Construct<FTraceControlDiscoveryPing> @ 144639a60

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlDiscoveryPing>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FTraceControlDiscoveryPing> @ 144639a80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlDiscoveryPing>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FTraceControlDiscoveryPing> @ 144639aa0

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlDiscoveryPing>(void *param_1)

{
  return;
}

// Construct<FEngineServicePing> @ 144639af0

void __cdecl UE::CoreUObject::Private::Construct<FEngineServicePing>(void *param_1)

{
  return;
}

// ConstructForTests<FEngineServicePing> @ 144639b00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEngineServicePing>(void *param_1)

{
  return;
}

// Copy<FTraceControlDiscoveryPing> @ 144639b10

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlDiscoveryPing>(void *param_1,void *param_2,int param_3)

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

// Construct<FTraceControlChannelsSetError> @ 144639c30

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlChannelsSetError>(void *param_1)

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

// ConstructForTests<FTraceControlChannelsSetError> @ 144639c70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTraceControlChannelsSetError>(void *param_1)

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

// Destruct<FTraceControlChannelsSetError> @ 144639ca0

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlChannelsSetError>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FTraceControlChannelsSetError> @ 144639ce0

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlChannelsSetError>
          (void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
      ::operator=(this,(TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                        *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTraceControlChannelsSet> @ 144639e30

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlChannelsSet>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FTraceControlChannelsSet> @ 144639e50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlChannelsSet>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FTraceControlChannelsSet> @ 144639e70

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlChannelsSet>(void *param_1)

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

// Copy<FTraceControlChannelsSet> @ 144639eb0

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlChannelsSet>(void *param_1,void *param_2,int param_3)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=(this + 1,pTVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTraceControlChannelsStatus> @ 14463a010

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlChannelsStatus>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTraceControlChannelsStatus> @ 14463a020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlChannelsStatus>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTraceControlChannelsStatus> @ 14463a030

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlChannelsStatus>(void *param_1)

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

// Copy<FTraceControlChannelsStatus> @ 14463a050

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlChannelsStatus>(void *param_1,void *param_2,int param_3)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTraceControlSetStatNamedEvents> @ 14463a110

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlSetStatNamedEvents>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FTraceControlSetStatNamedEvents> @ 14463a120

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTraceControlSetStatNamedEvents>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FTraceControlSetStatNamedEvents> @ 14463a130

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlSetStatNamedEvents>(void *param_1)

{
  return;
}

// Copy<FTraceControlSetStatNamedEvents> @ 14463a140

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlSetStatNamedEvents>
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

// Construct<FTraceControlChannelsDesc> @ 14463a170

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlChannelsDesc>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FTraceControlChannelsDesc> @ 14463a1a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlChannelsDesc>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FTraceControlChannelsDesc> @ 14463a1d0

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlChannelsDesc>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x20),*(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FTraceControlChannelsDesc> @ 14463a1e0

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlChannelsDesc>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30));
    param_2 = (void *)((longlong)param_2 + 0x40);
    param_1 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FTraceControlChannelsPing> @ 14463a330

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlChannelsPing>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTraceControlChannelsPing> @ 14463a340

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlChannelsPing>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTraceControlChannelsPing> @ 14463a390

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlChannelsPing>(void *param_1)

{
  return;
}

// Copy<FTraceControlChannelsPing> @ 14463a420

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlChannelsPing>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTraceControlScreenshot> @ 14463a560

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlScreenshot>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// ConstructForTests<FTraceControlScreenshot> @ 14463a580

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlScreenshot>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTraceControlScreenshot> @ 14463a5a0

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlScreenshot>(void *param_1)

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

// Copy<FTraceControlScreenshot> @ 14463a5c0

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlScreenshot>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(undefined1 *)(this + 4) = *(undefined1 *)&pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTraceControlSettings> @ 14463a680

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FTraceControlSettings> @ 14463a6a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FTraceControlSettings> @ 14463a6c0

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlSettings>(void *param_1)

{
  DestructItems<FTraceChannelPreset,int>
            (*(FTraceChannelPreset **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FTraceControlSettings> @ 14463a700

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlSettings>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FTraceChannelPreset *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar5);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar5 + 1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar5 + 4);
      if (pFVar4 != (ForAnyElementType *)((longlong)param_1 + lVar5 + 8)) {
        DestructItems<FTraceChannelPreset,int>
                  ((FTraceChannelPreset *)pFVar4->Data,*(int *)((longlong)param_1 + 0x10));
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        pFVar3 = (FTraceChannelPreset *)((ForAnyElementType *)((longlong)param_1 + lVar5 + 8))->Data
        ;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          ConstructItems<FTraceChannelPreset,FTraceChannelPreset,int>(pFVar4->Data,pFVar3,iVar2);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTraceControlBookmark> @ 14463a880

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlBookmark>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTraceControlBookmark> @ 14463a890

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlBookmark>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTraceControlBookmark> @ 14463a8a0

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlBookmark>(void *param_1)

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

// Copy<FTraceControlBookmark> @ 14463a8c0

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlBookmark>(void *param_1,void *param_2,int param_3)

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

// Construct<FTraceChannelPreset> @ 14463a950

void __cdecl UE::CoreUObject::Private::Construct<FTraceChannelPreset>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FTraceChannelPreset> @ 14463a980

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceChannelPreset>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FTraceChannelPreset> @ 14463a9a0

void __cdecl UE::CoreUObject::Private::Destruct<FTraceChannelPreset>(void *param_1)

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

// Copy<FTraceChannelPreset> @ 14463aa20

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceChannelPreset>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    pFVar1 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x20) =
         *(undefined1 *)&(pFVar1->Data).AllocatorInstance.Data;
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Construct<FTraceControlSnapshotFile> @ 14463ab70

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlSnapshotFile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTraceControlSnapshotFile> @ 14463abc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlSnapshotFile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTraceControlSnapshotFile> @ 14463abd0

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlSnapshotFile>(void *param_1)

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

// Copy<FTraceControlSnapshotFile> @ 14463ac30

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlSnapshotFile>(void *param_1,void *param_2,int param_3)

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

// Construct<FTraceControlSettingsPing> @ 14463ac80

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlSettingsPing>(void *param_1)

{
  return;
}

// ConstructForTests<FTraceControlSettingsPing> @ 14463ac90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlSettingsPing>(void *param_1)

{
  return;
}

// Construct<FTraceControlSnapshotSend> @ 14463aca0

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlSnapshotSend>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTraceControlSnapshotSend> @ 14463acb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlSnapshotSend>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTraceControlSnapshotSend> @ 14463acc0

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlSnapshotSend>(void *param_1)

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

// Copy<FTraceControlSnapshotSend> @ 14463ace0

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlSnapshotSend>(void *param_1,void *param_2,int param_3)

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

// Construct<FTraceControlStatus> @ 14463adb0

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlStatus>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x61) = 0;
  *(undefined2 *)((longlong)param_1 + 0x65) = 0;
  *(undefined1 *)((longlong)param_1 + 0x67) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FTraceControlStatus> @ 14463ae00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlStatus>(void *param_1)

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
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FTraceControlStatus> @ 14463ae50

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlStatus>(void *param_1)

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

// Copy<FTraceControlStatus> @ 14463aef0

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlStatus>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  undefined8 uVar2;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      uVar2 = *(undefined8 *)&pFVar1[1].Data.ArrayNum;
      *(FScriptContainerElement **)(this + 4) = pFVar1[1].Data.AllocatorInstance.Data;
      *(undefined8 *)(this + 6) = uVar2;
      uVar2 = *(undefined8 *)&pFVar1[2].Data.ArrayNum;
      *(FScriptContainerElement **)(this + 8) = pFVar1[2].Data.AllocatorInstance.Data;
      *(undefined8 *)(this + 10) = uVar2;
      *(FScriptContainerElement **)(this + 0xc) = pFVar1[3].Data.AllocatorInstance.Data;
      *(undefined8 *)(this + 0xe) = *(undefined8 *)&pFVar1[3].Data.ArrayNum;
      *(FScriptContainerElement **)(this + 0x10) = pFVar1[4].Data.AllocatorInstance.Data;
      this[0x12] = pFVar1[4].Data.ArrayNum;
      this[0x13] = pFVar1[4].Data.ArrayMax;
      this[0x14] = *(undefined4 *)&pFVar1[5].Data.AllocatorInstance.Data;
      *(undefined1 *)(this + 0x15) =
           *(undefined1 *)((longlong)&pFVar1[5].Data.AllocatorInstance.Data + 4);
      *(undefined1 *)((longlong)this + 0x55) =
           *(undefined1 *)((longlong)&pFVar1[5].Data.AllocatorInstance.Data + 5);
      *(undefined1 *)((longlong)this + 0x56) =
           *(undefined1 *)((longlong)&pFVar1[5].Data.AllocatorInstance.Data + 6);
      *(undefined8 *)(this + 0x16) = *(undefined8 *)&pFVar1[5].Data.ArrayNum;
      *(undefined1 *)(this + 0x18) = *(undefined1 *)&pFVar1[6].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 0x1a;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTraceControlResume> @ 14463b000

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlResume>(void *param_1)

{
  return;
}

// ConstructForTests<FTraceControlResume> @ 14463b010

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlResume>(void *param_1)

{
  return;
}

// Construct<FTraceControlStatusPing> @ 14463b020

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlStatusPing>(void *param_1)

{
  return;
}

// ConstructForTests<FTraceControlStatusPing> @ 14463b030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlStatusPing>(void *param_1)

{
  return;
}

// Construct<FEngineServiceNotification> @ 14463b040

void __cdecl UE::CoreUObject::Private::Construct<FEngineServiceNotification>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FEngineServiceNotification> @ 14463b060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEngineServiceNotification>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FEngineServiceNotification> @ 14463b080

void __cdecl UE::CoreUObject::Private::Destruct<FEngineServiceNotification>(void *param_1)

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

// Copy<FEngineServiceNotification> @ 14463b0a0

bool __cdecl
UE::CoreUObject::Private::Copy<FEngineServiceNotification>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(FScriptContainerElement **)(this + 4) = pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTraceControlPause> @ 14463b120

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlPause>(void *param_1)

{
  return;
}

// ConstructForTests<FTraceControlPause> @ 14463b130

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlPause>(void *param_1)

{
  return;
}

// Construct<FEngineServiceTerminate> @ 14463b140

void __cdecl UE::CoreUObject::Private::Construct<FEngineServiceTerminate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FEngineServiceTerminate> @ 14463b150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEngineServiceTerminate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FEngineServiceTerminate> @ 14463b160

void __cdecl UE::CoreUObject::Private::Destruct<FEngineServiceTerminate>(void *param_1)

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

// Construct<FTraceControlFile> @ 14463b180

void __cdecl UE::CoreUObject::Private::Construct<FTraceControlFile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Copy<FEngineServiceTerminate> @ 14463b1a0

bool __cdecl
UE::CoreUObject::Private::Copy<FEngineServiceTerminate>(void *param_1,void *param_2,int param_3)

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

// ConstructForTests<FTraceControlFile> @ 14463b1f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTraceControlFile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FTraceControlFile> @ 14463b210

void __cdecl UE::CoreUObject::Private::Destruct<FTraceControlFile>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FTraceControlFile> @ 14463b250

bool __cdecl
UE::CoreUObject::Private::Copy<FTraceControlFile>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(undefined1 *)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum);
    pFVar1 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x30);
    *(char *)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum =
         (char)(pFVar1->Data).ArrayNum;
    param_1 = (FString *)((longlong)param_1 + 0x30);
  }
  return true;
}

