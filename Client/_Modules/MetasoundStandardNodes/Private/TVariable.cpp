// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 63

// ~TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14affc0b0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
~TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14affc130

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
~TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>(void *this)

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

// ~TVariable<Metasound::FMonoAudioFormat> @ 14affc1b0

void __thiscall
Metasound::TVariable<Metasound::FMonoAudioFormat>::~TVariable<Metasound::FMonoAudioFormat>
          (TVariable<Metasound::FMonoAudioFormat> *this)

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

// ~TVariable<Metasound::FStereoAudioFormat> @ 14affc230

void __thiscall
Metasound::TVariable<Metasound::FStereoAudioFormat>::~TVariable<Metasound::FStereoAudioFormat>
          (TVariable<Metasound::FStereoAudioFormat> *this)

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

// GetDelayedDataReference @ 14b024510

TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b0245c0

TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b024670

TDataReadReference<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TVariable<Metasound::FMonoAudioFormat>::GetDelayedDataReference
          (TVariable<Metasound::FMonoAudioFormat> *this,
          TDataReadReference<Metasound::FMonoAudioFormat> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::FMonoAudioFormat> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::FMonoAudioFormat> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b024720

TDataReadReference<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TVariable<Metasound::FStereoAudioFormat>::GetDelayedDataReference
          (TVariable<Metasound::FStereoAudioFormat> *this,
          TDataReadReference<Metasound::FStereoAudioFormat> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::FStereoAudioFormat> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::FStereoAudioFormat> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// InitDelayedDataReference @ 14b02ac10

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                         *)local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b02ac90

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::InitDelayedDataReference
          (void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)
                        local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b02ad10

void __thiscall
Metasound::TVariable<Metasound::FMonoAudioFormat>::InitDelayedDataReference
          (TVariable<Metasound::FMonoAudioFormat> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::FMonoAudioFormat> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<Metasound::FMonoAudioFormat,Metasound::TDataWriteReference<Metasound::FMonoAudioFormat>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FMonoAudioFormat> *)local_28,param_1,
                        &this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b02ad90

void __thiscall
Metasound::TVariable<Metasound::FStereoAudioFormat>::InitDelayedDataReference
          (TVariable<Metasound::FStereoAudioFormat> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::FStereoAudioFormat> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<Metasound::FStereoAudioFormat,Metasound::TDataWriteReference<Metasound::FStereoAudioFormat>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FStereoAudioFormat> *)local_28,param_1,
                        &this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// ~TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b0547a0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
~TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void *this)

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

// GetDelayedDataReference @ 14b073960

TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *__return_storage_ptr__
          )

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// InitDelayedDataReference @ 14b077b10

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::InitDelayedDataReference
          (void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
                        local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// ~TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b5a90

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
~TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b5b10

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b5b90

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b5c10

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
~TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>(void *this)

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

// GetDelayedDataReference @ 14b0d63d0

TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b0d6480

TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b0d6530

TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b0d65e0

TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// InitDelayedDataReference @ 14b0e2540

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::InitDelayedDataReference
          (void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)
                        local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b0e25c0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                        local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b0e2640

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::InitDelayedDataReference
          (void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *)local_28,
                        param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataWriteReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b0e26c0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                         *)local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// ~TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b144670

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b1446f0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b144770

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b1447f0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
~TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b144870

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b1448f0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b144970

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
~TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>(void *this)

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

// GetDelayedDataReference @ 14b191770

TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b191820

TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b1918d0

TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar2)()
      ;
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(*pcVar2)()
      ;
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b191980

TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b191a30

TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b191ae0

TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b191b90

TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// InitDelayedDataReference @ 14b19a9e0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)
                        local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b19aa60

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::InitDelayedDataReference
          (void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *)local_28,
                        param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataWriteReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b19aae0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)
                        local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b19ab60

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)
                        local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b19abe0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>
                         *)local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b19ac60

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>
                         *)local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b19ace0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)
                        local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// ~TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cfa50

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1cfad0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void *this)

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

// GetDelayedDataReference @ 14b1e2460

TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b1e2510

TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// InitDelayedDataReference @ 14b1e7df0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::InitDelayedDataReference
          (void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_28
                        ,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b1e7e70

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                        local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// ~TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b237330

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b2373b0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
~TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>(void *this)

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

// ~TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b237430

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
~TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>(void *this)

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

// GetDelayedDataReference @ 14b27a3d0

TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar2)()
      ;
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(*pcVar2)()
      ;
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b27a480

TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14b27a530

TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar2)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// InitDelayedDataReference @ 14b287760

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)
                        local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b2877e0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>
                         *)local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14b287860

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::InitDelayedDataReference
          (void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)local_28
                        ,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &___7__TDataWriteReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

