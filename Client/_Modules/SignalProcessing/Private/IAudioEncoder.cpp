// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 11

// IAudioEncoder @ 1444f3080

IAudioEncoder * __thiscall
Audio::IAudioEncoder::IAudioEncoder(IAudioEncoder *this,uint param_1,uint param_2)

{
  this->_padding_ = (longlong)&___7IAudioEncoder_Audio__6B_;
  (this->CurrentAudioBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentAudioBuffer).ArrayNum = 0;
  (this->CurrentAudioBuffer).ArrayMax = 0;
  (this->CurrentCompressedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentCompressedBuffer).ArrayNum = 0;
  (this->CurrentCompressedBuffer).ArrayMax = 0;
  (this->UncompressedAudioBuffer).InternalBuffer.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UncompressedAudioBuffer).InternalBuffer.ArrayNum = 0;
  (this->UncompressedAudioBuffer).InternalBuffer.ArrayMax = 0;
  (this->UncompressedAudioBuffer).ReadCounter.Counter = 0;
  (this->UncompressedAudioBuffer).WriteCounter.Counter = 0;
  TCircularAudioBuffer<float,16>::SetCapacity(&this->UncompressedAudioBuffer,param_1);
  (this->CompressedDataBuffer).InternalBuffer.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompressedDataBuffer).InternalBuffer.ArrayNum = 0;
  (this->CompressedDataBuffer).InternalBuffer.ArrayMax = 0;
  (this->CompressedDataBuffer).ReadCounter.Counter = 0;
  (this->CompressedDataBuffer).WriteCounter.Counter = 0;
  TCircularAudioBuffer<unsigned_char,16>::SetCapacity(&this->CompressedDataBuffer,param_2);
  return this;
}

// ~IAudioEncoder @ 1444f4950

void __thiscall Audio::IAudioEncoder::~IAudioEncoder(IAudioEncoder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7IAudioEncoder_Audio__6B_;
  pFVar1 = (this->CompressedDataBuffer).InternalBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UncompressedAudioBuffer).InternalBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentCompressedBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentAudioBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// EncodeIfPossible @ 1444fa980

bool __thiscall Audio::IAudioEncoder::EncodeIfPossible(IAudioEncoder *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  iVar5 = (this->UncompressedAudioBuffer).ReadCounter.Counter;
  iVar3 = (this->UncompressedAudioBuffer).WriteCounter.Counter;
  uVar7 = iVar3 - iVar5;
  if (iVar3 < iVar5) {
    uVar7 = uVar7 + (this->UncompressedAudioBuffer).Capacity;
  }
  lVar6 = (**(code **)(this->_padding_ + 0x10))();
  if (lVar6 < (longlong)(ulonglong)uVar7) {
    piVar1 = &(this->CurrentAudioBuffer).ArrayMax;
    piVar2 = &(this->CurrentAudioBuffer).ArrayNum;
    *piVar2 = 0;
    if ((this->CurrentAudioBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->CurrentAudioBuffer).AllocatorInstance,0,piVar1);
    }
    iVar5 = (**(code **)(this->_padding_ + 0x10))(this);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,&(this->CurrentAudioBuffer).AllocatorInstance,piVar2,piVar1);
    TCircularAudioBuffer<float,16>::Pop
              (&this->UncompressedAudioBuffer,
               (float *)(this->CurrentAudioBuffer).AllocatorInstance.Data,
               (this->CurrentAudioBuffer).ArrayNum);
    (this->CurrentCompressedBuffer).ArrayNum = 0;
    if ((this->CurrentCompressedBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CurrentCompressedBuffer).AllocatorInstance,0,
                 &(this->CurrentCompressedBuffer).ArrayMax);
    }
    cVar4 = (**(code **)(this->_padding_ + 0x20))
                      (this,&this->CurrentAudioBuffer,&this->CurrentCompressedBuffer);
    if (cVar4 == '\0') {
      `Audio::IAudioEncoder::EncodeIfPossible'::__l7::<lambda_1>::operator()(local_res8);
      return false;
    }
    iVar5 = TCircularAudioBuffer<unsigned_char,16>::Push
                      (&this->CompressedDataBuffer,
                       (uchar *)(this->CurrentCompressedBuffer).AllocatorInstance.Data,
                       (this->CurrentCompressedBuffer).ArrayNum);
    if (iVar5 != (this->CurrentCompressedBuffer).ArrayNum) {
      `Audio::IAudioEncoder::EncodeIfPossible'::__l9::<lambda_2>::operator()(local_res8);
    }
  }
  return true;
}

// Finalize @ 1444fba90

