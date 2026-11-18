// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 4

// ~IAudioSpatializationFactory @ 14f044c20

void __thiscall
IAudioSpatializationFactory::~IAudioSpatializationFactory(IAudioSpatializationFactory *this)

{
  *this = (IAudioSpatializationFactory)&___7IAudioSpatializationFactory__6B_;
  return;
}

// GetCustomSpatializationSettingsClass @ 14f0484f0

UClass * __thiscall
IAudioSpatializationFactory::GetCustomSpatializationSettingsClass(IAudioSpatializationFactory *this)

{
  return (UClass *)0x0;
}

// GetDisplayName @ 14f048950

FString * __thiscall
IAudioSpatializationFactory::GetDisplayName
          (IAudioSpatializationFactory *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
                          ::__l2::DisplayName,L"Generic Audio Spatialization Plugin");
      atexit(`IAudioSpatializationFactory::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&`public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
          ::__l2::DisplayName.Data.ArrayNum;
  _Src = `public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
         ::__l2::DisplayName.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
          ::__l2::DisplayName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
       ::__l2::DisplayName.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// GetMaxSupportedChannels @ 14f048b70

int __thiscall
IAudioSpatializationFactory::GetMaxSupportedChannels(IAudioSpatializationFactory *this)

{
  return 1;
}

