// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 14

// FAudioCaptureRtAudioStream @ 14d0c3000

FAudioCaptureRtAudioStream * __thiscall
Audio::FAudioCaptureRtAudioStream::FAudioCaptureRtAudioStream(FAudioCaptureRtAudioStream *this)

{
  this->_padding_ = (longlong)&___7FAudioCaptureRtAudioStream_Audio__6B_;
  *(undefined8 *)&this->OnCapture = 0;
  *(undefined8 *)&(this->OnCapture).field_0x28 = 0;
  this->NumChannels = 0;
  this->SampleRate = 0;
  RtAudio::RtAudio(&this->CaptureDevice,UNSPECIFIED);
  return this;
}

// AbortStream @ 14d0c3e50

bool __thiscall Audio::FAudioCaptureRtAudioStream::AbortStream(FAudioCaptureRtAudioStream *this)

{
  RtApi *pRVar1;
  bool bVar2;
  
  pRVar1 = (this->CaptureDevice).rtapi_;
  bVar2 = (pRVar1->stream_).state != STREAM_CLOSED;
  if (bVar2) {
    (**(code **)(pRVar1->_padding_ + 0x48))();
  }
  return bVar2;
}

// CloseStream @ 14d0c3ea0

bool __thiscall Audio::FAudioCaptureRtAudioStream::CloseStream(FAudioCaptureRtAudioStream *this)

{
  RtApi *pRVar1;
  bool bVar2;
  
  pRVar1 = (this->CaptureDevice).rtapi_;
  bVar2 = (pRVar1->stream_).state != STREAM_CLOSED;
  if (bVar2) {
    (**(code **)(pRVar1->_padding_ + 0x30))();
  }
  return bVar2;
}

// GetCaptureDeviceInfo @ 14d0c3f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo
          (FAudioCaptureRtAudioStream *this,FCaptureDeviceInfo *param_1,int param_2)

{
  uint uVar1;
  RtApi *pRVar2;
  FScriptContainerElement *pFVar3;
  size_t sVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_388 [32];
  uint local_368;
  FString local_360;
  undefined1 local_350 [32];
  FString local_330;
  FString local_318;
  undefined1 local_308 [8];
  _Bxty local_300;
  ulonglong local_2e8;
  _Bxty local_2e0;
  ulonglong local_2c8;
  int local_2bc;
  vector<unsigned_int,std::allocator<unsigned_int>_> local_2b0;
  int local_298;
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  pFVar6 = (FScriptContainerElement *)0x0;
  local_368 = GetDefaultInputDevice(this);
  if (param_2 != -1) {
    local_368 = param_2;
  }
  pRVar2 = (this->CaptureDevice).rtapi_;
  (**(code **)(pRVar2->_padding_ + 0x18))(pRVar2,local_308,local_368);
  uVar8 = &local_300;
  if (0xf < local_2e8) {
    uVar8 = local_300._Ptr;
  }
  local_188.Data = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  if ((_Bxty *)uVar8 == (_Bxty *)0x0) {
    local_180 = (FScriptContainerElement *)0x0;
    local_178 = 0;
  }
  else {
    sVar4 = strlen((char *)uVar8);
    local_178 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)uVar8,(int)sVar4);
    uVar1 = local_178 + 1;
    if (uVar1 < 0x81) {
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,0,2);
      }
    }
    else if (local_188.Data == (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar1,2);
    }
    else {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar1,2);
    }
    local_180 = local_288;
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      local_180 = local_188.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_180,uVar1,(uchar *)uVar8,(int)sVar4 + 1);
  }
  local_350._0_8_ = (FScriptContainerElement *)0x0;
  local_350._8_4_ = 0;
  local_350._12_4_ = 0;
  pFVar5 = ::FString::ConstructFromPtrSize(&local_330,(wchar_t *)local_180,local_178);
  pFVar7 = pFVar6;
  iVar9 = iVar10;
  if ((FString *)local_350 != pFVar5) {
    pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar5->Data).ArrayNum;
    iVar9 = (pFVar5->Data).ArrayMax;
    local_350._8_4_ = (pFVar5->Data).ArrayNum;
    local_350._12_4_ = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    local_350._0_8_ = pFVar7;
  }
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  if (param_1 != (FCaptureDeviceInfo *)local_350) {
    pFVar3 = (param_1->DeviceName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_1->DeviceName).Data.AllocatorInstance.Data = pFVar7;
    (param_1->DeviceName).Data.ArrayNum = iVar10;
    (param_1->DeviceName).Data.ArrayMax = iVar9;
    pFVar7 = pFVar6;
  }
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  uVar8 = &local_2e0;
  if (0xf < local_2c8) {
    uVar8 = local_2e0._Ptr;
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  if ((_Bxty *)uVar8 == (_Bxty *)0x0) {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
  }
  else {
    sVar4 = strlen((char *)uVar8);
    local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)uVar8,(int)sVar4);
    uVar1 = local_58 + 1;
    if (uVar1 < 0x81) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,2);
      }
    }
    else if (local_68.Data == (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar1,2);
    }
    else {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar1,2);
    }
    local_60 = local_168;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      local_60 = local_68.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_60,uVar1,(uchar *)uVar8,(int)sVar4 + 1);
  }
  local_350._16_8_ = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  local_350._24_4_ = 0;
  local_350._28_4_ = 0;
  pFVar5 = ::FString::ConstructFromPtrSize(&local_318,(wchar_t *)local_60,local_58);
  pFVar7 = pFVar6;
  iVar9 = iVar10;
  if ((FString *)(local_350 + 0x10) != pFVar5) {
    pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar5->Data).ArrayNum;
    iVar9 = (pFVar5->Data).ArrayMax;
    local_350._24_4_ = (pFVar5->Data).ArrayNum;
    local_350._28_4_ = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    local_350._16_8_ = pFVar7;
  }
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  pFVar5 = &param_1->DeviceId;
  if (pFVar5 != (FString *)(local_350 + 0x10)) {
    pFVar3 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar5->Data).AllocatorInstance.Data = pFVar7;
    (param_1->DeviceId).Data.ArrayNum = iVar10;
    (param_1->DeviceId).Data.ArrayMax = iVar9;
    pFVar7 = pFVar6;
  }
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  param_1->InputChannels = local_2bc;
  param_1->PreferredSampleRate = local_298;
  if ((param_1->DeviceId).Data.ArrayNum < 2) {
    ::FString::PrintfImpl(&local_360,L"%s_%d");
    if (pFVar5 != &local_360) {
      pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar5->Data).AllocatorInstance.Data = local_360.Data.AllocatorInstance.Data;
      local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->DeviceId).Data.ArrayNum = local_360.Data.ArrayNum;
      (param_1->DeviceId).Data.ArrayMax = local_360.Data.ArrayMax;
      local_360.Data.ArrayNum = 0;
      local_360.Data.ArrayMax = 0;
    }
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
  }
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::
  ~vector<unsigned_int,std::allocator<unsigned_int>_>(&local_2b0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_2e0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_300);
  return true;
}

