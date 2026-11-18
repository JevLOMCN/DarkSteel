// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// FActiveTimerHandle @ 142426cb0

FActiveTimerHandle * __thiscall
FActiveTimerHandle::FActiveTimerHandle
          (FActiveTimerHandle *this,float param_1,
          TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
          *param_2,double param_3)

{
  this->ExecutionPeriod = param_1;
  TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
            (&this->TimerFunction,param_2);
  this->NextExecutionTime = param_3;
  this->bExecutionPending = false;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return this;
}

// ExecuteIfPending @ 14243c5b0

EActiveTimerReturnType __thiscall
FActiveTimerHandle::ExecuteIfPending(FActiveTimerHandle *this,double param_1,float param_2)

{
  char cVar1;
  EActiveTimerReturnType EVar2;
  longlong *plVar3;
  double dVar4;
  undefined4 in_XMM2_Db;
  FReadAccessScope local_48 [2];
  
  if (this->bExecutionPending == false) {
    return Continue;
  }
  this->bExecutionPending = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TimerFunction,local_48
            );
  if (((*(int *)&(this->TimerFunction).field_0x10 != 0) &&
      (plVar3 = *(longlong **)&(this->TimerFunction).field_0x8, plVar3 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar3 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_48);
    if ((0.0 < this->ExecutionPeriod) && (dVar4 = this->NextExecutionTime, dVar4 <= param_1)) {
      do {
        dVar4 = (double)this->ExecutionPeriod + dVar4;
      } while (dVar4 <= param_1);
      this->NextExecutionTime = dVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TimerFunction,
               local_48);
    if (*(int *)&(this->TimerFunction).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->TimerFunction).field_0x8;
    }
    EVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1,CONCAT44(in_XMM2_Db,param_2));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_48);
    return EVar2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_48);
  return Stop;
}

// IsPendingExecution @ 142445890

bool __thiscall FActiveTimerHandle::IsPendingExecution(FActiveTimerHandle *this)

{
  return this->bExecutionPending;
}

// IsReady @ 1424458f0

bool __thiscall FActiveTimerHandle::IsReady(FActiveTimerHandle *this,double param_1)

{
  return this->NextExecutionTime <= param_1;
}

// UpdateExecutionPendingState @ 142456000

bool __thiscall
FActiveTimerHandle::UpdateExecutionPendingState(FActiveTimerHandle *this,double param_1)

{
  bool bVar1;
  
  bVar1 = this->NextExecutionTime <= param_1;
  this->bExecutionPending = bVar1;
  return bVar1;
}

