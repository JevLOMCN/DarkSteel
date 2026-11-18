// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// ~TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> @ 14e6913c0

void __thiscall
TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_>::
~TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_>
          (TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> *this)

{
  longlong *plVar1;
  
  if (((char)this->_padding_ != '\0') && ((this->Result).Pad[0x98] != '\0')) {
    UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData
              ((FAnimationPayloadData *)&this->Result);
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014e69141e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

