// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 14

// FAudioMixerWasapiRenderStream @ 148d42a40

FAudioMixerWasapiRenderStream * __thiscall
Audio::FAudioMixerWasapiRenderStream::FAudioMixerWasapiRenderStream
          (FAudioMixerWasapiRenderStream *this)

{
  FAudioPlatformDeviceInfo *this_00;
  
  this->_padding_ = (longlong)&___7FAudioMixerWasapiRenderStream_Audio__6B_;
  (this->AudioClient).RawPointer = (IAudioClient2 *)0x0;
  (this->RenderClient).RawPointer = (IAudioRenderClient *)0x0;
  FWasapiAudioFormat::FWasapiAudioFormat(&this->AudioFormat);
  this_00 = &(this->RenderStreamParams).HardwareDeviceInfo;
  this->bIsInitialized = (atomic<bool>)0x0;
  (this_00->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderStreamParams).HardwareDeviceInfo.Name.Data.ArrayNum = 0;
  (this->RenderStreamParams).HardwareDeviceInfo.Name.Data.ArrayMax = 0;
  (this->RenderStreamParams).HardwareDeviceInfo.DeviceId.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderStreamParams).HardwareDeviceInfo.DeviceId.Data.ArrayNum = 0;
  (this->RenderStreamParams).HardwareDeviceInfo.DeviceId.Data.ArrayMax = 0;
  (this->RenderStreamParams).HardwareDeviceInfo.OutputChannelArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderStreamParams).HardwareDeviceInfo.OutputChannelArray.ArrayNum = 0;
  (this->RenderStreamParams).HardwareDeviceInfo.OutputChannelArray.ArrayMax = 0;
  this->StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x0;
  (this->RenderStreamParams).MMDevice.RawPointer = (IMMDevice *)0x0;
  FAudioPlatformDeviceInfo::Reset(this_00);
  (this->RenderStreamParams).NumFrames = 0;
  (this->RenderStreamParams).NumBuffers = 0;
  (this->RenderStreamParams).SampleRate = 0;
  this->DefaultDevicePeriod = 0;
  this->NumFramesPerDeviceBuffer = 0;
  this->CallbackBufferErrors = 0;
  (this->DownmixScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DownmixScratchBuffer).ArrayNum = 0;
  (this->DownmixScratchBuffer).ArrayMax = 0;
  (this->MixdownGainsMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MixdownGainsMap).ArrayNum = 0;
  (this->MixdownGainsMap).ArrayMax = 0;
  return this;
}

// ~FAudioMixerWasapiRenderStream @ 148d42f90

void __thiscall
Audio::FAudioMixerWasapiRenderStream::~FAudioMixerWasapiRenderStream
          (FAudioMixerWasapiRenderStream *this)

{
  FScriptContainerElement *pFVar1;
  IMMDevice *pIVar2;
  IAudioRenderClient *pIVar3;
  IAudioClient2 *pIVar4;
  
  this->_padding_ = (longlong)&___7FAudioMixerWasapiRenderStream_Audio__6B_;
  pFVar1 = (this->MixdownGainsMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DownmixScratchBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderStreamParams).HardwareDeviceInfo.OutputChannelArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderStreamParams).HardwareDeviceInfo.DeviceId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderStreamParams).HardwareDeviceInfo.Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->RenderStreamParams).MMDevice.RawPointer;
  if (pIVar2 != (IMMDevice *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar3 = (this->RenderClient).RawPointer;
  if (pIVar3 != (IAudioRenderClient *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->AudioClient).RawPointer;
  if (pIVar4 != (IAudioClient2 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d43021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar4 + 0x10))();
    return;
  }
  return;
}

// CloseAudioStream @ 148d44120

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapiRenderStream::CloseAudioStream(FAudioMixerWasapiRenderStream *this)

{
  atomic<Audio::EAudioOutputStreamState::Type> aVar1;
  code *pcVar2;
  undefined1 uVar3;
  FStaticBasicLogRecord *pFVar4;
  bool bVar5;
  
  aVar1 = this->StreamState;
  if ((this->bIsInitialized == (atomic<bool>)0x0) ||
     (aVar1 == (atomic<Audio::EAudioOutputStreamState::Type>)0x0)) {
    if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
      return false;
    }
    pFVar4 = &::LOG_Static;
  }
  else {
    if (aVar1 == (atomic<Audio::EAudioOutputStreamState::Type>)0x4) {
      if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
      return false;
    }
    LOCK();
    bVar5 = aVar1 == this->StreamState;
    if (bVar5) {
      this->StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x0;
    }
    UNLOCK();
    if (bVar5) {
      return true;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2450453595997339978>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapiRenderStream.cpp"
                       ,0x14a,
                       "StreamState.compare_exchange_strong(CurrStreamState, EAudioOutputStreamState::Closed, std::memory_order_release, std::memory_order_relaxed)"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
    if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
      return false;
    }
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&LogAudioMixerWasapi);
  return false;
}

