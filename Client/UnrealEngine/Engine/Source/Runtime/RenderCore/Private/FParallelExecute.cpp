// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// ~FParallelExecute @ 145d908a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRDGBuilder::FParallelExecute::~FParallelExecute(FParallelExecute *this)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  
  if (((this->DispatchTaskEventAsync).bIsSet != false) &&
     (FVar3 = (this->DispatchTaskEventAsync).TypedValue, FVar3 != (FTaskEvent)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  if (((this->DispatchTaskEventAwait).bIsSet != false) &&
     (FVar3 = (this->DispatchTaskEventAwait).TypedValue, FVar3 != (FTaskEvent)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  if (((this->TasksAsync).bIsSet != false) &&
     (FVar3 = (this->TasksAsync).TypedValue, FVar3 != (FTaskEvent)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  if (((this->TasksAwait).bIsSet != false) &&
     (FVar3 = (this->TasksAwait).TypedValue, FVar3 != (FTaskEvent)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  return;
}

