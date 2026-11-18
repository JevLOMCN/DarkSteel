// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 43

// `dynamic_initializer_for_'CVarDisplayAmplitude'' @ 14144bbc0

void __cdecl _dynamic_initializer_for__CVarDisplayAmplitude__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisplayAmplitude,L"voice.debug.PrintAmplitude",&DisplayAmplitudeCvar,
             L"when set to 1, the current incoming amplitude of the VOIP engine will be displayed on screen.\n0: disabled, 1: enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisplayAmplitude__);
  return;
}

// `dynamic_initializer_for_'LogVoice'' @ 14144bc10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVoice__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogVoice,L"LogVoice",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogVoice__);
  return;
}

// `dynamic_initializer_for_'LogVoiceCapture'' @ 14144bc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVoiceCapture__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogVoiceCapture,L"LogVoiceCapture",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogVoiceCapture__);
  return;
}

// `dynamic_initializer_for_'LogVoiceDecode'' @ 14144bc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVoiceDecode__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogVoiceDecode,L"LogVoiceDecode",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogVoiceDecode__);
  return;
}

// `dynamic_initializer_for_'LogVoiceEncode'' @ 14144bcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVoiceEncode__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogVoiceEncode,L"LogVoiceEncode",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogVoiceEncode__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantVoice'' @ 14144bd10

void __cdecl _dynamic_initializer_for__ModuleRegistrantVoice__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Voice";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Voice",5);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FVoiceModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Decode_CompressionRatio'' @ 14144bd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Decode_CompressionRatio__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Decode_CompressionRatio ==
      (FThreadSafeStaticStat<FStat_STAT_Decode_CompressionRatio>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Decode_CompressionRatio");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Decode_CompressionRatio,*pFVar1,
               L"Dec_CompRatio","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,NumBits,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Decode_NumChannels'' @ 14144bdf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Decode_NumChannels__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Decode_NumChannels == (FThreadSafeStaticStat<FStat_STAT_Decode_NumChannels>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_Decode_NumChannels");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Decode_NumChannels,*pFVar1,
               L"Dec_NumChannels","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Decode_OutSize'' @ 14144be80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Decode_OutSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Decode_OutSize == (FThreadSafeStaticStat<FStat_STAT_Decode_OutSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Decode_OutSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Decode_OutSize,*pFVar1,L"Dec_OutSize",
               "STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Decode_SampleRate'' @ 14144bf10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Decode_SampleRate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Decode_SampleRate == (FThreadSafeStaticStat<FStat_STAT_Decode_SampleRate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Decode_SampleRate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Decode_SampleRate,*pFVar1,
               L"Dec_SampleRate","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Encode_Bitrate'' @ 14144bfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Encode_Bitrate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Encode_Bitrate == (FThreadSafeStaticStat<FStat_STAT_Encode_Bitrate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Encode_Bitrate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Encode_Bitrate,*pFVar1,L"Enc_Bitrate",
               "STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Encode_CompressionRatio'' @ 14144c030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Encode_CompressionRatio__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Encode_CompressionRatio ==
      (FThreadSafeStaticStat<FStat_STAT_Encode_CompressionRatio>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Encode_CompressionRatio");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Encode_CompressionRatio,*pFVar1,
               L"Enc_CompRatio","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,NumBits,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Encode_NumChannels'' @ 14144c0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Encode_NumChannels__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Encode_NumChannels == (FThreadSafeStaticStat<FStat_STAT_Encode_NumChannels>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_Encode_NumChannels");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Encode_NumChannels,*pFVar1,
               L"Enc_NumChannels","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Encode_OutSize'' @ 14144c150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Encode_OutSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Encode_OutSize == (FThreadSafeStaticStat<FStat_STAT_Encode_OutSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Encode_OutSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Encode_OutSize,*pFVar1,L"Enc_OutSize",
               "STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Encode_SampleRate'' @ 14144c1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Encode_SampleRate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Encode_SampleRate == (FThreadSafeStaticStat<FStat_STAT_Encode_SampleRate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Encode_SampleRate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Encode_SampleRate,*pFVar1,
               L"Enc_SampleRate","STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Voice_Decoding'' @ 14144c270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Voice_Decoding__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Voice_Decoding == (FThreadSafeStaticStat<FStat_STAT_Voice_Decoding>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Voice_Decoding");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Voice_Decoding,*pFVar1,L"VoiceDecode",
               "STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Voice_Encoding'' @ 14144c300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Voice_Encoding__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Voice_Encoding == (FThreadSafeStaticStat<FStat_STAT_Voice_Encoding>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Voice_Encoding");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Voice_Encoding,*pFVar1,L"VoiceEncode",
               "STATGROUP_Voice","STATCAT_Advanced",L"Voice",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 14ec3a3d0

