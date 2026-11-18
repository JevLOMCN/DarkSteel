// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 6

// ~FWasapiAggregateRenderStream @ 148d43110

void __thiscall
Audio::FWasapiAggregateRenderStream::~FWasapiAggregateRenderStream
          (FWasapiAggregateRenderStream *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Audio::TCircularAudioBuffer<float,16>,int>
            ((TCircularAudioBuffer<float,16> *)(this->DirectOutBuffers).AllocatorInstance.Data,
             (this->DirectOutBuffers).ArrayNum);
  pFVar1 = (this->DirectOutBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->InterleaveBuffers).AllocatorInstance.Data,(this->InterleaveBuffers).ArrayNum);
  pFVar1 = (this->InterleaveBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAudioMixerWasapiRenderStream::~FAudioMixerWasapiRenderStream
            ((FAudioMixerWasapiRenderStream *)this);
  return;
}

// DeviceRenderCallback @ 148d44900

void __thiscall
Audio::FWasapiAggregateRenderStream::DeviceRenderCallback(FWasapiAggregateRenderStream *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  IAudioRenderClient *pIVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int local_res8 [2];
  float *local_res10;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FWasapiAggregateRenderStream_DeviceRenderCallback");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId65,"FWasapiAggregateRenderStream_DeviceRenderCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\WasapiAggregateRenderStream.cpp"
               ,0x41);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId65);
  }
  if ((*(int *)((longlong)&this->_padding_ + 4) == 4) && (0 < (this->DirectOutBuffers).ArrayNum)) {
    local_res8[0] = 0;
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*(longlong *)this->_padding_ + 0x30))((longlong *)this->_padding_,local_res8);
    uVar7 = *(int *)((longlong)&this->_padding_ + 4) - local_res8[0];
    if (((this->DirectOutBuffers).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->DirectOutBuffers).AllocatorInstance.Data;
    uVar6 = *(int *)(pFVar1 + 0x18) - *(int *)(pFVar1 + 0x14);
    if (*(int *)(pFVar1 + 0x18) < *(int *)(pFVar1 + 0x14)) {
      uVar6 = uVar6 + *(int *)(pFVar1 + 0x10);
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      local_res10 = (float *)0x0;
      pIVar5 = TComPtr<IAudioRenderClient>::operator->
                         ((TComPtr<IAudioRenderClient> *)&this->_padding_);
      iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,uVar7,&local_res10);
      if (-1 < iVar4) {
        InterleaveOutput(this,local_res10,uVar7);
        pIVar5 = TComPtr<IAudioRenderClient>::operator->
                           ((TComPtr<IAudioRenderClient> *)&this->_padding_);
        iVar4 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,uVar7,0);
        if (-1 < iVar4) goto LAB_148d44a9f;
      }
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    }
  }
LAB_148d44a9f:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// InitializeHardware @ 148d47460