// GetDefaultInputDevice @ 14d0c43f0

uint __thiscall
Audio::FAudioCaptureRtAudioStream::GetDefaultInputDevice(FAudioCaptureRtAudioStream *this)

{
  uint uVar1;
  
  uVar1 = (**(code **)(((this->CaptureDevice).rtapi_)->_padding_ + 0x20))();
  return uVar1;
}

// GetInputDevicesAvailable @ 14d0c4500

bool __thiscall
Audio::FAudioCaptureRtAudioStream::GetInputDevicesAvailable
          (FAudioCaptureRtAudioStream *this,
          TArray<Audio::FCaptureDeviceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FCaptureDeviceInfo *pFVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  undefined1 local_40;
  
  uVar7 = (**(code **)(((this->CaptureDevice).rtapi_)->_padding_ + 0x10))();
  piVar10 = &param_1->ArrayMax;
  pFVar2 = (FCaptureDeviceInfo *)(param_1->AllocatorInstance).Data;
  if (*piVar10 < 0) {
    DestructItems<Audio::FCaptureDeviceInfo,int>(pFVar2,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&param_1->AllocatorInstance,0,piVar10);
    }
  }
  else {
    DestructItems<Audio::FCaptureDeviceInfo,int>(pFVar2,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar12 = 0;
  do {
    piVar10 = &param_1->ArrayMax;
    if (uVar7 <= uVar12) {
      return true;
    }
    local_68 = (void *)0x0;
    local_60 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    (**(code **)(this->_padding_ + 0x18))(this,&local_68,uVar12);
    if (0 < local_48) {
      pFVar11 = (param_1->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 < pFVar11 + (longlong)*piVar10 * 0x30)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar10) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_1->AllocatorInstance,piVar10);
      }
      pvVar4 = local_68;
      param_1->ArrayNum = iVar8 + 1;
      pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x30;
      *(undefined8 *)&pFVar11->field_0x0 = 0;
      lVar9 = (longlong)(int)local_60;
      *(int *)&pFVar11[8].field_0x0 = (int)local_60;
      if ((int)local_60 == 0) {
        *(int *)(pFVar11 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_60,0,(ForAnyElementType *)pFVar11,(int)local_60,
                   (int *)(pFVar11 + 0xc));
        memcpy(*(void **)&pFVar11->field_0x0,pvVar4,lVar9 * 2);
      }
      pvVar4 = local_58;
      pFVar1 = pFVar11 + 0x10;
      *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
      lVar9 = (longlong)(int)local_50;
      *(int *)&pFVar11[0x18].field_0x0 = (int)local_50;
      if ((int)local_50 == 0) {
        *(int *)(pFVar11 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_50,0,(ForAnyElementType *)pFVar1,(int)local_50,
                   (int *)(pFVar11 + 0x1c));
        memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,pvVar4,lVar9 * 2);
      }
      *(int *)&pFVar11[0x20].field_0x0 = local_48;
      *(undefined4 *)(pFVar11 + 0x24) = local_44;
      pFVar11[0x28].field_0x0 = local_40;
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    uVar12 = uVar12 + 1;
  } while( true );
}