// GetMinimumBufferSize @ 148d45280

uint __cdecl Audio::FAudioMixerWasapiRenderStream::GetMinimumBufferSize(uint param_1)

{
  return param_1 / 100;
}

// GetNumFrames @ 148d452e0

int __thiscall
Audio::FAudioMixerWasapiRenderStream::GetNumFrames(FAudioMixerWasapiRenderStream *this,int param_1)

{
  return param_1;
}

// InitializeDownmixBuffers @ 148d46580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioMixerWasapiRenderStream::InitializeDownmixBuffers
          (FAudioMixerWasapiRenderStream *this,int param_1,int param_2,FWasapiAudioFormat *param_3)

{
  int *piVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  EWasapiAudioEncoding EVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStackY_128 [32];
  float local_d8 [20];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (3 < (byte)LogAudioMixerWasapi._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
  }
  EVar10 = FWasapiAudioFormat::GetEncoding(param_3);
  if (EVar10 != FLOATING_POINT_32) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InAudioOutputFormat.GetEncoding() == EWasapiAudioEncoding::FLOATING_POINT_32"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapiRenderStream.cpp"
                        ,0xdf,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar12 = FWasapiAudioFormat::GetNumChannels(param_3);
  piVar1 = &(this->DownmixScratchBuffer).ArrayMax;
  piVar2 = &(this->DownmixScratchBuffer).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->DownmixScratchBuffer).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_2 * uVar12,&(this->DownmixScratchBuffer).AllocatorInstance,piVar2,piVar1);
  pTVar3 = &this->MixdownGainsMap;
  piVar1 = &(this->MixdownGainsMap).ArrayMax;
  (this->MixdownGainsMap).ArrayNum = 0;
  if ((this->MixdownGainsMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  uVar9 = _UNK_150689508;
  uVar8 = ___xmm_00000000000000003f80000000000000;
  uVar7 = _UNK_1506894f8;
  uVar6 = ___xmm_0000000000000000000000003f800000;
  if ((param_1 == 2) && (uVar12 == 8)) {
    (this->MixdownGainsMap).ArrayNum = 0x10;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x10,*piVar1,&pTVar3->AllocatorInstance,0x10,piVar1);
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    *(undefined8 *)pFVar4 = uVar6;
    *(undefined8 *)(pFVar4 + 8) = uVar7;
    *(undefined8 *)(pFVar4 + 0x10) = 0;
    *(undefined8 *)(pFVar4 + 0x18) = 0;
    *(undefined8 *)(pFVar4 + 0x20) = uVar8;
    *(undefined8 *)(pFVar4 + 0x28) = uVar9;
    *(undefined8 *)(pFVar4 + 0x30) = 0;
    *(undefined8 *)(pFVar4 + 0x38) = 0;
  }
  else {
    uVar14 = (ulonglong)(uVar12 * param_1);
    local_d8[0] = __real_3f800000 / (float)(int)uVar12;
    if (0 < (int)(uVar12 * param_1)) {
      do {
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)local_d8) &&
           ((FScriptContainerElement *)local_d8 < pFVar4 + (longlong)*piVar1 * 4)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar13 = (this->MixdownGainsMap).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->MixdownGainsMap).ArrayNum = iVar13 + 1;
        *(float *)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_d8[0];
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  return;
}

// InitializeHardware @ 148d46950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapiRenderStream::InitializeHardware
          (FAudioMixerWasapiRenderStream *this,FWasapiRenderStreamParams *param_1)

