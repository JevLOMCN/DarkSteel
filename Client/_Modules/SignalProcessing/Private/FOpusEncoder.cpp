// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 10

// FOpusEncoder @ 1444f1310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOpusEncoder * __thiscall
FOpusEncoder::FOpusEncoder
          (FOpusEncoder *this,FSoundQualityInfo *param_1,int param_2,EOpusFrameSizes param_3,
          EOpusMode param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FOpusEncoder *pFVar9;
  FOpusEncoderPrivateState *pFVar10;
  FOggEncapsulator *pFVar11;
  FOggEncapsulator *pFVar12;
  float fVar13;
  undefined1 local_res20 [8];
  
  Audio::IAudioEncoder::IAudioEncoder((IAudioEncoder *)this,param_2 * 4,0x10000);
  pFVar12 = (FOggEncapsulator *)0x0;
  this->_padding_ = (longlong)&___7FOpusEncoder__6B_;
  iVar7 = 0;
  this->LastValidFrameSize = 0;
  uVar3 = param_1->NumChannels;
  this->NumChannels = uVar3;
  uVar8 = param_1->SampleRate;
  this->SampleRate = uVar8;
  switch(param_3) {
  case Min:
    fVar13 = (float)(int)uVar8 * ___real_3b23d70a;
    break;
  case Small:
    fVar13 = (float)(int)uVar8 * __real_3ba3d70a;
    break;
  case MediumLow:
    fVar13 = (float)(int)uVar8 * __real_3c23d70a;
    break;
  case MediumHigh:
    fVar13 = (float)(int)uVar8 * __real_3ca3d70a;
    break;
  case High:
    fVar13 = (float)(int)uVar8 * __real_3d23d70a;
    break;
  case Max:
    fVar13 = (float)(int)uVar8 * __real_3d75c28f;
    break;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OpusEncoder.cpp"
                       ,0x125,L"Invalid frame size!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FOpusEncoder *)(*pcVar5)();
      return pFVar9;
    }
    goto LAB_1444f1413;
  }
  iVar7 = (int)(fVar13 * (float)(int)uVar3);