void * __thiscall FVoiceModule::_scalar_deleting_destructor_(FVoiceModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{136}' @ 14ec3ae58

/* [thunk]:public: virtual void * __ptr64 __cdecl FVoiceCaptureWindows::`vector deleting
   destructor'`adjustor{136}' (unsigned int) __ptr64 */

void * __thiscall
FVoiceCaptureWindows::_vector_deleting_destructor__adjustor_136__
          (FVoiceCaptureWindows *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FVoiceCaptureWindows *)&this[-1].LookaheadBuffer,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ec3ae70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IVoiceCapture,SharedPointerInternals::DefaultDeleter<IVoiceCapture>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<IVoiceCapture,SharedPointerInternals::DefaultDeleter<IVoiceCapture>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec3aeb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IVoiceDecoder,SharedPointerInternals::DefaultDeleter<IVoiceDecoder>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<IVoiceDecoder,SharedPointerInternals::DefaultDeleter<IVoiceDecoder>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec3aef0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IVoiceEncoder,SharedPointerInternals::DefaultDeleter<IVoiceEncoder>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<IVoiceEncoder,SharedPointerInternals::DefaultDeleter<IVoiceEncoder>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec3af30

void * __thiscall
FVoiceCaptureDeviceWindows::_scalar_deleting_destructor_
          (FVoiceCaptureDeviceWindows *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar10;
  ulonglong uVar9;
  
  iVar10 = (this->ActiveVoiceCaptures).ArrayNum;
  uVar7 = 0;
  uVar9 = uVar7;
  if (0 < iVar10) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar10) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar3)();
        return pvVar6;
      }
      (**(code **)(**(longlong **)((this->ActiveVoiceCaptures).AllocatorInstance.Data + uVar7) +
                  0x10))();
      iVar10 = (this->ActiveVoiceCaptures).ArrayNum;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)(uVar8 + 1);
    } while ((int)(uVar8 + 1) < iVar10);
  }
  piVar1 = &(this->ActiveVoiceCaptures).ArrayMax;
  (this->ActiveVoiceCaptures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (this->DirectSound != (IDirectSound8 *)0x0) {
    (**(code **)((longlong)*this->DirectSound + 0x10))();
    this->DirectSound = (IDirectSound8 *)0x0;
  }
  this->bInitialized = false;
  *(undefined4 *)&(this->Devices).field_0x48 = 0;
  pvVar6 = *(void **)&(this->Devices).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Devices);
  pFVar2 = (this->DefaultVoiceCaptureDevice).DeviceName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->HMDAudioInputDevice).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveVoiceCaptures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec3b090

void * __thiscall
FVoiceCaptureWindows::_scalar_deleting_destructor_(FVoiceCaptureWindows *this,uint param_1)

