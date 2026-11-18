// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~IQueuedWork @ 141621500

void __thiscall IQueuedWork::~IQueuedWork(IQueuedWork *this)

{
  undefined1 *puVar1;
  int iVar2;
  IQueuedWorkInternalData *pIVar3;
  
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  pIVar3 = (this->InternalData).Reference;
  if (pIVar3 != (IQueuedWorkInternalData *)0x0) {
    puVar1 = &pIVar3->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141621532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)pIVar3)(pIVar3,1);
      return;
    }
  }
  return;
}

// GetDebugName @ 141640a70

wchar_t * __thiscall IQueuedWork::GetDebugName(IQueuedWork *this)

{
  return (wchar_t *)0x0;
}

// GetQueuedWorkFlags @ 141645be0

EQueuedWorkFlags __thiscall IQueuedWork::GetQueuedWorkFlags(IQueuedWork *this)

{
  return None;
}

// GetRequiredMemory @ 141645cc0

long64 __thiscall IQueuedWork::GetRequiredMemory(IQueuedWork *this)

{
  return -1;
}

