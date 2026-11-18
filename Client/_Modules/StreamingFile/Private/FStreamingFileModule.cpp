// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingFile
// Functions: 1

// GetPlatformFile @ 148beace0

IPlatformFile * __thiscall FStreamingFileModule::GetPlatformFile(FStreamingFileModule *this)

{
  FNetworkPlatformFile *this_00;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FStreamingFileModule::GetPlatformFile(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FStreamingFileModule::GetPlatformFile(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FStreamingFileModule::GetPlatformFile(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    this_00 = ::operator_new(0x208);
    if (this_00 != (FNetworkPlatformFile *)0x0) {
      FNetworkPlatformFile::FNetworkPlatformFile(this_00);
      this_00->HeartbeatFrequency = -1.0;
      this_00->_padding_ = (longlong)&FStreamingNetworkPlatformFile::_vftable__for__IPlatformFile__;
      this_00->_padding_ =
           (longlong)&FStreamingNetworkPlatformFile::_vftable__for__FSelfRegisteringExec__;
      this_00->ConnectionFlags = this_00->ConnectionFlags | Streaming;
      this_00[1]._padding_ = 0;
      this_00[1]._padding_ = 0;
    }
    `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FStreamingFileModule::GetPlatformFile(void)___ptr64'
    ::__l2::AutoDestroySingleton.Ptr = (IPlatformFile *)this_00;
    atexit(`FStreamingFileModule::GetPlatformFile'::__l2::
           _dynamic_atexit_destructor_for__AutoDestroySingleton__);
    _Init_thread_footer(&`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FStreamingFileModule::GetPlatformFile(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FStreamingFileModule::GetPlatformFile(void)___ptr64'
           ::__l2::AutoDestroySingleton.Ptr;
  }
  return `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FStreamingFileModule::GetPlatformFile(void)___ptr64'
         ::__l2::AutoDestroySingleton.Ptr;
}

