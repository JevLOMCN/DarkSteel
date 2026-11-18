// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Get @ 1419fc030

FLatestGameThreadStatsData * __cdecl FLatestGameThreadStatsData::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FLatestGameThreadStatsData::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Singleton;
}

// NewData @ 141a0be40

void __thiscall
FLatestGameThreadStatsData::NewData(FLatestGameThreadStatsData *this,FGameThreadStatsData *param_1)

{
  if (this->Latest != (FGameThreadStatsData *)0x0) {
    FGameThreadStatsData::_scalar_deleting_destructor_(this->Latest,1);
  }
  this->Latest = param_1;
  return;
}

