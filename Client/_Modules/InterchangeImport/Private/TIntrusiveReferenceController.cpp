// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 5

// DestroyObject @ 14e69a9c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>
              *this)

{
  TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_>::
  ~TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_>
            ((TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14e69a9d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TOptional<UE::Interchange::FMeshPayloadData>_>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<TOptional<UE::Interchange::FMeshPayloadData>_>,1>
              *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if ((this->ObjectStorage).Pad[0x68] != '\0') {
    TOptional<UE::Interchange::FMeshPayloadData>::~TOptional<UE::Interchange::FMeshPayloadData>
              ((TOptional<UE::Interchange::FMeshPayloadData> *)((this->ObjectStorage).Pad + 0x70));
  }
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014e69aa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e69aa40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>::
DestroyObject(TIntrusiveReferenceController<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>
              *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(this->ObjectStorage).Pad;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x68) == '\0')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14e69aaa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TPromise<TOptional<UE::Interchange::FMeshPayloadData>_>,1>::
DestroyObject(TIntrusiveReferenceController<TPromise<TOptional<UE::Interchange::FMeshPayloadData>_>,1>
              *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(this->ObjectStorage).Pad;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x68) == '\0')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14e69ab00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FInterchangeTaskLambda,1>::
DestroyObject(TIntrusiveReferenceController<UE::Interchange::FInterchangeTaskLambda,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x70) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x98);
    puVar2 = (this->ObjectStorage).Pad + 0x80;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  UE::Interchange::FInterchangeTaskBase::~FInterchangeTaskBase
            ((FInterchangeTaskBase *)&this->ObjectStorage);
  return;
}

