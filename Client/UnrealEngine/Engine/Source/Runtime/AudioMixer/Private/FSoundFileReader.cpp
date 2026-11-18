// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 17

// GetDescription @ 146557480

Type __thiscall
Audio::FSoundFileReader::GetDescription
          (FSoundFileReader *this,FSoundFileDescription *param_1,
          TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x38))((longlong *)this->_padding_,param_1);
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x40))((longlong *)this->_padding_,param_2);
  return NONE;
}

// GetLengthBytes @ 146558b30

Type __thiscall Audio::FSoundFileReader::GetLengthBytes(FSoundFileReader *this,long64 *param_1)

{
  ISoundFile *pIVar1;
  Type TVar2;
  int local_res8 [8];
  
  pIVar1 = (this->SoundFileData).Object;
  if (pIVar1 == (ISoundFile *)0x0) {
    return INVALID_DATA;
  }
  TVar2 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,local_res8);
  if (TVar2 == NONE) {
    *param_1 = (longlong)local_res8[0];
    TVar2 = NONE;
  }
  return TVar2;
}

// GetOffsetBytes @ 1465595a0

Type __thiscall Audio::FSoundFileReader::GetOffsetBytes(FSoundFileReader *this,long64 *param_1)

{
  *param_1 = this->CurrentIndexBytes;
  return NONE;
}

// GetOptionalChunks @ 1465595d0

Type __thiscall
Audio::FSoundFileReader::GetOptionalChunks
          (FSoundFileReader *this,
          TArray<Audio::FSoundFileChunkInfoWrapper,TSizedDefaultAllocator<32>_> *param_1,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_2)