{
  ~FVoiceCaptureWindows(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec3b0d0

void * __thiscall
FVoiceDecoderOpus::_scalar_deleting_destructor_(FVoiceDecoderOpus *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FVoiceDecoderOpus__6B_;
  FMemory::Free(this->Decoder);
  this->Decoder = (OpusDecoder *)0x0;
  this->_padding_ = (longlong)&___7IVoiceDecoder__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec3b150

void * __thiscall
FVoiceEncoderOpus::_scalar_deleting_destructor_(FVoiceEncoderOpus *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FVoiceEncoderOpus__6B_;
  FMemory::Free(this->Encoder);
  this->Encoder = (OpusEncoder *)0x0;
  this->_padding_ = (longlong)&___7IVoiceEncoder__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec3b1d0

void * __thiscall IVoiceCapture::_scalar_deleting_destructor_(IVoiceCapture *this,uint param_1)

{
  ~IVoiceCapture(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec3b210

void * __thiscall IVoiceDecoder::_scalar_deleting_destructor_(IVoiceDecoder *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IVoiceDecoder__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec3b280

void * __thiscall IVoiceEncoder::_scalar_deleting_destructor_(IVoiceEncoder *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IVoiceEncoder__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// CaptureDeviceCallback @ 14ec3b3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl CaptureDeviceCallback(_GUID *param_1,char *param_2,char *param_3,void *param_4)

{
  FCaptureDeviceInfo *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  ForAnyElementType _Str2;
  TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_> *pTVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  bool bVar11;
  TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
  *this;
  undefined1 auStackY_f8 [32];
  FScriptContainerElement *local_b8;
  FSparseArrayAllocationInfo local_b0;
  FString local_a0;
  FString local_90;
  char *local_80;
  FCaptureDeviceInfo local_78;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar11 = false;
  local_b8 = (FScriptContainerElement *)((ulonglong)local_b8 & 0xffffffff00000000);
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_3;
  local_80 = param_2;
  if (3 < (byte)LogVoiceCapture._0_1_) {
    PrintMSGUID((FString *)&local_b0,param_1);
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoiceCapture);
    if ((void *)CONCAT44(local_b0._4_4_,local_b0.Index) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_b0._4_4_,local_b0.Index));
    }
  }
  if (param_1 == (_GUID *)0x0) {
    return 1;
  }
  FString::FString(&local_90,(wchar_t *)param_2);
  local_78.DeviceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.DeviceName.Data.ArrayNum = 0;
  local_78.DeviceName.Data.ArrayMax = 0;
  iVar6 = local_90.Data.ArrayNum + -1;
  if (local_90.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  FString::AssignRange(&local_78.DeviceName,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar6);
  FVar9.Data = local_78.DeviceName.Data.AllocatorInstance.Data;
  local_78.DeviceId.Data1 = param_1->Data1;
  local_78.DeviceId.Data2 = param_1->Data2;
  local_78.DeviceId.Data3 = param_1->Data3;
  local_78.DeviceId.Data4 = *&param_1->Data4;
  local_78.bIsDefault = *(int *)((longlong)param_4 + 0x60) == *(int *)((longlong)param_4 + 0x8c);
  if (local_78.bIsDefault) {
    pFVar1 = (FCaptureDeviceInfo *)((longlong)param_4 + 0x30);
    if (pFVar1 != &local_78) {
      iVar6 = local_78.DeviceName.Data.ArrayNum;
      lVar10 = (longlong)local_78.DeviceName.Data.ArrayNum;
      piVar2 = (int *)((longlong)param_4 + 0x3c);
      *(int *)((longlong)param_4 + 0x38) = local_78.DeviceName.Data.ArrayNum;
      if ((local_78.DeviceName.Data.ArrayNum == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_78.DeviceName.Data.ArrayNum,*piVar2,(ForAnyElementType *)pFVar1,
                   local_78.DeviceName.Data.ArrayNum,piVar2);
        if (iVar6 != 0) {
          memcpy((pFVar1->DeviceName).Data.AllocatorInstance.Data,FVar9.Data,lVar10 * 2);
        }
      }
    }
    *(bool *)((longlong)param_4 + 0x50) = local_78.bIsDefault;
    *(undefined8 *)((longlong)param_4 + 0x40) = local_78.DeviceId._0_8_;
    *(uchar (*) [8])((longlong)param_4 + 0x48) = local_78.DeviceId.Data4;
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)((longlong)param_4 + 0x58),&local_b0);
  if (local_b0.Pointer ==
      (TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_> *)0x0) {
    pTVar8 = (TSparseSetElement<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>_> *)
             0x0;
  }
  else {
    FString::FString(local_b0.Pointer,&local_90);
    puVar3 = (undefined1 *)((longlong)local_b0.Pointer + 0x10);
    *(undefined8 *)puVar3 = 0;
    lVar10 = (longlong)local_78.DeviceName.Data.ArrayNum;
    local_b8 = local_78.DeviceName.Data.AllocatorInstance.Data;
    *(int *)((longlong)local_b0.Pointer + 0x18) = local_78.DeviceName.Data.ArrayNum;
    if (local_78.DeviceName.Data.ArrayNum == 0) {
      *(undefined4 *)((longlong)local_b0.Pointer + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.DeviceName.Data.ArrayNum,0,(ForAnyElementType *)puVar3,
                 local_78.DeviceName.Data.ArrayNum,(int *)((longlong)local_b0.Pointer + 0x1c));
      memcpy(*(void **)puVar3,local_b8,lVar10 * 2);
    }
    *(undefined8 *)((longlong)local_b0.Pointer + 0x20) = local_78.DeviceId._0_8_;
    *(uchar (*) [8])((longlong)local_b0.Pointer + 0x28) = local_78.DeviceId.Data4;
    *(bool *)((longlong)local_b0.Pointer + 0x30) = local_78.bIsDefault;
    *(undefined4 *)((longlong)local_b0.Pointer + 0x38) = 0xffffffff;
    pTVar8 = local_b0.Pointer;
  }
  this = (TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
          *)((longlong)param_4 + 0x58);
  local_b8 = (FScriptContainerElement *)CONCAT44(local_b8._4_4_,local_b0.Index);
  iVar6 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)pTVar8;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar4 = TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar5,pTVar8,(int *)&local_b8,(bool *)0x0);
  if (!bVar4) {
    TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar5,pTVar8,(int)local_b8);
  }
  FVar9.Data = local_a0.Data.AllocatorInstance.Data;
  if (1 < *(int *)((longlong)param_4 + 0x28)) {
    FString::FString(&local_a0,(wchar_t *)local_a0.Data.AllocatorInstance.Data);
    FVar9.Data = local_a0.Data.AllocatorInstance.Data;
    _Str2.Data = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      _Str2.Data = local_a0.Data.AllocatorInstance.Data;
    }
    if (*(int *)((longlong)param_4 + 0x28) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)((longlong)param_4 + 0x20);
    }
    iVar6 = wcscmp(pwVar7,(wchar_t *)_Str2.Data);
    bVar11 = true;
    if (iVar6 == 0) {
      bVar4 = true;
      goto LAB_14ec3b69a;
    }
  }
  bVar4 = false;
LAB_14ec3b69a:
  if ((bVar11) && (FVar9.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FVar9.Data);
  }
  if (bVar4) {
    if (3 < (byte)LogVoice._0_1_) {
      PrintMSGUID((FString *)&local_b0,param_1);
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoice);
      if ((void *)CONCAT44(local_b0._4_4_,local_b0.Index) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_b0._4_4_,local_b0.Index));
      }
    }
    FVar9.Data = local_78.DeviceName.Data.AllocatorInstance.Data;
    pFVar1 = (FCaptureDeviceInfo *)((longlong)param_4 + 0x30);
    if (pFVar1 != &local_78) {
      iVar6 = local_78.DeviceName.Data.ArrayNum;
      lVar10 = (longlong)local_78.DeviceName.Data.ArrayNum;
      piVar2 = (int *)((longlong)param_4 + 0x3c);
      *(int *)((longlong)param_4 + 0x38) = local_78.DeviceName.Data.ArrayNum;
      if ((local_78.DeviceName.Data.ArrayNum == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_78.DeviceName.Data.ArrayNum,*piVar2,(ForAnyElementType *)pFVar1,
                   local_78.DeviceName.Data.ArrayNum,piVar2);
        if (iVar6 != 0) {
          memcpy((pFVar1->DeviceName).Data.AllocatorInstance.Data,FVar9.Data,lVar10 * 2);
        }
      }
    }
    *(bool *)((longlong)param_4 + 0x50) = local_78.bIsDefault;
    *(undefined8 *)((longlong)param_4 + 0x40) = local_78.DeviceId._0_8_;
    *(uchar (*) [8])((longlong)param_4 + 0x48) = local_78.DeviceId.Data4;
    TMapBase<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>_>
    ::Emplace<FString_const_&,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo_const_&>
              ((TMapBase<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>_>
                *)this,&local_90,pFVar1);
  }
  if (local_78.DeviceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.DeviceName.Data.AllocatorInstance.Data);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return 1;
}

