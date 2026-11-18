// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// GetError @ 141aa9010

FOutputDeviceError * __cdecl FWindowsPlatformOutputDevices::GetError(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FOutputDevice::FOutputDevice((FOutputDevice *)&::Singleton);
      ::Singleton._16_8_ = 0;
      ::Singleton._0_8_ = &___7FWindowsErrorOutputDevice__6B_;
      atexit(`FWindowsPlatformOutputDevices::GetError'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return (FOutputDeviceError *)&::Singleton;
    }
  }
  return (FOutputDeviceError *)&::Singleton;
}

// GetEventLog @ 141aa90b0

FOutputDevice * __cdecl FWindowsPlatformOutputDevices::GetEventLog(void)

{
  return (FOutputDevice *)0x0;
}

