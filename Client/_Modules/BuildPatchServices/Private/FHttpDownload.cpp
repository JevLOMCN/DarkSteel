// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// GetData @ 1432d5f90

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FHttpDownload::GetData(FHttpDownload *this)

{
  IHttpResponse *pIVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pIVar1 = (this->HttpResponse).Object;
  if (pIVar1 != (IHttpResponse *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432d5f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*pIVar1 + 0x48))();
    return pTVar2;
  }
  return &NoData;
}

// GetResponseCode @ 1432d92f0

int __thiscall BuildPatchServices::FHttpDownload::GetResponseCode(FHttpDownload *this)

{
  IHttpResponse *pIVar1;
  int iVar2;
  
  pIVar1 = (this->HttpResponse).Object;
  if (pIVar1 != (IHttpResponse *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432d92fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x58))();
    return iVar2;
  }
  return -1;
}

// RequestSuccessful @ 1432eaa40

bool __thiscall BuildPatchServices::FHttpDownload::RequestSuccessful(FHttpDownload *this)

{
  return this->bSuccess;
}

// ResponseSuccessful @ 1432eb240

bool __thiscall BuildPatchServices::FHttpDownload::ResponseSuccessful(FHttpDownload *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x18))();
  return iVar1 - 200U < 7;
}

