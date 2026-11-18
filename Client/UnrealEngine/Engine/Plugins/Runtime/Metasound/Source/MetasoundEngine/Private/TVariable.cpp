// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 27

// ~TVariable<WaveTable::FWaveTable> @ 14b34f930

void __thiscall
Metasound::TVariable<WaveTable::FWaveTable>::~TVariable<WaveTable::FWaveTable>
          (TVariable<WaveTable::FWaveTable> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b34f9b0

void __thiscall
Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b34fa30

void __thiscall
Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b34fab0

void __thiscall
Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b34fb30

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
~TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>(void *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if (*(char *)((longlong)this + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  }
  if (*(char *)((longlong)this + 0x38) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
  }
  bVar1 = *(byte *)((longlong)this + 0x10);
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)this + 8));
    return;
  case 6:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)this,*(int *)((longlong)this + 8));
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)this,*(int *)((longlong)this + 8));
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b34fbb0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
~TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>(void *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if (*(char *)((longlong)this + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  }
  if (*(char *)((longlong)this + 0x38) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
  }
  bVar1 = *(byte *)((longlong)this + 0x10);
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)this + 8));
    return;
  case 6:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)this,*(int *)((longlong)this + 8));
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)this,*(int *)((longlong)this + 8));
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::FAudioBusAsset> @ 14b34fc30

void __thiscall
Metasound::TVariable<Metasound::FAudioBusAsset>::~TVariable<Metasound::FAudioBusAsset>
          (TVariable<Metasound::FAudioBusAsset> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::FWaveAsset> @ 14b34fcb0

void __thiscall
Metasound::TVariable<Metasound::FWaveAsset>::~TVariable<Metasound::FWaveAsset>
          (TVariable<Metasound::FWaveAsset> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::FWaveTableBankAsset> @ 14b34fd30

void __thiscall
Metasound::TVariable<Metasound::FWaveTableBankAsset>::~TVariable<Metasound::FWaveTableBankAsset>
          (TVariable<Metasound::FWaveTableBankAsset> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// GetDelayedDataReference @ 14b3b3910

TDataReadReference<WaveTable::FWaveTable> * __thiscall
Metasound::TVariable<WaveTable::FWaveTable>::GetDelayedDataReference
          (TVariable<WaveTable::FWaveTable> *this,
          TDataReadReference<WaveTable::FWaveTable> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<WaveTable::FWaveTable> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b3b39c0

TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetDelayedDataReference
          (TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b3b3a70

TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetDelayedDataReference
          (TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b3b3b20

TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetDelayedDataReference
          (TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b3b3bd0

TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b3b3c80

TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
__thiscall
Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b3b3d30

TDataReadReference<Metasound::FAudioBusAsset> * __thiscall
Metasound::TVariable<Metasound::FAudioBusAsset>::GetDelayedDataReference
          (TVariable<Metasound::FAudioBusAsset> *this,
          TDataReadReference<Metasound::FAudioBusAsset> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::FAudioBusAsset> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b3b3de0

TDataReadReference<Metasound::FWaveAsset> * __thiscall
Metasound::TVariable<Metasound::FWaveAsset>::GetDelayedDataReference
          (TVariable<Metasound::FWaveAsset> *this,
          TDataReadReference<Metasound::FWaveAsset> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::FWaveAsset> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b3b3e90

TDataReadReference<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::TVariable<Metasound::FWaveTableBankAsset>::GetDelayedDataReference
          (TVariable<Metasound::FWaveTableBankAsset> *this,
          TDataReadReference<Metasound::FWaveTableBankAsset> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::FWaveTableBankAsset> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// InitDelayedDataReference @ 14b3c43f0

void __thiscall
Metasound::TVariable<WaveTable::FWaveTable>::InitDelayedDataReference
          (TVariable<WaveTable::FWaveTable> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<WaveTable::FWaveTable> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataWriteReference<WaveTable::FWaveTable>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<WaveTable::FWaveTable> *)local_28,param_1,
                        &this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_UFWaveTable_WaveTable___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b3c4470

void __thiscall
Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
InitDelayedDataReference
          (TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b3c44f0

void __thiscall
Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
InitDelayedDataReference
          (TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b3c4570

void __thiscall
Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
InitDelayedDataReference
          (TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b3c45f0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar2
  ;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         *)local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b3c4670

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         *)local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b3c46f0

void __thiscall
Metasound::TVariable<Metasound::FAudioBusAsset>::InitDelayedDataReference
          (TVariable<Metasound::FAudioBusAsset> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::FAudioBusAsset> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FAudioBusAsset> *)local_28,param_1,
                        &this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b3c4770

void __thiscall
Metasound::TVariable<Metasound::FWaveAsset>::InitDelayedDataReference
          (TVariable<Metasound::FWaveAsset> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::FWaveAsset> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataWriteReference<Metasound::FWaveAsset>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FWaveAsset> *)local_28,param_1,
                        &this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFWaveAsset_Metasound___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b3c47f0

void __thiscall
Metasound::TVariable<Metasound::FWaveTableBankAsset>::InitDelayedDataReference
          (TVariable<Metasound::FWaveTableBankAsset> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::FWaveTableBankAsset> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FWaveTableBankAsset> *)local_28,param_1,
                        &this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

