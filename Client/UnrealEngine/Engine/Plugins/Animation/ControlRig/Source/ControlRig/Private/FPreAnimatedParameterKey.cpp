// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// operator= @ 14a3bda00

FPreAnimatedParameterKey * __thiscall
UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey::operator=
          (FPreAnimatedParameterKey *this,FPreAnimatedParameterKey *param_1)

{
  if (this != param_1) {
    (this->Buffer).Object = (param_1->Buffer).Object;
    (param_1->Buffer).Object = (FPreAnimatedBufferPairs *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Buffer).SharedReferenceCount,&(param_1->Buffer).SharedReferenceCount);
  }
  this->ParameterName = param_1->ParameterName;
  this->bPersistent = param_1->bPersistent;
  return this;
}

