// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureWasapi
// Functions: 17

// FWasapiStreamManager @ 14d0bde20

/* WARNING: Enum "Type": Some values do not have unique names */

FWasapiStreamManager * __thiscall
Audio::FWasapiStreamManager::FWasapiStreamManager(FWasapiStreamManager *this)

{
  FWasapiDeviceEnumeration *this_00;
  FString *this_01;
  TComPtr<IMMDeviceEnumerator> *ppv;
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  HRESULT HVar5;
  FWasapiStreamManager *pFVar6;
  int iVar7;
  FWasapiDeviceEnumeration *local_res8;
  FString local_28;
  
  this->State = STREAM_CLOSED;
  this_00 = &this->DeviceEnumerator;
  (this->InputStream).Object = (FWasapiInputStream *)0x0;
  (this->InputStream).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7FWasapiStreamManager_Audio__6B_;
  this_01 = &(this->DeviceEnumerator).DefaultCaptureId;
  ppv = &(this->DeviceEnumerator).DeviceEnumerator;
  (this->CaptureThread).Ptr = (FWasapiCaptureThread *)0x0;
  (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceEnumerator).DefaultCaptureId.Data.ArrayNum = 0;
  (this->DeviceEnumerator).DefaultCaptureId.Data.ArrayMax = 0;
  ppv->RawPointer = (IMMDeviceEnumerator *)0x0;
  (this_00->DefaultRenderId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceEnumerator).DefaultRenderId.Data.ArrayNum = 0;
  (this->DeviceEnumerator).DefaultRenderId.Data.ArrayMax = 0;
  HVar5 = CoCreateInstance((IID *)&_GUID_bcde0395_e52f_467c_8e3d_c4579291692e,(LPUNKNOWN)0x0,1,
                           (IID *)&_GUID_a95664d2_9614_4f35_a746_de8db63617e6,&ppv->RawPointer);
  if (((HVar5 < 0) || (ppv->RawPointer == (IMMDeviceEnumerator *)0x0)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8315321955121102878>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiDeviceEnumeration.cpp"
                         ,0x1e,
                         "(((HRESULT)(::CoCreateInstance(__uuidof(MMDeviceEnumerator), nullptr, CLSCTX_INPROC_SERVER, __uuidof(**(&DeviceEnumerator)), IID_PPV_ARGS_Helper(&DeviceEnumerator)))) >= 0) && (DeviceEnumerator != nullptr)"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FWasapiStreamManager *)(*pcVar1)();
    return pFVar6;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_res8 = this_00;
  bVar4 = `Audio::FWasapiDeviceEnumeration::EnumerateDefaults'::__l2::<lambda_1>::operator()
                    (&local_res8,eRender,eConsole,&local_28);
  if (bVar4) {
    iVar3 = local_28.Data.ArrayNum;
    if (5 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange
              (&this_00->DefaultRenderId,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar7);
  }
  else if (5 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  bVar4 = `Audio::FWasapiDeviceEnumeration::EnumerateDefaults'::__l2::<lambda_1>::operator()
                    (&local_res8,eCapture,eConsole,&local_28);
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (bVar4) {
    iVar3 = local_28.Data.ArrayNum;
    if (5 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange(this_01,(wchar_t *)FVar2.Data,iVar7);
  }
  else if (5 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return this;
}

// ~FWasapiStreamManager @ 14d0be0e0

void __thiscall Audio::FWasapiStreamManager::~FWasapiStreamManager(FWasapiStreamManager *this)

{
  FWasapiCaptureThread *pFVar1;
  FWasapiCaptureRunnable *pFVar2;
  FRunnableThread *pFVar3;
  IMMDeviceEnumerator *pIVar4;
  FScriptContainerElement *pFVar5;
  
  this->_padding_ = (longlong)&___7FWasapiStreamManager_Audio__6B_;
  pFVar1 = (this->CaptureThread).Ptr;
  if (pFVar1 != (FWasapiCaptureThread *)0x0) {
    pFVar2 = (pFVar1->CaptureRunnable).Ptr;
    if (pFVar2 != (FWasapiCaptureRunnable *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
    }
    pFVar3 = (pFVar1->CaptureThread).Ptr;
    if (pFVar3 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    ::operator_delete(pFVar1,0x10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputStream).SharedReferenceCount.ReferenceController);
  pIVar4 = (this->DeviceEnumerator).DeviceEnumerator.RawPointer;
  if (pIVar4 != (IMMDeviceEnumerator *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pFVar5 = (this->DeviceEnumerator).DefaultCaptureId.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->DeviceEnumerator).DefaultRenderId.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// AbortStream @ 14d0be660

void __thiscall Audio::FWasapiStreamManager::AbortStream(FWasapiStreamManager *this)

{
  FWasapiCaptureThread *pFVar1;
  FRunnableThread *pFVar2;
  bool bVar3;
  
  pFVar1 = (this->CaptureThread).Ptr;
  this->State = STREAM_STOPPING;
  if ((pFVar1->CaptureThread).Ptr == (FRunnableThread *)0x0) {
    this->State = STREAM_STOPPED;
    return;
  }
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
  this->State = STREAM_STOPPED;
  return;
}

// CloseStream @ 14d0beae0

void __thiscall Audio::FWasapiStreamManager::CloseStream(FWasapiStreamManager *this)

{
  FWasapiCaptureThread *pFVar1;
  FWasapiCaptureRunnable *pFVar2;
  FRunnableThread *pFVar3;
  TSharedPtr<Audio::FWasapiInputStream,1> local_18;
  
  if (this->State == STREAM_CAPTURING) {
    StopStream(this);
  }
  pFVar1 = (this->CaptureThread).Ptr;
  (this->CaptureThread).Ptr = (FWasapiCaptureThread *)0x0;
  if (pFVar1 != (FWasapiCaptureThread *)0x0) {
    pFVar2 = (pFVar1->CaptureRunnable).Ptr;
    if (pFVar2 != (FWasapiCaptureRunnable *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
    }
    pFVar3 = (pFVar1->CaptureThread).Ptr;
    if (pFVar3 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    ::operator_delete(pFVar1,0x10);
  }
  local_18.Object = (FWasapiInputStream *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<Audio::FWasapiInputStream,1>::operator=(&this->InputStream,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  this->State = STREAM_CLOSED;
  return;
}

// GetDefaultInputDeviceId @ 14d0bf390

FString * __thiscall
Audio::FWasapiStreamManager::GetDefaultInputDeviceId
          (FWasapiStreamManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&(this->DeviceEnumerator).DefaultCaptureId);
  return __return_storage_ptr__;
}

// GetDefaultOutputDeviceId @ 14d0bf3f0

FString * __thiscall
Audio::FWasapiStreamManager::GetDefaultOutputDeviceId
          (FWasapiStreamManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&(this->DeviceEnumerator).DefaultRenderId);
  return __return_storage_ptr__;
}

// GetDeviceIdFromIndex @ 14d0bf9b0

bool __thiscall
Audio::FWasapiStreamManager::GetDeviceIdFromIndex
          (FWasapiStreamManager *this,int param_1,
          __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 param_2,FString *param_3)

{
  bool bVar1;
  
  bVar1 = FWasapiDeviceEnumeration::GetDeviceIdFromIndex
                    (&this->DeviceEnumerator,param_1,param_2,param_3);
  return bVar1;
}

// GetDeviceIndexFromId @ 14d0bfca0

bool __thiscall
Audio::FWasapiStreamManager::GetDeviceIndexFromId
          (FWasapiStreamManager *this,FString *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FWasapiDeviceEnumeration::GetDeviceIndexFromId(&this->DeviceEnumerator,param_1,param_2);
  return bVar1;
}

// GetDeviceInfo @ 14d0bfe30

bool __thiscall
Audio::FWasapiStreamManager::GetDeviceInfo
          (FWasapiStreamManager *this,FString *param_1,FDeviceInfo *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  TComPtr<IMMDevice> TVar3;
  bool bVar4;
  TComPtr<IMMDevice> local_res8;
  FDeviceInfo local_58;
  
  local_res8.RawPointer = (IMMDevice *)0x0;
  bVar4 = FWasapiDeviceEnumeration::GetIMMDevice(&this->DeviceEnumerator,param_1,&local_res8);
  TVar3.RawPointer = local_res8.RawPointer;
  if (bVar4) {
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
    if (local_res8.RawPointer != (IMMDevice *)0x0) {
      (**(code **)((longlong)*local_res8.RawPointer + 8))(local_res8.RawPointer);
    }
    bVar4 = FWasapiDeviceEnumeration::GetDeviceProperties
                      (&this->DeviceEnumerator,(IMMDevice *)&local_res8,&local_58);
    if (bVar4) {
      if (param_2 != &local_58) {
        pFVar2 = (param_2->DeviceId).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_2->DeviceId).Data.AllocatorInstance.Data =
             local_58.DeviceId.Data.AllocatorInstance.Data;
        (param_2->DeviceId).Data.ArrayNum = local_58.DeviceId.Data.ArrayNum;
        (param_2->DeviceId).Data.ArrayMax = local_58.DeviceId.Data.ArrayMax;
        local_58.DeviceId.Data.ArrayNum = 0;
        local_58.DeviceId.Data.ArrayMax = 0;
        local_58.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pFVar1 = &param_2->FriendlyName;
      if (pFVar1 != &local_58.FriendlyName) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_58.FriendlyName.Data.AllocatorInstance.Data;
        (param_2->FriendlyName).Data.ArrayNum = local_58.FriendlyName.Data.ArrayNum;
        (param_2->FriendlyName).Data.ArrayMax = local_58.FriendlyName.Data.ArrayMax;
        local_58.FriendlyName.Data.ArrayNum = 0;
        local_58.FriendlyName.Data.ArrayMax = 0;
        local_58.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      param_2->NumInputChannels = local_58.NumInputChannels;
      param_2->NumOutputChannels = local_58.NumOutputChannels;
      param_2->BitsPerSample = local_58.BitsPerSample;
      param_2->PreferredSampleRate = local_58.PreferredSampleRate;
      param_2->EndpointType = local_58.EndpointType;
      if (local_58.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.FriendlyName.Data.AllocatorInstance.Data);
      }
      if (local_58.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.DeviceId.Data.AllocatorInstance.Data);
      }
      if (TVar3.RawPointer != (IMMDevice *)0x0) {
        (**(code **)((longlong)*TVar3.RawPointer + 0x10))(TVar3.RawPointer);
      }
      return true;
    }
    if (local_58.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FriendlyName.Data.AllocatorInstance.Data);
    }
    if (local_58.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.DeviceId.Data.AllocatorInstance.Data);
    }
  }
  if (TVar3.RawPointer != (IMMDevice *)0x0) {
    (**(code **)((longlong)*TVar3.RawPointer + 0x10))(TVar3.RawPointer);
  }
  return false;
}

// GetInputDevicesAvailable @ 14d0c0c70

bool __thiscall
Audio::FWasapiStreamManager::GetInputDevicesAvailable
          (FWasapiStreamManager *this,
          TArray<Audio::FWasapiDeviceEnumeration::FDeviceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  bVar1 = FWasapiDeviceEnumeration::GetInputDevicesAvailable(&this->DeviceEnumerator,param_1);
  return bVar1;
}

// GetStreamBufferSizeBytes @ 14d0c0c90

uint __thiscall Audio::FWasapiStreamManager::GetStreamBufferSizeBytes(FWasapiStreamManager *this)

{
  FWasapiInputStream *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if ((this->InputStream).Object == (FWasapiInputStream *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (this->InputStream).Object;
  uVar4 = FWasapiAudioFormat::GetNumChannels(&pFVar1->AudioFormat);
  uVar5 = FWasapiAudioFormat::GetBytesPerSample(&pFVar1->AudioFormat);
  return uVar5 * uVar4 * pFVar1->NumFramesPerBuffer;
}

// GetStreamPosition @ 14d0c0d30

double __thiscall Audio::FWasapiStreamManager::GetStreamPosition(FWasapiStreamManager *this)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((this->InputStream).Object == (FWasapiInputStream *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar3 = (double)(*pcVar1)();
      return dVar3;
    }
  }
  return (double)((this->InputStream).Object)->DevicePosition;
}

// IsCapturing @ 14d0c1000

bool __thiscall Audio::FWasapiStreamManager::IsCapturing(FWasapiStreamManager *this)

{
  return this->State == STREAM_CAPTURING;
}

// IsStreamOpen @ 14d0c1030

bool __thiscall Audio::FWasapiStreamManager::IsStreamOpen(FWasapiStreamManager *this)

{
  return this->State != STREAM_CLOSED;
}

// OpenStream @ 14d0c14a0

bool __thiscall
Audio::FWasapiStreamManager::OpenStream
          (FWasapiStreamManager *this,FString *param_1,FWasapiAudioFormat *param_2,uint param_3,
          TFunction<void___cdecl(void_*,unsigned_int,double,bool)> *param_4)

{
  TSharedPtr<Audio::FWasapiInputStream,1> *this_00;
  atomic<int> *paVar1;
  TUniquePtr<Audio::FWasapiCaptureThread,TDefaultDelete<Audio::FWasapiCaptureThread>_> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWasapiCaptureRunnable *pFVar5;
  FRunnableThread *pFVar6;
  code *pcVar7;
  FWasapiStreamManager *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  FWasapiCaptureThread *this_01;
  TReferenceControllerBase<1> *pTVar12;
  longlong *plVar13;
  TComPtr<IMMDevice> TVar14;
  FWasapiInputStream *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  TComPtr<IMMDevice> local_c8;
  IMMDevice *local_c0;
  FWasapiStreamManager *local_b8;
  TSharedPtr<Audio::FWasapiInputStream,1> local_b0;
  TSharedPtr<Audio::FWasapiInputStream,1> local_a0;
  longlong local_90;
  TFunction<void___cdecl(void_*,unsigned_int,double,bool)> local_88;
  TSharedPtr<Audio::FWasapiInputStream,1> local_58;
  
  local_b8 = this;
  if ((this->State != STREAM_CLOSED) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("State == EStreamState::STREAM_CLOSED",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiStreamManager.cpp"
                         ,0x34,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  this_00 = &this->InputStream;
  if (((this->InputStream).Object != (FWasapiInputStream *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputStream == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiStreamManager.cpp"
                         ,0x35,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  local_c8.RawPointer = (IMMDevice *)0x0;
  bVar9 = FWasapiDeviceEnumeration::GetIMMDevice(&this->DeviceEnumerator,param_1,&local_c8);
  TVar14.RawPointer = local_c8.RawPointer;
  if (!bVar9) {
LAB_14d0c1806:
    if (TVar14.RawPointer != (IMMDevice *)0x0) {
      (**(code **)((longlong)*TVar14.RawPointer + 0x10))(TVar14.RawPointer);
    }
    if (*(longlong *)param_4 != 0) {
      plVar13 = (longlong *)&param_4->field_0x10;
      if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
        plVar13 = *(longlong **)&param_4->field_0x28;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    return false;
  }
  pTVar11 = ::operator_new(0xa0);
  TVar14.RawPointer = local_c8.RawPointer;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pFVar15 = (FWasapiInputStream *)&DAT_00000010;
    pTVar11 = pTVar12;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWasapiInputStream_Audio___00_SharedPointerInternals__6B_
    ;
    local_88._0_8_ = *(undefined8 *)param_4;
    local_88._40_8_ = *(undefined8 *)&param_4->field_0x28;
    *(undefined8 *)&param_4->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_4->field_0x20;
    local_88._16_4_ = *(undefined4 *)&param_4->field_0x10;
    local_88._20_4_ = *(undefined4 *)&param_4->field_0x14;
    local_88._24_4_ = *(undefined4 *)&param_4->field_0x18;
    local_88._28_4_ = *(undefined4 *)&param_4->field_0x1c;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_4 = 0;
    }
    local_c0 = local_c8.RawPointer;
    if (local_c8.RawPointer != (IMMDevice *)0x0) {
      (**(code **)((longlong)*local_c8.RawPointer + 8))(local_c8.RawPointer);
    }
    FWasapiInputStream::FWasapiInputStream
              ((FWasapiInputStream *)(pTVar11 + 1),(IMMDevice *)&local_c0,param_2,param_3,&local_88)
    ;
    pFVar15 = (FWasapiInputStream *)(pTVar11 + 1);
    if ((pFVar15 == (FWasapiInputStream *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar16 = pTVar11;
  if (this_00 != &local_58) {
    this_00->Object = pFVar15;
    pTVar4 = (this->InputStream).SharedReferenceCount.ReferenceController;
    if (pTVar11 != pTVar4) {
      (this->InputStream).SharedReferenceCount.ReferenceController = pTVar11;
      pTVar16 = pTVar12;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->SharedReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)pTVar4->_padding_)(pTVar4);
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          pTVar16 = (TReferenceControllerBase<1> *)0x0;
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if ((this_00->Object == (FWasapiInputStream *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if (this_00->Object->bIsInitialized == false) {
    local_a0.Object = (FWasapiInputStream *)0x0;
    local_a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TSharedPtr<Audio::FWasapiInputStream,1>::operator=(this_00,&local_a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
    goto LAB_14d0c1806;
  }
  this_01 = ::operator_new(0x10);
  if (this_01 != (FWasapiCaptureThread *)0x0) {
    local_b0.Object = this_00->Object;
    local_b0.SharedReferenceCount.ReferenceController =
         (this->InputStream).SharedReferenceCount.ReferenceController;
    if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (TReferenceControllerBase<1> *)
              FWasapiCaptureThread::FWasapiCaptureThread(this_01,&local_b0);
  }
  pFVar8 = local_b8;
  pTVar2 = &local_b8->CaptureThread;
  if (pTVar2 == (TUniquePtr<Audio::FWasapiCaptureThread,TDefaultDelete<Audio::FWasapiCaptureThread>_>
                 *)&local_90) {
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0c17ab;
    pFVar5 = ((TUniquePtr<Audio::FWasapiCaptureRunnable,TDefaultDelete<Audio::FWasapiCaptureRunnable>_>
               *)&pTVar12->SharedReferenceCount)->Ptr;
    if (pFVar5 != (FWasapiCaptureRunnable *)0x0) {
      (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,1);
    }
    pFVar6 = ((TUniquePtr<FRunnableThread,TDefaultDelete<FRunnableThread>_> *)&pTVar12->_padding_)->
             Ptr;
    pTVar11 = pTVar12;
    if (pFVar6 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,1);
    }
  }
  else {
    pTVar11 = (TReferenceControllerBase<1> *)pTVar2->Ptr;
    pTVar2->Ptr = (FWasapiCaptureThread *)pTVar12;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0c17ab;
    pFVar5 = ((TUniquePtr<Audio::FWasapiCaptureRunnable,TDefaultDelete<Audio::FWasapiCaptureRunnable>_>
               *)&pTVar11->SharedReferenceCount)->Ptr;
    if (pFVar5 != (FWasapiCaptureRunnable *)0x0) {
      (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,1);
    }
    pFVar6 = ((TUniquePtr<FRunnableThread,TDefaultDelete<FRunnableThread>_> *)&pTVar11->_padding_)->
             Ptr;
    if (pFVar6 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,1);
    }
  }
  ::operator_delete(pTVar11,0x10);
LAB_14d0c17ab:
  pFVar8->State = STREAM_STOPPED;
  if (TVar14.RawPointer != (IMMDevice *)0x0) {
    (**(code **)((longlong)*TVar14.RawPointer + 0x10))(TVar14.RawPointer);
  }
  if (*(longlong *)param_4 != 0) {
    plVar13 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return true;
}

// StartStream @ 14d0c1e10

void __thiscall Audio::FWasapiStreamManager::StartStream(FWasapiStreamManager *this)

{
  FWasapiCaptureThread *pFVar1;
  FRunnableThread *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRunnableThread *pFVar5;
  longlong lVar6;
  FWasapiCaptureThread local_18;
  
  if (this->State != STREAM_STOPPED) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EStreamState::STREAM_STOPPED",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiStreamManager.cpp"
                       ,0x52,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->CaptureThread).Ptr;
  if ((pFVar1->CaptureThread).Ptr != (FRunnableThread *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CaptureThread == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiCaptureThread.cpp"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = FRunnableThread::Create
                     ((FRunnable *)(pFVar1->CaptureRunnable).Ptr,L"Audio Capture Thread",0,
                      TPri_TimeCritical,0xffffffffffffffff,None);
  if (pFVar1 == &local_18) {
    if (pFVar5 == (FRunnableThread *)0x0) goto LAB_14d0c1ed0;
    lVar6 = pFVar5->_padding_;
  }
  else {
    pFVar2 = (pFVar1->CaptureThread).Ptr;
    (pFVar1->CaptureThread).Ptr = pFVar5;
    if (pFVar2 == (FRunnableThread *)0x0) goto LAB_14d0c1ed0;
    lVar6 = pFVar2->_padding_;
    pFVar5 = pFVar2;
  }
  (**(code **)(lVar6 + 0x30))(pFVar5,1);
LAB_14d0c1ed0:
  this->State = -(uint)((pFVar1->CaptureThread).Ptr != (FRunnableThread *)0x0) & STREAM_CAPTURING;
  return;
}

// StopStream @ 14d0c2060

void __thiscall Audio::FWasapiStreamManager::StopStream(FWasapiStreamManager *this)

{
  FWasapiCaptureThread *pFVar1;
  FRunnableThread *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->State != STREAM_CAPTURING) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("State == EStreamState::STREAM_CAPTURING",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiStreamManager.cpp"
                         ,0x65,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->CaptureThread).Ptr;
  this->State = STREAM_STOPPING;
  if ((pFVar1->CaptureThread).Ptr != (FRunnableThread *)0x0) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId77,"Audio::FWasapiCaptureThread::Stop",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioCaptureImplementations\\Windows\\AudioCaputureWasapi\\Private\\WasapiCaptureThread.cpp"
                 ,0x4d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId77);
    }
    pFVar2 = (pFVar1->CaptureThread).Ptr;
    (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,1);
    pFVar2 = (pFVar1->CaptureThread).Ptr;
    (pFVar1->CaptureThread).Ptr = (FRunnableThread *)0x0;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  this->State = STREAM_STOPPED;
  return;
}

