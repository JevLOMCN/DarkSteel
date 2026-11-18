// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 7

// DestroyObject @ 14315ca40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FArchiveWithDelegateV2,1>::DestroyObject
          (TIntrusiveReferenceController<FArchiveWithDelegateV2,1> *this)

{
  FArchiveWithDelegateV2::~FArchiveWithDelegateV2((FArchiveWithDelegateV2 *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14315ca50

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FTransactionallySafeHttpRequest::FClosedHttpRequest,1>::DestroyObject
          (TIntrusiveReferenceController<FTransactionallySafeHttpRequest::FClosedHttpRequest,1>
           *this)

{
  FTransactionallySafeHttpRequest::FClosedHttpRequest::~FClosedHttpRequest
            ((FClosedHttpRequest *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14315ca60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCurlHttpResponse,1>::DestroyObject
          (TIntrusiveReferenceController<FCurlHttpResponse,1> *this)

{
  FHttpResponseCommon::~FHttpResponseCommon((FHttpResponseCommon *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14315ca70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHttpTaskTimerHandleEventLoop,1>::
DestroyObject(TIntrusiveReferenceController<FHttpTaskTimerHandleEventLoop,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IHttpTaskTimerHandle__6B_;
  return;
}

// DestroyObject @ 14315ca90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHttpTaskTimerHandleFTSTicker,1>::
DestroyObject(TIntrusiveReferenceController<FHttpTaskTimerHandleFTSTicker,1> *this)

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
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IHttpTaskTimerHandle__6B_;
  return;
}

// DestroyObject @ 14315cae0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNullHttpRequest,1>::DestroyObject
          (TIntrusiveReferenceController<FNullHttpRequest,1> *this)

{
  FNullHttpRequest::~FNullHttpRequest((FNullHttpRequest *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14315caf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTransactionallySafeHttpRequest,1>::
DestroyObject(TIntrusiveReferenceController<FTransactionallySafeHttpRequest,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014315cb27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