{
  Type TVar1;
  
  TVar1 = GetOptionalChunksInternal
                    ((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  return TVar1;
}

// Init @ 14655d070

Type __thiscall
Audio::FSoundFileReader::Init
          (FSoundFileReader *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  return NONE;
}

// Init @ 14655d080

Type __thiscall
Audio::FSoundFileReader::Init
          (FSoundFileReader *this,TSharedPtr<Audio::ISoundFile,1> *param_1,bool param_2)

{
  Type TVar1;
  TSharedPtr<Audio::ISoundFile,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (param_2) {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TVar1 = InitStreamed((FSoundFileReader *)&this[-1].State,&local_18);
  }
  else {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TVar1 = InitLoaded((FSoundFileReader *)&this[-1].State,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return TVar1;
}

// InitLoaded @ 14655f5f0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileReader::InitLoaded(FSoundFileReader *this,TSharedPtr<Audio::ISoundFile,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  int iVar5;
  ISoundFile *pIVar6;
  SoundFileHandleOpaque *pSVar7;
  char *pcVar8;
  char local_res8 [8];
  int local_res18 [2];
  FString local_88;
  ISoundFile *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FSoundFileDescription local_68;
  FVirtualSoundFileCallbackInfo local_48;
  
  if (((this->State).Counter != 0) && ((this->State).Counter != 2)) {
    LOCK();
    (this->State).Counter = 6;
    UNLOCK();
    LOCK();
    (this->CurrentError).Counter = 0xd;
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return ALREADY_INITIALIZED;
  }
  if ((param_1->Object == (ISoundFile *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSoundFileData.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                         ,0x36d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4 = (*pcVar2)();
    return TVar4;
  }
  if ((this->FileHandle != (SoundFileHandleOpaque *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileHandle == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                         ,0x36e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4 = (*pcVar2)();
    return TVar4;
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar6 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (this->SoundFileData).Object;
  pTStack_70 = (this->SoundFileData).SharedReferenceCount.ReferenceController;
  (this->SoundFileData).Object = pIVar6;
  (this->SoundFileData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  if ((this->SoundFileData).Object == (ISoundFile *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundFileData.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                       ,0x372,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
    if (((this->SoundFileData).Object == (ISoundFile *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  pIVar6 = (this->SoundFileData).Object;
  TVar4 = (**(code **)((longlong)*pIVar6 + 0x48))(pIVar6,local_res8);
  if (TVar4 == NONE) {
    if (local_res8[0] != '\0') {
LAB_14655f8da:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return INVALID_DATA;
    }
    pIVar6 = TSharedPtr<Audio::ISoundFile,1>::operator->(&this->SoundFileData);
    TVar4 = (**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_res18);
    if (TVar4 == NONE) {
      if (local_res18[0] == 3) {
        local_48.VirtualSoundFileGetLength = OnSoundFileGetLengthBytes;
        local_68.NumFrames = 0;
        local_48.VirtualSoundFileSeek = OnSoundFileSeekBytes;
        local_68.bIsSeekable = 0;
        local_48.VirtualSoundFileRead = OnSoundFileReadBytes;
        local_48.VirtualSoundFileWrite = OnSoundFileWriteBytes;
        local_48.VirtualSoundFileTell = OnSoundFileTell;
        local_68.SampleRate = 0;
        local_68.NumChannels = 0;
        local_68.FormatFlags = 0;
        local_68.NumSections = 0;
        pIVar6 = TSharedPtr<Audio::ISoundFile,1>::operator->(&this->SoundFileData);
        (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,&local_68);
        if (SoundFileFormatCheck != (_func___cdecl_int_FSoundFileDescription_ptr *)0x0) {
          iVar5 = (*SoundFileFormatCheck)(&local_68);
          if (iVar5 == 0) {
            LOCK();
            (this->State).Counter = 6;
            UNLOCK();
            LOCK();
            (this->CurrentError).Counter = 9;
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((param_1->SharedReferenceCount).ReferenceController);
            return INVALID_INPUT_FORMAT;
          }
          if (SoundFileOpenVirtual ==
              (_func___cdecl_SoundFileHandleOpaque_ptr_FVirtualSoundFileCallbackInfo_ptr_int_FSoundFileDescription_ptr_void_ptr
               *)0x0) {
            if (1 < (byte)LogAudioMixer._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`private:_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::InitLoaded(TSharedPtr<Audio::ISoundFile,1>)___ptr64'
                          ::__l66::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            }
            this->FileHandle = (SoundFileHandleOpaque *)0x0;
          }
          else {
            pSVar7 = (*SoundFileOpenVirtual)(&local_48,0x10,&local_68,this);
            this->FileHandle = pSVar7;
            if (pSVar7 != (SoundFileHandleOpaque *)0x0) {
              LOCK();
              (this->State).Counter = 1;
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((param_1->SharedReferenceCount).ReferenceController);
              return NONE;
            }
          }
          if (SoundFileStrError != (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0) {
            pcVar8 = (*SoundFileStrError)((SoundFileHandleOpaque *)0x0);
            ::FString::FString(&local_88,pcVar8);
            if (1 < (byte)LogAudioMixer._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`private:_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::InitLoaded(TSharedPtr<Audio::ISoundFile,1>)___ptr64'
                          ::__l92::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            }
            LOCK();
            (this->State).Counter = 6;
            UNLOCK();
            LOCK();
            (this->CurrentError).Counter = 0xb;
            UNLOCK();
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((param_1->SharedReferenceCount).ReferenceController);
            return FAILED_TO_OPEN;
          }
          LOCK();
          (this->State).Counter = 6;
          UNLOCK();
          LOCK();
          (this->CurrentError).Counter = 7;
          UNLOCK();
          goto LAB_14655f8da;
        }
        if (1 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::InitLoaded(TSharedPtr<Audio::ISoundFile,1>)___ptr64'
                      ::__l42::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
        LOCK();
        (this->State).Counter = 6;
        UNLOCK();
        LOCK();
        (this->CurrentError).Counter = 0xf;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return INVALID_STATE;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return TVar4;
}

// InitStreamed @ 14655f9e0

Type __thiscall
Audio::FSoundFileReader::InitStreamed
          (FSoundFileReader *this,TSharedPtr<Audio::ISoundFile,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  ISoundFile *pIVar5;
  char local_res8 [8];
  int local_res18 [2];
  FName local_res20;
  TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  ISoundFile *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FSoundFileDescription local_48;
  
  if (((this->State).Counter != 0) && ((this->State).Counter != 2)) {
    LOCK();
    (this->State).Counter = 6;
    UNLOCK();
    LOCK();
    (this->CurrentError).Counter = 0xd;
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return ALREADY_INITIALIZED;
  }
  if ((param_1->Object == (ISoundFile *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSoundFileData.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                         ,0x3c3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4 = (*pcVar2)();
    return TVar4;
  }
  if ((this->FileHandle != (SoundFileHandleOpaque *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileHandle == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                         ,0x3c4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4 = (*pcVar2)();
    return TVar4;
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar5 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = (this->SoundFileData).Object;
  pTStack_50 = (this->SoundFileData).SharedReferenceCount.ReferenceController;
  (this->SoundFileData).Object = pIVar5;
  (this->SoundFileData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  if ((this->SoundFileData).Object == (ISoundFile *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundFileData.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                       ,0x3c8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
    if (((this->SoundFileData).Object == (ISoundFile *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  pIVar5 = (this->SoundFileData).Object;
  TVar4 = (**(code **)((longlong)*pIVar5 + 0x48))(pIVar5,local_res8);
  if (TVar4 == NONE) {
    if (local_res8[0] == '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return INVALID_DATA;
    }
    pIVar5 = TSharedPtr<Audio::ISoundFile,1>::operator->(&this->SoundFileData);
    TVar4 = (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res18);
    if (TVar4 == NONE) {
      if (local_res18[0] != 4) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return INVALID_STATE;
      }
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
      pIVar5 = TSharedPtr<Audio::ISoundFile,1>::operator->(&this->SoundFileData);
      TVar4 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,&local_res20);
      if (TVar4 == NONE) {
        ::FName::GetPlainNameString(&local_res20,&local_68);
        local_48.NumFrames = 0;
        local_48.bIsSeekable = 0;
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0;
        local_48.SampleRate = 0;
        local_48.NumChannels = 0;
        local_48.FormatFlags = 0;
        local_48.NumSections = 0;
        TVar4 = GetSoundDesriptionInternal(&this->FileHandle,&local_68,&local_48,&local_78);
        if (TVar4 == NONE) {
          LOCK();
          (this->State).Counter = 4;
          UNLOCK();
          if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->SharedReferenceCount).ReferenceController);
          return NONE;
        }
        LOCK();
        (this->State).Counter = 6;
        UNLOCK();
        LOCK();
        (this->CurrentError).Counter = (uint)TVar4;
        UNLOCK();
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return TVar4;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return TVar4;
}

// ReadBytes @ 14656ab10

Type __thiscall
Audio::FSoundFileReader::ReadBytes
          (FSoundFileReader *this,void *param_1,long64 param_2,long64 *param_3)

{
  uint uVar1;
  ISoundFile *pIVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  Type TVar6;
  bool bVar7;
  uint uVar8;
  int local_res8 [2];
  longlong *local_38 [2];
  
  pIVar2 = (this->SoundFileData).Object;
  if (pIVar2 == (ISoundFile *)0x0) {
    return INVALID_DATA;
  }
  lVar3 = this->CurrentIndexBytes;
  TVar6 = (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,local_res8);
  if (TVar6 == NONE) {
    if ((longlong)local_res8[0] <= lVar3 + param_2) {
      param_2 = (longlong)local_res8[0] - this->CurrentIndexBytes;
    }
    if (0 < param_2) {
      local_38[0] = (longlong *)0x0;
      if (((this->SoundFileData).Object == (ISoundFile *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar6 = (*pcVar4)();
        return TVar6;
      }
      pIVar2 = (this->SoundFileData).Object;
      TVar6 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,local_38);
      if (TVar6 != NONE) {
        return TVar6;
      }
      if ((local_38[0] == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("BulkData != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                             ,0x2d8,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar6 = (*pcVar4)();
        return TVar6;
      }
      plVar5 = local_38[0];
      uVar1 = (uint)this->CurrentIndexBytes;
      uVar8 = 0;
      if ((int)uVar1 < (int)local_38[0][1]) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        TVar6 = (*pcVar4)();
        return TVar6;
      }
      memcpy(param_1,(void *)((longlong)(int)uVar1 + *plVar5),param_2);
      this->CurrentIndexBytes = this->CurrentIndexBytes + param_2;
    }
    *param_3 = param_2;
    TVar6 = NONE;
  }
  return TVar6;
}

// ReadFrames @ 14656ad70

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileReader::ReadFrames
          (FSoundFileReader *this,float *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileReadFramesFloat ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::ReadFrames(float*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileReadFramesFloat)
                    ((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// ReadFrames @ 14656adc0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileReader::ReadFrames
          (FSoundFileReader *this,double *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileReadFramesDouble ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::ReadFrames(double*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileReadFramesDouble)
                    ((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// ReadSamples @ 14656aeb0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileReader::ReadSamples
          (FSoundFileReader *this,float *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileReadSamplesFloat ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_float_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::ReadSamples(float*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileReadSamplesFloat)
                    ((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// ReadSamples @ 14656af00

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileReader::ReadSamples
          (FSoundFileReader *this,double *param_1,long64 param_2,long64 *param_3)

{
  long64 lVar1;
  
  if (SoundFileReadSamplesDouble ==
      (_func___cdecl_long64_SoundFileHandleOpaque_ptr_double_ptr_long64 *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::ReadSamples(double*___ptr64,__int64,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileReadSamplesDouble)
                    ((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  *param_3 = lVar1;
  return NONE;
}

// Release @ 14656c550

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall Audio::FSoundFileReader::Release(FSoundFileReader *this)

{
  if (SoundFileClose == (_func___cdecl_int_SoundFileHandleOpaque_ptr *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::Release(void)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    this->CurrentIndexBytes = 0;
    return INVALID_STATE;
  }
  if ((SoundFileHandleOpaque *)this->CurrentIndexBytes != (SoundFileHandleOpaque *)0x0) {
    (*SoundFileClose)((SoundFileHandleOpaque *)this->CurrentIndexBytes);
    this->CurrentIndexBytes = 0;
  }
  return NONE;
}

// SeekBytes @ 146571730

Type __thiscall
Audio::FSoundFileReader::SeekBytes
          (FSoundFileReader *this,long64 param_1,Type param_2,long64 *param_3)

{
  ISoundFile *pIVar1;
  code *pcVar2;
  Type TVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  
  pIVar1 = (this->SoundFileData).Object;
  if (pIVar1 == (ISoundFile *)0x0) {
    return INVALID_DATA;
  }
  TVar3 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,local_res8);
  if (TVar3 == NONE) {
    lVar6 = (longlong)local_res8[0];
    if (lVar6 == 0) {
      *param_3 = 0;
      this->CurrentIndexBytes = 0;
    }
    else {
      if (param_2 == FROM_START) {
        this->CurrentIndexBytes = param_1;
      }
      else if (param_2 == FROM_CURRENT) {
        this->CurrentIndexBytes = this->CurrentIndexBytes + param_1;
      }
      else if (param_2 == FROM_END) {
        this->CurrentIndexBytes = lVar6 + param_1;
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                           ,0x2a7,L"Uknown seek mode!");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          TVar3 = (*pcVar2)();
          return TVar3;
        }
      }
      lVar5 = this->CurrentIndexBytes;
      if (lVar5 < 0) {
        do {
          lVar5 = lVar5 + lVar6;
        } while (lVar5 < 0);
        this->CurrentIndexBytes = lVar5;
      }
      if (lVar6 < lVar5) {
        do {
          lVar5 = lVar5 - lVar6;
        } while (lVar6 < lVar5);
        this->CurrentIndexBytes = lVar5;
      }
      *param_3 = lVar5;
    }
    TVar3 = NONE;
  }
  return TVar3;
}

// SeekFrames @ 1465719b0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
Audio::FSoundFileReader::SeekFrames
          (FSoundFileReader *this,long64 param_1,Type param_2,long64 *param_3)

{
  long64 lVar1;
  char *pcVar2;
  FString local_18;
  
  if (SoundFileSeek == (_func___cdecl_long64_SoundFileHandleOpaque_ptr_long64_int *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::SeekFrames(__int64,Audio::ESoundFileSeekMode::Type,__int64&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    return INVALID_STATE;
  }
  lVar1 = (*SoundFileSeek)((SoundFileHandleOpaque *)this->CurrentIndexBytes,param_1,param_2);
  if (lVar1 == -1) {
    if (SoundFileStrError == (_func___cdecl_char_ptr_SoundFileHandleOpaque_ptr *)0x0) {
      LOCK();
      *(undefined4 *)&this->FileHandle = 6;
      UNLOCK();
      LOCK();
      *(undefined4 *)((longlong)&this->FileHandle + 4) = 0xf;
      UNLOCK();
      return INVALID_STATE;
    }
    pcVar2 = (*SoundFileStrError)((SoundFileHandleOpaque *)this->CurrentIndexBytes);
    ::FString::FString(&local_18,pcVar2);
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_enum_Audio::ESoundFileError::Type___cdecl_Audio::FSoundFileReader::SeekFrames(__int64,Audio::ESoundFileSeekMode::Type,__int64&___ptr64)___ptr64'
                  ::__l30::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    LOCK();
    *(undefined4 *)&this->FileHandle = 6;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)&this->FileHandle + 4) = 0xc;
    UNLOCK();
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return FAILED_TO_SEEK;
  }
  return NONE;
}

// WriteBytes @ 14657d560

Type __thiscall
Audio::FSoundFileReader::WriteBytes
          (FSoundFileReader *this,void *param_1,long64 param_2,long64 *param_3)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundFileIO\\SoundFileIOManagerImpl.cpp"
                     ,0x2e4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3 = (*pcVar1)();
    return TVar3;
  }
  return NONE;
}

