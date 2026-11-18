// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// FFileIoStoreResolvedRequest @ 142a51db0

FFileIoStoreResolvedRequest * __thiscall
FFileIoStoreResolvedRequest::FFileIoStoreResolvedRequest
          (FFileIoStoreResolvedRequest *this,FIoRequestImpl *param_1,
          FFileIoStoreContainerFile *param_2,ulong64 param_3,ulong64 param_4,int param_5)

{
  this->ResolvedSize = param_4;
  this->DispatcherRequest = param_1;
  this->Priority = param_5;
  this->ContainerFile = param_2;
  this->ReadRequestsHead = (FFileIoStoreReadRequestLink *)0x0;
  this->ReadRequestsTail = (FFileIoStoreReadRequestLink *)0x0;
  this->ResolvedOffset = param_3;
  this->UnfinishedReadsCount = 0;
  this->bFailed = false;
  this->bCancelled = false;
  return this;
}

// AddReadRequestLink @ 142a5e450

void __thiscall
FFileIoStoreResolvedRequest::AddReadRequestLink
          (FFileIoStoreResolvedRequest *this,FFileIoStoreReadRequestLink *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Next != (FFileIoStoreReadRequestLink *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ReadRequestLink->Next",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                       ,0x3dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ReadRequestsTail != (FFileIoStoreReadRequestLink *)0x0) {
    this->ReadRequestsTail->Next = param_1;
    this->ReadRequestsTail = param_1;
    return;
  }
  this->ReadRequestsHead = param_1;
  this->ReadRequestsTail = param_1;
  return;
}

