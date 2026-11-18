// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureWasapi
// Functions: 14

// FAudioCaptureWasapiStream @ 14d0bd470

FAudioCaptureWasapiStream * __thiscall
Audio::FAudioCaptureWasapiStream::FAudioCaptureWasapiStream(FAudioCaptureWasapiStream *this)

{
  this->NumChannels = -1;
  this->SampleRate = -1;
  *(undefined ***)this = &___7FAudioCaptureWasapiStream_Audio__6B_;
  *(undefined8 *)&this->OnCapture = 0;
  *(undefined8 *)&(this->OnCapture).field_0x28 = 0;
  FWasapiStreamManager::FWasapiStreamManager(&this->CaptureDevice);
  return this;
}

// AbortStream @ 14d0be590

bool __thiscall Audio::FAudioCaptureWasapiStream::AbortStream(FAudioCaptureWasapiStream *this)

{
  FWasapiCaptureThread *pFVar1;
  FRunnableThread *pFVar2;
  bool bVar3;
  
  if ((this->CaptureDevice).State == STREAM_CLOSED) {
    return true;
  }
  (this->CaptureDevice).State = STREAM_STOPPING;
  pFVar1 = (this->CaptureDevice).CaptureThread.Ptr;
  if ((pFVar1->CaptureThread).Ptr != (FRunnableThread *)0x0) {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId89,"Audio::FWasapiCaptureThread::Abort",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiCaptureThread.cpp"
                 ,0x59);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId89);
    }
    pFVar2 = (pFVar1->CaptureThread).Ptr;
    (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,1);
    pFVar2 = (pFVar1->CaptureThread).Ptr;
    (pFVar1->CaptureThread).Ptr = (FRunnableThread *)0x0;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  (this->CaptureDevice).State = STREAM_STOPPED;
  return false;
}

// CloseStream @ 14d0beaa0

bool __thiscall Audio::FAudioCaptureWasapiStream::CloseStream(FAudioCaptureWasapiStream *this)

{
  if ((this->CaptureDevice).State != STREAM_CLOSED) {
    FWasapiStreamManager::CloseStream(&this->CaptureDevice);
    return (this->CaptureDevice).State == STREAM_CLOSED;
  }
  return true;
}

// GetAudioFormatFromCaptureParams @ 14d0bef70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Audio::FAudioCaptureWasapiStream::GetAudioFormatFromCaptureParams
          (FAudioCaptureDeviceParams *param_1,FDeviceInfo *param_2,FWasapiAudioFormat *param_3)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ushort uVar4;
  ushort uVar5;
  FWasapiAudioFormat *pFVar6;
  uint uVar7;
  EWasapiAudioEncoding EVar8;
  undefined1 auStack_68 [32];
  FWasapiAudioFormat local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar7 = param_1->SampleRate;
  if (uVar7 == 0xffffffff) {
    uVar7 = param_2->PreferredSampleRate;
  }
  switch(param_1->PCMAudioEncoding) {
  default:
    return false;
  case PCM_8:
    EVar8 = PCM_8;
    break;
  case PCM_16:
    EVar8 = PCM_16;
    break;
  case PCM_24:
    EVar8 = PCM_24;
    break;
  case PCM_24_IN_32:
    EVar8 = PCM_24_IN_32;
    break;
  case PCM_32:
    EVar8 = PCM_32;
    break;
  case FLOATING_POINT_32:
    EVar8 = FLOATING_POINT_32;
    break;
  case FLOATING_POINT_64:
    EVar8 = FLOATING_POINT_64;
  }
  pFVar6 = FWasapiAudioFormat::FWasapiAudioFormat
                     (&local_48,(ushort)param_2->NumInputChannels,uVar7,EVar8);
  uVar1 = (pFVar6->WaveFormat).Format.nChannels;
  uVar2 = (pFVar6->WaveFormat).Format.nSamplesPerSec;
  uVar3 = (pFVar6->WaveFormat).Format.nAvgBytesPerSec;
  uVar4 = (pFVar6->WaveFormat).Format.nBlockAlign;
  uVar5 = (pFVar6->WaveFormat).Format.wBitsPerSample;
  (param_3->WaveFormat).Format.wFormatTag = (pFVar6->WaveFormat).Format.wFormatTag;
  (param_3->WaveFormat).Format.nChannels = uVar1;
  (param_3->WaveFormat).Format.nSamplesPerSec = uVar2;
  (param_3->WaveFormat).Format.nAvgBytesPerSec = uVar3;
  (param_3->WaveFormat).Format.nBlockAlign = uVar4;
  (param_3->WaveFormat).Format.wBitsPerSample = uVar5;
  uVar2 = (pFVar6->WaveFormat).SubFormat.Data1;
  uVar1 = (pFVar6->WaveFormat).SubFormat.Data2;
  uVar4 = (pFVar6->WaveFormat).SubFormat.Data3;
  *(undefined8 *)&(param_3->WaveFormat).Format.cbSize =
       *(undefined8 *)&(pFVar6->WaveFormat).Format.cbSize;
  (param_3->WaveFormat).SubFormat.Data1 = uVar2;
  (param_3->WaveFormat).SubFormat.Data2 = uVar1;
  (param_3->WaveFormat).SubFormat.Data3 = uVar4;
  *(undefined8 *)(param_3->WaveFormat).SubFormat.Data4 =
       *(undefined8 *)(pFVar6->WaveFormat).SubFormat.Data4;
  param_3->Encoding = pFVar6->Encoding;
  return true;
}

