// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureWasapi
// Functions: 11

// FWasapiInputStream @ 14d0bd5a0

/* WARNING: Enum "Type": Some values do not have unique names */

FWasapiInputStream * __thiscall
Audio::FWasapiInputStream::FWasapiInputStream
          (FWasapiInputStream *this,TComPtr<IMMDevice> param_1,FWasapiAudioFormat *param_2,
          uint param_3,TFunction<void___cdecl(void_*,unsigned_int,double,bool)> *param_4)

{
  int *piVar1;
  IAudioClient3 *pIVar2;
  IAudioCaptureClient *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  ulong uVar12;
  ulong uVar13;
  ushort uVar14;
  ushort uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  FWasapiInputStream *pFVar20;
  tWAVEFORMATEX *ptVar21;
  HANDLE pvVar22;
  longlong *plVar23;
  FScriptContainerElement *_Dst;
  uint uVar24;
  longlong lVar25;
  IAudioClient3 *local_128;
  TFunction<void___cdecl(void_*,unsigned_int,double,bool)> *local_120;
  IAudioCaptureClient *local_118;
  IMMDevice *local_110;
  longlong local_108;
  FWasapiAudioFormat *local_100;
  undefined8 local_f8;
  int *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [2];
  
  (this->AudioClient).RawPointer = (IAudioClient3 *)0x0;
  (this->CaptureClient).RawPointer = (IAudioCaptureClient *)0x0;
  local_120 = param_4;
  local_110 = param_1.RawPointer;
  local_100 = param_2;
  FWasapiAudioFormat::FWasapiAudioFormat(&this->AudioFormat);
  this->bIsInitialized = false;
  this->DevicePosition = (atomic<double>)0x0;
  piVar1 = &(this->SilienceBuffer).ArrayNum;
  this->EventHandle = (void *)0x0;
  (this->SilienceBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0 = &(this->SilienceBuffer).ArrayMax;
  this->NumFramesPerBuffer = 0;
  *(undefined8 *)&this->OnAudioCaptureCallback = 0;
  *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x28 = 0;
  *local_f0 = 0;
  *piVar1 = 0;
  if ((*local_110 == (IMMDevice)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDevice.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiInputStream.cpp"
                          ,0x12,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    pFVar20 = (FWasapiInputStream *)(*pcVar4)();
    return pFVar20;
  }
  local_128 = (IAudioClient3 *)0x0;
  if ((*local_110 == (IMMDevice)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawPointer != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                          ,0x9f,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    pFVar20 = (FWasapiInputStream *)(*pcVar4)();
    return pFVar20;
  }
  iVar17 = (**(code **)(*(longlong *)*local_110 + 0x18))
                     (*local_110,&_GUID_7ed4ee07_8e67_4cd4_8c1a_2b7a5987ad42,1,0,&local_128);
  if (iVar17 < 0) {
    ::FString::PrintfImpl(&local_e8,L"%s -> 0x%X (line: %d)");
    local_d8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    if (1 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      local_d8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    }
LAB_14d0bd703:
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_f8 = 0;
    if ((local_128 == (IAudioClient3 *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      pFVar20 = (FWasapiInputStream *)(*pcVar4)();
      return pFVar20;
    }
    iVar17 = (**(code **)((longlong)*local_128 + 0x40))(local_128,&local_f8);
    if (iVar17 < 0) {
      ::FString::PrintfImpl(&local_d8,L"%s -> 0x%X (line: %d)");
      if (1 < (byte)LogAudioCaptureCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      }
      goto LAB_14d0bd703;
    }
    local_108 = 0;
    if ((local_128 == (IAudioClient3 *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      pFVar20 = (FWasapiInputStream *)(*pcVar4)();
      return pFVar20;
    }
    iVar17 = (**(code **)((longlong)*local_128 + 0x48))(local_128,0,&local_108);
    if (iVar17 < 0) {
      ::FString::PrintfImpl(&local_c8,L"%s -> 0x%X (line: %d)");
      local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      if (1 < (byte)LogAudioCaptureCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
        local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      }
      goto LAB_14d0bd703;
    }
    uVar18 = FWasapiAudioFormat::GetSampleRate(param_2);
    lVar25 = (longlong)(((double)param_3 / (double)uVar18) * __real_416312d000000000);
    if (lVar25 < local_108) {
      lVar25 = local_108;
    }
    if ((local_128 == (IAudioClient3 *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      pFVar20 = (FWasapiInputStream *)(*pcVar4)();
      return pFVar20;
    }
    pIVar2 = local_128;
    pcVar4 = *(code **)((longlong)*local_128 + 0x18);
    ptVar21 = FWasapiAudioFormat::GetWaveFormat(local_100);
    iVar17 = (*pcVar4)(pIVar2,0,0x40000,lVar25,0,ptVar21,0);
    if (iVar17 < 0) {
      ::FString::PrintfImpl(&local_b8,L"%s -> 0x%X (line: %d)");
      if (1 < (byte)LogAudioCaptureCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      }
LAB_14d0bd95f:
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
LAB_14d0bd969:
      param_4 = local_120;
      if (local_128 != (IAudioClient3 *)0x0) {
        (**(code **)((longlong)*local_128 + 0x10))();
        param_4 = local_120;
      }
      goto LAB_14d0bd97e;
    }
    if ((local_128 == (IAudioClient3 *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      pFVar20 = (FWasapiInputStream *)(*pcVar4)();
      return pFVar20;
    }
    iVar17 = (**(code **)((longlong)*local_128 + 0x20))(local_128,&this->NumFramesPerBuffer);
    if (iVar17 < 0) {
      ::FString::PrintfImpl(&local_a8,L"%s -> 0x%X (line: %d)");
      local_b8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      if (1 < (byte)LogAudioCaptureCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
        local_b8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      }
      goto LAB_14d0bd95f;
    }
    pvVar22 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    this->EventHandle = pvVar22;
    if (pvVar22 == (HANDLE)0x0) {
      ::FString::PrintfImpl(&local_98,L"%s -> 0x%X (line: %d)");
      local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      if (1 < (byte)LogAudioCaptureCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
        local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      }
      goto LAB_14d0bd95f;
    }
    if ((local_128 == (IAudioClient3 *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      pFVar20 = (FWasapiInputStream *)(*pcVar4)();
      return pFVar20;
    }
    iVar17 = (**(code **)((longlong)*local_128 + 0x68))(local_128,this->EventHandle);
    if (iVar17 < 0) {
      ::FString::PrintfImpl(&local_88,L"%s -> 0x%X (line: %d)");
      local_b8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      if (1 < (byte)LogAudioCaptureCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
        local_b8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      }
      goto LAB_14d0bd95f;
    }
    local_118 = (IAudioCaptureClient *)0x0;
    if ((local_128 == (IAudioClient3 *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      pFVar20 = (FWasapiInputStream *)(*pcVar4)();
      return pFVar20;
    }
    iVar17 = (**(code **)((longlong)*local_128 + 0x70))
                       (local_128,&_GUID_c8adbd64_e71e_48a0_a4de_185c395cd317,&local_118);
    if (iVar17 < 0) {
      ::FString::PrintfImpl(&local_78,L"%s -> 0x%X (line: %d)");
      if (1 < (byte)LogAudioCaptureCore._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_118 != (IAudioCaptureClient *)0x0) {
        (**(code **)((longlong)*local_118 + 0x10))();
      }
      goto LAB_14d0bd969;
    }
    pIVar2 = (this->AudioClient).RawPointer;
    if (pIVar2 != local_128) {
      if (pIVar2 != (IAudioClient3 *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      (this->AudioClient).RawPointer = local_128;
      local_128 = (IAudioClient3 *)0x0;
    }
    pIVar3 = (this->CaptureClient).RawPointer;
    if (pIVar3 != local_118) {
      if (pIVar3 != (IAudioCaptureClient *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
      (this->CaptureClient).RawPointer = local_118;
      local_118 = (IAudioCaptureClient *)0x0;
    }
    param_4 = local_120;
    uVar11 = (local_100->WaveFormat).Format.nChannels;
    uVar12 = (local_100->WaveFormat).Format.nSamplesPerSec;
    uVar13 = (local_100->WaveFormat).Format.nAvgBytesPerSec;
    uVar14 = (local_100->WaveFormat).Format.nBlockAlign;
    uVar15 = (local_100->WaveFormat).Format.wBitsPerSample;
    (this->AudioFormat).WaveFormat.Format.wFormatTag = (local_100->WaveFormat).Format.wFormatTag;
    (this->AudioFormat).WaveFormat.Format.nChannels = uVar11;
    (this->AudioFormat).WaveFormat.Format.nSamplesPerSec = uVar12;
    (this->AudioFormat).WaveFormat.Format.nAvgBytesPerSec = uVar13;
    (this->AudioFormat).WaveFormat.Format.nBlockAlign = uVar14;
    (this->AudioFormat).WaveFormat.Format.wBitsPerSample = uVar15;
    uVar12 = (local_100->WaveFormat).SubFormat.Data1;
    uVar11 = (local_100->WaveFormat).SubFormat.Data2;
    uVar14 = (local_100->WaveFormat).SubFormat.Data3;
    *(undefined8 *)&(this->AudioFormat).WaveFormat.Format.cbSize =
         *(undefined8 *)&(local_100->WaveFormat).Format.cbSize;
    (this->AudioFormat).WaveFormat.SubFormat.Data1 = uVar12;
    (this->AudioFormat).WaveFormat.SubFormat.Data2 = uVar11;
    (this->AudioFormat).WaveFormat.SubFormat.Data3 = uVar14;
    *(undefined8 *)(this->AudioFormat).WaveFormat.SubFormat.Data4 =
         *(undefined8 *)(local_100->WaveFormat).SubFormat.Data4;
    (this->AudioFormat).Encoding = local_100->Encoding;
    uVar5 = *(undefined8 *)&local_120->field_0x8;
    lVar25 = *(longlong *)&this->OnAudioCaptureCallback;
    uVar6 = *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x8;
    uVar7 = *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x10;
    uVar8 = *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x18;
    uVar9 = *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x20;
    uVar10 = *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x28;
    *(longlong *)&this->OnAudioCaptureCallback = *(longlong *)local_120;
    *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x8 = uVar5;
    uVar5 = *(undefined8 *)&local_120->field_0x18;
    *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x10 =
         *(undefined8 *)&local_120->field_0x10;
    *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x18 = uVar5;
    uVar5 = *(undefined8 *)&local_120->field_0x28;
    *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x20 =
         *(undefined8 *)&local_120->field_0x20;
    *(undefined8 *)&(this->OnAudioCaptureCallback).field_0x28 = uVar5;
    *(longlong *)local_120 = lVar25;
    *(undefined8 *)&local_120->field_0x8 = uVar6;
    *(undefined8 *)&local_120->field_0x10 = uVar7;
    *(undefined8 *)&local_120->field_0x18 = uVar8;
    *(undefined8 *)&local_120->field_0x20 = uVar9;
    *(undefined8 *)&local_120->field_0x28 = uVar10;
    uVar18 = GetBufferSizeBytes(this);
    iVar17 = *piVar1;
    if (iVar17 < (int)uVar18) {
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,uVar18 - iVar17,&(this->SilienceBuffer).AllocatorInstance,piVar1,
                          local_f0);
      memset((this->SilienceBuffer).AllocatorInstance.Data + iVar19,0,
             (longlong)(int)(uVar18 - iVar17));
    }
    else {
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if ((int)uVar18 < iVar17) {
        uVar24 = iVar17 - uVar18;
        if (((int)(uVar18 | uVar24) < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          pFVar20 = (FWasapiInputStream *)(*pcVar4)();
          return pFVar20;
        }
        if (uVar24 != 0) {
          _Dst = (this->SilienceBuffer).AllocatorInstance.Data + (int)uVar18;
          iVar17 = (*piVar1 - uVar18) - uVar24;
          if (iVar17 != 0) {
            memmove(_Dst,_Dst + (int)uVar24,(longlong)iVar17);
          }
          *piVar1 = *piVar1 - uVar24;
        }
      }
    }
    this->bIsInitialized = true;
    if (3 < (byte)LogAudioCaptureCore._0_1_) {
      FWasapiAudioFormat::GetEncodingString(&this->AudioFormat,local_68);
      FWasapiAudioFormat::GetSampleRate(&this->AudioFormat);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
    }
    if (local_118 != (IAudioCaptureClient *)0x0) {
      (**(code **)((longlong)*local_118 + 0x10))();
    }
  }
  if (local_128 != (IAudioClient3 *)0x0) {
    (**(code **)((longlong)*local_128 + 0x10))();
  }
LAB_14d0bd97e:
  if (*local_110 != (IMMDevice)0x0) {
    (**(code **)(*(longlong *)*local_110 + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar23 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return this;
}

// ~FWasapiInputStream @ 14d0be060

void __thiscall Audio::FWasapiInputStream::~FWasapiInputStream(FWasapiInputStream *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  IAudioCaptureClient *pIVar3;
  IAudioClient3 *pIVar4;
  longlong *plVar5;
  
  if (this->EventHandle != (HANDLE)0x0) {
    CloseHandle(this->EventHandle);
  }
  pFVar1 = (this->SilienceBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->OnAudioCaptureCallback != 0) {
    plVar2 = *(longlong **)&(this->OnAudioCaptureCallback).field_0x28;
    plVar5 = (longlong *)&(this->OnAudioCaptureCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pIVar3 = (this->CaptureClient).RawPointer;
  if (pIVar3 != (IAudioCaptureClient *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->AudioClient).RawPointer;
  if (pIVar4 != (IAudioClient3 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0be0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar4 + 0x10))();
    return;
  }
  return;
}

// CaptureAudioFrames @ 14d0be760

bool __thiscall Audio::FWasapiInputStream::CaptureAudioFrames(FWasapiInputStream *this)

{
  IAudioCaptureClient *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  unkuint9 Var5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  bool bVar13;
  byte local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  uint local_res20 [2];
  int local_78 [2];
  FScriptContainerElement *local_70;
  ulonglong local_68;
  atomic<double> local_60;
  FScriptContainerElement *local_58 [4];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"FWasapiInputStream_CaptureAudioFrames");
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId200,"FWasapiInputStream_CaptureAudioFrames",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiInputStream.cpp"
               ,200);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId200);
  }
  local_res18[0] = 0;
  if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pIVar1 = (this->CaptureClient).RawPointer;
  iVar8 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,local_res18);
  if (-1 < iVar8) {
    local_res20[0] = 0;
    local_70 = (FScriptContainerElement *)0x0;
    local_res10[0] = 0;
    local_68 = 0;
    do {
      if (local_res18[0] == 0) {
        bVar6 = true;
        goto LAB_14d0bea34;
      }
      if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pIVar1 = (this->CaptureClient).RawPointer;
      iVar8 = (**(code **)((longlong)*pIVar1 + 0x18))
                        (pIVar1,&local_70,local_res10,local_res20,&local_68,0);
      if (iVar8 < 0) break;
      Var5 = (unkuint9)local_68;
      uVar9 = FWasapiAudioFormat::GetSampleRate(&this->AudioFormat);
      bVar4 = (byte)local_res20[0];
      this->DevicePosition = (atomic<double>)((double)(unkint9)Var5 / (double)uVar9);
      if ((local_res20[0] & 2) != 0) {
        uVar9 = FWasapiAudioFormat::GetNumChannels(&this->AudioFormat);
        uVar10 = FWasapiAudioFormat::GetBytesPerSample(&this->AudioFormat);
        if (((this->SilienceBuffer).ArrayMax < (int)(uVar9 * uVar10 * local_res10[0])) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("SilienceBuffer.Max() >= BytesRead",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiInputStream.cpp"
                               ,0xe8,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        local_70 = (this->SilienceBuffer).AllocatorInstance.Data;
      }
      if (*(longlong *)&this->OnAudioCaptureCallback != 0) {
        local_60 = this->DevicePosition;
        local_78[0] = local_res10[0];
        local_58[0] = local_70;
        local_res8[0] = bVar4 & 1;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->OnAudioCaptureCallback);
        plVar2 = *(longlong **)&(this->OnAudioCaptureCallback).field_0x28;
        pcVar3 = *(code **)&this->OnAudioCaptureCallback;
        plVar12 = (longlong *)&(this->OnAudioCaptureCallback).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar12 = plVar2;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        (*pcVar3)(uVar11,local_58,local_78,&local_60,local_res8);
      }
      if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pIVar1 = (this->CaptureClient).RawPointer;
      (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_res10[0]);
      if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pIVar1 = (this->CaptureClient).RawPointer;
      iVar8 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,local_res18);
    } while (-1 < iVar8);
  }
  bVar6 = false;
LAB_14d0bea34:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar6;
}

// DrainInputBuffer @ 14d0beba0

bool __thiscall Audio::FWasapiInputStream::DrainInputBuffer(FWasapiInputStream *this)

{
  IAudioCaptureClient *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  local_res8[0] = 0;
  if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->CaptureClient).RawPointer;
  iVar5 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,local_res8);
  while( true ) {
    if (iVar5 < 0) {
      return false;
    }
    if (local_res8[0] == 0) {
      return true;
    }
    local_res18[0] = 0;
    local_res20 = 0;
    local_res10[0] = 0;
    if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->CaptureClient).RawPointer;
    iVar5 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,&local_res20,local_res10,local_res18,0,0)
    ;
    if (iVar5 < 0) {
      return false;
    }
    if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar3)) break;
    pIVar1 = (this->CaptureClient).RawPointer;
    (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_res10[0]);
    if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->CaptureClient).RawPointer;
    iVar5 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,local_res8);
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// GetBufferSizeBytes @ 14d0bf060

uint __thiscall Audio::FWasapiInputStream::GetBufferSizeBytes(FWasapiInputStream *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FWasapiAudioFormat::GetNumChannels(&this->AudioFormat);
  uVar2 = FWasapiAudioFormat::GetBytesPerSample(&this->AudioFormat);
  return uVar2 * uVar1 * this->NumFramesPerBuffer;
}

// GetBufferSizeFrames @ 14d0bf0b0

uint __thiscall Audio::FWasapiInputStream::GetBufferSizeFrames(FWasapiInputStream *this)

{
  return this->NumFramesPerBuffer;
}

// GetStreamPosition @ 14d0c0d10

double __thiscall Audio::FWasapiInputStream::GetStreamPosition(FWasapiInputStream *this)

{
  return (double)this->DevicePosition;
}

// IsInitialized @ 14d0c1010

bool __thiscall Audio::FWasapiInputStream::IsInitialized(FWasapiInputStream *this)

{
  return this->bIsInitialized;
}

// StartStream @ 14d0c1ca0

void __thiscall Audio::FWasapiInputStream::StartStream(FWasapiInputStream *this)

{
  IAudioClient3 *pIVar1;
  IAudioCaptureClient *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  pIVar1 = (this->AudioClient).RawPointer;
  if (pIVar1 != (IAudioClient3 *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x50))();
    local_res8[0] = 0;
    if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (this->CaptureClient).RawPointer;
    iVar5 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,local_res8);
    if ((-1 < iVar5) && (local_res8[0] != 0)) {
      while( true ) {
        local_res18[0] = 0;
        local_res20 = 0;
        local_res10[0] = 0;
        if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pIVar2 = (this->CaptureClient).RawPointer;
        iVar5 = (**(code **)((longlong)*pIVar2 + 0x18))
                          (pIVar2,&local_res20,local_res10,local_res18,0,0);
        if (iVar5 < 0) break;
        if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pIVar2 = (this->CaptureClient).RawPointer;
        (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,local_res10[0]);
        if (((this->CaptureClient).RawPointer == (IAudioCaptureClient *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pIVar2 = (this->CaptureClient).RawPointer;
        iVar5 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,local_res8);
        if (iVar5 < 0) {
          return;
        }
        if (local_res8[0] == 0) {
          return;
        }
      }
    }
  }
  return;
}

// StopStream @ 14d0c2040

void __thiscall Audio::FWasapiInputStream::StopStream(FWasapiInputStream *this)

{
  IAudioClient3 *pIVar1;
  
  pIVar1 = (this->AudioClient).RawPointer;
  if (pIVar1 != (IAudioClient3 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0c204b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x58))();
    return;
  }
  return;
}

// WaitOnBuffer @ 14d0c2140

bool __thiscall Audio::FWasapiInputStream::WaitOnBuffer(FWasapiInputStream *this)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(this->EventHandle,1000);
  return DVar1 == 0;
}

