// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NonRealtimeAudioRenderer
// Functions: 11

// `dynamic_initializer_for_'CVarDefaultRenderFrameSize'' @ 141098840

void __cdecl _dynamic_initializer_for__CVarDefaultRenderFrameSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDefaultRenderFrameSize,L"au.nrt.RenderFrameSize",&DefaultRenderFrameSizeCvar,
             L"Selects the number of frames to render in a single callback .\nn: Number of frames to render."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultRenderFrameSize__);
  return;
}

// `dynamic_initializer_for_'CVarRenderEveryTick'' @ 141098890

void __cdecl _dynamic_initializer_for__CVarRenderEveryTick__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRenderEveryTick,L"au.nrt.RenderEveryTick",&RenderEveryTickCvar,
             L"When set to 1, calls the RenderAudio call every tick.\nn: Number of frames to render."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderEveryTick__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNonRealtimeAudioRenderer'' @ 1410988e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantNonRealtimeAudioRenderer__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NonRealtimeAudioRenderer";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NonRealtimeAudioRenderer",0x18);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAudioMixerModuleNonRealtime>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 1464c6bb0

void * __thiscall
FAudioMixerModuleNonRealtime::_scalar_deleting_destructor_
          (FAudioMixerModuleNonRealtime *this,uint param_1)

{
  *this = (FAudioMixerModuleNonRealtime)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464c6c30

void * __thiscall
IAudioDeviceModule::_scalar_deleting_destructor_(IAudioDeviceModule *this,uint param_1)

{
  *this = (IAudioDeviceModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1464c6d68

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FMixerPlatformNonRealtime::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FMixerPlatformNonRealtime::_vector_deleting_destructor__adjustor_8__
          (FMixerPlatformNonRealtime *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMixerPlatformNonRealtime *)&this[-1].AudioFileWriter,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 1464c6d78

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FMixerPlatformNonRealtime::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FMixerPlatformNonRealtime::_vector_deleting_destructor__adjustor_16__
          (FMixerPlatformNonRealtime *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMixerPlatformNonRealtime *)&this[-1].field_0x200,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1464c6d90

void * __thiscall
Audio::FMixerPlatformNonRealtime::_scalar_deleting_destructor_
          (FMixerPlatformNonRealtime *this,uint param_1)

{
  FAudioFileWriter *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  this_00 = (this->AudioFileWriter).Ptr;
  if (this_00 != (FAudioFileWriter *)0x0) {
    FAudioFileWriter::~FAudioFileWriter(this_00);
    ::operator_delete(this_00,0x48);
  }
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// IMPLEMENT_MODULE_NonRealtimeAudioRenderer @ 1464c7ca0

void __cdecl IMPLEMENT_MODULE_NonRealtimeAudioRenderer(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultRenderFrameSize'' @ 1503dc080

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultRenderFrameSize__(void)

{
  CVarDefaultRenderFrameSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultRenderFrameSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderEveryTick'' @ 1503dc0a0

void __cdecl _dynamic_atexit_destructor_for__CVarRenderEveryTick__(void)

{
  CVarRenderEveryTick._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderEveryTick);
  return;
}

