// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// ~FTokenParseResult @ 14e161c10

void __thiscall
Optimus::Expression::FEngine::FTokenParseResult::~FTokenParseResult(FTokenParseResult *this)

{
  byte bVar1;
  void *pvVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FLowLevelMemTracker *this_00;
  
  bVar1 = (this->Result).TypeIndex;
  if (1 < bVar1) {
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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 1:
    return;
  case 2:
    return;
  case 3:
    plVar3 = (longlong *)(this->Result)._padding_;
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141f7951b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
    return;
  }
  pvVar2 = (void *)(this->Result)._padding_;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (pvVar2 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar2,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar2);
  }
  return;
}

