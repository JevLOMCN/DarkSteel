// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// GetData @ 14e09b5f0

uchar * __thiscall FHairStreamingRequest::FChunk::GetData(FChunk *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (this->Status != Completed) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status == Completed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsDatas.cpp"
                       ,0x235,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  if (this->Container == (FHairBulkContainer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsDatas.cpp"
                       ,0x237,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  return ((this->Data_IO).CorePtr.Reference)->DataPtr;
}

// Release @ 14e0a9b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FHairStreamingRequest::FChunk::Release(FChunk *this)

{
  undefined1 auStack_48 [32];
  TIoStatusOr<unsigned_char_*> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  FIoBuffer::Release(&this->Data_IO,&local_28);
  if (local_28.StatusValue.ErrorCode != Ok) {
    StatusOrCrash(&local_28.StatusValue);
  }
  FIoStatus::operator=(&local_28.StatusValue,&FIoStatus::Unknown);
  FMemory::Free((void *)local_28.Value.Pad);
  FIoStatus::operator=(&local_28.StatusValue,Unknown);
  FIoStatus::~FIoStatus(&local_28.StatusValue);
  return;
}