LAB_1444f1413:
  this->UncompressedFrameSize = iVar7;
  this->PrivateOpusState = (FOpusEncoderPrivateState *)0x0;
  this->PrivateOggEncapsulator = (FOggEncapsulator *)0x0;
  pFVar10 = ::operator_new(0x18);
  if (pFVar10 == (FOpusEncoderPrivateState *)0x0) {
    pFVar10 = (FOpusEncoderPrivateState *)0x0;
  }
  else {
    piVar1 = &(pFVar10->EncoderMemory).ArrayNum;
    piVar2 = &(pFVar10->EncoderMemory).ArrayMax;
    *piVar2 = 0;
    (pFVar10->EncoderMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *piVar1 = 0;
    iVar7 = opus_encoder_get_size(param_1->NumChannels);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar7,&(pFVar10->EncoderMemory).AllocatorInstance,piVar1,piVar2);
    pFVar4 = (pFVar10->EncoderMemory).AllocatorInstance.Data;
    pFVar10->Encoder = (OpusEncoder *)pFVar4;
    iVar7 = opus_encoder_init(pFVar4,param_1->SampleRate,param_1->NumChannels,
                              (param_4 != VoiceStream) + 0x800);
    if (iVar7 == 0) {
      opus_encoder_ctl(pFVar10->Encoder,0xfa6,1);
      opus_encoder_ctl(pFVar10->Encoder,0xfb4,0);
      uVar3 = param_1->Quality / 10;
      uVar8 = 10;
      if ((int)uVar3 < 10) {
        uVar8 = uVar3;
      }
      pFVar11 = pFVar12;
      if (0 < (int)uVar8) {
        pFVar11 = (FOggEncapsulator *)(ulonglong)uVar8;
      }
      opus_encoder_ctl(pFVar10->Encoder,0xfaa,pFVar11);
      opus_encoder_ctl(pFVar10->Encoder,0xfac,0);
    }
    else {
      `FOpusEncoderPrivateState::FOpusEncoderPrivateState'::__l7::<lambda_1>::operator()
                (local_res20);
      pFVar10->Encoder = (OpusEncoder *)0x0;
      *piVar1 = 0;
      if (*piVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(pFVar10->EncoderMemory).AllocatorInstance,0,piVar2);
      }
    }
  }
  this->PrivateOpusState = pFVar10;
  if (param_4 == File) {
    pFVar11 = ::operator_new(0x1c0);
    if (pFVar11 != (FOggEncapsulator *)0x0) {
      ogg_stream_init(pFVar11,0);
      pFVar12 = pFVar11;
    }
    this->PrivateOggEncapsulator = pFVar12;
  }
  Audio::IAudioEncoder::Init((IAudioEncoder *)this,param_1);
  return this;
}

// ~FOpusEncoder @ 1444f40f0

void __thiscall FOpusEncoder::~FOpusEncoder(FOpusEncoder *this)

{
  FOpusEncoderPrivateState *pFVar1;
  FScriptContainerElement *pFVar2;
  FOggEncapsulator *pFVar3;
  
  pFVar1 = this->PrivateOpusState;
  this->_padding_ = (longlong)&___7FOpusEncoder__6B_;
  if (pFVar1 != (FOpusEncoderPrivateState *)0x0) {
    pFVar2 = (pFVar1->EncoderMemory).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x18);
    this->PrivateOpusState = (FOpusEncoderPrivateState *)0x0;
  }
  pFVar3 = this->PrivateOggEncapsulator;
  if (pFVar3 != (FOggEncapsulator *)0x0) {
    ogg_stream_clear(pFVar3);
    ::operator_delete(pFVar3,0x1c0);
    this->PrivateOggEncapsulator = (FOggEncapsulator *)0x0;
  }
  this->_padding_ = (longlong)&___7IAudioEncoder_Audio__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// EncodeChunk @ 1444fa700

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FOpusEncoder::EncodeChunk
          (FOpusEncoder *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  FOggEncapsulator *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  undefined8 local_res18 [2];
  uint *local_48;
  undefined8 *local_40;
  
  if ((this->UncompressedFrameSize != param_1->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UncompressedFrameSize == InAudio.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OpusEncoder.cpp"
                         ,0x16c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  piVar1 = &param_2->ArrayMax;
  piVar2 = &param_2->ArrayNum;
  uVar4 = (longlong)param_1->ArrayNum / (longlong)this->NumChannels;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_1->ArrayNum << 2,&param_2->AllocatorInstance,piVar2,piVar1);
  local_res10[0] =
       opus_encode_float(this->PrivateOpusState->Encoder,(param_1->AllocatorInstance).Data,
                         uVar4 & 0xffffffff,(param_2->AllocatorInstance).Data,*piVar2);
  if ((int)local_res10[0] < 0) {
    local_res18[0] = opus_strerror(local_res10[0]);
    local_48 = local_res10;
    local_40 = local_res18;
    `FOpusEncoder::EncodeChunk'::__l12::<lambda_1>::operator()(&local_48);
    *piVar2 = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
    return false;
  }
  if (this->PrivateOggEncapsulator == (FOggEncapsulator *)0x0) {
    if ((*piVar2 <= (int)local_res10[0]) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompressedSize < OutBytes.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OpusEncoder.cpp"
                           ,0x185,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((local_res10[0] == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompressedSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OpusEncoder.cpp"
                           ,0x186,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,local_res10[0],No);
    this->LastValidFrameSize = local_res10[0];
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,local_res10[0],No);
    pFVar3 = this->PrivateOggEncapsulator;
    this->LastValidFrameSize = local_res10[0];
    (pFVar3->CurrentPacket).packet = (uchar *)(param_2->AllocatorInstance).Data;
    (pFVar3->CurrentPacket).bytes = *piVar2;
    (pFVar3->CurrentPacket).b_o_s = 0;
    (pFVar3->CurrentPacket).e_o_s = 0;
    (pFVar3->CurrentPacket).granulepos = (ulonglong)this->GranulePos;
    (pFVar3->CurrentPacket).packetno = (ulonglong)this->PacketIndex;
    iVar8 = ogg_stream_packetin(this->PrivateOggEncapsulator);
    if (iVar8 != 0) {
      `FOggEncapsulator::PushPacket'::__l2::<lambda_1>::operator()(local_res8);
    }
    *piVar2 = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
    FOggEncapsulator::PopPages(this->PrivateOggEncapsulator,param_2);
    this->GranulePos = this->GranulePos + (int)uVar4;
    this->PacketIndex = this->PacketIndex + 1;
  }
  return true;
}

// EndFile @ 1444fab80

bool __thiscall
FOpusEncoder::EndFile(FOpusEncoder *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FOggEncapsulator *pFVar1;
  
  pFVar1 = this->PrivateOggEncapsulator;
  if (pFVar1 != (FOggEncapsulator *)0x0) {
    (pFVar1->CurrentPacket).e_o_s = 1;
    (pFVar1->CurrentPacket).packet = (uchar *)0x0;
    (pFVar1->CurrentPacket).bytes = 0;
    (pFVar1->CurrentPacket).b_o_s = 0;
    (pFVar1->CurrentPacket).granulepos = (ulonglong)this->GranulePos;
    (pFVar1->CurrentPacket).packetno = (ulonglong)this->PacketIndex;
    FOggEncapsulator::PopPages(this->PrivateOggEncapsulator,param_1);
    pFVar1 = this->PrivateOggEncapsulator;
    if (pFVar1 != (FOggEncapsulator *)0x0) {
      ogg_stream_clear(pFVar1);
      ::operator_delete(pFVar1,0x1c0);
    }
    this->PrivateOggEncapsulator = (FOggEncapsulator *)0x0;
  }
  return true;
}

// GetCompressedPacketSize @ 1445037e0

int __thiscall FOpusEncoder::GetCompressedPacketSize(FOpusEncoder *this)

{
  return this->LastValidFrameSize;
}

// GetNumSamplesForEncode @ 1445045c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FOpusEncoder::GetNumSamplesForEncode(FOpusEncoder *this,EOpusFrameSizes param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  
  switch(param_1) {
  case Min:
    fVar4 = (float)this->SampleRate * ___real_3b23d70a;
    break;
  case Small:
    fVar4 = (float)this->SampleRate * __real_3ba3d70a;
    break;
  case MediumLow:
    fVar4 = (float)this->SampleRate * __real_3c23d70a;
    break;
  case MediumHigh:
    fVar4 = (float)this->SampleRate * __real_3ca3d70a;
    break;
  case High:
    fVar4 = (float)this->SampleRate * __real_3d23d70a;
    break;
  case Max:
    fVar4 = (float)this->SampleRate * __real_3d75c28f;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OpusEncoder.cpp"
                       ,0x125,L"Invalid frame size!");
    if (!bVar2) {
      return 0;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return (int)(fVar4 * (float)this->NumChannels);
}

// GetNumSamplesForPreskip @ 1445046b0

int __thiscall FOpusEncoder::GetNumSamplesForPreskip(FOpusEncoder *this)

{
  return ((int)ROUND((float)this->SampleRate * __real_3e23d70a - __real_3f000000) >> 1) *
         this->NumChannels;
}

// SamplesRequiredPerEncode @ 144518a80

long64 __thiscall FOpusEncoder::SamplesRequiredPerEncode(FOpusEncoder *this)

{
  return (longlong)this->UncompressedFrameSize;
}

// StartFile @ 14451de80

bool __thiscall
FOpusEncoder::StartFile
          (FOpusEncoder *this,FSoundQualityInfo *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ForAnyElementType local_98;
  int local_90 [2];
  ForAnyElementType local_88;
  uint local_80 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_78;
  FScriptContainerElement *local_68;
  int local_60;
  undefined8 local_5c;
  undefined8 local_50;
  ulonglong local_48;
  FScriptContainerElement *local_40;
  int local_38;
  undefined8 local_34;
  undefined8 local_28;
  ulonglong local_20;
  
  if (this->PrivateOggEncapsulator != (FOggEncapsulator *)0x0) {
    GenerateHeaderPacket(&local_78,param_1->NumChannels,param_1->SampleRate);
    local_68 = local_78.AllocatorInstance.Data;
    local_60 = local_78.ArrayNum;
    local_48 = (ulonglong)this->PacketIndex;
    this->PacketIndex = this->PacketIndex + 1;
    local_5c = 1;
    local_50 = 0;
    iVar1 = ogg_stream_packetin(this->PrivateOggEncapsulator,&local_68);
    if (iVar1 != 0) {
      `FOggEncapsulator::PushPacket'::__l2::<lambda_1>::operator()(local_a8);
    }
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90[0] = 0;
    local_90[1] = 0;
    local_a0 = 0x7375704f;
    uStack_9c = 0x73676154;
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,8,&local_98,local_90,local_90 + 1);
    *(ulonglong *)(local_98.Data + iVar1) = CONCAT44(uStack_9c,local_a0);
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,1,&local_98,local_90,local_90 + 1);
    local_98.Data[iVar1] = (FScriptContainerElement)0x0;
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,1,&local_98,local_90,local_90 + 1);
    local_98.Data[iVar1] = (FScriptContainerElement)0x0;
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    local_78.ArrayMax = local_90[1];
    local_20 = (ulonglong)this->PacketIndex;
    local_78.AllocatorInstance.Data = local_98.Data;
    local_78.ArrayNum = local_90[0];
    local_40 = local_98.Data;
    local_38 = local_90[0];
    this->PacketIndex = this->PacketIndex + 1;
    local_34 = 0;
    local_28 = 0;
    iVar1 = ogg_stream_packetin(this->PrivateOggEncapsulator,&local_40);
    if (iVar1 != 0) {
      `FOggEncapsulator::PushPacket'::__l2::<lambda_1>::operator()(local_a8);
    }
    FOggEncapsulator::FlushPages(this->PrivateOggEncapsulator,param_2);
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80[0] = 0;
    local_80[1] = 0;
    iVar3 = ((int)ROUND((float)this->SampleRate * __real_3e23d70a - __real_3f000000) >> 1) *
            this->NumChannels;
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar3,&local_88,(int *)local_80,(int *)(local_80 + 1));
    memset(local_88.Data + (longlong)iVar1 * 4,0,(longlong)iVar3 << 2);
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    iVar3 = (int)this->_padding_;
    uVar2 = iVar3 - iVar1;
    if (iVar3 < iVar1) {
      uVar2 = uVar2 + (int)this->_padding_;
    }
    if (~uVar2 + (int)this->_padding_ < local_80[0]) {
      `Audio::IAudioEncoder::PushAudio'::__l5::<lambda_1>::operator()(local_a8);
    }
    else {
      Audio::TCircularAudioBuffer<float,16>::Push
                ((TCircularAudioBuffer<float,16> *)&this->_padding_,(float *)local_88.Data,
                 local_80[0]);
      Audio::IAudioEncoder::EncodeIfPossible((IAudioEncoder *)this);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return true;
}

// operator() @ 1504bfac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall `FOpusEncoder::EncodeChunk'::__l12::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6309266383267954307>);
  if (bVar2) {
    _Str = (char *)**(undefined8 **)((longlong)this + 8);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6309266383267954307>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bfb77;
    }
  }
  bVar2 = false;
LAB_1504bfb77:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

