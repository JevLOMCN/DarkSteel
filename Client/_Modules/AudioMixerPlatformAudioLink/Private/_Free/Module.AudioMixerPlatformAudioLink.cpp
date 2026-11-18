// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerPlatformAudioLink
// Functions: 12

// `dynamic_initializer_for_'ModuleRegistrantAudioMixerPlatformAudioLink'' @ 141169f30

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioMixerPlatformAudioLink__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioMixerPlatformAudioLink";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioMixerPlatformAudioLink",0x1b);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAudioMixerPlatformAudioLinkModule>::InitializeModule
            );
  return;
}

// `scalar_deleting_destructor' @ 148d2b390

void * __thiscall
FAudioMixerPlatformAudioLinkModule::_scalar_deleting_destructor_
          (FAudioMixerPlatformAudioLinkModule *this,uint param_1)

{
  *this = (FAudioMixerPlatformAudioLinkModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148d2b5dc

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FAudioMixerPlatformAudioLink::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FAudioMixerPlatformAudioLink::_vector_deleting_destructor__adjustor_8__
          (FAudioMixerPlatformAudioLink *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAudioMixerPlatformAudioLink *)&this[-1].RenderEndHandle,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 148d2b5ec

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FAudioMixerPlatformAudioLink::`vector
   deleting destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FAudioMixerPlatformAudioLink::_vector_deleting_destructor__adjustor_16__
          (FAudioMixerPlatformAudioLink *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAudioMixerPlatformAudioLink *)&this[-1].RenderBeginHandle,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148d2b600

void * __thiscall
IBaseDelegateInstance<void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d2b630

void * __thiscall
IBaseDelegateInstance<void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d2b660

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d2b690

void * __thiscall
TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,Audio::FAudioMixerPlatformAudioLink,void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d2b6c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(IAudioLinkSynchronizer::FOnOpenStreamParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d2b6f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(IAudioLinkSynchronizer::FOnRenderParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d2b720

void * __thiscall
Audio::FAudioMixerPlatformAudioLink::_scalar_deleting_destructor_
          (FAudioMixerPlatformAudioLink *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeviceInfo).OutputChannelArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceInfo).DeviceId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SynchronizeLink).SharedReferenceCount.ReferenceController);
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// IMPLEMENT_MODULE_AudioMixerPlatformAudioLink @ 148d2cd70

void __cdecl IMPLEMENT_MODULE_AudioMixerPlatformAudioLink(void)

{
  return;
}

