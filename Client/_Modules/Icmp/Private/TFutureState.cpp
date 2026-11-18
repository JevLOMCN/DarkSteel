// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 2

// ~TFutureState<FIcmpEchoManyCompleteResult> @ 1445538f0

void __thiscall
TFutureState<FIcmpEchoManyCompleteResult>::~TFutureState<FIcmpEchoManyCompleteResult>
          (TFutureState<FIcmpEchoManyCompleteResult> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if (this->field_0x68 != '\0') {
    DestructItems<FIcmpEchoManyResult,int>
              (*(FIcmpEchoManyResult **)(this->Result).Pad,*(int *)((this->Result).Pad + 8));
    pvVar1 = *(void **)(this->Result).Pad;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar2 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar2 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000144553956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<FIcmpEchoResult> @ 144553970

void __thiscall
TFutureState<FIcmpEchoResult>::~TFutureState<FIcmpEchoResult>(TFutureState<FIcmpEchoResult> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((char)this->_padding_ != '\0') {
    pvVar1 = *(void **)((this->Result).Pad + 0x18);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pvVar1 = *(void **)((this->Result).Pad + 8);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001445539db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

