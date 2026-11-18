// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// TNetResult<enum_ENetCloseResult> @ 147a23b70

TNetResult<ENetCloseResult> * __thiscall
UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
          (void *this,ENetCloseResult param_1)

{
  UEnum *pUVar1;
  wchar_t *pwVar2;
  UEnum *local_res8;
  
  pUVar1 = StaticEnum<enum_ENetCloseResult>();
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
  if (1 < param_1 - Unknown) {
    pwVar2 = ::LexToString(param_1);
    ::FString::operator=((FString *)((longlong)this + 0x18),pwVar2);
  }
  return this;
}

// TNetResult<enum_EReplayResult> @ 147ab9d20

TNetResult<EReplayResult> * __thiscall
UE::Net::TNetResult<enum_EReplayResult>::TNetResult<enum_EReplayResult>
          (void *this,EReplayResult param_1)

{
  UEnum *pUVar1;
  wchar_t *pwVar2;
  UEnum *local_res8;
  
  pUVar1 = StaticEnum<enum_EReplayResult>();
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
  if ((param_1 != Unknown) && (param_1 != Success)) {
    pwVar2 = ::LexToString(param_1);
    ::FString::operator=((FString *)((longlong)this + 0x18),pwVar2);
  }
  return this;
}

