// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ~FExecuteIfExceedsTimeLimit @ 141f68c50

void __thiscall
`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::FExecuteIfExceedsTimeLimit::
~FExecuteIfExceedsTimeLimit(void *this)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  LARGE_INTEGER LVar5;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  plVar4 = (longlong *)((longlong)this + 0x10);
  LVar5 = (LARGE_INTEGER)
          (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000) - *(double *)this);
  if (*(double *)((longlong)this + 8) <= (double)LVar5 &&
      (double)LVar5 != *(double *)((longlong)this + 8)) {
    local_res8 = LVar5;
    UE::Core::Private::Function::CheckCallable((void *)*plVar4);
    pcVar1 = (code *)*plVar4;
    plVar3 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x38);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_res8);
  }
  if (*plVar4 != 0) {
    plVar4 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