// GetSampleRate @ 14d0c47a0

int __thiscall Audio::FAudioCaptureRtAudioStream::GetSampleRate(FAudioCaptureRtAudioStream *this)

{
  return this->SampleRate;
}

// GetStreamTime @ 14d0c47b0

bool __thiscall
Audio::FAudioCaptureRtAudioStream::GetStreamTime(FAudioCaptureRtAudioStream *this,double *param_1)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(((this->CaptureDevice).rtapi_)->_padding_ + 0x50))();
  *param_1 = dVar1;
  return true;
}

// IsCapturing @ 14d0c4830

bool __thiscall Audio::FAudioCaptureRtAudioStream::IsCapturing(FAudioCaptureRtAudioStream *this)

{
  return (((this->CaptureDevice).rtapi_)->stream_).state == STREAM_RUNNING;
}

// IsStreamOpen @ 14d0c4860

bool __thiscall Audio::FAudioCaptureRtAudioStream::IsStreamOpen(FAudioCaptureRtAudioStream *this)

{
  return (((this->CaptureDevice).rtapi_)->stream_).state != STREAM_CLOSED;
}

// OnAudioCapture @ 14d0c48c0

void __thiscall
Audio::FAudioCaptureRtAudioStream::OnAudioCapture
          (FAudioCaptureRtAudioStream *this,void *param_1,uint param_2,double param_3,bool param_4)

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

// OpenAudioCaptureStream @ 14d0c4990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Audio::FAudioCaptureRtAudioStream::OpenAudioCaptureStream
          (FAudioCaptureRtAudioStream *this,FAudioCaptureDeviceParams *param_1,
          TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> *param_2,uint param_3)

