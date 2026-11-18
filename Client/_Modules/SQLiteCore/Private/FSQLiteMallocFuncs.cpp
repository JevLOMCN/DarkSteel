// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 12

// Free @ 14d121e50

void __cdecl FSQLiteMallocFuncs::Free(void *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// Init @ 14d123920

int __cdecl FSQLiteMallocFuncs::Init(void *param_1)

{
  return 0;
}

// Malloc @ 14d123d00

void * __cdecl FSQLiteMallocFuncs::Malloc(int param_1)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc((longlong)param_1,0);
  return pvVar1;
}

// Realloc @ 14d1248e0

void * __cdecl FSQLiteMallocFuncs::Realloc(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Realloc(param_1,(longlong)param_2,0);
  return pvVar1;
}

// Roundup @ 14d124920

int __cdecl FSQLiteMallocFuncs::Roundup(int param_1)

{
  ulong64 uVar1;
  
  uVar1 = FMemory::QuantizeSize((longlong)param_1,0);
  return (int)uVar1;
}

// Shutdown @ 14d125910

void __cdecl FSQLiteMallocFuncs::Shutdown(void *param_1)

{
  return;
}

// Size @ 14d125920

int __cdecl FSQLiteMallocFuncs::Size(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 auStackX_10 [3];
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    FMemory::GCreateMalloc();
    auStackX_10[0] = 0;
    cVar1 = (**(code **)((longlong)*UE::Private::GMalloc + 0x68))
                      (UE::Private::GMalloc,param_1,auStackX_10);
  }
  else {
    auStackX_10[0] = 0;
    cVar1 = (**(code **)((longlong)*UE::Private::GMalloc + 0x68))
                      (UE::Private::GMalloc,param_1,auStackX_10);
  }
  iVar2 = 0;
  if (cVar1 != '\0') {
    iVar2 = (int)auStackX_10[0];
  }
  return iVar2;
}

// WorkaroundFree @ 14d125be0

void __cdecl FSQLiteMallocFuncs::WorkaroundFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FMemory::Free((void *)((longlong)param_1 + -0x10));
    return;
  }
  return;
}

// WorkaroundMalloc @ 14d125c00

void * __cdecl FSQLiteMallocFuncs::WorkaroundMalloc(int param_1)

{
  int *piVar1;
  
  piVar1 = FMemory::Malloc((longlong)(param_1 + 0x10),0);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    piVar1 = piVar1 + 4;
  }
  return piVar1;
}

// WorkaroundRealloc @ 14d125c30

void * __cdecl FSQLiteMallocFuncs::WorkaroundRealloc(void *param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  
  pvVar2 = (void *)((longlong)param_1 + -0x10);
  if (param_1 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  piVar1 = FMemory::Realloc(pvVar2,(longlong)(param_2 + 0x10),0);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    piVar1 = piVar1 + 4;
  }
  return piVar1;
}

// WorkaroundRoundup @ 14d125c70

int __cdecl FSQLiteMallocFuncs::WorkaroundRoundup(int param_1)

{
  ulong64 uVar1;
  
  uVar1 = FMemory::QuantizeSize((longlong)(param_1 + 0x10),0);
  return (int)uVar1 + -0x10;
}

// WorkaroundSize @ 14d125c90

int __cdecl FSQLiteMallocFuncs::WorkaroundSize(void *param_1)

{
  if (param_1 != (void *)0x0) {
    return *(int *)((longlong)param_1 + -0x10);
  }
  return 0;
}

