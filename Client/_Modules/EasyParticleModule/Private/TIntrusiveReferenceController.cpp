// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 1

// DestroyObject @ 14acc2890

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEasyParticle,1>::DestroyObject
          (TIntrusiveReferenceController<SEasyParticle,1> *this)

{
  FGCObject *this_00;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x238));
  this_00 = (FGCObject *)((this->ObjectStorage).Pad + 0x218);
  this_00->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(this_00);
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

