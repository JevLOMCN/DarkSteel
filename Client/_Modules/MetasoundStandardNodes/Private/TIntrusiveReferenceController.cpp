// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 200

// DestroyObject @ 14afc2310

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afc4100

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FFactory,1>
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

// DestroyObject @ 14afc7330

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FStereoAudioFormat>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FStereoAudioFormat>::FFactory,1>
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

// DestroyObject @ 14afc9520

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FMonoAudioFormat>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FMonoAudioFormat>::FFactory,1>
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

// DestroyObject @ 14afc9800

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afc9b30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afc9ec0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afca1b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afca200

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afca210

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afca2a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afca3a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afca750

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afcab30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14afcb1d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14afcbe40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14afcc100

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14afcc3c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14afcc6f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14afcd290

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::FInputOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::FInputOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14afce850

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,0>::DestroyObject
          (void *this)

{
  return;
}

// DestroyObject @ 14afcf750

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TOutputNode<Metasound::FStereoAudioFormat,0>::FOutputOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TOutputNode<Metasound::FStereoAudioFormat,0>::FOutputOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14afcfbe0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FStereoAudioFormat,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::FStereoAudioFormat,0> *this)

{
  void *pvVar1;
  
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            (*(TDataReadReference<Metasound::FAudioBuffer> **)((this->ObjectStorage).Pad + 0x30),
             *(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            (*(TDataWriteReference<Metasound::FAudioBuffer> **)((this->ObjectStorage).Pad + 0x20),
             *(int *)((this->ObjectStorage).Pad + 0x28));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14afd0220

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FMonoAudioFormat,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FMonoAudioFormat,0> *this)

{
  void *pvVar1;
  
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            (*(TDataReadReference<Metasound::FAudioBuffer> **)((this->ObjectStorage).Pad + 0x30),
             *(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            (*(TDataWriteReference<Metasound::FAudioBuffer> **)((this->ObjectStorage).Pad + 0x20),
             *(int *)((this->ObjectStorage).Pad + 0x28));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14afd2790

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::FMonoAudioFormat>,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TVariable<Metasound::FMonoAudioFormat>,0> *this)

{
  Metasound::TVariable<Metasound::FMonoAudioFormat>::~TVariable<Metasound::FMonoAudioFormat>
            ((TVariable<Metasound::FMonoAudioFormat> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14afd2970

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::FStereoAudioFormat>,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TVariable<Metasound::FStereoAudioFormat>,0>
           *this)

{
  Metasound::TVariable<Metasound::FStereoAudioFormat>::~TVariable<Metasound::FStereoAudioFormat>
            ((TVariable<Metasound::FStereoAudioFormat> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14afd3080

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14afd3090

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>,1>
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

// DestroyObject @ 14afd3510

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
  ~TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14afd4690

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>,1>
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

// DestroyObject @ 14afd4df0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FStereoAudioFormat>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FStereoAudioFormat>,1>
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

// DestroyObject @ 14afd5690

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FMonoAudioFormat>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FMonoAudioFormat>,1>
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

// DestroyObject @ 14afd8390

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afda730

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afda960

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14afdc620

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TInputNode<Metasound::FStereoAudioFormat,0>::FInputOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TInputNode<Metasound::FStereoAudioFormat,0>::FInputOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14afdda80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FFactory,1>
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

// DestroyObject @ 14afddae0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TOutputNode<Metasound::FMonoAudioFormat,0>::FOutputOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TOutputNode<Metasound::FMonoAudioFormat,0>::FOutputOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14b0345f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>::DestroyObject
          (void *this)

{
  return;
}

// DestroyObject @ 14b037080

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,1>
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

// DestroyObject @ 14b039870

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b03a1b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b03a410

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b03a6a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b03a870

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b03b560

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FFactory,1>
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

// DestroyObject @ 14b03b9b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b03f680

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
  ~TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b040820

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b069e90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b07cd60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::EKneeMode,0>,0>::DestroyObject
          (void *this)

{
  return;
}

// DestroyObject @ 14b080df0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0821f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b083970

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0873f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>,1>
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

// DestroyObject @ 14b087b80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>,1>
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

// DestroyObject @ 14b087e00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>,1>
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

// DestroyObject @ 14b087fc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b088240

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>,1>
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

// DestroyObject @ 14b08a110

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b08afe0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b08c900

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FFactory,1>
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

// DestroyObject @ 14b08d070

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b08daf0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b08dc00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b08df00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b08e700

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b08ea70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b08ef50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FFactory,1>
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

// DestroyObject @ 14b08f460

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b090360

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b090430

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b090580

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b091b90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FFactory,1>
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

// DestroyObject @ 14b092870

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b094630

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,0>::DestroyObject
          (void *this)

{
  return;
}

// DestroyObject @ 14b095e90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FFactory,1>
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

// DestroyObject @ 14b0960d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0967b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0970e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b097e30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0989f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b098b20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
  ~TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b098f20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b0992f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b0e7ec0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0eb240

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FFactory,1>
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

// DestroyObject @ 14b0eb4a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0eb8a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0ec360

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0ef030

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FFactory,1>
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

// DestroyObject @ 14b0ef4d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0effc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,0>::DestroyObject
          (void *this)

{
  return;
}

// DestroyObject @ 14b0f2b50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f2b90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FFactory,1>
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

// DestroyObject @ 14b0f30e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f3f70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f58d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f5930

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f5af0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f5c10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f5e20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f6340

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f64d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f6520

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f6c80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f7fd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f8100

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f8170

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f84f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f8a80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f8bb0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f9080

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f94a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f9850

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f98c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0f9d30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0fa260

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0fa5e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0fb210

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>,1>
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

// DestroyObject @ 14b0fb450

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>,1>
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

// DestroyObject @ 14b0fb660

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::ENoiseType,0>,0>::DestroyObject
          (void *this)

{
  return;
}

// DestroyObject @ 14b0fb9e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>,1>
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

// DestroyObject @ 14b0fc1f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>,1>
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

// DestroyObject @ 14b0fc380

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>,1>
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

// DestroyObject @ 14b0fc6d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>,1>
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

// DestroyObject @ 14b0fde60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b0ff1b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>,1>
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

// DestroyObject @ 14b1054f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b106530

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b108bd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b10b1e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FFactory,1>
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

// DestroyObject @ 14b10b530

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b10b640

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b10baa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b10d950

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FFactory,1>
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

// DestroyObject @ 14b10e1a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b10f020

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b10fca0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
  ~TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>((void *)((longlong)this + 0x10))
  ;
  return;
}

// DestroyObject @ 14b1104e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b110850

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b110860

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FFactory,1>
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

// DestroyObject @ 14b110cd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b111380

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b111470

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b111770

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b111a30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b111b20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b113cd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b113ea0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FFactory,1>
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

// DestroyObject @ 14b1804c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FSawOscilatorNode::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FSawOscilatorNode::FFactory,1> *this)

{
  return;
}

// DestroyObject @ 14b1804d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FSineOscilatorNode::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FSineOscilatorNode::FFactory,1> *this)

{
  return;
}

// DestroyObject @ 14b1804e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FSquareOscilatorNode::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FSquareOscilatorNode::FFactory,1> *this)

{
  return;
}

// DestroyObject @ 14b1804f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FTriangleOscilatorNode::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::FTriangleOscilatorNode::FFactory,1> *this)

{
  return;
}

// DestroyObject @ 14b1abbe0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b1abee0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FFactory,1>
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

// DestroyObject @ 14b1ac640

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1ae220

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FFactory,1>
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

// DestroyObject @ 14b1af580

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1af710

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1b2fb0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>::DestroyObject
          (void *this)

{
  return;
}

// DestroyObject @ 14b1b4b70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>::DestroyObject
          (void *this)

{
  return;
}

// DestroyObject @ 14b1b6090

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1b6500

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1b6550

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1b6600

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1b8090

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1b8c70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,1>
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

// DestroyObject @ 14b1b9480

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,1>
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

// DestroyObject @ 14b1ba4c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1ba540

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1bb930

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>((void *)((longlong)this + 0x10))
  ;
  return;
}

// DestroyObject @ 14b1ebcf0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>,1>
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

// DestroyObject @ 14b1ec0f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1ec310

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1ec680

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1ecb90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1ecf60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1ed320

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1f0d30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>,1>
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

// DestroyObject @ 14b1f1320

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>,1>
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

// DestroyObject @ 14b1f6f70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1f7280

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1fa140

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FFactory,1>
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

// DestroyObject @ 14b1fa880

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1fc6a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b1fcc20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b1fd2b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
  ~TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14b1fd500

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b1fdb40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FFactory,1>
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

// DestroyObject @ 14b1fea70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b203120

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FFactory,1>
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

// DestroyObject @ 14b2037f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b204380

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b204940

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b2053d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b205ca0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b20a060

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14b210180

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,0>::DestroyObject
          (void *this)

{
  return;
}

// DestroyObject @ 14b29dfb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FNumberedFileCache,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FNumberedFileCache,1> *this)

{
  Metasound::FNumberedFileCache::~FNumberedFileCache((FNumberedFileCache *)&this->ObjectStorage);
  return;
}

