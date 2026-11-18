// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// AddRef @ 1415a87e0

FReturnedRefCountValue __thiscall
FCompositeExecutionResource::AddRef(FCompositeExecutionResource *this)

{
  longlong *plVar1;
  longlong lVar2;
  int *in_RDX;
  
  LOCK();
  plVar1 = &this->_padding_;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  *in_RDX = (int)lVar2 + 1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// GetRefCount @ 1415c7c50

uint __thiscall FCompositeExecutionResource::GetRefCount(FCompositeExecutionResource *this)

{
  return (uint)this->_padding_;
}

// Release @ 1415e0c90

uint __thiscall FCompositeExecutionResource::Release(FCompositeExecutionResource *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = &this->_padding_;
  LOCK();
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    plVar3 = &this->_padding_;
    if (plVar1 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)*plVar3)(plVar3,1);
    }
  }
  return (int)lVar2 - 1;
}

