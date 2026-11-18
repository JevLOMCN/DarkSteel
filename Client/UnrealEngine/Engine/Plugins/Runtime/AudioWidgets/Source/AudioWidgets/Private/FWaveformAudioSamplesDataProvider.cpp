// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 14

// FWaveformAudioSamplesDataProvider @ 14d8b69e0

/* WARNING: Enum "Type": Some values do not have unique names */

FWaveformAudioSamplesDataProvider * __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::FWaveformAudioSamplesDataProvider
          (FWaveformAudioSamplesDataProvider *this,uint param_1,UAudioBus *param_2,uint param_3,
          float param_4,float param_5,float param_6)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  int *piVar4;
  TCircularAudioBuffer<float,16> *pTVar5;
  atomic<int> aVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  longlong *plVar11;
  bool bVar12;
  int iVar13;
  FAudioDeviceManager *this_00;
  FMixerDevice *pFVar14;
  FTSTicker *this_01;
  undefined8 *puVar15;
  ulong64 uVar16;
  FWaveformAudioSamplesDataProvider *pFVar17;
  TWeakPtr<FTSTicker::FElement,1> *pTVar18;
  float fVar19;
  float local_res8 [2];
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  uint uStack_b4;
  TWeakPtr<FTSTicker::FElement,1> local_a8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  
  *(undefined8 *)&(this->OnDataViewGenerated).field_0x18 = 2;
  pTVar5 = &this->AudioSamplesCircularBuffer;
  pTVar1 = &this->TickerHandle;
  this->_padding_ = (longlong)&___7FWaveformAudioSamplesDataProvider_AudioWidgets__6B_;
  piVar4 = &(this->AudioSamplesCircularBuffer).InternalBuffer.ArrayMax;
  this->_padding_ = 0;
  piVar2 = &(this->AudioSamplesCircularBuffer).InternalBuffer.ArrayNum;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDataViewGenerated = 0;
  *(undefined8 *)&(this->OnDataViewGenerated).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataViewGenerated).field_0x10 = 0;
  pTVar1->Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->NumChannelsToProvide = 0;
  this->NumChannels = 0;
  this->SampleRate = 0;
  this->MaxTimeWindowMs = 0.0;
  this->MixerDevice = (FMixerDevice *)0x0;
  this->AudioBus = (UAudioBus *)0x0;
  (this->PatchOutput).Object = (FPatchOutput *)0x0;
  (this->PatchOutput).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TempAudioBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempAudioBuffer).ArrayNum = 0;
  (this->TempAudioBuffer).ArrayMax = 0;
  (pTVar5->InternalBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar4 = 0;
  (this->AudioSamplesCircularBuffer).ReadCounter.Counter = 0;
  (this->AudioSamplesCircularBuffer).WriteCounter.Counter = 0;
  (this->AudioSamplesCircularBuffer).Capacity = 1;
  LOCK();
  (this->AudioSamplesCircularBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->AudioSamplesCircularBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar13 = *piVar4;
  *piVar2 = 0;
  if (iVar13 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)pTVar5,0,piVar4);
  }
  uVar7 = (this->AudioSamplesCircularBuffer).Capacity;
  iVar13 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (4,4,uVar7,(ForAnyElementType *)pTVar5,
                      &(this->AudioSamplesCircularBuffer).InternalBuffer.ArrayNum,piVar4);
  memset((pTVar5->InternalBuffer).AllocatorInstance.Data + (longlong)iVar13 * 4,0,
         (longlong)(int)uVar7 << 2);
  (this->AudioSamplesForView).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioSamplesForView).ArrayNum = 0;
  (this->AudioSamplesForView).ArrayMax = 0;
  (this->DataView).SampleData.DataPtr = (float *)0x0;
  (this->DataView).SampleData.ArrayNum = 0;
  (this->DataView).NumDimensions = 0;
  (this->DataView).SampleRate = 0;
  this->AnalysisPeriodSamples = 0;
  this->ChannelIndexToAnalyze = 0;
  this->TriggerMode = None;
  this->TriggerThreshold = 0.0;
  this->TimeWindowSamples = 0;
  this->bIsProcessing = false;
  this->bHasTriggered = false;
  this->NumSamplesPushedToCircularBuffer = 0;
  if (param_2 == (UAudioBus *)0x0) {
    if (1 < (byte)LogAudioWidgets._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioWidgets);
    }
  }
  else {
    this_00 = FAudioDeviceManager::Get();
    if (this_00 == (FAudioDeviceManager *)0x0) {
      if (1 < (byte)LogAudioWidgets._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioWidgets);
      }
    }
    else {
      pFVar14 = (FMixerDevice *)FAudioDeviceManager::GetAudioDeviceRaw(this_00,param_1);
      this->MixerDevice = pFVar14;
      if (pFVar14 == (FMixerDevice *)0x0) {
        if (1 < (byte)LogAudioWidgets._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioWidgets);
        }
      }
      else {
        this->NumChannelsToProvide = param_3;
        this->AudioBus = param_2;
        this->NumChannels = param_2->AudioBusChannels + 1;
        this->SampleRate = (uint)(longlong)(float)*(int *)&pFVar14->field_0x84;
        if (((pTVar1->Object == (FElement *)0x0) ||
            (pTVar8 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
            pTVar8 == (TReferenceControllerBase<1> *)0x0)) ||
           ((int)pTVar8->SharedReferenceCount < 1)) {
          this_01 = FTSTicker::GetCoreTicker();
          uStack_bc = local_a8.WeakReferenceCount.ReferenceController._4_4_;
          iStack_c0 = 0;
          local_c8 = (FScriptContainerElement *)Tick;
          local_e8 = (undefined1  [8])0x0;
          local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_e0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                     (FWriteAccessScope *)&local_80);
          local_68 = &local_e0;
          puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_e0);
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = &
                       ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar16 = FDelegateHandle::GenerateNewID();
            puVar15[2] = uVar16;
            puVar15[4] = local_c8;
            puVar15[5] = CONCAT44(uStack_bc,iStack_c0);
            *puVar15 = &
                       ___7__TBaseRawMethodDelegateInstance__0A_VFWaveformAudioSamplesDataProvider_AudioWidgets____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar15[3] = this;
            if (puVar15[4] == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InUserObject != nullptr && MethodPtr != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x1d8,L"");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                pFVar17 = (FWaveformAudioSamplesDataProvider *)(*pcVar10)();
                return pFVar17;
              }
            }
          }
          if (local_80.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
          }
          pTVar18 = FTSTicker::AddTicker
                              (this_01,&local_a8,
                               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_e8
                               ,0.0);
          if (pTVar1 != pTVar18) {
            pTVar1->Object = pTVar18->Object;
            pTVar18->Object = (FElement *)0x0;
            pTVar8 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
            (this->TickerHandle).WeakReferenceCount.ReferenceController =
                 (pTVar18->WeakReferenceCount).ReferenceController;
            (pTVar18->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar3 = &pTVar8->WeakReferenceCount;
              aVar6 = *paVar3;
              *paVar3 = (atomic<int>)((int)*paVar3 + -1);
              UNLOCK();
              if (aVar6 == (atomic<int>)0x1) {
                (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
              }
            }
          }
          plVar11 = (longlong *)
                    CONCAT44(local_a8.WeakReferenceCount.ReferenceController._4_4_,
                             local_a8.WeakReferenceCount.ReferenceController._0_4_);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            piVar4 = (int *)((longlong)plVar11 + 0xc);
            iVar13 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                     (FWriteAccessScope *)&local_98);
          if ((local_e0.DelegateSize != 0) &&
             (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_e0,0,0,0x10);
            local_e0.DelegateSize = 0;
          }
          if (local_98.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
          }
          if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_e0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_e8);
        }
        this->MaxTimeWindowMs = param_5;
        local_res8[0] = 0.0;
        fVar19 = (float)((int)ROUND((float)this->NumChannelsToProvide * param_5 *
                                    (float)this->SampleRate * __real_3b03126f + __real_3f000000) >>
                        1);
        TArray<float,TSizedDefaultAllocator<32>_>::Init
                  (&this->AudioSamplesForView,local_res8,(int)fVar19);
        iVar13 = (this->AudioSamplesForView).ArrayNum;
        pFVar9 = (this->AudioSamplesForView).AllocatorInstance.Data;
        if (iVar13 < 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar12) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FWaveformAudioSamplesDataProvider *)(*pcVar10)();
            return pFVar17;
          }
        }
        local_b8 = this->NumChannelsToProvide;
        uStack_b4 = this->SampleRate;
        (this->DataView).SampleData.DataPtr = (float *)pFVar9;
        *(ulonglong *)&(this->DataView).SampleData.ArrayNum = CONCAT44(uStack_bc,iVar13);
        (this->DataView).NumDimensions = local_b8;
        (this->DataView).SampleRate = uStack_b4;
        local_c8 = pFVar9;
        iStack_c0 = iVar13;
        Audio::TCircularAudioBuffer<float,16>::SetCapacity
                  (&this->AudioSamplesCircularBuffer,(uint)(longlong)(fVar19 + fVar19));
        SetTimeWindow(this,param_4);
        uVar7 = this->TimeWindowSamples;
        this->AnalysisPeriodSamples =
             (uint)(longlong)((float)this->SampleRate * param_6 * __real_3a83126f);
        if ((this->AudioSamplesCircularBuffer).Capacity <= uVar7) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumSamples < Capacity",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                              ,0x45b,L"");
          if (bVar12) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FWaveformAudioSamplesDataProvider *)(*pcVar10)();
            return pFVar17;
          }
        }
        iVar13 = (this->AudioSamplesCircularBuffer).WriteCounter.Counter - uVar7;
        if (iVar13 < 0) {
          iVar13 = iVar13 + (this->AudioSamplesCircularBuffer).Capacity;
        }
        LOCK();
        (this->AudioSamplesCircularBuffer).ReadCounter.Counter = iVar13;
        UNLOCK();
      }
    }
  }
  return this;
}

