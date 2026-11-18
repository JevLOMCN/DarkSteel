// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// GetData @ 1432d5fb0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FMockDownload::GetData(FMockDownload *this)

{
  return &this->Data;
}

// GetResponseCode @ 1432d9310

int __thiscall BuildPatchServices::FMockDownload::GetResponseCode(FMockDownload *this)

{
  return this->ResponseCode;
}

// RequestSuccessful @ 1432eaa50

bool __thiscall BuildPatchServices::FMockDownload::RequestSuccessful(FMockDownload *this)

{
  return this->bSuccess;
}

// ResponseSuccessful @ 1432eb260

bool __thiscall BuildPatchServices::FMockDownload::ResponseSuccessful(FMockDownload *this)

{
  if ((this->bSuccess != false) && (this->ResponseCode - 200U < 7)) {
    return true;
  }
  return false;
}

