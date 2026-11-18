// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VorbisAudioDecoder
// Functions: 3

// StartupModule @ 146bc7760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FVorbisAudioDecoderModule::StartupModule(FVorbisAudioDecoderModule *this)

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
  LoadVorbisLibraries();
  pIVar1 = ::operator_new(0x50);
  if (pIVar1 != (IAudioInfoFactory *)0x0) {
    local_20 = (undefined ***)0x0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6APEAVFVorbisAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = `FVorbisAudioDecoderModule::StartupModule'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<FVorbisAudioInfo_*_(__cdecl*)(void),ICompressedAudioInfo_*>::Call;
    *pIVar1 = (IAudioInfoFactory)&___7FSimpleAudioInfoFactory__6B_;
    pIVar1[2] = (IAudioInfoFactory)
                UE::Core::Private::Function::
                TFunctionRefCaller<FVorbisAudioInfo_*_(__cdecl*)(void),ICompressedAudioInfo_*>::Call
    ;
    pIVar1[7] = (IAudioInfoFactory)0x0;
    (*(code *)
      ___7__TFunction_OwnedObject_P6APEAVFVorbisAudioInfo__XZ_0A__0A__Function_Private_Core_UE__6B_)
              (&local_38);
    *(FName *)(pIVar1 + 8) = Audio::NAME_OGG;
    *(undefined2 *)(pIVar1 + 9) = 1;
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

// ShutdownModule @ 146bc7890

void __thiscall FVorbisAudioDecoderModule::ShutdownModule(FVorbisAudioDecoderModule *this)

{
  return;
}

// <lambda_invoker_cdecl> @ 146bc7980

FVorbisAudioInfo * __cdecl
`FVorbisAudioDecoderModule::StartupModule'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  code *pcVar1;
  bool bVar2;
  FVorbisAudioInfo *pFVar3;
  FVorbisFileWrapper *_Dst;
  FVorbisFileWrapper *pFVar4;
  
  pFVar3 = ::operator_new(0xb0);
  if (pFVar3 == (FVorbisAudioInfo *)0x0) {
    return (FVorbisAudioInfo *)0x0;
  }
  ICompressedAudioInfo::ICompressedAudioInfo((ICompressedAudioInfo *)pFVar3);
  pFVar3->_padding_ = (longlong)&___7FVorbisAudioInfo__6B_;
  _Dst = ::operator_new(0x348);
  pFVar4 = (FVorbisFileWrapper *)0x0;
  if (_Dst != (FVorbisFileWrapper *)0x0) {
    memset(_Dst,0,0x348);
    pFVar4 = _Dst;
  }
  pFVar3->VFWrapper = pFVar4;
  pFVar3->SrcBufferData = (uchar *)0x0;
  pFVar3->SrcBufferDataSize = 0;
  pFVar3->BufferOffset = 0;
  pFVar3->CurrentBufferChunkOffset = 0;
  pFVar3->TimesLoopedWithoutDecompressedAudio = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar3->VorbisCriticalSection,4000);
  pFVar3->CurrentStreamingChunkData = (uchar *)0x0;
  pFVar3->CurrentStreamingChunkIndex = -1;
  pFVar3->NextStreamingChunkIndex = 0;
  pFVar3->CurrentStreamingChunksSize = 0;
  pFVar3->bHeaderParsed = false;
  pFVar3->bHasError = false;
  pFVar3->LastErrorCode = 0;
  FAudioChunkHandle::FAudioChunkHandle(&pFVar3->CurCompressedChunkHandle);
  if ((pFVar3->VFWrapper == (FVorbisFileWrapper *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("VFWrapper != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VorbisAudioDecoder\\Module\\Private\\VorbisAudioInfo.cpp"
                         ,0x6a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FVorbisAudioInfo *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

