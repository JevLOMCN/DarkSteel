// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RadAudioDecoder
// Functions: 4

// GetAddress @ 146bc5140

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 146bc5150

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6APEAVFRadAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_FRadAudioInfo_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 146bc5170

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146bc5175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0> @ 146bc5290

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FRadAudioInfo_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVFRadAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

