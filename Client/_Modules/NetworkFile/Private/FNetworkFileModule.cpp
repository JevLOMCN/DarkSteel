// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkFile
// Functions: 1

// GetPlatformFile @ 148bdea20

IPlatformFile * __thiscall FNetworkFileModule::GetPlatformFile(FNetworkFileModule *this)

{
  FNetworkPlatformFile *this_00;
  FNetworkPlatformFile *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FNetworkFileModule::GetPlatformFile(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FNetworkFileModule::GetPlatformFile(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FNetworkFileModule::GetPlatformFile(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      this_00 = ::operator_new(0x1f8);
      pFVar1 = (FNetworkPlatformFile *)0x0;
      if (this_00 != (FNetworkPlatformFile *)0x0) {
        pFVar1 = FNetworkPlatformFile::FNetworkPlatformFile(this_00);
      }
      `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FNetworkFileModule::GetPlatformFile(void)___ptr64'
      ::__l2::AutoDestroySingleton.Ptr = (IPlatformFile *)pFVar1;
      atexit(`FNetworkFileModule::GetPlatformFile'::__l2::
             _dynamic_atexit_destructor_for__AutoDestroySingleton__);
      _Init_thread_footer(&`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FNetworkFileModule::GetPlatformFile(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FNetworkFileModule::GetPlatformFile(void)___ptr64'
             ::__l2::AutoDestroySingleton.Ptr;
    }
  }
  return `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FNetworkFileModule::GetPlatformFile(void)___ptr64'
         ::__l2::AutoDestroySingleton.Ptr;
}