// ~FWaveformAudioSamplesDataProvider @ 14d8bf560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::~FWaveformAudioSamplesDataProvider
          (FWaveformAudioSamplesDataProvider *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  longlong *plVar9;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar1 = &this->TickerHandle;
  this->_padding_ = (longlong)&___7FWaveformAudioSamplesDataProvider_AudioWidgets__6B_;
  if (((pTVar1->Object != (FElement *)0x0) &&
      (pTVar6 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount)) {
    local_28.Object = pTVar1->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar6 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FElement *)0x0;
      (this->TickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar6->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
    }
  }
  if (this->bIsProcessing != false) {
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->PatchOutput != (TSharedPtr<Audio::FPatchOutput,1> *)&local_38) {
      (this->PatchOutput).Object = (FPatchOutput *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PatchOutput).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    this->bIsProcessing = false;
  }
  pFVar7 = (this->AudioSamplesForView).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (this->AudioSamplesCircularBuffer).InternalBuffer.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (this->TempAudioBuffer).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PatchOutput).SharedReferenceCount.ReferenceController);
  pTVar6 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar6->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDataViewGenerated).field_0x8,*(int *)&(this->OnDataViewGenerated).field_0x10
            );
  pvVar8 = *(void **)&(this->OnDataViewGenerated).field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataViewGenerated);
  plVar9 = (longlong *)this->_padding_;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)plVar9 + 0xc);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  return;
}

