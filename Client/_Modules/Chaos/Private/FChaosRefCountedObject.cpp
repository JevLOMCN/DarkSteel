// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ~FChaosRefCountedObject @ 143b57f90

void __thiscall Chaos::FChaosRefCountedObject::~FChaosRefCountedObject(FChaosRefCountedObject *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FChaosRefCountedObject_Chaos__6B_;
  if ((this->NumRefs != (atomic<int>)0x0) && (this->NumRefs != (atomic<int>)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\RefCountedObject.h"
                       ,0x1e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Release @ 14404e2f0

uint __thiscall Chaos::FChaosRefCountedObject::Release(FChaosRefCountedObject *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  
  LOCK();
  paVar1 = &this->NumRefs;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((aVar2 == (atomic<int>)0x1) &&
     (this->RefCountMode == (atomic<Chaos::FChaosRefCountedObject::ERCM_RefCountMode>)0x0)) {
    (**(code **)this->_padding_)(this,1);
  }
  return 0;
}

