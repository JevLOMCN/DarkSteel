// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 15

// GetDescription @ 146557450

Type __thiscall
Audio::FSoundDataReader::GetDescription
          (FSoundDataReader *this,FSoundFileDescription *param_1,
          TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)&(this->Description).NumFrames;
  uVar2 = *(undefined4 *)((longlong)&(this->Description).NumFrames + 4);
  param_1->NumFrames = *(long64 *)&this->State;
  param_1->SampleRate = uVar1;
  param_1->NumChannels = uVar2;
  iVar3 = (this->Description).NumChannels;
  iVar4 = (this->Description).FormatFlags;
  iVar5 = (this->Description).NumSections;
  param_1->FormatFlags = (this->Description).SampleRate;
  param_1->NumSections = iVar3;
  param_1->bIsSeekable = iVar4;
  *(int *)&param_1->field_0x1c = iVar5;
  TArray<enum_Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>::operator=
            (param_2,(TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *)
                     &(this->Description).bIsSeekable);
  return NONE;
}

// GetLengthBytes @ 146558b10

Type __thiscall Audio::FSoundDataReader::GetLengthBytes(FSoundDataReader *this,long64 *param_1)

{
  if (this->SoundData == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    return INVALID_DATA;
  }
  *param_1 = (longlong)this->SoundData->ArrayMax;
  return NONE;
}

// GetOffsetBytes @ 146559590

Type __thiscall Audio::FSoundDataReader::GetOffsetBytes(FSoundDataReader *this,long64 *param_1)

{
  *param_1 = this->CurrentIndexBytes;
  return NONE;
}

// GetOptionalChunks @ 1465595c0

Type __thiscall
Audio::FSoundDataReader::GetOptionalChunks
          (FSoundDataReader *this,
          TArray<Audio::FSoundFileChunkInfoWrapper,TSizedDefaultAllocator<32>_> *param_1,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_2)

{
  Type TVar1;
  
  TVar1 = GetOptionalChunksInternal
                    (*(SoundFileHandleOpaque **)&(this->ChannelMap).ArrayNum,param_1,param_2);
  return TVar1;
}

