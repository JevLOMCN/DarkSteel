// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 14

// FWasapiAggregateDeviceMgr @ 148d42cb0

FWasapiAggregateDeviceMgr * __thiscall
Audio::FWasapiAggregateDeviceMgr::FWasapiAggregateDeviceMgr(FWasapiAggregateDeviceMgr *this)

{
  int *piVar1;
  
  this->bIsInitialized = false;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerWasapiDeviceManager__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IDeviceRenderCallback__;
  piVar1 = &(this->RenderStreamDevices).ArrayMax;
  this->NumChannelsPerDevice = 0;
  this->NumDirectOutChannels = 0;
  (this->RenderStreamDevices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderStreamDevices).ArrayNum = 0;
  *piVar1 = 0;
  (this->RenderDeviceThread).Ptr = (FAudioMixerWasapiDeviceThread *)0x0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x40,&(this->RenderStreamDevices).AllocatorInstance,0,piVar1);
  return this;
}

// ~FWasapiAggregateDeviceMgr @ 148d43090

void __thiscall
Audio::FWasapiAggregateDeviceMgr::~FWasapiAggregateDeviceMgr(FWasapiAggregateDeviceMgr *this)

{
  FAudioMixerWasapiDeviceThread *pFVar1;
  FAudioMixerWasapiRunnable *pFVar2;
  FRunnableThread *pFVar3;
  FScriptContainerElement *pFVar4;
  
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
  DestructItems<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int>
            ((TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>
              *)(this->RenderStreamDevices).AllocatorInstance.Data,
             (this->RenderStreamDevices).ArrayNum);
  pFVar4 = (this->RenderStreamDevices).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CloseAudioStream @ 148d44210

bool __thiscall Audio::FWasapiAggregateDeviceMgr::CloseAudioStream(FWasapiAggregateDeviceMgr *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAudioMixerWasapiDeviceThread *pFVar3;
  FAudioMixerWasapiRunnable *pFVar4;
  FRunnableThread *pFVar5;
  byte bVar6;
  FScriptContainerElement *pFVar7;
  byte bVar8;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->RenderDeviceThread).Ptr;
  if (pFVar3 != (FAudioMixerWasapiDeviceThread *)0x0) {
    (this->RenderDeviceThread).Ptr = (FAudioMixerWasapiDeviceThread *)0x0;
    pFVar4 = (pFVar3->DeviceRenderRunnable).Ptr;
    if (pFVar4 != (FAudioMixerWasapiRunnable *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,1);
    }
    pFVar5 = (pFVar3->DeviceRenderThread).Ptr;
    if (pFVar5 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,1);
    }
    ::operator_delete(pFVar3,0x10);
  }
  iVar2 = (this->RenderStreamDevices).ArrayNum;
  if (iVar2 != 0) {
    pFVar7 = (this->RenderStreamDevices).AllocatorInstance.Data;
    bVar8 = 1;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->RenderStreamDevices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      if (*(longlong **)pFVar7 != (longlong *)0x0) {
        bVar6 = (**(code **)(**(longlong **)pFVar7 + 0x38))();
        bVar8 = bVar8 | bVar6;
      }
      pFVar7 = pFVar7 + 8;
    }
    return (bool)bVar8;
  }
  return false;
}

// DeviceRenderCallback @ 148d44890

void __thiscall
Audio::FWasapiAggregateDeviceMgr::DeviceRenderCallback(FWasapiAggregateDeviceMgr *this)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  plVar3 = *(longlong **)&this->NumDirectOutChannels;
  iVar2 = *(int *)&(this->RenderStreamDevices).AllocatorInstance.Data;
  plVar1 = plVar3 + iVar2;
  while( true ) {
    if (*(int *)&(this->RenderStreamDevices).AllocatorInstance.Data != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar3 == plVar1) break;
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar3 + 8))();
    }
    plVar3 = plVar3 + 1;
  }
  return;
}

// GetNumDirectOutChannels @ 148d452a0

int __thiscall
Audio::FWasapiAggregateDeviceMgr::GetNumDirectOutChannels(FWasapiAggregateDeviceMgr *this)

{
  return this->NumDirectOutChannels;
}

// GetNumFrames @ 148d452f0

