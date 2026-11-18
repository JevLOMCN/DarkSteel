// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 3

// GetDisplayName @ 14f048750

FString * __thiscall
IAudioPluginFactory::GetDisplayName(IAudioPluginFactory *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'
                          ::__l2::DisplayName,L"Generic Audio Plugin");
      atexit(`IAudioPluginFactory::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'
          ::__l2::DisplayName.Data.ArrayNum;
  _Src = `public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'::
         __l2::DisplayName.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'
          ::__l2::DisplayName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'::
       __l2::DisplayName.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// IsExternalSend @ 14f049b20

bool __thiscall IAudioPluginFactory::IsExternalSend(IAudioPluginFactory *this)

{
  return false;
}

// ReturnsToSubmixGraph @ 14f04c710

bool __thiscall IAudioPluginFactory::ReturnsToSubmixGraph(IAudioPluginFactory *this)

{
  return false;
}

