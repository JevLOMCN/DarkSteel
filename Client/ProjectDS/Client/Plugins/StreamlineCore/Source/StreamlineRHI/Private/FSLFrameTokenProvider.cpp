// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineRHI
// Functions: 2

// FSLFrameTokenProvider @ 14de599b0

FSLFrameTokenProvider * __thiscall
FSLFrameTokenProvider::FSLFrameTokenProvider(FSLFrameTokenProvider *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  this->LastFrameCounter = (uint)GFrameCounter;
  SLgetNewFrameToken(&this->FrameToken,&this->LastFrameCounter);
  return this;
}

// GetTokenForFrame @ 14de5ad80

FrameToken * __thiscall
FSLFrameTokenProvider::GetTokenForFrame(FSLFrameTokenProvider *this,ulong64 param_1)

{
  FrameToken *pFVar1;
  
  if (this != (FSLFrameTokenProvider *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((uint)param_1 != this->LastFrameCounter) {
      this->LastFrameCounter = (uint)param_1;
      SLgetNewFrameToken(&this->FrameToken,&this->LastFrameCounter);
    }
    pFVar1 = this->FrameToken;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return pFVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

