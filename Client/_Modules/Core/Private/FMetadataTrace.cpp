// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// SaveStack @ 1419a8f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FMetadataTrace::SaveStack(void)

{
  atomic<unsigned_int> aVar1;
  undefined1 auStack_48 [32];
  atomic<unsigned_int> *local_28;
  longlong local_20;
  ulonglong local_18;
  
  aVar1 = ::Counter;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  LOCK();
  ::Counter = (atomic<unsigned_int>)((int)::Counter + 1);
  UNLOCK();
  if (-1 < MetadataChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMetadataStackSaveStackFields>((TLogScope<0> *)&local_28);
    *local_28 = aVar1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return (uint)aVar1;
}

