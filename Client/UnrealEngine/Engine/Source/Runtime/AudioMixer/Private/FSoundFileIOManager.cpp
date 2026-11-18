// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 10

// FSoundFileIOManager @ 14653dbe0

FSoundFileIOManager * __thiscall
Audio::FSoundFileIOManager::FSoundFileIOManager(FSoundFileIOManager *this)

{
  FSoundFileIOManagerImpl *pFVar1;
  FSoundFileIOManagerImpl *pFVar2;
  FSoundFileIOManager local_18 [2];
  
  (this->Impl).Ptr = (FSoundFileIOManagerImpl *)0x0;
  pFVar2 = ::operator_new(1);
  if (this == local_18) {
    if (pFVar2 != (FSoundFileIOManagerImpl *)0x0) {
      ::operator_delete(pFVar2,1);
    }
  }
  else {
    pFVar1 = (this->Impl).Ptr;
    (this->Impl).Ptr = pFVar2;
    if (pFVar1 != (FSoundFileIOManagerImpl *)0x0) {
      ::operator_delete(pFVar1,1);
      return this;
    }
  }
  return this;
}

// ~FSoundFileIOManager @ 146540f10

void __thiscall Audio::FSoundFileIOManager::~FSoundFileIOManager(FSoundFileIOManager *this)

{
  FSoundFileIOManagerImpl *pFVar1;
  
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FSoundFileIOManagerImpl *)0x0) {
    ::operator_delete(pFVar1,1);
    return;
  }
  return;
}

// CreateSoundDataReader @ 146550750

TSharedPtr<Audio::ISoundFileReader,1> * __thiscall
Audio::FSoundFileIOManager::CreateSoundDataReader
          (FSoundFileIOManager *this,TSharedPtr<Audio::ISoundFileReader,1> *__return_storage_ptr__)

