// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 3

// GetNumChannels @ 1465592c0

int __thiscall FKeySource::GetNumChannels(FKeySource *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->MutateSourceCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = this->NumChannels;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetType @ 14655c280

ESubmixEffectDynamicsKeySource __thiscall FKeySource::GetType(FKeySource *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ESubmixEffectDynamicsKeySource EVar1;
  
  lpCriticalSection = &this->MutateSourceCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->Type;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Update @ 14657baa0

void __thiscall
FKeySource::Update(FKeySource *this,ESubmixEffectDynamicsKeySource param_1,uint param_2,int param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  lpCriticalSection = &this->MutateSourceCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->Type == param_1) && (this->ObjectId == param_2)) && (this->NumChannels == param_3))
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      this->Type = param_1;
      this->ObjectId = param_2;
      this->NumChannels = param_3;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->Patch != (TSharedPtr<Audio::FPatchOutput,1> *)&local_18) {
        (this->Patch).Object = (FPatchOutput *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Patch).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