{
  RtApi *pRVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  ulong uVar13;
  int iVar14;
  undefined1 auStackY_178 [32];
  uint local_128 [2];
  StreamParameters local_120;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  int local_f0;
  TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> *local_d8;
  undefined1 local_c8 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_c0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_a0;
  uint local_7c;
  vector<unsigned_int,std::allocator<unsigned_int>_> local_70;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_d8 = param_2;
  uVar10 = GetDefaultInputDevice(this);
  if (param_1->DeviceIndex == -1) {
LAB_14d0c4acf:
    pRVar1 = (this->CaptureDevice).rtapi_;
    (**(code **)(pRVar1->_padding_ + 0x18))(pRVar1,local_c8,uVar10);
    local_120.firstChannel = 0;
    uVar13 = 8;
    uVar11 = param_1->NumInputChannels;
    if ((param_1->NumInputChannels == 0xffffffff) && (uVar11 = 8, (int)local_7c < 8)) {
      uVar11 = local_7c;
    }
    pRVar1 = (this->CaptureDevice).rtapi_;
    local_120.deviceId = uVar10;
    local_120.nChannels = uVar11;
    if ((pRVar1->stream_).state != STREAM_CLOSED) {
      (**(code **)(pRVar1->_padding_ + 0x40))();
      (**(code **)(((this->CaptureDevice).rtapi_)->_padding_ + 0x30))();
    }
    this->NumChannels = uVar11;
    uVar2 = *(undefined8 *)&this->OnCapture;
    uVar3 = *(undefined8 *)&(this->OnCapture).field_0x8;
    uVar4 = *(undefined8 *)&(this->OnCapture).field_0x10;
    uVar5 = *(undefined8 *)&(this->OnCapture).field_0x18;
    uVar6 = *(undefined8 *)&(this->OnCapture).field_0x20;
    uVar7 = *(undefined8 *)&(this->OnCapture).field_0x28;
    uVar8 = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)&this->OnCapture = *(undefined8 *)param_2;
    *(undefined8 *)&(this->OnCapture).field_0x8 = uVar8;
    uVar8 = *(undefined8 *)&param_2->field_0x18;
    *(undefined8 *)&(this->OnCapture).field_0x10 = *(undefined8 *)&param_2->field_0x10;
    *(undefined8 *)&(this->OnCapture).field_0x18 = uVar8;
    uVar8 = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&(this->OnCapture).field_0x20 = *(undefined8 *)&param_2->field_0x20;
    *(undefined8 *)&(this->OnCapture).field_0x28 = uVar8;
    *(undefined8 *)param_2 = uVar2;
    *(undefined8 *)&param_2->field_0x8 = uVar3;
    *(undefined8 *)&param_2->field_0x10 = uVar4;
    *(undefined8 *)&param_2->field_0x18 = uVar5;
    *(undefined8 *)&param_2->field_0x20 = uVar6;
    *(undefined8 *)&param_2->field_0x28 = uVar7;
    uVar10 = param_1->SampleRate;
    if (param_1->SampleRate == 0xffffffff) {
      uVar10 = local_58;
    }
    this->SampleRate = uVar10;
    local_128[0] = param_3;
    switch(param_1->PCMAudioEncoding) {
    case UNKNOWN:
    case FLOATING_POINT_32:
      uVar13 = 0x10;
      break;
    case PCM_8:
      uVar13 = 1;
      break;
    case PCM_16:
      uVar13 = 2;
      break;
    case PCM_24:
      uVar13 = 4;
      break;
    default:
      std::vector<unsigned_int,std::allocator<unsigned_int>_>::
      ~vector<unsigned_int,std::allocator<unsigned_int>_>(&local_70);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&local_a0);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&local_c0);
      if (*(longlong *)param_2 != 0) {
        plVar12 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar12 = *(longlong **)&param_2->field_0x28;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      return false;
    case PCM_32:
      break;
    case FLOATING_POINT_64:
      uVar13 = 0x20;
    }
    RtApi::openStream((this->CaptureDevice).rtapi_,(StreamParameters *)0x0,&local_120,uVar13,uVar10,
                      local_128,OnAudioCaptureCallback,this,(StreamOptions *)0x0,
                      (_func___cdecl_void_Type_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
                       *)0x0);
    pRVar1 = (this->CaptureDevice).rtapi_;
    if ((pRVar1->stream_).state == STREAM_CLOSED) {
      std::vector<unsigned_int,std::allocator<unsigned_int>_>::
      ~vector<unsigned_int,std::allocator<unsigned_int>_>(&local_70);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&local_a0);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&local_c0);
      if (*(longlong *)param_2 != 0) {
        plVar12 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar12 = *(longlong **)&param_2->field_0x28;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      bVar9 = false;
    }
    else {
      this->SampleRate = (pRVar1->stream_).sampleRate;
      std::vector<unsigned_int,std::allocator<unsigned_int>_>::
      ~vector<unsigned_int,std::allocator<unsigned_int>_>(&local_70);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&local_a0);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&local_c0);
      if (*(longlong *)param_2 != 0) {
        plVar12 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar12 = *(longlong **)&param_2->field_0x28;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      bVar9 = true;
    }
  }
  else {
    iVar14 = 0;
    uVar11 = (**(code **)(((this->CaptureDevice).rtapi_)->_padding_ + 0x10))();
    uVar10 = 0;
    while (uVar10 < uVar11) {
      local_110 = (void *)0x0;
      local_108 = 0;
      local_100 = (void *)0x0;
      local_f8 = 0;
      (**(code **)(this->_padding_ + 0x18))(this,&local_110,uVar10);
      if (local_f0 < 1) {
        if (local_100 != (void *)0x0) {
          FMemory::Free(local_100);
        }
        if (local_110 != (void *)0x0) {
          FMemory::Free(local_110);
        }
        uVar10 = uVar10 + 1;
      }
      else {
        if (iVar14 == param_1->DeviceIndex) {
          if (local_100 != (void *)0x0) {
            FMemory::Free(local_100);
          }
          if (local_110 != (void *)0x0) {
            FMemory::Free(local_110);
          }
          goto LAB_14d0c4acf;
        }
        iVar14 = iVar14 + 1;
        if (local_100 != (void *)0x0) {
          FMemory::Free(local_100);
        }
        if (local_110 != (void *)0x0) {
          FMemory::Free(local_110);
        }
        uVar10 = uVar10 + 1;
      }
    }
    if (*(longlong *)param_2 != 0) {
      plVar12 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar12 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    bVar9 = false;
  }
  return bVar9;
}

// StartStream @ 14d0c4df0

bool __thiscall Audio::FAudioCaptureRtAudioStream::StartStream(FAudioCaptureRtAudioStream *this)

{
  (**(code **)(((this->CaptureDevice).rtapi_)->_padding_ + 0x38))();
  return true;
}

// StopStream @ 14d0c4e30

bool __thiscall Audio::FAudioCaptureRtAudioStream::StopStream(FAudioCaptureRtAudioStream *this)

{
  RtApi *pRVar1;
  bool bVar2;
  
  pRVar1 = (this->CaptureDevice).rtapi_;
  bVar2 = (pRVar1->stream_).state != STREAM_CLOSED;
  if (bVar2) {
    (**(code **)(pRVar1->_padding_ + 0x40))();
  }
  return bVar2;
}