// GetCaptureDeviceInfo @ 14d0bf0c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioCaptureWasapiStream::GetCaptureDeviceInfo
          (FAudioCaptureWasapiStream *this,FCaptureDeviceInfo *param_1,int param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FString local_a8;
  FCaptureDeviceInfo local_98;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FDeviceInfo local_58;
  
  bVar7 = false;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  if (param_2 == -1) {
    local_60 = (this->CaptureDevice).DeviceEnumerator.DefaultCaptureId.Data.ArrayNum;
    lVar9 = (longlong)local_60;
    pFVar2 = (this->CaptureDevice).DeviceEnumerator.DefaultCaptureId.Data.AllocatorInstance.Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    if (local_60 == 0) {
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      iVar8 = local_60;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,pFVar2,lVar9 * 2);
      local_a8.Data.AllocatorInstance.Data = local_68.Data;
      local_a8.Data.ArrayMax = local_5c;
      local_a8.Data.ArrayNum = local_60;
      iVar8 = local_60;
    }
  }
  else {
    FWasapiDeviceEnumeration::GetDeviceIdFromIndex
              (&(this->CaptureDevice).DeviceEnumerator,param_2,eAll,&local_a8);
    iVar8 = local_a8.Data.ArrayNum;
  }
  FVar3.Data = local_a8.Data.AllocatorInstance.Data;
  if (iVar8 < 2) {
    if (3 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
      bVar7 = false;
    }
  }
  else {
    local_58.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.DeviceId.Data.ArrayNum = 0;
    local_58.DeviceId.Data.ArrayMax = 0;
    local_58.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.FriendlyName.Data.ArrayNum = 0;
    local_58.FriendlyName.Data.ArrayMax = 0;
    local_58.NumInputChannels = 0;
    local_58.NumOutputChannels = 0;
    local_58.BitsPerSample = 0;
    local_58.PreferredSampleRate = 0;
    local_58.EndpointType = Unknown;
    bVar6 = FWasapiStreamManager::GetDeviceInfo(&this->CaptureDevice,&local_a8,&local_58);
    FVar4.Data = local_58.DeviceId.Data.AllocatorInstance.Data;
    if (bVar6) {
      local_98.DeviceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.DeviceName.Data.ArrayNum = 0;
      local_98.DeviceName.Data.ArrayMax = 0;
      local_98.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar8 = local_58.DeviceId.Data.ArrayNum + -1;
      if (local_58.DeviceId.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      local_98.DeviceId.Data.ArrayNum = 0;
      local_98.DeviceId.Data.ArrayMax = 0;
      ::FString::AssignRange
                (&local_98.DeviceId,(wchar_t *)local_58.DeviceId.Data.AllocatorInstance.Data,iVar8);
      FVar5.Data = local_58.FriendlyName.Data.AllocatorInstance.Data;
      iVar8 = local_58.FriendlyName.Data.ArrayNum + -1;
      if (local_58.FriendlyName.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange
                (&local_98.DeviceName,(wchar_t *)local_58.FriendlyName.Data.AllocatorInstance.Data,
                 iVar8);
      local_98.InputChannels = local_58.NumInputChannels;
      local_98.PreferredSampleRate = local_58.PreferredSampleRate;
      local_98.bSupportsHardwareAEC = false;
      if (param_1 != &local_98) {
        pFVar2 = (param_1->DeviceName).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_1->DeviceName).Data.AllocatorInstance.Data =
             local_98.DeviceName.Data.AllocatorInstance.Data;
        (param_1->DeviceName).Data.ArrayNum = local_98.DeviceName.Data.ArrayNum;
        (param_1->DeviceName).Data.ArrayMax = local_98.DeviceName.Data.ArrayMax;
        local_98.DeviceName.Data.ArrayNum = 0;
        local_98.DeviceName.Data.ArrayMax = 0;
        local_98.DeviceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pFVar1 = &param_1->DeviceId;
      if (pFVar1 != &local_98.DeviceId) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_98.DeviceId.Data.AllocatorInstance.Data;
        (param_1->DeviceId).Data.ArrayNum = local_98.DeviceId.Data.ArrayNum;
        (param_1->DeviceId).Data.ArrayMax = local_98.DeviceId.Data.ArrayMax;
        local_98.DeviceId.Data.ArrayNum = 0;
        local_98.DeviceId.Data.ArrayMax = 0;
        local_98.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      param_1->InputChannels = local_98.InputChannels;
      param_1->PreferredSampleRate = local_98.PreferredSampleRate;
      param_1->bSupportsHardwareAEC = local_98.bSupportsHardwareAEC;
      if (local_98.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.DeviceId.Data.AllocatorInstance.Data);
      }
      if (local_98.DeviceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.DeviceName.Data.AllocatorInstance.Data);
      }
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
      }
      if (FVar4.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar4.Data);
      }
      bVar7 = true;
    }
    else {
      if (local_58.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.FriendlyName.Data.AllocatorInstance.Data);
      }
      if (local_58.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.DeviceId.Data.AllocatorInstance.Data);
      }
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return bVar7;
}

