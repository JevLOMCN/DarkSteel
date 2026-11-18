// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 1

// ~TFutureState<UE::Cook::FCookOnTheFlyResponse> @ 14311bc80

void __thiscall
TFutureState<UE::Cook::FCookOnTheFlyResponse>::~TFutureState<UE::Cook::FCookOnTheFlyResponse>
          (TFutureState<UE::Cook::FCookOnTheFlyResponse> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((this->field_0x68 != '\0') &&
     (pvVar1 = *(void **)((this->Result).Pad + 0x18), pvVar1 != (void *)0x0)) {
    FMemory::Free(pvVar1);
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
                    /* WARNING: Could not recover jumptable at 0x00014311bcdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

