// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 16

// ~IMediaPlayer @ 14d78cec0

void __thiscall IMediaPlayer::~IMediaPlayer(IMediaPlayer *this)

{
  *this = (IMediaPlayer)&___7IMediaPlayer__6B_;
  return;
}

// FlushOnSeekCompleted @ 14d7a7ac0

bool __thiscall IMediaPlayer::FlushOnSeekCompleted(IMediaPlayer *this)

{
  return true;
}

// FlushOnSeekStarted @ 14d7a7ad0

bool __thiscall IMediaPlayer::FlushOnSeekStarted(IMediaPlayer *this)

{
  return false;
}

// GetMediaInfo @ 14d7ab880

FVariant * __thiscall
IMediaPlayer::GetMediaInfo(IMediaPlayer *this,FVariant *__return_storage_ptr__,FName param_1)

{
  __return_storage_ptr__->Type = Empty;
  (__return_storage_ptr__->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Value).ArrayNum = 0;
  (__return_storage_ptr__->Value).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetMediaMetadata @ 14d7ab8a0

TSharedPtr<TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>,1>
* __thiscall
IMediaPlayer::GetMediaMetadata
          (IMediaPlayer *this,
          TSharedPtr<TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>,1>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Object =
       (TMap<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TUniquePtr<IMediaMetadataItem,TDefaultDelete<IMediaMetadataItem>_>,TSizedDefaultAllocator<32>_>,0>_>
        *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetMediaName @ 14d7ab8c0

FText * __thiscall IMediaPlayer::GetMediaName(IMediaPlayer *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  FString *pFVar3;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  (**(code **)((longlong)*this + 0x40))(this,&local_28);
  if (local_28.Data.ArrayNum < 2) {
    pFVar2 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar2->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar2->Flags;
  }
  else {
    pFVar3 = FPaths::GetBaseFilename(&local_18,&local_28,true);
    FText::FromString(__return_storage_ptr__,pFVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNewResourcesOnOpen @ 14d7abd20

uint __thiscall IMediaPlayer::GetNewResourcesOnOpen(IMediaPlayer *this)

{
  return 0;
}

// GetPlayerFeatureFlag @ 14d7acc30

bool __thiscall IMediaPlayer::GetPlayerFeatureFlag(IMediaPlayer *this,EFeatureFlag param_1)

{
  return false;
}

// Open @ 14d7b54b0

bool __thiscall
IMediaPlayer::Open(IMediaPlayer *this,FString *param_1,IMediaOptions *param_2,
                  FMediaPlayerOptions *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d7b54b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x60))();
  return (bool)uVar1;
}

// SetAsyncResourceReleaseNotification @ 14d7bb8b0

bool __thiscall
IMediaPlayer::SetAsyncResourceReleaseNotification
          (IMediaPlayer *this,TSharedRef<IMediaPlayer::IAsyncResourceReleaseNotification,1> *param_1
          )

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// SetGuid @ 14d7bc7a0

void __thiscall IMediaPlayer::SetGuid(IMediaPlayer *this,FGuid *param_1)

{
  return;
}

// SetLastAudioRenderedSampleTime @ 14d7bc7c0

void __thiscall IMediaPlayer::SetLastAudioRenderedSampleTime(IMediaPlayer *this,FTimespan param_1)

{
  return;
}

// SetNativeVolume @ 14d7bc830

bool __thiscall IMediaPlayer::SetNativeVolume(IMediaPlayer *this,float param_1)

{
  return false;
}

// TickAudio @ 14d7bf9c0

void __thiscall IMediaPlayer::TickAudio(IMediaPlayer *this)

{
  return;
}

// TickFetch @ 14d7bfab0

void __thiscall IMediaPlayer::TickFetch(IMediaPlayer *this,FTimespan param_1,FTimespan param_2)

{
  return;
}

// TickInput @ 14d7bfac0

void __thiscall IMediaPlayer::TickInput(IMediaPlayer *this,FTimespan param_1,FTimespan param_2)

{
  return;
}

