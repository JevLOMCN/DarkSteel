// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 15

// DestroyObject @ 1464fb160

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Audio::FModulationDestination::FModulationDestinationData,1>::
DestroyObject(TIntrusiveReferenceController<Audio::FModulationDestination::FModulationDestinationData,1>
              *this)

{
  void *pvVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x120));
  Audio::FModulationParameter::~FModulationParameter
            ((FModulationParameter *)((this->ObjectStorage).Pad + 0x70));
  (this->ObjectStorage).Pad[0x68] = '\0';
  (this->ObjectStorage).Pad[0x69] = '\0';
  (this->ObjectStorage).Pad[0x6a] = '\0';
  (this->ObjectStorage).Pad[0x6b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x20));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// DestroyObject @ 1464fb1d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<float,TAlignedHeapAllocator<16>_>,1>::
DestroyObject(TIntrusiveReferenceController<TArray<float,TAlignedHeapAllocator<16>_>,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 1464fb1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FMixerAudioBus,1>::DestroyObject
          (TIntrusiveReferenceController<Audio::FMixerAudioBus,1> *this)

{
  Audio::FMixerAudioBus::~FMixerAudioBus((FMixerAudioBus *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1464fb200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FMixerSubmix,1>::DestroyObject
          (TIntrusiveReferenceController<Audio::FMixerSubmix,1> *this)

{
  Audio::FMixerSubmix::~FMixerSubmix((FMixerSubmix *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146552560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FPersistentQuartzSubsystemData,1>::
DestroyObject(TIntrusiveReferenceController<Audio::FPersistentQuartzSubsystemData,1> *this)

{
  void *pvVar1;
  
  DestructItems<Audio::FQuartzClockProxy,int>
            (*(FQuartzClockProxy **)((this->ObjectStorage).Pad + 0x80),
             *(int *)((this->ObjectStorage).Pad + 0x88));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x80);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<Audio::FQuartzClockProxy,int>
            (*(FQuartzClockProxy **)((this->ObjectStorage).Pad + 0x70),
             *(int *)((this->ObjectStorage).Pad + 0x78));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x70);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  Audio::FQuartzClockManager::~FQuartzClockManager((FQuartzClockManager *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1465525c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FQuartzTickableObjectsManager,1>::
DestroyObject(TIntrusiveReferenceController<FQuartzTickableObjectsManager,1> *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  puVar2 = *(undefined8 **)((this->ObjectStorage).Pad + 8);
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((this->ObjectStorage).Pad + 8) = *puVar2;
    ::operator_delete(puVar2,0x10);
    puVar2 = *(undefined8 **)((this->ObjectStorage).Pad + 8);
  }
  return;
}

// DestroyObject @ 146552610

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1>
::DestroyObject(TIntrusiveReferenceController<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1>
                *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(this->ObjectStorage).Pad != 0) {
    LOCK();
    puVar1 = *(undefined8 **)(this->ObjectStorage).Pad;
    *(undefined8 *)(this->ObjectStorage).Pad = 0;
    UNLOCK();
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      puVar3 = (undefined8 *)puVar1[1];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      FMemory::Free(puVar1);
      puVar1 = puVar2;
    }
  }
  return;
}

// DestroyObject @ 146552670

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FAsyncSpectrumAnalyzer,1>::
DestroyObject(TIntrusiveReferenceController<Audio::FAsyncSpectrumAnalyzer,1> *this)

{
  Audio::FAsyncSpectrumAnalyzer::~FAsyncSpectrumAnalyzer
            ((FAsyncSpectrumAnalyzer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146552680

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedNotify,1>::DestroyObject
          (TIntrusiveReferenceController<Audio::FQuantizedNotify,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x48));
  Audio::IQuartzQuantizedCommand::~IQuartzQuantizedCommand
            ((IQuartzQuantizedCommand *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1465526b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedOtherClockStart,1>::
DestroyObject(TIntrusiveReferenceController<Audio::FQuantizedOtherClockStart,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x48));
  Audio::IQuartzQuantizedCommand::~IQuartzQuantizedCommand
            ((IQuartzQuantizedCommand *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1465526e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedPlayCommand,1>::DestroyObject
          (TIntrusiveReferenceController<Audio::FQuantizedPlayCommand,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x48);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FQuantizedPlayCommand_Audio__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  Audio::IQuartzQuantizedCommand::~IQuartzQuantizedCommand
            ((IQuartzQuantizedCommand *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146552710

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedQueueCommand,1>::
DestroyObject(TIntrusiveReferenceController<Audio::FQuantizedQueueCommand,1> *this)

{
  void *pvVar1;
  
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            (*(FQuartzGameThreadSubscriber **)((this->ObjectStorage).Pad + 0xa0),
             *(int *)((this->ObjectStorage).Pad + 0xa8));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0xa0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x80));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x48));
  Audio::IQuartzQuantizedCommand::~IQuartzQuantizedCommand
            ((IQuartzQuantizedCommand *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146552770

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedTickRateChange,1>::
DestroyObject(TIntrusiveReferenceController<Audio::FQuantizedTickRateChange,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x78));
  Audio::IQuartzQuantizedCommand::~IQuartzQuantizedCommand
            ((IQuartzQuantizedCommand *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1465527a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuantizedTransportReset,1>::
DestroyObject(TIntrusiveReferenceController<Audio::FQuantizedTransportReset,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x48));
  Audio::IQuartzQuantizedCommand::~IQuartzQuantizedCommand
            ((IQuartzQuantizedCommand *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1465527d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FQuartzClock,1>::DestroyObject
          (TIntrusiveReferenceController<Audio::FQuartzClock,1> *this)

{
  Audio::FQuartzClock::~FQuartzClock((FQuartzClock *)&this->ObjectStorage);
  return;
}