bool __thiscall
Audio::FWasapiAggregateRenderStream::InitializeHardware
          (FWasapiAggregateRenderStream *this,FWasapiRenderStreamParams *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *this_01;
  TCircularAudioBuffer<float,16> *pTVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar12;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int iVar11;
  
  bVar6 = FAudioMixerWasapiRenderStream::InitializeHardware
                    ((FAudioMixerWasapiRenderStream *)this,param_1);
  if (!bVar6) {
    return false;
  }
  this_00 = &this->DirectOutBuffers;
  pTVar3 = (TCircularAudioBuffer<float,16> *)(this_00->AllocatorInstance).Data;
  iVar11 = (this->DirectOutBuffers).ArrayNum;
  piVar1 = &(this->DirectOutBuffers).ArrayMax;
  piVar2 = &(this->DirectOutBuffers).ArrayNum;
  if ((this->DirectOutBuffers).ArrayMax < 0) {
    DestructItems<Audio::TCircularAudioBuffer<float,16>,int>(pTVar3,iVar11);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Audio::TCircularAudioBuffer<float,16>,int>(pTVar3,iVar11);
    *piVar2 = 0;
  }
  uVar14 = (param_1->HardwareDeviceInfo).NumChannels;
  iVar11 = *piVar2;
  if (iVar11 < (int)uVar14) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,uVar14 - iVar11,&this_00->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<Audio::TCircularAudioBuffer<float,16>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x20,uVar14 - iVar11);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar11) {
      uVar10 = iVar11 - uVar14;
      if ((int)(uVar10 | uVar14) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      if (uVar10 != 0) {
        TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar14,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&this_00->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  uVar14 = *piVar2;
  uVar9 = (ulonglong)(int)uVar14;
  pFVar15 = (this_00->AllocatorInstance).Data;
  pFVar16 = pFVar15 + uVar9 * 0x20;
  while( true ) {
    if (*piVar2 != (int)uVar9) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Audio::TCircularAudioBuffer<float,16>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar16) break;
    iVar11 = 2;
    if (2 < param_1->NumBuffers) {
      iVar11 = param_1->NumBuffers;
    }
    uVar10 = iVar11 * param_1->NumFrames;
    if (0x7ffffffe < uVar10) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCapacity < (uint32)TNumericLimits<int32>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                         ,0x373,
                         L"Max capacity for this buffer is 2,147,483,647 samples. Otherwise our index arithmetic will not work."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    *(uint *)&pFVar15[0x10].field_0x0 = uVar10 + 1;
    pFVar5 = pFVar15 + 0xc;
    LOCK();
    *(undefined4 *)(pFVar15 + 0x14) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)&pFVar15[0x18].field_0x0 = 0;
    UNLOCK();
    iVar11 = *(int *)pFVar5;
    *(int *)&pFVar15[8].field_0x0 = 0;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar15,0,(int *)pFVar5);
    }
    iVar11 = *(int *)&pFVar15[0x10].field_0x0;
    iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar11,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 8),(int *)pFVar5);
    memset((void *)(*(longlong *)&pFVar15->field_0x0 + (longlong)iVar8 * 4),0,(longlong)iVar11 << 2)
    ;
    uVar9 = (ulonglong)uVar14;
    pFVar15 = pFVar15 + 0x20;
  }
  this_01 = &this->InterleaveBuffers;
  piVar1 = &(this->InterleaveBuffers).ArrayMax;
  pTVar12 = (TArray<float,TAlignedHeapAllocator<16>_> *)(this_01->AllocatorInstance).Data;
  piVar2 = &(this->InterleaveBuffers).ArrayNum;
  if ((this->InterleaveBuffers).ArrayMax < 0) {
    DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(pTVar12,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_01->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(pTVar12,*piVar2);
    *piVar2 = 0;
  }
  uVar14 = (param_1->HardwareDeviceInfo).NumChannels;
  iVar11 = *piVar2;
  if (iVar11 < (int)uVar14) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar14 - iVar11,&this_01->AllocatorInstance,piVar2,piVar1);
    memset((this_01->AllocatorInstance).Data + (longlong)iVar8 * 0x10,0,
           (longlong)(int)(uVar14 - iVar11) << 4);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar11) {
      uVar10 = iVar11 - uVar14;
      if ((int)(uVar14 | uVar10) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      if (uVar10 != 0) {
        TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_01,uVar14,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_01->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  uVar14 = *(uint *)((longlong)&this->_padding_ + 4);
  pTVar12 = (TArray<float,TAlignedHeapAllocator<16>_> *)(this_01->AllocatorInstance).Data;
  iVar11 = *piVar2;
  uVar10 = param_1->NumFrames;
  if (param_1->NumFrames < uVar14) {
    uVar10 = uVar14;
  }
  pTVar13 = pTVar12 + iVar11;
  while( true ) {
    if (*piVar2 != iVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pTVar12 == pTVar13) break;
    iVar8 = pTVar12->ArrayNum;
    if (iVar8 < (int)uVar10) {
      TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(pTVar12,uVar10 - iVar8);
      pTVar12 = pTVar12 + 1;
    }
    else {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar8) {
        uVar14 = iVar8 - uVar10;
        if ((int)(uVar10 | uVar14) < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        if (uVar14 != 0) {
          pFVar15 = (pTVar12->AllocatorInstance).Data + (longlong)(int)uVar10 * 4;
          iVar8 = (pTVar12->ArrayNum - uVar14) - uVar10;
          if (iVar8 != 0) {
            memmove(pFVar15,pFVar15 + (longlong)(int)uVar14 * 4,(longlong)iVar8 << 2);
          }
          pTVar12->ArrayNum = pTVar12->ArrayNum - uVar14;
          UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,&pTVar12->AllocatorInstance,pTVar12->ArrayNum,&pTVar12->ArrayMax);
        }
      }
      pTVar12 = pTVar12 + 1;
    }
  }
  return true;
}

// InterleaveOutput @ 148d47b40

void __thiscall
Audio::FWasapiAggregateRenderStream::InterleaveOutput
          (FWasapiAggregateRenderStream *this,float *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TArray<float,TAlignedHeapAllocator<16>_> *this_00;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int *piVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  float *local_res10;
  uint local_res18;
  int local_res20;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  void *local_68;
  void *local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c [3];
  
  local_res20 = (this->InterleaveBuffers).ArrayNum;
  if (0 < local_res20) {
    uVar1 = *(uint *)((this->InterleaveBuffers).AllocatorInstance.Data + 8);
    if ((int)param_2 <= (int)uVar1) {
      uVar12 = 0;
      local_res10 = param_1;
      local_res18 = param_2;
      if (0 < (this->DirectOutBuffers).ArrayNum) {
        local_70 = 0;
        local_78 = 0;
        do {
          lVar4 = local_70;
          piVar11 = &(this->InterleaveBuffers).ArrayNum;
          uVar7 = ~uVar12 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar12 < *piVar11) {
            uVar8 = uVar7;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar10 = (this->InterleaveBuffers).AllocatorInstance.Data + lVar4;
          iVar6 = *(int *)(pFVar10 + 0xc);
          *(undefined4 *)&pFVar10[8].field_0x0 = 0;
          if (iVar6 < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,(ForAnyElementType *)pFVar10,0,(int *)(pFVar10 + 0xc));
          }
          uVar8 = 0;
          if ((int)uVar12 < *piVar11) {
            uVar8 = uVar7;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = (TArray<float,TAlignedHeapAllocator<16>_> *)
                    ((this->InterleaveBuffers).AllocatorInstance.Data + lVar4);
          iVar6 = this_00->ArrayNum;
          if (iVar6 < (int)uVar1) {
            TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(this_00,uVar1 - iVar6);
          }
          else {
            if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
            }
            if ((int)uVar1 < iVar6) {
              uVar8 = iVar6 - uVar1;
              if (((int)(uVar1 | uVar8) < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (uVar8 != 0) {
                pFVar10 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar1 * 4;
                iVar6 = (this_00->ArrayNum - uVar8) - uVar1;
                if (iVar6 != 0) {
                  memmove(pFVar10,pFVar10 + (longlong)(int)uVar8 * 4,(longlong)iVar6 << 2);
                }
                this_00->ArrayNum = this_00->ArrayNum - uVar8;
                UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                          (4,4,(ForAnyElementType *)this_00,this_00->ArrayNum,&this_00->ArrayMax);
              }
            }
          }
          uVar8 = 0;
          if ((int)uVar12 < (this->DirectOutBuffers).ArrayNum) {
            uVar8 = uVar7;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar4 = local_78;
          pFVar10 = (this->DirectOutBuffers).AllocatorInstance.Data;
          iVar6 = *(int *)(pFVar10 + local_78 + 0x14);
          if (*(int *)(pFVar10 + local_78 + 0x18) < iVar6) {
            iVar6 = *(int *)(pFVar10 + local_78 + 0x10) - iVar6;
          }
          else {
            iVar6 = -iVar6;
          }
          if (local_res18 <= (uint)(*(int *)(pFVar10 + local_78 + 0x18) + iVar6)) {
            uVar8 = 0;
            if ((int)uVar12 < (this->DirectOutBuffers).ArrayNum) {
              uVar8 = uVar7;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar10 = (this->DirectOutBuffers).AllocatorInstance.Data + lVar4;
            uVar8 = 0;
            if ((int)uVar12 < (this->InterleaveBuffers).ArrayNum) {
              uVar8 = uVar7;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_60 = *(void **)pFVar10;
            local_68 = *(void **)((this->InterleaveBuffers).AllocatorInstance.Data + local_70);
            iVar6 = *(int *)(pFVar10 + 0x14);
            iVar2 = *(int *)(pFVar10 + 0x18);
            if (iVar2 < iVar6) {
              uVar8 = (iVar2 - iVar6) + *(int *)(pFVar10 + 0x10);
            }
            else {
              uVar8 = iVar2 - iVar6;
            }
            if ((int)local_res18 < (int)uVar8) {
              uVar8 = local_res18;
            }
            uVar7 = *(int *)(pFVar10 + 0x10) - *(uint *)(pFVar10 + 0x14);
            if ((int)uVar8 < (int)uVar7) {
              uVar7 = uVar8;
            }
            memcpy(local_68,(void *)((longlong)local_60 + (ulonglong)*(uint *)(pFVar10 + 0x14) * 4),
                   (longlong)(int)uVar7 * 4);
            memcpy((void *)((longlong)local_68 + (longlong)(int)uVar7 * 4),local_60,
                   (longlong)(int)(uVar8 - uVar7) << 2);
            if (0x7ffffffe < local_res18) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                                 ,0x3f7,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                                 ,0x426,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            LOCK();
            *(uint *)(pFVar10 + 0x14) =
                 (*(int *)(pFVar10 + 0x14) + uVar8) % *(uint *)(pFVar10 + 0x10);
            UNLOCK();
          }
          local_78 = local_78 + 0x20;
          uVar12 = uVar12 + 1;
          local_70 = local_70 + 0x10;
        } while ((int)uVar12 < (this->DirectOutBuffers).ArrayNum);
      }
      iVar2 = local_res20;
      local_4c[0] = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
      piVar11 = &(this->InterleaveBuffers).ArrayNum;
      local_50 = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_res20,&local_58,0,local_4c);
      iVar6 = *piVar11;
      pFVar10 = (this->InterleaveBuffers).AllocatorInstance.Data;
      pFVar9 = pFVar10 + (longlong)iVar6 * 0x10;
      while( true ) {
        if (*piVar11 != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar10 == pFVar9) break;
        local_80 = *(undefined8 *)pFVar10;
        if (((local_58.Data <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < local_58.Data + (longlong)local_4c[0] * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_50 == local_4c[0]) {
          local_50 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_58,local_4c);
        }
        pFVar10 = pFVar10 + 0x10;
        *(undefined8 *)(local_58.Data + (longlong)local_50 * 8) = local_80;
        local_50 = local_50 + 1;
      }
      ArrayInterleave((float **)local_58.Data,local_res10,local_res18,iVar2);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  return;
}

// StartAudioStream @ 148d4ab20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FWasapiAggregateRenderStream::StartAudioStream(FWasapiAggregateRenderStream *this)

{
  int *piVar1;
  code *pcVar2;
  undefined1 uVar3;
  FStaticBasicLogRecord *pFVar4;
  bool bVar5;
  
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
        return true;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
      return true;
    }
    (**(code **)(*(longlong *)this->_padding_ + 0x50))();
    if (5 < (byte)LogAudioMixerWasapi._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerWasapi);
    }
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    LOCK();
    bVar5 = *piVar1 == 1;
    if (bVar5) {
      *piVar1 = 4;
    }
    UNLOCK();
    if (bVar5) {
      return true;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2450453595997340007>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerWasapi\\Private\\AudioMixerWasapiRenderStream.cpp"
                       ,0x167,
                       "StreamState.compare_exchange_strong(CurrStreamState, EAudioOutputStreamState::Running, std::memory_order_release, std::memory_order_relaxed)"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
    if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
      return true;
    }
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((byte)LogAudioMixerWasapi._0_1_ < 3) {
      return true;
    }
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&LogAudioMixerWasapi);
  return true;
}

// SubmitDirectOutBuffer @ 148d4b500

void __thiscall
Audio::FWasapiAggregateRenderStream::SubmitDirectOutBuffer
          (FWasapiAggregateRenderStream *this,int param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  int iVar1;
  void *_Dst;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar4 = 0;
    if (param_1 < (this->DirectOutBuffers).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = param_2->ArrayNum;
    pFVar7 = (this->DirectOutBuffers).AllocatorInstance.Data + (longlong)param_1 * 0x20;
    if (iVar6 == (int)this->_padding_) {
      _Dst = *(void **)pFVar7;
      _Src = (param_2->AllocatorInstance).Data;
      uVar4 = *(uint *)(pFVar7 + 0x18);
      uVar5 = *(int *)(pFVar7 + 0x18) - *(int *)(pFVar7 + 0x14);
      if (*(int *)(pFVar7 + 0x18) < *(int *)(pFVar7 + 0x14)) {
        uVar5 = uVar5 + *(int *)(pFVar7 + 0x10);
      }
      iVar1 = ~uVar5 + *(int *)(pFVar7 + 0x10);
      if (iVar6 < iVar1) {
        iVar1 = iVar6;
      }
      iVar6 = *(int *)(pFVar7 + 0x10) - uVar4;
      if (iVar1 < iVar6) {
        iVar6 = iVar1;
      }
      memcpy((void *)((longlong)_Dst + (ulonglong)uVar4 * 4),_Src,(longlong)iVar6 * 4);
      memcpy(_Dst,_Src + (longlong)iVar6 * 4,(longlong)(iVar1 - iVar6) << 2);
      LOCK();
      *(uint *)(pFVar7 + 0x18) = (iVar1 + uVar4) % *(uint *)(pFVar7 + 0x10);
      UNLOCK();
    }
  }
  return;
}

