// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 11

// DestroyObject @ 142e70750

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<int,SharedPointerInternals::DefaultDeleter<int>,1>::DestroyObject
          (TReferenceControllerWithDeleter<int,SharedPointerInternals::DefaultDeleter<int>,1> *this)

{
  ::operator_delete(this->Object,4);
  return;
}

// DestroyObject @ 142e70770

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<WidgetReflectorImpl::FWidgetSnapshotTarget,SharedPointerInternals::DefaultDeleter<WidgetReflectorImpl::FWidgetSnapshotTarget>,1>
::DestroyObject(TReferenceControllerWithDeleter<WidgetReflectorImpl::FWidgetSnapshotTarget,SharedPointerInternals::DefaultDeleter<WidgetReflectorImpl::FWidgetSnapshotTarget>,1>
                *this)

{
  FWidgetSnapshotTarget *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWidgetSnapshotTarget *)0x0) {
    pIVar2 = (pFVar1->DisplayName).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    ::operator_delete(pFVar1,0x20);
    return;
  }
  return;
}

// DestroyObject @ 142e707b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonReader<wchar_t>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonReader<wchar_t>_>,1>
                *this)

{
  TJsonReader<wchar_t> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonReader<wchar_t> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e707c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142e707d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_>,1>
                *this)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e707e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142e707f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>_>,1>
                *this)

{
  TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e70801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142e70810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>_>,1>
                *this)

{
  TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e70821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142e70830

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FJsonValueArray,SharedPointerInternals::DefaultDeleter<FJsonValueArray>,1>
::DestroyObject(TReferenceControllerWithDeleter<FJsonValueArray,SharedPointerInternals::DefaultDeleter<FJsonValueArray>,1>
                *this)

{
  FJsonValueArray *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FJsonValueArray *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e70841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142e70850

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLiveWidgetReflectorNode,SharedPointerInternals::DefaultDeleter<FLiveWidgetReflectorNode>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLiveWidgetReflectorNode,SharedPointerInternals::DefaultDeleter<FLiveWidgetReflectorNode>,1>
                *this)

{
  FLiveWidgetReflectorNode *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLiveWidgetReflectorNode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e70861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142e70870

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateStyleSet,SharedPointerInternals::DefaultDeleter<FSlateStyleSet>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateStyleSet,SharedPointerInternals::DefaultDeleter<FSlateStyleSet>,1>
                *this)

{
  FSlateStyleSet *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateStyleSet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e70881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142e70890

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSnapshotWidgetReflectorNode,SharedPointerInternals::DefaultDeleter<FSnapshotWidgetReflectorNode>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSnapshotWidgetReflectorNode,SharedPointerInternals::DefaultDeleter<FSnapshotWidgetReflectorNode>,1>
                *this)

{
  FSnapshotWidgetReflectorNode *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSnapshotWidgetReflectorNode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e708a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142e708b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<WidgetReflectorImpl::SWidgetReflector,SharedPointerInternals::DefaultDeleter<WidgetReflectorImpl::SWidgetReflector>,1>
::DestroyObject(TReferenceControllerWithDeleter<WidgetReflectorImpl::SWidgetReflector,SharedPointerInternals::DefaultDeleter<WidgetReflectorImpl::SWidgetReflector>,1>
                *this)

{
  SWidgetReflector *pSVar1;
  
  pSVar1 = this->Object;
  if (pSVar1 != (SWidgetReflector *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142e708c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pSVar1->_padding_)(pSVar1,1);
    return;
  }
  return;
}

