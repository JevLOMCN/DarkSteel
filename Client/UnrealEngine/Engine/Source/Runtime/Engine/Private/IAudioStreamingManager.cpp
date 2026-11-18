// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// AddForceInlineSoundWave @ 1476911e0

void __thiscall
IAudioStreamingManager::AddForceInlineSoundWave
          (IAudioStreamingManager *this,TSharedPtr<FSoundWaveProxy,1> *param_1)

{
  return;
}

// AddMemoryCountedFeature @ 147691e30

void __thiscall
IAudioStreamingManager::AddMemoryCountedFeature
          (IAudioStreamingManager *this,FAudioStreamCacheMemoryHandle *param_1)

{
  return;
}

// HandleStarvation @ 1476b7050

void __thiscall
IAudioStreamingManager::HandleStarvation
          (IAudioStreamingManager *this,TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2,
          uint param_3,uint param_4)

{
  return;
}

// RemoveForceInlineSoundWave @ 1476c28e0

void __thiscall
IAudioStreamingManager::RemoveForceInlineSoundWave
          (IAudioStreamingManager *this,TSharedPtr<FSoundWaveProxy,1> *param_1)

{
  return;
}

// RemoveMemoryCountedFeature @ 1476c2e90

void __thiscall
IAudioStreamingManager::RemoveMemoryCountedFeature
          (IAudioStreamingManager *this,FAudioStreamCacheMemoryHandle *param_1)

{
  return;
}

// BuildChunkHandle @ 1479b4d90

FAudioChunkHandle * __cdecl
IAudioStreamingManager::BuildChunkHandle
          (FAudioChunkHandle *__return_storage_ptr__,uchar *param_1,uint param_2,
          TSharedPtr<FSoundWaveProxy,1> *param_3,FName *param_4,uint param_5,ulong64 param_6)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FAudioChunkHandle *pFVar6;
  FStreamingManagerCollection *pFVar7;
  TSharedPtr<FSoundWaveData,1> local_18;
  
  if (param_3->Object == (FSoundWaveProxy *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5579826347649271332>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                       ,0x624,"InSoundWave.IsValid()");
    if (!bVar5) {
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
    pcVar1 = (code *)swi(3);
    pFVar6 = (FAudioChunkHandle *)(*pcVar1)();
    return pFVar6;
  }
  __return_storage_ptr__->CachedData = param_1;
  __return_storage_ptr__->CachedDataNumBytes = param_2;
  __return_storage_ptr__->CorrespondingWaveName = *param_4;
  (__return_storage_ptr__->CorrespondingWaveGuid).A = 0;
  (__return_storage_ptr__->CorrespondingWaveGuid).B = 0;
  (__return_storage_ptr__->CorrespondingWaveGuid).C = 0;
  (__return_storage_ptr__->CorrespondingWaveGuid).D = 0;
  __return_storage_ptr__->ChunkIndex = param_5;
  if (param_3->Object != (FSoundWaveProxy *)0x0) {
    FSoundWaveProxy::GetSoundWaveData(param_3->Object,&local_18);
    if (local_18.Object != (FSoundWaveData *)0x0) {
      if ((local_18.Object == (FSoundWaveData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FAudioChunkHandle *)(*pcVar1)();
        return pFVar6;
      }
      uVar2 = ((local_18.Object)->WaveGuid).B;
      uVar3 = ((local_18.Object)->WaveGuid).C;
      uVar4 = ((local_18.Object)->WaveGuid).D;
      (__return_storage_ptr__->CorrespondingWaveGuid).A = ((local_18.Object)->WaveGuid).A;
      (__return_storage_ptr__->CorrespondingWaveGuid).B = uVar2;
      (__return_storage_ptr__->CorrespondingWaveGuid).C = uVar3;
      (__return_storage_ptr__->CorrespondingWaveGuid).D = uVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (__return_storage_ptr__->CachedData != (uchar *)0x0) {
    pFVar7 = IStreamingManager::Get();
    if ((pFVar7->AudioStreamingManager == (IAudioStreamingManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioStreamingManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                           ,0x40f,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FAudioChunkHandle *)(*pcVar1)();
      return pFVar6;
    }
    (**(code **)(*(longlong *)pFVar7->AudioStreamingManager + 0xe0))
              (pFVar7->AudioStreamingManager,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// LogWarning @ 1479db180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl IAudioStreamingManager::LogWarning(void)

{
  if (2 < (byte)LogContentStreaming._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    return;
  }
  return;
}

