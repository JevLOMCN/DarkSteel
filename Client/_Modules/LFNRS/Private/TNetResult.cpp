// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 1

// TNetResult<enum_ELocalFileReplayResult> @ 146c90590

TNetResult<ELocalFileReplayResult> * __thiscall
UE::Net::TNetResult<enum_ELocalFileReplayResult>::TNetResult<enum_ELocalFileReplayResult>
          (void *this,ELocalFileReplayResult param_1)

{
  UEnum *pUVar1;
  UPackage *pUVar2;
  wchar_t *pwVar3;
  UEnum *local_res8;
  
  if (Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming();
    Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult,
                       (UObject *)pUVar2,L"ELocalFileReplayResult");
  }
  pUVar1 = Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton;
  *(ulonglong *)this = (ulonglong)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnum *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)((longlong)this + 8) = 0;
  local_res8 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnum *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)this + 8),(FObjectPtr)&local_res8);
  *(UEnum **)((longlong)this + 0x10) = pUVar1;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (param_1 == Unknown) {
    return this;
  }
  if (param_1 == Success) {
    return this;
  }
  pwVar3 = L"::Invalid";
  switch((ulonglong)param_1) {
  case 1:
    pwVar3 = L"ELocalFileReplayResult::InvalidReplayInfo";
    break;
  case 2:
    pwVar3 = L"ELocalFileReplayResult::StreamChunkIndexMismatch";
    break;
  case 3:
    pwVar3 = L"ELocalFileReplayResult::DecompressBuffer";
    break;
  case 4:
    pwVar3 = L"ELocalFileReplayResult::CompressionNotSupported";
    break;
  case 5:
    pwVar3 = L"ELocalFileReplayResult::DecryptBuffer";
    break;
  case 6:
    pwVar3 = L"ELocalFileReplayResult::EncryptionNotSupported";
    break;
  case 7:
    pwVar3 = L"ELocalFileReplayResult::EncryptBuffer";
    break;
  case 8:
    pwVar3 = L"ELocalFileReplayResult::CompressBuffer";
    break;
  case 9:
    pwVar3 = L"ELocalFileReplayResult::InvalidName";
    break;
  case 10:
    pwVar3 = L"ELocalFileReplayResult::FileWriter";
    break;
  case 0xb:
    pwVar3 = L"ELocalFileReplayResult::Unknown";
    break;
  default:
    goto switchD_146c90663_default;
  }
  do {
    pwVar3 = pwVar3 + 1;
  } while (*pwVar3 != L':');
switchD_146c90663_default:
  ::FString::operator=((FString *)((longlong)this + 0x18),pwVar3 + 2);
  return this;
}

