// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 8

// FAudioFileWriter @ 1444a2260

FAudioFileWriter * __thiscall
Audio::FAudioFileWriter::FAudioFileWriter
          (FAudioFileWriter *this,FString *param_1,FSoundQualityInfo *param_2)

{
  IFileHandle *pIVar1;
  IAudioEncoder *pIVar2;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar3;
  IFileHandle *pIVar4;
  wchar_t *pwVar5;
  
  (this->QualityInfo).Quality = param_2->Quality;
  (this->QualityInfo).NumChannels = param_2->NumChannels;
  (this->QualityInfo).SampleRate = param_2->SampleRate;
  (this->QualityInfo).SampleDataSize = param_2->SampleDataSize;
  (this->QualityInfo).Duration = param_2->Duration;
  (this->QualityInfo).bStreaming = param_2->bStreaming;
  ::FString::FString(&(this->QualityInfo).DebugName,&param_2->DebugName);
  (this->DataBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataBuffer).ArrayNum = 0;
  (this->DataBuffer).ArrayMax = 0;
  pIVar2 = GetNewEncoderForFile(this,param_1);
  (this->Encoder).Ptr = pIVar2;
  (this->FileHandle).Ptr = (IFileHandle *)0x0;
  this_00 = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pIVar4 = (IFileHandle *)(**(code **)((longlong)*pIVar3 + 0x110))(pIVar3,pwVar5,0,0);
  pIVar1 = (this->FileHandle).Ptr;
  if ((pIVar1 != pIVar4) && ((this->FileHandle).Ptr = pIVar4, pIVar1 != (IFileHandle *)0x0)) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  return this;
}

// ~FAudioFileWriter @ 1444a5f20

void __thiscall Audio::FAudioFileWriter::~FAudioFileWriter(FAudioFileWriter *this)

