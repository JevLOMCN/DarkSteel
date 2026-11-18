// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FTaskEvent @ 141becd60

void __thiscall UE::Tasks::FTaskEvent::~FTaskEvent(FTaskEvent *this)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  
  FVar3 = *this;
  if (FVar3 != (FTaskEvent)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141becd7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
      return;
    }
  }
  return;
}

// Trigger @ 141d8d210

void __thiscall UE::Tasks::FTaskEvent::Trigger(FTaskEvent *this)

{
  atomic<bool> aVar1;
  FTaskEvent this_00;
  
  if ((*this != (FTaskEvent)0x0) && (*(char *)((longlong)*this + 0xd0) == '\0')) {
    this_00 = *this;
    LOCK();
    aVar1 = *(atomic<bool> *)((longlong)this_00 + 0x45);
    *(atomic<bool> *)((longlong)this_00 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)this_00 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_00 + 0x30) + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0xd8);
      return;
    }
  }
  return;
}

