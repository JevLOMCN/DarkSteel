// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 183

// DestroyObject @ 14ad6b0b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,1>
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

// DestroyObject @ 14ad6b990

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::Frontend::FAnalyzerAddress,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::Frontend::FAnalyzerAddress,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14ad6e590

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FSendAddress,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FSendAddress,0> *this)

{
  return;
}

// DestroyObject @ 14ad6fe80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14ad70180

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FCoverterOperatorFactory,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14ad702f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ad70db0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14ad732d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::FFactory,1>
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

// DestroyObject @ 14ad739a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14ad77040

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>,1>
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

// DestroyObject @ 14ad773f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l3::FEnumHandler,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14ad77650

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::Frontend::FAnalyzerAddress>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::Frontend::FAnalyzerAddress>,1>
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

// DestroyObject @ 14ad78010

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>,0>
              *this)

{
  Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>::
  ~TVariable<Metasound::Frontend::FAnalyzerAddress>
            ((TVariable<Metasound::Frontend::FAnalyzerAddress> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ad787c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>,0>
::DestroyObject(void *this)

{
  Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
  ~TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
            ((void *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14ad79aa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,1>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14ad7a4a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FAnalyzerAddress,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FAnalyzerAddress,0> *this)

{
  return;
}

// DestroyObject @ 14ad7a530

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,0>::
DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14ad7bb20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,0>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>,0>
                *this)

{
  Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ad7bd50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::FFactory,1>
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

// DestroyObject @ 14ad7bed0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FNodeClassMetadata_const_,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FNodeClassMetadata_const_,1> *this)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata((FNodeClassMetadata *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ad7c320

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>
::DestroyObject(TIntrusiveReferenceController<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>
                *this)

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

// DestroyObject @ 14ad7db40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<int,0>::DestroyObject
          (TIntrusiveReferenceController<int,0> *this)

{
  return;
}

// DestroyObject @ 14ad7e010

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::Frontend::FAnalyzerAddress>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::Frontend::FAnalyzerAddress>::FFactory,1>
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

// DestroyObject @ 14ad7e5c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FString,0>::DestroyObject
          (TIntrusiveReferenceController<FString,0> *this)

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

// DestroyObject @ 14ad7e6f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FNodeFacade::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FNodeFacade::FFactory,1> *this)

{
  return;
}

// DestroyObject @ 14ad7e9f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,0>,1>
::DestroyObject(void *this)

{
  return;
}

// DestroyObject @ 14adb64f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentController_const_,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentController_const_,1> *this)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  longlong *plVar4;
  uchar *puVar5;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar3 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar5 = (this->ObjectStorage).Pad + 0x40;
    if (puVar3 != (uchar *)0x0) {
      puVar5 = puVar3;
    }
    (**(code **)(*(longlong *)puVar5 + 0x10))();
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014adb653a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14adb6550

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<float,0>::DestroyObject
          (TIntrusiveReferenceController<float,0> *this)

{
  return;
}

// DestroyObject @ 14adb6560

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FAccessToken,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FAccessToken,1> *this)

{
  return;
}

// DestroyObject @ 14adb6570

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::SourceInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14adb6580

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::SourceInterfaceV1_0::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14adb6590

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::SourceOneShotInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14adb65a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::SourceStartTimeInterface::CreateInterface'::__l2::FInterface,1>
::DestroyObject(void *this)

{
  Audio::FParameterInterface::~FParameterInterface((FParameterInterface *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14adb65b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FNodeClassMetadata,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::FNodeClassMetadata,1> *this)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata((FNodeClassMetadata *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14adb65c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TOutputStorage<float>,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TOutputStorage<float>,1> *this)

{
  return;
}

// DestroyObject @ 14adb65d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TOutputStorage<Metasound::FAudioBuffer>,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TOutputStorage<Metasound::FAudioBuffer>,1> *this
          )

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

// DestroyObject @ 14adb65f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TOutputStorage<Metasound::FTime>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TOutputStorage<Metasound::FTime>,1> *this)

{
  return;
}

// DestroyObject @ 14adb6600

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<Metasound::Frontend::FInterfaceRegistryTransaction,int>
            (*(FInterfaceRegistryTransaction **)((this->ObjectStorage).Pad + 0x40),
             *(int *)((this->ObjectStorage).Pad + 0x48));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014adb663a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14adb6650

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FDocumentController,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FDocumentController,1> *this)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  longlong *plVar4;
  uchar *puVar5;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar3 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar5 = (this->ObjectStorage).Pad + 0x40;
    if (puVar3 != (uchar *)0x0) {
      puVar5 = puVar3;
    }
    (**(code **)(*(longlong *)puVar5 + 0x10))();
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014adb669a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14adb66b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInvalidDocumentController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FInvalidDocumentController,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014adb66d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14adb66e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInvalidGraphController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FInvalidGraphController,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014adb6700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14adb6710

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInvalidInputController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FInvalidInputController,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014adb6730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14adb6740

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FInvalidNodeController,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FInvalidNodeController,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014adb6760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14adb6770

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInvalidOutputController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FInvalidOutputController,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014adb6790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14adb67a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInvalidVariableController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FInvalidVariableController,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014adb67c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14adb67d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMetasoundAssetProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FMetasoundAssetProxy,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14adb6810

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FTime,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FTime,0> *this)

{
  return;
}

// DestroyObject @ 14adf6530

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentModifyDelegates,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentModifyDelegates,1> *this)

{
  Metasound::Frontend::FDocumentModifyDelegates::~FDocumentModifyDelegates
            ((FDocumentModifyDelegates *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae305e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache_const_,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache_const_,1> *this)

{
  Metasound::Frontend::FDocumentCache::~FDocumentCache((FDocumentCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae305f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache::FDocumentDependencyCache,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache::FDocumentDependencyCache,1>
              *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ae3063a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14ae30650

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache,1> *this)

{
  Metasound::Frontend::FDocumentCache::~FDocumentCache((FDocumentCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae30660

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphEdgeCache,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphEdgeCache,1> *this)

{
  Metasound::Frontend::FDocumentGraphEdgeCache::~FDocumentGraphEdgeCache
            ((FDocumentGraphEdgeCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae30670

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphInterfaceCache,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *this)

{
  Metasound::Frontend::FDocumentGraphInterfaceCache::~FDocumentGraphInterfaceCache
            ((FDocumentGraphInterfaceCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae30680

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphNodeCache,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphNodeCache,1> *this)

{
  Metasound::Frontend::FDocumentGraphNodeCache::~FDocumentGraphNodeCache
            ((FDocumentGraphNodeCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae30690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FGraphController,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FGraphController,1> *this)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  longlong *plVar4;
  uchar *puVar5;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x68));
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar3 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar5 = (this->ObjectStorage).Pad + 0x40;
    if (puVar3 != (uchar *)0x0) {
      puVar5 = puVar3;
    }
    (**(code **)(*(longlong *)puVar5 + 0x10))();
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ae306e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14ae30700

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FVariableController,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FVariableController,1> *this)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  longlong *plVar4;
  uchar *puVar5;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x68));
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar3 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar5 = (this->ObjectStorage).Pad + 0x40;
    if (puVar3 != (uchar *)0x0) {
      puVar5 = puVar3;
    }
    (**(code **)(*(longlong *)puVar5 + 0x10))();
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ae30753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14ae6cdf0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInputNodeController_const_,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FInputNodeController_const_,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x100) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x128);
    puVar2 = (this->ObjectStorage).Pad + 0x110;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0xc0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xe8);
    puVar2 = (this->ObjectStorage).Pad + 0xd0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseNodeController::~FBaseNodeController
            ((FBaseNodeController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6ce60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FNodeController_const_,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FNodeController_const_,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0xc0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xe8);
    puVar2 = (this->ObjectStorage).Pad + 0xd0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseNodeController::~FBaseNodeController
            ((FBaseNodeController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6cea0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeController_const_,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeController_const_,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x100) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x128);
    puVar2 = (this->ObjectStorage).Pad + 0x110;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0xc0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xe8);
    puVar2 = (this->ObjectStorage).Pad + 0xd0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseNodeController::~FBaseNodeController
            ((FBaseNodeController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6cf10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FSubgraphNodeController_const_,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FSubgraphNodeController_const_,1>
           *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0xc0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xe8);
    puVar2 = (this->ObjectStorage).Pad + 0xd0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseNodeController::~FBaseNodeController
            ((FBaseNodeController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6cf50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FVariableNodeController_const_,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FVariableNodeController_const_,1>
           *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0xc0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xe8);
    puVar2 = (this->ObjectStorage).Pad + 0xd0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseNodeController::~FBaseNodeController
            ((FBaseNodeController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6cf90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>,1>
::DestroyObject(TIntrusiveReferenceController<TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int>
            (*(TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
               **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14ae6cfd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>,1>
                *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014ae6cffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d010

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FBaseInputController,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FBaseInputController,1> *this)

{
  Metasound::Frontend::FBaseInputController::~FBaseInputController
            ((FBaseInputController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d020

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FBaseOutputController,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FBaseOutputController,1> *this)

{
  Metasound::Frontend::FBaseOutputController::~FBaseOutputController
            ((FBaseOutputController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d030

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FInputNodeController,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FInputNodeController,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x100) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x128);
    puVar2 = (this->ObjectStorage).Pad + 0x110;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0xc0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xe8);
    puVar2 = (this->ObjectStorage).Pad + 0xd0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseNodeController::~FBaseNodeController
            ((FBaseNodeController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d0a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInputNodeInputController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FInputNodeInputController,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x110) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x138);
    puVar2 = (this->ObjectStorage).Pad + 0x120;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseInputController::~FBaseInputController
            ((FBaseInputController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d0e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FInputNodeOutputController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FInputNodeOutputController,1> *this)

{
  uchar *puVar1;
  longlong *plVar2;
  uchar *puVar3;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x120) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x148);
    puVar3 = (this->ObjectStorage).Pad + 0x130;
    if (puVar1 != (uchar *)0x0) {
      puVar3 = puVar1;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
  plVar2 = *(longlong **)((this->ObjectStorage).Pad + 0x100);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseOutputController::~FBaseOutputController
            ((FBaseOutputController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d140

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FNodeController,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FNodeController,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0xc0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xe8);
    puVar2 = (this->ObjectStorage).Pad + 0xd0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseNodeController::~FBaseNodeController
            ((FBaseNodeController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d180

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeController,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeController,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x100) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x128);
    puVar2 = (this->ObjectStorage).Pad + 0x110;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0xc0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xe8);
    puVar2 = (this->ObjectStorage).Pad + 0xd0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseNodeController::~FBaseNodeController
            ((FBaseNodeController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d1f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeInputController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeInputController,1> *this)

{
  uchar *puVar1;
  longlong *plVar2;
  uchar *puVar3;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x120) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x148);
    puVar3 = (this->ObjectStorage).Pad + 0x130;
    if (puVar1 != (uchar *)0x0) {
      puVar3 = puVar1;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
  plVar2 = *(longlong **)((this->ObjectStorage).Pad + 0x100);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseInputController::~FBaseInputController
            ((FBaseInputController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d250

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeOutputController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FOutputNodeOutputController,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x110) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x138);
    puVar2 = (this->ObjectStorage).Pad + 0x120;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseOutputController::~FBaseOutputController
            ((FBaseOutputController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d290

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FSubgraphNodeController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FSubgraphNodeController,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0xc0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xe8);
    puVar2 = (this->ObjectStorage).Pad + 0xd0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseNodeController::~FBaseNodeController
            ((FBaseNodeController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d2d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FVariableInputController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FVariableInputController,1> *this)

{
  Metasound::Frontend::FBaseInputController::~FBaseInputController
            ((FBaseInputController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d2e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FVariableNodeController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FVariableNodeController,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0xc0) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0xe8);
    puVar2 = (this->ObjectStorage).Pad + 0xd0;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  Metasound::Frontend::FBaseNodeController::~FBaseNodeController
            ((FBaseNodeController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae6d320

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FVariableOutputController,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::Frontend::FVariableOutputController,1> *this)

{
  Metasound::Frontend::FBaseOutputController::~FBaseOutputController
            ((FBaseOutputController *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae94630

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae95b40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::FTrigger,float>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae95de0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<FMetasoundParameterStorageWrapper>,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<FMetasoundParameterStorageWrapper>,0>
              *this)

{
  Metasound::TVariable<FMetasoundParameterStorageWrapper>::
  ~TVariable<FMetasoundParameterStorageWrapper>
            ((TVariable<FMetasoundParameterStorageWrapper> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae95e90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::FTrigger,int>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae967a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariable<bool>,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TVariable<bool>,0> *this)

{
  Metasound::TVariable<bool>::~TVariable<bool>((TVariable<bool> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae96940

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae96dc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariable<int>,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TVariable<int>,0> *this)

{
  Metasound::TVariable<int>::~TVariable<int>((TVariable<int> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae97730

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariable<float>,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TVariable<float>,0> *this)

{
  Metasound::TVariable<float>::~TVariable<float>((TVariable<float> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae977a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<FString,FString>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<FString,FString>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae97b20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariable<FString>,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<FString>,0> *this)

{
  Metasound::TVariable<FString>::~TVariable<FString>((TVariable<FString> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae97d60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,0>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,0>
                *this)

{
  Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae98890

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariableNode<FString>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<FString>::FFactory,1> *this)

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

// DestroyObject @ 14ae988f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::FFactory,1>
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

// DestroyObject @ 14ae98c60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<float,float>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<float,float>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae98da0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariable<Metasound::FTrigger>,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<Metasound::FTrigger>,0> *this)

{
  Metasound::TVariable<Metasound::FTrigger>::~TVariable<Metasound::FTrigger>
            ((TVariable<Metasound::FTrigger> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae98fb0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>,0>
              *this)

{
  Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae99a00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae99af0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariable<Metasound::FTime>,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<Metasound::FTime>,0> *this)

{
  Metasound::TVariable<Metasound::FTime>::~TVariable<Metasound::FTime>
            ((TVariable<Metasound::FTime> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae99d20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>,0>
              *this)

{
  Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae99d30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<float,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<float,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae9a0a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,float>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,float>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae9a2b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::FSendAddress>,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TVariable<Metasound::FSendAddress>,0> *this)

{
  Metasound::TVariable<Metasound::FSendAddress>::~TVariable<Metasound::FSendAddress>
            ((TVariable<Metasound::FSendAddress> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae9a510

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>,0>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>,0>
              *this)

{
  Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae9a870

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<FString,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<FString,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae9aab0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<float,int>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<float,int>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae9ad50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::FAudioBuffer>,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TVariable<Metasound::FAudioBuffer>,0> *this)

{
  Metasound::TVariable<Metasound::FAudioBuffer>::~TVariable<Metasound::FAudioBuffer>
            ((TVariable<Metasound::FAudioBuffer> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae9ae50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>,0>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>,0>
                *this)

{
  Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae9b250

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,int>::FCoverterOperatorFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,int>::FCoverterOperatorFactory,1>
              *this)

{
  return;
}

// DestroyObject @ 14ae9b260

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>
::DestroyObject(TIntrusiveReferenceController<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>
                *this)

{
  void *pvVar1;
  
  DestructItems<FMetasoundParameterStorageWrapper,int>
            (*(FMetasoundParameterStorageWrapper **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14ae9b5b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,0>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,0>
                *this)

{
  Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae9b890

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<bool,TSizedDefaultAllocator<32>_>,0>::
DestroyObject(TIntrusiveReferenceController<TArray<bool,TSizedDefaultAllocator<32>_>,0> *this)

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

// DestroyObject @ 14ae9bc80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,0>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,0>
                *this)

{
  Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
  ~TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
            ((TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14ae9c150

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<bool,float>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<bool,float>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae9c180

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<int,TSizedDefaultAllocator<32>_>,0>::
DestroyObject(TIntrusiveReferenceController<TArray<int,TSizedDefaultAllocator<32>_>,0> *this)

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

// DestroyObject @ 14ae9cb10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<bool,int>::FCoverterOperatorFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<bool,int>::FCoverterOperatorFactory,1>
              *this)

{
  return;
}

// DestroyObject @ 14ae9cbe0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<float,TSizedDefaultAllocator<32>_>,0>::
DestroyObject(TIntrusiveReferenceController<TArray<float,TSizedDefaultAllocator<32>_>,0> *this)

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

// DestroyObject @ 14ae9db40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<float,bool>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<float,bool>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae9dbe0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<FString,TSizedDefaultAllocator<32>_>,0>
::DestroyObject(TIntrusiveReferenceController<TArray<FString,TSizedDefaultAllocator<32>_>,0> *this)

{
  void *pvVar1;
  
  DestructItems<FString,int>
            (*(FString **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14ae9e080

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,bool>::FCoverterOperatorFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,bool>::FCoverterOperatorFactory,1>
              *this)

{
  return;
}

// DestroyObject @ 14ae9e090

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0>::DestroyObject
          (TIntrusiveReferenceController<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0>
           *this)

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

// DestroyObject @ 14ae9e4f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<bool,bool>::FCoverterOperatorFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TAutoConverterNode<bool,bool>::FCoverterOperatorFactory,1>
                *this)

{
  return;
}

// DestroyObject @ 14ae9e500

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0>::
DestroyObject(TIntrusiveReferenceController<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0>
              *this)

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

// DestroyObject @ 14aea0d60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariableNode<float>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<float>::FFactory,1> *this)

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

// DestroyObject @ 14aea0e50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>,1>
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

// DestroyObject @ 14aea1150

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<FString,TSizedDefaultAllocator<32>_>_>::FFactory,1>
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

// DestroyObject @ 14aea1440

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<int,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<int,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aea1db0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>,1>
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

// DestroyObject @ 14aea2880

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<FString,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<FString,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aea3180

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<float,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<float,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aea3340

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>_>,1>
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

// DestroyObject @ 14aea43f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>_>,1>
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

// DestroyObject @ 14aea4d10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>_>,1>
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

// DestroyObject @ 14aea5ee0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>_>,1>
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

// DestroyObject @ 14aea6f60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FAudioBuffer>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FAudioBuffer>,1>
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

// DestroyObject @ 14aea7500

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>,1>
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

// DestroyObject @ 14aea7950

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FSendAddress>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FSendAddress>,1>
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

// DestroyObject @ 14aea89a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariableNode<int>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<int>::FFactory,1> *this)

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

// DestroyObject @ 14aea8b10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FTime>,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FTime>,1>
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

// DestroyObject @ 14aea9a30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FTrigger>,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::FTrigger>,1>
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

// DestroyObject @ 14aea9d50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<bool,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<bool,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aeaacb0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<FString>,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<FString>,1> *this
          )

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

// DestroyObject @ 14aeab200

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<float,TSizedDefaultAllocator<32>_>_>::FFactory,1>
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

// DestroyObject @ 14aeac900

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<float>,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<float>,1> *this)

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

// DestroyObject @ 14aeacb30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<float,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<float,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aead0e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<int>,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<int>,1> *this)

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

// DestroyObject @ 14aead550

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<int,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<int,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aead670

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<bool>,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<bool>,1> *this)

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

// DestroyObject @ 14aeae4e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<FMetasoundParameterStorageWrapper>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<FMetasoundParameterStorageWrapper>,1>
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

// DestroyObject @ 14aeb2710

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FTrigger,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FTrigger,0> *this)

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

// DestroyObject @ 14aeb2730

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::TVariableNode<bool>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<bool>::FFactory,1> *this)

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

// DestroyObject @ 14aeb3730

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FMetasoundParameterStorageWrapper,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FMetasoundParameterStorageWrapper,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aeb5540

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<int,TSizedDefaultAllocator<32>_>_>::FFactory,1>
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

// DestroyObject @ 14aeb5e30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<int,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<int,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aeb6550

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<bool,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<bool,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aebc360

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<FMetasoundParameterStorageWrapper>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<FMetasoundParameterStorageWrapper>::FFactory,1>
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

// DestroyObject @ 14aebd310

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FAudioBuffer,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FAudioBuffer,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aebdd60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FSendAddress,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FSendAddress,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aebe740

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FTime,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FTime,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aebf220

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<bool,TSizedDefaultAllocator<32>_>_>::FFactory,1>
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

// DestroyObject @ 14aebf280

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FTrigger,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FTrigger,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aebfac0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FString,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FString,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aebfb50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<bool,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<bool,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aec0cf0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<float,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<float,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aec0e20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aec1b10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<int,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<int,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aec24a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<bool,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<bool,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aec2fb0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FMetasoundParameterStorageWrapper,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FMetasoundParameterStorageWrapper,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aecb970

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::FFactory,1>
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

// DestroyObject @ 14aecc7e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aecd7d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FAudioBuffer>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FAudioBuffer>::FFactory,1>
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

// DestroyObject @ 14aece420

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FSendAddress,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FSendAddress,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aed7e80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FSendAddress>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FSendAddress>::FFactory,1>
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

// DestroyObject @ 14aed96c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FTime,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::FTime,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aedfe70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aee0410

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FTime>::FFactory,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FTime>::FFactory,1>
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

// DestroyObject @ 14aee1490

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMetasoundParameterStorageWrapper,0>::
DestroyObject(TIntrusiveReferenceController<FMetasoundParameterStorageWrapper,0> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14aee15e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<bool,0>::DestroyObject
          (TIntrusiveReferenceController<bool,0> *this)

{
  return;
}

// DestroyObject @ 14aee6470

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::FFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::FFactory,1>
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

// DestroyObject @ 14aee6a10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FTrigger>::FFactory,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::FTrigger>::FFactory,1>
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

// DestroyObject @ 14aee6bf0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aee85d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FString,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<FString,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14aee8700

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1>,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1>,1>
                *this)

{
  return;
}

// DestroyObject @ 14af87180

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMetasoundParameterPackStorage,1>::
DestroyObject(TIntrusiveReferenceController<FMetasoundParameterPackStorage,1> *this)

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

// DestroyObject @ 14af871a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::NodeRegistrationPrivate::FDeprecatedNodeAPIFactory,1>
::DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::NodeRegistrationPrivate::FDeprecatedNodeAPIFactory,1>
                *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((this->ObjectStorage).Pad + 8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014af871b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14af871c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FGraphNode::FGraphOperatorFactoryAdapter,1>::
DestroyObject(TIntrusiveReferenceController<Metasound::Frontend::FGraphNode::FGraphOperatorFactoryAdapter,1>
              *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
  return;
}

// DestroyObject @ 14af871d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMetasoundParameterPackProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FMetasoundParameterPackProxy,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
  return;
}

// DestroyObject @ 14af871e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::OutputNodePrivate::FOutputOperatorFactory,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::OutputNodePrivate::FOutputOperatorFactory,1>
           *this)

{
  return;
}

