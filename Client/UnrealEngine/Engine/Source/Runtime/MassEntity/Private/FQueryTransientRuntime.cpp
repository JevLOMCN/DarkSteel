// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// FQueryTransientRuntime @ 1471dbb20

FQueryTransientRuntime * __thiscall
FMassExecutionContext::FQueryTransientRuntime::FQueryTransientRuntime
          (FQueryTransientRuntime *this,FQueryTransientRuntime *param_1)

{
  UScriptStruct *pUVar1;
  
  (this->Query).Val = (param_1->Query).Val;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->ConstSubsystemsBitSet,
             (FBitSetContainer *)&param_1->ConstSubsystemsBitSet);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->MutableSubsystemsBitSet,
             (FBitSetContainer *)&param_1->MutableSubsystemsBitSet);
  pUVar1 = (param_1->FragmentTypesToBreakOn).Elements[1];
  (this->FragmentTypesToBreakOn).Elements[0] = (param_1->FragmentTypesToBreakOn).Elements[0];
  (this->FragmentTypesToBreakOn).Elements[1] = pUVar1;
  pUVar1 = (param_1->FragmentTypesToBreakOn).Elements[3];
  (this->FragmentTypesToBreakOn).Elements[2] = (param_1->FragmentTypesToBreakOn).Elements[2];
  (this->FragmentTypesToBreakOn).Elements[3] = pUVar1;
  pUVar1 = (param_1->FragmentTypesToBreakOn).Elements[5];
  (this->FragmentTypesToBreakOn).Elements[4] = (param_1->FragmentTypesToBreakOn).Elements[4];
  (this->FragmentTypesToBreakOn).Elements[5] = pUVar1;
  pUVar1 = (param_1->FragmentTypesToBreakOn).Elements[7];
  (this->FragmentTypesToBreakOn).Elements[6] = (param_1->FragmentTypesToBreakOn).Elements[6];
  (this->FragmentTypesToBreakOn).Elements[7] = pUVar1;
  this->bCheckProcessorBreaks = param_1->bCheckProcessorBreaks;
  this->BreakFragmentsCount = param_1->BreakFragmentsCount;
  this->IteratorSerialNumber = param_1->IteratorSerialNumber;
  return this;
}

// GetDummyInstance @ 147220cd0

FQueryTransientRuntime * __cdecl
FMassExecutionContext::FQueryTransientRuntime::GetDummyInstance(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMassEntityQuery::FMassEntityQuery(&DummyQuery);
      atexit(`FMassExecutionContext::FQueryTransientRuntime::GetDummyInstance'::__l2::
             _dynamic_atexit_destructor_for__DummyQuery__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar1 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      atexit(`FMassExecutionContext::FQueryTransientRuntime::GetDummyInstance'::__l2::
             _dynamic_atexit_destructor_for__DummyInstance__);
      _Init_thread_footer(&::_TSS1);
      return &DummyInstance;
    }
  }
  return &DummyInstance;
}