// GetInputDevicesAvailable @ 14d0c0650

/* WARNING: Removing unreachable block (ram,0x00014d0c0834) */
/* WARNING: Removing unreachable block (ram,0x00014d0c0842) */

bool __thiscall
Audio::FAudioCaptureWasapiStream::GetInputDevicesAvailable
          (FAudioCaptureWasapiStream *this,
          TArray<Audio::FCaptureDeviceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  FDeviceInfo *pFVar1;
  uint uVar2;
  int iVar3;
  ForAnyElementType _Src;
  int iVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FDeviceInfo *pFVar9;
  undefined1 local_res8 [8];
  TArray<Audio::FWasapiDeviceEnumeration::FDeviceInfo,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  FScriptContainerElement local_30;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  bVar5 = FWasapiDeviceEnumeration::GetInputDevicesAvailable
                    (&(this->CaptureDevice).DeviceEnumerator,&local_68);
  if (bVar5) {
    iVar4 = local_68.ArrayNum;
    pFVar9 = (FDeviceInfo *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x38);
    pFVar8 = local_68.AllocatorInstance.Data + 0x10;
    while( true ) {
      if (local_68.ArrayNum != iVar4) {
        `TCheckedPointerIterator<Audio::FWasapiDeviceEnumeration::FDeviceInfo,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      pFVar1 = (FDeviceInfo *)(pFVar8 + -0x10);
      if (pFVar1 == pFVar9) break;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      iVar6 = 0;
      if ((FDeviceInfo *)&local_48 != pFVar1) {
        uVar2 = *(uint *)(pFVar8 + -8);
        pFVar7 = (pFVar1->DeviceId).Data.AllocatorInstance.Data;
        local_40 = (ulonglong)uVar2;
        if (uVar2 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar2,0,&local_48,uVar2,(int *)((longlong)&local_40 + 4));
          memcpy(local_48.Data,pFVar7,(longlong)(int)uVar2 * 2);
          iVar6 = local_50._4_4_;
        }
      }
      if ((FScriptContainerElement *)&local_58 != pFVar8) {
        iVar3 = *(int *)(pFVar8 + 8);
                    /* WARNING: Load size is inaccurate */
        _Src.Data = *pFVar8;
        local_50 = CONCAT44(local_50._4_4_,iVar3);
        if ((iVar3 == 0) && (iVar6 == 0)) {
          local_50 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,iVar6,&local_58,iVar3,(int *)((longlong)&local_50 + 4));
          if (iVar3 != 0) {
            memcpy(local_58.Data,_Src.Data,(longlong)iVar3 * 2);
          }
        }
      }
      local_38 = *(uint *)(pFVar8 + 0x10);
      local_34 = *(uint *)(pFVar8 + 0x1c);
      iVar6 = param_1->ArrayNum;
      local_30 = (FScriptContainerElement)0x0;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
      *(undefined8 *)pFVar7 = 0;
      *(FScriptContainerElement **)pFVar7 = local_58.Data;
      *(undefined4 *)(pFVar7 + 8) = (undefined4)local_50;
      *(int *)(pFVar7 + 0xc) = local_50._4_4_;
      *(undefined8 *)(pFVar7 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar7 + 0x10) = local_48.Data;
      *(int *)(pFVar7 + 0x18) = (int)local_40;
      *(int *)(pFVar7 + 0x1c) = local_40._4_4_;
      *(uint *)(pFVar7 + 0x20) = local_38;
      *(uint *)(pFVar7 + 0x24) = local_34;
      pFVar7[0x28] = local_30;
      local_40._0_4_ = 0;
      local_40._4_4_ = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
      pFVar8 = pFVar8 + 0x38;
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  DestructItems<Audio::FWasapiDeviceEnumeration::FDeviceInfo,int>
            ((FDeviceInfo *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FDeviceInfo *)local_68.AllocatorInstance.Data != (FDeviceInfo *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetSampleRate @ 14d0c0c80

int __thiscall Audio::FAudioCaptureWasapiStream::GetSampleRate(FAudioCaptureWasapiStream *this)

{
  return this->SampleRate;
}

// GetStreamTime @ 14d0c0d80

bool __thiscall
Audio::FAudioCaptureWasapiStream::GetStreamTime(FAudioCaptureWasapiStream *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->CaptureDevice).InputStream.Object == (FWasapiInputStream *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *param_1 = (double)((this->CaptureDevice).InputStream.Object)->DevicePosition;
  return true;
}

// IsCapturing @ 14d0c0ff0

bool __thiscall Audio::FAudioCaptureWasapiStream::IsCapturing(FAudioCaptureWasapiStream *this)

{
  return (this->CaptureDevice).State == STREAM_CAPTURING;
}

// IsStreamOpen @ 14d0c1020

bool __thiscall Audio::FAudioCaptureWasapiStream::IsStreamOpen(FAudioCaptureWasapiStream *this)

{
  return (this->CaptureDevice).State != STREAM_CLOSED;
}

// OnAudioCapture @ 14d0c1040

void __thiscall
Audio::FAudioCaptureWasapiStream::OnAudioCapture
          (FAudioCaptureWasapiStream *this,void *param_1,uint param_2,double param_3,bool param_4)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int local_res8 [2];
  uint local_res10 [2];
  int local_res18 [2];
  double local_res20;
  void *local_28 [3];
  
  local_res18[0] = this->SampleRate;
  local_res8[0] = this->NumChannels;
  local_res10[0] = param_2;
  local_res20 = param_3;
  local_28[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->OnCapture);
  plVar1 = *(longlong **)&(this->OnCapture).field_0x28;
  pcVar2 = *(code **)&this->OnCapture;
  plVar4 = (longlong *)&(this->OnCapture).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,local_28,local_res10,local_res8,local_res18,&local_res20,&param_4);
  return;
}

// OpenAudioCaptureStream @ 14d0c10e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioCaptureWasapiStream::OpenAudioCaptureStream
          (FAudioCaptureWasapiStream *this,FAudioCaptureDeviceParams *param_1,
          TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> *param_2,uint param_3)

{
  FScriptContainerElement *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  FWasapiAudioFormat *pFVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  int iVar20;
  longlong lVar21;
  EWasapiAudioEncoding EVar22;
  undefined1 auStackY_188 [32];
  FString local_148;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  FDeviceInfo local_128;
  code *local_e8 [2];
  undefined **local_d8;
  FAudioCaptureWasapiStream *pFStack_d0;
  uchar local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  FAudioCaptureWasapiStream *pFStack_a0;
  uchar local_98 [8];
  undefined ***local_90;
  FWasapiAudioFormat local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((this->CaptureDevice).State != STREAM_CLOSED) {
    FWasapiStreamManager::StopStream(&this->CaptureDevice);
    FWasapiStreamManager::CloseStream(&this->CaptureDevice);
  }
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  if (param_1->DeviceIndex == -1) {
    local_130 = (this->CaptureDevice).DeviceEnumerator.DefaultCaptureId.Data.ArrayNum;
    lVar21 = (longlong)local_130;
    _Src = (this->CaptureDevice).DeviceEnumerator.DefaultCaptureId.Data.AllocatorInstance.Data;
    local_138.Data = (FScriptContainerElement *)0x0;
    if (local_130 == 0) {
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      iVar20 = local_130;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_130,0,&local_138,local_130,&local_12c);
      memcpy(local_138.Data,_Src,lVar21 * 2);
      local_148.Data.AllocatorInstance.Data = local_138.Data;
      local_148.Data.ArrayMax = local_12c;
      local_148.Data.ArrayNum = local_130;
      iVar20 = local_130;
    }
  }
  else {
    FWasapiDeviceEnumeration::GetDeviceIdFromIndex
              (&(this->CaptureDevice).DeviceEnumerator,param_1->DeviceIndex,eCapture,&local_148);
    iVar20 = local_148.Data.ArrayNum;
  }
  if (iVar20 < 2) {
    if (3 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    goto LAB_14d0c1426;
  }
  local_128.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.DeviceId.Data.ArrayNum = 0;
  local_128.DeviceId.Data.ArrayMax = 0;
  local_128.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.FriendlyName.Data.ArrayNum = 0;
  local_128.FriendlyName.Data.ArrayMax = 0;
  local_128.NumInputChannels = 0;
  local_128.NumOutputChannels = 0;
  local_128.BitsPerSample = 0;
  local_128.PreferredSampleRate = 0;
  local_128.EndpointType = Unknown;
  bVar15 = FWasapiStreamManager::GetDeviceInfo(&this->CaptureDevice,&local_148,&local_128);
  if (bVar15) {
    FWasapiAudioFormat::FWasapiAudioFormat(&local_88);
    uVar16 = param_1->SampleRate;
    if (param_1->SampleRate == 0xffffffff) {
      uVar16 = local_128.PreferredSampleRate;
    }
    switch(param_1->PCMAudioEncoding) {
    default:
      goto switchD_14d0c126f_caseD_0;
    case PCM_8:
      EVar22 = PCM_8;
      break;
    case PCM_16:
      EVar22 = PCM_16;
      break;
    case PCM_24:
      EVar22 = PCM_24;
      break;
    case PCM_24_IN_32:
      EVar22 = PCM_24_IN_32;
      break;
    case PCM_32:
      EVar22 = PCM_32;
      break;
    case FLOATING_POINT_32:
      EVar22 = FLOATING_POINT_32;
      break;
    case FLOATING_POINT_64:
      EVar22 = FLOATING_POINT_64;
    }
    pFVar17 = FWasapiAudioFormat::FWasapiAudioFormat
                        ((FWasapiAudioFormat *)local_b8,(ushort)local_128.NumInputChannels,uVar16,
                         EVar22);
    local_c0 = 0;
    local_88.WaveFormat.Format.wFormatTag = (pFVar17->WaveFormat).Format.wFormatTag;
    local_88.WaveFormat.Format.nChannels = (pFVar17->WaveFormat).Format.nChannels;
    local_88.WaveFormat.Format.nSamplesPerSec = (pFVar17->WaveFormat).Format.nSamplesPerSec;
    local_88.WaveFormat.Format.nAvgBytesPerSec = (pFVar17->WaveFormat).Format.nAvgBytesPerSec;
    local_88.WaveFormat.Format.nBlockAlign = (pFVar17->WaveFormat).Format.nBlockAlign;
    local_88.WaveFormat.Format.wBitsPerSample = (pFVar17->WaveFormat).Format.wBitsPerSample;
    local_88.WaveFormat._16_8_ = *(undefined8 *)&(pFVar17->WaveFormat).Format.cbSize;
    local_88.WaveFormat.SubFormat.Data1 = (pFVar17->WaveFormat).SubFormat.Data1;
    local_88.WaveFormat.SubFormat.Data2 = (pFVar17->WaveFormat).SubFormat.Data2;
    local_88.WaveFormat.SubFormat.Data3 = (pFVar17->WaveFormat).SubFormat.Data3;
    local_88.WaveFormat.SubFormat.Data4 = *&(pFVar17->WaveFormat).SubFormat.Data4;
    local_88.Encoding = pFVar17->Encoding;
    local_a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FAudioCaptureWasapiStream::OpenAudioCaptureStream'::`19'::<lambda_1>,0,0>
                ::_vftable_;
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FAudioCaptureWasapiStream::OpenAudioCaptureStream'::__l19::<lambda_1>,void,void_*,unsigned_int,double,bool>
                  ::Call;
    local_90 = (undefined ***)0x0;
    local_d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FAudioCaptureWasapiStream::OpenAudioCaptureStream'::`19'::<lambda_1>,0,0>
                ::_vftable_;
    local_c8[0] = local_98[0];
    local_c8[1] = local_98[1];
    local_c8[2] = local_98[2];
    local_c8[3] = local_98[3];
    local_c8[4] = local_98[4];
    local_c8[5] = local_98[5];
    local_c8[6] = local_98[6];
    local_c8[7] = local_98[7];
    local_b8._0_8_ = 0;
    pFStack_d0 = this;
    pFStack_a0 = this;
    bVar15 = FWasapiStreamManager::OpenStream
                       (&this->CaptureDevice,&local_148,&local_88,param_3,
                        (TFunction<void___cdecl(void_*,unsigned_int,double,bool)> *)local_e8);
    if (bVar15) {
      uVar16 = FWasapiAudioFormat::GetNumChannels(&local_88);
      this->NumChannels = uVar16;
      uVar16 = FWasapiAudioFormat::GetSampleRate(&local_88);
      this->SampleRate = uVar16;
      uVar12 = *(undefined8 *)&param_2->field_0x8;
      uVar1 = *(undefined4 *)&this->OnCapture;
      uVar2 = *(undefined4 *)&(this->OnCapture).field_0x4;
      uVar3 = *(undefined4 *)&(this->OnCapture).field_0x8;
      uVar4 = *(undefined4 *)&(this->OnCapture).field_0xc;
      uVar5 = *(undefined4 *)&(this->OnCapture).field_0x10;
      uVar6 = *(undefined4 *)&(this->OnCapture).field_0x14;
      uVar7 = *(undefined4 *)&(this->OnCapture).field_0x18;
      uVar8 = *(undefined4 *)&(this->OnCapture).field_0x1c;
      uVar13 = *(undefined8 *)&(this->OnCapture).field_0x20;
      uVar14 = *(undefined8 *)&(this->OnCapture).field_0x28;
      *(undefined8 *)&this->OnCapture = *(undefined8 *)param_2;
      *(undefined8 *)&(this->OnCapture).field_0x8 = uVar12;
      uVar9 = *(undefined4 *)&param_2->field_0x14;
      uVar10 = *(undefined4 *)&param_2->field_0x18;
      uVar11 = *(undefined4 *)&param_2->field_0x1c;
      *(undefined4 *)&(this->OnCapture).field_0x10 = *(undefined4 *)&param_2->field_0x10;
      *(undefined4 *)&(this->OnCapture).field_0x14 = uVar9;
      *(undefined4 *)&(this->OnCapture).field_0x18 = uVar10;
      *(undefined4 *)&(this->OnCapture).field_0x1c = uVar11;
      uVar9 = *(undefined4 *)&param_2->field_0x24;
      uVar10 = *(undefined4 *)&param_2->field_0x28;
      uVar11 = *(undefined4 *)&param_2->field_0x2c;
      *(undefined4 *)&(this->OnCapture).field_0x20 = *(undefined4 *)&param_2->field_0x20;
      *(undefined4 *)&(this->OnCapture).field_0x24 = uVar9;
      *(undefined4 *)&(this->OnCapture).field_0x28 = uVar10;
      *(undefined4 *)&(this->OnCapture).field_0x2c = uVar11;
      *(undefined4 *)param_2 = uVar1;
      *(undefined4 *)&param_2->field_0x4 = uVar2;
      *(undefined4 *)&param_2->field_0x8 = uVar3;
      *(undefined4 *)&param_2->field_0xc = uVar4;
      *(undefined4 *)&param_2->field_0x10 = uVar5;
      *(undefined4 *)&param_2->field_0x14 = uVar6;
      *(undefined4 *)&param_2->field_0x18 = uVar7;
      *(undefined4 *)&param_2->field_0x1c = uVar8;
      *(undefined8 *)&param_2->field_0x20 = uVar13;
      *(undefined8 *)&param_2->field_0x28 = uVar14;
      if (local_b8._0_8_ != 0) {
        pppuVar19 = &local_a8;
        if (local_90 != (undefined ***)0x0) {
          pppuVar19 = local_90;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      if (local_128.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.FriendlyName.Data.AllocatorInstance.Data);
      }
      if (local_128.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.DeviceId.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (*(longlong *)param_2 != 0) {
        plVar18 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar18 = *(longlong **)&param_2->field_0x28;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      return true;
    }
    if (local_b8._0_8_ != 0) {
      pppuVar19 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar19 = local_90;
      }
      (*(code *)(*pppuVar19)[2])();
    }
  }
switchD_14d0c126f_caseD_0:
  if (local_128.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.FriendlyName.Data.AllocatorInstance.Data);
  }
  if (local_128.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.DeviceId.Data.AllocatorInstance.Data);
  }
LAB_14d0c1426:
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar18 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return false;
}

// StartStream @ 14d0c1bb0

bool __thiscall Audio::FAudioCaptureWasapiStream::StartStream(FAudioCaptureWasapiStream *this)

{
  FWasapiCaptureThread *pFVar1;
  FRunnableThread *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FRunnableThread *pFVar6;
  longlong lVar7;
  FWasapiCaptureThread local_18;
  
  if ((this->CaptureDevice).State != STREAM_STOPPED) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EStreamState::STREAM_STOPPED",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiStreamManager.cpp"
                       ,0x52,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->CaptureDevice).CaptureThread.Ptr;
  if ((pFVar1->CaptureThread).Ptr != (FRunnableThread *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CaptureThread == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiCaptureThread.cpp"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar6 = FRunnableThread::Create
                     ((FRunnable *)(pFVar1->CaptureRunnable).Ptr,L"Audio Capture Thread",0,
                      TPri_TimeCritical,0xffffffffffffffff,None);
  if (pFVar1 == &local_18) {
    if (pFVar6 == (FRunnableThread *)0x0) goto LAB_14d0c1c73;
    lVar7 = pFVar6->_padding_;
  }
  else {
    pFVar2 = (pFVar1->CaptureThread).Ptr;
    (pFVar1->CaptureThread).Ptr = pFVar6;
    if (pFVar2 == (FRunnableThread *)0x0) goto LAB_14d0c1c73;
    lVar7 = pFVar2->_padding_;
    pFVar6 = pFVar2;
  }
  (**(code **)(lVar7 + 0x30))(pFVar6,1);
LAB_14d0c1c73:
  pFVar6 = (pFVar1->CaptureThread).Ptr;
  (this->CaptureDevice).State = -(uint)(pFVar6 != (FRunnableThread *)0x0) & STREAM_CAPTURING;
  return pFVar6 != (FRunnableThread *)0x0;
}

// StopStream @ 14d0c2000

bool __thiscall Audio::FAudioCaptureWasapiStream::StopStream(FAudioCaptureWasapiStream *this)

{
  if ((this->CaptureDevice).State != STREAM_CLOSED) {
    FWasapiStreamManager::StopStream(&this->CaptureDevice);
    return (this->CaptureDevice).State != STREAM_CAPTURING;
  }
  return true;
}

