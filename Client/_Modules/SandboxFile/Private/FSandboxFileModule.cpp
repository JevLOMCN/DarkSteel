// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SandboxFile
// Functions: 1

// GetPlatformFile @ 148b80170

IPlatformFile * __thiscall FSandboxFileModule::GetPlatformFile(FSandboxFileModule *this)

{
  IPlatformFile *this_00;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FSandboxFileModule::GetPlatformFile(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FSandboxFileModule::GetPlatformFile(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FSandboxFileModule::GetPlatformFile(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    this_00 = ::operator_new(0xe0);
    if (this_00 != (IPlatformFile *)0x0) {
      IPlatformFile::IPlatformFile(this_00);
      *(undefined2 *)(this_00 + 0x12) = 0x101;
      *this_00 = (IPlatformFile)&___7FSandboxPlatformFile__6B_;
      this_00[1] = (IPlatformFile)0x0;
      this_00[2] = (IPlatformFile)0x0;
      this_00[3] = (IPlatformFile)0x0;
      this_00[4] = (IPlatformFile)0x0;
      this_00[5] = (IPlatformFile)0x0;
      this_00[6] = (IPlatformFile)0x0;
      this_00[7] = (IPlatformFile)0x0;
      this_00[8] = (IPlatformFile)0x0;
      this_00[9] = (IPlatformFile)0x0;
      this_00[10] = (IPlatformFile)0x0;
      this_00[0xb] = (IPlatformFile)0x0;
      this_00[0xc] = (IPlatformFile)0x0;
      this_00[0xd] = (IPlatformFile)0x0;
      this_00[0xe] = (IPlatformFile)0x0;
      this_00[0xf] = (IPlatformFile)0x0;
      this_00[0x10] = (IPlatformFile)0x0;
      this_00[0x11] = (IPlatformFile)0x0;
      this_00[0x13] = (IPlatformFile)0x0;
      this_00[0x14] = (IPlatformFile)0x0;
      this_00[0x15] = (IPlatformFile)0x0;
      this_00[0x16] = (IPlatformFile)0x0;
      this_00[0x17] = (IPlatformFile)0x0;
      this_00[0x18] = (IPlatformFile)0x0;
      this_00[0x19] = (IPlatformFile)0x0;
      this_00[0x1a] = (IPlatformFile)0x0;
      *(undefined1 *)(this_00 + 0x1b) = 0;
    }
    `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FSandboxFileModule::GetPlatformFile(void)___ptr64'
    ::__l2::AutoDestroySingleton.Ptr = this_00;
    atexit(`FSandboxFileModule::GetPlatformFile'::__l2::
           _dynamic_atexit_destructor_for__AutoDestroySingleton__);
    _Init_thread_footer(&`public:_virtual_class_IPlatformFile*___ptr64___cdecl_FSandboxFileModule::GetPlatformFile(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FSandboxFileModule::GetPlatformFile(void)___ptr64'
           ::__l2::AutoDestroySingleton.Ptr;
  }
  return `public:_virtual_class_IPlatformFile*___ptr64___cdecl_FSandboxFileModule::GetPlatformFile(void)___ptr64'
         ::__l2::AutoDestroySingleton.Ptr;
}

