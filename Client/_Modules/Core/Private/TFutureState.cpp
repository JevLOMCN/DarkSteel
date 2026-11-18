// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~TFutureState<FString> @ 141919d70

void __thiscall TFutureState<FString>::~TFutureState<FString>(TFutureState<FString> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if (((char)this->_padding_ != '\0') &&
     (pvVar1 = *(void **)(this->Result).Pad, pvVar1 != (void *)0x0)) {
    FMemory::Free(pvVar1);
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000141919dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<TTwoSmoothies<1>_> @ 141cf1170

void __thiscall
TFutureState<TTwoSmoothies<1>_>::~TFutureState<TTwoSmoothies<1>_>
          (TFutureState<TTwoSmoothies<1>_> *this)

{
  longlong *plVar1;
  
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Result).Pad + 0x18));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Result).Pad + 8));
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
                    /* WARNING: Could not recover jumptable at 0x000141cf11d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

