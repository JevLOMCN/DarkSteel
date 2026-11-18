// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 3

// DestroyObject @ 14315cb40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHttpRetrySystem::FRequest,SharedPointerInternals::DefaultDeleter<FHttpRetrySystem::FRequest>,1>
::DestroyObject(TReferenceControllerWithDeleter<FHttpRetrySystem::FRequest,SharedPointerInternals::DefaultDeleter<FHttpRetrySystem::FRequest>,1>
                *this)

{
  FRequest *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRequest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014315cb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14315cb60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWinHttpConnectionHttp,SharedPointerInternals::DefaultDeleter<FWinHttpConnectionHttp>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWinHttpConnectionHttp,SharedPointerInternals::DefaultDeleter<FWinHttpConnectionHttp>,1>
                *this)

{
  FWinHttpConnectionHttp *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWinHttpConnectionHttp *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014315cb71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14315cb80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IHttpRequest,SharedPointerInternals::DefaultDeleter<IHttpRequest>,1>
::DestroyObject(TReferenceControllerWithDeleter<IHttpRequest,SharedPointerInternals::DefaultDeleter<IHttpRequest>,1>
                *this)

{
  IHttpRequest *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IHttpRequest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014315cb91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1,1);
    return;
  }
  return;
}