{
  IFileHandle *pIVar1;
  IAudioEncoder *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  long64 lVar6;
  
  if ((((this->Encoder).Ptr == (IAudioEncoder *)0x0) ||
      ((this->FileHandle).Ptr == (IFileHandle *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Encoder.IsValid() && FileHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FileEncoder.cpp"
                         ,0x16,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar6 = IAudioEncoder::Finalize((this->Encoder).Ptr);
  FlushEncoderToFile(this,(int)lVar6);
  pIVar1 = (this->FileHandle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar2 = (this->Encoder).Ptr;
  if (pIVar2 != (IAudioEncoder *)0x0) {
    (**(code **)pIVar2->_padding_)(pIVar2,1);
  }
  pFVar3 = (this->DataBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->QualityInfo).DebugName.Data.AllocatorInstance.Data;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar3);
  return;
}

// EncodeIfPossible @ 1444bcd30

bool __thiscall Audio::FAudioFileWriter::EncodeIfPossible(FAudioFileWriter *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->Encoder).Ptr == (IAudioEncoder *)0x0) ||
     ((this->FileHandle).Ptr == (IFileHandle *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Encoder.IsValid() && FileHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FileEncoder.cpp"
                       ,0x33,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = IAudioEncoder::EncodeIfPossible((this->Encoder).Ptr);
  if (bVar2) {
    FlushEncoderToFile(this,0x1000);
    return true;
  }
  return false;
}

// FlushEncoderToFile @ 1444becd0

void __thiscall Audio::FAudioFileWriter::FlushEncoderToFile(FAudioFileWriter *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  IFileHandle *pIVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  
  if ((((this->Encoder).Ptr == (IAudioEncoder *)0x0) ||
      ((this->FileHandle).Ptr == (IFileHandle *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Encoder.IsValid() && FileHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FileEncoder.cpp"
                         ,0x6c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 != 0) {
    piVar1 = &(this->DataBuffer).ArrayMax;
    piVar2 = &(this->DataBuffer).ArrayNum;
    do {
      *piVar2 = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->DataBuffer).AllocatorInstance,0,piVar1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&(this->DataBuffer).AllocatorInstance,piVar2,piVar1);
      iVar7 = IAudioEncoder::PopData
                        ((this->Encoder).Ptr,(uchar *)(this->DataBuffer).AllocatorInstance.Data,
                         (this->DataBuffer).ArrayNum);
      pIVar3 = (this->FileHandle).Ptr;
      cVar6 = (**(code **)((longlong)*pIVar3 + 0x30))
                        (pIVar3,(this->DataBuffer).AllocatorInstance.Data);
      if ((cVar6 == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("WriteResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FileEncoder.cpp"
                             ,0x7b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    } while (iVar7 == param_1);
  }
  return;
}

// GetExtensionForFile @ 1444bfcf0

FString * __thiscall
Audio::FAudioFileWriter::GetExtensionForFile
          (FAudioFileWriter *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  pFVar3 = pFVar1 + (longlong)(param_1->Data).ArrayNum * 2;
  do {
    if (pFVar3 == pFVar1) goto LAB_1444bfd20;
    pFVar3 = pFVar3 + -2;
  } while (*(short *)pFVar3 != 0x2e);
  iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 1);
  if (iVar2 != -1) {
    ::FString::RightChop(param_1,__return_storage_ptr__,iVar2 + 1);
    return __return_storage_ptr__;
  }
LAB_1444bfd20:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetFileInfo @ 1444bfd60

void __thiscall
Audio::FAudioFileWriter::GetFileInfo(FAudioFileWriter *this,FSoundQualityInfo *param_1)

{
  param_1->Quality = (this->QualityInfo).Quality;
  param_1->NumChannels = (this->QualityInfo).NumChannels;
  param_1->SampleRate = (this->QualityInfo).SampleRate;
  param_1->SampleDataSize = (this->QualityInfo).SampleDataSize;
  param_1->Duration = (this->QualityInfo).Duration;
  param_1->bStreaming = (this->QualityInfo).bStreaming;
  ::FString::operator=(&param_1->DebugName,&(this->QualityInfo).DebugName);
  return;
}

// GetNewEncoderForFile @ 1444bff10

/* WARNING: Enum "Type": Some values do not have unique names */

IAudioEncoder * __thiscall
Audio::FAudioFileWriter::GetNewEncoderForFile(FAudioFileWriter *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FOpusEncoder *pFVar4;
  FOggVorbisEncoder *this_00;
  FWavEncoder *this_01;
  int *piVar5;
  FOpusEncoder *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  FString local_18;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  pFVar4 = (FOpusEncoder *)0x0;
  pFVar6 = (FOpusEncoder *)0x0;
  pFVar7 = pFVar1 + (longlong)(param_1->Data).ArrayNum * 2;
  do {
    if (pFVar7 == pFVar1) goto LAB_1444bff50;
    pFVar7 = pFVar7 + -2;
  } while (*(short *)pFVar7 != 0x2e);
  iVar3 = (int)((longlong)pFVar7 - (longlong)pFVar1 >> 1);
  if (iVar3 == -1) {
LAB_1444bff50:
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    ::FString::RightChop(param_1,&local_18,iVar3 + 1);
  }
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&OpusExtension,L"opus");
    atexit(`Audio::FAudioFileWriter::GetNewEncoderForFile'::__l2::
           _dynamic_atexit_destructor_for__OpusExtension__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&OggExtension,L"ogg");
    atexit(`Audio::FAudioFileWriter::GetNewEncoderForFile'::__l2::
           _dynamic_atexit_destructor_for__OggExtension__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&WavExtension,L"wav");
    atexit(`Audio::FAudioFileWriter::GetNewEncoderForFile'::__l2::
           _dynamic_atexit_destructor_for__WavExtension__);
    _Init_thread_footer(&::_TSS2);
  }
  iVar3 = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == WavExtension.Data.ArrayNum) {
    if (1 < local_18.Data.ArrayNum) {
      iVar2 = wcscmp((wchar_t *)local_18.Data.AllocatorInstance.Data,
                     (wchar_t *)WavExtension.Data.AllocatorInstance.Data);
      bVar8 = iVar2 == 0;
      goto LAB_1444c000d;
    }
  }
  else {
    bVar8 = WavExtension.Data.ArrayNum + local_18.Data.ArrayNum == 1;
LAB_1444c000d:
    if (!bVar8) {
      if (iVar3 == OggExtension.Data.ArrayNum) {
        if (1 < iVar3) {
          iVar2 = wcscmp((wchar_t *)local_18.Data.AllocatorInstance.Data,
                         (wchar_t *)OggExtension.Data.AllocatorInstance.Data);
          bVar8 = iVar2 == 0;
          goto LAB_1444c0046;
        }
      }
      else {
        bVar8 = OggExtension.Data.ArrayNum + iVar3 == 1;
LAB_1444c0046:
        if (!bVar8) {
          pFVar6 = pFVar4;
          if (iVar3 == OpusExtension.Data.ArrayNum) {
            if (1 < iVar3) {
              iVar3 = wcscmp((wchar_t *)local_18.Data.AllocatorInstance.Data,
                             (wchar_t *)OpusExtension.Data.AllocatorInstance.Data);
              bVar8 = iVar3 == 0;
              goto LAB_1444c007b;
            }
          }
          else {
            bVar8 = OpusExtension.Data.ArrayNum + iVar3 == 1;
LAB_1444c007b:
            if (!bVar8) {
              if (1 < (byte)LogTemp._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
              }
              goto LAB_1444c0122;
            }
          }
          pFVar4 = ::operator_new(0x90);
          if (pFVar4 != (FOpusEncoder *)0x0) {
            pFVar6 = FOpusEncoder::FOpusEncoder(pFVar4,&this->QualityInfo,0x1000,MediumLow,File);
          }
          goto LAB_1444c0122;
        }
      }
      this_00 = ::operator_new(0x78);
      if (this_00 != (FOggVorbisEncoder *)0x0) {
        pFVar6 = (FOpusEncoder *)
                 FOggVorbisEncoder::FOggVorbisEncoder(this_00,&this->QualityInfo,0x1000);
      }
      goto LAB_1444c0122;
    }
  }
  this_01 = ::operator_new(0x70);
  if (this_01 != (FWavEncoder *)0x0) {
    pFVar6 = (FOpusEncoder *)FWavEncoder::FWavEncoder(this_01,&this->QualityInfo,0x1000);
  }
LAB_1444c0122:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (IAudioEncoder *)pFVar6;
}

// PushAudio @ 1444e09c0

bool __thiscall
Audio::FAudioFileWriter::PushAudio(FAudioFileWriter *this,float *param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->Encoder).Ptr == (IAudioEncoder *)0x0) ||
     ((this->FileHandle).Ptr == (IFileHandle *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Encoder.IsValid() && FileHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\FileEncoder.cpp"
                       ,0x23,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = IAudioEncoder::PushAudio((this->Encoder).Ptr,param_1,param_2,param_3);
  if ((param_3) && (bVar2)) {
    FlushEncoderToFile(this,0x1000);
    bVar2 = true;
  }
  return bVar2;
}

