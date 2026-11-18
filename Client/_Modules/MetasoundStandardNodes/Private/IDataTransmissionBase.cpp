// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 42

// operator() @ 150560850

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TAudioReceiver<Metasound::FMonoAudioFormat>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TAudioReceiver<Metasound::FMonoAudioFormat>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505608ed;
    }
  }
  bVar4 = false;
LAB_1505608ed:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150560940

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TAudioReceiver<Metasound::FStereoAudioFormat>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TAudioReceiver<Metasound::FStereoAudioFormat>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505609dd;
    }
  }
  bVar4 = false;
LAB_1505609dd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150560a30

bool __thiscall
`Metasound::IDataTransmissionBase::CheckType<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150560acd;
    }
  }
  bVar4 = false;
LAB_150560acd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150560b20

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150560bbd;
    }
  }
  bVar4 = false;
LAB_150560bbd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150560c10

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'::
__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150560cad;
    }
  }
  bVar4 = false;
LAB_150560cad:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150560d00

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150560d9d;
    }
  }
  bVar4 = false;
LAB_150560d9d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150560df0

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>'::__l2
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150560e8d;
    }
  }
  bVar4 = false;
LAB_150560e8d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150560ee0

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150560f7d;
    }
  }
  bVar4 = false;
LAB_150560f7d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561290

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056132d;
    }
  }
  bVar4 = false;
LAB_15056132d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561380

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056141d;
    }
  }
  bVar4 = false;
LAB_15056141d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505614b0

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056154d;
    }
  }
  bVar4 = false;
LAB_15056154d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505615a0

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056163d;
    }
  }
  bVar4 = false;
LAB_15056163d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561690

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056172d;
    }
  }
  bVar4 = false;
LAB_15056172d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561780

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056181d;
    }
  }
  bVar4 = false;
LAB_15056181d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561870

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056190d;
    }
  }
  bVar4 = false;
LAB_15056190d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561960

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505619fd;
    }
  }
  bVar4 = false;
LAB_1505619fd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561a50

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150561aed;
    }
  }
  bVar4 = false;
LAB_150561aed:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561b40

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>'::
__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150561bdd;
    }
  }
  bVar4 = false;
LAB_150561bdd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561c30

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150561ccd;
    }
  }
  bVar4 = false;
LAB_150561ccd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561d20

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150561dbd;
    }
  }
  bVar4 = false;
LAB_150561dbd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561e10

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150561ead;
    }
  }
  bVar4 = false;
LAB_150561ead:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561f00

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150561f9d;
    }
  }
  bVar4 = false;
LAB_150561f9d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150561ff0

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'::__l2
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056208d;
    }
  }
  bVar4 = false;
LAB_15056208d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505620e0

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'::
__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056217d;
    }
  }
  bVar4 = false;
LAB_15056217d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505621d0

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056226d;
    }
  }
  bVar4 = false;
LAB_15056226d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505622c0

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056235d;
    }
  }
  bVar4 = false;
LAB_15056235d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505623b0

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056244d;
    }
  }
  bVar4 = false;
LAB_15056244d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505624a0

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056253d;
    }
  }
  bVar4 = false;
LAB_15056253d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562590

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056262d;
    }
  }
  bVar4 = false;
LAB_15056262d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562680

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056271d;
    }
  }
  bVar4 = false;
LAB_15056271d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562770

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>'::__l2
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056280d;
    }
  }
  bVar4 = false;
LAB_15056280d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562860

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505628fd;
    }
  }
  bVar4 = false;
LAB_1505628fd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562950

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505629ed;
    }
  }
  bVar4 = false;
LAB_1505629ed:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562a40

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150562add;
    }
  }
  bVar4 = false;
LAB_150562add:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562b30

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150562bcd;
    }
  }
  bVar4 = false;
LAB_150562bcd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562c20

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150562cbd;
    }
  }
  bVar4 = false;
LAB_150562cbd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562d50

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150562ded;
    }
  }
  bVar4 = false;
LAB_150562ded:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562e40

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'::__l2
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150562edd;
    }
  }
  bVar4 = false;
LAB_150562edd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150562f30

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TReceiver<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150562fcd;
    }
  }
  bVar4 = false;
LAB_150562fcd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150563020

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505630bd;
    }
  }
  bVar4 = false;
LAB_1505630bd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150563110

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505631ad;
    }
  }
  bVar4 = false;
LAB_1505631ad:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150563200

bool __thiscall
`Metasound::IDataTransmissionBase::
CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6140579446773514440>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514440>,
                       &`public:___cdecl_`public:_bool___cdecl_Metasound::IDataTransmissionBase::CheckType<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15056329d;
    }
  }
  bVar4 = false;
LAB_15056329d:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

