// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// ~FIssuedTask @ 14aa93ba0

void __thiscall UE::Mutable::Private::CodeRunner::FIssuedTask::~FIssuedTask(FIssuedTask *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  pFVar3 = (this->Event).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014aa93bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      return;
    }
  }
  return;
}

// DoWork @ 14aac6da0

void __thiscall UE::Mutable::Private::CodeRunner::FIssuedTask::DoWork(FIssuedTask *this)

{
  return;
}

// IsComplete @ 14aad8910

bool __thiscall
UE::Mutable::Private::CodeRunner::FIssuedTask::IsComplete(FIssuedTask *this,CodeRunner *param_1)

{
  FTaskBase *pFVar1;
  
  pFVar1 = (this->Event).Pimpl.Reference;
  if ((pFVar1 != (FTaskBase *)0x0) && ((pFVar1->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    return false;
  }
  return true;
}

// Prepare @ 14aae46a0

bool __thiscall
UE::Mutable::Private::CodeRunner::FIssuedTask::Prepare
          (FIssuedTask *this,CodeRunner *param_1,bool *param_2)

{
  *param_2 = false;
  return true;
}

