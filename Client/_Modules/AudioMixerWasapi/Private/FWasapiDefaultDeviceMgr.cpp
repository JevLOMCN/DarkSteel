// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 12

// ~FWasapiDefaultDeviceMgr @ 148d43180

void __thiscall
Audio::FWasapiDefaultDeviceMgr::~FWasapiDefaultDeviceMgr(FWasapiDefaultDeviceMgr *this)

{
  FAudioMixerWasapiDeviceThread *pFVar1;
  FAudioMixerWasapiRunnable *pFVar2;
  FRunnableThread *pFVar3;
  FWasapiDefaultRenderStream *pFVar4;
  
  pFVar1 = (this->RenderDeviceThread).Ptr;
  if (pFVar1 != (FAudioMixerWasapiDeviceThread *)0x0) {
    pFVar2 = (pFVar1->DeviceRenderRunnable).Ptr;
    if (pFVar2 != (FAudioMixerWasapiRunnable *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
    }
    pFVar3 = (pFVar1->DeviceRenderThread).Ptr;
    if (pFVar3 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    ::operator_delete(pFVar1,0x10);
  }
  pFVar4 = (this->MainRenderStreamDevice).Ptr;
  if (pFVar4 != (FWasapiDefaultRenderStream *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  return;
}

// CloseAudioStream @ 148d442e0

bool __thiscall Audio::FWasapiDefaultDeviceMgr::CloseAudioStream(FWasapiDefaultDeviceMgr *this)

{
  FAudioMixerWasapiDeviceThread *pFVar1;
  FAudioMixerWasapiRunnable *pFVar2;
  FRunnableThread *pFVar3;
  FWasapiDefaultRenderStream *pFVar4;
  undefined1 uVar5;
  
  pFVar1 = (this->RenderDeviceThread).Ptr;
  if (pFVar1 != (FAudioMixerWasapiDeviceThread *)0x0) {
    (this->RenderDeviceThread).Ptr = (FAudioMixerWasapiDeviceThread *)0x0;
    pFVar2 = (pFVar1->DeviceRenderRunnable).Ptr;
    if (pFVar2 != (FAudioMixerWasapiRunnable *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
    }
    pFVar3 = (pFVar1->DeviceRenderThread).Ptr;
    if (pFVar3 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    ::operator_delete(pFVar1,0x10);
  }
  pFVar4 = (this->MainRenderStreamDevice).Ptr;
  if (pFVar4 != (FWasapiDefaultRenderStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d44348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(pFVar4->_padding_ + 0x38))();
    return (bool)uVar5;
  }
  return false;
}

// GetNumDirectOutChannels @ 148d452b0

int __thiscall
Audio::FWasapiDefaultDeviceMgr::GetNumDirectOutChannels(FWasapiDefaultDeviceMgr *this)

{
  return 0;
}

// GetNumFrames @ 148d45370

int __thiscall
Audio::FWasapiDefaultDeviceMgr::GetNumFrames(FWasapiDefaultDeviceMgr *this,int param_1)

{
  FWasapiDefaultRenderStream *pFVar1;
  int iVar2;
  
  pFVar1 = (this->MainRenderStreamDevice).Ptr;
  if (pFVar1 != (FWasapiDefaultRenderStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d4537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(pFVar1->_padding_ + 0x28))();
    return iVar2;
  }
  return param_1;
}

// InitializeHardware @ 148d47930

bool __thiscall
Audio::FWasapiDefaultDeviceMgr::InitializeHardware
          (FWasapiDefaultDeviceMgr *this,
          TArray<Audio::FWasapiRenderStreamParams,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<void___cdecl(void)> *param_2)

{
  FWasapiDefaultRenderStream *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FWasapiDefaultRenderStream *pFVar5;
  undefined8 *puVar6;
  TUniquePtr<Audio::FWasapiDefaultRenderStream,TDefaultDelete<Audio::FWasapiDefaultRenderStream>_>
  *pTVar7;
  longlong local_18 [2];
  
  pFVar5 = ::operator_new(0x110);
  if (pFVar5 == (FWasapiDefaultRenderStream *)0x0) {
    pFVar5 = (FWasapiDefaultRenderStream *)0x0;
  }
  else {
    memset(pFVar5,0,0x110);
    FAudioMixerWasapiRenderStream::FAudioMixerWasapiRenderStream
              ((FAudioMixerWasapiRenderStream *)pFVar5);
    pFVar5->_padding_ = (longlong)&___7FWasapiDefaultRenderStream_Audio__6B_;
    *(undefined8 *)&pFVar5->ReadNextBufferDelegate = 0;
    *(undefined8 *)&(pFVar5->ReadNextBufferDelegate).field_0x8 = 0;
    *(undefined4 *)&(pFVar5->ReadNextBufferDelegate).field_0x10 = 0;
    (pFVar5->RenderBufferView).DataPtr = (uchar *)0x0;
    (pFVar5->RenderBufferView).ArrayNum = 0;
    pFVar5->EngineBufferNumFrames = 0;
    pFVar5->EngineBufferNumBytes = 0;
  }
  pTVar7 = &this->MainRenderStreamDevice;
  if (pTVar7 == (TUniquePtr<Audio::FWasapiDefaultRenderStream,TDefaultDelete<Audio::FWasapiDefaultRenderStream>_>
                 *)local_18) {
    if (pFVar5 == (FWasapiDefaultRenderStream *)0x0) goto LAB_148d479ed;
    puVar6 = (undefined8 *)pFVar5->_padding_;
  }
  else {
    pFVar1 = pTVar7->Ptr;
    pTVar7->Ptr = pFVar5;
    if (pFVar1 == (FWasapiDefaultRenderStream *)0x0) goto LAB_148d479ed;
    puVar6 = (undefined8 *)pFVar1->_padding_;
    pFVar5 = pFVar1;
  }
  (*(code *)*puVar6)(pFVar5);
LAB_148d479ed:
  if (pTVar7->Ptr == (FWasapiDefaultRenderStream *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7634141743998304246>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\WasapiDefaultDeviceMgr.cpp"
                       ,10,"MainRenderStreamDevice.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else if (0 < param_1->ArrayNum) {
    TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    BindLambda<TFunction<void___cdecl(void)>_const_&>
              ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pTVar7->Ptr->ReadNextBufferDelegate,param_2);
    pFVar5 = pTVar7->Ptr;
    pcVar2 = *(code **)(pFVar5->_padding_ + 0x10);
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar4 = (*pcVar2)(pFVar5,(param_1->AllocatorInstance).Data);
    return (bool)uVar4;
  }
  return false;
}

// IsInitialized @ 148d48160

bool __thiscall Audio::FWasapiDefaultDeviceMgr::IsInitialized(FWasapiDefaultDeviceMgr *this)

{
  FWasapiDefaultRenderStream *pFVar1;
  char cVar2;
  
  pFVar1 = (this->MainRenderStreamDevice).Ptr;
  if (pFVar1 != (FWasapiDefaultRenderStream *)0x0) {
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x20))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// OpenAudioStream @ 148d497c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiDefaultDeviceMgr::OpenAudioStream
          (FWasapiDefaultDeviceMgr *this,
          TArray<Audio::FWasapiRenderStreamParams,TSizedDefaultAllocator<32>_> *param_1)

{
  TUniquePtr<Audio::FAudioMixerWasapiDeviceThread,TDefaultDelete<Audio::FAudioMixerWasapiDeviceThread>_>
  *pTVar1;
  int iVar2;
  FRunnableThread *pFVar3;
  FWasapiDefaultRenderStream *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  FAudioMixerWasapiDeviceThread *pFVar9;
  FAudioMixerWasapiRunnable *pFVar10;
  FAudioMixerWasapiDeviceThread *pFVar11;
  undefined ***pppuVar12;
  FAudioMixerWasapiRunnable *pFVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  longlong local_78 [2];
  code *local_68;
  undefined **local_58;
  FWasapiDefaultDeviceMgr *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar13 = (FAudioMixerWasapiRunnable *)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (undefined ***)0x0;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,void>
             ::Call;
  local_50 = this;
  pFVar9 = ::operator_new(0x10);
  if (pFVar9 == (FAudioMixerWasapiDeviceThread *)0x0) {
    pFVar9 = (FAudioMixerWasapiDeviceThread *)0x0;
  }
  else {
    (pFVar9->DeviceRenderThread).Ptr = (FRunnableThread *)0x0;
    pFVar10 = ::operator_new(0x60);
    pFVar13 = (FAudioMixerWasapiRunnable *)0x0;
    if (pFVar10 != (FAudioMixerWasapiRunnable *)0x0) {
      pFVar10->_padding_ = (longlong)&___7FAudioMixerWasapiRunnable_Audio__6B_;
      pFVar10->bIsRunning = (atomic<bool>)0x0;
      (pFVar10->EventHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->EventHandles).ArrayNum = 0;
      (pFVar10->EventHandles).ArrayMax = 0;
      pFVar10->OutputStreamTimeoutsDetected = 0;
      *(code **)&pFVar10->DeviceRenderCallback = local_68;
      *(undefined8 *)&(pFVar10->DeviceRenderCallback).field_0x28 = 0;
      if (local_68 != (code *)0x0) {
        pppuVar12 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar12 = local_40;
        }
        (*(code *)**pppuVar12)();
      }
      bVar6 = FAudioMixerWasapiRunnable::CreateEventHandles(pFVar10,1);
      pFVar13 = pFVar10;
      if (bVar6) {
        iVar2 = (pFVar10->EventHandles).ArrayNum;
        if (iVar2 < 1) {
          local_88 = 0;
          local_80 = (longlong)iVar2;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        pFVar13 = *(FAudioMixerWasapiRunnable **)(pFVar10->EventHandles).AllocatorInstance.Data;
        (pFVar9->DeviceRenderRunnable).Ptr = pFVar10;
        goto LAB_148d498f4;
      }
    }
    (pFVar9->DeviceRenderRunnable).Ptr = pFVar13;
    pFVar13 = (FAudioMixerWasapiRunnable *)0x0;
  }
LAB_148d498f4:
  pTVar1 = &this->RenderDeviceThread;
  if (pTVar1 == (TUniquePtr<Audio::FAudioMixerWasapiDeviceThread,TDefaultDelete<Audio::FAudioMixerWasapiDeviceThread>_>
                 *)local_78) {
    if (pFVar9 != (FAudioMixerWasapiDeviceThread *)0x0) {
      pFVar10 = (pFVar9->DeviceRenderRunnable).Ptr;
      if (pFVar10 != (FAudioMixerWasapiRunnable *)0x0) {
        (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,1);
      }
      pFVar3 = (pFVar9->DeviceRenderThread).Ptr;
      pFVar11 = pFVar9;
      if (pFVar3 != (FRunnableThread *)0x0) {
        (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
      }
      goto LAB_148d49968;
    }
  }
  else {
    pFVar11 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    if (pFVar11 != (FAudioMixerWasapiDeviceThread *)0x0) {
      pFVar10 = (pFVar11->DeviceRenderRunnable).Ptr;
      if (pFVar10 != (FAudioMixerWasapiRunnable *)0x0) {
        (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,1);
      }
      pFVar3 = (pFVar11->DeviceRenderThread).Ptr;
      if (pFVar3 != (FRunnableThread *)0x0) {
        (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
      }
LAB_148d49968:
      ::operator_delete(pFVar11,0x10);
    }
  }
  if (pTVar1->Ptr == (FAudioMixerWasapiDeviceThread *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      bVar6 = false;
      goto LAB_148d49a43;
    }
  }
  else if (pFVar13 == (FAudioMixerWasapiRunnable *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      bVar6 = false;
      goto LAB_148d49a43;
    }
  }
  else {
    pFVar4 = (this->MainRenderStreamDevice).Ptr;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x30);
    if (param_1->ArrayNum < 1) {
      local_88 = 0;
      local_80 = (longlong)param_1->ArrayNum;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    cVar8 = (*pcVar5)(pFVar4,(param_1->AllocatorInstance).Data,pFVar13);
    if (cVar8 != '\0') {
      bVar6 = true;
      goto LAB_148d49a43;
    }
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  bVar6 = false;
LAB_148d49a43:
  if (local_68 != (code *)0x0) {
    pppuVar12 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar12 = local_40;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return bVar6;
}

// StartAudioStream @ 148d4ac20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FWasapiDefaultDeviceMgr::StartAudioStream(FWasapiDefaultDeviceMgr *this)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(((this->MainRenderStreamDevice).Ptr)->_padding_ + 0x40))();
  if (cVar1 == '\0') {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return false;
    }
  }
  else {
    bVar2 = FAudioMixerWasapiDeviceThread::Start((this->RenderDeviceThread).Ptr);
    if (bVar2) {
      return true;
    }
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  return false;
}

// StopAudioStream @ 148d4b0b0

bool __thiscall Audio::FWasapiDefaultDeviceMgr::StopAudioStream(FWasapiDefaultDeviceMgr *this)

{
  FAudioMixerWasapiDeviceThread *this_00;
  FWasapiDefaultRenderStream *pFVar1;
  
  this_00 = (this->RenderDeviceThread).Ptr;
  if (this_00 != (FAudioMixerWasapiDeviceThread *)0x0) {
    FAudioMixerWasapiDeviceThread::Stop(this_00);
  }
  pFVar1 = (this->MainRenderStreamDevice).Ptr;
  if (pFVar1 != (FWasapiDefaultRenderStream *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x48))();
  }
  return true;
}

// SubmitBuffer @ 148d4b230

void __thiscall
Audio::FWasapiDefaultDeviceMgr::SubmitBuffer
          (FWasapiDefaultDeviceMgr *this,uchar *param_1,ulong64 param_2)

{
  FWasapiDefaultRenderStream *pFVar1;
  
  pFVar1 = (this->MainRenderStreamDevice).Ptr;
  if (pFVar1 != (FWasapiDefaultRenderStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d4b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x50))();
    return;
  }
  return;
}

// SubmitDirectOutBuffer @ 148d4b640

void __thiscall
Audio::FWasapiDefaultDeviceMgr::SubmitDirectOutBuffer
          (FWasapiDefaultDeviceMgr *this,int param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  return;
}

// TeardownHardware @ 148d4bc00

bool __thiscall Audio::FWasapiDefaultDeviceMgr::TeardownHardware(FWasapiDefaultDeviceMgr *this)

{
  FWasapiDefaultRenderStream *pFVar1;
  
  pFVar1 = (this->MainRenderStreamDevice).Ptr;
  if (pFVar1 != (FWasapiDefaultRenderStream *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))();
    pFVar1 = (this->MainRenderStreamDevice).Ptr;
    if (pFVar1 != (FWasapiDefaultRenderStream *)0x0) {
      (this->MainRenderStreamDevice).Ptr = (FWasapiDefaultRenderStream *)0x0;
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    return true;
  }
  return false;
}

