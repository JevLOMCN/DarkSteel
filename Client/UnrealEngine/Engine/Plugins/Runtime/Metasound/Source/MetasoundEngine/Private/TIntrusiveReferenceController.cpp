// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 81

// DestroyObject @ 14b2c4ec0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FWaveTableBankAsset>::FFactory,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2c53a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<WaveTable::FWaveTable,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<WaveTable::FWaveTable,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2c5c30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2c6c60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2c81b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<WaveTable::FWaveTable>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<WaveTable::FWaveTable>::FFactory,1>
              *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2c90c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveAsset,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveAsset,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2c94f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2ca3f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,0>
                *this)

{
  Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14b2cac10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,0>
                *this)

{
  Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14b2cb400

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,0>
                *this)

{
  Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14b2cd740

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FWaveAsset>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FWaveAsset>::FFactory,1>
              *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2ce1d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FAudioBusAsset,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FAudioBusAsset,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2cefa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::FAudioBusAsset>,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TVariable<Metasound::FAudioBusAsset>,0> *this)

{
  Metasound::TVariable<Metasound::FAudioBusAsset>::~TVariable<Metasound::FAudioBusAsset>
            ((TVariable<Metasound::FAudioBusAsset> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b2cf840

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::FFactory,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2cfc80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariable<Metasound::FWaveAsset>,0>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<Metasound::FWaveAsset>,0> *this)

{
  Metasound::TVariable<Metasound::FWaveAsset>::~TVariable<Metasound::FWaveAsset>
            ((TVariable<Metasound::FWaveAsset> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b2d08d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2d0940

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariable<WaveTable::FWaveTable>,0>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<WaveTable::FWaveTable>,0> *this)

{
  Metasound::TVariable<WaveTable::FWaveTable>::~TVariable<WaveTable::FWaveTable>
            ((TVariable<WaveTable::FWaveTable> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b2d0e70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TVariable<Metasound::FWaveTableBankAsset>,0>
           *this)

{
  Metasound::TVariable<Metasound::FWaveTableBankAsset>::~TVariable<Metasound::FWaveTableBankAsset>
            ((TVariable<Metasound::FWaveTableBankAsset> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b2d1170

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2d1d20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
  ~TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b2d3330

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
  ~TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b2d4430

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FAudioBusAsset>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FAudioBusAsset>::FFactory,1>
              *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2d5910

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2d6130

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2d6d60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveTableBankAsset,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveTableBankAsset,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2d76a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<WaveTable::FWaveTable,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<WaveTable::FWaveTable,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2d7b00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveAsset,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveAsset,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2d7f00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::FFactory,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2d83d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FAudioBusAsset,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FAudioBusAsset,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2d8b80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2d8d90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FWavePlayerOperatorFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FWavePlayerOperatorFactory,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
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

// DestroyObject @ 14b2d9720

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2da690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FWaveAsset,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FWaveAsset,0> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14b2dcf20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2deaf0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::FFactory,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2df5a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b2df8c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>::
DestroyObject(TIntrusiveReferenceController<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>
              *this)

{
  void *pvVar1;
  
  DestructItems<Metasound::FAudioBusAsset,int>
            (*(FAudioBusAsset **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14b2e0a50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>::
DestroyObject(TIntrusiveReferenceController<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>
              *this)

{
  void *pvVar1;
  
  DestructItems<Metasound::FWaveAsset,int>
            (*(FWaveAsset **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14b2e1970

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,1>
::DestroyObject(void *this)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = *(byte *)((longlong)this + 0x28);
  plVar1 = (longlong *)((longlong)this + 0x18);
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
    return;
  case 6:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>((FString *)*plVar1,*(int *)((longlong)this + 0x20));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)*plVar1,*(int *)((longlong)this + 0x20));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2e1e50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>
::DestroyObject(TIntrusiveReferenceController<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>
                *this)

{
  void *pvVar1;
  
  DestructItems<Metasound::FWaveTableBankAsset,int>
            (*(FWaveTableBankAsset **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14b2e22c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,1>
::DestroyObject(void *this)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = *(byte *)((longlong)this + 0x28);
  plVar1 = (longlong *)((longlong)this + 0x18);
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
    return;
  case 6:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>((FString *)*plVar1,*(int *)((longlong)this + 0x20));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)*plVar1,*(int *)((longlong)this + 0x20));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2e2d90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FWaveTableBankAsset>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FWaveTableBankAsset>,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2e3560

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<WaveTable::FWaveTable>,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<WaveTable::FWaveTable>,1>
              *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2e35c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FAudioBusAsset,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FAudioBusAsset,0> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14b2e3760

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FWaveAsset>,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FWaveAsset>,1>
              *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2e42f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FAudioBusAsset>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FAudioBusAsset>,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2e5040

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2e9fa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2ea6d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2eac10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2eb2f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2ef150

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FWaveTableBankAsset,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::FWaveTableBankAsset,0> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14b2efe50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<WaveTable::FWaveTable,0>::DestroyObject
          (TIntrusiveReferenceController<WaveTable::FWaveTable,0> *this)

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

// DestroyObject @ 14b2f2250

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2f3fb0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2f5260

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2f60e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  uchar *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = (this->ObjectStorage).Pad[0x18];
  puVar1 = (this->ObjectStorage).Pad + 8;
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
    return;
  case 6:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = *(void **)puVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)puVar1,*(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)puVar1,
               *(int *)((this->ObjectStorage).Pad + 0x10));
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2f96a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FFactory,1>
::DestroyObject(void *this)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = *(byte *)((longlong)this + 0x28);
  plVar1 = (longlong *)((longlong)this + 0x18);
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
    return;
  case 6:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>((FString *)*plVar1,*(int *)((longlong)this + 0x20));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)*plVar1,*(int *)((longlong)this + 0x20));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2fb200

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2fdb80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FFactory,1>
::DestroyObject(void *this)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  void *pvVar5;
  
  bVar2 = *(byte *)((longlong)this + 0x28);
  plVar1 = (longlong *)((longlong)this + 0x18);
  if (0xc < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
    return;
  case 6:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>((FString *)*plVar1,*(int *)((longlong)this + 0x20));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)*plVar1,*(int *)((longlong)this + 0x20));
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar5 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
  }
  return;
}

// DestroyObject @ 14b2fe330

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveTableBankAsset,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FWaveTableBankAsset,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14b398530

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Engine::InputFormatFiveDotOneInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b398540

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Engine::InputFormatMonoInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b398550

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Engine::InputFormatQuadInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b398560

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Engine::InputFormatSevenDotOneInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b398570

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Engine::InputFormatStereoInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b398580

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Engine::OutputFormatFiveDotOneInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b398590

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Engine::OutputFormatMonoInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b3985a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Engine::OutputFormatQuadInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b3985b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Engine::OutputFormatSevenDotOneInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b3985c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Engine::OutputFormatStereoInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b3985d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TOutputStorage<int>,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TOutputStorage<int>,1> *this)

{
  return;
}

// DestroyObject @ 14b3985e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TOutputStorage<FString>,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TOutputStorage<FString>,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
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

// DestroyObject @ 14b398600

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TOutputStorage<bool>,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TOutputStorage<bool>,1> *this)

{
  return;
}

// DestroyObject @ 14b398610

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>,1>
::DestroyObject(TIntrusiveReferenceController<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>,1>
                *this)

{
  TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>::
  ~TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>
            ((TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14b398620

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::DynamicGraph::FDynamicOperatorTransactor,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::DynamicGraph::FDynamicOperatorTransactor,1>
           *this)

{
  Metasound::DynamicGraph::FDynamicOperatorTransactor::~FDynamicOperatorTransactor
            ((FDynamicOperatorTransactor *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b398630

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FGraph,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FGraph,1> *this)

{
  Metasound::FGraph::~FGraph((FGraph *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b398640

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FMetaSoundParameterTransmitter,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FMetaSoundParameterTransmitter,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x48));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  Audio::FParameterTransmitterBase::~FParameterTransmitterBase
            ((FParameterTransmitterBase *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b398680

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FMetasoundConstGraphGenerator,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FMetasoundConstGraphGenerator,1> *this)

{
  Metasound::FMetasoundConstGraphGenerator::~FMetasoundConstGraphGenerator
            ((FMetasoundConstGraphGenerator *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b398690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FMetasoundDynamicGraphGenerator,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::FMetasoundDynamicGraphGenerator,1> *this)

{
  Metasound::FMetasoundDynamicGraphGenerator::~FMetasoundDynamicGraphGenerator
            ((FMetasoundDynamicGraphGenerator *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b3986a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FMetasoundGeneratorHandle,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FMetasoundGeneratorHandle,1> *this)

{
  Metasound::FMetasoundGeneratorHandle::~FMetasoundGeneratorHandle
            ((FMetasoundGeneratorHandle *)&this->ObjectStorage);
  return;
}