int __thiscall
Audio::FWasapiAggregateDeviceMgr::GetNumFrames(FWasapiAggregateDeviceMgr *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (this->RenderStreamDevices).ArrayNum;
  if (iVar4 == 0) {
    return param_1;
  }
  if (iVar4 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  plVar1 = *(longlong **)(this->RenderStreamDevices).AllocatorInstance.Data;
                    /* WARNING: Could not recover jumptable at 0x000148d45353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return iVar4;
}

// InitializeHardware @ 148d47030

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiAggregateDeviceMgr::InitializeHardware
          (FWasapiAggregateDeviceMgr *this,
          TArray<Audio::FWasapiRenderStreamParams,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<void___cdecl(void)> *param_2)

{
  TArray<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  FAudioMixerWasapiRenderStream *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  FAudioMixerWasapiRenderStream *this_00;
  undefined8 *puVar14;
  ulong64 uVar15;
  FStaticBasicLogRecord *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  FDestructionSentinel local_68;
  FWasapiAudioFormat *local_50;
  
  pTVar1 = &this->RenderStreamDevices;
  piVar2 = &(this->RenderStreamDevices).ArrayMax;
  iVar12 = (this->RenderStreamDevices).ArrayNum;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((this->RenderStreamDevices).ArrayMax < 0) {
    DestructItems<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int>
              ((TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>
                *)pFVar4,iVar12);
    (this->RenderStreamDevices).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int>
              ((TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>
                *)pFVar4,iVar12);
    (this->RenderStreamDevices).ArrayNum = 0;
  }
  uVar18 = 0;
  uVar17 = 0;
  if (0 < param_1->ArrayNum) {
    uVar20 = uVar18;
    uVar22 = uVar18;
    do {
      uVar19 = (uint)uVar20;
      if (uVar19 == 0) {
        this_00 = ::operator_new(0x110);
        if (this_00 != (FAudioMixerWasapiRenderStream *)0x0) {
          memset(this_00,0,0x110);
          FAudioMixerWasapiRenderStream::FAudioMixerWasapiRenderStream(this_00);
          *(undefined4 *)&this_00[1]._padding_ = 0;
          this_00->_padding_ = (longlong)&___7FWasapiDefaultRenderStream_Audio__6B_;
          this_00[1].RenderClient.RawPointer = (IAudioRenderClient *)0x0;
          pFVar8 = this_00 + 1;
          (pFVar8->AudioFormat).WaveFormat.Format.wFormatTag = 0;
          (pFVar8->AudioFormat).WaveFormat.Format.nChannels = 0;
          (pFVar8->AudioFormat).WaveFormat.Format.nSamplesPerSec = 0;
          this_00[1].AudioFormat.WaveFormat.Format.nAvgBytesPerSec = 0;
          *(undefined8 *)&this_00[1].AudioFormat.WaveFormat.Format.cbSize = 0;
          this_00[1].AudioFormat.WaveFormat.SubFormat.Data1 = 0;
          this_00[1].AudioClient.RawPointer = (IAudioClient2 *)0x0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this_00[1].RenderClient,(FWriteAccessScope *)&local_68);
          local_50 = &this_00[1].AudioFormat;
          puVar14 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_50);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = &
                       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar15 = FDelegateHandle::GenerateNewID();
            puVar14[2] = uVar15;
            *puVar14 = &
                       ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____CBV__TFunction___A6AXXZ____V__6B_
            ;
            lVar5 = *(longlong *)param_2;
            puVar14[4] = lVar5;
            puVar14[9] = 0;
            if (lVar5 != 0) {
              puVar14 = *(undefined8 **)&param_2->field_0x28;
              if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
                puVar14 = (undefined8 *)&param_2->field_0x10;
              }
              (**(code **)*puVar14)();
            }
          }
          if (local_68.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
          }
          goto LAB_148d47228;
        }
      }
      else {
        this_00 = ::operator_new(0xf8);
        if (this_00 == (FAudioMixerWasapiRenderStream *)0x0) {
          this_00 = (FAudioMixerWasapiRenderStream *)0x0;
        }
        else {
          memset(this_00,0,0xf8);
          FAudioMixerWasapiRenderStream::FAudioMixerWasapiRenderStream(this_00);
          this_00->_padding_ = (longlong)&___7FWasapiAggregateRenderStream_Audio__6B_;
          this_00[1]._padding_ = 0;
          this_00[1].AudioClient.RawPointer = (IAudioClient2 *)0x0;
          this_00[1].RenderClient.RawPointer = (IAudioRenderClient *)0x0;
          pFVar8 = this_00 + 1;
          (pFVar8->AudioFormat).WaveFormat.Format.wFormatTag = 0;
          (pFVar8->AudioFormat).WaveFormat.Format.nChannels = 0;
          (pFVar8->AudioFormat).WaveFormat.Format.nSamplesPerSec = 0;
        }
LAB_148d47228:
        iVar12 = (this->RenderStreamDevices).ArrayNum;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->RenderStreamDevices).ArrayNum = iVar12 + 1;
        *(FAudioMixerWasapiRenderStream **)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8)
             = this_00;
      }
      iVar12 = (this->RenderStreamDevices).ArrayNum;
      if (iVar12 == 0) {
LAB_148d473b5:
        if ((byte)LogAudioMixer._0_1_ < 2) {
          return false;
        }
        pFVar16 = &::LOG_Static;
LAB_148d473c5:
        UE::Logging::Private::BasicLog<2>(pFVar16,(FLogCategoryBase *)&LogAudioMixer);
        return false;
      }
      uVar21 = ~uVar19 >> 0x1f;
      uVar13 = uVar17;
      if ((int)uVar19 < iVar12) {
        uVar13 = uVar21;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (*(longlong *)((pTVar1->AllocatorInstance).Data + uVar22) == 0) goto LAB_148d473b5;
      uVar13 = uVar17;
      if ((int)uVar19 < (this->RenderStreamDevices).ArrayNum) {
        uVar13 = uVar21;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      plVar6 = *(longlong **)((pTVar1->AllocatorInstance).Data + uVar22);
      pcVar7 = *(code **)(*plVar6 + 0x10);
      uVar13 = uVar17;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar13 = uVar21;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      cVar11 = (*pcVar7)(plVar6);
      if (cVar11 == '\0') {
        if ((byte)LogAudioMixer._0_1_ < 2) {
          return false;
        }
        pFVar16 = &::LOG_Static;
        goto LAB_148d473c5;
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar22 = uVar22 + 8;
    } while ((int)(uVar19 + 1) < param_1->ArrayNum);
    if (0 < param_1->ArrayNum) goto LAB_148d47412;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
LAB_148d47412:
  iVar12 = *(int *)((param_1->AllocatorInstance).Data + 0x28);
  iVar3 = (this->RenderStreamDevices).ArrayNum;
  this->NumChannelsPerDevice = iVar12;
  if (0 < iVar3) {
    uVar18 = (ulonglong)(uint)((iVar3 + -1) * iVar12);
  }
  this->NumDirectOutChannels = (int)uVar18;
  this->bIsInitialized = true;
  return true;
}

// IsInitialized @ 148d48150

bool __thiscall Audio::FWasapiAggregateDeviceMgr::IsInitialized(FWasapiAggregateDeviceMgr *this)

{
  return this->bIsInitialized;
}

// OpenAudioStream @ 148d49370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiAggregateDeviceMgr::OpenAudioStream
          (FWasapiAggregateDeviceMgr *this,
          TArray<Audio::FWasapiRenderStreamParams,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<void_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TUniquePtr<Audio::FAudioMixerWasapiDeviceThread,TDefaultDelete<Audio::FAudioMixerWasapiDeviceThread>_>
  *pTVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FRunnableThread *pFVar5;
  longlong *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  FAudioMixerWasapiDeviceThread *pFVar13;
  FAudioMixerWasapiRunnable *pFVar14;
  undefined ***pppuVar15;
  FAudioMixerWasapiDeviceThread *pFVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_98;
  undefined8 local_90;
  TArray<Audio::FWasapiRenderStreamParams,TSizedDefaultAllocator<32>_> *local_88;
  longlong local_80;
  code *local_78;
  undefined **local_68;
  FWasapiAggregateDeviceMgr *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar3 = (this->RenderStreamDevices).ArrayNum;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_50 = (undefined ***)0x0;
  local_60 = this;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,void>
             ::Call;
  local_88 = param_1;
  if (uVar3 == 0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      bVar9 = false;
      goto LAB_148d4970e;
    }
  }
  else {
    pFVar13 = ::operator_new(0x10);
    if (pFVar13 == (FAudioMixerWasapiDeviceThread *)0x0) {
      pFVar13 = (FAudioMixerWasapiDeviceThread *)0x0;
    }
    else {
      (pFVar13->DeviceRenderThread).Ptr = (FRunnableThread *)0x0;
      pFVar14 = ::operator_new(0x60);
      if (pFVar14 == (FAudioMixerWasapiRunnable *)0x0) {
        pFVar14 = (FAudioMixerWasapiRunnable *)0x0;
      }
      else {
        pFVar14->_padding_ = (longlong)&___7FAudioMixerWasapiRunnable_Audio__6B_;
        pTVar1 = &pFVar14->EventHandles;
        pFVar14->bIsRunning = (atomic<bool>)0x0;
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pFVar14->EventHandles).ArrayNum = 0;
        (pFVar14->EventHandles).ArrayMax = 0;
        pFVar14->OutputStreamTimeoutsDetected = 0;
        *(code **)&pFVar14->DeviceRenderCallback = local_78;
        *(undefined8 *)&(pFVar14->DeviceRenderCallback).field_0x28 = 0;
        if (local_78 != (code *)0x0) {
          pppuVar15 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar15 = local_50;
          }
          (*(code *)**pppuVar15)();
        }
        bVar9 = FAudioMixerWasapiRunnable::CreateEventHandles(pFVar14,uVar3);
        if ((bVar9) && ((TArray<void_*,TSizedDefaultAllocator<32>_> *)&local_98 != pTVar1)) {
          iVar4 = (pFVar14->EventHandles).ArrayNum;
          _Src = (pTVar1->AllocatorInstance).Data;
          local_90 = CONCAT44(local_90._4_4_,iVar4);
          if (((iVar4 != 0) || (local_90._4_4_ != 0)) &&
             (UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar4,local_90._4_4_,&local_98,iVar4,(int *)((longlong)&local_90 + 4)),
             iVar4 != 0)) {
            memcpy(local_98.Data,_Src,(longlong)iVar4 << 3);
          }
          (pFVar13->DeviceRenderRunnable).Ptr = pFVar14;
          goto LAB_148d4950b;
        }
      }
      (pFVar13->DeviceRenderRunnable).Ptr = pFVar14;
    }
LAB_148d4950b:
    uVar17 = 0;
    pTVar2 = &this->RenderDeviceThread;
    if (pTVar2 == (TUniquePtr<Audio::FAudioMixerWasapiDeviceThread,TDefaultDelete<Audio::FAudioMixerWasapiDeviceThread>_>
                   *)&local_80) {
      if (pFVar13 != (FAudioMixerWasapiDeviceThread *)0x0) {
        pFVar14 = (pFVar13->DeviceRenderRunnable).Ptr;
        if (pFVar14 != (FAudioMixerWasapiRunnable *)0x0) {
          (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14,1);
        }
        pFVar5 = (pFVar13->DeviceRenderThread).Ptr;
        pFVar16 = pFVar13;
        if (pFVar5 != (FRunnableThread *)0x0) {
          (**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,1);
        }
        goto LAB_148d4957f;
      }
    }
    else {
      pFVar16 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar13;
      if (pFVar16 != (FAudioMixerWasapiDeviceThread *)0x0) {
        pFVar14 = (pFVar16->DeviceRenderRunnable).Ptr;
        if (pFVar14 != (FAudioMixerWasapiRunnable *)0x0) {
          (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14,1);
        }
        pFVar5 = (pFVar16->DeviceRenderThread).Ptr;
        if (pFVar5 != (FRunnableThread *)0x0) {
          (**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,1);
        }
LAB_148d4957f:
        ::operator_delete(pFVar16,0x10);
      }
    }
    if (pTVar2->Ptr == (FAudioMixerWasapiDeviceThread *)0x0) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        bVar9 = false;
        goto LAB_148d4970e;
      }
    }
    else {
      if ((uint)local_90 == uVar3) {
        if (uVar3 != 0) {
          do {
            uVar19 = ~uVar17 >> 0x1f;
            uVar12 = 0;
            if ((int)uVar17 < (this->RenderStreamDevices).ArrayNum) {
              uVar12 = uVar19;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              uVar10 = (*pcVar8)();
              return (bool)uVar10;
            }
            lVar18 = (longlong)(int)uVar17;
            plVar6 = *(longlong **)((this->RenderStreamDevices).AllocatorInstance.Data + lVar18 * 8)
            ;
            pcVar8 = *(code **)(*plVar6 + 0x30);
            uVar12 = 0;
            if ((int)uVar17 < (int)(uint)local_90) {
              uVar12 = uVar19;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              uVar10 = (*pcVar8)();
              return (bool)uVar10;
            }
            uVar7 = *(undefined8 *)(local_98.Data + lVar18 * 8);
            uVar12 = 0;
            if ((int)uVar17 < local_88->ArrayNum) {
              uVar12 = uVar19;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              uVar10 = (*pcVar8)();
              return (bool)uVar10;
            }
            cVar11 = (*pcVar8)(plVar6,(local_88->AllocatorInstance).Data + lVar18 * 0x60,uVar7);
            if (cVar11 == '\0') {
              if (1 < (byte)LogAudioMixer._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
              }
              goto LAB_148d497af;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar3);
        }
        bVar9 = true;
        goto LAB_148d4970e;
      }
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        bVar9 = false;
        goto LAB_148d4970e;
      }
    }
  }
LAB_148d497af:
  bVar9 = false;
LAB_148d4970e:
  if (local_78 != (code *)0x0) {
    pppuVar15 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar15 = local_50;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return bVar9;
}

// StartAudioStream @ 148d4aa30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FWasapiAggregateDeviceMgr::StartAudioStream(FWasapiAggregateDeviceMgr *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->RenderStreamDevices).ArrayNum;
  if (iVar2 == 0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return false;
    }
  }
  else {
    pFVar5 = (this->RenderStreamDevices).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->RenderStreamDevices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) {
        bVar4 = FAudioMixerWasapiDeviceThread::Start((this->RenderDeviceThread).Ptr);
        if (bVar4) {
          return true;
        }
        if ((byte)LogAudioMixer._0_1_ < 2) {
          return false;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        return false;
      }
      if ((*(longlong **)pFVar5 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(**(longlong **)pFVar5 + 0x40))(), cVar3 == '\0')) break;
      pFVar5 = pFVar5 + 8;
    }
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return false;
    }
  }
  return false;
}

// StopAudioStream @ 148d4b030

bool __thiscall Audio::FWasapiAggregateDeviceMgr::StopAudioStream(FWasapiAggregateDeviceMgr *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAudioMixerWasapiDeviceThread *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  this_00 = (this->RenderDeviceThread).Ptr;
  if (this_00 != (FAudioMixerWasapiDeviceThread *)0x0) {
    FAudioMixerWasapiDeviceThread::Stop(this_00);
  }
  pFVar3 = (this->RenderStreamDevices).AllocatorInstance.Data;
  iVar2 = (this->RenderStreamDevices).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RenderStreamDevices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x48))();
    }
    pFVar3 = pFVar3 + 8;
  }
  return true;
}

// SubmitBuffer @ 148d4b1b0

void __thiscall
Audio::FWasapiAggregateDeviceMgr::SubmitBuffer
          (FWasapiAggregateDeviceMgr *this,uchar *param_1,ulong64 param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = (this->RenderStreamDevices).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)(this->RenderStreamDevices).AllocatorInstance.Data;
    (**(code **)(*plVar2 + 0x50))(plVar2,param_1,param_2);
  }
  return;
}

// SubmitDirectOutBuffer @ 148d4b430

void __thiscall
Audio::FWasapiAggregateDeviceMgr::SubmitDirectOutBuffer
          (FWasapiAggregateDeviceMgr *this,int param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  iVar1 = (this->RenderStreamDevices).ArrayNum;
  iVar2 = this->NumChannelsPerDevice;
  if ((((0 < iVar2) && (1 < iVar1)) && (-1 < param_1)) && (param_1 < this->NumDirectOutChannels)) {
    iVar6 = param_1 / iVar2 + 1;
    if ((0 < iVar6) && (iVar6 < iVar1)) {
      if ((iVar6 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)
                ((this->RenderStreamDevices).AllocatorInstance.Data + (longlong)iVar6 * 8);
      (**(code **)(*plVar3 + 0x58))(plVar3,(longlong)param_1 % (longlong)iVar2 & 0xffffffff,param_2)
      ;
    }
  }
  return;
}

// TeardownHardware @ 148d4bb10

bool __thiscall Audio::FWasapiAggregateDeviceMgr::TeardownHardware(FWasapiAggregateDeviceMgr *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->RenderStreamDevices).ArrayNum;
  if (iVar2 != 0) {
    pFVar5 = (this->RenderStreamDevices).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->RenderStreamDevices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar4) break;
      if (*(longlong **)pFVar5 != (longlong *)0x0) {
        (**(code **)(**(longlong **)pFVar5 + 0x18))();
        puVar3 = *(undefined8 **)pFVar5;
        if (puVar3 != (undefined8 *)0x0) {
          *(longlong *)pFVar5 = 0;
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      pFVar5 = pFVar5 + 8;
    }
    piVar1 = &(this->RenderStreamDevices).ArrayMax;
    pFVar4 = (this->RenderStreamDevices).AllocatorInstance.Data;
    iVar2 = (this->RenderStreamDevices).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int>
                ((TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>
                  *)pFVar4,iVar2);
      (this->RenderStreamDevices).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->RenderStreamDevices).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int>
                ((TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>
                  *)pFVar4,iVar2);
      (this->RenderStreamDevices).ArrayNum = 0;
    }
    this->bIsInitialized = false;
    return true;
  }
  return false;
}

