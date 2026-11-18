// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles> @ 14d015c80

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>
           *this)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0x80,
             *(int *)&this->field_0x88);
  if (*(void **)&this->field_0x80 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x80);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0x40,
             *(int *)&this->field_0x48);
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d015cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x18);
  return;
}