// CreateVoiceCaptureObject @ 14ec3c2f0

IVoiceCapture * __cdecl CreateVoiceCaptureObject(FString *param_1,int param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FVoiceCaptureDeviceWindows *pFVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  FVoiceCaptureWindows *this;
  FVoiceCaptureWindows *pFVar8;
  IVoiceCapture *pIVar9;
  FVoiceCaptureWindows *local_18 [2];
  
  pFVar4 = FVoiceCaptureDeviceWindows::Singleton;
  if ((FVoiceCaptureDeviceWindows::Singleton != (FVoiceCaptureDeviceWindows *)0x0) &&
     (pFVar8 = (FVoiceCaptureWindows *)0x0,
     FVoiceCaptureDeviceWindows::Singleton->bInitialized != false)) {
    this = operator_new(0x198);
    if (this != (FVoiceCaptureWindows *)0x0) {
      pFVar8 = FVoiceCaptureWindows::FVoiceCaptureWindows(this);
    }
    cVar5 = (**(code **)(pFVar8->_padding_ + 8))(pFVar8,param_1,param_2,param_3);
    if (cVar5 != '\0') {
      pFVar2 = (pFVar4->ActiveVoiceCaptures).AllocatorInstance.Data;
      local_18[0] = pFVar8;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(pFVar4->ActiveVoiceCaptures).ArrayMax * 8)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pIVar9 = (IVoiceCapture *)(*pcVar3)();
        return pIVar9;
      }
      iVar7 = (pFVar4->ActiveVoiceCaptures).ArrayNum;
      piVar1 = &(pFVar4->ActiveVoiceCaptures).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pFVar4,piVar1);
      }
      (pFVar4->ActiveVoiceCaptures).ArrayNum = iVar7 + 1;
      *(FVoiceCaptureWindows **)
       ((pFVar4->ActiveVoiceCaptures).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_18[0];
      return (IVoiceCapture *)pFVar8;
    }
  }
  return (IVoiceCapture *)0x0;
}

