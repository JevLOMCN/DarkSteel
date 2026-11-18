// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 1

// GetPlatformSettings @ 144527950

FAudioPlatformSettings * __cdecl
FAudioPlatformSettings::GetPlatformSettings
          (FAudioPlatformSettings *__return_storage_ptr__,wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FString local_18;
  
  __return_storage_ptr__->SampleRate = 48000;
  __return_storage_ptr__->NumSourceWorkers = 0;
  __return_storage_ptr__->CallbackBufferFrameSize = 0x400;
  __return_storage_ptr__->NumBuffers = 2;
  __return_storage_ptr__->MaxChannels = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString(GConfig,param_1,L"AudioSampleRate",&local_18,&GEngineIni);
  if (bVar1) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)FVar4.Data);
    iVar3 = 8000;
    if (8000 < iVar2) {
      iVar3 = iVar2;
    }
    __return_storage_ptr__->SampleRate = iVar3;
  }
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,param_1,L"AudioCallbackBufferFrameSize",&local_18,&GEngineIni);
  if (bVar1) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)FVar4.Data);
    iVar3 = 0xf0;
    if (0xf0 < iVar2) {
      iVar3 = iVar2;
    }
    __return_storage_ptr__->CallbackBufferFrameSize = iVar3;
  }
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,param_1,L"AudioNumBuffersToEnqueue",&local_18,&GEngineIni);
  if (bVar1) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)FVar4.Data);
    iVar3 = 1;
    if (1 < iVar2) {
      iVar3 = iVar2;
    }
    __return_storage_ptr__->NumBuffers = iVar3;
  }
  bVar1 = FConfigCacheIni::GetString(GConfig,param_1,L"AudioMaxChannels",&local_18,&GEngineIni);
  if (bVar1) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)FVar4.Data);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    __return_storage_ptr__->MaxChannels = iVar3;
  }
  bVar1 = FConfigCacheIni::GetString(GConfig,param_1,L"AudioNumSourceWorkers",&local_18,&GEngineIni)
  ;
  if (bVar1) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)FVar4.Data);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    __return_storage_ptr__->NumSourceWorkers = iVar3;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

