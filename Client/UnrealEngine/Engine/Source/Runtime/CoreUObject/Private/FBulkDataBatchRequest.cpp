// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// UpdatePriority @ 141f4ff40

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FBulkDataBatchRequest::UpdatePriority(FBulkDataBatchRequest *this,EAsyncIOPriorityAndFlags param_1)

{
  uint uVar1;
  
  if (*this != (FBulkDataBatchRequest)0x0) {
    uVar1 = (**(code **)(*(longlong *)*this + 0x20))();
    if (uVar1 < 2) {
      (**(code **)(*(longlong *)*this + 0x38))(*this,param_1);
    }
  }
  return;
}

// Wait @ 141f50500

void __thiscall FBulkDataBatchRequest::Wait(FBulkDataBatchRequest *this)

{
  FBulkDataBatchRequest FVar1;
  
  FVar1 = *this;
  if (FVar1 != (FBulkDataBatchRequest)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141f50510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)FVar1 + 0x30))(FVar1,0xffffffff);
    return;
  }
  return;
}

// WaitFor @ 141f50670

bool __thiscall FBulkDataBatchRequest::WaitFor(FBulkDataBatchRequest *this,FTimespan *param_1)

{
  FBulkDataBatchRequest FVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  FVar1 = *this;
  uVar4 = param_1->Ticks / 10000;
  uVar3 = 0xffffffff;
  if ((longlong)uVar4 < 0xffffffff) {
    uVar3 = uVar4;
  }
  if (FVar1 != (FBulkDataBatchRequest)0x0) {
    uVar4 = 0;
    if (0 < (longlong)uVar3) {
      uVar4 = uVar3 & 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x000141f506aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)FVar1 + 0x30))(FVar1,uVar4);
    return (bool)uVar2;
  }
  return false;
}

// WaitFor @ 141f506c0

bool __thiscall FBulkDataBatchRequest::WaitFor(FBulkDataBatchRequest *this,uint param_1)

{
  undefined1 uVar1;
  
  if (*this != (FBulkDataBatchRequest)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141f506cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*this + 0x30))();
    return (bool)uVar1;
  }
  return false;
}