// DebugDecoderInfo @ 14ec3c730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DebugDecoderInfo(OpusDecoder *param_1)

{
  int iVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 0;
  iVar1 = opus_decoder_ctl(param_1,0xfcd,local_res10);
  if ((iVar1 != 0) && (2 < (byte)LogVoiceDecode._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
  }
  local_res18[0] = 0;
  iVar1 = opus_decoder_ctl(param_1,0xfc1,local_res18);
  if ((iVar1 != 0) && (2 < (byte)LogVoiceDecode._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
  }
  if (3 < (byte)LogVoiceDecode._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
    if (3 < (byte)LogVoiceDecode._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
      if (3 < (byte)LogVoiceDecode._0_1_) {
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
      }
    }
  }
  return;
}

// DebugEncoderInfo @ 14ec3c830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DebugEncoderInfo(OpusEncoder *param_1)

{
  int iVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  local_res20[0] = 0;
  iVar1 = opus_encoder_ctl(param_1,0xfa3,local_res20);
  if ((iVar1 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
  }
  local_14 = 0;
  iVar1 = opus_encoder_ctl(param_1,0xfa7,&local_14);
  if ((iVar1 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
  }
  local_18 = 0;
  iVar1 = opus_encoder_ctl(param_1,0xfbd,&local_18);
  if ((iVar1 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
  }
  local_res10[0] = 0;
  iVar1 = opus_encoder_ctl(param_1,0xfa1,local_res10);
  if ((iVar1 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
  }
  local_res18[0] = 0;
  iVar1 = opus_encoder_ctl(param_1,0xfb9,local_res18);
  if ((iVar1 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
  }
  local_10[0] = 0;
  iVar1 = opus_encoder_ctl(param_1,0xfab,local_10);
  if ((iVar1 != 0) && (2 < (byte)LogVoiceEncode._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
  }
  if (3 < (byte)LogVoiceEncode._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Opus_Encoder_De_15304d5d8,
               (FLogCategoryBase *)&LogVoiceEncode);
    if (3 < (byte)LogVoiceEncode._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
      if (3 < (byte)LogVoiceEncode._0_1_) {
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
        if (3 < (byte)LogVoiceEncode._0_1_) {
          UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
          if (3 < (byte)LogVoiceEncode._0_1_) {
            UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
            if (3 < (byte)LogVoiceEncode._0_1_) {
              UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
              if (3 < (byte)LogVoiceEncode._0_1_) {
                UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVoiceEncode);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// DebugFrameInfoInternal @ 14ec3cab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DebugFrameInfoInternal(uchar *param_1,uint param_2,uint param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  FStaticBasicLogRecord *pFVar3;
  FLogCategoryLogVoiceEncode *pFVar4;
  wchar_t *pwVar5;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  wchar_t *local_250;
  uint local_248;
  uint local_240;
  uint local_238;
  byte local_228 [4];
  undefined4 local_224 [3];
  undefined1 local_218 [384];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  iVar1 = opus_packet_get_nb_frames();
  if (((iVar1 == -1) || (iVar1 == -4)) && (2 < (byte)LogVoice._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoice);
  }
  iVar1 = opus_packet_get_nb_samples(param_1,param_2,param_3);
  if (((iVar1 == -1) || (iVar1 == -4)) && (2 < (byte)LogVoice._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoice);
  }
  opus_packet_get_samples_per_frame(param_1,param_3);
  iVar2 = opus_packet_get_bandwidth(param_1);
  if (iVar2 < 0x450) {
    if (iVar2 == 0x44f) {
      pwVar5 = L"WB";
      goto LAB_14ec3cbb5;
    }
    if (iVar2 != -4) {
      if (iVar2 == 0x44d) {
        pwVar5 = L"NB";
        goto LAB_14ec3cbb5;
      }
      if (iVar2 == 0x44e) {
        pwVar5 = L"MB";
        goto LAB_14ec3cbb5;
      }
    }
  }
  else {
    if (iVar2 == 0x450) {
      pwVar5 = L"SWB";
      goto LAB_14ec3cbb5;
    }
    if (iVar2 == 0x451) {
      pwVar5 = L"FB";
      goto LAB_14ec3cbb5;
    }
  }
  pwVar5 = L"Invalid";
LAB_14ec3cbb5:
  local_250 = (wchar_t *)local_224;
  local_228[0] = 0;
  local_258 = local_98;
  local_224[0] = 0;
  opus_packet_parse(param_1,param_2,local_228,local_218);
  local_238 = local_228[0] & 3;
  local_248 = (uint)(local_228[0] >> 3);
  if (param_4) {
    if ((byte)LogVoiceEncode._0_1_ < 6) {
      return;
    }
    pFVar3 = &LOG_Static;
    pFVar4 = &LogVoiceEncode;
  }
  else {
    if ((byte)LogVoiceDecode._0_1_ < 6) {
      return;
    }
    pFVar3 = &LOG_Static;
    pFVar4 = (FLogCategoryLogVoiceEncode *)&LogVoiceDecode;
  }
  local_240 = (uint)(local_228[0] >> 2 & 1);
  local_258 = (undefined1 *)CONCAT44(local_258._4_4_,iVar1);
  local_250 = pwVar5;
  UE::Logging::Private::BasicLog<6>(pFVar3,(FLogCategoryBase *)pFVar4);
  return;
}

// InitVoiceCapture @ 14ec3fd40

bool __cdecl InitVoiceCapture(void)

{
  FVoiceCaptureDeviceWindows *pFVar1;
  
  pFVar1 = FVoiceCaptureDeviceWindows::Create();
  return pFVar1 != (FVoiceCaptureDeviceWindows *)0x0;
}

// PrintMSGUID @ 14ec3fe10

FString * __cdecl PrintMSGUID(FString *__return_storage_ptr__,_GUID *param_1)

{
  FScriptContainerElement *pFVar1;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 != (_GUID *)0x0) {
    FString::PrintfImpl(&local_28,
                        L"{%08lX-%04hX-%04hX-%02hhX%02hhX-%02hhX%02hhX%02hhX%02hhX%02hhX%02hhX}");
    if (__return_storage_ptr__ != &local_28) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// ShutdownVoiceCapture @ 14ec41c80

void __cdecl ShutdownVoiceCapture(void)

{
  if (FVoiceCaptureDeviceWindows::Singleton != (FVoiceCaptureDeviceWindows *)0x0) {
    FVoiceCaptureDeviceWindows::_scalar_deleting_destructor_
              (FVoiceCaptureDeviceWindows::Singleton,1);
    FVoiceCaptureDeviceWindows::Singleton = (FVoiceCaptureDeviceWindows *)0x0;
  }
  return;
}

// IMPLEMENT_MODULE_Voice @ 14ec425e0

void __cdecl IMPLEMENT_MODULE_Voice(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisplayAmplitude'' @ 150470200

void __cdecl _dynamic_atexit_destructor_for__CVarDisplayAmplitude__(void)

{
  CVarDisplayAmplitude._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisplayAmplitude);
  return;
}

// `dynamic_atexit_destructor_for_'LogVoice'' @ 150470220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVoice__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVoice);
  return;
}

// `dynamic_atexit_destructor_for_'LogVoiceCapture'' @ 150470240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVoiceCapture__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVoiceCapture);
  return;
}

// `dynamic_atexit_destructor_for_'LogVoiceDecode'' @ 150470260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVoiceDecode__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVoiceDecode);
  return;
}

// `dynamic_atexit_destructor_for_'LogVoiceEncode'' @ 150470280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVoiceEncode__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVoiceEncode);
  return;
}

