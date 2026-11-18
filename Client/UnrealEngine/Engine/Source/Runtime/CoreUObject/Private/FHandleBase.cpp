// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// AddRef @ 141f29230

void __thiscall FHandleBase::AddRef(FHandleBase *this)

{
  LOCK();
  this->RefCount = (atomic<int>)((int)this->RefCount + 1);
  UNLOCK();
  return;
}

// Cancel @ 141f2aaa0

bool __thiscall FHandleBase::Cancel(FHandleBase *this)

{
  return false;
}

// GetRefCount @ 141f36120

uint __thiscall FHandleBase::GetRefCount(FHandleBase *this)

{
  return (uint)this->RefCount;
}

// GetStatus @ 141f36db0

EStatus __thiscall FHandleBase::GetStatus(FHandleBase *this)

{
  return (EStatus)this->Status;
}

// Release @ 141f43460

void __thiscall FHandleBase::Release(FHandleBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  
  LOCK();
  paVar1 = &this->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((aVar2 == (atomic<int>)0x1) && (this != (FHandleBase *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141f4347c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// UpdatePriority @ 141f50000

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FHandleBase::UpdatePriority(FHandleBase *this,EAsyncIOPriorityAndFlags param_1)

{
  return;
}

// Wait @ 141f50560

bool __thiscall FHandleBase::Wait(FHandleBase *this,uint param_1)

{
  return false;
}