long64 __thiscall Audio::IAudioEncoder::Finalize(IAudioEncoder *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  EncodeIfPossible(this);
  (this->CurrentCompressedBuffer).ArrayNum = 0;
  if ((this->CurrentCompressedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->CurrentCompressedBuffer).AllocatorInstance,0,
               &(this->CurrentCompressedBuffer).ArrayMax);
  }
  (**(code **)(this->_padding_ + 0x28))(this,&this->CurrentCompressedBuffer);
  iVar2 = TCircularAudioBuffer<unsigned_char,16>::Push
                    (&this->CompressedDataBuffer,
                     (uchar *)(this->CurrentCompressedBuffer).AllocatorInstance.Data,
                     (this->CurrentCompressedBuffer).ArrayNum);
  if (iVar2 < 0) {
    `Audio::IAudioEncoder::Finalize'::__l5::<lambda_1>::operator()(local_res8);
    return (longlong)iVar2;
  }
  iVar2 = (this->CompressedDataBuffer).ReadCounter.Counter;
  iVar1 = (this->CompressedDataBuffer).WriteCounter.Counter;
  uVar3 = iVar1 - iVar2;
  if (iVar1 < iVar2) {
    uVar3 = uVar3 + (this->CompressedDataBuffer).Capacity;
  }
  return (ulonglong)uVar3;
}

// Init @ 1445080b0

void __thiscall Audio::IAudioEncoder::Init(IAudioEncoder *this,FSoundQualityInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  (**(code **)(this->_padding_ + 0x18))(this,param_1,&this->CurrentCompressedBuffer);
  iVar3 = TCircularAudioBuffer<unsigned_char,16>::Push
                    (&this->CompressedDataBuffer,
                     (uchar *)(this->CurrentCompressedBuffer).AllocatorInstance.Data,
                     (this->CurrentCompressedBuffer).ArrayNum);
  if (iVar3 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Remainder > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\IAudioEncoder.cpp"
                       ,0x5d,
                       L"Insufficient slack for header! Please use a larger value for DataBufferSlack."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// PopData @ 14450cb20

int __thiscall Audio::IAudioEncoder::PopData(IAudioEncoder *this,uchar *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  _Src = (this->CompressedDataBuffer).InternalBuffer.AllocatorInstance.Data;
  uVar2 = (this->CompressedDataBuffer).ReadCounter.Counter;
  puVar1 = &(this->CompressedDataBuffer).Capacity;
  iVar6 = (this->CompressedDataBuffer).ReadCounter.Counter;
  iVar3 = (this->CompressedDataBuffer).WriteCounter.Counter;
  iVar7 = iVar3 - iVar6;
  if (iVar3 < iVar6) {
    iVar7 = iVar7 + *puVar1;
  }
  if (param_2 < iVar7) {
    iVar7 = param_2;
  }
  iVar6 = *puVar1 - uVar2;
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  memcpy(param_1,_Src + uVar2,(longlong)iVar6);
  memcpy(param_1 + iVar6,_Src,(longlong)(iVar7 - iVar6));
  if (0x7ffffffe < (uint)param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x3f7,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x426,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  LOCK();
  (this->CompressedDataBuffer).ReadCounter.Counter =
       (uint)((this->CompressedDataBuffer).ReadCounter.Counter + iVar7) % *puVar1;
  UNLOCK();
  return iVar7;
}

// PushAudio @ 144514500

bool __thiscall
Audio::IAudioEncoder::PushAudio(IAudioEncoder *this,float *param_1,int param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 local_res18 [16];
  
  iVar1 = (this->UncompressedAudioBuffer).ReadCounter.Counter;
  iVar2 = (this->UncompressedAudioBuffer).WriteCounter.Counter;
  uVar5 = iVar2 - iVar1;
  puVar4 = &(this->UncompressedAudioBuffer).Capacity;
  if (iVar2 < iVar1) {
    uVar5 = uVar5 + *puVar4;
  }
  if (~uVar5 + *puVar4 < (uint)param_2) {
    `Audio::IAudioEncoder::PushAudio'::__l5::<lambda_1>::operator()(local_res18);
    return false;
  }
  TCircularAudioBuffer<float,16>::Push(&this->UncompressedAudioBuffer,param_1,param_2);
  if (param_3) {
    bVar3 = EncodeIfPossible(this);
    return bVar3;
  }
  return true;
}

// operator() @ 1504bf9c0

bool __thiscall `Audio::IAudioEncoder::Finalize'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2883468535172956242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2883468535172956242>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bfa00

bool __thiscall `Audio::IAudioEncoder::PushAudio'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2883468535172956179>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2883468535172956179>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bfa80

bool __thiscall `Audio::IAudioEncoder::EncodeIfPossible'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2883468535172956217>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2883468535172956217>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bfbd0

bool __thiscall `Audio::IAudioEncoder::EncodeIfPossible'::__l9::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2883468535172956223>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2883468535172956223>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