// Init @ 14655ce00

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundDataReader::Init
          (FSoundDataReader *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  SoundFileHandleOpaque *pSVar4;
  char *pcVar5;
  int *piVar6;
  Type local_res8 [2];
  FString local_58;
  FVirtualSoundFileCallbackInfo local_48;
  
  this->_padding_ = (longlong)param_1;
  local_48.VirtualSoundFileGetLength = OnSoundFileGetLengthBytes;
  local_48.VirtualSoundFileSeek = OnSoundFileSeekBytes;
  local_48.VirtualSoundFileRead = OnSoundFileReadBytes;
  local_48.VirtualSoundFileWrite = OnSoundFileWriteBytes;
  local_48.VirtualSoundFileTell = OnSoundFileTell;
  if (SoundFileOpenVirtual ==
      (_func___cdecl_SoundFileHandleOpaque_ptr_FVirtualSoundFileCallbackInfo_ptr_int_FSoundFileDescription_ptr_void_ptr
       *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundDataReader::Init(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const*___ptr64)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    (this->ChannelMap).ArrayNum = 0;
    (this->ChannelMap).ArrayMax = 0;
LAB_14655cfae:
    if (SoundFileStrError == (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0) {
      LOCK();
      *(undefined4 *)&this->CurrentIndexBytes = 6;
      UNLOCK();
      LOCK();
      *(undefined4 *)((longlong)&this->CurrentIndexBytes + 4) = 7;
      UNLOCK();
      return INVALID_DATA;
    }
    pcVar5 = (*SoundFileStrError)((SoundFileHandleOpaque *)0x0);
    ::FString::FString(&local_58,pcVar5);
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundDataReader::Init(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const*___ptr64)___ptr64'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    LOCK();
    *(undefined4 *)&this->CurrentIndexBytes = 6;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)&this->CurrentIndexBytes + 4) = 0xb;
    UNLOCK();
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    return FAILED_TO_OPEN;
  }
  pSVar4 = (*SoundFileOpenVirtual)
                     (&local_48,0x10,(FSoundFileDescription *)&this->State,&this[-1].FileHandle);
  *(SoundFileHandleOpaque **)&(this->ChannelMap).ArrayNum = pSVar4;
  if (pSVar4 == (SoundFileHandleOpaque *)0x0) goto LAB_14655cfae;
  iVar2 = *(int *)((longlong)&(this->Description).NumFrames + 4);
  iVar3 = 0;
  local_res8[0] = INVALID;
  TArray<enum_Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>::Init
            (&(this->Description).bIsSeekable,local_res8,iVar2);
  if (SoundFileCommand == (_func___cdecl_int_SoundFileHandleOpaque_ptr_int_void_ptr_int *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundDataReader::Init(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const*___ptr64)___ptr64'
                  ::__l55::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      GetDefaultMappingsForChannelNumber
                (iVar2,(TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *)
                       &(this->Description).bIsSeekable);
      goto LAB_14655cf6e;
    }
  }
  else {
    iVar3 = (*SoundFileCommand)(*(SoundFileHandleOpaque **)&(this->ChannelMap).ArrayNum,0x1100,
                                *(void **)&(this->Description).bIsSeekable,iVar2 * 4);
  }
  if (iVar3 == 0) {
    GetDefaultMappingsForChannelNumber
              (iVar2,(TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *)
                     &(this->Description).bIsSeekable);
  }
  else {
    piVar6 = *(int **)&(this->Description).bIsSeekable;
    iVar3 = *(int *)&(this->ChannelMap).AllocatorInstance.Data;
    piVar1 = piVar6 + iVar3;
    while( true ) {
      if (*(int *)&(this->ChannelMap).AllocatorInstance.Data != iVar3) {
        `TCheckedPointerIterator<enum_Audio::ESoundFileChannelMap::Type,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (piVar6 == piVar1) goto LAB_14655cf6e;
      if (*piVar6 == 0) break;
      piVar6 = piVar6 + 1;
    }
    GetDefaultMappingsForChannelNumber
              (iVar2,(TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *)
                     &(this->Description).bIsSeekable);
  }
LAB_14655cf6e:
  LOCK();
  *(undefined4 *)&this->CurrentIndexBytes = 1;
  UNLOCK();
  return NONE;
}

// Init @ 14655d040

Type __thiscall
Audio::FSoundDataReader::Init
          (FSoundDataReader *this,TSharedPtr<Audio::ISoundFile,1> *param_1,bool param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return NONE;
}

// ReadBytes @ 14656aa30

Type __thiscall
Audio::FSoundDataReader::ReadBytes
          (FSoundDataReader *this,void *param_1,long64 param_2,long64 *param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  uint uVar6;
  uint uVar7;
  
  pTVar1 = this->SoundData;
  if (pTVar1 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    TVar5 = INVALID_DATA;
  }
  else {
    lVar2 = this->CurrentIndexBytes;
    if ((longlong)pTVar1->ArrayMax <= lVar2 + param_2) {
      param_2 = pTVar1->ArrayMax - lVar2;
    }
    if (0 < param_2) {
      uVar7 = (uint)lVar2;
      uVar6 = 0;
      if ((int)uVar7 < pTVar1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5 = (*pcVar3)();
          return TVar5;
        }
      }
      memcpy(param_1,(pTVar1->AllocatorInstance).Data + (int)uVar7,param_2);
      this->CurrentIndexBytes = this->CurrentIndexBytes + param_2;
    }
    TVar5 = NONE;
    *param_3 = param_2;
  }
  return TVar5;
}

// ReadFrames @ 14656acd0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundDataReader::ReadFrames
          (FSoundDataReader *this,float *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileReadFramesFloat ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundDataReader::ReadFrames(float*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileReadFramesFloat)
                    (*(SoundFileHandleOpaque **)&(this->ChannelMap).ArrayNum,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// ReadFrames @ 14656ad20

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundDataReader::ReadFrames
          (FSoundDataReader *this,double *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileReadFramesDouble ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundDataReader::ReadFrames(double*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileReadFramesDouble)
                    (*(SoundFileHandleOpaque **)&(this->ChannelMap).ArrayNum,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// ReadSamples @ 14656ae10

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundDataReader::ReadSamples
          (FSoundDataReader *this,float *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileReadSamplesFloat ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundDataReader::ReadSamples(float*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileReadSamplesFloat)
                    (*(SoundFileHandleOpaque **)&(this->ChannelMap).ArrayNum,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// ReadSamples @ 14656ae60

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundDataReader::ReadSamples
          (FSoundDataReader *this,double *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileReadSamplesDouble ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundDataReader::ReadSamples(double*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileReadSamplesDouble)
                    (*(SoundFileHandleOpaque **)&(this->ChannelMap).ArrayNum,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// Release @ 14656c530

Type __thiscall Audio::FSoundDataReader::Release(FSoundDataReader *this)

{
  this->_padding_ = 0;
  return NONE;
}

// SeekBytes @ 146571650

Type __thiscall
Audio::FSoundDataReader::SeekBytes
          (FSoundDataReader *this,long64 param_1,Type param_2,long64 *param_3)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (this->SoundData == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    return INVALID_DATA;
  }
  lVar5 = (longlong)this->SoundData->ArrayMax;
  if (lVar5 == 0) {
    *param_3 = 0;
    this->CurrentIndexBytes = 0;
    return NONE;
  }
  if (param_2 == FROM_START) {
    this->CurrentIndexBytes = param_1;
  }
  else if (param_2 == FROM_CURRENT) {
    this->CurrentIndexBytes = this->CurrentIndexBytes + param_1;
  }
  else if (param_2 == FROM_END) {
    this->CurrentIndexBytes = lVar5 + param_1;
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                       ,1099,L"Uknown seek mode!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
  lVar4 = this->CurrentIndexBytes;
  if (lVar4 < 0) {
    do {
      lVar4 = lVar4 + lVar5;
    } while (lVar4 < 0);
    this->CurrentIndexBytes = lVar4;
  }
  if (lVar5 < lVar4) {
    do {
      lVar4 = lVar4 - lVar5;
    } while (lVar5 < lVar4);
    this->CurrentIndexBytes = lVar4;
  }
  *param_3 = lVar4;
  return NONE;
}

// SeekFrames @ 1465718c0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundDataReader::SeekFrames
          (FSoundDataReader *this,long64 param_1,Type param_2,long64 *param_3)

{
  long64 lVar1;
  char *pcVar2;
  FString local_18;
  
  if (SoundFileSeek == (_func___cdecl_long64_SoundFileHandleOpaque_ptr_long64_int *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundDataReader::SeekFrames(__int64,Audio::ESoundFileSeekMode::Type,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileSeek)(*(SoundFileHandleOpaque **)&(this->ChannelMap).ArrayNum,param_1,param_2);
  if (lVar1 == -1) {
    if (SoundFileStrError == (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0) {
      LOCK();
      *(undefined4 *)&this->CurrentIndexBytes = 6;
      UNLOCK();
      LOCK();
      *(undefined4 *)((longlong)&this->CurrentIndexBytes + 4) = 7;
      UNLOCK();
      return INVALID_DATA;
    }
    pcVar2 = (*SoundFileStrError)(*(SoundFileHandleOpaque **)&(this->ChannelMap).ArrayNum);
    ::FString::FString(&local_18,pcVar2);
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundDataReader::SeekFrames(__int64,Audio::ESoundFileSeekMode::Type,__int64&___ptr64)___ptr64'
                  ::__l30::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    LOCK();
    *(undefined4 *)&this->CurrentIndexBytes = 6;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)&this->CurrentIndexBytes + 4) = 0xc;
    UNLOCK();
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return FAILED_TO_SEEK;
  }
  return NONE;
}

// WriteBytes @ 14657d520

Type __thiscall
Audio::FSoundDataReader::WriteBytes
          (FSoundDataReader *this,void *param_1,long64 param_2,long64 *param_3)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                     ,0x47b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3 = (*pcVar1)();
    return TVar3;
  }
  return NONE;
}

