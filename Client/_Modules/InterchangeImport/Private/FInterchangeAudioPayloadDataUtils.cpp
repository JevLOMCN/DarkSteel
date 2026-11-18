// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// GetAudioPayloadFromSourceFileKey @ 14e69c940

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Interchange::FInterchangeAudioPayloadData> * __cdecl
FInterchangeAudioPayloadDataUtils::GetAudioPayloadFromSourceFileKey
          (TOptional<UE::Interchange::FInterchangeAudioPayloadData> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  TPimplPtr<FSoundWaveTimecodeInfo,1> TVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  TOptional<UE::Interchange::FInterchangeAudioPayloadData> *pTVar7;
  FString *pFVar8;
  FStaticBasicLogRecord *pFVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_288;
  FString local_278;
  FWaveModInfo local_268;
  FInterchangeAudioPayloadData local_1d8;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  uint *local_b0;
  uint *local_a8;
  ushort *local_a0;
  ushort *local_98;
  ushort *local_90;
  ushort *local_88;
  uint *local_80;
  uint *local_78;
  uchar *local_70;
  uchar *local_68;
  uint local_60;
  uchar *local_58;
  uint local_50;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_108,pwVar11);
  bVar4 = FPaths::FileExists(&local_108);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    if (1 < (byte)LogInterchangeImport._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
    }
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar5 = FFileHelper::LoadFileToArray(&local_288,pwVar11,0);
  bVar4 = false;
  if (bVar5) {
    if (local_288.ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TOptional<UE::Interchange::FInterchangeAudioPayloadData> *)(*pcVar1)();
        return pTVar7;
      }
    }
    iVar6 = (int)((longlong)local_288.ArrayNum + -1);
    if (((longlong)local_288.ArrayNum + -1 == (longlong)iVar6) && (-1 < iVar6)) {
      local_1d8.FactoryInfo.SamplesPerSec = 0;
      local_1d8.FactoryInfo.ChannelCount = 0;
      local_1d8.FactoryInfo.SizeOfSample = 0;
      local_1d8.FactoryInfo.NumSamples = 0;
      local_1d8.FactoryInfo.NumFrames = 0;
      local_1d8.WaveModInfo.TimecodeInfo = (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0;
      local_1d8.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.FactoryInfo.SampleDataOffset = -1;
      local_1d8.WaveModInfo.WaveCues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.WaveModInfo.WaveCues.ArrayNum = 0;
      local_1d8.WaveModInfo.WaveCues.ArrayMax = 0;
      local_1d8.WaveModInfo.WaveSampleLoops.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.WaveModInfo.WaveSampleLoops.ArrayNum = 0;
      local_1d8.WaveModInfo.WaveSampleLoops.ArrayMax = 0;
      local_1d8.Buffer.ArrayNum = 0;
      local_1d8.Buffer.ArrayMax = 0;
      local_268.WaveCues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268.WaveCues.ArrayNum = 0;
      local_268.WaveCues.ArrayMax = 0;
      local_268.WaveSampleLoops.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268.WaveSampleLoops.ArrayNum = 0;
      local_268.WaveSampleLoops.ArrayMax = 0;
      local_268.TimecodeInfo = (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0;
      local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.Data.ArrayNum = 0;
      local_278.Data.ArrayMax = 0;
      pFVar8 = ::FString::ToLower(param_1,&local_d8);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_f8,pwVar11);
      pFVar8 = FPaths::GetExtension(&local_e8,&local_f8,false);
      ::FString::FString(&local_118,L"wav");
      iVar6 = (pFVar8->Data).ArrayNum;
      if (iVar6 == local_118.Data.ArrayNum) {
        if (1 < iVar6) {
          iVar6 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                         (wchar_t *)local_118.Data.AllocatorInstance.Data);
          bVar4 = iVar6 != 0;
        }
      }
      else {
        bVar4 = iVar6 + local_118.Data.ArrayNum != 1;
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      bVar5 = FWaveModInfo::ReadWaveInfo
                        (&local_268,(uchar *)local_288.AllocatorInstance.Data,local_288.ArrayNum,
                         &local_278,false,(void **)0x0);
      if (bVar4) goto LAB_14e69ce3c;
      if (bVar5) {
        if ((*local_268.pBitsPerSample != 0x10) ||
           (bVar4 = FWaveModInfo::IsFormatSupported(&local_268), !bVar4)) {
LAB_14e69ce3c:
          FWaveModInfo::ReportImportFailure(&local_268);
          goto LAB_14e69cc22;
        }
        if (local_1d8.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Buffer.AllocatorInstance.Data);
        }
        local_1d8.Buffer.AllocatorInstance.Data = local_288.AllocatorInstance.Data;
        local_1d8.Buffer.ArrayNum = local_288.ArrayNum;
        local_1d8.Buffer.ArrayMax = local_288.ArrayMax;
        local_268.pSamplesPerSec = local_b0;
        local_268.pAvgBytesPerSec = local_a8;
        local_268.pBlockAlign = local_a0;
        local_268.pBitsPerSample = local_98;
        local_268.pChannels = local_90;
        local_268.pFormatTag = local_88;
        local_268.pWaveDataSize = local_80;
        local_268.pMasterSize = local_78;
        local_268.SampleDataStart = local_70;
        local_268.SampleDataEnd = local_68;
        local_268.SampleDataSize = local_60;
        local_268.WaveDataEnd = local_58;
        local_268.NewDataSize = local_50;
        local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.ArrayNum = 0;
        local_288.ArrayMax = 0;
        DestructItems<FWaveCue,int>
                  ((FWaveCue *)local_268.WaveCues.AllocatorInstance.Data,local_268.WaveCues.ArrayNum
                  );
        if ((FWaveCue *)local_268.WaveCues.AllocatorInstance.Data != (FWaveCue *)0x0) {
          FMemory::Free(local_268.WaveCues.AllocatorInstance.Data);
        }
        local_268.WaveCues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_268.WaveCues.ArrayNum = 0;
        local_268.WaveCues.ArrayMax = 0;
        if (local_268.WaveSampleLoops.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.WaveSampleLoops.AllocatorInstance.Data);
        }
        TVar3 = local_268.TimecodeInfo;
        local_268.WaveSampleLoops.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_268.WaveSampleLoops.ArrayNum = 0;
        local_268.WaveSampleLoops.ArrayMax = 0;
        local_268.TimecodeInfo = (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0;
        if (TVar3 != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
          (**(code **)((longlong)TVar3 + -0x10))();
        }
        DestructItems<FWaveCue,int>((FWaveCue *)0x0,0);
        bVar4 = FWaveModInfo::ReadWaveInfo
                          (&local_268,(uchar *)local_1d8.Buffer.AllocatorInstance.Data,
                           local_1d8.Buffer.ArrayNum,&local_278,false,(void **)0x0);
        if (!bVar4) goto LAB_14e69ce3c;
        if ((*local_268.pBitsPerSample != 0x10) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("*WaveInfo.pBitsPerSample == 16",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioPayloadData.cpp"
                               ,0x7b,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TOptional<UE::Interchange::FInterchangeAudioPayloadData> *)(*pcVar1)();
          return pTVar7;
        }
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_b4 = 0xffffffff;
        local_1d8.FactoryInfo.ChannelCount = (uint)*local_268.pChannels;
        if ((*local_268.pChannels == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("AudioPayloadData.FactoryInfo.ChannelCount > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioPayloadData.cpp"
                               ,0x7e,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TOptional<UE::Interchange::FInterchangeAudioPayloadData> *)(*pcVar1)();
          return pTVar7;
        }
        local_1d8.FactoryInfo.SizeOfSample._0_2_ = *local_268.pBitsPerSample >> 3;
        local_1d8.FactoryInfo.SizeOfSample._2_2_ = 0;
        local_1d8.FactoryInfo.NumSamples =
             local_268.SampleDataSize / (*local_268.pBitsPerSample >> 3);
        local_1d8.FactoryInfo.SamplesPerSec = *local_268.pSamplesPerSec;
        local_1d8.FactoryInfo.SampleDataOffset =
             (int)((longlong)local_268.SampleDataStart -
                   (longlong)local_1d8.Buffer.AllocatorInstance.Data >> 1);
        if ((local_1d8.FactoryInfo.SampleDataOffset < 1) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<325602286753546372>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Audio\\InterchangeAudioPayloadData.cpp"
                               ,0x84,"AudioPayloadData.FactoryInfo.SampleDataOffset > 0"), bVar4)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TOptional<UE::Interchange::FInterchangeAudioPayloadData> *)(*pcVar1)();
          return pTVar7;
        }
        local_1d8.FactoryInfo.NumFrames =
             local_1d8.FactoryInfo.NumSamples / local_1d8.FactoryInfo.ChannelCount;
        local_1d8.WaveModInfo.pSamplesPerSec = local_268.pSamplesPerSec;
        local_1d8.WaveModInfo.pAvgBytesPerSec = local_268.pAvgBytesPerSec;
        local_1d8.WaveModInfo.pBlockAlign = local_268.pBlockAlign;
        local_1d8.WaveModInfo.pBitsPerSample = local_268.pBitsPerSample;
        local_1d8.WaveModInfo.pChannels = local_268.pChannels;
        local_1d8.WaveModInfo.pFormatTag = local_268.pFormatTag;
        local_1d8.WaveModInfo.pWaveDataSize = local_268.pWaveDataSize;
        local_1d8.WaveModInfo.pMasterSize = local_268.pMasterSize;
        local_1d8.WaveModInfo.SampleDataStart = local_268.SampleDataStart;
        local_1d8.WaveModInfo.SampleDataEnd = local_268.SampleDataEnd;
        local_1d8.WaveModInfo.SampleDataSize = local_268.SampleDataSize;
        local_1d8.WaveModInfo.WaveDataEnd = local_268.WaveDataEnd;
        local_1d8.WaveModInfo.NewDataSize = local_268.NewDataSize;
        DestructItems<FWaveCue,int>
                  ((FWaveCue *)local_1d8.WaveModInfo.WaveCues.AllocatorInstance.Data,
                   local_1d8.WaveModInfo.WaveCues.ArrayNum);
        FVar2.Data = local_268.WaveCues.AllocatorInstance.Data;
        iVar6 = local_268.WaveCues.ArrayNum;
        local_1d8.WaveModInfo.WaveCues.ArrayNum = local_268.WaveCues.ArrayNum;
        if ((local_268.WaveCues.ArrayNum != 0) || (local_1d8.WaveModInfo.WaveCues.ArrayMax != 0)) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,local_268.WaveCues.ArrayNum,local_1d8.WaveModInfo.WaveCues.ArrayMax,
                     &local_1d8.WaveModInfo.WaveCues.AllocatorInstance,local_268.WaveCues.ArrayNum,
                     &local_1d8.WaveModInfo.WaveCues.ArrayMax);
          ConstructItems<FWaveCue,FWaveCue,int>
                    (local_1d8.WaveModInfo.WaveCues.AllocatorInstance.Data,(FWaveCue *)FVar2.Data,
                     iVar6);
        }
        FVar2.Data = local_268.WaveSampleLoops.AllocatorInstance.Data;
        iVar6 = local_268.WaveSampleLoops.ArrayNum;
        lVar12 = (longlong)local_268.WaveSampleLoops.ArrayNum;
        local_1d8.WaveModInfo.WaveSampleLoops.ArrayNum = local_268.WaveSampleLoops.ArrayNum;
        if ((local_268.WaveSampleLoops.ArrayNum == 0) &&
           (local_1d8.WaveModInfo.WaveSampleLoops.ArrayMax == 0)) {
          local_1d8.WaveModInfo.WaveSampleLoops._8_8_ = local_268.WaveSampleLoops._8_8_ & 0xffffffff
          ;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_268.WaveSampleLoops.ArrayNum,
                     local_1d8.WaveModInfo.WaveSampleLoops.ArrayMax,
                     &local_1d8.WaveModInfo.WaveSampleLoops.AllocatorInstance,
                     local_268.WaveSampleLoops.ArrayNum,
                     &local_1d8.WaveModInfo.WaveSampleLoops.ArrayMax);
          if (iVar6 != 0) {
            memcpy(local_1d8.WaveModInfo.WaveSampleLoops.AllocatorInstance.Data,FVar2.Data,
                   lVar12 * 0xc);
          }
        }
        if (local_1d8.WaveModInfo.TimecodeInfo != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
          puVar10 = (undefined8 *)((longlong)local_1d8.WaveModInfo.TimecodeInfo + -0x10);
          local_1d8.WaveModInfo.TimecodeInfo = (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0;
          (*(code *)*puVar10)();
        }
        if (local_268.TimecodeInfo != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
          local_1d8.WaveModInfo.TimecodeInfo =
               (TPimplPtr<FSoundWaveTimecodeInfo,1>)
               (**(code **)((longlong)local_268.TimecodeInfo + -8))();
        }
        UE::Interchange::FInterchangeAudioPayloadData::FInterchangeAudioPayloadData
                  (&__return_storage_ptr__->TypedValue,&local_1d8);
        __return_storage_ptr__->bIsSet = true;
      }
      else {
        if (1 < (byte)LogInterchangeImport._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport)
          ;
        }
