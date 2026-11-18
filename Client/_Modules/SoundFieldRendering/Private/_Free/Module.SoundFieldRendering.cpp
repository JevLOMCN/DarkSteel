// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFieldRendering
// Functions: 16

// Sqrt2Over2Vec'' @ 141098930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FSoundFieldDecoder::Sqrt2Over2Vec__(void)

{
  double dVar1;
  double dVar2;
  
  FSoundFieldDecoder::Sqrt2Over2Vec.XY.m128d_f64 = ___xmm_3fe69fbe800000003fe69fbe80000000;
  dVar1 = (double)_UNK_1512c3228;
  dVar2 = (double)_UNK_1512c322c;
  FSoundFieldDecoder::Sqrt2Over2Vec.ZW.m128d_f64[0] = dVar1;
  FSoundFieldDecoder::Sqrt2Over2Vec.ZW.m128d_f64[1] = dVar2;
  return;
}

// VirtualSpeakerLocationsHorzOnly'' @ 141098960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl `dynamic_initializer_for_'FSoundFieldDecoder::VirtualSpeakerLocationsHorzOnly__(void)

{
  ForAnyElementType FVar1;
  
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,9,0,&FSoundFieldDecoder::VirtualSpeakerLocationsHorzOnly.AllocatorInstance,9,
             &FSoundFieldDecoder::VirtualSpeakerLocationsHorzOnly.ArrayMax);
  FVar1 = FSoundFieldDecoder::VirtualSpeakerLocationsHorzOnly.AllocatorInstance;
  *(undefined8 *)FSoundFieldDecoder::VirtualSpeakerLocationsHorzOnly.AllocatorInstance.Data =
       0x43a5000000000000;
  *(undefined8 *)(FVar1.Data + 8) = 0x3f80000000000000;
  *(undefined8 *)(FVar1.Data + 0x10) = 0x41f0000000000001;
  *(undefined8 *)(FVar1.Data + 0x18) = 0x3f80000000000000;
  *(undefined8 *)(FVar1.Data + 0x20) = 2;
  *(undefined8 *)(FVar1.Data + 0x28) = 0x3f80000000000000;
  *(undefined8 *)(FVar1.Data + 0x30) = 0xbf80000000000003;
  *(undefined8 *)(FVar1.Data + 0x38) = 0x3f80000000000000;
  *(undefined8 *)(FVar1.Data + 0x40) = 0x4352000000000004;
  *(undefined8 *)(FVar1.Data + 0x48) = 0x3f80000000000000;
  *(undefined8 *)(FVar1.Data + 0x50) = 0x4316000000000005;
  *(undefined8 *)(FVar1.Data + 0x58) = 0x3f80000000000000;
  *(undefined8 *)(FVar1.Data + 0x60) = 0x437a000000000009;
  *(undefined8 *)(FVar1.Data + 0x68) = 0x3f80000000000000;
  *(undefined8 *)(FVar1.Data + 0x70) = 0x42dc00000000000a;
  *(undefined8 *)(FVar1.Data + 0x78) = 0x3f80000000000000;
  *(undefined8 *)(FVar1.Data + 0x80) = 0x4334000000000008;
  *(undefined8 *)(FVar1.Data + 0x88) = 0x3f80000000000000;
  atexit(`dynamic_atexit_destructor_for_'FSoundFieldDecoder::VirtualSpeakerLocationsHorzOnly__);
  return;
}

// ZeroVec'' @ 141098b00

void __cdecl `dynamic_initializer_for_'FSoundFieldDecoder::ZeroVec__(void)

{
  FSoundFieldDecoder::ZeroVec.XY.m128d_f64[0] = 0.0;
  FSoundFieldDecoder::ZeroVec.XY.m128d_f64[1] = 0.0;
  FSoundFieldDecoder::ZeroVec.ZW.m128d_f64[0] = 0.0;
  FSoundFieldDecoder::ZeroVec.ZW.m128d_f64[1] = 0.0;
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSoundFieldRendering'' @ 141098b30

void __cdecl _dynamic_initializer_for__ModuleRegistrantSoundFieldRendering__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SoundFieldRendering";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SoundFieldRendering",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FSoundFieldRenderingModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 1464c7cd0

void * __thiscall
FSoundFieldRenderingModule::_scalar_deleting_destructor_
          (FSoundFieldRenderingModule *this,uint param_1)

{
  *this = (FSoundFieldRenderingModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator<<<float,TAlignedHeapAllocator<16>_> @ 1464c7d10

FArchive * __cdecl
operator<<<float,TAlignedHeapAllocator<16>_>
          (FArchive *param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 2,(longlong)param_2->ArrayMax << 2);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 2);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// `scalar_deleting_destructor' @ 1464c82f0

void * __thiscall
FAmbisonicsSoundfieldBuffer::_scalar_deleting_destructor_
          (FAmbisonicsSoundfieldBuffer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAmbisonicsSoundfieldBuffer__6B_;
  pFVar1 = (this->AudioBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISoundfieldAudioPacket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464c8350

void * __thiscall
FAmbisonicsSoundfieldSettings::_scalar_deleting_destructor_
          (FAmbisonicsSoundfieldSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISoundfieldEncodingSettingsProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464c8390

void * __thiscall
ISoundfieldAudioPacket::_scalar_deleting_destructor_(ISoundfieldAudioPacket *this,uint param_1)

{
  *this = (ISoundfieldAudioPacket)&___7ISoundfieldAudioPacket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464c83d0

void * __thiscall
ISoundfieldEncodingSettingsProxy::_scalar_deleting_destructor_
          (ISoundfieldEncodingSettingsProxy *this,uint param_1)

{
  *this = (ISoundfieldEncodingSettingsProxy)&___7ISoundfieldEncodingSettingsProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CreateDefaultSourceAmbisonicsDecoder @ 1464c8410

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_> __cdecl
CreateDefaultSourceAmbisonicsDecoder(FMixerDevice *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_> TVar4;
  ISoundfieldFactory *pIVar5;
  FAudioDevice *in_RDX;
  FName local_res10;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  if (in_RDX == (FAudioDevice *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("InDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SoundFieldRendering\\Private\\SoundFieldRendering.cpp"
                       ,0x33c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (ISoundfieldDecoderStream *)(*pcVar2)();
      return (TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_>)
             TVar4.Ptr;
    }
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&AmbisonicsSoundfieldFormatName,L"Unreal Ambisonics");
      _Init_thread_footer(&_TSS0);
    }
  }
  local_res10 = AmbisonicsSoundfieldFormatName;
  pIVar5 = ISoundfieldFactory::Get(&local_res10);
  if (pIVar5 == (ISoundfieldFactory *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_2c = (in_RDX->PlatformSettings).CallbackBufferFrameSize;
    local_34 = *(undefined4 *)&in_RDX[1].SubsystemCollection.field_0x40;
    local_38 = FAudioDevice::GetMaxSources(in_RDX);
    pcVar2 = *(code **)((longlong)*pIVar5 + 0x18);
    local_30 = (undefined4)(longlong)(float)in_RDX->SampleRate;
    if (*(int *)(lVar1 + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        DefaultSettings._padding_ = (longlong)&___7FAmbisonicsSoundfieldSettings__6B_;
        atexit(`GetAmbisonicsSourceDefaultSettings'::__l2::
               _dynamic_atexit_destructor_for__DefaultSettings__);
        _Init_thread_footer(&_TSS0);
      }
    }
    DefaultSettings.Order = 1;
    (*pcVar2)(pIVar5,param_1,&local_38,&DefaultSettings);
  }
  return (TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_>)
         (ISoundfieldDecoderStream *)param_1;
}

// GetAmbisonicsSourceDefaultSettings @ 1464caad0

ISoundfieldEncodingSettingsProxy * __cdecl GetAmbisonicsSourceDefaultSettings(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetAmbisonicsSourceDefaultSettings'::__l2::
             _dynamic_atexit_destructor_for__DefaultSettings__);
      _Init_thread_footer(&_TSS0);
    }
  }
  DefaultSettings.Order = 1;
  return (ISoundfieldEncodingSettingsProxy *)&DefaultSettings;
}

// GetUnrealAmbisonicsFormatName @ 1464caba0

FName __cdecl GetUnrealAmbisonicsFormatName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&AmbisonicsSoundfieldFormatName,L"Unreal Ambisonics");
      _Init_thread_footer(&_TSS0);
    }
  }
  *(FName *)in_RCX = AmbisonicsSoundfieldFormatName;
  return in_RCX;
}

// IMPLEMENT_MODULE_SoundFieldRendering @ 1464cb640

void __cdecl IMPLEMENT_MODULE_SoundFieldRendering(void)

{
  return;
}

// VirtualSpeakerLocationsHorzOnly'' @ 1503dc0c0

void __cdecl
`dynamic_atexit_destructor_for_'FSoundFieldDecoder::VirtualSpeakerLocationsHorzOnly__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FSoundFieldDecoder::VirtualSpeakerLocationsHorzOnly.AllocatorInstance.Data;
  if (FSoundFieldDecoder::VirtualSpeakerLocationsHorzOnly.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FSoundFieldDecoder::VirtualSpeakerLocationsHorzOnly.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultSettings'' @ 1503dc0e0

void __cdecl
`GetAmbisonicsSourceDefaultSettings'::__l2::_dynamic_atexit_destructor_for__DefaultSettings__(void)

{
  DefaultSettings._padding_ = (longlong)&___7ISoundfieldEncodingSettingsProxy__6B_;
  return;
}

