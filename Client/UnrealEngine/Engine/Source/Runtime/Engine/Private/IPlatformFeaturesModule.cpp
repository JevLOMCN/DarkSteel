// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Get @ 147c52dd0

IPlatformFeaturesModule * __cdecl IPlatformFeaturesModule::Get(void)

{
  FName FVar1;
  wchar_t *pwVar2;
  FName *pFVar3;
  FModuleManager *this;
  FName local_res8 [4];
  
  if (`public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
      ::__l2::StaticModule == (IPlatformFeaturesModule *)0x0) {
    pwVar2 = FWindowsPlatformMisc::GetPlatformFeaturesModuleName();
    if (pwVar2 != (wchar_t *)0x0) {
      pFVar3 = ::FName::FName(local_res8,pwVar2);
      FVar1 = *pFVar3;
      this = FModuleManager::Get();
      `public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
      ::__l2::StaticModule =
           (IPlatformFeaturesModule *)FModuleManager::LoadModuleChecked(this,FVar1);
      return `public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
             ::__l2::StaticModule;
    }
    `public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
    ::__l2::StaticModule = ::operator_new(8);
    if (`public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
        ::__l2::StaticModule != (IPlatformFeaturesModule *)0x0) {
      *`public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
       ::__l2::StaticModule = (IPlatformFeaturesModule)&___7IPlatformFeaturesModule__6B_;
      return `public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
             ::__l2::StaticModule;
    }
    `public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
    ::__l2::StaticModule = (IPlatformFeaturesModule *)0x0;
  }
  return `public:_static_class_IPlatformFeaturesModule&___ptr64___cdecl_IPlatformFeaturesModule::Get(void)'
         ::__l2::StaticModule;
}

// GetSaveGameSystem @ 148331c00

ISaveGameSystem * __thiscall
IPlatformFeaturesModule::GetSaveGameSystem(IPlatformFeaturesModule *this)

{
  return (ISaveGameSystem *)&GenericSaveGame;
}

// GetStreamingSystem @ 148331c10

IDVRStreamingSystem * __thiscall
IPlatformFeaturesModule::GetStreamingSystem(IPlatformFeaturesModule *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`IPlatformFeaturesModule::GetStreamingSystem'::__l2::
             _dynamic_atexit_destructor_for__GenericStreamingSystem__);
      _Init_thread_footer(&::_TSS0);
      return (IDVRStreamingSystem *)&GenericStreamingSystem;
    }
  }
  return (IDVRStreamingSystem *)&GenericStreamingSystem;
}

// GetUniqueAppId @ 148331c90

FString * __thiscall
IPlatformFeaturesModule::GetUniqueAppId
          (IPlatformFeaturesModule *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetVideoRecordingSystem @ 148331cb0

IVideoRecordingSystem * __thiscall
IPlatformFeaturesModule::GetVideoRecordingSystem(IPlatformFeaturesModule *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`IPlatformFeaturesModule::GetVideoRecordingSystem'::__l2::
             _dynamic_atexit_destructor_for__GenericVideoRecordingSystem__);
      _Init_thread_footer(&::_TSS0);
      return (IVideoRecordingSystem *)&GenericVideoRecordingSystem;
    }
  }
  return (IVideoRecordingSystem *)&GenericVideoRecordingSystem;
}

// SetScreenshotEnableState @ 148331d30

void __thiscall
IPlatformFeaturesModule::SetScreenshotEnableState(IPlatformFeaturesModule *this,bool param_1)

{
  return;
}