LAB_14e69cc22:
        __return_storage_ptr__->bIsSet = false;
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      if (local_268.TimecodeInfo != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
        (**(code **)((longlong)local_268.TimecodeInfo + -0x10))
                  ((longlong)local_268.TimecodeInfo + -0x10);
      }
      if (local_268.WaveSampleLoops.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.WaveSampleLoops.AllocatorInstance.Data);
      }
      DestructItems<FWaveCue,int>
                ((FWaveCue *)local_268.WaveCues.AllocatorInstance.Data,local_268.WaveCues.ArrayNum);
      if ((FWaveCue *)local_268.WaveCues.AllocatorInstance.Data != (FWaveCue *)0x0) {
        FMemory::Free(local_268.WaveCues.AllocatorInstance.Data);
      }
      if (local_1d8.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Buffer.AllocatorInstance.Data);
      }
      if (local_1d8.WaveModInfo.TimecodeInfo != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
        (**(code **)((longlong)local_1d8.WaveModInfo.TimecodeInfo + -0x10))
                  ((longlong)local_1d8.WaveModInfo.TimecodeInfo + -0x10);
      }
      if (local_1d8.WaveModInfo.WaveSampleLoops.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.WaveModInfo.WaveSampleLoops.AllocatorInstance.Data);
      }
      DestructItems<FWaveCue,int>
                ((FWaveCue *)local_1d8.WaveModInfo.WaveCues.AllocatorInstance.Data,
                 local_1d8.WaveModInfo.WaveCues.ArrayNum);
      if ((FWaveCue *)local_1d8.WaveModInfo.WaveCues.AllocatorInstance.Data != (FWaveCue *)0x0) {
        FMemory::Free(local_1d8.WaveModInfo.WaveCues.AllocatorInstance.Data);
      }
      goto LAB_14e69d0dd;
    }
    if (1 < (byte)LogInterchangeImport._0_1_) {
      pFVar9 = &::LOG_Static;
      goto LAB_14e69d0c7;
    }
  }
  else if (1 < (byte)LogInterchangeImport._0_1_) {
    pFVar9 = &::LOG_Static;
LAB_14e69d0c7:
    UE::Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogInterchangeImport);
  }
  __return_storage_ptr__->bIsSet = false;
LAB_14e69d0dd:
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

