// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 1

// TNetResult<enum_EOodleNetResult> @ 14e293410

TNetResult<EOodleNetResult> * __thiscall
UE::Net::TNetResult<enum_EOodleNetResult>::TNetResult<enum_EOodleNetResult>
          (void *this,EOodleNetResult param_1)

{
  UEnum *pUVar1;
  UPackage *pUVar2;
  wchar_t *pwVar3;
  UEnum *local_res8;
  
  if (Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
    Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult,
                       (UObject *)pUVar2,L"EOodleNetResult");
  }
  pUVar1 = Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton;
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
  if (param_1 < OodleDecodeFailed) {
    return this;
  }
  pwVar3 = L"::Invalid";
  switch((ulonglong)param_1) {
  case 2:
    pwVar3 = L"EOodleNetResult::OodleDecodeFailed";
    break;
  case 3:
    pwVar3 = L"EOodleNetResult::OodleSerializePayloadFail";
    break;
  case 4:
    pwVar3 = L"EOodleNetResult::OodleBadDecompressedLength";
    break;
  case 5:
    pwVar3 = L"EOodleNetResult::OodleNoDictionary";
    break;
  default:
    goto switchD_14e2934d6_default;
  }
  do {
    pwVar3 = pwVar3 + 1;
  } while (*pwVar3 != L':');
switchD_14e2934d6_default:
  ::FString::operator=((FString *)((longlong)this + 0x18),pwVar3 + 2);
  return this;
}

