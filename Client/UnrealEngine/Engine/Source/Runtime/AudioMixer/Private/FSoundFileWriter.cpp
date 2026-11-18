// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 16

// GetData @ 1465561e0

Type __thiscall
Audio::FSoundFileWriter::GetData
          (FSoundFileWriter *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> **param_1)

{
  *param_1 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&(this->ChannelMap).ArrayNum;
  return NONE;
}

// GetLengthBytes @ 146558b70

Type __thiscall Audio::FSoundFileWriter::GetLengthBytes(FSoundFileWriter *this,long64 *param_1)

{
  *param_1 = (longlong)(this->BulkData).ArrayNum;
  return NONE;
}

// GetOffsetBytes @ 1465595b0

Type __thiscall Audio::FSoundFileWriter::GetOffsetBytes(FSoundFileWriter *this,long64 *param_1)

{
  *param_1 = this->CurrentIndexBytes;
  return NONE;
}

// Init @ 14655d0f0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileWriter::Init
          (FSoundFileWriter *this,FSoundFileDescription *param_1,
          TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *param_2,
          double param_3)

{
  long64 lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  SoundFileHandleOpaque *pSVar5;
  char *pcVar6;
  ForAnyElementType FVar7;
  FString local_58;
  FVirtualSoundFileCallbackInfo local_48;
  
  LOCK();
  *(undefined4 *)&this->EncodingQuality = 1;
  UNLOCK();
  iVar4 = *(int *)((longlong)&(this->BulkData).AllocatorInstance.Data + 4);
  *(undefined4 *)&(this->BulkData).AllocatorInstance.Data = 0;
  if (iVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&(this->ChannelMap).ArrayNum,0,
               (int *)((longlong)&(this->BulkData).AllocatorInstance.Data + 4));
  }
  lVar1 = *(long64 *)&param_1->SampleRate;
  this->FileHandle = (SoundFileHandleOpaque *)param_1->NumFrames;
  (this->Description).NumFrames = lVar1;
  iVar4 = param_1->NumSections;
  iVar2 = param_1->bIsSeekable;
  uVar3 = *(undefined4 *)&param_1->field_0x1c;
  (this->Description).SampleRate = param_1->FormatFlags;
  (this->Description).NumChannels = iVar4;
  (this->Description).FormatFlags = iVar2;
  (this->Description).NumSections = uVar3;
  TArray<enum_Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Description).bIsSeekable,param_2);
  *(double *)&(this->BulkData).ArrayNum = param_3;
  if (SoundFileFormatCheck == (_func___cdecl_int_FSoundFileDescription_ptr *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Init(Audio::FSoundFileDescription_const&___ptr64,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    LOCK();
    *(undefined4 *)&this->EncodingQuality = 6;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)&this->EncodingQuality + 4) = 0xf;
    UNLOCK();
    return INVALID_STATE;
  }
  iVar4 = (*SoundFileFormatCheck)(param_1);
  if (iVar4 == 0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      switch(param_1->FormatFlags & 0xffff) {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      default:
        break;
      case 0x10:
        break;
      case 0x11:
        break;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x20:
        break;
      case 0x30:
        break;
      case 0x31:
        break;
      case 0x32:
        break;
      case 0x40:
        break;
      case 0x41:
        break;
      case 0x42:
        break;
      case 0x43:
        break;
      case 0x60:
      }
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Init(Audio::FSoundFileDescription_const&___ptr64,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    LOCK();
    *(undefined4 *)&this->EncodingQuality = 6;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)&this->EncodingQuality + 4) = 9;
    UNLOCK();
    return INVALID_INPUT_FORMAT;
  }
  if (param_2->ArrayNum != param_1->NumChannels) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Init(Audio::FSoundFileDescription_const&___ptr64,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                  ::__l48::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    LOCK();
    *(undefined4 *)&this->EncodingQuality = 6;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)&this->EncodingQuality + 4) = 10;
    UNLOCK();
    return INVALID_CHANNEL_MAP;
  }
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
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Init(Audio::FSoundFileDescription_const&___ptr64,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                  ::__l71::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    this->CurrentIndexBytes = 0;
LAB_14655d5f0:
    if (SoundFileStrError == (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0) {
      LOCK();
      *(undefined4 *)&this->EncodingQuality = 6;
      UNLOCK();
      LOCK();
      *(undefined4 *)((longlong)&this->EncodingQuality + 4) = 7;
      UNLOCK();
      return INVALID_DATA;
    }
    pcVar6 = (*SoundFileStrError)((SoundFileHandleOpaque *)0x0);
    ::FString::FString(&local_58,pcVar6);
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Init(Audio::FSoundFileDescription_const&___ptr64,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                  ::__l95::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    LOCK();
    *(undefined4 *)&this->EncodingQuality = 6;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)&this->EncodingQuality + 4) = 0xb;
    UNLOCK();
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    return FAILED_TO_OPEN;
  }
  pSVar5 = (*SoundFileOpenVirtual)
                     (&local_48,0x20,(FSoundFileDescription *)&this->FileHandle,&this[-1].State);
  this->CurrentIndexBytes = (long64)pSVar5;
  if (pSVar5 == (SoundFileHandleOpaque *)0x0) goto LAB_14655d5f0;
  if (SoundFileCommand == (_func___cdecl_int_SoundFileHandleOpaque_ptr_int_void_ptr_int *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Init(Audio::FSoundFileDescription_const&___ptr64,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                  ::__l118::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    iVar4 = (*SoundFileCommand)(pSVar5,0x1101,(param_2->AllocatorInstance).Data,
                                *(int *)((longlong)&(this->Description).NumFrames + 4) << 2);
    if (iVar4 == 1) goto LAB_14655d4de;
  }
  if (SoundFileStrError == (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0) {
    return INVALID_DATA;
  }
  pcVar6 = (*SoundFileStrError)((SoundFileHandleOpaque *)0x0);
  ::FString::FString(&local_58,pcVar6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar7.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"No Error.");
  if (iVar4 != 0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Init(Audio::FSoundFileDescription_const&___ptr64,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                  ::__l145::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    LOCK();
    *(undefined4 *)&this->EncodingQuality = 6;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)&this->EncodingQuality + 4) = 10;
    UNLOCK();
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    return INVALID_CHANNEL_MAP;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14655d4de:
  if (((this->Description).SampleRate & 0xfff0000U) != 0x200000) {
    return NONE;
  }
  if (SoundFileCommand == (_func___cdecl_int_SoundFileHandleOpaque_ptr_int_void_ptr_int *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Init(Audio::FSoundFileDescription_const&___ptr64,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                  ::__l171::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    iVar4 = (*SoundFileCommand)((SoundFileHandleOpaque *)this->CurrentIndexBytes,0x1300,
                                &(this->BulkData).ArrayNum,8);
    if (iVar4 == 1) {
      return NONE;
    }
  }
  if (SoundFileStrError == (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0) {
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return INVALID_DATA;
    }
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Init(Audio::FSoundFileDescription_const&___ptr64,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                ::__l195::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    return INVALID_DATA;
  }
  pcVar6 = (*SoundFileStrError)((SoundFileHandleOpaque *)this->CurrentIndexBytes);
  ::FString::FString(&local_58,pcVar6);
  if (1 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Init(Audio::FSoundFileDescription_const&___ptr64,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                ::__l213::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  LOCK();
  *(undefined4 *)&this->EncodingQuality = 6;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)&this->EncodingQuality + 4) = 3;
  UNLOCK();
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return BAD_ENCODING_QUALITY;
}

// ReadBytes @ 14656ac90

Type __thiscall
Audio::FSoundFileWriter::ReadBytes
          (FSoundFileWriter *this,void *param_1,long64 param_2,long64 *param_3)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                     ,0x58a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3 = (*pcVar1)();
    return TVar3;
  }
  return NONE;
}

// Release @ 14656c5c0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall Audio::FSoundFileWriter::Release(FSoundFileWriter *this)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  int iVar4;
  
  if (SoundFileClose == (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::Release(void)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    this->CurrentIndexBytes = 0;
    return INVALID_STATE;
  }
  if ((SoundFileHandleOpaque *)this->CurrentIndexBytes != (SoundFileHandleOpaque *)0x0) {
    iVar4 = (*SoundFileClose)((SoundFileHandleOpaque *)this->CurrentIndexBytes);
    if (iVar4 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                         ,0x638,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3 = (*pcVar1)();
        return TVar3;
      }
    }
    this->CurrentIndexBytes = 0;
  }
  return NONE;
}

// SeekBytes @ 146571820

Type __thiscall
Audio::FSoundFileWriter::SeekBytes
          (FSoundFileWriter *this,long64 param_1,Type param_2,long64 *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  
  iVar1 = (this->BulkData).ArrayNum;
  if (iVar1 == 0) {
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
    this->CurrentIndexBytes = param_1 + iVar1;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                       ,0x57f,L"Uknown seek mode!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  *param_3 = this->CurrentIndexBytes;
  return NONE;
}

// SeekFrames @ 146571aa0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileWriter::SeekFrames
          (FSoundFileWriter *this,long64 param_1,Type param_2,long64 *param_3)

{
  long64 lVar1;
  char *pcVar2;
  FString local_18;
  
  if (SoundFileSeek == (_func___cdecl_long64_SoundFileHandleOpaque_ptr_long64_int *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::SeekFrames(__int64,Audio::ESoundFileSeekMode::Type,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileSeek)((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  if (lVar1 == -1) {
    if (SoundFileStrError == (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0) {
      return INVALID_DATA;
    }
    pcVar2 = (*SoundFileStrError)((SoundFileHandleOpaque *)this->CurrentIndexBytes);
    ::FString::FString(&local_18,pcVar2);
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::SeekFrames(__int64,Audio::ESoundFileSeekMode::Type,__int64&___ptr64)___ptr64'
                  ::__l30::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    LOCK();
    *(undefined4 *)&this->EncodingQuality = 6;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)&this->EncodingQuality + 4) = 0xc;
    UNLOCK();
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return FAILED_TO_SEEK;
  }
  return NONE;
}

// WriteByteArrayChunk @ 14657d0f0

Type __thiscall
Audio::FSoundFileWriter::WriteByteArrayChunk
          (FSoundFileWriter *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  Type TVar1;
  
  TVar1 = WriteByteArrayChunkInternal((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1);
  return TVar1;
}

// WriteBytes @ 14657d5a0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileWriter::WriteBytes
          (FSoundFileWriter *this,void *param_1,long64 param_2,long64 *param_3)

{
  Type TVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(this->BulkData).ArrayNum;
  lVar2 = (this->CurrentIndexBytes - lVar3) + param_2;
  if (lVar2 + lVar3 < 0x80000000) {
    if (0 < lVar2) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)lVar2,&(this->BulkData).AllocatorInstance,&(this->BulkData).ArrayNum,
                 &(this->BulkData).ArrayMax);
    }
    memcpy((this->BulkData).AllocatorInstance.Data + this->CurrentIndexBytes,param_1,param_2);
    this->CurrentIndexBytes = this->CurrentIndexBytes + param_2;
    TVar1 = NONE;
    *param_3 = param_2;
  }
  else {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::WriteBytes(void_const*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    TVar1 = INVALID_DATA;
  }
  return TVar1;
}

// WriteCueCommandData @ 14657d670

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileWriter::WriteCueCommandData(FSoundFileWriter *this,FSoundFileCues *param_1)

{
  SoundFileHandleOpaque *pSVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  int iVar5;
  
  pSVar1 = (SoundFileHandleOpaque *)this->CurrentIndexBytes;
  if (SoundFileCommand == (_func___cdecl_int_SoundFileHandleOpaque_ptr_int_void_ptr_int *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_LibSoundFile_wa_1512e7f00,
                 (FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    if (param_1 == (FSoundFileCues *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSoundFileData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                         ,0x21f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4 = (*pcVar2)();
        return TVar4;
      }
    }
    iVar5 = (*SoundFileCommand)(pSVar1,0x10cf,param_1,0x6d64);
    if (iVar5 != 0) {
      if (6 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u_SoundFileComman_1512e7dd8,
                   (FLogCategoryBase *)&LogAudioMixer);
      }
      (*SoundFileCommand)(pSVar1,0x1060,(void *)0x0,0);
      return NONE;
    }
    if (1 < (byte)LogAudioMixer._0_1_) {
      (*SoundFileStrError)(pSVar1);
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_LibSoundFile_fa_1512e7e68,
                 (FLogCategoryBase *)&LogAudioMixer);
      return INVALID_STATE;
    }
  }
  return INVALID_STATE;
}

// WriteFrames @ 14657d780

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileWriter::WriteFrames
          (FSoundFileWriter *this,float *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileWriteFramesFloat ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::WriteFrames(float_const*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileWriteFramesFloat)
                    ((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// WriteFrames @ 14657d7d0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileWriter::WriteFrames
          (FSoundFileWriter *this,double *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileWriteFramesDouble ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::WriteFrames(double_const*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileWriteFramesDouble)
                    ((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// WriteOptionalChunks @ 14657d820

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileWriter::WriteOptionalChunks
          (FSoundFileWriter *this,
          TArray<Audio::FSoundFileChunkInfoWrapper,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  SoundFileHandleOpaque *pSVar2;
  Type TVar3;
  int iVar4;
  FSoundFileChunkInfo *pFVar5;
  FSoundFileChunkInfo *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  pSVar2 = (SoundFileHandleOpaque *)this->CurrentIndexBytes;
  if ((SoundFileSetChunk ==
       (_func___cdecl_int_SoundFileHandleOpaque_ptr_FSoundFileChunkInfo_ptr *)0x0) ||
     (SoundFileCommand == (_func___cdecl_int_SoundFileHandleOpaque_ptr_int_void_ptr_int *)0x0)) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_LibSoundFile_wa_1512e7c90,
                 (FLogCategoryBase *)&LogAudioMixer);
    }
LAB_14657d948:
    TVar3 = NONE;
  }
  else {
    iVar1 = param_1->ArrayNum;
    pFVar5 = (FSoundFileChunkInfo *)(param_1->AllocatorInstance).Data;
    pFVar6 = (FSoundFileChunkInfo *)((longlong)pFVar5 + (longlong)iVar1 * 0x58);
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<Audio::FSoundFileChunkInfoWrapper_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) goto LAB_14657d948;
      iVar4 = (*SoundFileSetChunk)(pSVar2,pFVar5);
      if (iVar4 != 0) break;
      if (6 < (byte)LogAudioMixer._0_1_) {
        ::FString::FString(&local_28,pFVar5->ChunkId);
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u_Wrote_ChunkId___1512e7c20,
                   (FLogCategoryBase *)&LogAudioMixer);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      (*SoundFileCommand)(pSVar2,0x1060,(void *)0x0,0);
      pFVar5 = (FSoundFileChunkInfo *)(pFVar5[1].ChunkId + 8);
    }
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_LibSoundFile_fa_1512e7b90,
                 (FLogCategoryBase *)&LogAudioMixer);
    }
    TVar3 = INVALID_STATE;
  }
  return TVar3;
}

// WriteSamples @ 14657d970

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileWriter::WriteSamples
          (FSoundFileWriter *this,float *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileWriteSamplesFloat ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::WriteSamples(float_const*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileWriteSamplesFloat)
                    ((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// WriteSamples @ 14657d9c0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileWriter::WriteSamples
          (FSoundFileWriter *this,double *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileWriteSamplesDouble ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileWriter::WriteSamples(double_const*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileWriteSamplesDouble)
                    ((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

