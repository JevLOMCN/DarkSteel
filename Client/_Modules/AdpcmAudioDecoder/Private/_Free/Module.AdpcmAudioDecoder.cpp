// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdpcmAudioDecoder
// Functions: 27

// `dynamic_initializer_for_'CVarADPCMDisableSeekForwardOnChunkMisses'' @ 1410a93e0

void __cdecl _dynamic_initializer_for__CVarADPCMDisableSeekForwardOnChunkMisses__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarADPCMDisableSeekForwardOnChunkMisses,L"au.adpcm.DisableSeekForwardOnReadMisses",
             &ADPCMDisableSeekForwardOnChunkMissesCVar,
             L"When there is a seek pending and this CVar is set to 0, we will scan forward in the file.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarADPCMDisableSeekForwardOnChunkMisses__);
  return;
}

// `dynamic_initializer_for_'CVarADPCMOnlySeekForwardOneChunk'' @ 1410a9430

void __cdecl _dynamic_initializer_for__CVarADPCMOnlySeekForwardOneChunk__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarADPCMOnlySeekForwardOneChunk,L"au.adpcm.OnlySeekForwardOneChunk",
             &ADPCMOnlySeekForwardOneChunkCVar,
             L"When set to 1, we will not continue to seek forward after failing to load two chunks in a row.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarADPCMOnlySeekForwardOneChunk__);
  return;
}

// `dynamic_initializer_for_'CVarADPCMReadFailiureTimeout'' @ 1410a9480

void __cdecl _dynamic_initializer_for__CVarADPCMReadFailiureTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarADPCMReadFailiureTimeout,L"au.adpcm.ADPCMReadFailiureTimeout",
             &ADPCMReadFailiureTimeoutCVar,
             L"Sets the number of ADPCM decode attempts we\'ll try before stopping the sound wave altogether.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarADPCMReadFailiureTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarChanceForIntentionalChunkMiss'' @ 1410a94d0

void __cdecl _dynamic_initializer_for__CVarChanceForIntentionalChunkMiss__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChanceForIntentionalChunkMiss,L"au.adpcm.ChanceForIntentionalChunkMiss",
             &ChanceForIntentionalChunkMissCVar,
             L"If this is set > 0 we will intentionally drop chunks. Used for debugging..\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarChanceForIntentionalChunkMiss__);
  return;
}

// `dynamic_initializer_for_'CVarDisableADPCMSeeking'' @ 1410a9520

void __cdecl _dynamic_initializer_for__CVarDisableADPCMSeeking__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableADPCMSeeking,L"au.adpcm.DisableSeeking",&bDisableADPCMSeekingCVar,
             L"Disables seeking with ADPCM.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableADPCMSeeking__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAdpcmAudioDecoder'' @ 1410a9570