// PushAudioSamplesToCircularBuffer @ 14d95cc00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::PushAudioSamplesToCircularBuffer
          (FWaveformAudioSamplesDataProvider *this)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  
  if (((this->PatchOutput).Object == (FPatchOutput *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = Audio::FPatchOutput::GetNumSamplesAvailable((this->PatchOutput).Object);
  if (0 < iVar7) {
    piVar1 = &(this->TempAudioBuffer).ArrayNum;
    piVar2 = &(this->TempAudioBuffer).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->TempAudioBuffer).AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,&(this->TempAudioBuffer).AllocatorInstance,piVar1,piVar2);
    if (((this->PatchOutput).Object == (FPatchOutput *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    Audio::FPatchOutput::PopAudio
              ((this->PatchOutput).Object,(float *)(this->TempAudioBuffer).AllocatorInstance.Data,
               iVar7,false);
    if (this->NumChannelsToProvide == 1) {
      iVar7 = *piVar1;
      uVar3 = this->NumChannels;
      pFVar4 = (this->TempAudioBuffer).AllocatorInstance.Data;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((iVar7 % (int)uVar3 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterleavedArray.Num() % NumChannels == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\DeinterleaveView.h"
                             ,0x91,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = (0 < (int)uVar3) - 1;
      if (0 < (int)uVar3) {
        iVar12 = (int)((longlong)iVar7 / (longlong)(int)uVar3);
        if (iVar13 != -1) goto LAB_14d95cdc9;
        if (-1 < iVar12) {
          iVar8 = local_38.ArrayMax;
          local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
          if (iVar8 < iVar12) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar12,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
          }
          while( true ) {
            if (iVar13 == this->ChannelIndexToAnalyze) {
              iVar8 = Audio::TCircularAudioBuffer<float,16>::Push
                                (&this->AudioSamplesCircularBuffer,
                                 (float *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
              this->NumSamplesPushedToCircularBuffer =
                   this->NumSamplesPushedToCircularBuffer + iVar8;
              if (((this->TriggerMode != None) &&
                  (iVar8 = FWaveformAudioSamplesDataProviderPrivate::GetTriggerThresholdBufferIndex
                                     (this->TriggerMode,this->TriggerThreshold,&local_38),
                  iVar8 != -1)) && (this->bHasTriggered == false)) {
                uVar17 = this->NumSamplesPushedToCircularBuffer - iVar8;
                if (((this->AudioSamplesCircularBuffer).Capacity <= uVar17) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("NumSamples < Capacity",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                                       ,0x45b,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar8 = (this->AudioSamplesCircularBuffer).WriteCounter.Counter - uVar17;
                if (iVar8 < 0) {
                  iVar8 = iVar8 + (this->AudioSamplesCircularBuffer).Capacity;
                }
                LOCK();
                (this->AudioSamplesCircularBuffer).ReadCounter.Counter = iVar8;
                UNLOCK();
                this->bHasTriggered = true;
              }
            }
            if (((iVar13 == -1) || (iVar13 = iVar13 + 1, (int)uVar3 <= iVar13)) || (iVar13 == -1))
            goto LAB_14d95cf89;
LAB_14d95cdc9:
            if (iVar12 < 0) break;
            iVar8 = local_38.ArrayMax;
            local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
            if (iVar8 < iVar12) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar12,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
            }
            if (0 < iVar12) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar12,&local_38.AllocatorInstance,&local_38.ArrayNum,
                         &local_38.ArrayMax);
            }
            lVar9 = 0;
            iVar16 = 0;
            iVar8 = iVar13;
            if (3 < iVar12) {
              uVar17 = (iVar12 - 4U >> 2) + 1;
              uVar15 = (ulonglong)uVar17;
              iVar16 = uVar17 * 4;
              lVar9 = (ulonglong)uVar17 * 4;
              pFVar14 = local_38.AllocatorInstance.Data + 8;
              do {
                iVar10 = iVar8 + uVar3 + uVar3;
                *(float *)(pFVar14 + -8) = *(float *)(pFVar4 + (longlong)iVar8 * 4);
                iVar11 = iVar10 + uVar3;
                *(float *)(pFVar14 + -4) = *(float *)(pFVar4 + (longlong)(int)(iVar8 + uVar3) * 4);
                iVar8 = iVar11 + uVar3;
                *(float *)pFVar14 = *(float *)(pFVar4 + (longlong)iVar10 * 4);
                *(float *)(pFVar14 + 4) = *(float *)(pFVar4 + (longlong)iVar11 * 4);
                uVar15 = uVar15 - 1;
                pFVar14 = pFVar14 + 0x10;
              } while (uVar15 != 0);
            }
            if (iVar16 < iVar12) {
              uVar15 = (ulonglong)(uint)(iVar12 - iVar16);
              pFVar14 = local_38.AllocatorInstance.Data + lVar9 * 4;
              do {
                lVar9 = (longlong)iVar8;
                iVar8 = iVar8 + uVar3;
                *(undefined4 *)pFVar14 = *(undefined4 *)(pFVar4 + lVar9 * 4);
                uVar15 = uVar15 - 1;
                pFVar14 = pFVar14 + 4;
              } while (uVar15 != 0);
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((longlong)iVar7 / (longlong)(int)uVar3 & 0xffffffff);
      }
LAB_14d95cf89:
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
    else {
      iVar7 = Audio::TCircularAudioBuffer<float,16>::Push
                        (&this->AudioSamplesCircularBuffer,
                         (float *)(this->TempAudioBuffer).AllocatorInstance.Data,*piVar1);
      this->NumSamplesPushedToCircularBuffer = this->NumSamplesPushedToCircularBuffer + iVar7;
    }
  }
  return;
}

// RequestSequenceView @ 14d964390

/* WARNING: Enum "Type": Some values do not have unique names */

FFixedSampledSequenceView * __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::RequestSequenceView
          (FWaveformAudioSamplesDataProvider *this,FFixedSampledSequenceView *__return_storage_ptr__
          ,TRange<double> *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  float *pfVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  FFixedSampledSequenceView *pFVar14;
  uint uVar15;
  longlong lVar16;
  FDestructionSentinel local_68;
  float *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  pfVar6 = (this->DataView).SampleData.DataPtr;
  uVar7 = *(undefined8 *)&(this->DataView).SampleData.ArrayNum;
  uVar2._0_4_ = (this->DataView).NumDimensions;
  uVar2._4_4_ = (this->DataView).SampleRate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDataViewGenerated,
             (FWriteAccessScope *)&local_68);
  puVar1 = &(this->OnDataViewGenerated).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar8 = false;
  uVar15 = *(int *)&(this->OnDataViewGenerated).field_0x10 - 1;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 << 4;
    bVar8 = false;
    do {
      uVar13 = 0;
      if ((int)uVar15 < *(int *)&(this->OnDataViewGenerated).field_0x10) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FFixedSampledSequenceView *)(*pcVar5)();
        return pFVar14;
      }
      lVar3 = *(longlong *)&(this->OnDataViewGenerated).field_0x8;
      if (((*(int *)(lVar3 + 8 + lVar16) == 0) ||
          (plVar4 = *(longlong **)(lVar3 + lVar16), plVar4 == (longlong *)0x0)) ||
         (local_48 = pfVar6, uStack_40 = uVar7, local_38 = uVar2,
         cVar12 = (**(code **)(*plVar4 + 0x68))(plVar4,&local_48,0), cVar12 == '\0')) {
        bVar8 = true;
      }
      lVar16 = lVar16 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  puVar1 = &(this->OnDataViewGenerated).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnDataViewGenerated,
               false);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  iVar9 = (this->DataView).SampleData.ArrayNum;
  uVar10 = *(undefined4 *)&(this->DataView).SampleData.field_0xc;
  uVar15 = (this->DataView).NumDimensions;
  uVar13 = (this->DataView).SampleRate;
  (__return_storage_ptr__->SampleData).DataPtr = (this->DataView).SampleData.DataPtr;
  (__return_storage_ptr__->SampleData).ArrayNum = iVar9;
  *(undefined4 *)&(__return_storage_ptr__->SampleData).field_0xc = uVar10;
  __return_storage_ptr__->NumDimensions = uVar15;
  __return_storage_ptr__->SampleRate = uVar13;
  return __return_storage_ptr__;
}

// ResetAudioBuffers @ 14d9645d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::ResetAudioBuffers
          (FWaveformAudioSamplesDataProvider *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float local_res8 [2];
  
  fVar5 = (float)((int)ROUND((float)this->SampleRate * this->MaxTimeWindowMs *
                             (float)this->NumChannelsToProvide * __real_3b03126f + __real_3f000000)
                 >> 1);
  Audio::TCircularAudioBuffer<float,16>::SetCapacity
            (&this->AudioSamplesCircularBuffer,(uint)(longlong)(fVar5 + fVar5));
  local_res8[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->AudioSamplesForView,local_res8,(int)fVar5);
  fVar4 = (float)this->TimeWindowSamples;
  if (fVar5 <= (float)this->TimeWindowSamples) {
    fVar4 = fVar5;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if ((this->AudioSamplesCircularBuffer).Capacity <= (uint)(longlong)fVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x45b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = (this->AudioSamplesCircularBuffer).WriteCounter.Counter - (uint)(longlong)fVar4;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (this->AudioSamplesCircularBuffer).Capacity;
  }
  LOCK();
  (this->AudioSamplesCircularBuffer).ReadCounter.Counter = iVar3;
  UNLOCK();
  return;
}

// SetAnalysisPeriod @ 14d967e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::SetAnalysisPeriod
          (FWaveformAudioSamplesDataProvider *this,float param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  uVar1 = this->TimeWindowSamples;
  this->AnalysisPeriodSamples =
       (uint)(longlong)((float)this->SampleRate * param_1 * __real_3a83126f);
  if ((this->AudioSamplesCircularBuffer).Capacity <= uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x45b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->AudioSamplesCircularBuffer).WriteCounter.Counter - uVar1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (this->AudioSamplesCircularBuffer).Capacity;
  }
  LOCK();
  (this->AudioSamplesCircularBuffer).ReadCounter.Counter = iVar4;
  UNLOCK();
  return;
}

// SetChannelToAnalyze @ 14d968510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::SetChannelToAnalyze
          (FWaveformAudioSamplesDataProvider *this,int param_1)

{
  if (param_1 + -1 != this->ChannelIndexToAnalyze) {
    this->ChannelIndexToAnalyze = param_1 + -1;
    ResetAudioBuffers(this);
    return;
  }
  return;
}

// SetMaxTimeWindowMs @ 14d969e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::SetMaxTimeWindowMs
          (FWaveformAudioSamplesDataProvider *this,float param_1)

{
  this->MaxTimeWindowMs = param_1;
  ResetAudioBuffers(this);
  return;
}

// SetTimeWindow @ 14d96de00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::SetTimeWindow
          (FWaveformAudioSamplesDataProvider *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_1c;
  
  iVar7 = (this->AudioSamplesForView).ArrayNum;
  pFVar4 = (this->AudioSamplesForView).AllocatorInstance.Data;
  this->TimeWindowSamples =
       (int)ROUND((float)this->NumChannelsToProvide * param_1 *
                  (float)this->SampleRate * __real_3b03126f + __real_3f000000) >> 1;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = this->TimeWindowSamples;
  if ((int)uVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iVar7 < (int)uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((int)uVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar2 = this->NumChannelsToProvide;
  uVar3 = this->SampleRate;
  uVar8 = this->TimeWindowSamples;
  (this->DataView).SampleData.DataPtr = (float *)pFVar4;
  *(ulonglong *)&(this->DataView).SampleData.ArrayNum = CONCAT44(uStack_1c,uVar1);
  (this->DataView).NumDimensions = uVar2;
  (this->DataView).SampleRate = uVar3;
  if (uVar2 != 1) {
    uVar8 = uVar8 - uVar8 % uVar2;
  }
  if ((this->AudioSamplesCircularBuffer).Capacity <= uVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x45b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->AudioSamplesCircularBuffer).WriteCounter.Counter - uVar8;
  if (iVar7 < 0) {
    iVar7 = iVar7 + (this->AudioSamplesCircularBuffer).Capacity;
  }
  LOCK();
  (this->AudioSamplesCircularBuffer).ReadCounter.Counter = iVar7;
  UNLOCK();
  return;
}

// SetTriggerMode @ 14d96e070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::SetTriggerMode
          (FWaveformAudioSamplesDataProvider *this,EAudioOscilloscopeTriggerMode param_1)

{
  this->TriggerMode = param_1;
  this->bHasTriggered = false;
  return;
}

// SetTriggerThreshold @ 14d96e160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::SetTriggerThreshold
          (FWaveformAudioSamplesDataProvider *this,float param_1)

{
  this->TriggerThreshold = param_1;
  this->bHasTriggered = false;
  return;
}

// StartProcessing @ 14d971850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::StartProcessing
          (FWaveformAudioSamplesDataProvider *this)

{
  uint uVar1;
  int iVar2;
  FMixerDevice *pFVar3;
  code *pcVar4;
  FAudioBusKey FVar5;
  FAudioBusKey FVar6;
  bool bVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UAudioBusSubsystem *this_00;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar10;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  TSharedPtr<Audio::FPatchOutput,1> local_38;
  FStringFormatArg local_28;
  
  if (this->bIsProcessing != false) {
    return;
  }
  if ((this->AudioBus == (UAudioBus *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioBus",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\WaveformAudioSamplesDataProvider.cpp"
                         ,0x79,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->MixerDevice == (FMixerDevice *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\WaveformAudioSamplesDataProvider.cpp"
                         ,0x7a,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ResetAudioBuffers(this);
  pFVar3 = this->MixerDevice;
  uVar1 = *(uint *)((longlong)&this->AudioBus->_padding_ + 4);
  pUVar8 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 != (UClass *)0x0) goto LAB_14d971909;
  }
  else if (pUVar8 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_14d971909:
    pUVar9 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
    if (pUVar9 != (UClass *)0x0) {
      iVar2 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar9->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) goto LAB_14d971939;
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_14d971939:
  this_00 = (UAudioBusSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pFVar3->field_0x228,pUVar8);
  if ((this_00 == (UAudioBusSubsystem *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioBusSubsystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\WaveformAudioSamplesDataProvider.cpp"
                         ,0x82,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FStringFormatArg::FStringFormatArg(&local_28,uVar1);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_58.AllocatorInstance,1,&local_58.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_58.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(&local_48,L"_WaveformAudioSamplesDataProvider_AudioBusId_{0}",&local_58);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FStringFormatArg *)local_58.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  FVar5.InstanceId = 0xffffffff;
  FVar5.ObjectId = uVar1;
  UAudioBusSubsystem::StartAudioBus(this_00,FVar5,&local_48,this->NumChannels,false);
  FVar6.InstanceId = 0xffffffff;
  FVar6.ObjectId = uVar1;
  pTVar10 = UAudioBusSubsystem::AddPatchOutputForAudioBus
                      (this_00,&local_38,FVar6,*(int *)&this->MixerDevice->field_0x8c,
                       this->NumChannels,__real_3f800000);
  if (&this->PatchOutput != pTVar10) {
    (this->PatchOutput).Object = pTVar10->Object;
    pTVar10->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PatchOutput).SharedReferenceCount,&pTVar10->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  this->bIsProcessing = true;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// StopProcessing @ 14d972360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::StopProcessing
          (FWaveformAudioSamplesDataProvider *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this->bIsProcessing != false) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->PatchOutput != (TSharedPtr<Audio::FPatchOutput,1> *)&local_18) {
      (this->PatchOutput).Object = (FPatchOutput *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PatchOutput).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    this->bIsProcessing = false;
  }
  return;
}

// Tick @ 14d975eb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::Tick
          (FWaveformAudioSamplesDataProvider *this,float param_1)

{
  TCircularAudioBuffer<float,16> *this_00;
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined7 uStack_57;
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId255,"FWaveformAudioSamplesDataProvider::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\WaveformAudioSamplesDataProvider.cpp"
               ,0xff);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId255);
  }
  if ((this->PatchOutput).Object != (FPatchOutput *)0x0) {
    PushAudioSamplesToCircularBuffer(this);
    this_00 = &this->AudioSamplesCircularBuffer;
    iVar7 = (this->AudioSamplesCircularBuffer).ReadCounter.Counter;
    iVar2 = (this->AudioSamplesCircularBuffer).WriteCounter.Counter;
    uVar9 = iVar2 - iVar7;
    if (iVar2 < iVar7) {
      uVar9 = uVar9 + (this->AudioSamplesCircularBuffer).Capacity;
    }
    if ((this->TriggerMode == None) || (this->bHasTriggered == false)) {
      if (this->TimeWindowSamples <= uVar9) {
        Audio::TCircularAudioBuffer<float,16>::Peek
                  (this_00,(float *)(this->AudioSamplesForView).AllocatorInstance.Data,
                   this->TimeWindowSamples);
        uVar9 = this->AnalysisPeriodSamples * this->NumChannelsToProvide;
        if ((0x7ffffffe < uVar9) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x43e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar7 = (this->AudioSamplesCircularBuffer).ReadCounter.Counter;
        puVar1 = &(this->AudioSamplesCircularBuffer).Capacity;
        iVar2 = (this->AudioSamplesCircularBuffer).WriteCounter.Counter;
        uVar8 = iVar2 - iVar7;
        if (iVar2 < iVar7) {
          uVar8 = uVar8 + *puVar1;
        }
        if ((int)uVar9 < (int)uVar8) {
          uVar8 = uVar9;
        }
        LOCK();
        (this->AudioSamplesCircularBuffer).ReadCounter.Counter =
             ((this->AudioSamplesCircularBuffer).ReadCounter.Counter + uVar8) % *puVar1;
        UNLOCK();
      }
    }
    else {
      pFVar3 = (this->AudioSamplesForView).AllocatorInstance.Data;
      if (uVar9 < this->TimeWindowSamples) {
        Audio::TCircularAudioBuffer<float,16>::Peek(this_00,(float *)pFVar3,uVar9);
      }
      else {
        iVar7 = Audio::TCircularAudioBuffer<float,16>::Peek(this_00,(float *)pFVar3,uVar9);
        if ((0x7ffffffe < uVar9) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x426,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        LOCK();
        (this->AudioSamplesCircularBuffer).ReadCounter.Counter =
             (uint)((this->AudioSamplesCircularBuffer).ReadCounter.Counter + iVar7) %
             (this->AudioSamplesCircularBuffer).Capacity;
        UNLOCK();
        this->bHasTriggered = false;
      }
    }
    if (this->AnalysisPeriodSamples * this->NumChannelsToProvide <=
        this->NumSamplesPushedToCircularBuffer) {
      local_78 = CONCAT71(local_78._1_7_,1);
      local_68 = (undefined4)CONCAT71(uStack_57,1);
      uStack_64 = (undefined4)((uint7)uStack_57 >> 0x18);
      local_28 = local_78;
      uStack_20 = 0;
      uStack_10 = (undefined4)__real_3ff0000000000000;
      uStack_c = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_18 = local_68;
      uStack_14 = uStack_64;
      (**(code **)(this->_padding_ + 8))(this,local_48,&local_28);
      this->NumSamplesPushedToCircularBuffer = 0;
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