{
  IMMDevice *pIVar1;
  IAudioClient2 *pIVar2;
  IMMDevice *pIVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulong64 uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  IAudioClient2 **local_128;
  tWAVEFORMATEX *local_120;
  undefined8 local_118;
  IAudioClient2 *local_108;
  LPVOID local_100;
  long64 local_f8;
  long64 local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  FWasapiAudioFormat local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pIVar1 = (param_1->MMDevice).RawPointer;
  if (pIVar1 == (IMMDevice *)0x0) {
    if (1 < (byte)LogAudioMixerWasapi._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    }
    return false;
  }
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1);
  local_128 = &local_108;
  local_108 = (IAudioClient2 *)0x0;
  iVar8 = (**(code **)((longlong)*pIVar1 + 0x18))
                    (pIVar1,&_GUID_726778cd_f60a_4eda_82de_e47610cd78aa,1,0);
  if (iVar8 < 0) {
    if ((byte)LogAudioMixerWasapi._0_1_ < 2) goto LAB_148d46fae;
    AudioClientErrorToFString(&local_e8,iVar8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    goto LAB_148d46fa4;
  }
  local_88 = 0x10;
  local_80 = 6;
  local_7c = 1;
  if ((local_108 == (IAudioClient2 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar8 = (**(code **)((longlong)*local_108 + 0x80))(local_108,&local_88);
  if ((iVar8 < 0) && (2 < (byte)LogAudioMixerWasapi._0_1_)) {
    AudioClientErrorToFString(&local_d8,iVar8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  local_100 = (LPVOID)0x0;
  if ((local_108 == (IAudioClient2 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar8 = (**(code **)((longlong)*local_108 + 0x40))(local_108,&local_100);
  if ((iVar8 < 0) || (local_100 == (LPVOID)0x0)) {
    if (1 < (byte)LogAudioMixerWasapi._0_1_) {
      AudioClientErrorToFString(&local_98,iVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
      local_e8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      goto LAB_148d46fa4;
    }
  }
  else {
    uVar10 = 8;
    if (*(ushort *)((longlong)local_100 + 2) < 8) {
      uVar10 = *(ushort *)((longlong)local_100 + 2);
    }
    FWasapiAudioFormat::FWasapiAudioFormat(&local_78,uVar10,param_1->SampleRate,FLOATING_POINT_32);
    if (local_100 != (LPVOID)0x0) {
      CoTaskMemFree(local_100);
      local_100 = (LPVOID)0x0;
    }
    local_f8 = 0;
    if ((local_108 == (IAudioClient2 *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar8 = (**(code **)((longlong)*local_108 + 0x48))(local_108,&local_f8,0);
    if (iVar8 < 0) {
      if (1 < (byte)LogAudioMixerWasapi._0_1_) {
        AudioClientErrorToFString(&local_c8,iVar8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
        local_e8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
        goto LAB_148d46fa4;
      }
    }
    else {
      uVar9 = FWasapiAudioUtils::RefTimeToFrames(local_f8,param_1->SampleRate);
      uVar12 = (uint)uVar9;
      this->DefaultDevicePeriod = uVar12;
      if (uVar12 == 0) {
        if (1 < (byte)LogAudioMixerWasapi._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
        }
      }
      else {
        uVar11 = param_1->NumFrames;
        if (uVar11 < uVar12) {
          bVar6 = (int)((uVar9 & 0xffffffff) % (ulonglong)uVar11) == 0;
          uVar5 = uVar12;
          if (!bVar6) {
            uVar5 = uVar11;
          }
LAB_148d46c35:
          uVar11 = uVar5;
          if (!bVar6) {
            fVar14 = (float)((uVar12 - 1) + uVar11);
            uVar11 = -(((int)ROUND(__real_bf000000 - (fVar14 + fVar14) / (float)(uVar9 & 0xffffffff)
                                  ) >> 1) * uVar12);
          }
        }
        else if (uVar12 < uVar11) {
          bVar6 = (int)((ulonglong)uVar11 % (uVar9 & 0xffffffff)) == 0;
          uVar5 = uVar11;
          goto LAB_148d46c35;
        }
        local_f0 = FWasapiAudioUtils::FramesToRefTime(uVar11,param_1->SampleRate);
        if (4 < (byte)LogAudioMixerWasapi._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
        }
        uVar13 = 0x40000;
        if (param_1->SampleRate != (param_1->HardwareDeviceInfo).SampleRate) {
          uVar13 = 0x80040000;
          if (UseDefaultQualitySRC_CVar != 0) {
            uVar13 = 0x88040000;
          }
          if ((2 < (byte)LogAudioMixerWasapi._0_1_) &&
             (UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi),
             2 < (byte)LogAudioMixerWasapi._0_1_)) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
          }
        }
        if ((local_108 == (IAudioClient2 *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pIVar2 = local_108;
        pcVar4 = *(code **)((longlong)*local_108 + 0x18);
        local_120 = FWasapiAudioFormat::GetWaveFormat(&local_78);
        local_118 = 0;
        local_128 = (IAudioClient2 **)0x0;
        iVar8 = (*pcVar4)(pIVar2,0,uVar13,local_f0);
        if (iVar8 < 0) {
          if (1 < (byte)LogAudioMixerWasapi._0_1_) {
            AudioClientErrorToFString(&local_b8,iVar8);
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
            local_e8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
LAB_148d46fa4:
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          if ((local_108 == (IAudioClient2 *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("RawPointer != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                 ,0x9f,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar8 = (**(code **)((longlong)*local_108 + 0x20))
                            (local_108,&this->NumFramesPerDeviceBuffer);
          if (-1 < iVar8) {
            uVar12 = (param_1->HardwareDeviceInfo).NumChannels;
            uVar11 = FWasapiAudioFormat::GetNumChannels(&local_78);
            if (3 < (byte)LogAudioMixerWasapi._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
            }
            if (uVar12 != uVar11) {
              InitializeDownmixBuffers(this,uVar12,param_1->NumFrames,&local_78);
            }
            pIVar2 = (this->AudioClient).RawPointer;
            if (pIVar2 != local_108) {
              if (pIVar2 != (IAudioClient2 *)0x0) {
                (**(code **)((longlong)*pIVar2 + 0x10))();
              }
              (this->AudioClient).RawPointer = local_108;
              local_108 = (IAudioClient2 *)0x0;
            }
            (this->AudioFormat).WaveFormat.Format.wFormatTag = local_78.WaveFormat.Format.wFormatTag
            ;
            (this->AudioFormat).WaveFormat.Format.nChannels = local_78.WaveFormat.Format.nChannels;
            (this->AudioFormat).WaveFormat.Format.nSamplesPerSec =
                 local_78.WaveFormat.Format.nSamplesPerSec;
            (this->AudioFormat).WaveFormat.Format.nAvgBytesPerSec =
                 local_78.WaveFormat.Format.nAvgBytesPerSec;
            (this->AudioFormat).WaveFormat.Format.nBlockAlign =
                 local_78.WaveFormat.Format.nBlockAlign;
            (this->AudioFormat).WaveFormat.Format.wBitsPerSample =
                 local_78.WaveFormat.Format.wBitsPerSample;
            *(undefined4 *)&(this->AudioFormat).WaveFormat.Format.cbSize =
                 local_78.WaveFormat._16_4_;
            (this->AudioFormat).WaveFormat.dwChannelMask = local_78.WaveFormat.dwChannelMask;
            (this->AudioFormat).WaveFormat.SubFormat.Data1 = local_78.WaveFormat.SubFormat.Data1;
            (this->AudioFormat).WaveFormat.SubFormat.Data2 = local_78.WaveFormat.SubFormat.Data2;
            (this->AudioFormat).WaveFormat.SubFormat.Data3 = local_78.WaveFormat.SubFormat.Data3;
            *&(this->AudioFormat).WaveFormat.SubFormat.Data4 = local_78.WaveFormat.SubFormat.Data4;
            (this->AudioFormat).Encoding = local_78.Encoding;
            pIVar3 = (param_1->MMDevice).RawPointer;
            if ((this->RenderStreamParams).MMDevice.RawPointer != pIVar3) {
              if (pIVar3 != (IMMDevice *)0x0) {
                (**(code **)((longlong)*pIVar3 + 8))();
              }
              pIVar3 = (this->RenderStreamParams).MMDevice.RawPointer;
              if (pIVar3 != (IMMDevice *)0x0) {
                (**(code **)((longlong)*pIVar3 + 0x10))();
              }
              (this->RenderStreamParams).MMDevice.RawPointer = (param_1->MMDevice).RawPointer;
            }
            FAudioPlatformDeviceInfo::operator=
                      (&(this->RenderStreamParams).HardwareDeviceInfo,&param_1->HardwareDeviceInfo);
            (this->RenderStreamParams).NumFrames = param_1->NumFrames;
            (this->RenderStreamParams).NumBuffers = param_1->NumBuffers;
            (this->RenderStreamParams).SampleRate = param_1->SampleRate;
            this->bIsInitialized = (atomic<bool>)0x1;
            if (3 < (byte)LogAudioMixerWasapi._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
            }
            bVar6 = true;
            goto LAB_148d46fb0;
          }
          if (1 < (byte)LogAudioMixerWasapi._0_1_) {
            AudioClientErrorToFString(&local_a8,iVar8);
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
            local_e8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
            goto LAB_148d46fa4;
          }
        }
      }
    }
  }
LAB_148d46fae:
  bVar6 = false;
LAB_148d46fb0:
  if (local_108 != (IAudioClient2 *)0x0) {
    (**(code **)((longlong)*local_108 + 0x10))();
  }
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  return bVar6;
}

// IsInitialized @ 148d48140

bool __thiscall
Audio::FAudioMixerWasapiRenderStream::IsInitialized(FAudioMixerWasapiRenderStream *this)

{
  return (bool)this->bIsInitialized;
}

// OpenAudioStream @ 148d490c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapiRenderStream::OpenAudioStream
          (FAudioMixerWasapiRenderStream *this,FWasapiRenderStreamParams *param_1,void *param_2)

{
  int iVar1;
  IAudioRenderClient *pIVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  IAudioClient2 *pIVar7;
  bool bVar8;
  IAudioRenderClient *local_res8;
  FString local_28;
  FString local_18;
  
  if (this->StreamState != (atomic<Audio::EAudioOutputStreamState::Type>)0x0) {
    if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
      return false;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    return false;
  }
  iVar6 = (param_1->HardwareDeviceInfo).DeviceId.Data.ArrayNum;
  iVar1 = (this->RenderStreamParams).HardwareDeviceInfo.DeviceId.Data.ArrayNum;
  if (iVar6 == iVar1) {
    if (1 < iVar6) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)
                         (param_1->HardwareDeviceInfo).DeviceId.Data.AllocatorInstance.Data,
                         (wchar_t *)
                         (this->RenderStreamParams).HardwareDeviceInfo.DeviceId.Data.
                         AllocatorInstance.Data);
      bVar8 = iVar6 == 0;
      goto LAB_148d49133;
    }
  }
  else {
    bVar8 = iVar6 + iVar1 == 1;
LAB_148d49133:
    if ((!bVar8) && (cVar4 = (**(code **)(this->_padding_ + 0x10))(this,param_1), cVar4 == '\0')) {
      if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
      return false;
    }
  }
  if (param_2 == (void *)0x0) {
    if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
      return false;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    return false;
  }
  pIVar7 = TComPtr<IAudioClient2>::operator->(&this->AudioClient);
  iVar6 = (**(code **)((longlong)*pIVar7 + 0x68))(pIVar7,param_2);
  if (iVar6 < 0) {
    if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
      return false;
    }
    AudioClientErrorToFString(&local_28,iVar6);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
    return false;
  }
  local_res8 = (IAudioRenderClient *)0x0;
  pIVar7 = TComPtr<IAudioClient2>::operator->(&this->AudioClient);
  iVar6 = (**(code **)((longlong)*pIVar7 + 0x70))
                    (pIVar7,&_GUID_f294acfc_3146_4483_a7bf_addca7c260e2,&local_res8);
  if (iVar6 < 0) {
    if (2 < (byte)LogAudioMixerWasapi._0_1_) {
      AudioClientErrorToFString(&local_18,iVar6);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        bVar8 = false;
        goto LAB_148d4933e;
      }
    }
  }
  else {
    pIVar2 = (this->RenderClient).RawPointer;
    if (pIVar2 != local_res8) {
      if (pIVar2 != (IAudioRenderClient *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      (this->RenderClient).RawPointer = local_res8;
      local_res8 = (IAudioRenderClient *)0x0;
    }
    LOCK();
    bVar8 = this->StreamState == (atomic<Audio::EAudioOutputStreamState::Type>)0x0;
    if (bVar8) {
      this->StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x1;
    }
    UNLOCK();
    if (bVar8) {
      if (5 < (byte)LogAudioMixerWasapi._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_FAudioMixerWasa_151cdde60,
                   (FLogCategoryBase *)&LogAudioMixerWasapi);
      }
      bVar8 = true;
      goto LAB_148d4933e;
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2450453595997339950>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapiRenderStream.cpp"
                       ,0x12e,
                       "StreamState.compare_exchange_strong(CurrStreamState, EAudioOutputStreamState::Open, std::memory_order_release, std::memory_order_relaxed)"
                      );
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (2 < (byte)LogAudioMixerWasapi._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    }
  }
  bVar8 = false;
LAB_148d4933e:
  if (local_res8 != (IAudioRenderClient *)0x0) {
    (**(code **)((longlong)*local_res8 + 0x10))();
    return bVar8;
  }
  return bVar8;
}

// StartAudioStream @ 148d4a920

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapiRenderStream::StartAudioStream(FAudioMixerWasapiRenderStream *this)

{
  IAudioClient2 *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  
  if (this->StreamState == (atomic<Audio::EAudioOutputStreamState::Type>)0x1) {
    pIVar1 = (this->AudioClient).RawPointer;
    if (pIVar1 == (IAudioClient2 *)0x0) {
      if (2 < (byte)LogAudioMixerWasapi._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
        return false;
      }
    }
    else {
      (**(code **)((longlong)*pIVar1 + 0x50))();
      if (5 < (byte)LogAudioMixerWasapi._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
      }
      LOCK();
      bVar4 = this->StreamState == (atomic<Audio::EAudioOutputStreamState::Type>)0x1;
      if (bVar4) {
        this->StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x4;
      }
      UNLOCK();
      if (bVar4) {
        return true;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2450453595997340007>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapiRenderStream.cpp"
                         ,0x167,
                         "StreamState.compare_exchange_strong(CurrStreamState, EAudioOutputStreamState::Running, std::memory_order_release, std::memory_order_relaxed)"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      if (2 < (byte)LogAudioMixerWasapi._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
      }
    }
  }
  else if (2 < (byte)LogAudioMixerWasapi._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    return false;
  }
  return false;
}

// StopAudioStream @ 148d4aef0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapiRenderStream::StopAudioStream(FAudioMixerWasapiRenderStream *this)

{
  atomic<Audio::EAudioOutputStreamState::Type> aVar1;
  code *pcVar2;
  undefined1 uVar3;
  IAudioClient2 *pIVar4;
  bool bVar5;
  
  if (this->bIsInitialized == (atomic<bool>)0x0) {
    if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
      return false;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    return false;
  }
  aVar1 = this->StreamState;
  if (((uint)aVar1 & 0xfffffffd) != 0) {
    if ((this->AudioClient).RawPointer != (IAudioClient2 *)0x0) {
      pIVar4 = TComPtr<IAudioClient2>::operator->(&this->AudioClient);
      (**(code **)((longlong)*pIVar4 + 0x58))(pIVar4);
    }
    LOCK();
    bVar5 = aVar1 == this->StreamState;
    if (bVar5) {
      this->StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x2;
    }
    UNLOCK();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2450453595997340033>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapiRenderStream.cpp"
                         ,0x181,
                         "StreamState.compare_exchange_strong(CurrStreamState, EAudioOutputStreamState::Stopped, std::memory_order_release, std::memory_order_relaxed)"
                        );
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
      return false;
    }
  }
  if (this->CallbackBufferErrors != 0) {
    if (3 < (byte)LogAudioMixerWasapi._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    }
    this->CallbackBufferErrors = 0;
  }
  return true;
}

// SubmitBuffer @ 148d4b1a0

void __thiscall
Audio::FAudioMixerWasapiRenderStream::SubmitBuffer
          (FAudioMixerWasapiRenderStream *this,uchar *param_1,ulong64 param_2)

{
  return;
}

// SubmitDirectOutBuffer @ 148d4b420

void __thiscall
Audio::FAudioMixerWasapiRenderStream::SubmitDirectOutBuffer
          (FAudioMixerWasapiRenderStream *this,int param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  return;
}

// TeardownHardware @ 148d4ba70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerWasapiRenderStream::TeardownHardware(FAudioMixerWasapiRenderStream *this)

{
  IAudioRenderClient *pIVar1;
  IAudioClient2 *pIVar2;
  
  if (this->bIsInitialized == (atomic<bool>)0x0) {
    if (2 < (byte)LogAudioMixerWasapi._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    }
    return false;
  }
  pIVar1 = (this->RenderClient).RawPointer;
  if (pIVar1 != (IAudioRenderClient *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
    (this->RenderClient).RawPointer = (IAudioRenderClient *)0x0;
  }
  pIVar2 = (this->AudioClient).RawPointer;
  if (pIVar2 != (IAudioClient2 *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
    (this->AudioClient).RawPointer = (IAudioClient2 *)0x0;
  }
  this->bIsInitialized = (atomic<bool>)0x0;
  if (5 < (byte)LogAudioMixerWasapi._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
  }
  return true;
}