{
  FSoundDataReader *pFVar1;
  
  if ((this->Impl).Ptr == (FSoundFileIOManagerImpl *)0x0) {
    __return_storage_ptr__->Object = (ISoundFileReader *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pFVar1 = ::operator_new(0x60);
  if (pFVar1 != (FSoundDataReader *)0x0) {
    pFVar1->_padding_ = (longlong)&FSoundDataReader::_vftable__for__Audio__ISoundFileParser__;
    pFVar1->_padding_ = (longlong)&FSoundDataReader::_vftable__for__Audio__ISoundFileReader__;
    pFVar1->CurrentIndexBytes = 0;
    (pFVar1->State).Counter = 0;
    (pFVar1->CurrentError).Counter = 0;
    (pFVar1->Description).NumFrames = 0;
    (pFVar1->Description).SampleRate = 0;
    (pFVar1->Description).NumChannels = 0;
    (pFVar1->Description).FormatFlags = 0;
    (pFVar1->Description).NumSections = 0;
    (pFVar1->Description).bIsSeekable = 0;
    (pFVar1->ChannelMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->ChannelMap).ArrayNum = 0;
    (pFVar1->ChannelMap).ArrayMax = 0;
    TSharedPtr<Audio::ISoundFileReader,1>::
    TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundDataReader>(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  TSharedPtr<Audio::ISoundFileReader,1>::
  TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundDataReader>
            (__return_storage_ptr__,(FSoundDataReader *)0x0);
  return __return_storage_ptr__;
}

// CreateSoundFileReader @ 146550860

TSharedPtr<Audio::ISoundFileReader,1> * __thiscall
Audio::FSoundFileIOManager::CreateSoundFileReader
          (FSoundFileIOManager *this,TSharedPtr<Audio::ISoundFileReader,1> *__return_storage_ptr__)

{
  FSoundFileReader *pFVar1;
  
  if ((this->Impl).Ptr == (FSoundFileIOManagerImpl *)0x0) {
    __return_storage_ptr__->Object = (ISoundFileReader *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pFVar1 = ::operator_new(0x38);
  if (pFVar1 != (FSoundFileReader *)0x0) {
    pFVar1->_padding_ = (longlong)&FSoundFileReader::_vftable__for__Audio__ISoundFileParser__;
    pFVar1->_padding_ = (longlong)&FSoundFileReader::_vftable__for__Audio__ISoundFileReader__;
    (pFVar1->SoundFileData).Object = (ISoundFile *)0x0;
    (pFVar1->SoundFileData).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar1->CurrentIndexBytes = 0;
    pFVar1->FileHandle = (SoundFileHandleOpaque *)0x0;
    (pFVar1->State).Counter = 0;
    (pFVar1->CurrentError).Counter = 0;
    TSharedPtr<Audio::ISoundFileReader,1>::
    TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundFileReader>(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  TSharedPtr<Audio::ISoundFileReader,1>::
  TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundFileReader>
            (__return_storage_ptr__,(FSoundFileReader *)0x0);
  return __return_storage_ptr__;
}

// CreateSoundFileWriter @ 146550960

TSharedPtr<Audio::ISoundFileWriter,1> * __thiscall
Audio::FSoundFileIOManager::CreateSoundFileWriter
          (FSoundFileIOManager *this,TSharedPtr<Audio::ISoundFileWriter,1> *__return_storage_ptr__)

{
  FSoundFileWriter *pFVar1;
  
  if ((this->Impl).Ptr == (FSoundFileIOManagerImpl *)0x0) {
    __return_storage_ptr__->Object = (ISoundFileWriter *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pFVar1 = ::operator_new(0x70);
  if (pFVar1 != (FSoundFileWriter *)0x0) {
    pFVar1->_padding_ = (longlong)&FSoundFileWriter::_vftable__for__Audio__ISoundFileParser__;
    pFVar1->_padding_ = (longlong)&FSoundFileWriter::_vftable__for__Audio__ISoundFileWriter__;
    pFVar1->CurrentIndexBytes = 0;
    pFVar1->FileHandle = (SoundFileHandleOpaque *)0x0;
    (pFVar1->Description).NumFrames = 0;
    (pFVar1->Description).SampleRate = 0;
    (pFVar1->Description).NumChannels = 0;
    (pFVar1->Description).FormatFlags = 0;
    (pFVar1->Description).NumSections = 0;
    (pFVar1->Description).bIsSeekable = 0;
    (pFVar1->ChannelMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->ChannelMap).ArrayNum = 0;
    (pFVar1->ChannelMap).ArrayMax = 0;
    (pFVar1->BulkData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->BulkData).ArrayNum = 0;
    (pFVar1->BulkData).ArrayMax = 0;
    pFVar1->EncodingQuality = 0.0;
    (pFVar1->State).Counter = 0;
    (pFVar1->CurrentError).Counter = 0;
    TSharedPtr<Audio::ISoundFileWriter,1>::
    TSharedPtr<Audio::ISoundFileWriter,1><Audio::FSoundFileWriter>(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  TSharedPtr<Audio::ISoundFileWriter,1>::
  TSharedPtr<Audio::ISoundFileWriter,1><Audio::FSoundFileWriter>
            (__return_storage_ptr__,(FSoundFileWriter *)0x0);
  return __return_storage_ptr__;
}

// GetFileExtensionForFormatFlags @ 146557c20

bool __thiscall
Audio::FSoundFileIOManager::GetFileExtensionForFormatFlags
          (FSoundFileIOManager *this,int param_1,FString *param_2)

{
  if ((this->Impl).Ptr != (FSoundFileIOManagerImpl *)0x0) {
    if (((uint)param_1 >> 0x15 & 1) != 0) {
      ::FString::operator=(param_2,L"ogg");
      return true;
    }
    if (((uint)param_1 >> 0x10 & 1) != 0) {
      ::FString::operator=(param_2,L"wav");
      return true;
    }
    if (((uint)param_1 >> 0x11 & 1) != 0) {
      ::FString::operator=(param_2,L"aiff");
      return true;
    }
    if ((param_1 & 0x170000U) != 0) {
      ::FString::operator=(param_2,L"flac");
      return true;
    }
  }
  return false;
}

// GetSoundFileDescription @ 14655ae80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FSoundFileIOManager::GetSoundFileDescription
          (FSoundFileIOManager *this,FString *param_1,FSoundFileDescription *param_2)

{
  code *pcVar1;
  SoundFileHandleOpaque *pSVar2;
  Type TVar3;
  bool bVar4;
  undefined1 uVar5;
  SoundFileHandleOpaque *local_res8 [4];
  TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->Impl).Ptr == (FSoundFileIOManagerImpl *)0x0) {
    return false;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_res8[0] = (SoundFileHandleOpaque *)0x0;
  TVar3 = GetSoundDesriptionInternal(local_res8,param_1,param_2,&local_18);
  pSVar2 = local_res8[0];
  if (TVar3 == NONE) {
    if (local_res8[0] == (SoundFileHandleOpaque *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileHandle != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                         ,0x6dc,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (SoundFileClose != (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0) {
      (*SoundFileClose)(pSVar2);
      bVar4 = true;
      goto LAB_14655af16;
    }
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  bVar4 = false;
LAB_14655af16:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetSoundFileDescription @ 14655af50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FSoundFileIOManager::GetSoundFileDescription
          (FSoundFileIOManager *this,FString *param_1,FSoundFileDescription *param_2,
          TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  SoundFileHandleOpaque *pSVar2;
  Type TVar3;
  bool bVar4;
  undefined1 uVar5;
  SoundFileHandleOpaque *apSStack_18 [2];
  
  if ((this->Impl).Ptr == (FSoundFileIOManagerImpl *)0x0) {
    return false;
  }
  apSStack_18[0] = (SoundFileHandleOpaque *)0x0;
  TVar3 = GetSoundDesriptionInternal(apSStack_18,param_1,param_2,param_3);
  pSVar2 = apSStack_18[0];
  if (TVar3 == NONE) {
    if (apSStack_18[0] == (SoundFileHandleOpaque *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileHandle != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                         ,0x6dc,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (SoundFileClose != (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0) {
      (*SoundFileClose)(pSVar2);
      return true;
    }
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  return false;
}

// GetSoundFileInfoFromPath @ 14655b0c0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileIOManager::GetSoundFileInfoFromPath
          (FSoundFileIOManager *this,FString *param_1,FSoundFileDescription *param_2,
          TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *param_3)

{
  Type TVar1;
  SoundFileHandleOpaque *local_res8 [4];
  
  if ((this->Impl).Ptr == (FSoundFileIOManagerImpl *)0x0) {
    return UNKNOWN;
  }
  local_res8[0] = (SoundFileHandleOpaque *)0x0;
  TVar1 = GetSoundDesriptionInternal(local_res8,param_1,param_2,param_3);
  if (local_res8[0] != (SoundFileHandleOpaque *)0x0) {
    if (SoundFileClose == (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        return TVar1;
      }
    }
    else {
      (*SoundFileClose)(local_res8[0]);
    }
  }
  return TVar1;
}

// LoadSoundFileFromPath @ 146561ec0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileIOManager::LoadSoundFileFromPath
          (FSoundFileIOManager *this,FString *param_1,FSoundFileDescription *param_2,
          TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  Type TVar1;
  bool bVar2;
  wchar_t *pwVar3;
  SoundFileHandleOpaque *local_res8;
  
  if ((this->Impl).Ptr != (FSoundFileIOManagerImpl *)0x0) {
    local_res8 = (SoundFileHandleOpaque *)0x0;
    TVar1 = GetSoundDesriptionInternal(&local_res8,param_1,param_2,param_3);
    if (local_res8 != (SoundFileHandleOpaque *)0x0) {
      if (SoundFileClose == (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0) {
        if (1 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
      else {
        (*SoundFileClose)(local_res8);
      }
    }
    if (TVar1 == NONE) {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar2 = FFileHelper::LoadFileToArray(param_4,pwVar3,0);
      TVar1 = FAILED_TO_LOAD_BYTE_DATA;
      if (bVar2) {
        TVar1 = NONE;
      }
    }
    return TVar1;
  }
  return UNKNOWN;
}

