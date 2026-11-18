// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// AddLevel @ 1479ae9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDummyAudioStreamingManager::AddLevel(FDummyAudioStreamingManager *this,ULevel *param_1)

{
  return;
}

// AddMemoryCountedFeature @ 1479aea90

void __thiscall
FDummyAudioStreamingManager::AddMemoryCountedFeature
          (FDummyAudioStreamingManager *this,FAudioStreamCacheMemoryHandle *param_1)

{
  return;
}

// AddReferenceToChunk @ 1479af8f0

void __thiscall
FDummyAudioStreamingManager::AddReferenceToChunk
          (FDummyAudioStreamingManager *this,FAudioChunkHandle *param_1)

{
  return;
}

// BlockTillAllRequestsFinished @ 1479b4900

int __thiscall
FDummyAudioStreamingManager::BlockTillAllRequestsFinished
          (FDummyAudioStreamingManager *this,float param_1,bool param_2)

{
  return 0;
}

// CancelForcedResources @ 1479b7b40

void __thiscall
FDummyAudioStreamingManager::CancelForcedResources(FDummyAudioStreamingManager *this)

{
  return;
}

// GenerateMemoryReport @ 1479c21b0

FString * __thiscall
FDummyAudioStreamingManager::GenerateMemoryReport
          (FDummyAudioStreamingManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetLoadedChunk @ 1479ca9b0

FAudioChunkHandle * __thiscall
FDummyAudioStreamingManager::GetLoadedChunk
          (FDummyAudioStreamingManager *this,FAudioChunkHandle *__return_storage_ptr__,
          TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2,bool param_3,bool param_4)

{
  __return_storage_ptr__->ChunkIndex = -1;
  __return_storage_ptr__->CachedData = (uchar *)0x0;
  __return_storage_ptr__->CachedDataNumBytes = 0;
  (__return_storage_ptr__->CorrespondingWaveName).ComparisonIndex = 0;
  *(undefined8 *)&(__return_storage_ptr__->CorrespondingWaveName).Number = 0;
  (__return_storage_ptr__->CorrespondingWaveGuid).B = 0;
  (__return_storage_ptr__->CorrespondingWaveGuid).C = 0;
  (__return_storage_ptr__->CorrespondingWaveGuid).D = 0;
  return __return_storage_ptr__;
}

// NotifyLevelChange @ 1479db350

void __thiscall FDummyAudioStreamingManager::NotifyLevelChange(FDummyAudioStreamingManager *this)

{
  return;
}

// NotifyLevelOffset @ 1479db400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDummyAudioStreamingManager::NotifyLevelOffset
          (FDummyAudioStreamingManager *this,ULevel *param_1,TVector<double> *param_2)

{
  return;
}

// RemoveLevel @ 1479e3d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDummyAudioStreamingManager::RemoveLevel(FDummyAudioStreamingManager *this,ULevel *param_1)

{
  return;
}

// RemoveMemoryCountedFeature @ 1479e3dd0

void __thiscall
FDummyAudioStreamingManager::RemoveMemoryCountedFeature
          (FDummyAudioStreamingManager *this,FAudioStreamCacheMemoryHandle *param_1)

{
  return;
}

// RemoveReferenceToChunk @ 1479e41b0

void __thiscall
FDummyAudioStreamingManager::RemoveReferenceToChunk
          (FDummyAudioStreamingManager *this,FAudioChunkHandle *param_1)

{
  return;
}

// RenderStatAudioStreaming @ 1479e4aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FDummyAudioStreamingManager::RenderStatAudioStreaming
          (FDummyAudioStreamingManager *this,UWorld *param_1,FViewport *param_2,FCanvas *param_3,
          int param_4,int param_5,TVector<double> *param_6,TRotator<double> *param_7)

{
  return 0;
}

// RequestChunk @ 1479e4bc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDummyAudioStreamingManager::RequestChunk
          (FDummyAudioStreamingManager *this,TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2,
          TFunction<void___cdecl(EAudioChunkLoadResult)> *param_3,Type param_4,bool param_5)

{
  longlong *plVar1;
  
  if (*(longlong *)param_3 != 0) {
    plVar1 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return false;
}

// SetDisregardWorldResourcesForFrames @ 1479e7c20

void __thiscall
FDummyAudioStreamingManager::SetDisregardWorldResourcesForFrames
          (FDummyAudioStreamingManager *this,int param_1)

{
  return;
}

// SetProfilingMode @ 1479e9f60

void __thiscall
FDummyAudioStreamingManager::SetProfilingMode(FDummyAudioStreamingManager *this,bool param_1)

{
  return;
}

// TrimMemory @ 1479ef950

ulong64 __thiscall
FDummyAudioStreamingManager::TrimMemory(FDummyAudioStreamingManager *this,ulong64 param_1)

{
  return 0;
}

// UpdateResourceStreaming @ 1479f2bd0

void __thiscall
FDummyAudioStreamingManager::UpdateResourceStreaming
          (FDummyAudioStreamingManager *this,float param_1,bool param_2)

{
  return;
}