void __cdecl _dynamic_initializer_for__ModuleRegistrantAdpcmAudioDecoder__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AdpcmAudioDecoder";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AdpcmAudioDecoder",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAdpcmAudioDecoderModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 1410a95c0

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 1410a95e0

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `scalar_deleting_destructor' @ 146bcad80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FADPCMAudioInfo_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FADPCMAudioInfo_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVFADPCMAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bcae00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FPcmAudioInfoHybrid_*_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FPcmAudioInfoHybrid_*_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFPcmAudioInfoHybrid__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bcb300

void * __thiscall
FPcmAudioInfoHybrid::_scalar_deleting_destructor_(FPcmAudioInfoHybrid *this,uint param_1)

{
  FHybridImpl *pFVar1;
  
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FHybridImpl *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  IStreamedCompressedInfo::~IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bcb530

void * __thiscall
FAdpcmAudioDecoderModule::_scalar_deleting_destructor_(FAdpcmAudioDecoderModule *this,uint param_1)

{
  IAudioInfoFactory *pIVar1;
  
  pIVar1 = (this->AdpcmFactory).Ptr;
  if (pIVar1 != (IAudioInfoFactory *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar1 = (this->PcmFactory).Ptr;
  if (pIVar1 != (IAudioInfoFactory *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bcb7d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// DestructItems<FWaveCue,int> @ 146bcb960

void __cdecl DestructItems<FWaveCue,int>(FWaveCue *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Label;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<short,TSizedDefaultAllocator<32>_>,int> @ 146bcb9a0

void __cdecl
DestructItems<TArray<short,TSizedDefaultAllocator<32>_>,int>
          (TArray<short,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// MakeStridedView<short> @ 146bcbc00

TStridedView<short,int> * __cdecl
MakeStridedView<short>
          (TStridedView<short,int> *__return_storage_ptr__,int param_1,short *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<short,int> *pTVar3;
  
  __return_storage_ptr__->FirstElementPtr = param_2;
  __return_storage_ptr__->BytesBetweenElements = param_1;
  __return_storage_ptr__->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<short,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<short,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 1) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<short,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 146bcbed0

void * __thiscall FADPCMAudioInfo::_scalar_deleting_destructor_(FADPCMAudioInfo *this,uint param_1)

{
  TPimplPtr<FSoundWaveTimecodeInfo,1> TVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FADPCMAudioInfo__6B_;
  if (this->UncompressedBlockData != (uchar *)0x0) {
    FMemory::Free(this->UncompressedBlockData);
    this->UncompressedBlockData = (uchar *)0x0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->StreamSeekCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CurCompressedChunkHandleCriticalSection);
  FAudioChunkHandle::~FAudioChunkHandle(&this->CurCompressedChunkHandle);
  TVar1 = (this->WaveInfo).TimecodeInfo;
  if (TVar1 != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
  }
  pFVar2 = (this->WaveInfo).WaveSampleLoops.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FWaveCue,int>
            ((FWaveCue *)(this->WaveInfo).WaveCues.AllocatorInstance.Data,
             (this->WaveInfo).WaveCues.ArrayNum);
  pFVar2 = (this->WaveInfo).WaveCues.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  ICompressedAudioInfo::~ICompressedAudioInfo((ICompressedAudioInfo *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bcbfb0

void * __thiscall
AdpcmAudioInfoPrivate::FAdpcmImpl::_scalar_deleting_destructor_(FAdpcmImpl *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<short,TSizedDefaultAllocator<32>_>,int>
            ((TArray<short,TSizedDefaultAllocator<32>_> *)(this->Reservoir).AllocatorInstance.Data,
             (this->Reservoir).ArrayNum);
  pFVar1 = (this->Reservoir).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bcc000

void * __thiscall
FPcmAudioInfoHybrid::FHybridImpl::_scalar_deleting_destructor_(FHybridImpl *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bcc030

void * __thiscall
AdpcmAudioInfoPrivate::FPcmImpl::_scalar_deleting_destructor_(FPcmImpl *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// IMPLEMENT_MODULE_AdpcmAudioDecoder @ 146bcfd30

void __cdecl IMPLEMENT_MODULE_AdpcmAudioDecoder(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarADPCMDisableSeekForwardOnChunkMisses'' @ 1503df390

void __cdecl _dynamic_atexit_destructor_for__CVarADPCMDisableSeekForwardOnChunkMisses__(void)

{
  CVarADPCMDisableSeekForwardOnChunkMisses._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarADPCMDisableSeekForwardOnChunkMisses);
  return;
}

// `dynamic_atexit_destructor_for_'CVarADPCMOnlySeekForwardOneChunk'' @ 1503df3b0

void __cdecl _dynamic_atexit_destructor_for__CVarADPCMOnlySeekForwardOneChunk__(void)

{
  CVarADPCMOnlySeekForwardOneChunk._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarADPCMOnlySeekForwardOneChunk);
  return;
}

// `dynamic_atexit_destructor_for_'CVarADPCMReadFailiureTimeout'' @ 1503df3d0

void __cdecl _dynamic_atexit_destructor_for__CVarADPCMReadFailiureTimeout__(void)

{
  CVarADPCMReadFailiureTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarADPCMReadFailiureTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChanceForIntentionalChunkMiss'' @ 1503df3f0

void __cdecl _dynamic_atexit_destructor_for__CVarChanceForIntentionalChunkMiss__(void)

{
  CVarChanceForIntentionalChunkMiss._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChanceForIntentionalChunkMiss);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableADPCMSeeking'' @ 1503df410

void __cdecl _dynamic_atexit_destructor_for__CVarDisableADPCMSeeking__(void)

{
  CVarDisableADPCMSeeking._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableADPCMSeeking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseLegacyDecoder'' @ 1503df430

void __cdecl
`FAdpcmAudioDecoderModule::StartupModule'::__l2::
_dynamic_atexit_destructor_for__CVarUseLegacyDecoder__(void)

{
  `public:_virtual_void___cdecl_FAdpcmAudioDecoderModule::StartupModule(void)___ptr64'::__l2::
  CVarUseLegacyDecoder._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &`public:_virtual_void___cdecl_FAdpcmAudioDecoderModule::StartupModule(void)___ptr64'::
              __l2::CVarUseLegacyDecoder);
  return;
}

