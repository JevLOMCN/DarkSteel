// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 2

// ~FMediaTextureClockSink @ 146c1e520

void __thiscall FMediaTextureClockSink::~FMediaTextureClockSink(FMediaTextureClockSink *this)

{
  this->_padding_ = (longlong)&___7FMediaTextureClockSink__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
  return;
}

// TickRender @ 146c38390

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaTextureClockSink::TickRender(FMediaTextureClockSink *this,FTimespan param_1,FTimespan param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UMediaTexture *this_00;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = (UMediaTexture *)FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    if (this_00 != (UMediaTexture *)0x0) {
      UMediaTexture::TickResource(this_00,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x000146c383e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

