// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 3

// DestroyObject @ 1464cccd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`IAudioLinkFactory::CreatePushableBufferListener'::__l2::FPushableSourceBufferListener,1>
::DestroyObject(void *this)

{
  *(undefined ***)((longlong)this + 0x10) =
       &FBufferedSourceListener::_vftable__for__ISourceBufferListener__;
  ((FBufferedListenerBase *)((longlong)this + 0x18))->_padding_ =
       (longlong)&FBufferedSourceListener::_vftable__for__FBufferedListenerBase__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0xa8));
  FBufferedListenerBase::~FBufferedListenerBase((FBufferedListenerBase *)((longlong)this + 0x18));
  return;
}

// DestroyObject @ 1464ccd10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBufferedSourceListener,1>::DestroyObject
          (TIntrusiveReferenceController<FBufferedSourceListener,1> *this)

{
  FBufferedListenerBase *this_00;
  
  this_00 = (FBufferedListenerBase *)((this->ObjectStorage).Pad + 8);
  *(undefined ***)(this->ObjectStorage).Pad =
       &FBufferedSourceListener::_vftable__for__ISourceBufferListener__;
  this_00->_padding_ = (longlong)&FBufferedSourceListener::_vftable__for__FBufferedListenerBase__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x98));
  FBufferedListenerBase::~FBufferedListenerBase(this_00);
  return;
}

// DestroyObject @ 1464ccd50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBufferedSubmixListener,1>::DestroyObject
          (TIntrusiveReferenceController<FBufferedSubmixListener,1> *this)

{
  FBufferedSubmixListener::~FBufferedSubmixListener((FBufferedSubmixListener *)&this->ObjectStorage)
  ;
  return;
}

