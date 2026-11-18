// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// ~IMovieSceneConstrainedSection @ 1466213a0

void __thiscall
IMovieSceneConstrainedSection::~IMovieSceneConstrainedSection(IMovieSceneConstrainedSection *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IMovieSceneConstrainedSection__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnConstraintChannelAdded).field_0x8,
             *(int *)&(this->OnConstraintChannelAdded).field_0x10);
  pvVar1 = *(void **)&(this->OnConstraintChannelAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConstraintChannelAdded);
  return;
}

// OnConstraintsChanged @ 1466a8f00

void __thiscall
IMovieSceneConstrainedSection::OnConstraintsChanged(IMovieSceneConstrainedSection *this)

{
  return;
}

// _getUObject @ 146720b30

UObject * __thiscall IMovieSceneConstrainedSection::_getUObject(IMovieSceneConstrainedSection *this)

{
  return (UObject *)0x0;
}

// IMovieSceneConstrainedSection @ 146760630

IMovieSceneConstrainedSection * __thiscall
IMovieSceneConstrainedSection::IMovieSceneConstrainedSection(IMovieSceneConstrainedSection *this)

{
  *(undefined8 *)&(this->OnConstraintChannelAdded).field_0x18 = 2;
  this->_padding_ = (longlong)&___7IMovieSceneConstrainedSection__6B_;
  (this->OnConstraintRemovedHandle).ID = 0;
  *(undefined8 *)&this->OnConstraintChannelAdded = 0;
  *(undefined8 *)&(this->OnConstraintChannelAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnConstraintChannelAdded).field_0x10 = 0;
  this->bDoNotRemoveChannel = false;
  return this;
}

// SetDoNoRemoveChannel @ 1467c1b80

void __thiscall
IMovieSceneConstrainedSection::SetDoNoRemoveChannel
          (IMovieSceneConstrainedSection *this,bool param_1)

{
  this->bDoNotRemoveChannel = param_1;
  return;
}

