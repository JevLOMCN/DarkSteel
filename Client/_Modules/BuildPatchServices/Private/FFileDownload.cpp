// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// GetData @ 1432d5f80

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FFileDownload::GetData(FFileDownload *this)

{
  return &this->DataArray;
}

// GetResponseCode @ 1432d92c0

int __thiscall BuildPatchServices::FFileDownload::GetResponseCode(FFileDownload *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 8))();
  iVar2 = 0x194;
  if (cVar1 != '\0') {
    iVar2 = 200;
  }
  return iVar2;
}

// RequestSuccessful @ 1432eaa30

bool __thiscall BuildPatchServices::FFileDownload::RequestSuccessful(FFileDownload *this)

{
  return this->bSuccess;
}

// ResponseSuccessful @ 1432eb220

bool __thiscall BuildPatchServices::FFileDownload::ResponseSuccessful(FFileDownload *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x18))();
  return iVar1 - 200U < 7;
}

