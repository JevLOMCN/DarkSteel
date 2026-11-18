// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioPlatformConfiguration
// Functions: 2

// GetHashSuffix @ 14453a340

void __cdecl
FPlatformAudioCookOverrides::GetHashSuffix(FPlatformAudioCookOverrides *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TArray<float,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1 != (FPlatformAudioCookOverrides *)0x0) {
    ::FString::AppendChars(param_2,L"_",1);
    ::FString::PrintfImpl(&local_68,L"%d");
    ::FString::PrintfImpl(&local_78,L"%s_%s_");
    uVar4 = 0;
    iVar5 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(param_2,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FPlatformCompressionUtilities::AppendHash<bool>(param_2,L"R4DV",&param_1->bResampleForDevice);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    TMapBase<enum_ESoundwaveSampleRateSettings,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>(&param_1->PlatformSampleRates,&local_88);
    if (0 < local_88.ArrayNum) {
      do {
        uVar3 = 0;
        if ((int)uVar4 < local_88.ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::FString::PrintfImpl(&local_38,L"SR%d");
        ::FString::PrintfImpl(&local_48,L"%f");
        ::FString::PrintfImpl(&local_58,L"%s_%s_");
        uVar3 = local_58.Data.ArrayNum - 1;
        if (local_58.Data.ArrayNum == 0) {
          uVar3 = 0;
        }
        ::FString::AppendChars(param_2,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar3);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < local_88.ArrayNum);
    }
    FPlatformCompressionUtilities::AppendHash<float>
              (param_2,L"QMOD",&param_1->CompressionQualityModifier);
    FPlatformCompressionUtilities::AppendHash<int>
              (param_2,L"CQLT",&param_1->SoundCueCookQualityIndex);
    FPlatformCompressionUtilities::AppendHash<float>
              (param_2,L"ASTH",&param_1->AutoStreamingThreshold);
    FPlatformCompressionUtilities::AppendHash<bool>
              (param_2,L"INLC",&param_1->bInlineFirstAudioChunk);
    FPlatformCompressionUtilities::AppendHash<float>
              (param_2,L"LCK1",&param_1->LengthOfFirstAudioChunkInSecs);
    FPlatformCompressionUtilities::AppendHash<int>
              (param_2,L"CSZE",&(param_1->StreamCachingSettings).CacheSizeKB);
    FPlatformCompressionUtilities::AppendHash<bool>
              (param_2,L"LCF",&(param_1->StreamCachingSettings).bForceLegacyStreamChunking);
    FPlatformCompressionUtilities::AppendHash<int>
              (param_2,L"ZCS",
               &(param_1->StreamCachingSettings).ZerothChunkSizeForLegacyStreamChunkingKB);
    FPlatformCompressionUtilities::AppendHash<int>
              (param_2,L"MCSO",&(param_1->StreamCachingSettings).MaxChunkSizeOverrideKB);
    ::FString::AppendChars(param_2,L"END",3);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  return;
}

// GetStreamCachingVersion @ 14453a6b0

int __cdecl FPlatformAudioCookOverrides::GetStreamCachingVersion(void)

{
  return 0x13a4;
}

