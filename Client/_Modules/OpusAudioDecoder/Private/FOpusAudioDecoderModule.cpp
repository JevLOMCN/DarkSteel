// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpusAudioDecoder
// Functions: 3

// StartupModule @ 146bc9c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FOpusAudioDecoderModule::StartupModule(FOpusAudioDecoderModule *this)

{
  IAudioInfoFactory *pIVar1;
  IAudioInfoFactoryRegistry *pIVar2;
  undefined ***pppuVar3;
  IAudioInfoFactory *pIVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pIVar4 = (IAudioInfoFactory *)0x0;
  local_58 = 0;
  pIVar1 = ::operator_new(0x50);
  if (pIVar1 != (IAudioInfoFactory *)0x0) {
    local_20 = (undefined ***)0x0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6APEAVFOpusAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = `FOpusAudioDecoderModule::StartupModule'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<FOpusAudioInfo_*_(__cdecl*)(void),ICompressedAudioInfo_*>::Call;
    *pIVar1 = (IAudioInfoFactory)&___7FSimpleAudioInfoFactory__6B_;
    pIVar1[2] = (IAudioInfoFactory)
                UE::Core::Private::Function::
                TFunctionRefCaller<FOpusAudioInfo_*_(__cdecl*)(void),ICompressedAudioInfo_*>::Call;
    pIVar1[7] = (IAudioInfoFactory)0x0;
    (*(code *)
      ___7__TFunction_OwnedObject_P6APEAVFOpusAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_)
              (&local_38);
    *(FName *)(pIVar1 + 8) = Audio::NAME_OPUS;
    *(undefined2 *)(pIVar1 + 9) = 0x101;
    pIVar2 = IAudioInfoFactoryRegistry::Get();
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,pIVar1,pIVar1[8]);
    pIVar4 = pIVar1;
    if (local_48 != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  pIVar1 = (this->Factory).Ptr;
  (this->Factory).Ptr = pIVar4;
  if (pIVar1 != (IAudioInfoFactory *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  return;
}

// ShutdownModule @ 146bc9d70

void __thiscall FOpusAudioDecoderModule::ShutdownModule(FOpusAudioDecoderModule *this)

{
  return;
}

// <lambda_invoker_cdecl> @ 146bc9e60

FOpusAudioInfo * __cdecl
`FOpusAudioDecoderModule::StartupModule'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  FOpusAudioInfo *this;
  
  this = ::operator_new(0x138);
  if (this != (FOpusAudioInfo *)0x0) {
    IStreamedCompressedInfo::IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
    this->_padding_ = (longlong)&___7FOpusAudioInfo__6B_;
    this->OpusDecoderWrapper = (FOpusDecoderWrapper *)0x0;
    (this->Header).Version = '\0';
    (this->Header).NumChannels = '\0';
    (this->Header).SampleRate = 0;
    (this->Header).EncodedSampleRate = 0;
    (this->Header).ActiveSampleCount = 0;
    (this->Header).NumEncodedFrames = 0;
    (this->Header).NumPreSkipSamples = 0;
    (this->Header).NumSilentSamplesAtBeginning = 0;
    (this->Header).NumSilentSamplesAtEnd = 0;
    this->NumRemainingSamplesToSkip = 0;
    (this->PreviousDecodedUnusedSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PreviousDecodedUnusedSamples).ArrayNum = 0;
    (this->PreviousDecodedUnusedSamples).ArrayMax = 0;
    return this;
  }
  return (FOpusAudioInfo *)0x0;
}

