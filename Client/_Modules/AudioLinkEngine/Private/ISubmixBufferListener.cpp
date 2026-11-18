// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 3

// ~ISubmixBufferListener @ 1464cc120

void __thiscall ISubmixBufferListener::~ISubmixBufferListener(ISubmixBufferListener *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001464cc140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// GetListenerName @ 1464cd1b0

FString * __thiscall ISubmixBufferListener::GetListenerName(ISubmixBufferListener *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FString_const&___ptr64___cdecl_ISubmixBufferListener::GetListenerName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FString_const&___ptr64___cdecl_ISubmixBufferListener::GetListenerName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FString_const&___ptr64___cdecl_ISubmixBufferListener::GetListenerName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_class_FString_const&___ptr64___cdecl_ISubmixBufferListener::GetListenerName(void)const___ptr64'
                          ::__l2::UnsetName,L"Unset");
      atexit(`ISubmixBufferListener::GetListenerName'::__l2::
             _dynamic_atexit_destructor_for__UnsetName__);
      _Init_thread_footer(&`public:_virtual_class_FString_const&___ptr64___cdecl_ISubmixBufferListener::GetListenerName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_virtual_class_FString_const&___ptr64___cdecl_ISubmixBufferListener::GetListenerName(void)const___ptr64'
              ::__l2::UnsetName;
    }
  }
  return &`public:_virtual_class_FString_const&___ptr64___cdecl_ISubmixBufferListener::GetListenerName(void)const___ptr64'
          ::__l2::UnsetName;
}

// IsRenderingAudio @ 1464cd430

bool __thiscall ISubmixBufferListener::IsRenderingAudio(ISubmixBufferListener *this)

{
  return false;
}

