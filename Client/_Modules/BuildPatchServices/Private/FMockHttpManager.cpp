// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// CreateRequest @ 14331cdc0

TSharedRef<IHttpRequest,1> * __thiscall
BuildPatchServices::FMockHttpManager::CreateRequest
          (FMockHttpManager *this,TSharedRef<IHttpRequest,1> *__return_storage_ptr__)

{
  FMockHttpRequest *this_00;
  FMockHttpRequest *pFVar1;
  
  this->RxCreateRequest = this->RxCreateRequest + 1;
  this_00 = ::operator_new(0x1b0);
  pFVar1 = (FMockHttpRequest *)0x0;
  if (this_00 != (FMockHttpRequest *)0x0) {
    memset(this_00,0,0x1b0);
    pFVar1 = FMockHttpRequest::FMockHttpRequest(this_00);
  }
  TSharedRef<IHttpRequest,1>::TSharedRef<IHttpRequest,1><BuildPatchServices::FMockHttpRequest>
            (__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

